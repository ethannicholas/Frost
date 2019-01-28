#include "org/frostlang/frostc/HCodeGenerator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/io/MemoryOutputStream.h"
#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Error.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/Maybe.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$HCodeGenerator$class_type org$frostlang$frostc$HCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$cleanup, org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$finish} };

typedef frost$core$Error* (*$fn232)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn263)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn377)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn410)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn551)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn559)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn573)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn580)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn588)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn613)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn633)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn637)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn642)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn673)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn694)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn708)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn716)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn741)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn748)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn773)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn789)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn809)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn828)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn845)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn853)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn867)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn891)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn905)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn928)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn935)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn960)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn981)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn998)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1021)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1055)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1151)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1170)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1195)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1205)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1209)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1214)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1241)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1254)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1262)(frost$core$Object*);
typedef frost$core$Error* (*$fn1271)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1278)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1285)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1292)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, 945681673046986118, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40", 1, 165, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1018 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };

void org$frostlang$frostc$HCodeGenerator$init$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1) {

// line 42
org$frostlang$frostc$CCodeGenerator* $tmp2 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File$org$frostlang$frostc$HCodeGenerator($tmp2, param1, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$CCodeGenerator** $tmp3 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlang$frostc$CCodeGenerator** $tmp5 = &param0->cCodeGenRetain;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 43
org$frostlang$frostc$CCodeGenerator** $tmp6 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp7 = *$tmp6;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1, org$frostlang$frostc$CCodeGenerator* param2) {

// line 6
frost$core$Weak* $tmp8 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp8, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Weak** $tmp9 = &param0->compiler;
frost$core$Weak* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 8
frost$io$MemoryOutputStream* $tmp12 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$io$MemoryOutputStream** $tmp13 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$io$MemoryOutputStream** $tmp15 = &param0->typeImportStream;
*$tmp15 = $tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// line 10
frost$io$MemoryOutputStream* $tmp16 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$io$MemoryOutputStream** $tmp17 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp18 = *$tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$io$MemoryOutputStream** $tmp19 = &param0->typesBuffer;
*$tmp19 = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// line 12
frost$io$IndentedOutputStream* $tmp20 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp21 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp22 = *$tmp21;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp20, ((frost$io$OutputStream*) $tmp22));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$io$IndentedOutputStream** $tmp23 = &param0->types;
frost$io$IndentedOutputStream* $tmp24 = *$tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$io$IndentedOutputStream** $tmp25 = &param0->types;
*$tmp25 = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// line 14
frost$io$MemoryOutputStream* $tmp26 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$io$MemoryOutputStream** $tmp27 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$io$MemoryOutputStream** $tmp29 = &param0->bodyImportStream;
*$tmp29 = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// line 16
frost$io$MemoryOutputStream* $tmp30 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$io$MemoryOutputStream** $tmp31 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp32 = *$tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$io$MemoryOutputStream** $tmp33 = &param0->bodyBuffer;
*$tmp33 = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// line 18
frost$io$IndentedOutputStream* $tmp34 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp35 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp36 = *$tmp35;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp34, ((frost$io$OutputStream*) $tmp36));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$io$IndentedOutputStream** $tmp37 = &param0->body;
frost$io$IndentedOutputStream* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$io$IndentedOutputStream** $tmp39 = &param0->body;
*$tmp39 = $tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// line 20
frost$collections$HashSet* $tmp40 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$collections$HashSet** $tmp41 = &param0->typeImports;
frost$collections$HashSet* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$collections$HashSet** $tmp43 = &param0->typeImports;
*$tmp43 = $tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// line 22
frost$collections$HashSet* $tmp44 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$collections$HashSet** $tmp45 = &param0->bodyImports;
frost$collections$HashSet* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$collections$HashSet** $tmp47 = &param0->bodyImports;
*$tmp47 = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// line 24
frost$collections$HashSet** $tmp48 = &param0->typeImports;
frost$collections$HashSet* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$HashSet** $tmp50 = &param0->imports;
frost$collections$HashSet* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$HashSet** $tmp52 = &param0->imports;
*$tmp52 = $tmp49;
// line 26
frost$io$MemoryOutputStream** $tmp53 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp54 = *$tmp53;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$io$MemoryOutputStream** $tmp55 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$io$MemoryOutputStream** $tmp57 = &param0->importStream;
*$tmp57 = $tmp54;
// line 34
org$frostlang$frostc$LLVMCodeGenerator* $tmp58 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$io$MemoryOutputStream* $tmp59 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp59);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp58, &$s60, ((frost$io$OutputStream*) $tmp59));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
org$frostlang$frostc$LLVMCodeGenerator** $tmp61 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp62 = *$tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlang$frostc$LLVMCodeGenerator** $tmp63 = &param0->llvmCodeGen;
*$tmp63 = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp64 = &param0->outDir;
frost$io$File* $tmp65 = *$tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$io$File** $tmp66 = &param0->outDir;
*$tmp66 = param1;
// line 48
frost$io$IndentedOutputStream* $tmp67 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp68 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp68);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp67, ((frost$io$OutputStream*) $tmp68));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$io$IndentedOutputStream** $tmp69 = &param0->out;
frost$io$IndentedOutputStream* $tmp70 = *$tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$io$IndentedOutputStream** $tmp71 = &param0->out;
*$tmp71 = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// line 49
frost$io$IndentedOutputStream* $tmp72 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp73 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp73);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp72, ((frost$io$OutputStream*) $tmp73));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$io$IndentedOutputStream** $tmp74 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$io$IndentedOutputStream** $tmp76 = &param0->typesOut;
*$tmp76 = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// line 50
frost$core$Weak* $tmp77 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp77, ((frost$core$Object*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Weak** $tmp78 = &param0->cCodeGen;
frost$core$Weak* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Weak** $tmp80 = &param0->cCodeGen;
*$tmp80 = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, frost$core$String* param1) {

// line 54
org$frostlang$frostc$LLVMCodeGenerator** $tmp81 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp82 = *$tmp81;
frost$core$String* $tmp83 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp82, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return $tmp83;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 58
org$frostlang$frostc$LLVMCodeGenerator** $tmp84 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp85 = *$tmp84;
frost$core$String* $tmp86 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp85, param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$String* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// line 59
frost$core$String* $tmp88 = *(&local0);
frost$core$Bit $tmp89 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp88, &$s90);
bool $tmp91 = $tmp89.value;
if ($tmp91) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s93, $tmp92);
abort(); // unreachable
block1:;
// line 60
frost$core$String* $tmp94 = *(&local0);
frost$core$Int64 $tmp95 = (frost$core$Int64) {1};
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp97 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp95, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp96);
frost$core$String* $tmp98 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp94, $tmp97);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$String* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local0) = ((frost$core$String*) NULL);
return $tmp98;

}
frost$core$Int64 org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 64
org$frostlang$frostc$LLVMCodeGenerator** $tmp100 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp101 = *$tmp100;
frost$core$Int64 $tmp102 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp101, param1);
return $tmp102;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 68
frost$core$String** $tmp103 = &param1->name;
frost$core$String* $tmp104 = *$tmp103;
frost$core$String* $tmp105 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp104, &$s106, &$s107);
frost$core$String* $tmp108 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp105, &$s109, &$s110);
frost$core$String* $tmp111 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp108, &$s112, &$s113);
frost$core$String* $tmp114 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp111, &$s115, &$s116);
frost$core$String* $tmp117 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp114, &$s118, &$s119);
frost$core$String* $tmp120 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp117, &$s121, &$s122);
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp120, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
return $tmp123;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
org$frostlang$frostc$ClassDecl* local5 = NULL;
frost$core$String* local6 = NULL;
org$frostlang$frostc$ClassDecl* local7 = NULL;
frost$core$String* local8 = NULL;
// line 73
*(&local0) = ((frost$core$Error*) NULL);
// line 74
org$frostlang$frostc$Type$Kind* $tmp124 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = $tmp125.$rawValue;
frost$core$Int64 $tmp127 = (frost$core$Int64) {4};
frost$core$Bit $tmp128 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block4; else goto block5;
block4:;
// line 76
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s130));
frost$core$Error* $tmp131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local0) = ((frost$core$Error*) NULL);
return &$s132;
block5:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {2};
frost$core$Bit $tmp134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block6; else goto block7;
block6:;
// line 79
frost$core$Int64 $tmp136 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp137 = (frost$core$Int64) {8};
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 * $tmp139;
frost$core$Int64 $tmp141 = (frost$core$Int64) {$tmp140};
frost$core$Int64$wrapper* $tmp142;
$tmp142 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp142->value = $tmp141;
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s144, ((frost$core$Object*) $tmp142));
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, &$s146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Error* $tmp147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp145;
block7:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {3};
frost$core$Bit $tmp149 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp148);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block8; else goto block9;
block8:;
// line 82
frost$core$Int64 $tmp151 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp152 = (frost$core$Int64) {8};
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153 * $tmp154;
frost$core$Int64 $tmp156 = (frost$core$Int64) {$tmp155};
frost$core$Int64$wrapper* $tmp157;
$tmp157 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp157->value = $tmp156;
frost$core$String* $tmp158 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s159, ((frost$core$Object*) $tmp157));
frost$core$String* $tmp160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp158, &$s161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Error* $tmp162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp160;
block9:;
frost$core$Int64 $tmp163 = (frost$core$Int64) {8};
frost$core$Bit $tmp164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block10; else goto block11;
block10:;
// line 85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s166));
frost$core$Error* $tmp167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local0) = ((frost$core$Error*) NULL);
return &$s168;
block11:;
frost$core$Int64 $tmp169 = (frost$core$Int64) {9};
frost$core$Bit $tmp170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block12; else goto block13;
block12:;
// line 88
frost$core$Int64 $tmp172 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp173 = (frost$core$Int64) {4};
frost$core$Bit $tmp174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block15; else goto block16;
block15:;
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s176));
frost$core$Error* $tmp177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local0) = ((frost$core$Error*) NULL);
return &$s178;
block16:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {8};
frost$core$Bit $tmp180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block17; else goto block18;
block17:;
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s182));
frost$core$Error* $tmp183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local0) = ((frost$core$Error*) NULL);
return &$s184;
block18:;
// line 91
frost$core$Int64 $tmp185 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s186, $tmp185);
abort(); // unreachable
block14:;
goto block3;
block13:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {0};
frost$core$Bit $tmp188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block19; else goto block20;
block19:;
// line 95
frost$core$String** $tmp190 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp191 = *$tmp190;
frost$core$String* $tmp192 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp191);
frost$core$String* $tmp193 = frost$core$String$get_asString$R$frost$core$String($tmp192);
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp193, &$s195);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$String* $tmp196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local1) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// line 96
frost$core$Weak** $tmp197 = &param0->compiler;
frost$core$Weak* $tmp198 = *$tmp197;
frost$core$Object* $tmp199 = frost$core$Weak$get$R$frost$core$Weak$T($tmp198);
org$frostlang$frostc$ClassDecl* $tmp200 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp199), param1);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
org$frostlang$frostc$ClassDecl* $tmp201 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local2) = $tmp200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q($tmp199);
// line 97
org$frostlang$frostc$ClassDecl* $tmp202 = *(&local2);
frost$core$Bit $tmp203 = frost$core$Bit$init$builtin_bit($tmp202 != NULL);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp205 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s206, $tmp205);
abort(); // unreachable
block21:;
// line 98
frost$core$Weak** $tmp207 = &param0->compiler;
frost$core$Weak* $tmp208 = *$tmp207;
frost$core$Object* $tmp209 = frost$core$Weak$get$R$frost$core$Weak$T($tmp208);
org$frostlang$frostc$ClassDecl* $tmp210 = *(&local2);
frost$core$Bit $tmp211 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp209), $tmp210);
frost$core$Bit $tmp212 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp211);
bool $tmp213 = $tmp212.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp209);
if ($tmp213) goto block23; else goto block24;
block23:;
// line 99
frost$collections$HashSet** $tmp214 = &param0->imports;
frost$collections$HashSet* $tmp215 = *$tmp214;
frost$core$String* $tmp216 = *(&local1);
frost$core$Bit $tmp217 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp215, ((frost$collections$Key*) $tmp216));
frost$core$Bit $tmp218 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block25; else goto block26;
block25:;
// line 100
frost$io$MemoryOutputStream** $tmp220 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp221 = *$tmp220;
frost$core$String* $tmp222 = *(&local1);
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s224, $tmp222);
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp223, &$s226);
frost$core$String* $tmp227 = *(&local1);
frost$core$String* $tmp228 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, $tmp227);
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp228, &$s230);
$fn232 $tmp231 = ($fn232) ((frost$io$OutputStream*) $tmp221)->$class->vtable[19];
frost$core$Error* $tmp233 = $tmp231(((frost$io$OutputStream*) $tmp221), $tmp229);
if ($tmp233 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local0) = $tmp233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
org$frostlang$frostc$ClassDecl* $tmp234 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// line 101
frost$collections$HashSet** $tmp236 = &param0->imports;
frost$collections$HashSet* $tmp237 = *$tmp236;
frost$core$String* $tmp238 = *(&local1);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp237, ((frost$collections$Key*) $tmp238));
goto block26;
block26:;
// line 103
frost$core$String* $tmp239 = *(&local1);
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp239, &$s241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
org$frostlang$frostc$ClassDecl* $tmp242 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp243 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp240;
block24:;
// line 105
org$frostlang$frostc$ClassDecl* $tmp245 = *(&local2);
frost$core$String* $tmp246 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp245, &$s247);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$String* $tmp248 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local3) = $tmp246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// line 106
frost$collections$HashSet** $tmp249 = &param0->imports;
frost$collections$HashSet* $tmp250 = *$tmp249;
frost$core$String* $tmp251 = *(&local3);
frost$core$Bit $tmp252 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp250, ((frost$collections$Key*) $tmp251));
frost$core$Bit $tmp253 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block29; else goto block30;
block29:;
// line 107
frost$io$MemoryOutputStream** $tmp255 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp256 = *$tmp255;
frost$core$String* $tmp257 = *(&local3);
frost$core$String* $tmp258 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s259, $tmp257);
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp258, &$s261);
$fn263 $tmp262 = ($fn263) ((frost$io$OutputStream*) $tmp256)->$class->vtable[19];
frost$core$Error* $tmp264 = $tmp262(((frost$io$OutputStream*) $tmp256), $tmp260);
if ($tmp264 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$String* $tmp265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// line 108
frost$collections$HashSet** $tmp268 = &param0->imports;
frost$collections$HashSet* $tmp269 = *$tmp268;
frost$core$String* $tmp270 = *(&local3);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp269, ((frost$collections$Key*) $tmp270));
goto block30;
block30:;
// line 110
frost$core$String* $tmp271 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$String* $tmp272 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp273 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp275 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp271;
block20:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {1};
frost$core$Bit $tmp277 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp276);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block33; else goto block34;
block33:;
// line 113
frost$core$Weak** $tmp279 = &param0->compiler;
frost$core$Weak* $tmp280 = *$tmp279;
frost$core$Object* $tmp281 = frost$core$Weak$get$R$frost$core$Weak$T($tmp280);
org$frostlang$frostc$ClassDecl* $tmp282 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp281), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
org$frostlang$frostc$ClassDecl* $tmp283 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local4) = $tmp282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
frost$core$Frost$unref$frost$core$Object$Q($tmp281);
// line 114
org$frostlang$frostc$ClassDecl* $tmp284 = *(&local4);
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit($tmp284 != NULL);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp287 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s288, $tmp287);
abort(); // unreachable
block35:;
// line 115
frost$core$Weak** $tmp289 = &param0->compiler;
frost$core$Weak* $tmp290 = *$tmp289;
frost$core$Object* $tmp291 = frost$core$Weak$get$R$frost$core$Weak$T($tmp290);
org$frostlang$frostc$ClassDecl* $tmp292 = *(&local4);
frost$core$Bit $tmp293 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp291), $tmp292);
bool $tmp294 = $tmp293.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp291);
if ($tmp294) goto block37; else goto block38;
block37:;
// line 116
org$frostlang$frostc$FixedArray* $tmp295 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp296 = (frost$core$Int64) {0};
frost$core$Object* $tmp297 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp295, $tmp296);
frost$core$String* $tmp298 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp297));
frost$core$String* $tmp299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, &$s300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q($tmp297);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
org$frostlang$frostc$ClassDecl* $tmp301 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp299;
block38:;
// line 118
org$frostlang$frostc$FixedArray* $tmp303 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp304 = (frost$core$Int64) {0};
frost$core$Object* $tmp305 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp303, $tmp304);
frost$core$String* $tmp306 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp305));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q($tmp305);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
org$frostlang$frostc$ClassDecl* $tmp307 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp306;
block34:;
frost$core$Int64 $tmp309 = (frost$core$Int64) {10};
frost$core$Bit $tmp310 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp309);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block39; else goto block40;
block39:;
// line 121
org$frostlang$frostc$FixedArray* $tmp312 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp313 = (frost$core$Int64) {0};
frost$core$Object* $tmp314 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp312, $tmp313);
frost$core$String** $tmp315 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp314))->name;
frost$core$String* $tmp316 = *$tmp315;
frost$core$Bit $tmp317 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp316, &$s318);
bool $tmp319 = $tmp317.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
if ($tmp319) goto block41; else goto block42;
block41:;
// line 122
org$frostlang$frostc$FixedArray* $tmp320 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp321 = (frost$core$Int64) {1};
frost$core$Object* $tmp322 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp320, $tmp321);
frost$core$String* $tmp323 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp322));
frost$core$String* $tmp324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp323, &$s325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q($tmp322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Error* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp324;
block42:;
// line 124
frost$core$Weak** $tmp327 = &param0->compiler;
frost$core$Weak* $tmp328 = *$tmp327;
frost$core$Object* $tmp329 = frost$core$Weak$get$R$frost$core$Weak$T($tmp328);
org$frostlang$frostc$ClassDecl* $tmp330 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp329), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
org$frostlang$frostc$ClassDecl* $tmp331 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local5) = $tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Frost$unref$frost$core$Object$Q($tmp329);
// line 125
org$frostlang$frostc$ClassDecl* $tmp332 = *(&local5);
frost$core$Bit $tmp333 = org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block43; else goto block44;
block43:;
// line 126
frost$core$String** $tmp335 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp336 = *$tmp335;
frost$core$String* $tmp337 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp336);
frost$core$String* $tmp338 = frost$core$String$get_asString$R$frost$core$String($tmp337);
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s340);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$String* $tmp341 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local6) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// line 127
frost$core$Weak** $tmp342 = &param0->compiler;
frost$core$Weak* $tmp343 = *$tmp342;
frost$core$Object* $tmp344 = frost$core$Weak$get$R$frost$core$Weak$T($tmp343);
org$frostlang$frostc$ClassDecl* $tmp345 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp344), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
org$frostlang$frostc$ClassDecl* $tmp346 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local7) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q($tmp344);
// line 128
org$frostlang$frostc$ClassDecl* $tmp347 = *(&local7);
frost$core$Bit $tmp348 = frost$core$Bit$init$builtin_bit($tmp347 != NULL);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp350 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s351, $tmp350);
abort(); // unreachable
block45:;
// line 129
frost$core$Weak** $tmp352 = &param0->compiler;
frost$core$Weak* $tmp353 = *$tmp352;
frost$core$Object* $tmp354 = frost$core$Weak$get$R$frost$core$Weak$T($tmp353);
org$frostlang$frostc$ClassDecl* $tmp355 = *(&local7);
frost$core$Bit $tmp356 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp354), $tmp355);
frost$core$Bit $tmp357 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp356);
bool $tmp358 = $tmp357.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp354);
if ($tmp358) goto block47; else goto block48;
block47:;
// line 130
frost$collections$HashSet** $tmp359 = &param0->imports;
frost$collections$HashSet* $tmp360 = *$tmp359;
frost$core$String* $tmp361 = *(&local6);
frost$core$Bit $tmp362 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp360, ((frost$collections$Key*) $tmp361));
frost$core$Bit $tmp363 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp362);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block49; else goto block50;
block49:;
// line 131
frost$io$MemoryOutputStream** $tmp365 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp366 = *$tmp365;
frost$core$String* $tmp367 = *(&local6);
frost$core$String* $tmp368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s369, $tmp367);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp368, &$s371);
frost$core$String* $tmp372 = *(&local6);
frost$core$String* $tmp373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, $tmp372);
frost$core$String* $tmp374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp373, &$s375);
$fn377 $tmp376 = ($fn377) ((frost$io$OutputStream*) $tmp366)->$class->vtable[19];
frost$core$Error* $tmp378 = $tmp376(((frost$io$OutputStream*) $tmp366), $tmp374);
if ($tmp378 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local0) = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
org$frostlang$frostc$ClassDecl* $tmp379 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp380 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp381 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// line 132
frost$collections$HashSet** $tmp382 = &param0->imports;
frost$collections$HashSet* $tmp383 = *$tmp382;
frost$core$String* $tmp384 = *(&local6);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp383, ((frost$collections$Key*) $tmp384));
goto block50;
block50:;
// line 134
frost$core$String* $tmp385 = *(&local6);
frost$core$String* $tmp386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp385, &$s387);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
org$frostlang$frostc$ClassDecl* $tmp388 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp389 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp390 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp391 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp386;
block48:;
// line 136
org$frostlang$frostc$ClassDecl* $tmp392 = *(&local7);
frost$core$String* $tmp393 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp392, &$s394);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$String* $tmp395 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local8) = $tmp393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// line 137
frost$collections$HashSet** $tmp396 = &param0->imports;
frost$collections$HashSet* $tmp397 = *$tmp396;
frost$core$String* $tmp398 = *(&local8);
frost$core$Bit $tmp399 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp397, ((frost$collections$Key*) $tmp398));
frost$core$Bit $tmp400 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp399);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block53; else goto block54;
block53:;
// line 138
frost$io$MemoryOutputStream** $tmp402 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp403 = *$tmp402;
frost$core$String* $tmp404 = *(&local8);
frost$core$String* $tmp405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s406, $tmp404);
frost$core$String* $tmp407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp405, &$s408);
$fn410 $tmp409 = ($fn410) ((frost$io$OutputStream*) $tmp403)->$class->vtable[19];
frost$core$Error* $tmp411 = $tmp409(((frost$io$OutputStream*) $tmp403), $tmp407);
if ($tmp411 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local0) = $tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$String* $tmp412 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp413 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp414 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp415 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// line 139
frost$collections$HashSet** $tmp416 = &param0->imports;
frost$collections$HashSet* $tmp417 = *$tmp416;
frost$core$String* $tmp418 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp417, ((frost$collections$Key*) $tmp418));
goto block54;
block54:;
// line 141
frost$core$String* $tmp419 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$String* $tmp420 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp421 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp422 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp423 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp424 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp419;
block44:;
// line 143
org$frostlang$frostc$FixedArray* $tmp425 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp426 = (frost$core$Int64) {0};
frost$core$Object* $tmp427 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp425, $tmp426);
frost$core$String* $tmp428 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp427));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
org$frostlang$frostc$ClassDecl* $tmp429 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp430 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp428;
block40:;
frost$core$Int64 $tmp431 = (frost$core$Int64) {11};
frost$core$Bit $tmp432 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block57; else goto block58;
block57:;
// line 146
frost$core$Weak** $tmp434 = &param1->genericClassParameter;
frost$core$Weak* $tmp435 = *$tmp434;
frost$core$Object* $tmp436 = frost$core$Weak$get$R$frost$core$Weak$T($tmp435);
org$frostlang$frostc$Type** $tmp437 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp436)->bound;
org$frostlang$frostc$Type* $tmp438 = *$tmp437;
frost$core$String* $tmp439 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q($tmp436);
frost$core$Error* $tmp440 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp439;
block58:;
frost$core$Int64 $tmp441 = (frost$core$Int64) {12};
frost$core$Bit $tmp442 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp441);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block59; else goto block60;
block59:;
// line 149
frost$core$Weak** $tmp444 = &param1->genericMethodParameter;
frost$core$Weak* $tmp445 = *$tmp444;
frost$core$Object* $tmp446 = frost$core$Weak$get$R$frost$core$Weak$T($tmp445);
org$frostlang$frostc$Type** $tmp447 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp446)->bound;
org$frostlang$frostc$Type* $tmp448 = *$tmp447;
frost$core$String* $tmp449 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp448);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
frost$core$Error* $tmp450 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp449;
block60:;
frost$core$Int64 $tmp451 = (frost$core$Int64) {14};
frost$core$Bit $tmp452 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp454 = (frost$core$Int64) {15};
frost$core$Bit $tmp455 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp454);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block61; else goto block63;
block61:;
// line 152
org$frostlang$frostc$Type* $tmp457 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp458 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp457);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Error* $tmp459 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp458;
block63:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {16};
frost$core$Bit $tmp461 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp460);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {17};
frost$core$Bit $tmp464 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp463);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block64; else goto block66;
block64:;
// line 155
org$frostlang$frostc$Type* $tmp466 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp467 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Error* $tmp468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp467;
block66:;
// line 158
frost$core$Int64 $tmp469 = (frost$core$Int64) {158};
frost$core$String* $tmp470 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s471, ((frost$core$Object*) param1));
frost$core$String* $tmp472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp470, &$s473);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s474, $tmp469, $tmp472);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
abort(); // unreachable
block3:;
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp475 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local0) = ((frost$core$Error*) NULL);
// line 164
frost$core$Int64 $tmp476 = (frost$core$Int64) {164};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s477, $tmp476);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// line 168
frost$core$String* $tmp478 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp479 = frost$core$String$get_asString$R$frost$core$String($tmp478);
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp479, &$s481);
frost$core$String* $tmp482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp480, param2);
frost$core$String* $tmp483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp482, &$s484);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
return $tmp483;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 173
frost$core$Weak* $tmp485 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp485, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Weak** $tmp486 = &param0->compiler;
frost$core$Weak* $tmp487 = *$tmp486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Weak** $tmp488 = &param0->compiler;
*$tmp488 = $tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// line 174
org$frostlang$frostc$LLVMCodeGenerator** $tmp489 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp490 = *$tmp489;
org$frostlang$frostc$LLVMCodeGenerator$setCompiler$org$frostlang$frostc$Compiler($tmp490, param1);
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 178
frost$io$File** $tmp491 = &param0->outDir;
frost$io$File* $tmp492 = *$tmp491;
frost$core$String* $tmp493 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp494 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp492, $tmp493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
return $tmp494;

}
void org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$io$File* local2 = NULL;
org$frostlang$frostc$FieldDecl* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// line 183
*(&local0) = ((frost$core$Error*) NULL);
// line 184
frost$io$MemoryOutputStream** $tmp495 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp496 = *$tmp495;
frost$io$MemoryOutputStream$clear($tmp496);
// line 185
frost$io$MemoryOutputStream** $tmp497 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp498 = *$tmp497;
frost$io$MemoryOutputStream$clear($tmp498);
// line 186
frost$io$MemoryOutputStream** $tmp499 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp500 = *$tmp499;
frost$io$MemoryOutputStream$clear($tmp500);
// line 187
frost$io$MemoryOutputStream** $tmp501 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp502 = *$tmp501;
frost$io$MemoryOutputStream$clear($tmp502);
// line 188
frost$collections$HashSet** $tmp503 = &param0->typeImports;
frost$collections$HashSet* $tmp504 = *$tmp503;
frost$collections$HashSet$clear($tmp504);
// line 189
frost$collections$HashSet** $tmp505 = &param0->bodyImports;
frost$collections$HashSet* $tmp506 = *$tmp505;
frost$collections$HashSet$clear($tmp506);
// line 190
frost$io$File* $tmp507 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s508);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$io$File* $tmp509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local1) = $tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// line 191
frost$io$File* $tmp510 = *(&local1);
frost$io$File* $tmp511 = frost$io$File$get_parent$R$frost$io$File$Q($tmp510);
frost$core$Error* $tmp512 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp511);
if ($tmp512 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local0) = $tmp512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$io$File* $tmp513 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// line 192
frost$io$IndentedOutputStream* $tmp514 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp515 = *(&local1);
frost$core$Maybe* $tmp516 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp515);
frost$core$Int64* $tmp517 = &$tmp516->$rawValue;
frost$core$Int64 $tmp518 = *$tmp517;
int64_t $tmp519 = $tmp518.value;
bool $tmp520 = $tmp519 == 0;
if ($tmp520) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp521 = (frost$core$Error**) ($tmp516->$data + 0);
frost$core$Error* $tmp522 = *$tmp521;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local0) = $tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$io$File* $tmp523 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Object** $tmp524 = (frost$core$Object**) ($tmp516->$data + 0);
frost$core$Object* $tmp525 = *$tmp524;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp514, ((frost$io$OutputStream*) $tmp525));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$io$IndentedOutputStream** $tmp526 = &param0->out;
frost$io$IndentedOutputStream* $tmp527 = *$tmp526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$io$IndentedOutputStream** $tmp528 = &param0->out;
*$tmp528 = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// line 193
frost$io$File* $tmp529 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s530);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$io$File* $tmp531 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local2) = $tmp529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// line 194
frost$io$IndentedOutputStream* $tmp532 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp533 = *(&local2);
frost$core$Maybe* $tmp534 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp533);
frost$core$Int64* $tmp535 = &$tmp534->$rawValue;
frost$core$Int64 $tmp536 = *$tmp535;
int64_t $tmp537 = $tmp536.value;
bool $tmp538 = $tmp537 == 0;
if ($tmp538) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp539 = (frost$core$Error**) ($tmp534->$data + 0);
frost$core$Error* $tmp540 = *$tmp539;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local0) = $tmp540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$io$File* $tmp541 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp542 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp543 = (frost$core$Object**) ($tmp534->$data + 0);
frost$core$Object* $tmp544 = *$tmp543;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp532, ((frost$io$OutputStream*) $tmp544));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$io$IndentedOutputStream** $tmp545 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp546 = *$tmp545;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$io$IndentedOutputStream** $tmp547 = &param0->typesOut;
*$tmp547 = $tmp532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
// line 195
frost$io$IndentedOutputStream** $tmp548 = &param0->out;
frost$io$IndentedOutputStream* $tmp549 = *$tmp548;
$fn551 $tmp550 = ($fn551) ((frost$io$OutputStream*) $tmp549)->$class->vtable[19];
frost$core$Error* $tmp552 = $tmp550(((frost$io$OutputStream*) $tmp549), &$s553);
if ($tmp552 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local0) = $tmp552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$io$File* $tmp554 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp555 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// line 196
frost$io$IndentedOutputStream** $tmp556 = &param0->out;
frost$io$IndentedOutputStream* $tmp557 = *$tmp556;
$fn559 $tmp558 = ($fn559) ((frost$io$OutputStream*) $tmp557)->$class->vtable[19];
frost$core$Error* $tmp560 = $tmp558(((frost$io$OutputStream*) $tmp557), &$s561);
if ($tmp560 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local0) = $tmp560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
frost$io$File* $tmp562 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp563 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// line 197
frost$io$IndentedOutputStream** $tmp564 = &param0->out;
frost$io$IndentedOutputStream* $tmp565 = *$tmp564;
frost$io$File* $tmp566 = *(&local2);
frost$core$String* $tmp567 = frost$io$File$get_name$R$frost$core$String($tmp566);
frost$core$String* $tmp568 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s569, $tmp567);
frost$core$String* $tmp570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp568, &$s571);
$fn573 $tmp572 = ($fn573) ((frost$io$OutputStream*) $tmp565)->$class->vtable[19];
frost$core$Error* $tmp574 = $tmp572(((frost$io$OutputStream*) $tmp565), $tmp570);
if ($tmp574 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local0) = $tmp574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$io$File* $tmp575 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp576 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// line 198
frost$io$IndentedOutputStream** $tmp577 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp578 = *$tmp577;
$fn580 $tmp579 = ($fn580) ((frost$io$OutputStream*) $tmp578)->$class->vtable[19];
frost$core$Error* $tmp581 = $tmp579(((frost$io$OutputStream*) $tmp578), &$s582);
if ($tmp581 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local0) = $tmp581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$io$File* $tmp583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp584 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// line 199
frost$io$IndentedOutputStream** $tmp585 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp586 = *$tmp585;
$fn588 $tmp587 = ($fn588) ((frost$io$OutputStream*) $tmp586)->$class->vtable[19];
frost$core$Error* $tmp589 = $tmp587(((frost$io$OutputStream*) $tmp586), &$s590);
if ($tmp589 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local0) = $tmp589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$io$File* $tmp591 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp592 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// line 200
frost$io$MemoryOutputStream** $tmp593 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp594 = *$tmp593;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$io$MemoryOutputStream** $tmp595 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp596 = *$tmp595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$io$MemoryOutputStream** $tmp597 = &param0->importStream;
*$tmp597 = $tmp594;
// line 201
frost$collections$HashSet** $tmp598 = &param0->typeImports;
frost$collections$HashSet* $tmp599 = *$tmp598;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$collections$HashSet** $tmp600 = &param0->imports;
frost$collections$HashSet* $tmp601 = *$tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$collections$HashSet** $tmp602 = &param0->imports;
*$tmp602 = $tmp599;
// line 202
frost$io$IndentedOutputStream** $tmp603 = &param0->types;
frost$io$IndentedOutputStream* $tmp604 = *$tmp603;
frost$core$String** $tmp605 = &param1->name;
frost$core$String* $tmp606 = *$tmp605;
frost$core$String* $tmp607 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp606);
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s609, $tmp607);
frost$core$String* $tmp610 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp608, &$s611);
$fn613 $tmp612 = ($fn613) ((frost$io$OutputStream*) $tmp604)->$class->vtable[19];
frost$core$Error* $tmp614 = $tmp612(((frost$io$OutputStream*) $tmp604), $tmp610);
if ($tmp614 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local0) = $tmp614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$io$File* $tmp615 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp616 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// line 203
frost$io$IndentedOutputStream** $tmp617 = &param0->types;
frost$io$IndentedOutputStream* $tmp618 = *$tmp617;
frost$core$Int64* $tmp619 = &$tmp618->level;
frost$core$Int64 $tmp620 = *$tmp619;
frost$core$Int64 $tmp621 = (frost$core$Int64) {1};
int64_t $tmp622 = $tmp620.value;
int64_t $tmp623 = $tmp621.value;
int64_t $tmp624 = $tmp622 + $tmp623;
frost$core$Int64 $tmp625 = (frost$core$Int64) {$tmp624};
frost$core$Int64* $tmp626 = &$tmp618->level;
*$tmp626 = $tmp625;
// line 204
frost$core$Weak** $tmp627 = &param0->compiler;
frost$core$Weak* $tmp628 = *$tmp627;
frost$core$Object* $tmp629 = frost$core$Weak$get$R$frost$core$Weak$T($tmp628);
frost$collections$ListView* $tmp630 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp629), param1);
ITable* $tmp631 = ((frost$collections$Iterable*) $tmp630)->$class->itable;
while ($tmp631->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp631 = $tmp631->next;
}
$fn633 $tmp632 = $tmp631->methods[0];
frost$collections$Iterator* $tmp634 = $tmp632(((frost$collections$Iterable*) $tmp630));
goto block21;
block21:;
ITable* $tmp635 = $tmp634->$class->itable;
while ($tmp635->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp635 = $tmp635->next;
}
$fn637 $tmp636 = $tmp635->methods[0];
frost$core$Bit $tmp638 = $tmp636($tmp634);
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block23; else goto block22;
block22:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp640 = $tmp634->$class->itable;
while ($tmp640->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp640 = $tmp640->next;
}
$fn642 $tmp641 = $tmp640->methods[1];
frost$core$Object* $tmp643 = $tmp641($tmp634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp643)));
org$frostlang$frostc$FieldDecl* $tmp644 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp643);
// line 205
frost$core$Weak** $tmp645 = &param0->compiler;
frost$core$Weak* $tmp646 = *$tmp645;
frost$core$Object* $tmp647 = frost$core$Weak$get$R$frost$core$Weak$T($tmp646);
org$frostlang$frostc$FieldDecl* $tmp648 = *(&local3);
frost$core$Bit $tmp649 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp647), $tmp648);
frost$core$Frost$unref$frost$core$Object$Q($tmp647);
// line 206
org$frostlang$frostc$FieldDecl* $tmp650 = *(&local3);
org$frostlang$frostc$Type** $tmp651 = &$tmp650->type;
org$frostlang$frostc$Type* $tmp652 = *$tmp651;
org$frostlang$frostc$Type* $tmp653 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp654 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp652, $tmp653);
bool $tmp655 = $tmp654.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
if ($tmp655) goto block24; else goto block26;
block24:;
// line 207
frost$io$IndentedOutputStream** $tmp656 = &param0->types;
frost$io$IndentedOutputStream* $tmp657 = *$tmp656;
org$frostlang$frostc$FieldDecl* $tmp658 = *(&local3);
frost$core$String** $tmp659 = &((org$frostlang$frostc$Symbol*) $tmp658)->name;
frost$core$String* $tmp660 = *$tmp659;
frost$core$String* $tmp661 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s662, $tmp660);
frost$core$String* $tmp663 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp661, &$s664);
org$frostlang$frostc$LLVMCodeGenerator** $tmp665 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp666 = *$tmp665;
frost$core$Int64 $tmp667 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp666, param1);
frost$core$Int64$wrapper* $tmp668;
$tmp668 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp668->value = $tmp667;
frost$core$String* $tmp669 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp663, ((frost$core$Object*) $tmp668));
frost$core$String* $tmp670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp669, &$s671);
$fn673 $tmp672 = ($fn673) ((frost$io$OutputStream*) $tmp657)->$class->vtable[19];
frost$core$Error* $tmp674 = $tmp672(((frost$io$OutputStream*) $tmp657), $tmp670);
if ($tmp674 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local0) = $tmp674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q($tmp643);
org$frostlang$frostc$FieldDecl* $tmp675 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
frost$io$File* $tmp676 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp677 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
goto block25;
block26:;
// line 1
// line 210
frost$io$IndentedOutputStream** $tmp678 = &param0->types;
frost$io$IndentedOutputStream* $tmp679 = *$tmp678;
org$frostlang$frostc$FieldDecl* $tmp680 = *(&local3);
org$frostlang$frostc$Type** $tmp681 = &$tmp680->type;
org$frostlang$frostc$Type* $tmp682 = *$tmp681;
frost$core$String* $tmp683 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp682);
frost$core$String* $tmp684 = frost$core$String$get_asString$R$frost$core$String($tmp683);
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp684, &$s686);
org$frostlang$frostc$FieldDecl* $tmp687 = *(&local3);
frost$core$String** $tmp688 = &((org$frostlang$frostc$Symbol*) $tmp687)->name;
frost$core$String* $tmp689 = *$tmp688;
frost$core$String* $tmp690 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp685, $tmp689);
frost$core$String* $tmp691 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp690, &$s692);
$fn694 $tmp693 = ($fn694) ((frost$io$OutputStream*) $tmp679)->$class->vtable[19];
frost$core$Error* $tmp695 = $tmp693(((frost$io$OutputStream*) $tmp679), $tmp691);
if ($tmp695 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local0) = $tmp695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q($tmp643);
org$frostlang$frostc$FieldDecl* $tmp696 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
frost$io$File* $tmp697 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp698 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp643);
org$frostlang$frostc$FieldDecl* $tmp699 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
// line 213
frost$core$String** $tmp700 = &param1->name;
frost$core$String* $tmp701 = *$tmp700;
frost$core$Bit $tmp702 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp701, &$s703);
bool $tmp704 = $tmp702.value;
if ($tmp704) goto block31; else goto block32;
block31:;
// line 214
frost$io$IndentedOutputStream** $tmp705 = &param0->types;
frost$io$IndentedOutputStream* $tmp706 = *$tmp705;
$fn708 $tmp707 = ($fn708) ((frost$io$OutputStream*) $tmp706)->$class->vtable[19];
frost$core$Error* $tmp709 = $tmp707(((frost$io$OutputStream*) $tmp706), &$s710);
if ($tmp709 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local0) = $tmp709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$io$File* $tmp711 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp712 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// line 215
frost$io$IndentedOutputStream** $tmp713 = &param0->types;
frost$io$IndentedOutputStream* $tmp714 = *$tmp713;
$fn716 $tmp715 = ($fn716) ((frost$io$OutputStream*) $tmp714)->$class->vtable[19];
frost$core$Error* $tmp717 = $tmp715(((frost$io$OutputStream*) $tmp714), &$s718);
if ($tmp717 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local0) = $tmp717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$io$File* $tmp719 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp720 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
goto block32;
block32:;
// line 217
frost$io$IndentedOutputStream** $tmp721 = &param0->types;
frost$io$IndentedOutputStream* $tmp722 = *$tmp721;
frost$core$Int64* $tmp723 = &$tmp722->level;
frost$core$Int64 $tmp724 = *$tmp723;
frost$core$Int64 $tmp725 = (frost$core$Int64) {1};
int64_t $tmp726 = $tmp724.value;
int64_t $tmp727 = $tmp725.value;
int64_t $tmp728 = $tmp726 - $tmp727;
frost$core$Int64 $tmp729 = (frost$core$Int64) {$tmp728};
frost$core$Int64* $tmp730 = &$tmp722->level;
*$tmp730 = $tmp729;
// line 218
frost$io$IndentedOutputStream** $tmp731 = &param0->types;
frost$io$IndentedOutputStream* $tmp732 = *$tmp731;
frost$core$String** $tmp733 = &param1->name;
frost$core$String* $tmp734 = *$tmp733;
frost$core$String* $tmp735 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp734);
frost$core$String* $tmp736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s737, $tmp735);
frost$core$String* $tmp738 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp736, &$s739);
$fn741 $tmp740 = ($fn741) ((frost$io$OutputStream*) $tmp732)->$class->vtable[19];
frost$core$Error* $tmp742 = $tmp740(((frost$io$OutputStream*) $tmp732), $tmp738);
if ($tmp742 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local0) = $tmp742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$io$File* $tmp743 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp744 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// line 219
frost$io$IndentedOutputStream** $tmp745 = &param0->types;
frost$io$IndentedOutputStream* $tmp746 = *$tmp745;
$fn748 $tmp747 = ($fn748) ((frost$io$OutputStream*) $tmp746)->$class->vtable[19];
frost$core$Error* $tmp749 = $tmp747(((frost$io$OutputStream*) $tmp746), &$s750);
if ($tmp749 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local0) = $tmp749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$io$File* $tmp751 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp752 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// line 220
frost$io$IndentedOutputStream** $tmp753 = &param0->types;
frost$io$IndentedOutputStream* $tmp754 = *$tmp753;
org$frostlang$frostc$Type* $tmp755 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp756 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp755);
frost$core$String* $tmp757 = frost$core$String$get_asString$R$frost$core$String($tmp756);
frost$core$String* $tmp758 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp757, &$s759);
org$frostlang$frostc$Type* $tmp760 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp761 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp760);
frost$core$String* $tmp762 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp758, $tmp761);
frost$core$String* $tmp763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp762, &$s764);
frost$core$String* $tmp765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s766, $tmp763);
frost$core$Weak** $tmp767 = &param0->compiler;
frost$core$Weak* $tmp768 = *$tmp767;
frost$core$Object* $tmp769 = frost$core$Weak$get$R$frost$core$Weak$T($tmp768);
frost$collections$ListView* $tmp770 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp769), param1);
ITable* $tmp771 = ((frost$collections$CollectionView*) $tmp770)->$class->itable;
while ($tmp771->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp771 = $tmp771->next;
}
$fn773 $tmp772 = $tmp771->methods[0];
frost$core$Int64 $tmp774 = $tmp772(((frost$collections$CollectionView*) $tmp770));
frost$core$Int64$wrapper* $tmp775;
$tmp775 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp775->value = $tmp774;
frost$core$String* $tmp776 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s777, ((frost$core$Object*) $tmp775));
frost$core$String* $tmp778 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp776, &$s779);
frost$core$String* $tmp780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp765, $tmp778);
frost$core$String** $tmp781 = &param1->name;
frost$core$String* $tmp782 = *$tmp781;
frost$core$String* $tmp783 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp782);
frost$core$String* $tmp784 = frost$core$String$get_asString$R$frost$core$String($tmp783);
frost$core$String* $tmp785 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp784, &$s786);
frost$core$String* $tmp787 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp780, $tmp785);
$fn789 $tmp788 = ($fn789) ((frost$io$OutputStream*) $tmp754)->$class->vtable[19];
frost$core$Error* $tmp790 = $tmp788(((frost$io$OutputStream*) $tmp754), $tmp787);
if ($tmp790 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local0) = $tmp790;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q($tmp769);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$io$File* $tmp791 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp792 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q($tmp769);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
// line 224
frost$io$IndentedOutputStream** $tmp793 = &param0->types;
frost$io$IndentedOutputStream* $tmp794 = *$tmp793;
frost$core$String** $tmp795 = &param1->name;
frost$core$String* $tmp796 = *$tmp795;
frost$core$String* $tmp797 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp796);
frost$core$String* $tmp798 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s799, $tmp797);
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp798, &$s801);
frost$core$String** $tmp802 = &param1->name;
frost$core$String* $tmp803 = *$tmp802;
frost$core$String* $tmp804 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp803);
frost$core$String* $tmp805 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp800, $tmp804);
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp805, &$s807);
$fn809 $tmp808 = ($fn809) ((frost$io$OutputStream*) $tmp794)->$class->vtable[19];
frost$core$Error* $tmp810 = $tmp808(((frost$io$OutputStream*) $tmp794), $tmp806);
if ($tmp810 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local0) = $tmp810;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$io$File* $tmp811 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp812 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// line 225
frost$core$Weak** $tmp813 = &param0->compiler;
frost$core$Weak* $tmp814 = *$tmp813;
frost$core$Object* $tmp815 = frost$core$Weak$get$R$frost$core$Weak$T($tmp814);
frost$core$Bit $tmp816 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp815), param1);
bool $tmp817 = $tmp816.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp815);
if ($tmp817) goto block45; else goto block46;
block45:;
// line 226
frost$io$IndentedOutputStream** $tmp818 = &param0->types;
frost$io$IndentedOutputStream* $tmp819 = *$tmp818;
frost$core$String** $tmp820 = &param1->name;
frost$core$String* $tmp821 = *$tmp820;
frost$core$String* $tmp822 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp821);
frost$core$String* $tmp823 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s824, $tmp822);
frost$core$String* $tmp825 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp823, &$s826);
$fn828 $tmp827 = ($fn828) ((frost$io$OutputStream*) $tmp819)->$class->vtable[19];
frost$core$Error* $tmp829 = $tmp827(((frost$io$OutputStream*) $tmp819), $tmp825);
if ($tmp829 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local0) = $tmp829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$io$File* $tmp830 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp831 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// line 227
frost$io$IndentedOutputStream** $tmp832 = &param0->types;
frost$io$IndentedOutputStream* $tmp833 = *$tmp832;
frost$core$Int64* $tmp834 = &$tmp833->level;
frost$core$Int64 $tmp835 = *$tmp834;
frost$core$Int64 $tmp836 = (frost$core$Int64) {1};
int64_t $tmp837 = $tmp835.value;
int64_t $tmp838 = $tmp836.value;
int64_t $tmp839 = $tmp837 + $tmp838;
frost$core$Int64 $tmp840 = (frost$core$Int64) {$tmp839};
frost$core$Int64* $tmp841 = &$tmp833->level;
*$tmp841 = $tmp840;
// line 228
frost$io$IndentedOutputStream** $tmp842 = &param0->types;
frost$io$IndentedOutputStream* $tmp843 = *$tmp842;
$fn845 $tmp844 = ($fn845) ((frost$io$OutputStream*) $tmp843)->$class->vtable[19];
frost$core$Error* $tmp846 = $tmp844(((frost$io$OutputStream*) $tmp843), &$s847);
if ($tmp846 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local0) = $tmp846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$io$File* $tmp848 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp849 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// line 229
frost$io$IndentedOutputStream** $tmp850 = &param0->types;
frost$io$IndentedOutputStream* $tmp851 = *$tmp850;
$fn853 $tmp852 = ($fn853) ((frost$io$OutputStream*) $tmp851)->$class->vtable[19];
frost$core$Error* $tmp854 = $tmp852(((frost$io$OutputStream*) $tmp851), &$s855);
if ($tmp854 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local0) = $tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$io$File* $tmp856 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp857 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// line 230
frost$io$IndentedOutputStream** $tmp858 = &param0->types;
frost$io$IndentedOutputStream* $tmp859 = *$tmp858;
org$frostlang$frostc$Type** $tmp860 = &param1->type;
org$frostlang$frostc$Type* $tmp861 = *$tmp860;
frost$core$String* $tmp862 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp861);
frost$core$String* $tmp863 = frost$core$String$get_asString$R$frost$core$String($tmp862);
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp863, &$s865);
$fn867 $tmp866 = ($fn867) ((frost$io$OutputStream*) $tmp859)->$class->vtable[19];
frost$core$Error* $tmp868 = $tmp866(((frost$io$OutputStream*) $tmp859), $tmp864);
if ($tmp868 == NULL) goto block53; else goto block54;
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local0) = $tmp868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$io$File* $tmp869 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp870 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// line 231
frost$io$IndentedOutputStream** $tmp871 = &param0->types;
frost$io$IndentedOutputStream* $tmp872 = *$tmp871;
frost$core$Int64* $tmp873 = &$tmp872->level;
frost$core$Int64 $tmp874 = *$tmp873;
frost$core$Int64 $tmp875 = (frost$core$Int64) {1};
int64_t $tmp876 = $tmp874.value;
int64_t $tmp877 = $tmp875.value;
int64_t $tmp878 = $tmp876 - $tmp877;
frost$core$Int64 $tmp879 = (frost$core$Int64) {$tmp878};
frost$core$Int64* $tmp880 = &$tmp872->level;
*$tmp880 = $tmp879;
// line 232
frost$io$IndentedOutputStream** $tmp881 = &param0->types;
frost$io$IndentedOutputStream* $tmp882 = *$tmp881;
frost$core$String** $tmp883 = &param1->name;
frost$core$String* $tmp884 = *$tmp883;
frost$core$String* $tmp885 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp884);
frost$core$String* $tmp886 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s887, $tmp885);
frost$core$String* $tmp888 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp886, &$s889);
$fn891 $tmp890 = ($fn891) ((frost$io$OutputStream*) $tmp882)->$class->vtable[19];
frost$core$Error* $tmp892 = $tmp890(((frost$io$OutputStream*) $tmp882), $tmp888);
if ($tmp892 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local0) = $tmp892;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$io$File* $tmp893 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp894 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// line 233
frost$io$IndentedOutputStream** $tmp895 = &param0->types;
frost$io$IndentedOutputStream* $tmp896 = *$tmp895;
frost$core$String** $tmp897 = &param1->name;
frost$core$String* $tmp898 = *$tmp897;
frost$core$String* $tmp899 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp898);
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s901, $tmp899);
frost$core$String* $tmp902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp900, &$s903);
$fn905 $tmp904 = ($fn905) ((frost$io$OutputStream*) $tmp896)->$class->vtable[19];
frost$core$Error* $tmp906 = $tmp904(((frost$io$OutputStream*) $tmp896), $tmp902);
if ($tmp906 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local0) = $tmp906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$io$File* $tmp907 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp908 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// line 234
frost$io$IndentedOutputStream** $tmp909 = &param0->types;
frost$io$IndentedOutputStream* $tmp910 = *$tmp909;
frost$core$Int64* $tmp911 = &$tmp910->level;
frost$core$Int64 $tmp912 = *$tmp911;
frost$core$Int64 $tmp913 = (frost$core$Int64) {1};
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913.value;
int64_t $tmp916 = $tmp914 + $tmp915;
frost$core$Int64 $tmp917 = (frost$core$Int64) {$tmp916};
frost$core$Int64* $tmp918 = &$tmp910->level;
*$tmp918 = $tmp917;
// line 235
frost$io$IndentedOutputStream** $tmp919 = &param0->types;
frost$io$IndentedOutputStream* $tmp920 = *$tmp919;
frost$core$String** $tmp921 = &param1->name;
frost$core$String* $tmp922 = *$tmp921;
frost$core$String* $tmp923 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp922);
frost$core$String* $tmp924 = frost$core$String$get_asString$R$frost$core$String($tmp923);
frost$core$String* $tmp925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp924, &$s926);
$fn928 $tmp927 = ($fn928) ((frost$io$OutputStream*) $tmp920)->$class->vtable[19];
frost$core$Error* $tmp929 = $tmp927(((frost$io$OutputStream*) $tmp920), $tmp925);
if ($tmp929 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local0) = $tmp929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
frost$io$File* $tmp930 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp931 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// line 236
frost$io$IndentedOutputStream** $tmp932 = &param0->types;
frost$io$IndentedOutputStream* $tmp933 = *$tmp932;
$fn935 $tmp934 = ($fn935) ((frost$io$OutputStream*) $tmp933)->$class->vtable[19];
frost$core$Error* $tmp936 = $tmp934(((frost$io$OutputStream*) $tmp933), &$s937);
if ($tmp936 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local0) = $tmp936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$io$File* $tmp938 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp939 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// line 237
frost$io$IndentedOutputStream** $tmp940 = &param0->types;
frost$io$IndentedOutputStream* $tmp941 = *$tmp940;
frost$core$Int64* $tmp942 = &$tmp941->level;
frost$core$Int64 $tmp943 = *$tmp942;
frost$core$Int64 $tmp944 = (frost$core$Int64) {1};
int64_t $tmp945 = $tmp943.value;
int64_t $tmp946 = $tmp944.value;
int64_t $tmp947 = $tmp945 - $tmp946;
frost$core$Int64 $tmp948 = (frost$core$Int64) {$tmp947};
frost$core$Int64* $tmp949 = &$tmp941->level;
*$tmp949 = $tmp948;
// line 238
frost$io$IndentedOutputStream** $tmp950 = &param0->types;
frost$io$IndentedOutputStream* $tmp951 = *$tmp950;
frost$core$String** $tmp952 = &param1->name;
frost$core$String* $tmp953 = *$tmp952;
frost$core$String* $tmp954 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp953);
frost$core$String* $tmp955 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s956, $tmp954);
frost$core$String* $tmp957 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp955, &$s958);
$fn960 $tmp959 = ($fn960) ((frost$io$OutputStream*) $tmp951)->$class->vtable[19];
frost$core$Error* $tmp961 = $tmp959(((frost$io$OutputStream*) $tmp951), $tmp957);
if ($tmp961 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local0) = $tmp961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$io$File* $tmp962 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp963 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
// line 239
frost$core$Weak** $tmp964 = &param0->compiler;
frost$core$Weak* $tmp965 = *$tmp964;
frost$core$Object* $tmp966 = frost$core$Weak$get$R$frost$core$Weak$T($tmp965);
org$frostlang$frostc$Type* $tmp967 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp968 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp966), $tmp967);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
org$frostlang$frostc$ClassDecl* $tmp969 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local4) = $tmp968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q($tmp966);
// line 240
frost$core$Weak** $tmp970 = &param0->compiler;
frost$core$Weak* $tmp971 = *$tmp970;
frost$core$Object* $tmp972 = frost$core$Weak$get$R$frost$core$Weak$T($tmp971);
org$frostlang$frostc$ClassDecl* $tmp973 = *(&local4);
frost$collections$ListView* $tmp974 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp972), $tmp973);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$collections$ListView* $tmp975 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local5) = $tmp974;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$core$Frost$unref$frost$core$Object$Q($tmp972);
// line 241
frost$io$IndentedOutputStream** $tmp976 = &param0->types;
frost$io$IndentedOutputStream* $tmp977 = *$tmp976;
frost$collections$ListView* $tmp978 = *(&local5);
ITable* $tmp979 = ((frost$collections$CollectionView*) $tmp978)->$class->itable;
while ($tmp979->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp979 = $tmp979->next;
}
$fn981 $tmp980 = $tmp979->methods[0];
frost$core$Int64 $tmp982 = $tmp980(((frost$collections$CollectionView*) $tmp978));
frost$core$Int64$wrapper* $tmp983;
$tmp983 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp983->value = $tmp982;
frost$core$String* $tmp984 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s985, ((frost$core$Object*) $tmp983));
frost$core$String* $tmp986 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp984, &$s987);
frost$core$String* $tmp988 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s989, $tmp986);
frost$core$String** $tmp990 = &param1->name;
frost$core$String* $tmp991 = *$tmp990;
frost$core$String* $tmp992 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp991);
frost$core$String* $tmp993 = frost$core$String$get_asString$R$frost$core$String($tmp992);
frost$core$String* $tmp994 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp993, &$s995);
frost$core$String* $tmp996 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp988, $tmp994);
$fn998 $tmp997 = ($fn998) ((frost$io$OutputStream*) $tmp977)->$class->vtable[19];
frost$core$Error* $tmp999 = $tmp997(((frost$io$OutputStream*) $tmp977), $tmp996);
if ($tmp999 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local0) = $tmp999;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$collections$ListView* $tmp1000 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1001 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1002 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1003 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// line 245
frost$io$IndentedOutputStream** $tmp1004 = &param0->types;
frost$io$IndentedOutputStream* $tmp1005 = *$tmp1004;
frost$core$String** $tmp1006 = &param1->name;
frost$core$String* $tmp1007 = *$tmp1006;
frost$core$String* $tmp1008 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1007);
frost$core$String* $tmp1009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1010, $tmp1008);
frost$core$String* $tmp1011 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1009, &$s1012);
frost$core$String** $tmp1013 = &param1->name;
frost$core$String* $tmp1014 = *$tmp1013;
frost$core$String* $tmp1015 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1014);
frost$core$String* $tmp1016 = frost$core$String$get_asString$R$frost$core$String($tmp1015);
frost$core$String* $tmp1017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1016, &$s1018);
frost$core$String* $tmp1019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1011, $tmp1017);
$fn1021 $tmp1020 = ($fn1021) ((frost$io$OutputStream*) $tmp1005)->$class->vtable[19];
frost$core$Error* $tmp1022 = $tmp1020(((frost$io$OutputStream*) $tmp1005), $tmp1019);
if ($tmp1022 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local0) = $tmp1022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$collections$ListView* $tmp1023 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1024 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1025 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1026 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$collections$ListView* $tmp1027 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1028 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block46;
block46:;
frost$io$File* $tmp1029 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1030 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 250
frost$core$Weak** $tmp1031 = &param0->compiler;
frost$core$Weak* $tmp1032 = *$tmp1031;
frost$core$Object* $tmp1033 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1032);
org$frostlang$frostc$Position* $tmp1034 = &param1->position;
org$frostlang$frostc$Position $tmp1035 = *$tmp1034;
frost$core$Error* $tmp1036 = *(&local0);
frost$core$String** $tmp1037 = &$tmp1036->message;
frost$core$String* $tmp1038 = *$tmp1037;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1033), $tmp1035, $tmp1038);
frost$core$Frost$unref$frost$core$Object$Q($tmp1033);
goto block2;
block2:;
frost$core$Error* $tmp1039 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 255
frost$core$Weak** $tmp1040 = &param1->owner;
frost$core$Weak* $tmp1041 = *$tmp1040;
frost$core$Object* $tmp1042 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1041);
org$frostlang$frostc$Type** $tmp1043 = &((org$frostlang$frostc$ClassDecl*) $tmp1042)->type;
org$frostlang$frostc$Type* $tmp1044 = *$tmp1043;
frost$core$String* $tmp1045 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1044);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$String* $tmp1046 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local0) = $tmp1045;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$Frost$unref$frost$core$Object$Q($tmp1042);
// line 256
org$frostlang$frostc$MethodDecl$Kind* $tmp1047 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1048 = *$tmp1047;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1049;
$tmp1049 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1049->value = $tmp1048;
frost$core$Int64 $tmp1050 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1051 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1050);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1052;
$tmp1052 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1052->value = $tmp1051;
ITable* $tmp1053 = ((frost$core$Equatable*) $tmp1049)->$class->itable;
while ($tmp1053->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1053 = $tmp1053->next;
}
$fn1055 $tmp1054 = $tmp1053->methods[0];
frost$core$Bit $tmp1056 = $tmp1054(((frost$core$Equatable*) $tmp1049), ((frost$core$Equatable*) $tmp1052));
bool $tmp1057 = $tmp1056.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1052)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1049)));
if ($tmp1057) goto block3; else goto block2;
block3:;
frost$core$String* $tmp1058 = *(&local0);
frost$core$Bit $tmp1059 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1058, &$s1060);
frost$core$Bit $tmp1061 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1059);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block1; else goto block2;
block1:;
// line 257
frost$core$String* $tmp1063 = *(&local0);
frost$core$String* $tmp1064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1063, &$s1065);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$String* $tmp1066 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1064;
block2:;
// line 259
frost$core$String* $tmp1067 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$String* $tmp1068 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1067;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 279
org$frostlang$frostc$Type** $tmp1069 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1070 = *$tmp1069;
frost$core$Bit $tmp1071 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1070);
frost$core$Bit $tmp1072 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1071);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block1; else goto block2;
block1:;
// line 280
frost$core$Bit $tmp1074 = frost$core$Bit$init$builtin_bit(false);
return $tmp1074;
block2:;
// line 282
org$frostlang$frostc$Annotations** $tmp1075 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1076 = *$tmp1075;
frost$core$Bit $tmp1077 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1076);
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1079 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1080 = *$tmp1079;
frost$core$Bit $tmp1081 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1080);
*(&local1) = $tmp1081;
goto block5;
block4:;
*(&local1) = $tmp1077;
goto block5;
block5:;
frost$core$Bit $tmp1082 = *(&local1);
bool $tmp1083 = $tmp1082.value;
if ($tmp1083) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1084 = &param0->compiler;
frost$core$Weak* $tmp1085 = *$tmp1084;
frost$core$Object* $tmp1086 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1085);
frost$core$Weak** $tmp1087 = &param0->compiler;
frost$core$Weak* $tmp1088 = *$tmp1087;
frost$core$Object* $tmp1089 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1088);
org$frostlang$frostc$Type** $tmp1090 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1091 = *$tmp1090;
org$frostlang$frostc$ClassDecl* $tmp1092 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1089), $tmp1091);
frost$core$Bit $tmp1093 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1086), $tmp1092);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
frost$core$Frost$unref$frost$core$Object$Q($tmp1089);
frost$core$Frost$unref$frost$core$Object$Q($tmp1086);
*(&local0) = $tmp1093;
goto block8;
block7:;
*(&local0) = $tmp1082;
goto block8;
block8:;
frost$core$Bit $tmp1094 = *(&local0);
*(&local2) = $tmp1094;
// line 288
frost$core$Bit $tmp1095 = *(&local2);
frost$core$Bit $tmp1096 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1095);
bool $tmp1097 = $tmp1096.value;
if ($tmp1097) goto block9; else goto block10;
block9:;
*(&local3) = $tmp1096;
goto block11;
block10:;
org$frostlang$frostc$Annotations** $tmp1098 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1099 = *$tmp1098;
frost$core$Bit $tmp1100 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1099);
frost$core$Bit $tmp1101 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1100);
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Annotations** $tmp1103 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1104 = *$tmp1103;
frost$core$Bit $tmp1105 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1104);
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block15; else goto block16;
block15:;
*(&local5) = $tmp1105;
goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1107 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1108 = *$tmp1107;
frost$core$Bit $tmp1109 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1108);
*(&local5) = $tmp1109;
goto block17;
block17:;
frost$core$Bit $tmp1110 = *(&local5);
*(&local4) = $tmp1110;
goto block14;
block13:;
*(&local4) = $tmp1101;
goto block14;
block14:;
frost$core$Bit $tmp1111 = *(&local4);
*(&local3) = $tmp1111;
goto block11;
block11:;
frost$core$Bit $tmp1112 = *(&local3);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1114 = (frost$core$Int64) {288};
frost$core$String* $tmp1115 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1117, $tmp1115);
frost$core$String* $tmp1118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1116, &$s1119);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1120, $tmp1114, $tmp1118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
abort(); // unreachable
block18:;
// line 290
frost$core$Bit $tmp1121 = *(&local2);
return $tmp1121;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
frost$core$String* local3 = NULL;
// line 295
*(&local0) = ((frost$core$Error*) NULL);
// line 296
frost$io$MemoryOutputStream** $tmp1122 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1123 = *$tmp1122;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$io$MemoryOutputStream** $tmp1124 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1125 = *$tmp1124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$io$MemoryOutputStream** $tmp1126 = &param0->importStream;
*$tmp1126 = $tmp1123;
// line 297
frost$collections$HashSet** $tmp1127 = &param0->bodyImports;
frost$collections$HashSet* $tmp1128 = *$tmp1127;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$collections$HashSet** $tmp1129 = &param0->imports;
frost$collections$HashSet* $tmp1130 = *$tmp1129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$collections$HashSet** $tmp1131 = &param0->imports;
*$tmp1131 = $tmp1128;
// line 298
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1132));
frost$core$String* $tmp1133 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local1) = &$s1134;
// line 299
frost$core$Bit $tmp1135 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block3; else goto block5;
block3:;
// line 300
frost$io$IndentedOutputStream** $tmp1137 = &param0->body;
frost$io$IndentedOutputStream* $tmp1138 = *$tmp1137;
frost$core$String* $tmp1139 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1141, $tmp1139);
frost$core$String* $tmp1142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1140, &$s1143);
org$frostlang$frostc$Type** $tmp1144 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1145 = *$tmp1144;
frost$core$String* $tmp1146 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1145);
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1142, $tmp1146);
frost$core$String* $tmp1148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1147, &$s1149);
$fn1151 $tmp1150 = ($fn1151) ((frost$io$OutputStream*) $tmp1138)->$class->vtable[17];
frost$core$Error* $tmp1152 = $tmp1150(((frost$io$OutputStream*) $tmp1138), $tmp1148);
if ($tmp1152 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local0) = $tmp1152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$String* $tmp1153 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1154));
frost$core$String* $tmp1155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local1) = &$s1156;
goto block4;
block5:;
// line 1
// line 304
frost$io$IndentedOutputStream** $tmp1157 = &param0->body;
frost$io$IndentedOutputStream* $tmp1158 = *$tmp1157;
org$frostlang$frostc$Type** $tmp1159 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1160 = *$tmp1159;
frost$core$String* $tmp1161 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1160);
frost$core$String* $tmp1162 = frost$core$String$get_asString$R$frost$core$String($tmp1161);
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1162, &$s1164);
frost$core$String* $tmp1165 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1163, $tmp1165);
frost$core$String* $tmp1167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1166, &$s1168);
$fn1170 $tmp1169 = ($fn1170) ((frost$io$OutputStream*) $tmp1158)->$class->vtable[17];
frost$core$Error* $tmp1171 = $tmp1169(((frost$io$OutputStream*) $tmp1158), $tmp1167);
if ($tmp1171 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local0) = $tmp1171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$String* $tmp1172 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
goto block4;
block4:;
// line 306
org$frostlang$frostc$Annotations** $tmp1173 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1174 = *$tmp1173;
frost$core$Bit $tmp1175 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1174);
frost$core$Bit $tmp1176 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1175);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block12; else goto block11;
block12:;
frost$core$Weak** $tmp1178 = &param0->compiler;
frost$core$Weak* $tmp1179 = *$tmp1178;
frost$core$Object* $tmp1180 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1179);
frost$core$Bit $tmp1181 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1180), param1);
frost$core$Bit $tmp1182 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1181);
bool $tmp1183 = $tmp1182.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1180);
if ($tmp1183) goto block10; else goto block11;
block10:;
// line 307
frost$io$IndentedOutputStream** $tmp1184 = &param0->body;
frost$io$IndentedOutputStream* $tmp1185 = *$tmp1184;
frost$core$String* $tmp1186 = *(&local1);
frost$core$String* $tmp1187 = frost$core$String$get_asString$R$frost$core$String($tmp1186);
frost$core$String* $tmp1188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1187, &$s1189);
frost$core$String* $tmp1190 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1188, $tmp1190);
frost$core$String* $tmp1192 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1191, &$s1193);
$fn1195 $tmp1194 = ($fn1195) ((frost$io$OutputStream*) $tmp1185)->$class->vtable[17];
frost$core$Error* $tmp1196 = $tmp1194(((frost$io$OutputStream*) $tmp1185), $tmp1192);
if ($tmp1196 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local0) = $tmp1196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$String* $tmp1197 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1198));
frost$core$String* $tmp1199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
*(&local1) = &$s1200;
goto block11;
block11:;
// line 310
frost$collections$Array** $tmp1201 = &param1->parameters;
frost$collections$Array* $tmp1202 = *$tmp1201;
ITable* $tmp1203 = ((frost$collections$Iterable*) $tmp1202)->$class->itable;
while ($tmp1203->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1203 = $tmp1203->next;
}
$fn1205 $tmp1204 = $tmp1203->methods[0];
frost$collections$Iterator* $tmp1206 = $tmp1204(((frost$collections$Iterable*) $tmp1202));
goto block15;
block15:;
ITable* $tmp1207 = $tmp1206->$class->itable;
while ($tmp1207->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1207 = $tmp1207->next;
}
$fn1209 $tmp1208 = $tmp1207->methods[0];
frost$core$Bit $tmp1210 = $tmp1208($tmp1206);
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block17; else goto block16;
block16:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1212 = $tmp1206->$class->itable;
while ($tmp1212->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1212 = $tmp1212->next;
}
$fn1214 $tmp1213 = $tmp1212->methods[1];
frost$core$Object* $tmp1215 = $tmp1213($tmp1206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1215)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1216 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1215);
// line 311
org$frostlang$frostc$MethodDecl$Parameter* $tmp1217 = *(&local2);
frost$core$String** $tmp1218 = &$tmp1217->name;
frost$core$String* $tmp1219 = *$tmp1218;
frost$core$String* $tmp1220 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1219);
frost$core$String* $tmp1221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1222, $tmp1220);
frost$core$String* $tmp1223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1221, &$s1224);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$String* $tmp1225 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local3) = $tmp1223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// line 312
frost$io$IndentedOutputStream** $tmp1226 = &param0->body;
frost$io$IndentedOutputStream* $tmp1227 = *$tmp1226;
frost$core$String* $tmp1228 = *(&local1);
frost$core$String* $tmp1229 = frost$core$String$get_asString$R$frost$core$String($tmp1228);
frost$core$String* $tmp1230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1229, &$s1231);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1232 = *(&local2);
org$frostlang$frostc$Type** $tmp1233 = &$tmp1232->type;
org$frostlang$frostc$Type* $tmp1234 = *$tmp1233;
frost$core$String* $tmp1235 = *(&local3);
frost$core$String* $tmp1236 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1234, $tmp1235);
frost$core$String* $tmp1237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1230, $tmp1236);
frost$core$String* $tmp1238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1237, &$s1239);
$fn1241 $tmp1240 = ($fn1241) ((frost$io$OutputStream*) $tmp1227)->$class->vtable[17];
frost$core$Error* $tmp1242 = $tmp1240(((frost$io$OutputStream*) $tmp1227), $tmp1238);
if ($tmp1242 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local0) = $tmp1242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$String* $tmp1243 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1215);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1244 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$String* $tmp1245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// line 313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1246));
frost$core$String* $tmp1247 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local1) = &$s1248;
frost$core$String* $tmp1249 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1215);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1250 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// line 315
frost$io$IndentedOutputStream** $tmp1251 = &param0->body;
frost$io$IndentedOutputStream* $tmp1252 = *$tmp1251;
$fn1254 $tmp1253 = ($fn1254) ((frost$io$OutputStream*) $tmp1252)->$class->vtable[19];
frost$core$Error* $tmp1255 = $tmp1253(((frost$io$OutputStream*) $tmp1252), &$s1256);
if ($tmp1255 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local0) = $tmp1255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$String* $tmp1257 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$String* $tmp1258 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 318
frost$core$Int64 $tmp1259 = (frost$core$Int64) {318};
frost$core$Error* $tmp1260 = *(&local0);
$fn1262 $tmp1261 = ($fn1262) ((frost$core$Object*) $tmp1260)->$class->vtable[0];
frost$core$String* $tmp1263 = $tmp1261(((frost$core$Object*) $tmp1260));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1264, $tmp1259, $tmp1263);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
abort(); // unreachable
block2:;
frost$core$Error* $tmp1265 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

