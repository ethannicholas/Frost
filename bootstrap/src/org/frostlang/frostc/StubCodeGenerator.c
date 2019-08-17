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
typedef frost$collections$ListView* (*$fn155)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$String* (*$fn158)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn166)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn170)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn191)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn199)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn203)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn300)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn306)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn319)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn327)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn331)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn339)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn344)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn348)(frost$core$Object*);
typedef frost$core$Error* (*$fn393)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn405)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn417)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn429)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn437)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn442)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn451)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn463)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn469)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn477)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn482)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn486)(frost$core$Object*);
typedef frost$core$Error* (*$fn524)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn538)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn550)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn566)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn577)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn585)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn589)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn597)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn602)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn612)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn616)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn621)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn643)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn654)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn668)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn692)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn711)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn724)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn745)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn753)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn757)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn762)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn769)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn777)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn799)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn806)(frost$core$Object*);
typedef frost$core$Object* (*$fn908)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Error* (*$fn915)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn924)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Error* (*$fn930)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn941)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn958)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn973)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn988)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn998)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1007)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1020)(org$frostlang$frostc$StubCodeGenerator$_Closure12*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1028)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn1032)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn1040)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1058)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1075)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1090)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1103)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1107)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1112)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1126)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1140)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1151)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1155)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1160)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1169)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1173)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1178)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1187)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1191)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1196)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1205)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1209)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1214)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1222)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1235)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 38, 5549150769695652918, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 7580368616763478972, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 8523082171760740322, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 578299168842724610, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 7588087188392006392, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 4850958444317981178, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, -6503404126614323964, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, -1568754217983211905, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 8604313941350852984, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 6240486548179417074, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 645223143103797797, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 645223143103797797, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, 8050544140155638463, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 4078896108040932673, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, -3042048522538760153, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, -8457991779168398576, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 8239240588283385762, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1045 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s1224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };

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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s134, $tmp133);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp135 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp136 = *$tmp135;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Int $tmp137 = (frost$core$Int) {0u};
frost$core$Object* $tmp138 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp136, $tmp137);
frost$core$String* $tmp139 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp138));
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$String* $tmp140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp139, &$s141);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:35:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp142 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp143 = *$tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143 != NULL};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block17; else goto block18;
block18:;
frost$core$Int $tmp146 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s147, $tmp146);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp148 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp149 = *$tmp148;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Int $tmp150 = (frost$core$Int) {1u};
frost$core$Bit $tmp151 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp152 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp150, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp151);
ITable* $tmp153 = ((frost$collections$ListView*) $tmp149)->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[2];
frost$collections$ListView* $tmp156 = $tmp154(((frost$collections$ListView*) $tmp149), $tmp152);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure4));
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp157 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp157, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp159 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:35:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp160 = &$tmp159->pointer;
*$tmp160 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Object** $tmp161 = &$tmp159->target;
frost$core$Object* $tmp162 = *$tmp161;
frost$core$Frost$unref$frost$core$Object$Q($tmp162);
frost$core$Object** $tmp163 = &$tmp159->target;
*$tmp163 = ((frost$core$Object*) $tmp157);
ITable* $tmp164 = ((frost$collections$CollectionView*) $tmp156)->$class->itable;
while ($tmp164->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp164 = $tmp164->next;
}
$fn166 $tmp165 = $tmp164->methods[9];
frost$collections$Array* $tmp167 = $tmp165(((frost$collections$CollectionView*) $tmp156), $tmp159);
ITable* $tmp168 = ((frost$collections$CollectionView*) $tmp167)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[3];
frost$core$String* $tmp171 = $tmp169(((frost$collections$CollectionView*) $tmp167), &$s172);
frost$core$String* $tmp173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp140, $tmp171);
frost$core$String* $tmp174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp173, &$s175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q($tmp138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
return $tmp174;
block10:;
frost$core$Int $tmp176 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:37:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp177 = $tmp95.value;
int64_t $tmp178 = $tmp176.value;
bool $tmp179 = $tmp177 == $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:38
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:38:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp182 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp183 = *$tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183 != NULL};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block24; else goto block25;
block25:;
frost$core$Int $tmp186 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s187, $tmp186);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp188 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp189 = *$tmp188;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure6));
org$frostlang$frostc$StubCodeGenerator$_Closure6* $tmp190 = (org$frostlang$frostc$StubCodeGenerator$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure6$class);
org$frostlang$frostc$StubCodeGenerator$_Closure6$init$org$frostlang$frostc$StubCodeGenerator($tmp190, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp192 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:38:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp193 = &$tmp192->pointer;
*$tmp193 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure6$$anonymous5$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Object** $tmp194 = &$tmp192->target;
frost$core$Object* $tmp195 = *$tmp194;
frost$core$Frost$unref$frost$core$Object$Q($tmp195);
frost$core$Object** $tmp196 = &$tmp192->target;
*$tmp196 = ((frost$core$Object*) $tmp190);
ITable* $tmp197 = ((frost$collections$CollectionView*) $tmp189)->$class->itable;
while ($tmp197->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[9];
frost$collections$Array* $tmp200 = $tmp198(((frost$collections$CollectionView*) $tmp189), $tmp192);
ITable* $tmp201 = ((frost$collections$CollectionView*) $tmp200)->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[3];
frost$core$String* $tmp204 = $tmp202(((frost$collections$CollectionView*) $tmp200), &$s205);
frost$core$String* $tmp206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s207, $tmp204);
frost$core$String* $tmp208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp206, &$s209);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
return $tmp208;
block21:;
frost$core$Int $tmp210 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:40:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp211 = $tmp95.value;
int64_t $tmp212 = $tmp210.value;
bool $tmp213 = $tmp211 == $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:41
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:41:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp216 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp217 = *$tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217 != NULL};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block31; else goto block32;
block32:;
frost$core$Int $tmp220 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s221, $tmp220);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp222 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp223 = *$tmp222;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Int $tmp224 = (frost$core$Int) {0u};
frost$core$Object* $tmp225 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp223, $tmp224);
frost$core$String* $tmp226 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp225));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp226, &$s228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q($tmp225);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
return $tmp227;
block28:;
frost$core$Int $tmp229 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:43:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp230 = $tmp95.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 == $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:44
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:44:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp235 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp236 = *$tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236 != NULL};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block37; else goto block38;
block38:;
frost$core$Int $tmp239 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s240, $tmp239);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp241 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp242 = *$tmp241;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$String* $tmp243 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp242), &$s244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
return $tmp243;
block34:;
frost$core$Int $tmp245 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:46:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp246 = $tmp95.value;
int64_t $tmp247 = $tmp245.value;
bool $tmp248 = $tmp246 == $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:47
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:47:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp251 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp252 = *$tmp251;
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252 != NULL};
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block43; else goto block44;
block44:;
frost$core$Int $tmp255 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s256, $tmp255);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp257 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp258 = *$tmp257;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$String* $tmp259 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp258), &$s260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
return $tmp259;
block40:;
frost$core$Int $tmp261 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:49:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp262 = $tmp95.value;
int64_t $tmp263 = $tmp261.value;
bool $tmp264 = $tmp262 == $tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:50
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:50:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp267 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp268 = *$tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268 != NULL};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block49; else goto block50;
block50:;
frost$core$Int $tmp271 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s272, $tmp271);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp273 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp274 = *$tmp273;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$String* $tmp275 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp274), &$s276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
return $tmp275;
block46:;
frost$core$Int $tmp277 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:52:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp278 = $tmp95.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 == $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:53
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:53:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp283 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp284 = *$tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284 != NULL};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block55; else goto block56;
block56:;
frost$core$Int $tmp287 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s288, $tmp287);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp289 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp290 = *$tmp289;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$String* $tmp291 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp290), &$s292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
return $tmp291;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:56
frost$core$String** $tmp293 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp294 = *$tmp293;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
return $tmp294;
block1:;
goto block57;
block57:;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:62
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:63
frost$io$OutputStream** $tmp295 = &param0->out;
frost$io$OutputStream* $tmp296 = *$tmp295;
frost$core$String** $tmp297 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp298 = *$tmp297;
$fn300 $tmp299 = ($fn300) $tmp296->$class->vtable[17];
frost$core$Error* $tmp301 = $tmp299($tmp296, $tmp298);
if ($tmp301 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local0) = $tmp301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:64
frost$collections$Array** $tmp302 = &param1->fields;
frost$collections$Array* $tmp303 = *$tmp302;
ITable* $tmp304 = ((frost$collections$CollectionView*) $tmp303)->$class->itable;
while ($tmp304->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
frost$core$Int $tmp307 = $tmp305(((frost$collections$CollectionView*) $tmp303));
frost$core$Int $tmp308 = (frost$core$Int) {0u};
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 > $tmp310;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:65
frost$io$OutputStream** $tmp314 = &param0->out;
frost$io$OutputStream* $tmp315 = *$tmp314;
frost$collections$Array** $tmp316 = &param1->fields;
frost$collections$Array* $tmp317 = *$tmp316;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure8));
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp318 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp318, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp320 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:65:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp321 = &$tmp320->pointer;
*$tmp321 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Object** $tmp322 = &$tmp320->target;
frost$core$Object* $tmp323 = *$tmp322;
frost$core$Frost$unref$frost$core$Object$Q($tmp323);
frost$core$Object** $tmp324 = &$tmp320->target;
*$tmp324 = ((frost$core$Object*) $tmp318);
ITable* $tmp325 = ((frost$collections$CollectionView*) $tmp317)->$class->itable;
while ($tmp325->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp325 = $tmp325->next;
}
$fn327 $tmp326 = $tmp325->methods[9];
frost$collections$Array* $tmp328 = $tmp326(((frost$collections$CollectionView*) $tmp317), $tmp320);
ITable* $tmp329 = ((frost$collections$CollectionView*) $tmp328)->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp329 = $tmp329->next;
}
$fn331 $tmp330 = $tmp329->methods[3];
frost$core$String* $tmp332 = $tmp330(((frost$collections$CollectionView*) $tmp328), &$s333);
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s335, $tmp332);
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, &$s337);
$fn339 $tmp338 = ($fn339) $tmp315->$class->vtable[17];
frost$core$Error* $tmp340 = $tmp338($tmp315, $tmp336);
if ($tmp340 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local0) = $tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:68
frost$io$OutputStream** $tmp341 = &param0->out;
frost$io$OutputStream* $tmp342 = *$tmp341;
$fn344 $tmp343 = ($fn344) $tmp342->$class->vtable[21];
frost$core$Error* $tmp345 = $tmp343($tmp342);
if ($tmp345 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local0) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
goto block6;
block6:;
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:72
frost$core$Error* $tmp346 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:72:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn348 $tmp347 = ($fn348) ((frost$core$Object*) $tmp346)->$class->vtable[0];
frost$core$String* $tmp349 = $tmp347(((frost$core$Object*) $tmp346));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp349);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:73
frost$core$Int $tmp350 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp350);
goto block2;
block2:;
frost$core$Error* $tmp351 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:78
org$frostlang$frostc$Annotations** $tmp352 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp353 = *$tmp352;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:78:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int* $tmp354 = &$tmp353->flags;
frost$core$Int $tmp355 = *$tmp354;
frost$core$Int $tmp356 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp357 = $tmp355.value;
int64_t $tmp358 = $tmp356.value;
int64_t $tmp359 = $tmp357 & $tmp358;
frost$core$Int $tmp360 = (frost$core$Int) {$tmp359};
frost$core$Int $tmp361 = (frost$core$Int) {0u};
int64_t $tmp362 = $tmp360.value;
int64_t $tmp363 = $tmp361.value;
bool $tmp364 = $tmp362 != $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:79
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:81
frost$core$Weak** $tmp367 = &param0->compiler;
frost$core$Weak* $tmp368 = *$tmp367;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:81:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp369 = &$tmp368->_valid;
frost$core$Bit $tmp370 = *$tmp369;
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block9; else goto block10;
block10:;
frost$core$Int $tmp372 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s373, $tmp372);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp374 = &$tmp368->value;
frost$core$Object* $tmp375 = *$tmp374;
frost$core$Frost$ref$frost$core$Object$Q($tmp375);
frost$core$Bit $tmp376 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp375), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:81:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp377 = $tmp376.value;
bool $tmp378 = !$tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
bool $tmp380 = $tmp379.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp375);
if ($tmp380) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:82
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:84
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:85
org$frostlang$frostc$FieldDecl$Kind* $tmp381 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp382 = *$tmp381;
frost$core$Int $tmp383 = $tmp382.$rawValue;
frost$core$Int $tmp384 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:86:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp385 = $tmp383.value;
int64_t $tmp386 = $tmp384.value;
bool $tmp387 = $tmp385 == $tmp386;
frost$core$Bit $tmp388 = (frost$core$Bit) {$tmp387};
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:86
frost$io$OutputStream** $tmp390 = &param0->out;
frost$io$OutputStream* $tmp391 = *$tmp390;
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[17];
frost$core$Error* $tmp394 = $tmp392($tmp391, &$s395);
if ($tmp394 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local0) = $tmp394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
goto block12;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
goto block14;
block16:;
frost$core$Int $tmp396 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:87:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp397 = $tmp383.value;
int64_t $tmp398 = $tmp396.value;
bool $tmp399 = $tmp397 == $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:87
frost$io$OutputStream** $tmp402 = &param0->out;
frost$io$OutputStream* $tmp403 = *$tmp402;
$fn405 $tmp404 = ($fn405) $tmp403->$class->vtable[17];
frost$core$Error* $tmp406 = $tmp404($tmp403, &$s407);
if ($tmp406 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local0) = $tmp406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
goto block12;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
goto block14;
block21:;
frost$core$Int $tmp408 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:88:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp409 = $tmp383.value;
int64_t $tmp410 = $tmp408.value;
bool $tmp411 = $tmp409 == $tmp410;
frost$core$Bit $tmp412 = (frost$core$Bit) {$tmp411};
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:88
frost$io$OutputStream** $tmp414 = &param0->out;
frost$io$OutputStream* $tmp415 = *$tmp414;
$fn417 $tmp416 = ($fn417) $tmp415->$class->vtable[17];
frost$core$Error* $tmp418 = $tmp416($tmp415, &$s419);
if ($tmp418 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local0) = $tmp418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
goto block12;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
goto block14;
block26:;
frost$core$Int $tmp420 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:89:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp421 = $tmp383.value;
int64_t $tmp422 = $tmp420.value;
bool $tmp423 = $tmp421 == $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block30; else goto block14;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:89
frost$io$OutputStream** $tmp426 = &param0->out;
frost$io$OutputStream* $tmp427 = *$tmp426;
$fn429 $tmp428 = ($fn429) $tmp427->$class->vtable[17];
frost$core$Error* $tmp430 = $tmp428($tmp427, &$s431);
if ($tmp430 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local0) = $tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
goto block12;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:91
frost$io$OutputStream** $tmp432 = &param0->out;
frost$io$OutputStream* $tmp433 = *$tmp432;
frost$core$String** $tmp434 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp435 = *$tmp434;
$fn437 $tmp436 = ($fn437) $tmp433->$class->vtable[17];
frost$core$Error* $tmp438 = $tmp436($tmp433, $tmp435);
if ($tmp438 == NULL) goto block34; else goto block35;
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local0) = $tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
goto block12;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:92
frost$io$OutputStream** $tmp439 = &param0->out;
frost$io$OutputStream* $tmp440 = *$tmp439;
$fn442 $tmp441 = ($fn442) $tmp440->$class->vtable[17];
frost$core$Error* $tmp443 = $tmp441($tmp440, &$s444);
if ($tmp443 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local0) = $tmp443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
goto block12;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:93
frost$io$OutputStream** $tmp445 = &param0->out;
frost$io$OutputStream* $tmp446 = *$tmp445;
org$frostlang$frostc$Type** $tmp447 = &param1->type;
org$frostlang$frostc$Type* $tmp448 = *$tmp447;
frost$core$String* $tmp449 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp448);
$fn451 $tmp450 = ($fn451) $tmp446->$class->vtable[17];
frost$core$Error* $tmp452 = $tmp450($tmp446, $tmp449);
if ($tmp452 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local0) = $tmp452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
goto block12;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:94
org$frostlang$frostc$FieldDecl$Kind* $tmp453 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp454 = *$tmp453;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp455;
$tmp455 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp455->value = $tmp454;
frost$core$Int $tmp456 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from StubCodeGenerator.frost:94:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp457 = &(&local2)->$rawValue;
*$tmp457 = $tmp456;
org$frostlang$frostc$FieldDecl$Kind $tmp458 = *(&local2);
*(&local1) = $tmp458;
org$frostlang$frostc$FieldDecl$Kind $tmp459 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp460;
$tmp460 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp460->value = $tmp459;
ITable* $tmp461 = ((frost$core$Equatable*) $tmp455)->$class->itable;
while ($tmp461->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp461 = $tmp461->next;
}
$fn463 $tmp462 = $tmp461->methods[0];
frost$core$Bit $tmp464 = $tmp462(((frost$core$Equatable*) $tmp455), ((frost$core$Equatable*) $tmp460));
bool $tmp465 = $tmp464.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp460)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp455)));
if ($tmp465) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:95
frost$io$OutputStream** $tmp466 = &param0->out;
frost$io$OutputStream* $tmp467 = *$tmp466;
$fn469 $tmp468 = ($fn469) $tmp467->$class->vtable[17];
frost$core$Error* $tmp470 = $tmp468($tmp467, &$s471);
if ($tmp470 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local0) = $tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
goto block12;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:96
frost$io$OutputStream** $tmp472 = &param0->out;
frost$io$OutputStream* $tmp473 = *$tmp472;
org$frostlang$frostc$ASTNode** $tmp474 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp475 = *$tmp474;
$fn477 $tmp476 = ($fn477) $tmp473->$class->vtable[18];
frost$core$Error* $tmp478 = $tmp476($tmp473, ((frost$core$Object*) $tmp475));
if ($tmp478 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local0) = $tmp478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
goto block12;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:98
frost$io$OutputStream** $tmp479 = &param0->out;
frost$io$OutputStream* $tmp480 = *$tmp479;
$fn482 $tmp481 = ($fn482) $tmp480->$class->vtable[21];
frost$core$Error* $tmp483 = $tmp481($tmp480);
if ($tmp483 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local0) = $tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
goto block12;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:101
frost$core$Error* $tmp484 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:101:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn486 $tmp485 = ($fn486) ((frost$core$Object*) $tmp484)->$class->vtable[0];
frost$core$String* $tmp487 = $tmp485(((frost$core$Object*) $tmp484));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp487);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:102
frost$core$Int $tmp488 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp488);
goto block13;
block13:;
frost$core$Error* $tmp489 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
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
org$frostlang$frostc$Annotations** $tmp490 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp491 = *$tmp490;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:107:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int* $tmp492 = &$tmp491->flags;
frost$core$Int $tmp493 = *$tmp492;
frost$core$Int $tmp494 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495 & $tmp496;
frost$core$Int $tmp498 = (frost$core$Int) {$tmp497};
frost$core$Int $tmp499 = (frost$core$Int) {0u};
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = $tmp499.value;
bool $tmp502 = $tmp500 != $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:108
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:110
frost$core$Weak** $tmp505 = &param0->compiler;
frost$core$Weak* $tmp506 = *$tmp505;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:110:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp507 = &$tmp506->_valid;
frost$core$Bit $tmp508 = *$tmp507;
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block9; else goto block10;
block10:;
frost$core$Int $tmp510 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s511, $tmp510);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp512 = &$tmp506->value;
frost$core$Object* $tmp513 = *$tmp512;
frost$core$Frost$ref$frost$core$Object$Q($tmp513);
frost$core$Bit $tmp514 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp513), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:110:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp515 = $tmp514.value;
bool $tmp516 = !$tmp515;
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp516};
bool $tmp518 = $tmp517.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp513);
if ($tmp518) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:111
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:113
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:114
frost$io$OutputStream** $tmp519 = &param0->out;
frost$io$OutputStream* $tmp520 = *$tmp519;
org$frostlang$frostc$Annotations** $tmp521 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp522 = *$tmp521;
$fn524 $tmp523 = ($fn524) $tmp520->$class->vtable[18];
frost$core$Error* $tmp525 = $tmp523($tmp520, ((frost$core$Object*) $tmp522));
if ($tmp525 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local0) = $tmp525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:115
org$frostlang$frostc$MethodDecl$Kind* $tmp526 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp527 = *$tmp526;
frost$core$Int $tmp528 = $tmp527.$rawValue;
frost$core$Int $tmp529 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:116:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529.value;
bool $tmp532 = $tmp530 == $tmp531;
frost$core$Bit $tmp533 = (frost$core$Bit) {$tmp532};
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:117
frost$io$OutputStream** $tmp535 = &param0->out;
frost$io$OutputStream* $tmp536 = *$tmp535;
$fn538 $tmp537 = ($fn538) $tmp536->$class->vtable[17];
frost$core$Error* $tmp539 = $tmp537($tmp536, &$s540);
if ($tmp539 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local0) = $tmp539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
goto block12;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
goto block16;
block18:;
frost$core$Int $tmp541 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:119:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp542 = $tmp528.value;
int64_t $tmp543 = $tmp541.value;
bool $tmp544 = $tmp542 == $tmp543;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:120
frost$io$OutputStream** $tmp547 = &param0->out;
frost$io$OutputStream* $tmp548 = *$tmp547;
$fn550 $tmp549 = ($fn550) $tmp548->$class->vtable[17];
frost$core$Error* $tmp551 = $tmp549($tmp548, &$s552);
if ($tmp551 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local0) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
goto block12;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
goto block16;
block23:;
frost$core$Int $tmp553 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:122:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp554 = $tmp528.value;
int64_t $tmp555 = $tmp553.value;
bool $tmp556 = $tmp554 == $tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block27; else goto block28;
block27:;
goto block16;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:125
frost$core$Int $tmp559 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s560, $tmp559);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:128
frost$io$OutputStream** $tmp561 = &param0->out;
frost$io$OutputStream* $tmp562 = *$tmp561;
frost$core$String** $tmp563 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp564 = *$tmp563;
$fn566 $tmp565 = ($fn566) $tmp562->$class->vtable[17];
frost$core$Error* $tmp567 = $tmp565($tmp562, $tmp564);
if ($tmp567 == NULL) goto block30; else goto block31;
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local0) = $tmp567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
goto block12;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:129
frost$collections$Array** $tmp568 = &param1->genericParameters;
frost$collections$Array* $tmp569 = *$tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569 != NULL};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:130
frost$io$OutputStream** $tmp572 = &param0->out;
frost$io$OutputStream* $tmp573 = *$tmp572;
frost$collections$Array** $tmp574 = &param1->genericParameters;
frost$collections$Array* $tmp575 = *$tmp574;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure10));
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp576 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp576, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp578 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:131:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp579 = &$tmp578->pointer;
*$tmp579 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Object** $tmp580 = &$tmp578->target;
frost$core$Object* $tmp581 = *$tmp580;
frost$core$Frost$unref$frost$core$Object$Q($tmp581);
frost$core$Object** $tmp582 = &$tmp578->target;
*$tmp582 = ((frost$core$Object*) $tmp576);
ITable* $tmp583 = ((frost$collections$CollectionView*) $tmp575)->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[9];
frost$collections$Array* $tmp586 = $tmp584(((frost$collections$CollectionView*) $tmp575), $tmp578);
ITable* $tmp587 = ((frost$collections$CollectionView*) $tmp586)->$class->itable;
while ($tmp587->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp587 = $tmp587->next;
}
$fn589 $tmp588 = $tmp587->methods[3];
frost$core$String* $tmp590 = $tmp588(((frost$collections$CollectionView*) $tmp586), &$s591);
frost$core$String* $tmp592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s593, $tmp590);
frost$core$String* $tmp594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp592, &$s595);
$fn597 $tmp596 = ($fn597) $tmp573->$class->vtable[17];
frost$core$Error* $tmp598 = $tmp596($tmp573, $tmp594);
if ($tmp598 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local0) = $tmp598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
goto block12;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:134
frost$io$OutputStream** $tmp599 = &param0->out;
frost$io$OutputStream* $tmp600 = *$tmp599;
$fn602 $tmp601 = ($fn602) $tmp600->$class->vtable[17];
frost$core$Error* $tmp603 = $tmp601($tmp600, &$s604);
if ($tmp603 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local0) = $tmp603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
goto block12;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:135
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s605));
frost$core$String* $tmp606 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local1) = &$s607;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:136
frost$collections$Array** $tmp608 = &param1->parameters;
frost$collections$Array* $tmp609 = *$tmp608;
ITable* $tmp610 = ((frost$collections$Iterable*) $tmp609)->$class->itable;
while ($tmp610->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp610 = $tmp610->next;
}
$fn612 $tmp611 = $tmp610->methods[0];
frost$collections$Iterator* $tmp613 = $tmp611(((frost$collections$Iterable*) $tmp609));
goto block39;
block39:;
ITable* $tmp614 = $tmp613->$class->itable;
while ($tmp614->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp614 = $tmp614->next;
}
$fn616 $tmp615 = $tmp614->methods[0];
frost$core$Bit $tmp617 = $tmp615($tmp613);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block41; else goto block40;
block40:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp619 = $tmp613->$class->itable;
while ($tmp619->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp619 = $tmp619->next;
}
$fn621 $tmp620 = $tmp619->methods[1];
frost$core$Object* $tmp622 = $tmp620($tmp613);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp622)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp623 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp622);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:137
frost$io$OutputStream** $tmp624 = &param0->out;
frost$io$OutputStream* $tmp625 = *$tmp624;
frost$core$String* $tmp626 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:137:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$String* $tmp627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp626, &$s628);
org$frostlang$frostc$MethodDecl$Parameter* $tmp629 = *(&local2);
frost$core$String** $tmp630 = &$tmp629->name;
frost$core$String* $tmp631 = *$tmp630;
frost$core$String* $tmp632 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp627, $tmp631);
frost$core$String* $tmp633 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp632, &$s634);
org$frostlang$frostc$MethodDecl$Parameter* $tmp635 = *(&local2);
org$frostlang$frostc$Type** $tmp636 = &$tmp635->type;
org$frostlang$frostc$Type* $tmp637 = *$tmp636;
frost$core$String* $tmp638 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp637);
frost$core$String* $tmp639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp633, $tmp638);
frost$core$String* $tmp640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp639, &$s641);
$fn643 $tmp642 = ($fn643) $tmp625->$class->vtable[17];
frost$core$Error* $tmp644 = $tmp642($tmp625, $tmp640);
if ($tmp644 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local0) = $tmp644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q($tmp622);
org$frostlang$frostc$MethodDecl$Parameter* $tmp645 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$String* $tmp646 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s647));
frost$core$String* $tmp648 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local1) = &$s649;
frost$core$Frost$unref$frost$core$Object$Q($tmp622);
org$frostlang$frostc$MethodDecl$Parameter* $tmp650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:140
frost$io$OutputStream** $tmp651 = &param0->out;
frost$io$OutputStream* $tmp652 = *$tmp651;
$fn654 $tmp653 = ($fn654) $tmp652->$class->vtable[17];
frost$core$Error* $tmp655 = $tmp653($tmp652, &$s656);
if ($tmp655 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local0) = $tmp655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$String* $tmp657 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:141
org$frostlang$frostc$MethodDecl$Kind* $tmp658 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp659 = *$tmp658;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp660;
$tmp660 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp660->value = $tmp659;
frost$core$Int $tmp661 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from StubCodeGenerator.frost:141:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp662 = &(&local4)->$rawValue;
*$tmp662 = $tmp661;
org$frostlang$frostc$MethodDecl$Kind $tmp663 = *(&local4);
*(&local3) = $tmp663;
org$frostlang$frostc$MethodDecl$Kind $tmp664 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp665;
$tmp665 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp665->value = $tmp664;
ITable* $tmp666 = ((frost$core$Equatable*) $tmp660)->$class->itable;
while ($tmp666->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp666 = $tmp666->next;
}
$fn668 $tmp667 = $tmp666->methods[0];
frost$core$Bit $tmp669 = $tmp667(((frost$core$Equatable*) $tmp660), ((frost$core$Equatable*) $tmp665));
bool $tmp670 = $tmp669.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp665)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp660)));
if ($tmp670) goto block47; else goto block49;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:142
org$frostlang$frostc$Annotations** $tmp671 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp672 = *$tmp671;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:142:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int* $tmp673 = &$tmp672->flags;
frost$core$Int $tmp674 = *$tmp673;
frost$core$Int $tmp675 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675.value;
int64_t $tmp678 = $tmp676 & $tmp677;
frost$core$Int $tmp679 = (frost$core$Int) {$tmp678};
frost$core$Int $tmp680 = (frost$core$Int) {0u};
int64_t $tmp681 = $tmp679.value;
int64_t $tmp682 = $tmp680.value;
bool $tmp683 = $tmp681 != $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:142:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp685 = $tmp684.value;
bool $tmp686 = !$tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:143
frost$io$OutputStream** $tmp689 = &param0->out;
frost$io$OutputStream* $tmp690 = *$tmp689;
$fn692 $tmp691 = ($fn692) $tmp690->$class->vtable[17];
frost$core$Error* $tmp693 = $tmp691($tmp690, &$s694);
if ($tmp693 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local0) = $tmp693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$String* $tmp695 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
goto block52;
block52:;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:146
org$frostlang$frostc$Type** $tmp696 = &param1->returnType;
org$frostlang$frostc$Type* $tmp697 = *$tmp696;
frost$core$Weak** $tmp698 = &param0->compiler;
frost$core$Weak* $tmp699 = *$tmp698;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:146:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp700 = &$tmp699->_valid;
frost$core$Bit $tmp701 = *$tmp700;
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block62; else goto block63;
block63:;
frost$core$Int $tmp703 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s704, $tmp703);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp705 = &$tmp699->value;
frost$core$Object* $tmp706 = *$tmp705;
frost$core$Frost$ref$frost$core$Object$Q($tmp706);
org$frostlang$frostc$Type** $tmp707 = &((org$frostlang$frostc$Compiler*) $tmp706)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp708 = *$tmp707;
ITable* $tmp709 = ((frost$core$Equatable*) $tmp697)->$class->itable;
while ($tmp709->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp709 = $tmp709->next;
}
$fn711 $tmp710 = $tmp709->methods[1];
frost$core$Bit $tmp712 = $tmp710(((frost$core$Equatable*) $tmp697), ((frost$core$Equatable*) $tmp708));
bool $tmp713 = $tmp712.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp706);
if ($tmp713) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:147
frost$io$OutputStream** $tmp714 = &param0->out;
frost$io$OutputStream* $tmp715 = *$tmp714;
org$frostlang$frostc$Type** $tmp716 = &param1->returnType;
org$frostlang$frostc$Type* $tmp717 = *$tmp716;
frost$core$String* $tmp718 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp717);
frost$core$String* $tmp719 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s720, $tmp718);
frost$core$String* $tmp721 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp719, &$s722);
$fn724 $tmp723 = ($fn724) $tmp715->$class->vtable[19];
frost$core$Error* $tmp725 = $tmp723($tmp715, $tmp721);
if ($tmp725 == NULL) goto block64; else goto block65;
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local0) = $tmp725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$String* $tmp726 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block64:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
goto block59;
block59:;
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:149
org$frostlang$frostc$Annotations** $tmp727 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp728 = *$tmp727;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:149:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int* $tmp729 = &$tmp728->flags;
frost$core$Int $tmp730 = *$tmp729;
frost$core$Int $tmp731 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp732 = $tmp730.value;
int64_t $tmp733 = $tmp731.value;
int64_t $tmp734 = $tmp732 & $tmp733;
frost$core$Int $tmp735 = (frost$core$Int) {$tmp734};
frost$core$Int $tmp736 = (frost$core$Int) {0u};
int64_t $tmp737 = $tmp735.value;
int64_t $tmp738 = $tmp736.value;
bool $tmp739 = $tmp737 != $tmp738;
frost$core$Bit $tmp740 = (frost$core$Bit) {$tmp739};
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block66; else goto block68;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:150
frost$io$OutputStream** $tmp742 = &param0->out;
frost$io$OutputStream* $tmp743 = *$tmp742;
$fn745 $tmp744 = ($fn745) $tmp743->$class->vtable[17];
frost$core$Error* $tmp746 = $tmp744($tmp743, &$s747);
if ($tmp746 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local0) = $tmp746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$String* $tmp748 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:151
org$frostlang$frostc$FixedArray** $tmp749 = &param1->body;
org$frostlang$frostc$FixedArray* $tmp750 = *$tmp749;
ITable* $tmp751 = ((frost$collections$Iterable*) $tmp750)->$class->itable;
while ($tmp751->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp751 = $tmp751->next;
}
$fn753 $tmp752 = $tmp751->methods[0];
frost$collections$Iterator* $tmp754 = $tmp752(((frost$collections$Iterable*) $tmp750));
goto block73;
block73:;
ITable* $tmp755 = $tmp754->$class->itable;
while ($tmp755->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[0];
frost$core$Bit $tmp758 = $tmp756($tmp754);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block75; else goto block74;
block74:;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp760 = $tmp754->$class->itable;
while ($tmp760->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp760 = $tmp760->next;
}
$fn762 $tmp761 = $tmp760->methods[1];
frost$core$Object* $tmp763 = $tmp761($tmp754);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp763)));
org$frostlang$frostc$ASTNode* $tmp764 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local5) = ((org$frostlang$frostc$ASTNode*) $tmp763);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:152
frost$io$OutputStream** $tmp765 = &param0->out;
frost$io$OutputStream* $tmp766 = *$tmp765;
org$frostlang$frostc$ASTNode* $tmp767 = *(&local5);
$fn769 $tmp768 = ($fn769) $tmp766->$class->vtable[20];
frost$core$Error* $tmp770 = $tmp768($tmp766, ((frost$core$Object*) $tmp767));
if ($tmp770 == NULL) goto block76; else goto block77;
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local0) = $tmp770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q($tmp763);
org$frostlang$frostc$ASTNode* $tmp771 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$String* $tmp772 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block76:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q($tmp763);
org$frostlang$frostc$ASTNode* $tmp773 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block73;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:154
frost$io$OutputStream** $tmp774 = &param0->out;
frost$io$OutputStream* $tmp775 = *$tmp774;
$fn777 $tmp776 = ($fn777) $tmp775->$class->vtable[17];
frost$core$Error* $tmp778 = $tmp776($tmp775, &$s779);
if ($tmp778 == NULL) goto block78; else goto block79;
block79:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local0) = $tmp778;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$String* $tmp780 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
goto block67;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:156
org$frostlang$frostc$Annotations** $tmp781 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp782 = *$tmp781;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from StubCodeGenerator.frost:156:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:163
frost$core$Int* $tmp783 = &$tmp782->flags;
frost$core$Int $tmp784 = *$tmp783;
frost$core$Int $tmp785 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:163:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp786 = $tmp784.value;
int64_t $tmp787 = $tmp785.value;
int64_t $tmp788 = $tmp786 & $tmp787;
frost$core$Int $tmp789 = (frost$core$Int) {$tmp788};
frost$core$Int $tmp790 = (frost$core$Int) {0u};
int64_t $tmp791 = $tmp789.value;
int64_t $tmp792 = $tmp790.value;
bool $tmp793 = $tmp791 != $tmp792;
frost$core$Bit $tmp794 = (frost$core$Bit) {$tmp793};
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:157
frost$io$OutputStream** $tmp796 = &param0->out;
frost$io$OutputStream* $tmp797 = *$tmp796;
$fn799 $tmp798 = ($fn799) $tmp797->$class->vtable[17];
frost$core$Error* $tmp800 = $tmp798($tmp797, &$s801);
if ($tmp800 == NULL) goto block84; else goto block85;
block85:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local0) = $tmp800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$String* $tmp802 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
goto block81;
block81:;
goto block67;
block67:;
frost$core$String* $tmp803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local1) = ((frost$core$String*) NULL);
goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:161
frost$core$Error* $tmp804 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:161:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn806 $tmp805 = ($fn806) ((frost$core$Object*) $tmp804)->$class->vtable[0];
frost$core$String* $tmp807 = $tmp805(((frost$core$Object*) $tmp804));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp807);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:162
frost$core$Int $tmp808 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp808);
goto block13;
block13:;
frost$core$Error* $tmp809 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
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
frost$core$Weak** $tmp810 = &param0->compiler;
frost$core$Weak* $tmp811 = *$tmp810;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:170:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp812 = &$tmp811->_valid;
frost$core$Bit $tmp813 = *$tmp812;
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block7; else goto block8;
block8:;
frost$core$Int $tmp815 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s816, $tmp815);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp817 = &$tmp811->value;
frost$core$Object* $tmp818 = *$tmp817;
frost$core$Frost$ref$frost$core$Object$Q($tmp818);
frost$core$Bit $tmp819 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp818), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:170:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp820 = $tmp819.value;
bool $tmp821 = !$tmp820;
frost$core$Bit $tmp822 = (frost$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp818);
if ($tmp823) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:171
frost$core$Error* $tmp824 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:173
frost$core$String** $tmp825 = &param1->name;
frost$core$String* $tmp826 = *$tmp825;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$String* $tmp827 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local1) = $tmp826;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:174
frost$core$String** $tmp828 = &param1->name;
frost$core$String* $tmp829 = *$tmp828;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp830 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp830, &$s831);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String>? from StubCodeGenerator.frost:174:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp832 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp830, $tmp829);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Matcher* $tmp833 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local3) = $tmp832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp834 = *(&local3);
frost$core$Bit $tmp835;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp835, $tmp834);
bool $tmp836 = $tmp835.value;
if ($tmp836) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp837 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp837);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$collections$Array* $tmp838 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local4) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
frost$core$Int $tmp839 = (frost$core$Int) {1u};
frost$core$Matcher* $tmp840 = *(&local3);
frost$core$Int $tmp841;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp841, $tmp840);
frost$core$Bit $tmp842 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp843 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp839, $tmp841, $tmp842);
frost$core$Int $tmp844 = $tmp843.min;
*(&local5) = $tmp844;
frost$core$Int $tmp845 = $tmp843.max;
frost$core$Bit $tmp846 = $tmp843.inclusive;
bool $tmp847 = $tmp846.value;
frost$core$Int $tmp848 = (frost$core$Int) {1u};
if ($tmp847) goto block16; else goto block17;
block16:;
int64_t $tmp849 = $tmp844.value;
int64_t $tmp850 = $tmp845.value;
bool $tmp851 = $tmp849 <= $tmp850;
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp851};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block13; else goto block14;
block17:;
int64_t $tmp854 = $tmp844.value;
int64_t $tmp855 = $tmp845.value;
bool $tmp856 = $tmp854 < $tmp855;
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
frost$collections$Array* $tmp859 = *(&local4);
frost$core$Matcher* $tmp860 = *(&local3);
frost$core$Int $tmp861 = *(&local5);
frost$core$String* $tmp862 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp860, $tmp861);
frost$collections$Array$add$frost$collections$Array$T($tmp859, ((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Int $tmp863 = *(&local5);
int64_t $tmp864 = $tmp845.value;
int64_t $tmp865 = $tmp863.value;
int64_t $tmp866 = $tmp864 - $tmp865;
frost$core$Int $tmp867 = (frost$core$Int) {$tmp866};
if ($tmp847) goto block19; else goto block20;
block19:;
int64_t $tmp868 = $tmp867.value;
int64_t $tmp869 = $tmp848.value;
bool $tmp870 = $tmp868 >= $tmp869;
frost$core$Bit $tmp871 = (frost$core$Bit) {$tmp870};
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block18; else goto block14;
block20:;
int64_t $tmp873 = $tmp867.value;
int64_t $tmp874 = $tmp848.value;
bool $tmp875 = $tmp873 > $tmp874;
frost$core$Bit $tmp876 = (frost$core$Bit) {$tmp875};
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block18; else goto block14;
block18:;
int64_t $tmp878 = $tmp863.value;
int64_t $tmp879 = $tmp848.value;
int64_t $tmp880 = $tmp878 + $tmp879;
frost$core$Int $tmp881 = (frost$core$Int) {$tmp880};
*(&local5) = $tmp881;
goto block13;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
frost$collections$Array* $tmp882 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp882)));
frost$collections$Array* $tmp883 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp884 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) $tmp882);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp882)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp885 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block10;
block10:;
frost$collections$ListView* $tmp886 = *(&local2);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$collections$ListView* $tmp887 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local6) = $tmp886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:175
frost$collections$ListView* $tmp888 = *(&local6);
frost$core$Bit $tmp889 = (frost$core$Bit) {$tmp888 != NULL};
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:176
frost$core$Weak** $tmp891 = &param1->owner;
frost$core$Weak* $tmp892 = *$tmp891;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:176:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp893 = &$tmp892->_valid;
frost$core$Bit $tmp894 = *$tmp893;
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block27; else goto block28;
block28:;
frost$core$Int $tmp896 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s897, $tmp896);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp898 = &$tmp892->value;
frost$core$Object* $tmp899 = *$tmp898;
frost$core$Frost$ref$frost$core$Object$Q($tmp899);
frost$core$Bit $tmp900 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp899) == NULL};
bool $tmp901 = $tmp900.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp899);
if ($tmp901) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:177
frost$io$OutputStream** $tmp902 = &param0->out;
frost$io$OutputStream* $tmp903 = *$tmp902;
frost$collections$ListView* $tmp904 = *(&local6);
frost$core$Int $tmp905 = (frost$core$Int) {0u};
ITable* $tmp906 = $tmp904->$class->itable;
while ($tmp906->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp906 = $tmp906->next;
}
$fn908 $tmp907 = $tmp906->methods[0];
frost$core$Object* $tmp909 = $tmp907($tmp904, $tmp905);
frost$core$String* $tmp910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s911, ((frost$core$String*) $tmp909));
frost$core$String* $tmp912 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp910, &$s913);
$fn915 $tmp914 = ($fn915) $tmp903->$class->vtable[19];
frost$core$Error* $tmp916 = $tmp914($tmp903, $tmp912);
if ($tmp916 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local0) = $tmp916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q($tmp909);
frost$collections$ListView* $tmp917 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp918 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp919 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q($tmp909);
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:179
frost$collections$ListView* $tmp920 = *(&local6);
frost$core$Int $tmp921 = (frost$core$Int) {1u};
ITable* $tmp922 = $tmp920->$class->itable;
while ($tmp922->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp922 = $tmp922->next;
}
$fn924 $tmp923 = $tmp922->methods[0];
frost$core$Object* $tmp925 = $tmp923($tmp920, $tmp921);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp925)));
frost$core$String* $tmp926 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local1) = ((frost$core$String*) $tmp925);
frost$core$Frost$unref$frost$core$Object$Q($tmp925);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:181
frost$io$OutputStream** $tmp927 = &param0->out;
frost$io$OutputStream* $tmp928 = *$tmp927;
$fn930 $tmp929 = ($fn930) $tmp928->$class->vtable[19];
frost$core$Error* $tmp931 = $tmp929($tmp928, &$s932);
if ($tmp931 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local0) = $tmp931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
frost$collections$ListView* $tmp933 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp934 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp935 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:182
frost$io$OutputStream** $tmp936 = &param0->out;
frost$io$OutputStream* $tmp937 = *$tmp936;
org$frostlang$frostc$Annotations** $tmp938 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp939 = *$tmp938;
$fn941 $tmp940 = ($fn941) $tmp937->$class->vtable[18];
frost$core$Error* $tmp942 = $tmp940($tmp937, ((frost$core$Object*) $tmp939));
if ($tmp942 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local0) = $tmp942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$collections$ListView* $tmp943 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp945 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:183
org$frostlang$frostc$ClassDecl$Kind* $tmp946 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp947 = *$tmp946;
frost$core$Int $tmp948 = $tmp947.$rawValue;
frost$core$Int $tmp949 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:184:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp950 = $tmp948.value;
int64_t $tmp951 = $tmp949.value;
bool $tmp952 = $tmp950 == $tmp951;
frost$core$Bit $tmp953 = (frost$core$Bit) {$tmp952};
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:184
frost$io$OutputStream** $tmp955 = &param0->out;
frost$io$OutputStream* $tmp956 = *$tmp955;
$fn958 $tmp957 = ($fn958) $tmp956->$class->vtable[17];
frost$core$Error* $tmp959 = $tmp957($tmp956, &$s960);
if ($tmp959 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local0) = $tmp959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$collections$ListView* $tmp961 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp962 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp963 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
goto block35;
block37:;
frost$core$Int $tmp964 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:185:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp965 = $tmp948.value;
int64_t $tmp966 = $tmp964.value;
bool $tmp967 = $tmp965 == $tmp966;
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp967};
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:185
frost$io$OutputStream** $tmp970 = &param0->out;
frost$io$OutputStream* $tmp971 = *$tmp970;
$fn973 $tmp972 = ($fn973) $tmp971->$class->vtable[17];
frost$core$Error* $tmp974 = $tmp972($tmp971, &$s975);
if ($tmp974 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local0) = $tmp974;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$collections$ListView* $tmp976 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp977 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp978 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
goto block35;
block42:;
frost$core$Int $tmp979 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:186:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp980 = $tmp948.value;
int64_t $tmp981 = $tmp979.value;
bool $tmp982 = $tmp980 == $tmp981;
frost$core$Bit $tmp983 = (frost$core$Bit) {$tmp982};
bool $tmp984 = $tmp983.value;
if ($tmp984) goto block46; else goto block35;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:186
frost$io$OutputStream** $tmp985 = &param0->out;
frost$io$OutputStream* $tmp986 = *$tmp985;
$fn988 $tmp987 = ($fn988) $tmp986->$class->vtable[17];
frost$core$Error* $tmp989 = $tmp987($tmp986, &$s990);
if ($tmp989 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local0) = $tmp989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$collections$ListView* $tmp991 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp992 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp993 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:188
frost$io$OutputStream** $tmp994 = &param0->out;
frost$io$OutputStream* $tmp995 = *$tmp994;
frost$core$String* $tmp996 = *(&local1);
$fn998 $tmp997 = ($fn998) $tmp995->$class->vtable[17];
frost$core$Error* $tmp999 = $tmp997($tmp995, $tmp996);
if ($tmp999 == NULL) goto block50; else goto block51;
block51:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local0) = $tmp999;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$collections$ListView* $tmp1000 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1001 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp1002 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:189
frost$collections$List** $tmp1003 = &param1->parameters;
frost$collections$List* $tmp1004 = *$tmp1003;
ITable* $tmp1005 = ((frost$collections$CollectionView*) $tmp1004)->$class->itable;
while ($tmp1005->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1005 = $tmp1005->next;
}
$fn1007 $tmp1006 = $tmp1005->methods[0];
frost$core$Int $tmp1008 = $tmp1006(((frost$collections$CollectionView*) $tmp1004));
frost$core$Int $tmp1009 = (frost$core$Int) {0u};
int64_t $tmp1010 = $tmp1008.value;
int64_t $tmp1011 = $tmp1009.value;
bool $tmp1012 = $tmp1010 > $tmp1011;
frost$core$Bit $tmp1013 = (frost$core$Bit) {$tmp1012};
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:190
frost$io$OutputStream** $tmp1015 = &param0->out;
frost$io$OutputStream* $tmp1016 = *$tmp1015;
frost$collections$List** $tmp1017 = &param1->parameters;
frost$collections$List* $tmp1018 = *$tmp1017;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure12));
org$frostlang$frostc$StubCodeGenerator$_Closure12* $tmp1019 = (org$frostlang$frostc$StubCodeGenerator$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure12$class);
org$frostlang$frostc$StubCodeGenerator$_Closure12$init$org$frostlang$frostc$StubCodeGenerator($tmp1019, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1021 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:191:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1022 = &$tmp1021->pointer;
*$tmp1022 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Object** $tmp1023 = &$tmp1021->target;
frost$core$Object* $tmp1024 = *$tmp1023;
frost$core$Frost$unref$frost$core$Object$Q($tmp1024);
frost$core$Object** $tmp1025 = &$tmp1021->target;
*$tmp1025 = ((frost$core$Object*) $tmp1019);
ITable* $tmp1026 = ((frost$collections$CollectionView*) $tmp1018)->$class->itable;
while ($tmp1026->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1026 = $tmp1026->next;
}
$fn1028 $tmp1027 = $tmp1026->methods[9];
frost$collections$Array* $tmp1029 = $tmp1027(((frost$collections$CollectionView*) $tmp1018), $tmp1021);
ITable* $tmp1030 = ((frost$collections$CollectionView*) $tmp1029)->$class->itable;
while ($tmp1030->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1030 = $tmp1030->next;
}
$fn1032 $tmp1031 = $tmp1030->methods[3];
frost$core$String* $tmp1033 = $tmp1031(((frost$collections$CollectionView*) $tmp1029), &$s1034);
frost$core$String* $tmp1035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1036, $tmp1033);
frost$core$String* $tmp1037 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1035, &$s1038);
$fn1040 $tmp1039 = ($fn1040) $tmp1016->$class->vtable[17];
frost$core$Error* $tmp1041 = $tmp1039($tmp1016, $tmp1037);
if ($tmp1041 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local0) = $tmp1041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$collections$ListView* $tmp1042 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1043 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp1044 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
goto block53;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:193
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1045));
frost$core$String* $tmp1046 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local7) = &$s1047;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:194
org$frostlang$frostc$ClassDecl$Kind* $tmp1048 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1049 = *$tmp1048;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1050;
$tmp1050 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1050->value = $tmp1049;
frost$core$Int $tmp1051 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:194:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1052 = &(&local9)->$rawValue;
*$tmp1052 = $tmp1051;
org$frostlang$frostc$ClassDecl$Kind $tmp1053 = *(&local9);
*(&local8) = $tmp1053;
org$frostlang$frostc$ClassDecl$Kind $tmp1054 = *(&local8);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1055;
$tmp1055 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1055->value = $tmp1054;
ITable* $tmp1056 = ((frost$core$Equatable*) $tmp1050)->$class->itable;
while ($tmp1056->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1056 = $tmp1056->next;
}
$fn1058 $tmp1057 = $tmp1056->methods[1];
frost$core$Bit $tmp1059 = $tmp1057(((frost$core$Equatable*) $tmp1050), ((frost$core$Equatable*) $tmp1055));
bool $tmp1060 = $tmp1059.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1055)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1050)));
if ($tmp1060) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:195
org$frostlang$frostc$Type** $tmp1061 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1062 = *$tmp1061;
frost$core$Bit $tmp1063 = (frost$core$Bit) {$tmp1062 != NULL};
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block62; else goto block61;
block62:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1065 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1066 = *$tmp1065;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1067;
$tmp1067 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1067->value = $tmp1066;
frost$core$Int $tmp1068 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:195:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1069 = &(&local11)->$rawValue;
*$tmp1069 = $tmp1068;
org$frostlang$frostc$ClassDecl$Kind $tmp1070 = *(&local11);
*(&local10) = $tmp1070;
org$frostlang$frostc$ClassDecl$Kind $tmp1071 = *(&local10);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1072;
$tmp1072 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1072->value = $tmp1071;
ITable* $tmp1073 = ((frost$core$Equatable*) $tmp1067)->$class->itable;
while ($tmp1073->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1073 = $tmp1073->next;
}
$fn1075 $tmp1074 = $tmp1073->methods[1];
frost$core$Bit $tmp1076 = $tmp1074(((frost$core$Equatable*) $tmp1067), ((frost$core$Equatable*) $tmp1072));
bool $tmp1077 = $tmp1076.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1072)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1067)));
if ($tmp1077) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:196
frost$io$OutputStream** $tmp1078 = &param0->out;
frost$io$OutputStream* $tmp1079 = *$tmp1078;
frost$core$String* $tmp1080 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:196:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$String* $tmp1081 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1080, &$s1082);
org$frostlang$frostc$Type** $tmp1083 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1084 = *$tmp1083;
frost$core$String* $tmp1085 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1084);
frost$core$String* $tmp1086 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1081, $tmp1085);
frost$core$String* $tmp1087 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1086, &$s1088);
$fn1090 $tmp1089 = ($fn1090) $tmp1079->$class->vtable[17];
frost$core$Error* $tmp1091 = $tmp1089($tmp1079, $tmp1087);
if ($tmp1091 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local0) = $tmp1091;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$String* $tmp1092 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1093 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1094 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp1095 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1096));
frost$core$String* $tmp1097 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local7) = &$s1098;
goto block61;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:199
frost$collections$Array** $tmp1099 = &param1->rawInterfaces;
frost$collections$Array* $tmp1100 = *$tmp1099;
ITable* $tmp1101 = ((frost$collections$Iterable*) $tmp1100)->$class->itable;
while ($tmp1101->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1101 = $tmp1101->next;
}
$fn1103 $tmp1102 = $tmp1101->methods[0];
frost$collections$Iterator* $tmp1104 = $tmp1102(((frost$collections$Iterable*) $tmp1100));
goto block67;
block67:;
ITable* $tmp1105 = $tmp1104->$class->itable;
while ($tmp1105->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1105 = $tmp1105->next;
}
$fn1107 $tmp1106 = $tmp1105->methods[0];
frost$core$Bit $tmp1108 = $tmp1106($tmp1104);
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block69; else goto block68;
block68:;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1110 = $tmp1104->$class->itable;
while ($tmp1110->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1110 = $tmp1110->next;
}
$fn1112 $tmp1111 = $tmp1110->methods[1];
frost$core$Object* $tmp1113 = $tmp1111($tmp1104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1113)));
org$frostlang$frostc$Type* $tmp1114 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:200
frost$io$OutputStream** $tmp1115 = &param0->out;
frost$io$OutputStream* $tmp1116 = *$tmp1115;
frost$core$String* $tmp1117 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:200:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
frost$core$String* $tmp1118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1117, &$s1119);
org$frostlang$frostc$Type* $tmp1120 = *(&local12);
frost$core$String* $tmp1121 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1120);
frost$core$String* $tmp1122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1118, $tmp1121);
frost$core$String* $tmp1123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1122, &$s1124);
$fn1126 $tmp1125 = ($fn1126) $tmp1116->$class->vtable[17];
frost$core$Error* $tmp1127 = $tmp1125($tmp1116, $tmp1123);
if ($tmp1127 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local0) = $tmp1127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
frost$core$Frost$unref$frost$core$Object$Q($tmp1113);
org$frostlang$frostc$Type* $tmp1128 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
frost$core$String* $tmp1129 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1130 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp1132 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1133));
frost$core$String* $tmp1134 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
*(&local7) = &$s1135;
frost$core$Frost$unref$frost$core$Object$Q($tmp1113);
org$frostlang$frostc$Type* $tmp1136 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block67;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:204
frost$io$OutputStream** $tmp1137 = &param0->out;
frost$io$OutputStream* $tmp1138 = *$tmp1137;
$fn1140 $tmp1139 = ($fn1140) $tmp1138->$class->vtable[17];
frost$core$Error* $tmp1141 = $tmp1139($tmp1138, &$s1142);
if ($tmp1141 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local0) = $tmp1141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$String* $tmp1143 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1144 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp1146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:205
frost$collections$Array** $tmp1147 = &param1->choiceCases;
frost$collections$Array* $tmp1148 = *$tmp1147;
ITable* $tmp1149 = ((frost$collections$Iterable*) $tmp1148)->$class->itable;
while ($tmp1149->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1149 = $tmp1149->next;
}
$fn1151 $tmp1150 = $tmp1149->methods[0];
frost$collections$Iterator* $tmp1152 = $tmp1150(((frost$collections$Iterable*) $tmp1148));
goto block75;
block75:;
ITable* $tmp1153 = $tmp1152->$class->itable;
while ($tmp1153->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1153 = $tmp1153->next;
}
$fn1155 $tmp1154 = $tmp1153->methods[0];
frost$core$Bit $tmp1156 = $tmp1154($tmp1152);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block77; else goto block76;
block76:;
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp1158 = $tmp1152->$class->itable;
while ($tmp1158->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1158 = $tmp1158->next;
}
$fn1160 $tmp1159 = $tmp1158->methods[1];
frost$core$Object* $tmp1161 = $tmp1159($tmp1152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp1161)));
org$frostlang$frostc$ChoiceCase* $tmp1162 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) $tmp1161);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:206
org$frostlang$frostc$ChoiceCase* $tmp1163 = *(&local13);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp1163);
frost$core$Frost$unref$frost$core$Object$Q($tmp1161);
org$frostlang$frostc$ChoiceCase* $tmp1164 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block75;
block77:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:208
frost$collections$Array** $tmp1165 = &param1->classes;
frost$collections$Array* $tmp1166 = *$tmp1165;
ITable* $tmp1167 = ((frost$collections$Iterable*) $tmp1166)->$class->itable;
while ($tmp1167->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1167 = $tmp1167->next;
}
$fn1169 $tmp1168 = $tmp1167->methods[0];
frost$collections$Iterator* $tmp1170 = $tmp1168(((frost$collections$Iterable*) $tmp1166));
goto block78;
block78:;
ITable* $tmp1171 = $tmp1170->$class->itable;
while ($tmp1171->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1171 = $tmp1171->next;
}
$fn1173 $tmp1172 = $tmp1171->methods[0];
frost$core$Bit $tmp1174 = $tmp1172($tmp1170);
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block80; else goto block79;
block79:;
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1176 = $tmp1170->$class->itable;
while ($tmp1176->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1176 = $tmp1176->next;
}
$fn1178 $tmp1177 = $tmp1176->methods[1];
frost$core$Object* $tmp1179 = $tmp1177($tmp1170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1179)));
org$frostlang$frostc$ClassDecl* $tmp1180 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) $tmp1179);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:209
org$frostlang$frostc$ClassDecl* $tmp1181 = *(&local14);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp1181);
frost$core$Frost$unref$frost$core$Object$Q($tmp1179);
org$frostlang$frostc$ClassDecl* $tmp1182 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block78;
block80:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:211
frost$collections$Array** $tmp1183 = &param1->fields;
frost$collections$Array* $tmp1184 = *$tmp1183;
ITable* $tmp1185 = ((frost$collections$Iterable*) $tmp1184)->$class->itable;
while ($tmp1185->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1185 = $tmp1185->next;
}
$fn1187 $tmp1186 = $tmp1185->methods[0];
frost$collections$Iterator* $tmp1188 = $tmp1186(((frost$collections$Iterable*) $tmp1184));
goto block81;
block81:;
ITable* $tmp1189 = $tmp1188->$class->itable;
while ($tmp1189->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1189 = $tmp1189->next;
}
$fn1191 $tmp1190 = $tmp1189->methods[0];
frost$core$Bit $tmp1192 = $tmp1190($tmp1188);
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block83; else goto block82;
block82:;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp1194 = $tmp1188->$class->itable;
while ($tmp1194->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1194 = $tmp1194->next;
}
$fn1196 $tmp1195 = $tmp1194->methods[1];
frost$core$Object* $tmp1197 = $tmp1195($tmp1188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1197)));
org$frostlang$frostc$FieldDecl* $tmp1198 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) $tmp1197);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp1199 = *(&local15);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp1199);
frost$core$Frost$unref$frost$core$Object$Q($tmp1197);
org$frostlang$frostc$FieldDecl* $tmp1200 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block81;
block83:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:214
frost$collections$Array** $tmp1201 = &param1->methods;
frost$collections$Array* $tmp1202 = *$tmp1201;
ITable* $tmp1203 = ((frost$collections$Iterable*) $tmp1202)->$class->itable;
while ($tmp1203->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1203 = $tmp1203->next;
}
$fn1205 $tmp1204 = $tmp1203->methods[0];
frost$collections$Iterator* $tmp1206 = $tmp1204(((frost$collections$Iterable*) $tmp1202));
goto block84;
block84:;
ITable* $tmp1207 = $tmp1206->$class->itable;
while ($tmp1207->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1207 = $tmp1207->next;
}
$fn1209 $tmp1208 = $tmp1207->methods[0];
frost$core$Bit $tmp1210 = $tmp1208($tmp1206);
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block86; else goto block85;
block85:;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1212 = $tmp1206->$class->itable;
while ($tmp1212->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1212 = $tmp1212->next;
}
$fn1214 $tmp1213 = $tmp1212->methods[1];
frost$core$Object* $tmp1215 = $tmp1213($tmp1206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1215)));
org$frostlang$frostc$MethodDecl* $tmp1216 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) $tmp1215);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:215
org$frostlang$frostc$MethodDecl* $tmp1217 = *(&local16);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp1217);
frost$core$Frost$unref$frost$core$Object$Q($tmp1215);
org$frostlang$frostc$MethodDecl* $tmp1218 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block84;
block86:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:217
frost$io$OutputStream** $tmp1219 = &param0->out;
frost$io$OutputStream* $tmp1220 = *$tmp1219;
$fn1222 $tmp1221 = ($fn1222) $tmp1220->$class->vtable[17];
frost$core$Error* $tmp1223 = $tmp1221($tmp1220, &$s1224);
if ($tmp1223 == NULL) goto block87; else goto block88;
block88:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local0) = $tmp1223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$String* $tmp1225 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1226 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1227 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp1228 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block87:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$String* $tmp1229 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1230 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1231 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp1232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:220
frost$core$Error* $tmp1233 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:220:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1235 $tmp1234 = ($fn1235) ((frost$core$Object*) $tmp1233)->$class->vtable[0];
frost$core$String* $tmp1236 = $tmp1234(((frost$core$Object*) $tmp1233));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1236);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:221
frost$core$Int $tmp1237 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1237);
goto block2;
block2:;
frost$core$Error* $tmp1238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:227
frost$core$Weak** $tmp1239 = &param1->owner;
frost$core$Weak* $tmp1240 = *$tmp1239;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:227:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1241 = &$tmp1240->_valid;
frost$core$Bit $tmp1242 = *$tmp1241;
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1244 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1245, $tmp1244);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1246 = &$tmp1240->value;
frost$core$Object* $tmp1247 = *$tmp1246;
frost$core$Frost$ref$frost$core$Object$Q($tmp1247);
frost$core$Bit $tmp1248 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp1247) == NULL};
bool $tmp1249 = $tmp1248.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1247);
if ($tmp1249) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Annotations** $tmp1250 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1251 = *$tmp1250;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:227:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int* $tmp1252 = &$tmp1251->flags;
frost$core$Int $tmp1253 = *$tmp1252;
frost$core$Int $tmp1254 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1255 = $tmp1253.value;
int64_t $tmp1256 = $tmp1254.value;
int64_t $tmp1257 = $tmp1255 & $tmp1256;
frost$core$Int $tmp1258 = (frost$core$Int) {$tmp1257};
frost$core$Int $tmp1259 = (frost$core$Int) {0u};
int64_t $tmp1260 = $tmp1258.value;
int64_t $tmp1261 = $tmp1259.value;
bool $tmp1262 = $tmp1260 != $tmp1261;
frost$core$Bit $tmp1263 = (frost$core$Bit) {$tmp1262};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:227:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1264 = $tmp1263.value;
bool $tmp1265 = !$tmp1264;
frost$core$Bit $tmp1266 = (frost$core$Bit) {$tmp1265};
bool $tmp1267 = $tmp1266.value;
if ($tmp1267) goto block1; else goto block2;
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
frost$core$Weak** $tmp1268 = &param0->compiler;
frost$core$Weak* $tmp1269 = *$tmp1268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$io$OutputStream** $tmp1270 = &param0->out;
frost$io$OutputStream* $tmp1271 = *$tmp1270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
return;

}

