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
typedef frost$collections$ListView* (*$fn143)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$String* (*$fn146)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn154)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn158)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn173)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn181)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn185)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn252)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn258)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn271)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn279)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn283)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn291)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn296)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn300)(frost$core$Object*);
typedef frost$core$Error* (*$fn345)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn357)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn369)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn381)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn389)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn394)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn403)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn415)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn421)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn429)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn434)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn438)(frost$core$Object*);
typedef frost$core$Error* (*$fn476)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn490)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn502)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn518)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn529)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn537)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn541)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn549)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn554)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn564)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn568)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn573)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn595)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn606)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn620)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn644)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn663)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn676)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn697)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn705)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn709)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn714)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn721)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn729)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn751)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn758)(frost$core$Object*);
typedef frost$core$Object* (*$fn860)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Error* (*$fn867)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn876)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Error* (*$fn882)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn893)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn910)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn925)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn940)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn950)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn959)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn972)(org$frostlang$frostc$StubCodeGenerator$_Closure12*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn980)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn984)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn992)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1010)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1027)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1042)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1055)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1059)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1064)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1078)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1092)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1103)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1107)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1112)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1121)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1125)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1130)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1139)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1143)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1148)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1157)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1161)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1166)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1174)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1187)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 38, 5549150769695652918, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 7580368616763478972, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 8523082171760740322, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 578299168842724610, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 7588087188392006392, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 4850958444317981178, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, -6503404126614323964, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, -1568754217983211905, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 8604313941350852984, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 6240486548179417074, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 645223143103797797, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 645223143103797797, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, 8050544140155638463, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 4078896108040932673, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, -3042048522538760153, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, -8457991779168398576, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 8239240588283385762, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1040 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1071 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s1176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Int $tmp131 = (frost$core$Int) {0u};
frost$core$Object* $tmp132 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp130, $tmp131);
frost$core$String* $tmp133 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp132));
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp133, &$s135);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:35:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp136 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp137 = *$tmp136;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Int $tmp138 = (frost$core$Int) {1u};
frost$core$Bit $tmp139 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp140 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp138, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp139);
ITable* $tmp141 = ((frost$collections$ListView*) $tmp137)->$class->itable;
while ($tmp141->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[2];
frost$collections$ListView* $tmp144 = $tmp142(((frost$collections$ListView*) $tmp137), $tmp140);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure4));
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp145 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp145, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp147 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:35:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp148 = &$tmp147->pointer;
*$tmp148 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Object** $tmp149 = &$tmp147->target;
frost$core$Object* $tmp150 = *$tmp149;
frost$core$Frost$unref$frost$core$Object$Q($tmp150);
frost$core$Object** $tmp151 = &$tmp147->target;
*$tmp151 = ((frost$core$Object*) $tmp145);
ITable* $tmp152 = ((frost$collections$CollectionView*) $tmp144)->$class->itable;
while ($tmp152->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp152 = $tmp152->next;
}
$fn154 $tmp153 = $tmp152->methods[9];
frost$collections$Array* $tmp155 = $tmp153(((frost$collections$CollectionView*) $tmp144), $tmp147);
ITable* $tmp156 = ((frost$collections$CollectionView*) $tmp155)->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[3];
frost$core$String* $tmp159 = $tmp157(((frost$collections$CollectionView*) $tmp155), &$s160);
frost$core$String* $tmp161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp134, $tmp159);
frost$core$String* $tmp162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp161, &$s163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q($tmp132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
return $tmp162;
block10:;
frost$core$Int $tmp164 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:37:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp165 = $tmp95.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:38
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:38:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp170 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp171 = *$tmp170;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure6));
org$frostlang$frostc$StubCodeGenerator$_Closure6* $tmp172 = (org$frostlang$frostc$StubCodeGenerator$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure6$class);
org$frostlang$frostc$StubCodeGenerator$_Closure6$init$org$frostlang$frostc$StubCodeGenerator($tmp172, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp174 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:38:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp175 = &$tmp174->pointer;
*$tmp175 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure6$$anonymous5$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Object** $tmp176 = &$tmp174->target;
frost$core$Object* $tmp177 = *$tmp176;
frost$core$Frost$unref$frost$core$Object$Q($tmp177);
frost$core$Object** $tmp178 = &$tmp174->target;
*$tmp178 = ((frost$core$Object*) $tmp172);
ITable* $tmp179 = ((frost$collections$CollectionView*) $tmp171)->$class->itable;
while ($tmp179->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp179 = $tmp179->next;
}
$fn181 $tmp180 = $tmp179->methods[9];
frost$collections$Array* $tmp182 = $tmp180(((frost$collections$CollectionView*) $tmp171), $tmp174);
ITable* $tmp183 = ((frost$collections$CollectionView*) $tmp182)->$class->itable;
while ($tmp183->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[3];
frost$core$String* $tmp186 = $tmp184(((frost$collections$CollectionView*) $tmp182), &$s187);
frost$core$String* $tmp188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s189, $tmp186);
frost$core$String* $tmp190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp188, &$s191);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
return $tmp190;
block17:;
frost$core$Int $tmp192 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:40:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp193 = $tmp95.value;
int64_t $tmp194 = $tmp192.value;
bool $tmp195 = $tmp193 == $tmp194;
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:41
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:41:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp198 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp199 = *$tmp198;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Int $tmp200 = (frost$core$Int) {0u};
frost$core$Object* $tmp201 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp199, $tmp200);
frost$core$String* $tmp202 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp201));
frost$core$String* $tmp203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp202, &$s204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q($tmp201);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
return $tmp203;
block22:;
frost$core$Int $tmp205 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:43:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp206 = $tmp95.value;
int64_t $tmp207 = $tmp205.value;
bool $tmp208 = $tmp206 == $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:44
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:44:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp211 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp212 = *$tmp211;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$String* $tmp213 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp212), &$s214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
return $tmp213;
block26:;
frost$core$Int $tmp215 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:46:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp216 = $tmp95.value;
int64_t $tmp217 = $tmp215.value;
bool $tmp218 = $tmp216 == $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:47
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:47:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp221 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp222 = *$tmp221;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$String* $tmp223 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp222), &$s224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
return $tmp223;
block30:;
frost$core$Int $tmp225 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:49:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp226 = $tmp95.value;
int64_t $tmp227 = $tmp225.value;
bool $tmp228 = $tmp226 == $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:50
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:50:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp231 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp232 = *$tmp231;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$String* $tmp233 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp232), &$s234);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
return $tmp233;
block34:;
frost$core$Int $tmp235 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:52:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp236 = $tmp95.value;
int64_t $tmp237 = $tmp235.value;
bool $tmp238 = $tmp236 == $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:53
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:53:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp241 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp242 = *$tmp241;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$String* $tmp243 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp242), &$s244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
return $tmp243;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:56
frost$core$String** $tmp245 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp246 = *$tmp245;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
return $tmp246;
block1:;
goto block41;
block41:;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:62
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:63
frost$io$OutputStream** $tmp247 = &param0->out;
frost$io$OutputStream* $tmp248 = *$tmp247;
frost$core$String** $tmp249 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp250 = *$tmp249;
$fn252 $tmp251 = ($fn252) $tmp248->$class->vtable[17];
frost$core$Error* $tmp253 = $tmp251($tmp248, $tmp250);
if ($tmp253 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local0) = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:64
frost$collections$Array** $tmp254 = &param1->fields;
frost$collections$Array* $tmp255 = *$tmp254;
ITable* $tmp256 = ((frost$collections$CollectionView*) $tmp255)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Int $tmp259 = $tmp257(((frost$collections$CollectionView*) $tmp255));
frost$core$Int $tmp260 = (frost$core$Int) {0u};
int64_t $tmp261 = $tmp259.value;
int64_t $tmp262 = $tmp260.value;
bool $tmp263 = $tmp261 > $tmp262;
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:65
frost$io$OutputStream** $tmp266 = &param0->out;
frost$io$OutputStream* $tmp267 = *$tmp266;
frost$collections$Array** $tmp268 = &param1->fields;
frost$collections$Array* $tmp269 = *$tmp268;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure8));
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp270 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp270, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp272 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:65:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp273 = &$tmp272->pointer;
*$tmp273 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Object** $tmp274 = &$tmp272->target;
frost$core$Object* $tmp275 = *$tmp274;
frost$core$Frost$unref$frost$core$Object$Q($tmp275);
frost$core$Object** $tmp276 = &$tmp272->target;
*$tmp276 = ((frost$core$Object*) $tmp270);
ITable* $tmp277 = ((frost$collections$CollectionView*) $tmp269)->$class->itable;
while ($tmp277->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp277 = $tmp277->next;
}
$fn279 $tmp278 = $tmp277->methods[9];
frost$collections$Array* $tmp280 = $tmp278(((frost$collections$CollectionView*) $tmp269), $tmp272);
ITable* $tmp281 = ((frost$collections$CollectionView*) $tmp280)->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[3];
frost$core$String* $tmp284 = $tmp282(((frost$collections$CollectionView*) $tmp280), &$s285);
frost$core$String* $tmp286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s287, $tmp284);
frost$core$String* $tmp288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp286, &$s289);
$fn291 $tmp290 = ($fn291) $tmp267->$class->vtable[17];
frost$core$Error* $tmp292 = $tmp290($tmp267, $tmp288);
if ($tmp292 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local0) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:68
frost$io$OutputStream** $tmp293 = &param0->out;
frost$io$OutputStream* $tmp294 = *$tmp293;
$fn296 $tmp295 = ($fn296) $tmp294->$class->vtable[21];
frost$core$Error* $tmp297 = $tmp295($tmp294);
if ($tmp297 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local0) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
goto block6;
block6:;
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:72
frost$core$Error* $tmp298 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:72:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn300 $tmp299 = ($fn300) ((frost$core$Object*) $tmp298)->$class->vtable[0];
frost$core$String* $tmp301 = $tmp299(((frost$core$Object*) $tmp298));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp301);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:73
frost$core$Int $tmp302 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp302);
goto block2;
block2:;
frost$core$Error* $tmp303 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:78
org$frostlang$frostc$Annotations** $tmp304 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp305 = *$tmp304;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:78:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int* $tmp306 = &$tmp305->flags;
frost$core$Int $tmp307 = *$tmp306;
frost$core$Int $tmp308 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309 & $tmp310;
frost$core$Int $tmp312 = (frost$core$Int) {$tmp311};
frost$core$Int $tmp313 = (frost$core$Int) {0u};
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313.value;
bool $tmp316 = $tmp314 != $tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:79
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:81
frost$core$Weak** $tmp319 = &param0->compiler;
frost$core$Weak* $tmp320 = *$tmp319;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:81:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp321 = &$tmp320->_valid;
frost$core$Bit $tmp322 = *$tmp321;
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block9; else goto block10;
block10:;
frost$core$Int $tmp324 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s325, $tmp324);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp326 = &$tmp320->value;
frost$core$Object* $tmp327 = *$tmp326;
frost$core$Frost$ref$frost$core$Object$Q($tmp327);
frost$core$Bit $tmp328 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp327), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:81:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp329 = $tmp328.value;
bool $tmp330 = !$tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
bool $tmp332 = $tmp331.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp327);
if ($tmp332) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:82
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:84
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:85
org$frostlang$frostc$FieldDecl$Kind* $tmp333 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp334 = *$tmp333;
frost$core$Int $tmp335 = $tmp334.$rawValue;
frost$core$Int $tmp336 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:86:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336.value;
bool $tmp339 = $tmp337 == $tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:86
frost$io$OutputStream** $tmp342 = &param0->out;
frost$io$OutputStream* $tmp343 = *$tmp342;
$fn345 $tmp344 = ($fn345) $tmp343->$class->vtable[17];
frost$core$Error* $tmp346 = $tmp344($tmp343, &$s347);
if ($tmp346 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local0) = $tmp346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
goto block12;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
goto block14;
block16:;
frost$core$Int $tmp348 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:87:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp349 = $tmp335.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 == $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:87
frost$io$OutputStream** $tmp354 = &param0->out;
frost$io$OutputStream* $tmp355 = *$tmp354;
$fn357 $tmp356 = ($fn357) $tmp355->$class->vtable[17];
frost$core$Error* $tmp358 = $tmp356($tmp355, &$s359);
if ($tmp358 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local0) = $tmp358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
goto block12;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
goto block14;
block21:;
frost$core$Int $tmp360 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:88:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp361 = $tmp335.value;
int64_t $tmp362 = $tmp360.value;
bool $tmp363 = $tmp361 == $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:88
frost$io$OutputStream** $tmp366 = &param0->out;
frost$io$OutputStream* $tmp367 = *$tmp366;
$fn369 $tmp368 = ($fn369) $tmp367->$class->vtable[17];
frost$core$Error* $tmp370 = $tmp368($tmp367, &$s371);
if ($tmp370 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local0) = $tmp370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
goto block12;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
goto block14;
block26:;
frost$core$Int $tmp372 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:89:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp373 = $tmp335.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 == $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block30; else goto block14;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:89
frost$io$OutputStream** $tmp378 = &param0->out;
frost$io$OutputStream* $tmp379 = *$tmp378;
$fn381 $tmp380 = ($fn381) $tmp379->$class->vtable[17];
frost$core$Error* $tmp382 = $tmp380($tmp379, &$s383);
if ($tmp382 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local0) = $tmp382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
goto block12;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:91
frost$io$OutputStream** $tmp384 = &param0->out;
frost$io$OutputStream* $tmp385 = *$tmp384;
frost$core$String** $tmp386 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp387 = *$tmp386;
$fn389 $tmp388 = ($fn389) $tmp385->$class->vtable[17];
frost$core$Error* $tmp390 = $tmp388($tmp385, $tmp387);
if ($tmp390 == NULL) goto block34; else goto block35;
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local0) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
goto block12;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:92
frost$io$OutputStream** $tmp391 = &param0->out;
frost$io$OutputStream* $tmp392 = *$tmp391;
$fn394 $tmp393 = ($fn394) $tmp392->$class->vtable[17];
frost$core$Error* $tmp395 = $tmp393($tmp392, &$s396);
if ($tmp395 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local0) = $tmp395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
goto block12;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:93
frost$io$OutputStream** $tmp397 = &param0->out;
frost$io$OutputStream* $tmp398 = *$tmp397;
org$frostlang$frostc$Type** $tmp399 = &param1->type;
org$frostlang$frostc$Type* $tmp400 = *$tmp399;
frost$core$String* $tmp401 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp400);
$fn403 $tmp402 = ($fn403) $tmp398->$class->vtable[17];
frost$core$Error* $tmp404 = $tmp402($tmp398, $tmp401);
if ($tmp404 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local0) = $tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
goto block12;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:94
org$frostlang$frostc$FieldDecl$Kind* $tmp405 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp406 = *$tmp405;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp407;
$tmp407 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp407->value = $tmp406;
frost$core$Int $tmp408 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from StubCodeGenerator.frost:94:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp409 = &(&local2)->$rawValue;
*$tmp409 = $tmp408;
org$frostlang$frostc$FieldDecl$Kind $tmp410 = *(&local2);
*(&local1) = $tmp410;
org$frostlang$frostc$FieldDecl$Kind $tmp411 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp412;
$tmp412 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp412->value = $tmp411;
ITable* $tmp413 = ((frost$core$Equatable*) $tmp407)->$class->itable;
while ($tmp413->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp413 = $tmp413->next;
}
$fn415 $tmp414 = $tmp413->methods[0];
frost$core$Bit $tmp416 = $tmp414(((frost$core$Equatable*) $tmp407), ((frost$core$Equatable*) $tmp412));
bool $tmp417 = $tmp416.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp412)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp407)));
if ($tmp417) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:95
frost$io$OutputStream** $tmp418 = &param0->out;
frost$io$OutputStream* $tmp419 = *$tmp418;
$fn421 $tmp420 = ($fn421) $tmp419->$class->vtable[17];
frost$core$Error* $tmp422 = $tmp420($tmp419, &$s423);
if ($tmp422 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local0) = $tmp422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
goto block12;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:96
frost$io$OutputStream** $tmp424 = &param0->out;
frost$io$OutputStream* $tmp425 = *$tmp424;
org$frostlang$frostc$ASTNode** $tmp426 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp427 = *$tmp426;
$fn429 $tmp428 = ($fn429) $tmp425->$class->vtable[18];
frost$core$Error* $tmp430 = $tmp428($tmp425, ((frost$core$Object*) $tmp427));
if ($tmp430 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local0) = $tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
goto block12;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:98
frost$io$OutputStream** $tmp431 = &param0->out;
frost$io$OutputStream* $tmp432 = *$tmp431;
$fn434 $tmp433 = ($fn434) $tmp432->$class->vtable[21];
frost$core$Error* $tmp435 = $tmp433($tmp432);
if ($tmp435 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local0) = $tmp435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
goto block12;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:101
frost$core$Error* $tmp436 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:101:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn438 $tmp437 = ($fn438) ((frost$core$Object*) $tmp436)->$class->vtable[0];
frost$core$String* $tmp439 = $tmp437(((frost$core$Object*) $tmp436));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp439);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:102
frost$core$Int $tmp440 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp440);
goto block13;
block13:;
frost$core$Error* $tmp441 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:107
org$frostlang$frostc$Annotations** $tmp442 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp443 = *$tmp442;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:107:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int* $tmp444 = &$tmp443->flags;
frost$core$Int $tmp445 = *$tmp444;
frost$core$Int $tmp446 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447 & $tmp448;
frost$core$Int $tmp450 = (frost$core$Int) {$tmp449};
frost$core$Int $tmp451 = (frost$core$Int) {0u};
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
bool $tmp454 = $tmp452 != $tmp453;
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:108
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:110
frost$core$Weak** $tmp457 = &param0->compiler;
frost$core$Weak* $tmp458 = *$tmp457;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:110:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp459 = &$tmp458->_valid;
frost$core$Bit $tmp460 = *$tmp459;
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block9; else goto block10;
block10:;
frost$core$Int $tmp462 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s463, $tmp462);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp464 = &$tmp458->value;
frost$core$Object* $tmp465 = *$tmp464;
frost$core$Frost$ref$frost$core$Object$Q($tmp465);
frost$core$Bit $tmp466 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp465), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:110:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp467 = $tmp466.value;
bool $tmp468 = !$tmp467;
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468};
bool $tmp470 = $tmp469.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp465);
if ($tmp470) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:111
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:113
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:114
frost$io$OutputStream** $tmp471 = &param0->out;
frost$io$OutputStream* $tmp472 = *$tmp471;
org$frostlang$frostc$Annotations** $tmp473 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp474 = *$tmp473;
$fn476 $tmp475 = ($fn476) $tmp472->$class->vtable[18];
frost$core$Error* $tmp477 = $tmp475($tmp472, ((frost$core$Object*) $tmp474));
if ($tmp477 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local0) = $tmp477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:115
org$frostlang$frostc$MethodDecl$Kind* $tmp478 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp479 = *$tmp478;
frost$core$Int $tmp480 = $tmp479.$rawValue;
frost$core$Int $tmp481 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:116:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481.value;
bool $tmp484 = $tmp482 == $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:117
frost$io$OutputStream** $tmp487 = &param0->out;
frost$io$OutputStream* $tmp488 = *$tmp487;
$fn490 $tmp489 = ($fn490) $tmp488->$class->vtable[17];
frost$core$Error* $tmp491 = $tmp489($tmp488, &$s492);
if ($tmp491 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
*(&local0) = $tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
goto block12;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
goto block16;
block18:;
frost$core$Int $tmp493 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:119:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp494 = $tmp480.value;
int64_t $tmp495 = $tmp493.value;
bool $tmp496 = $tmp494 == $tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:120
frost$io$OutputStream** $tmp499 = &param0->out;
frost$io$OutputStream* $tmp500 = *$tmp499;
$fn502 $tmp501 = ($fn502) $tmp500->$class->vtable[17];
frost$core$Error* $tmp503 = $tmp501($tmp500, &$s504);
if ($tmp503 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local0) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
goto block12;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
goto block16;
block23:;
frost$core$Int $tmp505 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:122:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp506 = $tmp480.value;
int64_t $tmp507 = $tmp505.value;
bool $tmp508 = $tmp506 == $tmp507;
frost$core$Bit $tmp509 = (frost$core$Bit) {$tmp508};
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block27; else goto block28;
block27:;
goto block16;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:125
frost$core$Int $tmp511 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s512, $tmp511);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:128
frost$io$OutputStream** $tmp513 = &param0->out;
frost$io$OutputStream* $tmp514 = *$tmp513;
frost$core$String** $tmp515 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp516 = *$tmp515;
$fn518 $tmp517 = ($fn518) $tmp514->$class->vtable[17];
frost$core$Error* $tmp519 = $tmp517($tmp514, $tmp516);
if ($tmp519 == NULL) goto block30; else goto block31;
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local0) = $tmp519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
goto block12;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:129
frost$collections$Array** $tmp520 = &param1->genericParameters;
frost$collections$Array* $tmp521 = *$tmp520;
frost$core$Bit $tmp522 = (frost$core$Bit) {$tmp521 != NULL};
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:130
frost$io$OutputStream** $tmp524 = &param0->out;
frost$io$OutputStream* $tmp525 = *$tmp524;
frost$collections$Array** $tmp526 = &param1->genericParameters;
frost$collections$Array* $tmp527 = *$tmp526;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure10));
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp528 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp528, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp530 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:131:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp531 = &$tmp530->pointer;
*$tmp531 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Object** $tmp532 = &$tmp530->target;
frost$core$Object* $tmp533 = *$tmp532;
frost$core$Frost$unref$frost$core$Object$Q($tmp533);
frost$core$Object** $tmp534 = &$tmp530->target;
*$tmp534 = ((frost$core$Object*) $tmp528);
ITable* $tmp535 = ((frost$collections$CollectionView*) $tmp527)->$class->itable;
while ($tmp535->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp535 = $tmp535->next;
}
$fn537 $tmp536 = $tmp535->methods[9];
frost$collections$Array* $tmp538 = $tmp536(((frost$collections$CollectionView*) $tmp527), $tmp530);
ITable* $tmp539 = ((frost$collections$CollectionView*) $tmp538)->$class->itable;
while ($tmp539->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp539 = $tmp539->next;
}
$fn541 $tmp540 = $tmp539->methods[3];
frost$core$String* $tmp542 = $tmp540(((frost$collections$CollectionView*) $tmp538), &$s543);
frost$core$String* $tmp544 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s545, $tmp542);
frost$core$String* $tmp546 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp544, &$s547);
$fn549 $tmp548 = ($fn549) $tmp525->$class->vtable[17];
frost$core$Error* $tmp550 = $tmp548($tmp525, $tmp546);
if ($tmp550 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local0) = $tmp550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
goto block12;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:134
frost$io$OutputStream** $tmp551 = &param0->out;
frost$io$OutputStream* $tmp552 = *$tmp551;
$fn554 $tmp553 = ($fn554) $tmp552->$class->vtable[17];
frost$core$Error* $tmp555 = $tmp553($tmp552, &$s556);
if ($tmp555 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local0) = $tmp555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
goto block12;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:135
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s557));
frost$core$String* $tmp558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local1) = &$s559;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:136
frost$collections$Array** $tmp560 = &param1->parameters;
frost$collections$Array* $tmp561 = *$tmp560;
ITable* $tmp562 = ((frost$collections$Iterable*) $tmp561)->$class->itable;
while ($tmp562->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp562 = $tmp562->next;
}
$fn564 $tmp563 = $tmp562->methods[0];
frost$collections$Iterator* $tmp565 = $tmp563(((frost$collections$Iterable*) $tmp561));
goto block39;
block39:;
ITable* $tmp566 = $tmp565->$class->itable;
while ($tmp566->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp566 = $tmp566->next;
}
$fn568 $tmp567 = $tmp566->methods[0];
frost$core$Bit $tmp569 = $tmp567($tmp565);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block41; else goto block40;
block40:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp571 = $tmp565->$class->itable;
while ($tmp571->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp571 = $tmp571->next;
}
$fn573 $tmp572 = $tmp571->methods[1];
frost$core$Object* $tmp574 = $tmp572($tmp565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp574)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp575 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp574);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:137
frost$io$OutputStream** $tmp576 = &param0->out;
frost$io$OutputStream* $tmp577 = *$tmp576;
frost$core$String* $tmp578 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:137:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$String* $tmp579 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp578, &$s580);
org$frostlang$frostc$MethodDecl$Parameter* $tmp581 = *(&local2);
frost$core$String** $tmp582 = &$tmp581->name;
frost$core$String* $tmp583 = *$tmp582;
frost$core$String* $tmp584 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp579, $tmp583);
frost$core$String* $tmp585 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp584, &$s586);
org$frostlang$frostc$MethodDecl$Parameter* $tmp587 = *(&local2);
org$frostlang$frostc$Type** $tmp588 = &$tmp587->type;
org$frostlang$frostc$Type* $tmp589 = *$tmp588;
frost$core$String* $tmp590 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp589);
frost$core$String* $tmp591 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp585, $tmp590);
frost$core$String* $tmp592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp591, &$s593);
$fn595 $tmp594 = ($fn595) $tmp577->$class->vtable[17];
frost$core$Error* $tmp596 = $tmp594($tmp577, $tmp592);
if ($tmp596 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local0) = $tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q($tmp574);
org$frostlang$frostc$MethodDecl$Parameter* $tmp597 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$core$String* $tmp598 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s599));
frost$core$String* $tmp600 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local1) = &$s601;
frost$core$Frost$unref$frost$core$Object$Q($tmp574);
org$frostlang$frostc$MethodDecl$Parameter* $tmp602 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:140
frost$io$OutputStream** $tmp603 = &param0->out;
frost$io$OutputStream* $tmp604 = *$tmp603;
$fn606 $tmp605 = ($fn606) $tmp604->$class->vtable[17];
frost$core$Error* $tmp607 = $tmp605($tmp604, &$s608);
if ($tmp607 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local0) = $tmp607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$String* $tmp609 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:141
org$frostlang$frostc$MethodDecl$Kind* $tmp610 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp611 = *$tmp610;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp612;
$tmp612 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp612->value = $tmp611;
frost$core$Int $tmp613 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from StubCodeGenerator.frost:141:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp614 = &(&local4)->$rawValue;
*$tmp614 = $tmp613;
org$frostlang$frostc$MethodDecl$Kind $tmp615 = *(&local4);
*(&local3) = $tmp615;
org$frostlang$frostc$MethodDecl$Kind $tmp616 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp617;
$tmp617 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp617->value = $tmp616;
ITable* $tmp618 = ((frost$core$Equatable*) $tmp612)->$class->itable;
while ($tmp618->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp618 = $tmp618->next;
}
$fn620 $tmp619 = $tmp618->methods[0];
frost$core$Bit $tmp621 = $tmp619(((frost$core$Equatable*) $tmp612), ((frost$core$Equatable*) $tmp617));
bool $tmp622 = $tmp621.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp617)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp612)));
if ($tmp622) goto block47; else goto block49;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:142
org$frostlang$frostc$Annotations** $tmp623 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp624 = *$tmp623;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:142:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int* $tmp625 = &$tmp624->flags;
frost$core$Int $tmp626 = *$tmp625;
frost$core$Int $tmp627 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp628 = $tmp626.value;
int64_t $tmp629 = $tmp627.value;
int64_t $tmp630 = $tmp628 & $tmp629;
frost$core$Int $tmp631 = (frost$core$Int) {$tmp630};
frost$core$Int $tmp632 = (frost$core$Int) {0u};
int64_t $tmp633 = $tmp631.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 != $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:142:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp637 = $tmp636.value;
bool $tmp638 = !$tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:143
frost$io$OutputStream** $tmp641 = &param0->out;
frost$io$OutputStream* $tmp642 = *$tmp641;
$fn644 $tmp643 = ($fn644) $tmp642->$class->vtable[17];
frost$core$Error* $tmp645 = $tmp643($tmp642, &$s646);
if ($tmp645 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local0) = $tmp645;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$String* $tmp647 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
goto block52;
block52:;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:146
org$frostlang$frostc$Type** $tmp648 = &param1->returnType;
org$frostlang$frostc$Type* $tmp649 = *$tmp648;
frost$core$Weak** $tmp650 = &param0->compiler;
frost$core$Weak* $tmp651 = *$tmp650;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:146:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp652 = &$tmp651->_valid;
frost$core$Bit $tmp653 = *$tmp652;
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block62; else goto block63;
block63:;
frost$core$Int $tmp655 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s656, $tmp655);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp657 = &$tmp651->value;
frost$core$Object* $tmp658 = *$tmp657;
frost$core$Frost$ref$frost$core$Object$Q($tmp658);
org$frostlang$frostc$Type** $tmp659 = &((org$frostlang$frostc$Compiler*) $tmp658)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp660 = *$tmp659;
ITable* $tmp661 = ((frost$core$Equatable*) $tmp649)->$class->itable;
while ($tmp661->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp661 = $tmp661->next;
}
$fn663 $tmp662 = $tmp661->methods[1];
frost$core$Bit $tmp664 = $tmp662(((frost$core$Equatable*) $tmp649), ((frost$core$Equatable*) $tmp660));
bool $tmp665 = $tmp664.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp658);
if ($tmp665) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:147
frost$io$OutputStream** $tmp666 = &param0->out;
frost$io$OutputStream* $tmp667 = *$tmp666;
org$frostlang$frostc$Type** $tmp668 = &param1->returnType;
org$frostlang$frostc$Type* $tmp669 = *$tmp668;
frost$core$String* $tmp670 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp669);
frost$core$String* $tmp671 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s672, $tmp670);
frost$core$String* $tmp673 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp671, &$s674);
$fn676 $tmp675 = ($fn676) $tmp667->$class->vtable[19];
frost$core$Error* $tmp677 = $tmp675($tmp667, $tmp673);
if ($tmp677 == NULL) goto block64; else goto block65;
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local0) = $tmp677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$String* $tmp678 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block64:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
goto block59;
block59:;
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:149
org$frostlang$frostc$Annotations** $tmp679 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp680 = *$tmp679;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:149:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int* $tmp681 = &$tmp680->flags;
frost$core$Int $tmp682 = *$tmp681;
frost$core$Int $tmp683 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp684 = $tmp682.value;
int64_t $tmp685 = $tmp683.value;
int64_t $tmp686 = $tmp684 & $tmp685;
frost$core$Int $tmp687 = (frost$core$Int) {$tmp686};
frost$core$Int $tmp688 = (frost$core$Int) {0u};
int64_t $tmp689 = $tmp687.value;
int64_t $tmp690 = $tmp688.value;
bool $tmp691 = $tmp689 != $tmp690;
frost$core$Bit $tmp692 = (frost$core$Bit) {$tmp691};
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block66; else goto block68;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:150
frost$io$OutputStream** $tmp694 = &param0->out;
frost$io$OutputStream* $tmp695 = *$tmp694;
$fn697 $tmp696 = ($fn697) $tmp695->$class->vtable[17];
frost$core$Error* $tmp698 = $tmp696($tmp695, &$s699);
if ($tmp698 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
*(&local0) = $tmp698;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$String* $tmp700 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:151
org$frostlang$frostc$FixedArray** $tmp701 = &param1->body;
org$frostlang$frostc$FixedArray* $tmp702 = *$tmp701;
ITable* $tmp703 = ((frost$collections$Iterable*) $tmp702)->$class->itable;
while ($tmp703->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp703 = $tmp703->next;
}
$fn705 $tmp704 = $tmp703->methods[0];
frost$collections$Iterator* $tmp706 = $tmp704(((frost$collections$Iterable*) $tmp702));
goto block73;
block73:;
ITable* $tmp707 = $tmp706->$class->itable;
while ($tmp707->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp707 = $tmp707->next;
}
$fn709 $tmp708 = $tmp707->methods[0];
frost$core$Bit $tmp710 = $tmp708($tmp706);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block75; else goto block74;
block74:;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp712 = $tmp706->$class->itable;
while ($tmp712->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp712 = $tmp712->next;
}
$fn714 $tmp713 = $tmp712->methods[1];
frost$core$Object* $tmp715 = $tmp713($tmp706);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp715)));
org$frostlang$frostc$ASTNode* $tmp716 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local5) = ((org$frostlang$frostc$ASTNode*) $tmp715);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:152
frost$io$OutputStream** $tmp717 = &param0->out;
frost$io$OutputStream* $tmp718 = *$tmp717;
org$frostlang$frostc$ASTNode* $tmp719 = *(&local5);
$fn721 $tmp720 = ($fn721) $tmp718->$class->vtable[20];
frost$core$Error* $tmp722 = $tmp720($tmp718, ((frost$core$Object*) $tmp719));
if ($tmp722 == NULL) goto block76; else goto block77;
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local0) = $tmp722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q($tmp715);
org$frostlang$frostc$ASTNode* $tmp723 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$String* $tmp724 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block76:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q($tmp715);
org$frostlang$frostc$ASTNode* $tmp725 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block73;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:154
frost$io$OutputStream** $tmp726 = &param0->out;
frost$io$OutputStream* $tmp727 = *$tmp726;
$fn729 $tmp728 = ($fn729) $tmp727->$class->vtable[17];
frost$core$Error* $tmp730 = $tmp728($tmp727, &$s731);
if ($tmp730 == NULL) goto block78; else goto block79;
block79:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local0) = $tmp730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
frost$core$String* $tmp732 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
goto block67;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:156
org$frostlang$frostc$Annotations** $tmp733 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp734 = *$tmp733;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from StubCodeGenerator.frost:156:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:163
frost$core$Int* $tmp735 = &$tmp734->flags;
frost$core$Int $tmp736 = *$tmp735;
frost$core$Int $tmp737 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:163:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp738 = $tmp736.value;
int64_t $tmp739 = $tmp737.value;
int64_t $tmp740 = $tmp738 & $tmp739;
frost$core$Int $tmp741 = (frost$core$Int) {$tmp740};
frost$core$Int $tmp742 = (frost$core$Int) {0u};
int64_t $tmp743 = $tmp741.value;
int64_t $tmp744 = $tmp742.value;
bool $tmp745 = $tmp743 != $tmp744;
frost$core$Bit $tmp746 = (frost$core$Bit) {$tmp745};
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:157
frost$io$OutputStream** $tmp748 = &param0->out;
frost$io$OutputStream* $tmp749 = *$tmp748;
$fn751 $tmp750 = ($fn751) $tmp749->$class->vtable[17];
frost$core$Error* $tmp752 = $tmp750($tmp749, &$s753);
if ($tmp752 == NULL) goto block84; else goto block85;
block85:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local0) = $tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$String* $tmp754 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
goto block81;
block81:;
goto block67;
block67:;
frost$core$String* $tmp755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local1) = ((frost$core$String*) NULL);
goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:161
frost$core$Error* $tmp756 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:161:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn758 $tmp757 = ($fn758) ((frost$core$Object*) $tmp756)->$class->vtable[0];
frost$core$String* $tmp759 = $tmp757(((frost$core$Object*) $tmp756));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp759);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:162
frost$core$Int $tmp760 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp760);
goto block13;
block13:;
frost$core$Error* $tmp761 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local0) = ((frost$core$Error*) NULL);
return;

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
frost$core$Weak** $tmp762 = &param0->compiler;
frost$core$Weak* $tmp763 = *$tmp762;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:170:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp764 = &$tmp763->_valid;
frost$core$Bit $tmp765 = *$tmp764;
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block7; else goto block8;
block8:;
frost$core$Int $tmp767 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s768, $tmp767);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp769 = &$tmp763->value;
frost$core$Object* $tmp770 = *$tmp769;
frost$core$Frost$ref$frost$core$Object$Q($tmp770);
frost$core$Bit $tmp771 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp770), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:170:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp772 = $tmp771.value;
bool $tmp773 = !$tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp770);
if ($tmp775) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:171
frost$core$Error* $tmp776 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:173
frost$core$String** $tmp777 = &param1->name;
frost$core$String* $tmp778 = *$tmp777;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$String* $tmp779 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local1) = $tmp778;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:174
frost$core$String** $tmp780 = &param1->name;
frost$core$String* $tmp781 = *$tmp780;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp782 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp782, &$s783);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String?>? from StubCodeGenerator.frost:174:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp784 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp782, $tmp781);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Matcher* $tmp785 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local3) = $tmp784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp786 = *(&local3);
frost$core$Bit $tmp787;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp787, $tmp786);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp789 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp789);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$collections$Array* $tmp790 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local4) = $tmp789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
frost$core$Int $tmp791 = (frost$core$Int) {1u};
frost$core$Matcher* $tmp792 = *(&local3);
frost$core$Int $tmp793;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp793, $tmp792);
frost$core$Bit $tmp794 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp795 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp791, $tmp793, $tmp794);
frost$core$Int $tmp796 = $tmp795.min;
*(&local5) = $tmp796;
frost$core$Int $tmp797 = $tmp795.max;
frost$core$Bit $tmp798 = $tmp795.inclusive;
bool $tmp799 = $tmp798.value;
frost$core$Int $tmp800 = (frost$core$Int) {1u};
if ($tmp799) goto block16; else goto block17;
block16:;
int64_t $tmp801 = $tmp796.value;
int64_t $tmp802 = $tmp797.value;
bool $tmp803 = $tmp801 <= $tmp802;
frost$core$Bit $tmp804 = (frost$core$Bit) {$tmp803};
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block13; else goto block14;
block17:;
int64_t $tmp806 = $tmp796.value;
int64_t $tmp807 = $tmp797.value;
bool $tmp808 = $tmp806 < $tmp807;
frost$core$Bit $tmp809 = (frost$core$Bit) {$tmp808};
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
frost$collections$Array* $tmp811 = *(&local4);
frost$core$Matcher* $tmp812 = *(&local3);
frost$core$Int $tmp813 = *(&local5);
frost$core$String* $tmp814 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp812, $tmp813);
frost$collections$Array$add$frost$collections$Array$T($tmp811, ((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Int $tmp815 = *(&local5);
int64_t $tmp816 = $tmp797.value;
int64_t $tmp817 = $tmp815.value;
int64_t $tmp818 = $tmp816 - $tmp817;
frost$core$Int $tmp819 = (frost$core$Int) {$tmp818};
if ($tmp799) goto block19; else goto block20;
block19:;
int64_t $tmp820 = $tmp819.value;
int64_t $tmp821 = $tmp800.value;
bool $tmp822 = $tmp820 >= $tmp821;
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block18; else goto block14;
block20:;
int64_t $tmp825 = $tmp819.value;
int64_t $tmp826 = $tmp800.value;
bool $tmp827 = $tmp825 > $tmp826;
frost$core$Bit $tmp828 = (frost$core$Bit) {$tmp827};
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block18; else goto block14;
block18:;
int64_t $tmp830 = $tmp815.value;
int64_t $tmp831 = $tmp800.value;
int64_t $tmp832 = $tmp830 + $tmp831;
frost$core$Int $tmp833 = (frost$core$Int) {$tmp832};
*(&local5) = $tmp833;
goto block13;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
frost$collections$Array* $tmp834 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp834)));
frost$collections$Array* $tmp835 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp836 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) $tmp834);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp834)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp837 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block10;
block10:;
frost$collections$ListView* $tmp838 = *(&local2);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$collections$ListView* $tmp839 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local6) = $tmp838;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:175
frost$collections$ListView* $tmp840 = *(&local6);
frost$core$Bit $tmp841 = (frost$core$Bit) {$tmp840 != NULL};
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:176
frost$core$Weak** $tmp843 = &param1->owner;
frost$core$Weak* $tmp844 = *$tmp843;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:176:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp845 = &$tmp844->_valid;
frost$core$Bit $tmp846 = *$tmp845;
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block27; else goto block28;
block28:;
frost$core$Int $tmp848 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s849, $tmp848);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp850 = &$tmp844->value;
frost$core$Object* $tmp851 = *$tmp850;
frost$core$Frost$ref$frost$core$Object$Q($tmp851);
frost$core$Bit $tmp852 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp851) == NULL};
bool $tmp853 = $tmp852.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp851);
if ($tmp853) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:177
frost$io$OutputStream** $tmp854 = &param0->out;
frost$io$OutputStream* $tmp855 = *$tmp854;
frost$collections$ListView* $tmp856 = *(&local6);
frost$core$Int $tmp857 = (frost$core$Int) {0u};
ITable* $tmp858 = $tmp856->$class->itable;
while ($tmp858->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp858 = $tmp858->next;
}
$fn860 $tmp859 = $tmp858->methods[0];
frost$core$Object* $tmp861 = $tmp859($tmp856, $tmp857);
frost$core$String* $tmp862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s863, ((frost$core$String*) $tmp861));
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp862, &$s865);
$fn867 $tmp866 = ($fn867) $tmp855->$class->vtable[19];
frost$core$Error* $tmp868 = $tmp866($tmp855, $tmp864);
if ($tmp868 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local0) = $tmp868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q($tmp861);
frost$collections$ListView* $tmp869 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp870 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp871 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q($tmp861);
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:179
frost$collections$ListView* $tmp872 = *(&local6);
frost$core$Int $tmp873 = (frost$core$Int) {1u};
ITable* $tmp874 = $tmp872->$class->itable;
while ($tmp874->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp874 = $tmp874->next;
}
$fn876 $tmp875 = $tmp874->methods[0];
frost$core$Object* $tmp877 = $tmp875($tmp872, $tmp873);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp877)));
frost$core$String* $tmp878 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local1) = ((frost$core$String*) $tmp877);
frost$core$Frost$unref$frost$core$Object$Q($tmp877);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:181
frost$io$OutputStream** $tmp879 = &param0->out;
frost$io$OutputStream* $tmp880 = *$tmp879;
$fn882 $tmp881 = ($fn882) $tmp880->$class->vtable[19];
frost$core$Error* $tmp883 = $tmp881($tmp880, &$s884);
if ($tmp883 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local0) = $tmp883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$collections$ListView* $tmp885 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp886 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp887 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:182
frost$io$OutputStream** $tmp888 = &param0->out;
frost$io$OutputStream* $tmp889 = *$tmp888;
org$frostlang$frostc$Annotations** $tmp890 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp891 = *$tmp890;
$fn893 $tmp892 = ($fn893) $tmp889->$class->vtable[18];
frost$core$Error* $tmp894 = $tmp892($tmp889, ((frost$core$Object*) $tmp891));
if ($tmp894 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local0) = $tmp894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$collections$ListView* $tmp895 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp896 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp897 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:183
org$frostlang$frostc$ClassDecl$Kind* $tmp898 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp899 = *$tmp898;
frost$core$Int $tmp900 = $tmp899.$rawValue;
frost$core$Int $tmp901 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:184:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp902 = $tmp900.value;
int64_t $tmp903 = $tmp901.value;
bool $tmp904 = $tmp902 == $tmp903;
frost$core$Bit $tmp905 = (frost$core$Bit) {$tmp904};
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:184
frost$io$OutputStream** $tmp907 = &param0->out;
frost$io$OutputStream* $tmp908 = *$tmp907;
$fn910 $tmp909 = ($fn910) $tmp908->$class->vtable[17];
frost$core$Error* $tmp911 = $tmp909($tmp908, &$s912);
if ($tmp911 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local0) = $tmp911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$collections$ListView* $tmp913 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp914 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp915 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
goto block35;
block37:;
frost$core$Int $tmp916 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:185:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp917 = $tmp900.value;
int64_t $tmp918 = $tmp916.value;
bool $tmp919 = $tmp917 == $tmp918;
frost$core$Bit $tmp920 = (frost$core$Bit) {$tmp919};
bool $tmp921 = $tmp920.value;
if ($tmp921) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:185
frost$io$OutputStream** $tmp922 = &param0->out;
frost$io$OutputStream* $tmp923 = *$tmp922;
$fn925 $tmp924 = ($fn925) $tmp923->$class->vtable[17];
frost$core$Error* $tmp926 = $tmp924($tmp923, &$s927);
if ($tmp926 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local0) = $tmp926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$collections$ListView* $tmp928 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp929 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp930 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
goto block35;
block42:;
frost$core$Int $tmp931 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:186:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp932 = $tmp900.value;
int64_t $tmp933 = $tmp931.value;
bool $tmp934 = $tmp932 == $tmp933;
frost$core$Bit $tmp935 = (frost$core$Bit) {$tmp934};
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block46; else goto block35;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:186
frost$io$OutputStream** $tmp937 = &param0->out;
frost$io$OutputStream* $tmp938 = *$tmp937;
$fn940 $tmp939 = ($fn940) $tmp938->$class->vtable[17];
frost$core$Error* $tmp941 = $tmp939($tmp938, &$s942);
if ($tmp941 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local0) = $tmp941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$collections$ListView* $tmp943 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp945 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:188
frost$io$OutputStream** $tmp946 = &param0->out;
frost$io$OutputStream* $tmp947 = *$tmp946;
frost$core$String* $tmp948 = *(&local1);
$fn950 $tmp949 = ($fn950) $tmp947->$class->vtable[17];
frost$core$Error* $tmp951 = $tmp949($tmp947, $tmp948);
if ($tmp951 == NULL) goto block50; else goto block51;
block51:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
*(&local0) = $tmp951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$collections$ListView* $tmp952 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp953 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp954 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:189
frost$collections$List** $tmp955 = &param1->parameters;
frost$collections$List* $tmp956 = *$tmp955;
ITable* $tmp957 = ((frost$collections$CollectionView*) $tmp956)->$class->itable;
while ($tmp957->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp957 = $tmp957->next;
}
$fn959 $tmp958 = $tmp957->methods[0];
frost$core$Int $tmp960 = $tmp958(((frost$collections$CollectionView*) $tmp956));
frost$core$Int $tmp961 = (frost$core$Int) {0u};
int64_t $tmp962 = $tmp960.value;
int64_t $tmp963 = $tmp961.value;
bool $tmp964 = $tmp962 > $tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:190
frost$io$OutputStream** $tmp967 = &param0->out;
frost$io$OutputStream* $tmp968 = *$tmp967;
frost$collections$List** $tmp969 = &param1->parameters;
frost$collections$List* $tmp970 = *$tmp969;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure12));
org$frostlang$frostc$StubCodeGenerator$_Closure12* $tmp971 = (org$frostlang$frostc$StubCodeGenerator$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure12$class);
org$frostlang$frostc$StubCodeGenerator$_Closure12$init$org$frostlang$frostc$StubCodeGenerator($tmp971, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp973 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:191:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp974 = &$tmp973->pointer;
*$tmp974 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Object** $tmp975 = &$tmp973->target;
frost$core$Object* $tmp976 = *$tmp975;
frost$core$Frost$unref$frost$core$Object$Q($tmp976);
frost$core$Object** $tmp977 = &$tmp973->target;
*$tmp977 = ((frost$core$Object*) $tmp971);
ITable* $tmp978 = ((frost$collections$CollectionView*) $tmp970)->$class->itable;
while ($tmp978->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[9];
frost$collections$Array* $tmp981 = $tmp979(((frost$collections$CollectionView*) $tmp970), $tmp973);
ITable* $tmp982 = ((frost$collections$CollectionView*) $tmp981)->$class->itable;
while ($tmp982->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp982 = $tmp982->next;
}
$fn984 $tmp983 = $tmp982->methods[3];
frost$core$String* $tmp985 = $tmp983(((frost$collections$CollectionView*) $tmp981), &$s986);
frost$core$String* $tmp987 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s988, $tmp985);
frost$core$String* $tmp989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp987, &$s990);
$fn992 $tmp991 = ($fn992) $tmp968->$class->vtable[17];
frost$core$Error* $tmp993 = $tmp991($tmp968, $tmp989);
if ($tmp993 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local0) = $tmp993;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$collections$ListView* $tmp994 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp995 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp996 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
goto block53;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:193
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s997));
frost$core$String* $tmp998 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local7) = &$s999;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:194
org$frostlang$frostc$ClassDecl$Kind* $tmp1000 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1001 = *$tmp1000;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1002;
$tmp1002 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1002->value = $tmp1001;
frost$core$Int $tmp1003 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:194:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1004 = &(&local9)->$rawValue;
*$tmp1004 = $tmp1003;
org$frostlang$frostc$ClassDecl$Kind $tmp1005 = *(&local9);
*(&local8) = $tmp1005;
org$frostlang$frostc$ClassDecl$Kind $tmp1006 = *(&local8);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1007;
$tmp1007 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1007->value = $tmp1006;
ITable* $tmp1008 = ((frost$core$Equatable*) $tmp1002)->$class->itable;
while ($tmp1008->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1008 = $tmp1008->next;
}
$fn1010 $tmp1009 = $tmp1008->methods[1];
frost$core$Bit $tmp1011 = $tmp1009(((frost$core$Equatable*) $tmp1002), ((frost$core$Equatable*) $tmp1007));
bool $tmp1012 = $tmp1011.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1007)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1002)));
if ($tmp1012) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:195
org$frostlang$frostc$Type** $tmp1013 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1014 = *$tmp1013;
frost$core$Bit $tmp1015 = (frost$core$Bit) {$tmp1014 != NULL};
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block62; else goto block61;
block62:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1017 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1018 = *$tmp1017;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1019;
$tmp1019 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1019->value = $tmp1018;
frost$core$Int $tmp1020 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:195:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1021 = &(&local11)->$rawValue;
*$tmp1021 = $tmp1020;
org$frostlang$frostc$ClassDecl$Kind $tmp1022 = *(&local11);
*(&local10) = $tmp1022;
org$frostlang$frostc$ClassDecl$Kind $tmp1023 = *(&local10);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1024;
$tmp1024 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1024->value = $tmp1023;
ITable* $tmp1025 = ((frost$core$Equatable*) $tmp1019)->$class->itable;
while ($tmp1025->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1025 = $tmp1025->next;
}
$fn1027 $tmp1026 = $tmp1025->methods[1];
frost$core$Bit $tmp1028 = $tmp1026(((frost$core$Equatable*) $tmp1019), ((frost$core$Equatable*) $tmp1024));
bool $tmp1029 = $tmp1028.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1024)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1019)));
if ($tmp1029) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:196
frost$io$OutputStream** $tmp1030 = &param0->out;
frost$io$OutputStream* $tmp1031 = *$tmp1030;
frost$core$String* $tmp1032 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:196:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$String* $tmp1033 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1032, &$s1034);
org$frostlang$frostc$Type** $tmp1035 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1036 = *$tmp1035;
frost$core$String* $tmp1037 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1036);
frost$core$String* $tmp1038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1033, $tmp1037);
frost$core$String* $tmp1039 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1038, &$s1040);
$fn1042 $tmp1041 = ($fn1042) $tmp1031->$class->vtable[17];
frost$core$Error* $tmp1043 = $tmp1041($tmp1031, $tmp1039);
if ($tmp1043 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local0) = $tmp1043;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$String* $tmp1044 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1045 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1046 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp1047 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1048));
frost$core$String* $tmp1049 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
*(&local7) = &$s1050;
goto block61;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:199
frost$collections$Array** $tmp1051 = &param1->rawInterfaces;
frost$collections$Array* $tmp1052 = *$tmp1051;
ITable* $tmp1053 = ((frost$collections$Iterable*) $tmp1052)->$class->itable;
while ($tmp1053->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1053 = $tmp1053->next;
}
$fn1055 $tmp1054 = $tmp1053->methods[0];
frost$collections$Iterator* $tmp1056 = $tmp1054(((frost$collections$Iterable*) $tmp1052));
goto block67;
block67:;
ITable* $tmp1057 = $tmp1056->$class->itable;
while ($tmp1057->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1057 = $tmp1057->next;
}
$fn1059 $tmp1058 = $tmp1057->methods[0];
frost$core$Bit $tmp1060 = $tmp1058($tmp1056);
bool $tmp1061 = $tmp1060.value;
if ($tmp1061) goto block69; else goto block68;
block68:;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1062 = $tmp1056->$class->itable;
while ($tmp1062->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1062 = $tmp1062->next;
}
$fn1064 $tmp1063 = $tmp1062->methods[1];
frost$core$Object* $tmp1065 = $tmp1063($tmp1056);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1065)));
org$frostlang$frostc$Type* $tmp1066 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1065);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:200
frost$io$OutputStream** $tmp1067 = &param0->out;
frost$io$OutputStream* $tmp1068 = *$tmp1067;
frost$core$String* $tmp1069 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:200:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$String* $tmp1070 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1069, &$s1071);
org$frostlang$frostc$Type* $tmp1072 = *(&local12);
frost$core$String* $tmp1073 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1072);
frost$core$String* $tmp1074 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1070, $tmp1073);
frost$core$String* $tmp1075 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1074, &$s1076);
$fn1078 $tmp1077 = ($fn1078) $tmp1068->$class->vtable[17];
frost$core$Error* $tmp1079 = $tmp1077($tmp1068, $tmp1075);
if ($tmp1079 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local0) = $tmp1079;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q($tmp1065);
org$frostlang$frostc$Type* $tmp1080 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$String* $tmp1081 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1082 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1083 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp1084 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1085));
frost$core$String* $tmp1086 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local7) = &$s1087;
frost$core$Frost$unref$frost$core$Object$Q($tmp1065);
org$frostlang$frostc$Type* $tmp1088 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block67;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:204
frost$io$OutputStream** $tmp1089 = &param0->out;
frost$io$OutputStream* $tmp1090 = *$tmp1089;
$fn1092 $tmp1091 = ($fn1092) $tmp1090->$class->vtable[17];
frost$core$Error* $tmp1093 = $tmp1091($tmp1090, &$s1094);
if ($tmp1093 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local0) = $tmp1093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$core$String* $tmp1095 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1096 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1097 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp1098 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:205
frost$collections$Array** $tmp1099 = &param1->choiceCases;
frost$collections$Array* $tmp1100 = *$tmp1099;
ITable* $tmp1101 = ((frost$collections$Iterable*) $tmp1100)->$class->itable;
while ($tmp1101->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1101 = $tmp1101->next;
}
$fn1103 $tmp1102 = $tmp1101->methods[0];
frost$collections$Iterator* $tmp1104 = $tmp1102(((frost$collections$Iterable*) $tmp1100));
goto block75;
block75:;
ITable* $tmp1105 = $tmp1104->$class->itable;
while ($tmp1105->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1105 = $tmp1105->next;
}
$fn1107 $tmp1106 = $tmp1105->methods[0];
frost$core$Bit $tmp1108 = $tmp1106($tmp1104);
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block77; else goto block76;
block76:;
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp1110 = $tmp1104->$class->itable;
while ($tmp1110->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1110 = $tmp1110->next;
}
$fn1112 $tmp1111 = $tmp1110->methods[1];
frost$core$Object* $tmp1113 = $tmp1111($tmp1104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp1113)));
org$frostlang$frostc$ChoiceCase* $tmp1114 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) $tmp1113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:206
org$frostlang$frostc$ChoiceCase* $tmp1115 = *(&local13);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp1115);
frost$core$Frost$unref$frost$core$Object$Q($tmp1113);
org$frostlang$frostc$ChoiceCase* $tmp1116 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block75;
block77:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:208
frost$collections$Array** $tmp1117 = &param1->classes;
frost$collections$Array* $tmp1118 = *$tmp1117;
ITable* $tmp1119 = ((frost$collections$Iterable*) $tmp1118)->$class->itable;
while ($tmp1119->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1119 = $tmp1119->next;
}
$fn1121 $tmp1120 = $tmp1119->methods[0];
frost$collections$Iterator* $tmp1122 = $tmp1120(((frost$collections$Iterable*) $tmp1118));
goto block78;
block78:;
ITable* $tmp1123 = $tmp1122->$class->itable;
while ($tmp1123->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1123 = $tmp1123->next;
}
$fn1125 $tmp1124 = $tmp1123->methods[0];
frost$core$Bit $tmp1126 = $tmp1124($tmp1122);
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block80; else goto block79;
block79:;
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1128 = $tmp1122->$class->itable;
while ($tmp1128->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1128 = $tmp1128->next;
}
$fn1130 $tmp1129 = $tmp1128->methods[1];
frost$core$Object* $tmp1131 = $tmp1129($tmp1122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1131)));
org$frostlang$frostc$ClassDecl* $tmp1132 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) $tmp1131);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:209
org$frostlang$frostc$ClassDecl* $tmp1133 = *(&local14);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp1133);
frost$core$Frost$unref$frost$core$Object$Q($tmp1131);
org$frostlang$frostc$ClassDecl* $tmp1134 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block78;
block80:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:211
frost$collections$Array** $tmp1135 = &param1->fields;
frost$collections$Array* $tmp1136 = *$tmp1135;
ITable* $tmp1137 = ((frost$collections$Iterable*) $tmp1136)->$class->itable;
while ($tmp1137->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1137 = $tmp1137->next;
}
$fn1139 $tmp1138 = $tmp1137->methods[0];
frost$collections$Iterator* $tmp1140 = $tmp1138(((frost$collections$Iterable*) $tmp1136));
goto block81;
block81:;
ITable* $tmp1141 = $tmp1140->$class->itable;
while ($tmp1141->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1141 = $tmp1141->next;
}
$fn1143 $tmp1142 = $tmp1141->methods[0];
frost$core$Bit $tmp1144 = $tmp1142($tmp1140);
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block83; else goto block82;
block82:;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp1146 = $tmp1140->$class->itable;
while ($tmp1146->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1146 = $tmp1146->next;
}
$fn1148 $tmp1147 = $tmp1146->methods[1];
frost$core$Object* $tmp1149 = $tmp1147($tmp1140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1149)));
org$frostlang$frostc$FieldDecl* $tmp1150 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) $tmp1149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp1151 = *(&local15);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp1151);
frost$core$Frost$unref$frost$core$Object$Q($tmp1149);
org$frostlang$frostc$FieldDecl* $tmp1152 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block81;
block83:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:214
frost$collections$Array** $tmp1153 = &param1->methods;
frost$collections$Array* $tmp1154 = *$tmp1153;
ITable* $tmp1155 = ((frost$collections$Iterable*) $tmp1154)->$class->itable;
while ($tmp1155->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1155 = $tmp1155->next;
}
$fn1157 $tmp1156 = $tmp1155->methods[0];
frost$collections$Iterator* $tmp1158 = $tmp1156(((frost$collections$Iterable*) $tmp1154));
goto block84;
block84:;
ITable* $tmp1159 = $tmp1158->$class->itable;
while ($tmp1159->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1159 = $tmp1159->next;
}
$fn1161 $tmp1160 = $tmp1159->methods[0];
frost$core$Bit $tmp1162 = $tmp1160($tmp1158);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block86; else goto block85;
block85:;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1164 = $tmp1158->$class->itable;
while ($tmp1164->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1164 = $tmp1164->next;
}
$fn1166 $tmp1165 = $tmp1164->methods[1];
frost$core$Object* $tmp1167 = $tmp1165($tmp1158);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1167)));
org$frostlang$frostc$MethodDecl* $tmp1168 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) $tmp1167);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:215
org$frostlang$frostc$MethodDecl* $tmp1169 = *(&local16);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp1169);
frost$core$Frost$unref$frost$core$Object$Q($tmp1167);
org$frostlang$frostc$MethodDecl* $tmp1170 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block84;
block86:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:217
frost$io$OutputStream** $tmp1171 = &param0->out;
frost$io$OutputStream* $tmp1172 = *$tmp1171;
$fn1174 $tmp1173 = ($fn1174) $tmp1172->$class->vtable[17];
frost$core$Error* $tmp1175 = $tmp1173($tmp1172, &$s1176);
if ($tmp1175 == NULL) goto block87; else goto block88;
block88:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local0) = $tmp1175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$String* $tmp1177 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1178 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1179 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp1180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block87:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$String* $tmp1181 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1182 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1183 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp1184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:220
frost$core$Error* $tmp1185 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:220:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1187 $tmp1186 = ($fn1187) ((frost$core$Object*) $tmp1185)->$class->vtable[0];
frost$core$String* $tmp1188 = $tmp1186(((frost$core$Object*) $tmp1185));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1188);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:221
frost$core$Int $tmp1189 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1189);
goto block2;
block2:;
frost$core$Error* $tmp1190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:227
frost$core$Weak** $tmp1191 = &param1->owner;
frost$core$Weak* $tmp1192 = *$tmp1191;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:227:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1193 = &$tmp1192->_valid;
frost$core$Bit $tmp1194 = *$tmp1193;
bool $tmp1195 = $tmp1194.value;
if ($tmp1195) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1196 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1197, $tmp1196);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1198 = &$tmp1192->value;
frost$core$Object* $tmp1199 = *$tmp1198;
frost$core$Frost$ref$frost$core$Object$Q($tmp1199);
frost$core$Bit $tmp1200 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp1199) == NULL};
bool $tmp1201 = $tmp1200.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1199);
if ($tmp1201) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Annotations** $tmp1202 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1203 = *$tmp1202;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:227:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int* $tmp1204 = &$tmp1203->flags;
frost$core$Int $tmp1205 = *$tmp1204;
frost$core$Int $tmp1206 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1207 = $tmp1205.value;
int64_t $tmp1208 = $tmp1206.value;
int64_t $tmp1209 = $tmp1207 & $tmp1208;
frost$core$Int $tmp1210 = (frost$core$Int) {$tmp1209};
frost$core$Int $tmp1211 = (frost$core$Int) {0u};
int64_t $tmp1212 = $tmp1210.value;
int64_t $tmp1213 = $tmp1211.value;
bool $tmp1214 = $tmp1212 != $tmp1213;
frost$core$Bit $tmp1215 = (frost$core$Bit) {$tmp1214};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:227:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1216 = $tmp1215.value;
bool $tmp1217 = !$tmp1216;
frost$core$Bit $tmp1218 = (frost$core$Bit) {$tmp1217};
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block1; else goto block2;
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
frost$core$Weak** $tmp1220 = &param0->compiler;
frost$core$Weak* $tmp1221 = *$tmp1220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$io$OutputStream** $tmp1222 = &param0->out;
frost$io$OutputStream* $tmp1223 = *$tmp1222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
return;

}

