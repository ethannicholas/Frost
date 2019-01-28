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
typedef frost$collections$ListView* (*$fn116)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);
typedef frost$core$String* (*$fn119)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn123)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn127)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn173)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn179)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn192)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn196)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn200)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn208)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn213)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn237)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn246)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn255)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn264)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn272)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn277)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn286)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn296)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn302)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn310)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn315)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn335)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn346)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn355)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn368)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn379)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn383)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn387)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn395)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn400)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn410)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn414)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn419)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn442)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn453)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn465)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn471)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn480)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn493)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn503)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn541)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn548)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn556)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn562)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn572)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn585)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn596)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn607)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn616)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn624)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn637)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn641)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn645)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn653)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn668)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn683)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn699)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn711)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn715)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn720)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn735)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn748)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn758)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn762)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn767)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn776)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn780)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn785)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn794)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn798)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn803)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn812)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn816)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn821)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn829)(frost$io$OutputStream*, frost$core$String*);

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
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, -9118778076962498171, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

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
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp118 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp118, param0);
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
frost$core$Int64 $tmp133 = (frost$core$Int64) {1};
frost$core$Bit $tmp134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block7; else goto block8;
block7:;
// line 38
org$frostlang$frostc$FixedArray* $tmp136 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp137 = (frost$core$Int64) {0};
frost$core$Object* $tmp138 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp136, $tmp137);
frost$core$String* $tmp139 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp138));
frost$core$String* $tmp140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp139, &$s141);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q($tmp138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
return $tmp140;
block8:;
frost$core$Int64 $tmp142 = (frost$core$Int64) {15};
frost$core$Bit $tmp143 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block9; else goto block10;
block9:;
// line 41
org$frostlang$frostc$FixedArray* $tmp145 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$String* $tmp146 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp145), &$s147);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
return $tmp146;
block10:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {17};
frost$core$Bit $tmp149 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp148);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block11; else goto block12;
block11:;
// line 44
org$frostlang$frostc$FixedArray* $tmp151 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$String* $tmp152 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp151), &$s153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
return $tmp152;
block12:;
frost$core$Int64 $tmp154 = (frost$core$Int64) {14};
frost$core$Bit $tmp155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp154);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block13; else goto block14;
block13:;
// line 47
org$frostlang$frostc$FixedArray* $tmp157 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$String* $tmp158 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp157), &$s159);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
return $tmp158;
block14:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {16};
frost$core$Bit $tmp161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block15; else goto block16;
block15:;
// line 50
org$frostlang$frostc$FixedArray* $tmp163 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$String* $tmp164 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp163), &$s165);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
return $tmp164;
block16:;
// line 53
frost$core$String** $tmp166 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp167 = *$tmp166;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
return $tmp167;
block1:;
goto block17;
block17:;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// line 59
*(&local0) = ((frost$core$Error*) NULL);
// line 60
frost$io$OutputStream** $tmp168 = &param0->out;
frost$io$OutputStream* $tmp169 = *$tmp168;
frost$core$String** $tmp170 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp171 = *$tmp170;
$fn173 $tmp172 = ($fn173) $tmp169->$class->vtable[17];
frost$core$Error* $tmp174 = $tmp172($tmp169, $tmp171);
if ($tmp174 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local0) = $tmp174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// line 61
frost$collections$Array** $tmp175 = &param1->fields;
frost$collections$Array* $tmp176 = *$tmp175;
ITable* $tmp177 = ((frost$collections$CollectionView*) $tmp176)->$class->itable;
while ($tmp177->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[0];
frost$core$Int64 $tmp180 = $tmp178(((frost$collections$CollectionView*) $tmp176));
frost$core$Int64 $tmp181 = (frost$core$Int64) {0};
int64_t $tmp182 = $tmp180.value;
int64_t $tmp183 = $tmp181.value;
bool $tmp184 = $tmp182 > $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block5; else goto block7;
block5:;
// line 62
frost$io$OutputStream** $tmp187 = &param0->out;
frost$io$OutputStream* $tmp188 = *$tmp187;
frost$collections$Array** $tmp189 = &param1->fields;
frost$collections$Array* $tmp190 = *$tmp189;
org$frostlang$frostc$StubCodeGenerator$_Closure6* $tmp191 = (org$frostlang$frostc$StubCodeGenerator$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure6$class);
org$frostlang$frostc$StubCodeGenerator$_Closure6$init$org$frostlang$frostc$StubCodeGenerator($tmp191, param0);
frost$core$MutableMethod* $tmp193 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp193, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure6$$anonymous5$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp191));
ITable* $tmp194 = ((frost$collections$CollectionView*) $tmp190)->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[8];
frost$collections$Array* $tmp197 = $tmp195(((frost$collections$CollectionView*) $tmp190), $tmp193);
ITable* $tmp198 = ((frost$collections$CollectionView*) $tmp197)->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[2];
frost$core$String* $tmp201 = $tmp199(((frost$collections$CollectionView*) $tmp197), &$s202);
frost$core$String* $tmp203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s204, $tmp201);
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp203, &$s206);
$fn208 $tmp207 = ($fn208) $tmp188->$class->vtable[17];
frost$core$Error* $tmp209 = $tmp207($tmp188, $tmp205);
if ($tmp209 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local0) = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
goto block6;
block7:;
// line 1
// line 65
frost$io$OutputStream** $tmp210 = &param0->out;
frost$io$OutputStream* $tmp211 = *$tmp210;
$fn213 $tmp212 = ($fn213) $tmp211->$class->vtable[21];
frost$core$Error* $tmp214 = $tmp212($tmp211);
if ($tmp214 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local0) = $tmp214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
goto block6;
block6:;
goto block2;
block1:;
// line 69
frost$core$Error* $tmp215 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp215));
// line 70
frost$core$Int64 $tmp216 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp216);
goto block2;
block2:;
frost$core$Error* $tmp217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
// line 75
org$frostlang$frostc$Annotations** $tmp218 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp219 = *$tmp218;
frost$core$Bit $tmp220 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block1; else goto block2;
block1:;
// line 76
return;
block2:;
// line 78
frost$core$Weak** $tmp222 = &param0->compiler;
frost$core$Weak* $tmp223 = *$tmp222;
frost$core$Object* $tmp224 = frost$core$Weak$get$R$frost$core$Weak$T($tmp223);
frost$core$Bit $tmp225 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp224), param1);
frost$core$Bit $tmp226 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp225);
bool $tmp227 = $tmp226.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
if ($tmp227) goto block3; else goto block4;
block3:;
// line 79
return;
block4:;
// line 81
*(&local0) = ((frost$core$Error*) NULL);
// line 82
org$frostlang$frostc$FieldDecl$Kind* $tmp228 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp229 = *$tmp228;
frost$core$Int64 $tmp230 = $tmp229.$rawValue;
frost$core$Int64 $tmp231 = (frost$core$Int64) {0};
frost$core$Bit $tmp232 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp230, $tmp231);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block8; else goto block9;
block8:;
// line 83
frost$io$OutputStream** $tmp234 = &param0->out;
frost$io$OutputStream* $tmp235 = *$tmp234;
$fn237 $tmp236 = ($fn237) $tmp235->$class->vtable[17];
frost$core$Error* $tmp238 = $tmp236($tmp235, &$s239);
if ($tmp238 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
goto block5;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
goto block7;
block9:;
frost$core$Int64 $tmp240 = (frost$core$Int64) {1};
frost$core$Bit $tmp241 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp230, $tmp240);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block12; else goto block13;
block12:;
// line 84
frost$io$OutputStream** $tmp243 = &param0->out;
frost$io$OutputStream* $tmp244 = *$tmp243;
$fn246 $tmp245 = ($fn246) $tmp244->$class->vtable[17];
frost$core$Error* $tmp247 = $tmp245($tmp244, &$s248);
if ($tmp247 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local0) = $tmp247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
goto block5;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
goto block7;
block13:;
frost$core$Int64 $tmp249 = (frost$core$Int64) {2};
frost$core$Bit $tmp250 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp230, $tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block16; else goto block17;
block16:;
// line 85
frost$io$OutputStream** $tmp252 = &param0->out;
frost$io$OutputStream* $tmp253 = *$tmp252;
$fn255 $tmp254 = ($fn255) $tmp253->$class->vtable[17];
frost$core$Error* $tmp256 = $tmp254($tmp253, &$s257);
if ($tmp256 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
goto block5;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
goto block7;
block17:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {3};
frost$core$Bit $tmp259 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp230, $tmp258);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block20; else goto block7;
block20:;
// line 86
frost$io$OutputStream** $tmp261 = &param0->out;
frost$io$OutputStream* $tmp262 = *$tmp261;
$fn264 $tmp263 = ($fn264) $tmp262->$class->vtable[17];
frost$core$Error* $tmp265 = $tmp263($tmp262, &$s266);
if ($tmp265 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local0) = $tmp265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
goto block5;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
goto block7;
block7:;
// line 88
frost$io$OutputStream** $tmp267 = &param0->out;
frost$io$OutputStream* $tmp268 = *$tmp267;
frost$core$String** $tmp269 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp270 = *$tmp269;
$fn272 $tmp271 = ($fn272) $tmp268->$class->vtable[17];
frost$core$Error* $tmp273 = $tmp271($tmp268, $tmp270);
if ($tmp273 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local0) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
goto block5;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// line 89
frost$io$OutputStream** $tmp274 = &param0->out;
frost$io$OutputStream* $tmp275 = *$tmp274;
$fn277 $tmp276 = ($fn277) $tmp275->$class->vtable[17];
frost$core$Error* $tmp278 = $tmp276($tmp275, &$s279);
if ($tmp278 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local0) = $tmp278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
goto block5;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// line 90
frost$io$OutputStream** $tmp280 = &param0->out;
frost$io$OutputStream* $tmp281 = *$tmp280;
org$frostlang$frostc$Type** $tmp282 = &param1->type;
org$frostlang$frostc$Type* $tmp283 = *$tmp282;
frost$core$String* $tmp284 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp283);
$fn286 $tmp285 = ($fn286) $tmp281->$class->vtable[17];
frost$core$Error* $tmp287 = $tmp285($tmp281, $tmp284);
if ($tmp287 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local0) = $tmp287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
goto block5;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// line 91
org$frostlang$frostc$FieldDecl$Kind* $tmp288 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp289 = *$tmp288;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp290;
$tmp290 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp290->value = $tmp289;
frost$core$Int64 $tmp291 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp292 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp291);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp293;
$tmp293 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp293->value = $tmp292;
ITable* $tmp294 = ((frost$core$Equatable*) $tmp290)->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[0];
frost$core$Bit $tmp297 = $tmp295(((frost$core$Equatable*) $tmp290), ((frost$core$Equatable*) $tmp293));
bool $tmp298 = $tmp297.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp293)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp290)));
if ($tmp298) goto block29; else goto block30;
block29:;
// line 92
frost$io$OutputStream** $tmp299 = &param0->out;
frost$io$OutputStream* $tmp300 = *$tmp299;
$fn302 $tmp301 = ($fn302) $tmp300->$class->vtable[17];
frost$core$Error* $tmp303 = $tmp301($tmp300, &$s304);
if ($tmp303 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
goto block5;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// line 93
frost$io$OutputStream** $tmp305 = &param0->out;
frost$io$OutputStream* $tmp306 = *$tmp305;
org$frostlang$frostc$ASTNode** $tmp307 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp308 = *$tmp307;
$fn310 $tmp309 = ($fn310) $tmp306->$class->vtable[18];
frost$core$Error* $tmp311 = $tmp309($tmp306, ((frost$core$Object*) $tmp308));
if ($tmp311 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local0) = $tmp311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
goto block5;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
goto block30;
block30:;
// line 95
frost$io$OutputStream** $tmp312 = &param0->out;
frost$io$OutputStream* $tmp313 = *$tmp312;
$fn315 $tmp314 = ($fn315) $tmp313->$class->vtable[21];
frost$core$Error* $tmp316 = $tmp314($tmp313);
if ($tmp316 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local0) = $tmp316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
goto block5;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
goto block6;
block5:;
// line 98
frost$core$Error* $tmp317 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp317));
// line 99
frost$core$Int64 $tmp318 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp318);
goto block6;
block6:;
frost$core$Error* $tmp319 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// line 104
org$frostlang$frostc$Annotations** $tmp320 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp321 = *$tmp320;
frost$core$Bit $tmp322 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp321);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block1; else goto block2;
block1:;
// line 105
return;
block2:;
// line 107
frost$core$Weak** $tmp324 = &param0->compiler;
frost$core$Weak* $tmp325 = *$tmp324;
frost$core$Object* $tmp326 = frost$core$Weak$get$R$frost$core$Weak$T($tmp325);
frost$core$Bit $tmp327 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp326), param1);
frost$core$Bit $tmp328 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp327);
bool $tmp329 = $tmp328.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
if ($tmp329) goto block3; else goto block4;
block3:;
// line 108
return;
block4:;
// line 110
*(&local0) = ((frost$core$Error*) NULL);
// line 111
frost$io$OutputStream** $tmp330 = &param0->out;
frost$io$OutputStream* $tmp331 = *$tmp330;
org$frostlang$frostc$Annotations** $tmp332 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp333 = *$tmp332;
$fn335 $tmp334 = ($fn335) $tmp331->$class->vtable[18];
frost$core$Error* $tmp336 = $tmp334($tmp331, ((frost$core$Object*) $tmp333));
if ($tmp336 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = $tmp336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// line 112
org$frostlang$frostc$MethodDecl$Kind* $tmp337 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp338 = *$tmp337;
frost$core$Int64 $tmp339 = $tmp338.$rawValue;
frost$core$Int64 $tmp340 = (frost$core$Int64) {0};
frost$core$Bit $tmp341 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp339, $tmp340);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block10; else goto block11;
block10:;
// line 114
frost$io$OutputStream** $tmp343 = &param0->out;
frost$io$OutputStream* $tmp344 = *$tmp343;
$fn346 $tmp345 = ($fn346) $tmp344->$class->vtable[17];
frost$core$Error* $tmp347 = $tmp345($tmp344, &$s348);
if ($tmp347 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local0) = $tmp347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
goto block5;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
goto block9;
block11:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {1};
frost$core$Bit $tmp350 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp339, $tmp349);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block14; else goto block15;
block14:;
// line 117
frost$io$OutputStream** $tmp352 = &param0->out;
frost$io$OutputStream* $tmp353 = *$tmp352;
$fn355 $tmp354 = ($fn355) $tmp353->$class->vtable[17];
frost$core$Error* $tmp356 = $tmp354($tmp353, &$s357);
if ($tmp356 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local0) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
goto block5;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
goto block9;
block15:;
frost$core$Int64 $tmp358 = (frost$core$Int64) {2};
frost$core$Bit $tmp359 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp339, $tmp358);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block18; else goto block19;
block18:;
goto block9;
block19:;
// line 122
frost$core$Int64 $tmp361 = (frost$core$Int64) {122};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s362, $tmp361);
abort(); // unreachable
block9:;
// line 125
frost$io$OutputStream** $tmp363 = &param0->out;
frost$io$OutputStream* $tmp364 = *$tmp363;
frost$core$String** $tmp365 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp366 = *$tmp365;
$fn368 $tmp367 = ($fn368) $tmp364->$class->vtable[17];
frost$core$Error* $tmp369 = $tmp367($tmp364, $tmp366);
if ($tmp369 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local0) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
goto block5;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// line 126
frost$collections$Array** $tmp370 = &param1->genericParameters;
frost$collections$Array* $tmp371 = *$tmp370;
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit($tmp371 != NULL);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block22; else goto block23;
block22:;
// line 127
frost$io$OutputStream** $tmp374 = &param0->out;
frost$io$OutputStream* $tmp375 = *$tmp374;
frost$collections$Array** $tmp376 = &param1->genericParameters;
frost$collections$Array* $tmp377 = *$tmp376;
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp378 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp378, param0);
frost$core$MutableMethod* $tmp380 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp380, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp378));
ITable* $tmp381 = ((frost$collections$CollectionView*) $tmp377)->$class->itable;
while ($tmp381->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp381 = $tmp381->next;
}
$fn383 $tmp382 = $tmp381->methods[8];
frost$collections$Array* $tmp384 = $tmp382(((frost$collections$CollectionView*) $tmp377), $tmp380);
ITable* $tmp385 = ((frost$collections$CollectionView*) $tmp384)->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[2];
frost$core$String* $tmp388 = $tmp386(((frost$collections$CollectionView*) $tmp384), &$s389);
frost$core$String* $tmp390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s391, $tmp388);
frost$core$String* $tmp392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp390, &$s393);
$fn395 $tmp394 = ($fn395) $tmp375->$class->vtable[17];
frost$core$Error* $tmp396 = $tmp394($tmp375, $tmp392);
if ($tmp396 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local0) = $tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
goto block5;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
goto block23;
block23:;
// line 131
frost$io$OutputStream** $tmp397 = &param0->out;
frost$io$OutputStream* $tmp398 = *$tmp397;
$fn400 $tmp399 = ($fn400) $tmp398->$class->vtable[17];
frost$core$Error* $tmp401 = $tmp399($tmp398, &$s402);
if ($tmp401 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local0) = $tmp401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
goto block5;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// line 132
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s403));
frost$core$String* $tmp404 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local1) = &$s405;
// line 133
frost$collections$Array** $tmp406 = &param1->parameters;
frost$collections$Array* $tmp407 = *$tmp406;
ITable* $tmp408 = ((frost$collections$Iterable*) $tmp407)->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[0];
frost$collections$Iterator* $tmp411 = $tmp409(((frost$collections$Iterable*) $tmp407));
goto block28;
block28:;
ITable* $tmp412 = $tmp411->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
frost$core$Bit $tmp415 = $tmp413($tmp411);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block30; else goto block29;
block29:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp417 = $tmp411->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[1];
frost$core$Object* $tmp420 = $tmp418($tmp411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp420)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp421 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp420);
// line 134
frost$io$OutputStream** $tmp422 = &param0->out;
frost$io$OutputStream* $tmp423 = *$tmp422;
frost$core$String* $tmp424 = *(&local1);
frost$core$String* $tmp425 = frost$core$String$get_asString$R$frost$core$String($tmp424);
frost$core$String* $tmp426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp425, &$s427);
org$frostlang$frostc$MethodDecl$Parameter* $tmp428 = *(&local2);
frost$core$String** $tmp429 = &$tmp428->name;
frost$core$String* $tmp430 = *$tmp429;
frost$core$String* $tmp431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp426, $tmp430);
frost$core$String* $tmp432 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp431, &$s433);
org$frostlang$frostc$MethodDecl$Parameter* $tmp434 = *(&local2);
org$frostlang$frostc$Type** $tmp435 = &$tmp434->type;
org$frostlang$frostc$Type* $tmp436 = *$tmp435;
frost$core$String* $tmp437 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp436);
frost$core$String* $tmp438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp432, $tmp437);
frost$core$String* $tmp439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp438, &$s440);
$fn442 $tmp441 = ($fn442) $tmp423->$class->vtable[17];
frost$core$Error* $tmp443 = $tmp441($tmp423, $tmp439);
if ($tmp443 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local0) = $tmp443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
org$frostlang$frostc$MethodDecl$Parameter* $tmp444 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$String* $tmp445 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// line 135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s446));
frost$core$String* $tmp447 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local1) = &$s448;
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
org$frostlang$frostc$MethodDecl$Parameter* $tmp449 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// line 137
frost$io$OutputStream** $tmp450 = &param0->out;
frost$io$OutputStream* $tmp451 = *$tmp450;
$fn453 $tmp452 = ($fn453) $tmp451->$class->vtable[17];
frost$core$Error* $tmp454 = $tmp452($tmp451, &$s455);
if ($tmp454 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local0) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$String* $tmp456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// line 138
org$frostlang$frostc$MethodDecl$Kind* $tmp457 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp458 = *$tmp457;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp459;
$tmp459 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp459->value = $tmp458;
frost$core$Int64 $tmp460 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp461 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp460);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp462;
$tmp462 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp462->value = $tmp461;
ITable* $tmp463 = ((frost$core$Equatable*) $tmp459)->$class->itable;
while ($tmp463->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp463 = $tmp463->next;
}
$fn465 $tmp464 = $tmp463->methods[0];
frost$core$Bit $tmp466 = $tmp464(((frost$core$Equatable*) $tmp459), ((frost$core$Equatable*) $tmp462));
bool $tmp467 = $tmp466.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp462)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp459)));
if ($tmp467) goto block35; else goto block37;
block35:;
// line 139
frost$io$OutputStream** $tmp468 = &param0->out;
frost$io$OutputStream* $tmp469 = *$tmp468;
$fn471 $tmp470 = ($fn471) $tmp469->$class->vtable[17];
frost$core$Error* $tmp472 = $tmp470($tmp469, &$s473);
if ($tmp472 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local0) = $tmp472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$String* $tmp474 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
goto block36;
block37:;
// line 141
org$frostlang$frostc$Type** $tmp475 = &param1->returnType;
org$frostlang$frostc$Type* $tmp476 = *$tmp475;
org$frostlang$frostc$Type* $tmp477 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp478 = ((frost$core$Equatable*) $tmp476)->$class->itable;
while ($tmp478->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp478 = $tmp478->next;
}
$fn480 $tmp479 = $tmp478->methods[1];
frost$core$Bit $tmp481 = $tmp479(((frost$core$Equatable*) $tmp476), ((frost$core$Equatable*) $tmp477));
bool $tmp482 = $tmp481.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
if ($tmp482) goto block40; else goto block41;
block40:;
// line 142
frost$io$OutputStream** $tmp483 = &param0->out;
frost$io$OutputStream* $tmp484 = *$tmp483;
org$frostlang$frostc$Type** $tmp485 = &param1->returnType;
org$frostlang$frostc$Type* $tmp486 = *$tmp485;
frost$core$String* $tmp487 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp486);
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s489, $tmp487);
frost$core$String* $tmp490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp488, &$s491);
$fn493 $tmp492 = ($fn493) $tmp484->$class->vtable[19];
frost$core$Error* $tmp494 = $tmp492($tmp484, $tmp490);
if ($tmp494 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local0) = $tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$String* $tmp495 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
goto block41;
block41:;
goto block36;
block36:;
// line 144
org$frostlang$frostc$Annotations** $tmp496 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp497 = *$tmp496;
frost$core$Bit $tmp498 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit($tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block44; else goto block45;
block44:;
// line 145
frost$io$OutputStream** $tmp500 = &param0->out;
frost$io$OutputStream* $tmp501 = *$tmp500;
$fn503 $tmp502 = ($fn503) $tmp501->$class->vtable[17];
frost$core$Error* $tmp504 = $tmp502($tmp501, &$s505);
if ($tmp504 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local0) = $tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$String* $tmp506 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
goto block45;
block45:;
frost$core$String* $tmp507 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block5:;
// line 149
frost$core$Error* $tmp508 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp508));
// line 150
frost$core$Int64 $tmp509 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp509);
goto block6;
block6:;
frost$core$Error* $tmp510 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
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
frost$core$Weak** $tmp511 = &param0->compiler;
frost$core$Weak* $tmp512 = *$tmp511;
frost$core$Object* $tmp513 = frost$core$Weak$get$R$frost$core$Weak$T($tmp512);
frost$core$Bit $tmp514 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp513), param1);
frost$core$Bit $tmp515 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp514);
bool $tmp516 = $tmp515.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp513);
if ($tmp516) goto block3; else goto block4;
block3:;
// line 159
frost$core$Error* $tmp517 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 161
frost$core$String** $tmp518 = &param1->name;
frost$core$String* $tmp519 = *$tmp518;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$String* $tmp520 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local1) = $tmp519;
// line 162
frost$core$String** $tmp521 = &param1->name;
frost$core$String* $tmp522 = *$tmp521;
frost$core$RegularExpression* $tmp523 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp523, &$s524);
frost$collections$ListView* $tmp525 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q($tmp522, $tmp523);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$collections$ListView* $tmp526 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local2) = $tmp525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// line 163
frost$collections$ListView* $tmp527 = *(&local2);
frost$core$Bit $tmp528 = frost$core$Bit$init$builtin_bit($tmp527 != NULL);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block5; else goto block6;
block5:;
// line 164
frost$core$Weak** $tmp530 = &param1->owner;
frost$core$Weak* $tmp531 = *$tmp530;
frost$core$Object* $tmp532 = frost$core$Weak$get$R$frost$core$Weak$T($tmp531);
frost$core$Bit $tmp533 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp532) == NULL);
bool $tmp534 = $tmp533.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp532);
if ($tmp534) goto block7; else goto block8;
block7:;
// line 165
frost$io$OutputStream** $tmp535 = &param0->out;
frost$io$OutputStream* $tmp536 = *$tmp535;
frost$collections$ListView* $tmp537 = *(&local2);
frost$core$Int64 $tmp538 = (frost$core$Int64) {0};
ITable* $tmp539 = $tmp537->$class->itable;
while ($tmp539->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp539 = $tmp539->next;
}
$fn541 $tmp540 = $tmp539->methods[0];
frost$core$Object* $tmp542 = $tmp540($tmp537, $tmp538);
frost$core$String* $tmp543 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s544, ((frost$core$String*) $tmp542));
frost$core$String* $tmp545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp543, &$s546);
$fn548 $tmp547 = ($fn548) $tmp536->$class->vtable[19];
frost$core$Error* $tmp549 = $tmp547($tmp536, $tmp545);
if ($tmp549 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local0) = $tmp549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q($tmp542);
frost$collections$ListView* $tmp550 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp551 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q($tmp542);
goto block8;
block8:;
// line 167
frost$collections$ListView* $tmp552 = *(&local2);
frost$core$Int64 $tmp553 = (frost$core$Int64) {1};
ITable* $tmp554 = $tmp552->$class->itable;
while ($tmp554->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp554 = $tmp554->next;
}
$fn556 $tmp555 = $tmp554->methods[0];
frost$core$Object* $tmp557 = $tmp555($tmp552, $tmp553);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp557)));
frost$core$String* $tmp558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local1) = ((frost$core$String*) $tmp557);
frost$core$Frost$unref$frost$core$Object$Q($tmp557);
goto block6;
block6:;
// line 169
frost$io$OutputStream** $tmp559 = &param0->out;
frost$io$OutputStream* $tmp560 = *$tmp559;
$fn562 $tmp561 = ($fn562) $tmp560->$class->vtable[19];
frost$core$Error* $tmp563 = $tmp561($tmp560, &$s564);
if ($tmp563 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local0) = $tmp563;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$collections$ListView* $tmp565 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// line 170
frost$io$OutputStream** $tmp567 = &param0->out;
frost$io$OutputStream* $tmp568 = *$tmp567;
org$frostlang$frostc$Annotations** $tmp569 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp570 = *$tmp569;
$fn572 $tmp571 = ($fn572) $tmp568->$class->vtable[18];
frost$core$Error* $tmp573 = $tmp571($tmp568, ((frost$core$Object*) $tmp570));
if ($tmp573 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local0) = $tmp573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$collections$ListView* $tmp574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp575 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// line 171
org$frostlang$frostc$ClassDecl$Kind* $tmp576 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp577 = *$tmp576;
frost$core$Int64 $tmp578 = $tmp577.$rawValue;
frost$core$Int64 $tmp579 = (frost$core$Int64) {0};
frost$core$Bit $tmp580 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp578, $tmp579);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block16; else goto block17;
block16:;
// line 172
frost$io$OutputStream** $tmp582 = &param0->out;
frost$io$OutputStream* $tmp583 = *$tmp582;
$fn585 $tmp584 = ($fn585) $tmp583->$class->vtable[17];
frost$core$Error* $tmp586 = $tmp584($tmp583, &$s587);
if ($tmp586 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local0) = $tmp586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$collections$ListView* $tmp588 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp589 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
goto block15;
block17:;
frost$core$Int64 $tmp590 = (frost$core$Int64) {1};
frost$core$Bit $tmp591 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp578, $tmp590);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block20; else goto block21;
block20:;
// line 173
frost$io$OutputStream** $tmp593 = &param0->out;
frost$io$OutputStream* $tmp594 = *$tmp593;
$fn596 $tmp595 = ($fn596) $tmp594->$class->vtable[17];
frost$core$Error* $tmp597 = $tmp595($tmp594, &$s598);
if ($tmp597 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local0) = $tmp597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$collections$ListView* $tmp599 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp600 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
goto block15;
block21:;
frost$core$Int64 $tmp601 = (frost$core$Int64) {2};
frost$core$Bit $tmp602 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp578, $tmp601);
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block24; else goto block15;
block24:;
// line 174
frost$io$OutputStream** $tmp604 = &param0->out;
frost$io$OutputStream* $tmp605 = *$tmp604;
$fn607 $tmp606 = ($fn607) $tmp605->$class->vtable[17];
frost$core$Error* $tmp608 = $tmp606($tmp605, &$s609);
if ($tmp608 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local0) = $tmp608;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$collections$ListView* $tmp610 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp611 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
goto block15;
block15:;
// line 176
frost$io$OutputStream** $tmp612 = &param0->out;
frost$io$OutputStream* $tmp613 = *$tmp612;
frost$core$String* $tmp614 = *(&local1);
$fn616 $tmp615 = ($fn616) $tmp613->$class->vtable[17];
frost$core$Error* $tmp617 = $tmp615($tmp613, $tmp614);
if ($tmp617 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local0) = $tmp617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$collections$ListView* $tmp618 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp619 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// line 177
frost$collections$List** $tmp620 = &param1->parameters;
frost$collections$List* $tmp621 = *$tmp620;
ITable* $tmp622 = ((frost$collections$CollectionView*) $tmp621)->$class->itable;
while ($tmp622->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp622 = $tmp622->next;
}
$fn624 $tmp623 = $tmp622->methods[0];
frost$core$Int64 $tmp625 = $tmp623(((frost$collections$CollectionView*) $tmp621));
frost$core$Int64 $tmp626 = (frost$core$Int64) {0};
int64_t $tmp627 = $tmp625.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 > $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block29; else goto block30;
block29:;
// line 178
frost$io$OutputStream** $tmp632 = &param0->out;
frost$io$OutputStream* $tmp633 = *$tmp632;
frost$collections$List** $tmp634 = &param1->parameters;
frost$collections$List* $tmp635 = *$tmp634;
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp636 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp636, param0);
frost$core$MutableMethod* $tmp638 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp638, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp636));
ITable* $tmp639 = ((frost$collections$CollectionView*) $tmp635)->$class->itable;
while ($tmp639->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp639 = $tmp639->next;
}
$fn641 $tmp640 = $tmp639->methods[8];
frost$collections$Array* $tmp642 = $tmp640(((frost$collections$CollectionView*) $tmp635), $tmp638);
ITable* $tmp643 = ((frost$collections$CollectionView*) $tmp642)->$class->itable;
while ($tmp643->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp643 = $tmp643->next;
}
$fn645 $tmp644 = $tmp643->methods[2];
frost$core$String* $tmp646 = $tmp644(((frost$collections$CollectionView*) $tmp642), &$s647);
frost$core$String* $tmp648 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s649, $tmp646);
frost$core$String* $tmp650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp648, &$s651);
$fn653 $tmp652 = ($fn653) $tmp633->$class->vtable[17];
frost$core$Error* $tmp654 = $tmp652($tmp633, $tmp650);
if ($tmp654 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local0) = $tmp654;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$collections$ListView* $tmp655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp656 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
goto block30;
block30:;
// line 181
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s657));
frost$core$String* $tmp658 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local3) = &$s659;
// line 182
org$frostlang$frostc$ClassDecl$Kind* $tmp660 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp661 = *$tmp660;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp662;
$tmp662 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp662->value = $tmp661;
frost$core$Int64 $tmp663 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp664 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp663);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp665;
$tmp665 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp665->value = $tmp664;
ITable* $tmp666 = ((frost$core$Equatable*) $tmp662)->$class->itable;
while ($tmp666->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp666 = $tmp666->next;
}
$fn668 $tmp667 = $tmp666->methods[1];
frost$core$Bit $tmp669 = $tmp667(((frost$core$Equatable*) $tmp662), ((frost$core$Equatable*) $tmp665));
bool $tmp670 = $tmp669.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp665)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp662)));
if ($tmp670) goto block33; else goto block34;
block33:;
// line 183
org$frostlang$frostc$Type** $tmp671 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp672 = *$tmp671;
frost$core$Bit $tmp673 = frost$core$Bit$init$builtin_bit($tmp672 != NULL);
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block37; else goto block36;
block37:;
org$frostlang$frostc$ClassDecl$Kind* $tmp675 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp676 = *$tmp675;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp677;
$tmp677 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp677->value = $tmp676;
frost$core$Int64 $tmp678 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp679 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp678);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp680;
$tmp680 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp680->value = $tmp679;
ITable* $tmp681 = ((frost$core$Equatable*) $tmp677)->$class->itable;
while ($tmp681->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp681 = $tmp681->next;
}
$fn683 $tmp682 = $tmp681->methods[1];
frost$core$Bit $tmp684 = $tmp682(((frost$core$Equatable*) $tmp677), ((frost$core$Equatable*) $tmp680));
bool $tmp685 = $tmp684.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp680)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp677)));
if ($tmp685) goto block35; else goto block36;
block35:;
// line 184
frost$io$OutputStream** $tmp686 = &param0->out;
frost$io$OutputStream* $tmp687 = *$tmp686;
frost$core$String* $tmp688 = *(&local3);
frost$core$String* $tmp689 = frost$core$String$get_asString$R$frost$core$String($tmp688);
frost$core$String* $tmp690 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp689, &$s691);
org$frostlang$frostc$Type** $tmp692 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp693 = *$tmp692;
frost$core$String* $tmp694 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp693);
frost$core$String* $tmp695 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp690, $tmp694);
frost$core$String* $tmp696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp695, &$s697);
$fn699 $tmp698 = ($fn699) $tmp687->$class->vtable[17];
frost$core$Error* $tmp700 = $tmp698($tmp687, $tmp696);
if ($tmp700 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local0) = $tmp700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$String* $tmp701 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp703 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s704));
frost$core$String* $tmp705 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local3) = &$s706;
goto block36;
block36:;
// line 187
frost$collections$Array** $tmp707 = &param1->rawInterfaces;
frost$collections$Array* $tmp708 = *$tmp707;
ITable* $tmp709 = ((frost$collections$Iterable*) $tmp708)->$class->itable;
while ($tmp709->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp709 = $tmp709->next;
}
$fn711 $tmp710 = $tmp709->methods[0];
frost$collections$Iterator* $tmp712 = $tmp710(((frost$collections$Iterable*) $tmp708));
goto block40;
block40:;
ITable* $tmp713 = $tmp712->$class->itable;
while ($tmp713->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp713 = $tmp713->next;
}
$fn715 $tmp714 = $tmp713->methods[0];
frost$core$Bit $tmp716 = $tmp714($tmp712);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block42; else goto block41;
block41:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp718 = $tmp712->$class->itable;
while ($tmp718->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp718 = $tmp718->next;
}
$fn720 $tmp719 = $tmp718->methods[1];
frost$core$Object* $tmp721 = $tmp719($tmp712);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp721)));
org$frostlang$frostc$Type* $tmp722 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp721);
// line 188
frost$io$OutputStream** $tmp723 = &param0->out;
frost$io$OutputStream* $tmp724 = *$tmp723;
frost$core$String* $tmp725 = *(&local3);
frost$core$String* $tmp726 = frost$core$String$get_asString$R$frost$core$String($tmp725);
frost$core$String* $tmp727 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp726, &$s728);
org$frostlang$frostc$Type* $tmp729 = *(&local4);
frost$core$String* $tmp730 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp729);
frost$core$String* $tmp731 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp727, $tmp730);
frost$core$String* $tmp732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp731, &$s733);
$fn735 $tmp734 = ($fn735) $tmp724->$class->vtable[17];
frost$core$Error* $tmp736 = $tmp734($tmp724, $tmp732);
if ($tmp736 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local0) = $tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q($tmp721);
org$frostlang$frostc$Type* $tmp737 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$String* $tmp738 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp739 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp740 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// line 189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s741));
frost$core$String* $tmp742 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local3) = &$s743;
frost$core$Frost$unref$frost$core$Object$Q($tmp721);
org$frostlang$frostc$Type* $tmp744 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block40;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
goto block34;
block34:;
// line 192
frost$io$OutputStream** $tmp745 = &param0->out;
frost$io$OutputStream* $tmp746 = *$tmp745;
$fn748 $tmp747 = ($fn748) $tmp746->$class->vtable[17];
frost$core$Error* $tmp749 = $tmp747($tmp746, &$s750);
if ($tmp749 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local0) = $tmp749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$String* $tmp751 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp752 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp753 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// line 193
frost$collections$Array** $tmp754 = &param1->choiceCases;
frost$collections$Array* $tmp755 = *$tmp754;
ITable* $tmp756 = ((frost$collections$Iterable*) $tmp755)->$class->itable;
while ($tmp756->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp756 = $tmp756->next;
}
$fn758 $tmp757 = $tmp756->methods[0];
frost$collections$Iterator* $tmp759 = $tmp757(((frost$collections$Iterable*) $tmp755));
goto block47;
block47:;
ITable* $tmp760 = $tmp759->$class->itable;
while ($tmp760->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp760 = $tmp760->next;
}
$fn762 $tmp761 = $tmp760->methods[0];
frost$core$Bit $tmp763 = $tmp761($tmp759);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block49; else goto block48;
block48:;
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp765 = $tmp759->$class->itable;
while ($tmp765->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp765 = $tmp765->next;
}
$fn767 $tmp766 = $tmp765->methods[1];
frost$core$Object* $tmp768 = $tmp766($tmp759);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp768)));
org$frostlang$frostc$ChoiceCase* $tmp769 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) $tmp768);
// line 194
org$frostlang$frostc$ChoiceCase* $tmp770 = *(&local5);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp770);
frost$core$Frost$unref$frost$core$Object$Q($tmp768);
org$frostlang$frostc$ChoiceCase* $tmp771 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// line 196
frost$collections$Array** $tmp772 = &param1->classes;
frost$collections$Array* $tmp773 = *$tmp772;
ITable* $tmp774 = ((frost$collections$Iterable*) $tmp773)->$class->itable;
while ($tmp774->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp774 = $tmp774->next;
}
$fn776 $tmp775 = $tmp774->methods[0];
frost$collections$Iterator* $tmp777 = $tmp775(((frost$collections$Iterable*) $tmp773));
goto block50;
block50:;
ITable* $tmp778 = $tmp777->$class->itable;
while ($tmp778->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp778 = $tmp778->next;
}
$fn780 $tmp779 = $tmp778->methods[0];
frost$core$Bit $tmp781 = $tmp779($tmp777);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block52; else goto block51;
block51:;
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp783 = $tmp777->$class->itable;
while ($tmp783->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp783 = $tmp783->next;
}
$fn785 $tmp784 = $tmp783->methods[1];
frost$core$Object* $tmp786 = $tmp784($tmp777);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp786)));
org$frostlang$frostc$ClassDecl* $tmp787 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) $tmp786);
// line 197
org$frostlang$frostc$ClassDecl* $tmp788 = *(&local6);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp788);
frost$core$Frost$unref$frost$core$Object$Q($tmp786);
org$frostlang$frostc$ClassDecl* $tmp789 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block50;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
// line 199
frost$collections$Array** $tmp790 = &param1->fields;
frost$collections$Array* $tmp791 = *$tmp790;
ITable* $tmp792 = ((frost$collections$Iterable*) $tmp791)->$class->itable;
while ($tmp792->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp792 = $tmp792->next;
}
$fn794 $tmp793 = $tmp792->methods[0];
frost$collections$Iterator* $tmp795 = $tmp793(((frost$collections$Iterable*) $tmp791));
goto block53;
block53:;
ITable* $tmp796 = $tmp795->$class->itable;
while ($tmp796->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp796 = $tmp796->next;
}
$fn798 $tmp797 = $tmp796->methods[0];
frost$core$Bit $tmp799 = $tmp797($tmp795);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block55; else goto block54;
block54:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp801 = $tmp795->$class->itable;
while ($tmp801->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[1];
frost$core$Object* $tmp804 = $tmp802($tmp795);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp804)));
org$frostlang$frostc$FieldDecl* $tmp805 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp804);
// line 200
org$frostlang$frostc$FieldDecl* $tmp806 = *(&local7);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp806);
frost$core$Frost$unref$frost$core$Object$Q($tmp804);
org$frostlang$frostc$FieldDecl* $tmp807 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// line 202
frost$collections$Array** $tmp808 = &param1->methods;
frost$collections$Array* $tmp809 = *$tmp808;
ITable* $tmp810 = ((frost$collections$Iterable*) $tmp809)->$class->itable;
while ($tmp810->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp810 = $tmp810->next;
}
$fn812 $tmp811 = $tmp810->methods[0];
frost$collections$Iterator* $tmp813 = $tmp811(((frost$collections$Iterable*) $tmp809));
goto block56;
block56:;
ITable* $tmp814 = $tmp813->$class->itable;
while ($tmp814->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp814 = $tmp814->next;
}
$fn816 $tmp815 = $tmp814->methods[0];
frost$core$Bit $tmp817 = $tmp815($tmp813);
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block58; else goto block57;
block57:;
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp819 = $tmp813->$class->itable;
while ($tmp819->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp819 = $tmp819->next;
}
$fn821 $tmp820 = $tmp819->methods[1];
frost$core$Object* $tmp822 = $tmp820($tmp813);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp822)));
org$frostlang$frostc$MethodDecl* $tmp823 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) $tmp822);
// line 203
org$frostlang$frostc$MethodDecl* $tmp824 = *(&local8);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp824);
frost$core$Frost$unref$frost$core$Object$Q($tmp822);
org$frostlang$frostc$MethodDecl* $tmp825 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block56;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// line 205
frost$io$OutputStream** $tmp826 = &param0->out;
frost$io$OutputStream* $tmp827 = *$tmp826;
$fn829 $tmp828 = ($fn829) $tmp827->$class->vtable[17];
frost$core$Error* $tmp830 = $tmp828($tmp827, &$s831);
if ($tmp830 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local0) = $tmp830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp832 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp833 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp834 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp835 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp836 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp837 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 208
frost$core$Error* $tmp838 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp838));
// line 209
frost$core$Int64 $tmp839 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp839);
goto block2;
block2:;
frost$core$Error* $tmp840 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 215
frost$core$Weak** $tmp841 = &param1->owner;
frost$core$Weak* $tmp842 = *$tmp841;
frost$core$Object* $tmp843 = frost$core$Weak$get$R$frost$core$Weak$T($tmp842);
frost$core$Bit $tmp844 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp843) == NULL);
bool $tmp845 = $tmp844.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp843);
if ($tmp845) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Annotations** $tmp846 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp847 = *$tmp846;
frost$core$Bit $tmp848 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp847);
frost$core$Bit $tmp849 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp848);
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block1; else goto block2;
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
frost$core$Weak** $tmp851 = &param0->compiler;
frost$core$Weak* $tmp852 = *$tmp851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$io$OutputStream** $tmp853 = &param0->out;
frost$io$OutputStream* $tmp854 = *$tmp853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
return;

}

