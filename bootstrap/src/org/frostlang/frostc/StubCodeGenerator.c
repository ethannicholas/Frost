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
typedef frost$collections$ListView* (*$fn133)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);
typedef frost$core$String* (*$fn136)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn140)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn144)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn225)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn231)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn244)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn248)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn252)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn260)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn265)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn294)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn303)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn312)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn321)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn329)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn334)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn343)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn353)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn359)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn372)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn377)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn402)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn413)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn422)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn437)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn453)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn457)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn461)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn469)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn474)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn484)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn488)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn493)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn516)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn527)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn539)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn545)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn554)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn567)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn577)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn625)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn632)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn645)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn651)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn661)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn674)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn685)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn696)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn705)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn713)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn726)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn730)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn734)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn742)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn757)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn772)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn794)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn806)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn810)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn815)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn830)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn843)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn853)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn857)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn862)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn871)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn875)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn880)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn889)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn893)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn898)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn907)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn911)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn916)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn924)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 38, -6371532287653990932, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 150, -7011207366892436101, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, 8415993688146300003, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 144, -3407239944236024271, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, -9118778076962498171, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 129, 7453518017842030275, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 129, 7453518017842030275, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

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
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.Compiler?>)
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
// unreffing REF($2:frost.core.Weak<org.frostlang.frostc.Compiler?>)
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
// unreffing REF($35:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($34:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($33:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing REF($32:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing REF($31:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($27:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($20:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($17:org.frostlang.frostc.StubCodeGenerator._Closure2)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($14:frost.collections.ListView<frost.collections.ListView.T>)
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
// unreffing REF($81:frost.collections.ListView.T)
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
// unreffing REF($97:org.frostlang.frostc.Type)
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
// unreffing REF($110:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($109:frost.core.String)
goto block2;
block2:;
// line 26
frost$core$String* $tmp74 = *(&local0);
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp74, &$s76);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($126:frost.core.String)
org$frostlang$frostc$Type* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing returnType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing result
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
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit($tmp94.nonnull);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp98 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s99, $tmp98, &$s100);
abort(); // unreachable
block5:;
frost$core$String$Index $tmp101 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp91, ((frost$core$String$Index) $tmp94.value));
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp103 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp101, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp102);
frost$core$String* $tmp104 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp89, $tmp103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($35:frost.core.String)
return $tmp104;
block4:;
frost$core$Int64 $tmp105 = (frost$core$Int64) {11};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block7; else goto block8;
block7:;
// line 35
org$frostlang$frostc$FixedArray** $tmp108 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit($tmp109 != NULL);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp112 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block9:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {0};
frost$core$Object* $tmp116 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp109, $tmp115);
frost$core$String* $tmp117 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp116));
frost$core$String* $tmp118 = frost$core$String$get_asString$R$frost$core$String($tmp117);
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp118, &$s120);
org$frostlang$frostc$FixedArray** $tmp121 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp122 = *$tmp121;
frost$core$Bit $tmp123 = frost$core$Bit$init$builtin_bit($tmp122 != NULL);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s126, $tmp125, &$s127);
abort(); // unreachable
block11:;
frost$core$Int64 $tmp128 = (frost$core$Int64) {1};
frost$core$Bit $tmp129 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp130 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp128, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp129);
ITable* $tmp131 = ((frost$collections$ListView*) $tmp122)->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[2];
frost$collections$ListView* $tmp134 = $tmp132(((frost$collections$ListView*) $tmp122), $tmp130);
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp135 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp135, param0);
frost$core$MutableMethod* $tmp137 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp137, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp135));
ITable* $tmp138 = ((frost$collections$CollectionView*) $tmp134)->$class->itable;
while ($tmp138->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp138 = $tmp138->next;
}
$fn140 $tmp139 = $tmp138->methods[8];
frost$collections$Array* $tmp141 = $tmp139(((frost$collections$CollectionView*) $tmp134), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp137)));
ITable* $tmp142 = ((frost$collections$CollectionView*) $tmp141)->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[2];
frost$core$String* $tmp145 = $tmp143(((frost$collections$CollectionView*) $tmp141), &$s146);
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, $tmp145);
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp147, &$s149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($99:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($98:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($97:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($93:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing REF($86:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($83:org.frostlang.frostc.StubCodeGenerator._Closure4)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($80:frost.collections.ListView<frost.collections.ListView.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($61:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp116);
// unreffing REF($59:org.frostlang.frostc.FixedArray.T)
return $tmp148;
block8:;
frost$core$Int64 $tmp150 = (frost$core$Int64) {1};
frost$core$Bit $tmp151 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block13; else goto block14;
block13:;
// line 38
org$frostlang$frostc$FixedArray** $tmp153 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp154 = *$tmp153;
frost$core$Bit $tmp155 = frost$core$Bit$init$builtin_bit($tmp154 != NULL);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp157 = (frost$core$Int64) {38};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s158, $tmp157, &$s159);
abort(); // unreachable
block15:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {0};
frost$core$Object* $tmp161 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp154, $tmp160);
frost$core$String* $tmp162 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp161));
frost$core$String* $tmp163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp162, &$s164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($156:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp161);
// unreffing REF($153:org.frostlang.frostc.FixedArray.T)
return $tmp163;
block14:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {16};
frost$core$Bit $tmp166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block17; else goto block18;
block17:;
// line 41
org$frostlang$frostc$FixedArray** $tmp168 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp169 = *$tmp168;
frost$core$Bit $tmp170 = frost$core$Bit$init$builtin_bit($tmp169 != NULL);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp172 = (frost$core$Int64) {41};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s173, $tmp172, &$s174);
abort(); // unreachable
block19:;
frost$core$String* $tmp175 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp169), &$s176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($184:frost.core.String)
return $tmp175;
block18:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {18};
frost$core$Bit $tmp178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp177);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block21; else goto block22;
block21:;
// line 44
org$frostlang$frostc$FixedArray** $tmp180 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp181 = *$tmp180;
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit($tmp181 != NULL);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {44};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s185, $tmp184, &$s186);
abort(); // unreachable
block23:;
frost$core$String* $tmp187 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp181), &$s188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($206:frost.core.String)
return $tmp187;
block22:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {15};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block25; else goto block26;
block25:;
// line 47
org$frostlang$frostc$FixedArray** $tmp192 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp193 = *$tmp192;
frost$core$Bit $tmp194 = frost$core$Bit$init$builtin_bit($tmp193 != NULL);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s197, $tmp196, &$s198);
abort(); // unreachable
block27:;
frost$core$String* $tmp199 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp193), &$s200);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing REF($228:frost.core.String)
return $tmp199;
block26:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {17};
frost$core$Bit $tmp202 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp201);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block29; else goto block30;
block29:;
// line 50
org$frostlang$frostc$FixedArray** $tmp204 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp205 = *$tmp204;
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit($tmp205 != NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {50};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block31:;
frost$core$String* $tmp211 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp205), &$s212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($250:frost.core.String)
return $tmp211;
block30:;
// line 53
frost$core$String** $tmp213 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp214 = *$tmp213;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
return $tmp214;
block1:;
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit(false);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {29};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block33:;
abort(); // unreachable

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// line 59
*(&local0) = ((frost$core$Error*) NULL);
// line 60
frost$io$OutputStream** $tmp220 = &param0->out;
frost$io$OutputStream* $tmp221 = *$tmp220;
frost$core$String** $tmp222 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp223 = *$tmp222;
$fn225 $tmp224 = ($fn225) $tmp221->$class->vtable[17];
frost$core$Error* $tmp226 = $tmp224($tmp221, $tmp223);
// try error check
if ($tmp226 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local0) = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($9:frost.core.Error?)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($9:frost.core.Error?)
// line 61
frost$collections$Array** $tmp227 = &param1->fields;
frost$collections$Array* $tmp228 = *$tmp227;
ITable* $tmp229 = ((frost$collections$CollectionView*) $tmp228)->$class->itable;
while ($tmp229->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
frost$core$Int64 $tmp232 = $tmp230(((frost$collections$CollectionView*) $tmp228));
frost$core$Int64 $tmp233 = (frost$core$Int64) {0};
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 > $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block5; else goto block7;
block5:;
// line 62
frost$io$OutputStream** $tmp239 = &param0->out;
frost$io$OutputStream* $tmp240 = *$tmp239;
frost$collections$Array** $tmp241 = &param1->fields;
frost$collections$Array* $tmp242 = *$tmp241;
org$frostlang$frostc$StubCodeGenerator$_Closure6* $tmp243 = (org$frostlang$frostc$StubCodeGenerator$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure6$class);
org$frostlang$frostc$StubCodeGenerator$_Closure6$init$org$frostlang$frostc$StubCodeGenerator($tmp243, param0);
frost$core$MutableMethod* $tmp245 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp245, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure6$$anonymous5$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp243));
ITable* $tmp246 = ((frost$collections$CollectionView*) $tmp242)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[8];
frost$collections$Array* $tmp249 = $tmp247(((frost$collections$CollectionView*) $tmp242), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp245)));
ITable* $tmp250 = ((frost$collections$CollectionView*) $tmp249)->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[2];
frost$core$String* $tmp253 = $tmp251(((frost$collections$CollectionView*) $tmp249), &$s254);
frost$core$String* $tmp255 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s256, $tmp253);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp255, &$s258);
$fn260 $tmp259 = ($fn260) $tmp240->$class->vtable[17];
frost$core$Error* $tmp261 = $tmp259($tmp240, $tmp257);
// try error check
if ($tmp261 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = $tmp261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($60:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($58:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($57:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($52:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($45:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($42:org.frostlang.frostc.StubCodeGenerator._Closure6)
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($60:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($58:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($57:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($52:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($45:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($42:org.frostlang.frostc.StubCodeGenerator._Closure6)
goto block6;
block7:;
// line 1
// line 65
frost$io$OutputStream** $tmp262 = &param0->out;
frost$io$OutputStream* $tmp263 = *$tmp262;
$fn265 $tmp264 = ($fn265) $tmp263->$class->vtable[21];
frost$core$Error* $tmp266 = $tmp264($tmp263);
// try error check
if ($tmp266 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local0) = $tmp266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($116:frost.core.Error?)
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($116:frost.core.Error?)
goto block6;
block6:;
goto block2;
block1:;
// line 69
frost$core$Error* $tmp267 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp267));
// line 70
frost$core$Int64 $tmp268 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp268);
goto block2;
block2:;
frost$core$Error* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
// line 75
org$frostlang$frostc$Annotations** $tmp270 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp271 = *$tmp270;
frost$core$Bit $tmp272 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block1; else goto block2;
block1:;
// line 76
return;
block2:;
// line 78
frost$core$Weak** $tmp274 = &param0->compiler;
frost$core$Weak* $tmp275 = *$tmp274;
frost$core$Object* $tmp276 = frost$core$Weak$get$R$frost$core$Weak$T($tmp275);
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp276) != NULL);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp279 = (frost$core$Int64) {78};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s280, $tmp279, &$s281);
abort(); // unreachable
block5:;
frost$core$Bit $tmp282 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp276), param1);
frost$core$Bit $tmp283 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp282);
bool $tmp284 = $tmp283.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp276);
// unreffing REF($12:frost.core.Weak.T)
if ($tmp284) goto block3; else goto block4;
block3:;
// line 79
return;
block4:;
// line 81
*(&local0) = ((frost$core$Error*) NULL);
// line 82
org$frostlang$frostc$FieldDecl$Kind* $tmp285 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp286 = *$tmp285;
frost$core$Int64 $tmp287 = $tmp286.$rawValue;
frost$core$Int64 $tmp288 = (frost$core$Int64) {0};
frost$core$Bit $tmp289 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp287, $tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block10; else goto block11;
block10:;
// line 83
frost$io$OutputStream** $tmp291 = &param0->out;
frost$io$OutputStream* $tmp292 = *$tmp291;
$fn294 $tmp293 = ($fn294) $tmp292->$class->vtable[17];
frost$core$Error* $tmp295 = $tmp293($tmp292, &$s296);
// try error check
if ($tmp295 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local0) = $tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($45:frost.core.Error?)
goto block7;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($45:frost.core.Error?)
goto block9;
block11:;
frost$core$Int64 $tmp297 = (frost$core$Int64) {1};
frost$core$Bit $tmp298 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp287, $tmp297);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block14; else goto block15;
block14:;
// line 84
frost$io$OutputStream** $tmp300 = &param0->out;
frost$io$OutputStream* $tmp301 = *$tmp300;
$fn303 $tmp302 = ($fn303) $tmp301->$class->vtable[17];
frost$core$Error* $tmp304 = $tmp302($tmp301, &$s305);
// try error check
if ($tmp304 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local0) = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($68:frost.core.Error?)
goto block7;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($68:frost.core.Error?)
goto block9;
block15:;
frost$core$Int64 $tmp306 = (frost$core$Int64) {2};
frost$core$Bit $tmp307 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp287, $tmp306);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block18; else goto block19;
block18:;
// line 85
frost$io$OutputStream** $tmp309 = &param0->out;
frost$io$OutputStream* $tmp310 = *$tmp309;
$fn312 $tmp311 = ($fn312) $tmp310->$class->vtable[17];
frost$core$Error* $tmp313 = $tmp311($tmp310, &$s314);
// try error check
if ($tmp313 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local0) = $tmp313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($91:frost.core.Error?)
goto block7;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($91:frost.core.Error?)
goto block9;
block19:;
frost$core$Int64 $tmp315 = (frost$core$Int64) {3};
frost$core$Bit $tmp316 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp287, $tmp315);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block22; else goto block9;
block22:;
// line 86
frost$io$OutputStream** $tmp318 = &param0->out;
frost$io$OutputStream* $tmp319 = *$tmp318;
$fn321 $tmp320 = ($fn321) $tmp319->$class->vtable[17];
frost$core$Error* $tmp322 = $tmp320($tmp319, &$s323);
// try error check
if ($tmp322 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local0) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($114:frost.core.Error?)
goto block7;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($114:frost.core.Error?)
goto block9;
block9:;
// line 88
frost$io$OutputStream** $tmp324 = &param0->out;
frost$io$OutputStream* $tmp325 = *$tmp324;
frost$core$String** $tmp326 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp327 = *$tmp326;
$fn329 $tmp328 = ($fn329) $tmp325->$class->vtable[17];
frost$core$Error* $tmp330 = $tmp328($tmp325, $tmp327);
// try error check
if ($tmp330 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local0) = $tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing REF($136:frost.core.Error?)
goto block7;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing REF($136:frost.core.Error?)
// line 89
frost$io$OutputStream** $tmp331 = &param0->out;
frost$io$OutputStream* $tmp332 = *$tmp331;
$fn334 $tmp333 = ($fn334) $tmp332->$class->vtable[17];
frost$core$Error* $tmp335 = $tmp333($tmp332, &$s336);
// try error check
if ($tmp335 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local0) = $tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// unreffing REF($154:frost.core.Error?)
goto block7;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// unreffing REF($154:frost.core.Error?)
// line 90
frost$io$OutputStream** $tmp337 = &param0->out;
frost$io$OutputStream* $tmp338 = *$tmp337;
org$frostlang$frostc$Type** $tmp339 = &param1->type;
org$frostlang$frostc$Type* $tmp340 = *$tmp339;
frost$core$String* $tmp341 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp340);
$fn343 $tmp342 = ($fn343) $tmp338->$class->vtable[17];
frost$core$Error* $tmp344 = $tmp342($tmp338, $tmp341);
// try error check
if ($tmp344 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local0) = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($175:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// unreffing REF($173:frost.core.String)
goto block7;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($175:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// unreffing REF($173:frost.core.String)
// line 91
org$frostlang$frostc$FieldDecl$Kind* $tmp345 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp346 = *$tmp345;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp347;
$tmp347 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp347->value = $tmp346;
frost$core$Int64 $tmp348 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp349 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp348);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp350;
$tmp350 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp350->value = $tmp349;
ITable* $tmp351 = ((frost$core$Equatable*) $tmp347)->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp351 = $tmp351->next;
}
$fn353 $tmp352 = $tmp351->methods[0];
frost$core$Bit $tmp354 = $tmp352(((frost$core$Equatable*) $tmp347), ((frost$core$Equatable*) $tmp350));
bool $tmp355 = $tmp354.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp350)));
// unreffing REF($202:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp347)));
// unreffing REF($198:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp355) goto block31; else goto block32;
block31:;
// line 92
frost$io$OutputStream** $tmp356 = &param0->out;
frost$io$OutputStream* $tmp357 = *$tmp356;
$fn359 $tmp358 = ($fn359) $tmp357->$class->vtable[17];
frost$core$Error* $tmp360 = $tmp358($tmp357, &$s361);
// try error check
if ($tmp360 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local0) = $tmp360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing REF($217:frost.core.Error?)
goto block7;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing REF($217:frost.core.Error?)
// line 93
frost$io$OutputStream** $tmp362 = &param0->out;
frost$io$OutputStream* $tmp363 = *$tmp362;
org$frostlang$frostc$ASTNode** $tmp364 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp365 = *$tmp364;
frost$core$Bit $tmp366 = frost$core$Bit$init$builtin_bit($tmp365 != NULL);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp368 = (frost$core$Int64) {93};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s369, $tmp368, &$s370);
abort(); // unreachable
block35:;
$fn372 $tmp371 = ($fn372) $tmp363->$class->vtable[18];
frost$core$Error* $tmp373 = $tmp371($tmp363, ((frost$core$Object*) $tmp365));
// try error check
if ($tmp373 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local0) = $tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing REF($245:frost.core.Error?)
goto block7;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing REF($245:frost.core.Error?)
goto block32;
block32:;
// line 95
frost$io$OutputStream** $tmp374 = &param0->out;
frost$io$OutputStream* $tmp375 = *$tmp374;
$fn377 $tmp376 = ($fn377) $tmp375->$class->vtable[21];
frost$core$Error* $tmp378 = $tmp376($tmp375);
// try error check
if ($tmp378 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local0) = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing REF($264:frost.core.Error?)
goto block7;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing REF($264:frost.core.Error?)
goto block8;
block7:;
// line 98
frost$core$Error* $tmp379 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp379));
// line 99
frost$core$Int64 $tmp380 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp380);
goto block8;
block8:;
frost$core$Error* $tmp381 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// line 104
org$frostlang$frostc$Annotations** $tmp382 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp383 = *$tmp382;
frost$core$Bit $tmp384 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp383);
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block1; else goto block2;
block1:;
// line 105
return;
block2:;
// line 107
frost$core$Weak** $tmp386 = &param0->compiler;
frost$core$Weak* $tmp387 = *$tmp386;
frost$core$Object* $tmp388 = frost$core$Weak$get$R$frost$core$Weak$T($tmp387);
frost$core$Bit $tmp389 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp388) != NULL);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp391 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s392, $tmp391, &$s393);
abort(); // unreachable
block5:;
frost$core$Bit $tmp394 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp388), param1);
frost$core$Bit $tmp395 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp394);
bool $tmp396 = $tmp395.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp388);
// unreffing REF($12:frost.core.Weak.T)
if ($tmp396) goto block3; else goto block4;
block3:;
// line 108
return;
block4:;
// line 110
*(&local0) = ((frost$core$Error*) NULL);
// line 111
frost$io$OutputStream** $tmp397 = &param0->out;
frost$io$OutputStream* $tmp398 = *$tmp397;
org$frostlang$frostc$Annotations** $tmp399 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp400 = *$tmp399;
$fn402 $tmp401 = ($fn402) $tmp398->$class->vtable[18];
frost$core$Error* $tmp403 = $tmp401($tmp398, ((frost$core$Object*) $tmp400));
// try error check
if ($tmp403 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local0) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($40:frost.core.Error?)
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($40:frost.core.Error?)
// line 112
org$frostlang$frostc$MethodDecl$Kind* $tmp404 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp405 = *$tmp404;
frost$core$Int64 $tmp406 = $tmp405.$rawValue;
frost$core$Int64 $tmp407 = (frost$core$Int64) {0};
frost$core$Bit $tmp408 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp406, $tmp407);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block12; else goto block13;
block12:;
// line 114
frost$io$OutputStream** $tmp410 = &param0->out;
frost$io$OutputStream* $tmp411 = *$tmp410;
$fn413 $tmp412 = ($fn413) $tmp411->$class->vtable[17];
frost$core$Error* $tmp414 = $tmp412($tmp411, &$s415);
// try error check
if ($tmp414 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = $tmp414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// unreffing REF($66:frost.core.Error?)
goto block7;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// unreffing REF($66:frost.core.Error?)
goto block11;
block13:;
frost$core$Int64 $tmp416 = (frost$core$Int64) {1};
frost$core$Bit $tmp417 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp406, $tmp416);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block16; else goto block17;
block16:;
// line 117
frost$io$OutputStream** $tmp419 = &param0->out;
frost$io$OutputStream* $tmp420 = *$tmp419;
$fn422 $tmp421 = ($fn422) $tmp420->$class->vtable[17];
frost$core$Error* $tmp423 = $tmp421($tmp420, &$s424);
// try error check
if ($tmp423 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local0) = $tmp423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
// unreffing REF($89:frost.core.Error?)
goto block7;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
// unreffing REF($89:frost.core.Error?)
goto block11;
block17:;
frost$core$Int64 $tmp425 = (frost$core$Int64) {2};
frost$core$Bit $tmp426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp406, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block20; else goto block21;
block20:;
goto block11;
block21:;
// line 122
frost$core$Bit $tmp428 = frost$core$Bit$init$builtin_bit(false);
bool $tmp429 = $tmp428.value;
if ($tmp429) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp430 = (frost$core$Int64) {122};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s431, $tmp430);
abort(); // unreachable
block22:;
goto block11;
block11:;
// line 125
frost$io$OutputStream** $tmp432 = &param0->out;
frost$io$OutputStream* $tmp433 = *$tmp432;
frost$core$String** $tmp434 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp435 = *$tmp434;
$fn437 $tmp436 = ($fn437) $tmp433->$class->vtable[17];
frost$core$Error* $tmp438 = $tmp436($tmp433, $tmp435);
// try error check
if ($tmp438 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local0) = $tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// unreffing REF($124:frost.core.Error?)
goto block7;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// unreffing REF($124:frost.core.Error?)
// line 126
frost$collections$Array** $tmp439 = &param1->genericParameters;
frost$collections$Array* $tmp440 = *$tmp439;
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit($tmp440 != NULL);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block26; else goto block27;
block26:;
// line 127
frost$io$OutputStream** $tmp443 = &param0->out;
frost$io$OutputStream* $tmp444 = *$tmp443;
frost$collections$Array** $tmp445 = &param1->genericParameters;
frost$collections$Array* $tmp446 = *$tmp445;
frost$core$Bit $tmp447 = frost$core$Bit$init$builtin_bit($tmp446 != NULL);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp449 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s450, $tmp449, &$s451);
abort(); // unreachable
block28:;
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp452 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp452, param0);
frost$core$MutableMethod* $tmp454 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp454, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp452));
ITable* $tmp455 = ((frost$collections$CollectionView*) $tmp446)->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[8];
frost$collections$Array* $tmp458 = $tmp456(((frost$collections$CollectionView*) $tmp446), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp454)));
ITable* $tmp459 = ((frost$collections$CollectionView*) $tmp458)->$class->itable;
while ($tmp459->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp459 = $tmp459->next;
}
$fn461 $tmp460 = $tmp459->methods[2];
frost$core$String* $tmp462 = $tmp460(((frost$collections$CollectionView*) $tmp458), &$s463);
frost$core$String* $tmp464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s465, $tmp462);
frost$core$String* $tmp466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp464, &$s467);
$fn469 $tmp468 = ($fn469) $tmp444->$class->vtable[17];
frost$core$Error* $tmp470 = $tmp468($tmp444, $tmp466);
// try error check
if ($tmp470 == NULL) goto block30; else goto block31;
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local0) = $tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// unreffing REF($176:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing REF($174:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing REF($173:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing REF($172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing REF($168:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($161:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
// unreffing REF($158:org.frostlang.frostc.StubCodeGenerator._Closure8)
goto block7;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// unreffing REF($176:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing REF($174:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing REF($173:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing REF($172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing REF($168:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($161:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
// unreffing REF($158:org.frostlang.frostc.StubCodeGenerator._Closure8)
goto block27;
block27:;
// line 131
frost$io$OutputStream** $tmp471 = &param0->out;
frost$io$OutputStream* $tmp472 = *$tmp471;
$fn474 $tmp473 = ($fn474) $tmp472->$class->vtable[17];
frost$core$Error* $tmp475 = $tmp473($tmp472, &$s476);
// try error check
if ($tmp475 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local0) = $tmp475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($231:frost.core.Error?)
goto block7;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($231:frost.core.Error?)
// line 132
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s477));
frost$core$String* $tmp478 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local1) = &$s479;
// line 133
frost$collections$Array** $tmp480 = &param1->parameters;
frost$collections$Array* $tmp481 = *$tmp480;
ITable* $tmp482 = ((frost$collections$Iterable*) $tmp481)->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[0];
frost$collections$Iterator* $tmp485 = $tmp483(((frost$collections$Iterable*) $tmp481));
goto block34;
block34:;
ITable* $tmp486 = $tmp485->$class->itable;
while ($tmp486->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp486 = $tmp486->next;
}
$fn488 $tmp487 = $tmp486->methods[0];
frost$core$Bit $tmp489 = $tmp487($tmp485);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block36; else goto block35;
block35:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp491 = $tmp485->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[1];
frost$core$Object* $tmp494 = $tmp492($tmp485);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp494)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp495 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp494);
// line 134
frost$io$OutputStream** $tmp496 = &param0->out;
frost$io$OutputStream* $tmp497 = *$tmp496;
frost$core$String* $tmp498 = *(&local1);
frost$core$String* $tmp499 = frost$core$String$get_asString$R$frost$core$String($tmp498);
frost$core$String* $tmp500 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp499, &$s501);
org$frostlang$frostc$MethodDecl$Parameter* $tmp502 = *(&local2);
frost$core$String** $tmp503 = &$tmp502->name;
frost$core$String* $tmp504 = *$tmp503;
frost$core$String* $tmp505 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp500, $tmp504);
frost$core$String* $tmp506 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp505, &$s507);
org$frostlang$frostc$MethodDecl$Parameter* $tmp508 = *(&local2);
org$frostlang$frostc$Type** $tmp509 = &$tmp508->type;
org$frostlang$frostc$Type* $tmp510 = *$tmp509;
frost$core$String* $tmp511 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp510);
frost$core$String* $tmp512 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp506, $tmp511);
frost$core$String* $tmp513 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp512, &$s514);
$fn516 $tmp515 = ($fn516) $tmp497->$class->vtable[17];
frost$core$Error* $tmp517 = $tmp515($tmp497, $tmp513);
// try error check
if ($tmp517 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local0) = $tmp517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing REF($296:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// unreffing REF($294:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing REF($293:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// unreffing REF($292:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing REF($288:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// unreffing REF($287:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// unreffing REF($283:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($282:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp494);
// unreffing REF($270:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp518 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing p
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing REF($259:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$String* $tmp519 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing REF($296:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// unreffing REF($294:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing REF($293:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// unreffing REF($292:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing REF($288:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// unreffing REF($287:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// unreffing REF($283:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($282:frost.core.String)
// line 135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s520));
frost$core$String* $tmp521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local1) = &$s522;
frost$core$Frost$unref$frost$core$Object$Q($tmp494);
// unreffing REF($270:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp523 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// unreffing p
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block34;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing REF($259:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 137
frost$io$OutputStream** $tmp524 = &param0->out;
frost$io$OutputStream* $tmp525 = *$tmp524;
$fn527 $tmp526 = ($fn527) $tmp525->$class->vtable[17];
frost$core$Error* $tmp528 = $tmp526($tmp525, &$s529);
// try error check
if ($tmp528 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local0) = $tmp528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing REF($391:frost.core.Error?)
frost$core$String* $tmp530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing REF($391:frost.core.Error?)
// line 138
org$frostlang$frostc$MethodDecl$Kind* $tmp531 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp532 = *$tmp531;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp533;
$tmp533 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp533->value = $tmp532;
frost$core$Int64 $tmp534 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp535 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp534);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp536;
$tmp536 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp536->value = $tmp535;
ITable* $tmp537 = ((frost$core$Equatable*) $tmp533)->$class->itable;
while ($tmp537->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp537 = $tmp537->next;
}
$fn539 $tmp538 = $tmp537->methods[0];
frost$core$Bit $tmp540 = $tmp538(((frost$core$Equatable*) $tmp533), ((frost$core$Equatable*) $tmp536));
bool $tmp541 = $tmp540.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp536)));
// unreffing REF($417:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp533)));
// unreffing REF($413:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp541) goto block41; else goto block43;
block41:;
// line 139
frost$io$OutputStream** $tmp542 = &param0->out;
frost$io$OutputStream* $tmp543 = *$tmp542;
$fn545 $tmp544 = ($fn545) $tmp543->$class->vtable[17];
frost$core$Error* $tmp546 = $tmp544($tmp543, &$s547);
// try error check
if ($tmp546 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local0) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing REF($432:frost.core.Error?)
frost$core$String* $tmp548 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing REF($432:frost.core.Error?)
goto block42;
block43:;
// line 141
org$frostlang$frostc$Type** $tmp549 = &param1->returnType;
org$frostlang$frostc$Type* $tmp550 = *$tmp549;
org$frostlang$frostc$Type* $tmp551 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp552 = ((frost$core$Equatable*) $tmp550)->$class->itable;
while ($tmp552->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp552 = $tmp552->next;
}
$fn554 $tmp553 = $tmp552->methods[1];
frost$core$Bit $tmp555 = $tmp553(((frost$core$Equatable*) $tmp550), ((frost$core$Equatable*) $tmp551));
bool $tmp556 = $tmp555.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// unreffing REF($457:org.frostlang.frostc.Type)
if ($tmp556) goto block46; else goto block47;
block46:;
// line 142
frost$io$OutputStream** $tmp557 = &param0->out;
frost$io$OutputStream* $tmp558 = *$tmp557;
org$frostlang$frostc$Type** $tmp559 = &param1->returnType;
org$frostlang$frostc$Type* $tmp560 = *$tmp559;
frost$core$String* $tmp561 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp560);
frost$core$String* $tmp562 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s563, $tmp561);
frost$core$String* $tmp564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp562, &$s565);
$fn567 $tmp566 = ($fn567) $tmp558->$class->vtable[19];
frost$core$Error* $tmp568 = $tmp566($tmp558, $tmp564);
// try error check
if ($tmp568 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local0) = $tmp568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing REF($475:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing REF($473:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($472:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// unreffing REF($471:frost.core.String)
frost$core$String* $tmp569 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing REF($475:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing REF($473:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($472:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// unreffing REF($471:frost.core.String)
goto block47;
block47:;
goto block42;
block42:;
// line 144
org$frostlang$frostc$Annotations** $tmp570 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp571 = *$tmp570;
frost$core$Bit $tmp572 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit($tmp571);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block50; else goto block51;
block50:;
// line 145
frost$io$OutputStream** $tmp574 = &param0->out;
frost$io$OutputStream* $tmp575 = *$tmp574;
$fn577 $tmp576 = ($fn577) $tmp575->$class->vtable[17];
frost$core$Error* $tmp578 = $tmp576($tmp575, &$s579);
// try error check
if ($tmp578 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local0) = $tmp578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($524:frost.core.Error?)
frost$core$String* $tmp580 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($524:frost.core.Error?)
goto block51;
block51:;
frost$core$String* $tmp581 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block8;
block7:;
// line 149
frost$core$Error* $tmp582 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp582));
// line 150
frost$core$Int64 $tmp583 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp583);
goto block8;
block8:;
frost$core$Error* $tmp584 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing error
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
frost$core$Weak** $tmp585 = &param0->compiler;
frost$core$Weak* $tmp586 = *$tmp585;
frost$core$Object* $tmp587 = frost$core$Weak$get$R$frost$core$Weak$T($tmp586);
frost$core$Bit $tmp588 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp587) != NULL);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp590 = (frost$core$Int64) {158};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s591, $tmp590, &$s592);
abort(); // unreachable
block5:;
frost$core$Bit $tmp593 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp587), param1);
frost$core$Bit $tmp594 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp593);
bool $tmp595 = $tmp594.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp587);
// unreffing REF($6:frost.core.Weak.T)
if ($tmp595) goto block3; else goto block4;
block3:;
// line 159
frost$core$Error* $tmp596 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 161
frost$core$String** $tmp597 = &param1->name;
frost$core$String* $tmp598 = *$tmp597;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$String* $tmp599 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local1) = $tmp598;
// line 162
frost$core$String** $tmp600 = &param1->name;
frost$core$String* $tmp601 = *$tmp600;
frost$core$RegularExpression* $tmp602 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp602, &$s603);
frost$collections$ListView* $tmp604 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q($tmp601, $tmp602);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$collections$ListView* $tmp605 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local2) = $tmp604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($45:frost.collections.ListView<frost.core.String>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
// unreffing REF($43:frost.core.RegularExpression)
// line 163
frost$collections$ListView* $tmp606 = *(&local2);
frost$core$Bit $tmp607 = frost$core$Bit$init$builtin_bit($tmp606 != NULL);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block7; else goto block8;
block7:;
// line 164
frost$core$Weak** $tmp609 = &param1->owner;
frost$core$Weak* $tmp610 = *$tmp609;
frost$core$Object* $tmp611 = frost$core$Weak$get$R$frost$core$Weak$T($tmp610);
frost$core$Bit $tmp612 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp611) == NULL);
bool $tmp613 = $tmp612.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp611);
// unreffing REF($69:frost.core.Weak.T)
if ($tmp613) goto block9; else goto block10;
block9:;
// line 165
frost$io$OutputStream** $tmp614 = &param0->out;
frost$io$OutputStream* $tmp615 = *$tmp614;
frost$collections$ListView* $tmp616 = *(&local2);
frost$core$Bit $tmp617 = frost$core$Bit$init$builtin_bit($tmp616 != NULL);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {165};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s620, $tmp619, &$s621);
abort(); // unreachable
block11:;
frost$core$Int64 $tmp622 = (frost$core$Int64) {0};
ITable* $tmp623 = $tmp616->$class->itable;
while ($tmp623->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp623 = $tmp623->next;
}
$fn625 $tmp624 = $tmp623->methods[0];
frost$core$Object* $tmp626 = $tmp624($tmp616, $tmp622);
frost$core$String* $tmp627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s628, ((frost$core$String*) $tmp626));
frost$core$String* $tmp629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp627, &$s630);
$fn632 $tmp631 = ($fn632) $tmp615->$class->vtable[19];
frost$core$Error* $tmp633 = $tmp631($tmp615, $tmp629);
// try error check
if ($tmp633 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local0) = $tmp633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing REF($98:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($96:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp626);
// unreffing REF($93:frost.collections.ListView.T)
frost$collections$ListView* $tmp634 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp635 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing REF($98:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($96:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp626);
// unreffing REF($93:frost.collections.ListView.T)
goto block10;
block10:;
// line 167
frost$collections$ListView* $tmp636 = *(&local2);
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit($tmp636 != NULL);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp639 = (frost$core$Int64) {167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s640, $tmp639, &$s641);
abort(); // unreachable
block15:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {1};
ITable* $tmp643 = $tmp636->$class->itable;
while ($tmp643->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp643 = $tmp643->next;
}
$fn645 $tmp644 = $tmp643->methods[0];
frost$core$Object* $tmp646 = $tmp644($tmp636, $tmp642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp646)));
frost$core$String* $tmp647 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local1) = ((frost$core$String*) $tmp646);
frost$core$Frost$unref$frost$core$Object$Q($tmp646);
// unreffing REF($154:frost.collections.ListView.T)
goto block8;
block8:;
// line 169
frost$io$OutputStream** $tmp648 = &param0->out;
frost$io$OutputStream* $tmp649 = *$tmp648;
$fn651 $tmp650 = ($fn651) $tmp649->$class->vtable[19];
frost$core$Error* $tmp652 = $tmp650($tmp649, &$s653);
// try error check
if ($tmp652 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local0) = $tmp652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// unreffing REF($170:frost.core.Error?)
frost$collections$ListView* $tmp654 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// unreffing REF($170:frost.core.Error?)
// line 170
frost$io$OutputStream** $tmp656 = &param0->out;
frost$io$OutputStream* $tmp657 = *$tmp656;
org$frostlang$frostc$Annotations** $tmp658 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp659 = *$tmp658;
$fn661 $tmp660 = ($fn661) $tmp657->$class->vtable[18];
frost$core$Error* $tmp662 = $tmp660($tmp657, ((frost$core$Object*) $tmp659));
// try error check
if ($tmp662 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local0) = $tmp662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($201:frost.core.Error?)
frost$collections$ListView* $tmp663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($201:frost.core.Error?)
// line 171
org$frostlang$frostc$ClassDecl$Kind* $tmp665 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp666 = *$tmp665;
frost$core$Int64 $tmp667 = $tmp666.$rawValue;
frost$core$Int64 $tmp668 = (frost$core$Int64) {0};
frost$core$Bit $tmp669 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp667, $tmp668);
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block22; else goto block23;
block22:;
// line 172
frost$io$OutputStream** $tmp671 = &param0->out;
frost$io$OutputStream* $tmp672 = *$tmp671;
$fn674 $tmp673 = ($fn674) $tmp672->$class->vtable[17];
frost$core$Error* $tmp675 = $tmp673($tmp672, &$s676);
// try error check
if ($tmp675 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local0) = $tmp675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($237:frost.core.Error?)
frost$collections$ListView* $tmp677 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp678 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($237:frost.core.Error?)
goto block21;
block23:;
frost$core$Int64 $tmp679 = (frost$core$Int64) {1};
frost$core$Bit $tmp680 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp667, $tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block26; else goto block27;
block26:;
// line 173
frost$io$OutputStream** $tmp682 = &param0->out;
frost$io$OutputStream* $tmp683 = *$tmp682;
$fn685 $tmp684 = ($fn685) $tmp683->$class->vtable[17];
frost$core$Error* $tmp686 = $tmp684($tmp683, &$s687);
// try error check
if ($tmp686 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local0) = $tmp686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing REF($270:frost.core.Error?)
frost$collections$ListView* $tmp688 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp689 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing REF($270:frost.core.Error?)
goto block21;
block27:;
frost$core$Int64 $tmp690 = (frost$core$Int64) {2};
frost$core$Bit $tmp691 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp667, $tmp690);
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block30; else goto block21;
block30:;
// line 174
frost$io$OutputStream** $tmp693 = &param0->out;
frost$io$OutputStream* $tmp694 = *$tmp693;
$fn696 $tmp695 = ($fn696) $tmp694->$class->vtable[17];
frost$core$Error* $tmp697 = $tmp695($tmp694, &$s698);
// try error check
if ($tmp697 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local0) = $tmp697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing REF($303:frost.core.Error?)
frost$collections$ListView* $tmp699 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp700 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing REF($303:frost.core.Error?)
goto block21;
block21:;
// line 176
frost$io$OutputStream** $tmp701 = &param0->out;
frost$io$OutputStream* $tmp702 = *$tmp701;
frost$core$String* $tmp703 = *(&local1);
$fn705 $tmp704 = ($fn705) $tmp702->$class->vtable[17];
frost$core$Error* $tmp706 = $tmp704($tmp702, $tmp703);
// try error check
if ($tmp706 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local0) = $tmp706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing REF($333:frost.core.Error?)
frost$collections$ListView* $tmp707 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp708 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing REF($333:frost.core.Error?)
// line 177
frost$collections$List** $tmp709 = &param1->parameters;
frost$collections$List* $tmp710 = *$tmp709;
ITable* $tmp711 = ((frost$collections$CollectionView*) $tmp710)->$class->itable;
while ($tmp711->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp711 = $tmp711->next;
}
$fn713 $tmp712 = $tmp711->methods[0];
frost$core$Int64 $tmp714 = $tmp712(((frost$collections$CollectionView*) $tmp710));
frost$core$Int64 $tmp715 = (frost$core$Int64) {0};
int64_t $tmp716 = $tmp714.value;
int64_t $tmp717 = $tmp715.value;
bool $tmp718 = $tmp716 > $tmp717;
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block35; else goto block36;
block35:;
// line 178
frost$io$OutputStream** $tmp721 = &param0->out;
frost$io$OutputStream* $tmp722 = *$tmp721;
frost$collections$List** $tmp723 = &param1->parameters;
frost$collections$List* $tmp724 = *$tmp723;
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp725 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp725, param0);
frost$core$MutableMethod* $tmp727 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp727, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp725));
ITable* $tmp728 = ((frost$collections$CollectionView*) $tmp724)->$class->itable;
while ($tmp728->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp728 = $tmp728->next;
}
$fn730 $tmp729 = $tmp728->methods[8];
frost$collections$Array* $tmp731 = $tmp729(((frost$collections$CollectionView*) $tmp724), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp727)));
ITable* $tmp732 = ((frost$collections$CollectionView*) $tmp731)->$class->itable;
while ($tmp732->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp732 = $tmp732->next;
}
$fn734 $tmp733 = $tmp732->methods[2];
frost$core$String* $tmp735 = $tmp733(((frost$collections$CollectionView*) $tmp731), &$s736);
frost$core$String* $tmp737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s738, $tmp735);
frost$core$String* $tmp739 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp737, &$s740);
$fn742 $tmp741 = ($fn742) $tmp722->$class->vtable[17];
frost$core$Error* $tmp743 = $tmp741($tmp722, $tmp739);
// try error check
if ($tmp743 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local0) = $tmp743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// unreffing REF($394:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// unreffing REF($392:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// unreffing REF($391:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($390:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// unreffing REF($386:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing REF($379:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing REF($376:org.frostlang.frostc.StubCodeGenerator._Closure10)
frost$collections$ListView* $tmp744 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp745 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// unreffing REF($394:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// unreffing REF($392:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// unreffing REF($391:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($390:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// unreffing REF($386:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing REF($379:frost.core.MutableMethod)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing REF($376:org.frostlang.frostc.StubCodeGenerator._Closure10)
goto block36;
block36:;
// line 181
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s746));
frost$core$String* $tmp747 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local3) = &$s748;
// line 182
org$frostlang$frostc$ClassDecl$Kind* $tmp749 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp750 = *$tmp749;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp751;
$tmp751 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp751->value = $tmp750;
frost$core$Int64 $tmp752 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp753 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp752);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp754;
$tmp754 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp754->value = $tmp753;
ITable* $tmp755 = ((frost$core$Equatable*) $tmp751)->$class->itable;
while ($tmp755->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[1];
frost$core$Bit $tmp758 = $tmp756(((frost$core$Equatable*) $tmp751), ((frost$core$Equatable*) $tmp754));
bool $tmp759 = $tmp758.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp754)));
// unreffing REF($470:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp751)));
// unreffing REF($466:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp759) goto block39; else goto block40;
block39:;
// line 183
org$frostlang$frostc$Type** $tmp760 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp761 = *$tmp760;
frost$core$Bit $tmp762 = frost$core$Bit$init$builtin_bit($tmp761 != NULL);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block43; else goto block44;
block43:;
org$frostlang$frostc$ClassDecl$Kind* $tmp764 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp765 = *$tmp764;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp766;
$tmp766 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp766->value = $tmp765;
frost$core$Int64 $tmp767 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp768 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp767);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp769;
$tmp769 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp769->value = $tmp768;
ITable* $tmp770 = ((frost$core$Equatable*) $tmp766)->$class->itable;
while ($tmp770->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp770 = $tmp770->next;
}
$fn772 $tmp771 = $tmp770->methods[1];
frost$core$Bit $tmp773 = $tmp771(((frost$core$Equatable*) $tmp766), ((frost$core$Equatable*) $tmp769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp769)));
// unreffing REF($494:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp766)));
// unreffing REF($490:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local4) = $tmp773;
goto block45;
block44:;
*(&local4) = $tmp762;
goto block45;
block45:;
frost$core$Bit $tmp774 = *(&local4);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block41; else goto block42;
block41:;
// line 184
frost$io$OutputStream** $tmp776 = &param0->out;
frost$io$OutputStream* $tmp777 = *$tmp776;
frost$core$String* $tmp778 = *(&local3);
frost$core$String* $tmp779 = frost$core$String$get_asString$R$frost$core$String($tmp778);
frost$core$String* $tmp780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp779, &$s781);
org$frostlang$frostc$Type** $tmp782 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp783 = *$tmp782;
frost$core$Bit $tmp784 = frost$core$Bit$init$builtin_bit($tmp783 != NULL);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp786 = (frost$core$Int64) {184};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s787, $tmp786, &$s788);
abort(); // unreachable
block46:;
frost$core$String* $tmp789 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp783);
frost$core$String* $tmp790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp780, $tmp789);
frost$core$String* $tmp791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp790, &$s792);
$fn794 $tmp793 = ($fn794) $tmp777->$class->vtable[17];
frost$core$Error* $tmp795 = $tmp793($tmp777, $tmp791);
// try error check
if ($tmp795 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local0) = $tmp795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($530:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
// unreffing REF($528:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
// unreffing REF($527:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// unreffing REF($526:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// unreffing REF($515:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// unreffing REF($514:frost.core.String)
frost$core$String* $tmp796 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing separator
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp797 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp798 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($530:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
// unreffing REF($528:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
// unreffing REF($527:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// unreffing REF($526:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// unreffing REF($515:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// unreffing REF($514:frost.core.String)
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s799));
frost$core$String* $tmp800 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local3) = &$s801;
goto block42;
block42:;
// line 187
frost$collections$Array** $tmp802 = &param1->rawInterfaces;
frost$collections$Array* $tmp803 = *$tmp802;
ITable* $tmp804 = ((frost$collections$Iterable*) $tmp803)->$class->itable;
while ($tmp804->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp804 = $tmp804->next;
}
$fn806 $tmp805 = $tmp804->methods[0];
frost$collections$Iterator* $tmp807 = $tmp805(((frost$collections$Iterable*) $tmp803));
goto block50;
block50:;
ITable* $tmp808 = $tmp807->$class->itable;
while ($tmp808->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp808 = $tmp808->next;
}
$fn810 $tmp809 = $tmp808->methods[0];
frost$core$Bit $tmp811 = $tmp809($tmp807);
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block52; else goto block51;
block51:;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp813 = $tmp807->$class->itable;
while ($tmp813->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp813 = $tmp813->next;
}
$fn815 $tmp814 = $tmp813->methods[1];
frost$core$Object* $tmp816 = $tmp814($tmp807);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp816)));
org$frostlang$frostc$Type* $tmp817 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp816);
// line 188
frost$io$OutputStream** $tmp818 = &param0->out;
frost$io$OutputStream* $tmp819 = *$tmp818;
frost$core$String* $tmp820 = *(&local3);
frost$core$String* $tmp821 = frost$core$String$get_asString$R$frost$core$String($tmp820);
frost$core$String* $tmp822 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp821, &$s823);
org$frostlang$frostc$Type* $tmp824 = *(&local5);
frost$core$String* $tmp825 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp824);
frost$core$String* $tmp826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp822, $tmp825);
frost$core$String* $tmp827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp826, &$s828);
$fn830 $tmp829 = ($fn830) $tmp819->$class->vtable[17];
frost$core$Error* $tmp831 = $tmp829($tmp819, $tmp827);
// try error check
if ($tmp831 == NULL) goto block53; else goto block54;
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local0) = $tmp831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($633:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// unreffing REF($631:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing REF($630:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing REF($629:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($627:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// unreffing REF($626:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp816);
// unreffing REF($614:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp832 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing intf
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing REF($603:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$String* $tmp833 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing separator
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp834 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp835 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($633:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// unreffing REF($631:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing REF($630:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing REF($629:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($627:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// unreffing REF($626:frost.core.String)
// line 189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s836));
frost$core$String* $tmp837 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local3) = &$s838;
frost$core$Frost$unref$frost$core$Object$Q($tmp816);
// unreffing REF($614:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp839 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing intf
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block50;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing REF($603:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block40;
block40:;
// line 192
frost$io$OutputStream** $tmp840 = &param0->out;
frost$io$OutputStream* $tmp841 = *$tmp840;
$fn843 $tmp842 = ($fn843) $tmp841->$class->vtable[17];
frost$core$Error* $tmp844 = $tmp842($tmp841, &$s845);
// try error check
if ($tmp844 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local0) = $tmp844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($727:frost.core.Error?)
frost$core$String* $tmp846 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing separator
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp847 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp848 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($727:frost.core.Error?)
// line 193
frost$collections$Array** $tmp849 = &param1->choiceCases;
frost$collections$Array* $tmp850 = *$tmp849;
ITable* $tmp851 = ((frost$collections$Iterable*) $tmp850)->$class->itable;
while ($tmp851->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp851 = $tmp851->next;
}
$fn853 $tmp852 = $tmp851->methods[0];
frost$collections$Iterator* $tmp854 = $tmp852(((frost$collections$Iterable*) $tmp850));
goto block57;
block57:;
ITable* $tmp855 = $tmp854->$class->itable;
while ($tmp855->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp855 = $tmp855->next;
}
$fn857 $tmp856 = $tmp855->methods[0];
frost$core$Bit $tmp858 = $tmp856($tmp854);
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block59; else goto block58;
block58:;
*(&local6) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp860 = $tmp854->$class->itable;
while ($tmp860->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp860 = $tmp860->next;
}
$fn862 $tmp861 = $tmp860->methods[1];
frost$core$Object* $tmp863 = $tmp861($tmp854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp863)));
org$frostlang$frostc$ChoiceCase* $tmp864 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local6) = ((org$frostlang$frostc$ChoiceCase*) $tmp863);
// line 194
org$frostlang$frostc$ChoiceCase* $tmp865 = *(&local6);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp865);
frost$core$Frost$unref$frost$core$Object$Q($tmp863);
// unreffing REF($773:frost.collections.Iterator.T)
org$frostlang$frostc$ChoiceCase* $tmp866 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block57;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($762:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 196
frost$collections$Array** $tmp867 = &param1->classes;
frost$collections$Array* $tmp868 = *$tmp867;
ITable* $tmp869 = ((frost$collections$Iterable*) $tmp868)->$class->itable;
while ($tmp869->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp869 = $tmp869->next;
}
$fn871 $tmp870 = $tmp869->methods[0];
frost$collections$Iterator* $tmp872 = $tmp870(((frost$collections$Iterable*) $tmp868));
goto block60;
block60:;
ITable* $tmp873 = $tmp872->$class->itable;
while ($tmp873->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp873 = $tmp873->next;
}
$fn875 $tmp874 = $tmp873->methods[0];
frost$core$Bit $tmp876 = $tmp874($tmp872);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block62; else goto block61;
block61:;
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp878 = $tmp872->$class->itable;
while ($tmp878->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp878 = $tmp878->next;
}
$fn880 $tmp879 = $tmp878->methods[1];
frost$core$Object* $tmp881 = $tmp879($tmp872);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp881)));
org$frostlang$frostc$ClassDecl* $tmp882 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) $tmp881);
// line 197
org$frostlang$frostc$ClassDecl* $tmp883 = *(&local7);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp883);
frost$core$Frost$unref$frost$core$Object$Q($tmp881);
// unreffing REF($813:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp884 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing sub
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block60;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($802:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 199
frost$collections$Array** $tmp885 = &param1->fields;
frost$collections$Array* $tmp886 = *$tmp885;
ITable* $tmp887 = ((frost$collections$Iterable*) $tmp886)->$class->itable;
while ($tmp887->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp887 = $tmp887->next;
}
$fn889 $tmp888 = $tmp887->methods[0];
frost$collections$Iterator* $tmp890 = $tmp888(((frost$collections$Iterable*) $tmp886));
goto block63;
block63:;
ITable* $tmp891 = $tmp890->$class->itable;
while ($tmp891->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp891 = $tmp891->next;
}
$fn893 $tmp892 = $tmp891->methods[0];
frost$core$Bit $tmp894 = $tmp892($tmp890);
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block65; else goto block64;
block64:;
*(&local8) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp896 = $tmp890->$class->itable;
while ($tmp896->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[1];
frost$core$Object* $tmp899 = $tmp897($tmp890);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp899)));
org$frostlang$frostc$FieldDecl* $tmp900 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local8) = ((org$frostlang$frostc$FieldDecl*) $tmp899);
// line 200
org$frostlang$frostc$FieldDecl* $tmp901 = *(&local8);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp901);
frost$core$Frost$unref$frost$core$Object$Q($tmp899);
// unreffing REF($853:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp902 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
// unreffing f
*(&local8) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block63;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// unreffing REF($842:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 202
frost$collections$Array** $tmp903 = &param1->methods;
frost$collections$Array* $tmp904 = *$tmp903;
ITable* $tmp905 = ((frost$collections$Iterable*) $tmp904)->$class->itable;
while ($tmp905->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp905 = $tmp905->next;
}
$fn907 $tmp906 = $tmp905->methods[0];
frost$collections$Iterator* $tmp908 = $tmp906(((frost$collections$Iterable*) $tmp904));
goto block66;
block66:;
ITable* $tmp909 = $tmp908->$class->itable;
while ($tmp909->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp909 = $tmp909->next;
}
$fn911 $tmp910 = $tmp909->methods[0];
frost$core$Bit $tmp912 = $tmp910($tmp908);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block68; else goto block67;
block67:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp914 = $tmp908->$class->itable;
while ($tmp914->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp914 = $tmp914->next;
}
$fn916 $tmp915 = $tmp914->methods[1];
frost$core$Object* $tmp917 = $tmp915($tmp908);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp917)));
org$frostlang$frostc$MethodDecl* $tmp918 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp917);
// line 203
org$frostlang$frostc$MethodDecl* $tmp919 = *(&local9);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp919);
frost$core$Frost$unref$frost$core$Object$Q($tmp917);
// unreffing REF($893:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp920 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing m
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing REF($882:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 205
frost$io$OutputStream** $tmp921 = &param0->out;
frost$io$OutputStream* $tmp922 = *$tmp921;
$fn924 $tmp923 = ($fn924) $tmp922->$class->vtable[17];
frost$core$Error* $tmp925 = $tmp923($tmp922, &$s926);
// try error check
if ($tmp925 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local0) = $tmp925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing REF($920:frost.core.Error?)
frost$core$String* $tmp927 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing separator
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp928 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp929 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing REF($920:frost.core.Error?)
frost$core$String* $tmp930 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing separator
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp931 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// unreffing parsed
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp932 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 208
frost$core$Error* $tmp933 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp933));
// line 209
frost$core$Int64 $tmp934 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp934);
goto block2;
block2:;
frost$core$Error* $tmp935 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Bit local0;
// line 215
frost$core$Weak** $tmp936 = &param1->owner;
frost$core$Weak* $tmp937 = *$tmp936;
frost$core$Object* $tmp938 = frost$core$Weak$get$R$frost$core$Weak$T($tmp937);
frost$core$Bit $tmp939 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp938) == NULL);
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Annotations** $tmp941 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp942 = *$tmp941;
frost$core$Bit $tmp943 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp942);
frost$core$Bit $tmp944 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp943);
*(&local0) = $tmp944;
goto block5;
block4:;
*(&local0) = $tmp939;
goto block5;
block5:;
frost$core$Bit $tmp945 = *(&local0);
bool $tmp946 = $tmp945.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp938);
// unreffing REF($4:frost.core.Weak.T)
if ($tmp946) goto block1; else goto block2;
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
frost$core$Weak** $tmp947 = &param0->compiler;
frost$core$Weak* $tmp948 = *$tmp947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
frost$io$OutputStream** $tmp949 = &param0->out;
frost$io$OutputStream* $tmp950 = *$tmp949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
return;

}