// line 324
org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
// line 329
*(&local0) = ((frost$core$Error*) NULL);
// line 330
frost$io$IndentedOutputStream** $tmp1266 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1267 = *$tmp1266;
frost$io$MemoryOutputStream** $tmp1268 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1269 = *$tmp1268;
$fn1271 $tmp1270 = ($fn1271) ((frost$io$OutputStream*) $tmp1267)->$class->vtable[20];
frost$core$Error* $tmp1272 = $tmp1270(((frost$io$OutputStream*) $tmp1267), ((frost$core$Object*) $tmp1269));
if ($tmp1272 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local0) = $tmp1272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// line 331
frost$io$IndentedOutputStream** $tmp1273 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1274 = *$tmp1273;
frost$io$MemoryOutputStream** $tmp1275 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1276 = *$tmp1275;
$fn1278 $tmp1277 = ($fn1278) ((frost$io$OutputStream*) $tmp1274)->$class->vtable[20];
frost$core$Error* $tmp1279 = $tmp1277(((frost$io$OutputStream*) $tmp1274), ((frost$core$Object*) $tmp1276));
if ($tmp1279 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local0) = $tmp1279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// line 332
frost$io$IndentedOutputStream** $tmp1280 = &param0->out;
frost$io$IndentedOutputStream* $tmp1281 = *$tmp1280;
frost$io$MemoryOutputStream** $tmp1282 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1283 = *$tmp1282;
$fn1285 $tmp1284 = ($fn1285) ((frost$io$OutputStream*) $tmp1281)->$class->vtable[20];
frost$core$Error* $tmp1286 = $tmp1284(((frost$io$OutputStream*) $tmp1281), ((frost$core$Object*) $tmp1283));
if ($tmp1286 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local0) = $tmp1286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// line 333
frost$io$IndentedOutputStream** $tmp1287 = &param0->out;
frost$io$IndentedOutputStream* $tmp1288 = *$tmp1287;
frost$io$MemoryOutputStream** $tmp1289 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1290 = *$tmp1289;
$fn1292 $tmp1291 = ($fn1292) ((frost$io$OutputStream*) $tmp1288)->$class->vtable[20];
frost$core$Error* $tmp1293 = $tmp1291(((frost$io$OutputStream*) $tmp1288), ((frost$core$Object*) $tmp1290));
if ($tmp1293 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local0) = $tmp1293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
goto block2;
block1:;
// line 336
frost$core$Error* $tmp1294 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp1294));
// line 337
frost$core$Int64 $tmp1295 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp1295);
goto block2;
block2:;
frost$core$Error* $tmp1296 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1297 = &param0->compiler;
frost$core$Weak* $tmp1298 = *$tmp1297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$io$MemoryOutputStream** $tmp1299 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1300 = *$tmp1299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$io$MemoryOutputStream** $tmp1301 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1302 = *$tmp1301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$io$IndentedOutputStream** $tmp1303 = &param0->types;
frost$io$IndentedOutputStream* $tmp1304 = *$tmp1303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$io$MemoryOutputStream** $tmp1305 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1306 = *$tmp1305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$io$MemoryOutputStream** $tmp1307 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1308 = *$tmp1307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$io$IndentedOutputStream** $tmp1309 = &param0->body;
frost$io$IndentedOutputStream* $tmp1310 = *$tmp1309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
frost$collections$HashSet** $tmp1311 = &param0->typeImports;
frost$collections$HashSet* $tmp1312 = *$tmp1311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$collections$HashSet** $tmp1313 = &param0->bodyImports;
frost$collections$HashSet* $tmp1314 = *$tmp1313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$collections$HashSet** $tmp1315 = &param0->imports;
frost$collections$HashSet* $tmp1316 = *$tmp1315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$io$MemoryOutputStream** $tmp1317 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1318 = *$tmp1317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$io$File** $tmp1319 = &param0->outDir;
frost$io$File* $tmp1320 = *$tmp1319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$io$IndentedOutputStream** $tmp1321 = &param0->out;
frost$io$IndentedOutputStream* $tmp1322 = *$tmp1321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$io$IndentedOutputStream** $tmp1323 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1324 = *$tmp1323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1325 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1326 = *$tmp1325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Weak** $tmp1327 = &param0->cCodeGen;
frost$core$Weak* $tmp1328 = *$tmp1327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
org$frostlang$frostc$CCodeGenerator** $tmp1329 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1330 = *$tmp1329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
return;

}

