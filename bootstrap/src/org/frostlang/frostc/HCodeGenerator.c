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
org$frostlang$frostc$HCodeGenerator$class_type org$frostlang$frostc$HCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$cleanup, org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$finish} };

typedef frost$core$Error* (*$fn229)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn260)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn374)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn407)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn559)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn567)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn581)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn588)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn596)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn621)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn641)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn645)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn650)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn681)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn702)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn716)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn724)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn749)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn756)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn781)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn797)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn817)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn836)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn853)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn861)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn869)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn883)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn907)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn921)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn944)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn951)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn976)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn997)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1014)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1037)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1071)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1167)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1186)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1211)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1221)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1225)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1230)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1257)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1270)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1278)(frost$core$Object*);
typedef frost$core$Error* (*$fn1287)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1294)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1301)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1308)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, 945681673046986118, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, 165, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 71, -5337883038282373450, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 14, -7365331167748677648, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s917 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, -2864429813656612391, NULL };
static frost$core$String $s1003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1005 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20", 122, 4184645696787544911, NULL };
static frost$core$String $s1011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1028 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };

void org$frostlang$frostc$HCodeGenerator$init$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1) {

// line 42
FROST_ASSERT(256 == sizeof(org$frostlang$frostc$CCodeGenerator));
org$frostlang$frostc$CCodeGenerator* $tmp2 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
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
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp8 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp8, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Weak** $tmp9 = &param0->compiler;
frost$core$Weak* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 8
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
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
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
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
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
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
FROST_ASSERT(240 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp58 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp67 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp72 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp77 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp77, ((frost$core$Object*) param2));
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
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$String* $tmp193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local1) = $tmp192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// line 96
frost$core$Weak** $tmp194 = &param0->compiler;
frost$core$Weak* $tmp195 = *$tmp194;
frost$core$Object* $tmp196 = frost$core$Weak$get$R$frost$core$Weak$T($tmp195);
org$frostlang$frostc$ClassDecl* $tmp197 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp196), param1);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
org$frostlang$frostc$ClassDecl* $tmp198 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local2) = $tmp197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q($tmp196);
// line 97
org$frostlang$frostc$ClassDecl* $tmp199 = *(&local2);
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199 != NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s203, $tmp202);
abort(); // unreachable
block21:;
// line 98
frost$core$Weak** $tmp204 = &param0->compiler;
frost$core$Weak* $tmp205 = *$tmp204;
frost$core$Object* $tmp206 = frost$core$Weak$get$R$frost$core$Weak$T($tmp205);
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local2);
frost$core$Bit $tmp208 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp206), $tmp207);
frost$core$Bit $tmp209 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp208);
bool $tmp210 = $tmp209.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp206);
if ($tmp210) goto block23; else goto block24;
block23:;
// line 99
frost$collections$HashSet** $tmp211 = &param0->imports;
frost$collections$HashSet* $tmp212 = *$tmp211;
frost$core$String* $tmp213 = *(&local1);
frost$core$Bit $tmp214 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp212, ((frost$collections$Key*) $tmp213));
frost$core$Bit $tmp215 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block25; else goto block26;
block25:;
// line 100
frost$io$MemoryOutputStream** $tmp217 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp218 = *$tmp217;
frost$core$String* $tmp219 = *(&local1);
frost$core$String* $tmp220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s221, $tmp219);
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp220, &$s223);
frost$core$String* $tmp224 = *(&local1);
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp222, $tmp224);
frost$core$String* $tmp226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, &$s227);
$fn229 $tmp228 = ($fn229) ((frost$io$OutputStream*) $tmp218)->$class->vtable[19];
frost$core$Error* $tmp230 = $tmp228(((frost$io$OutputStream*) $tmp218), $tmp226);
if ($tmp230 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local0) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
org$frostlang$frostc$ClassDecl* $tmp231 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// line 101
frost$collections$HashSet** $tmp233 = &param0->imports;
frost$collections$HashSet* $tmp234 = *$tmp233;
frost$core$String* $tmp235 = *(&local1);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp234, ((frost$collections$Key*) $tmp235));
goto block26;
block26:;
// line 103
frost$core$String* $tmp236 = *(&local1);
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp236, &$s238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
org$frostlang$frostc$ClassDecl* $tmp239 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp240 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp241 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp237;
block24:;
// line 105
org$frostlang$frostc$ClassDecl* $tmp242 = *(&local2);
frost$core$String* $tmp243 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp242, &$s244);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$String* $tmp245 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local3) = $tmp243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// line 106
frost$collections$HashSet** $tmp246 = &param0->imports;
frost$collections$HashSet* $tmp247 = *$tmp246;
frost$core$String* $tmp248 = *(&local3);
frost$core$Bit $tmp249 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp247, ((frost$collections$Key*) $tmp248));
frost$core$Bit $tmp250 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block29; else goto block30;
block29:;
// line 107
frost$io$MemoryOutputStream** $tmp252 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp253 = *$tmp252;
frost$core$String* $tmp254 = *(&local3);
frost$core$String* $tmp255 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s256, $tmp254);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp255, &$s258);
$fn260 $tmp259 = ($fn260) ((frost$io$OutputStream*) $tmp253)->$class->vtable[19];
frost$core$Error* $tmp261 = $tmp259(((frost$io$OutputStream*) $tmp253), $tmp257);
if ($tmp261 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = $tmp261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$String* $tmp262 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp263 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// line 108
frost$collections$HashSet** $tmp265 = &param0->imports;
frost$collections$HashSet* $tmp266 = *$tmp265;
frost$core$String* $tmp267 = *(&local3);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp266, ((frost$collections$Key*) $tmp267));
goto block30;
block30:;
// line 110
frost$core$String* $tmp268 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$String* $tmp269 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp270 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp271 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp272 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp268;
block20:;
frost$core$Int64 $tmp273 = (frost$core$Int64) {1};
frost$core$Bit $tmp274 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp273);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block33; else goto block34;
block33:;
// line 113
frost$core$Weak** $tmp276 = &param0->compiler;
frost$core$Weak* $tmp277 = *$tmp276;
frost$core$Object* $tmp278 = frost$core$Weak$get$R$frost$core$Weak$T($tmp277);
org$frostlang$frostc$ClassDecl* $tmp279 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp278), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
org$frostlang$frostc$ClassDecl* $tmp280 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local4) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q($tmp278);
// line 114
org$frostlang$frostc$ClassDecl* $tmp281 = *(&local4);
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit($tmp281 != NULL);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s285, $tmp284);
abort(); // unreachable
block35:;
// line 115
frost$core$Weak** $tmp286 = &param0->compiler;
frost$core$Weak* $tmp287 = *$tmp286;
frost$core$Object* $tmp288 = frost$core$Weak$get$R$frost$core$Weak$T($tmp287);
org$frostlang$frostc$ClassDecl* $tmp289 = *(&local4);
frost$core$Bit $tmp290 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp288), $tmp289);
bool $tmp291 = $tmp290.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp288);
if ($tmp291) goto block37; else goto block38;
block37:;
// line 116
org$frostlang$frostc$FixedArray* $tmp292 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp293 = (frost$core$Int64) {0};
frost$core$Object* $tmp294 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp292, $tmp293);
frost$core$String* $tmp295 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp294));
frost$core$String* $tmp296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp295, &$s297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q($tmp294);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
org$frostlang$frostc$ClassDecl* $tmp298 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp296;
block38:;
// line 118
org$frostlang$frostc$FixedArray* $tmp300 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp301 = (frost$core$Int64) {0};
frost$core$Object* $tmp302 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp300, $tmp301);
frost$core$String* $tmp303 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp302));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q($tmp302);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
org$frostlang$frostc$ClassDecl* $tmp304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp305 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp303;
block34:;
frost$core$Int64 $tmp306 = (frost$core$Int64) {11};
frost$core$Bit $tmp307 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp306);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block39; else goto block40;
block39:;
// line 121
org$frostlang$frostc$FixedArray* $tmp309 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp310 = (frost$core$Int64) {0};
frost$core$Object* $tmp311 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp309, $tmp310);
frost$core$String** $tmp312 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp311))->name;
frost$core$String* $tmp313 = *$tmp312;
frost$core$Bit $tmp314 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp313, &$s315);
bool $tmp316 = $tmp314.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp311);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
if ($tmp316) goto block41; else goto block42;
block41:;
// line 122
org$frostlang$frostc$FixedArray* $tmp317 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp318 = (frost$core$Int64) {1};
frost$core$Object* $tmp319 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp317, $tmp318);
frost$core$String* $tmp320 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp319));
frost$core$String* $tmp321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp320, &$s322);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q($tmp319);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Error* $tmp323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp321;
block42:;
// line 124
frost$core$Weak** $tmp324 = &param0->compiler;
frost$core$Weak* $tmp325 = *$tmp324;
frost$core$Object* $tmp326 = frost$core$Weak$get$R$frost$core$Weak$T($tmp325);
org$frostlang$frostc$ClassDecl* $tmp327 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp326), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
org$frostlang$frostc$ClassDecl* $tmp328 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local5) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
// line 125
org$frostlang$frostc$ClassDecl* $tmp329 = *(&local5);
frost$core$Bit $tmp330 = org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp329);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block43; else goto block44;
block43:;
// line 126
frost$core$String** $tmp332 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp333 = *$tmp332;
frost$core$String* $tmp334 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp333);
frost$core$String* $tmp335 = frost$core$String$get_asString$R$frost$core$String($tmp334);
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp335, &$s337);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$String* $tmp338 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local6) = $tmp336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// line 127
frost$core$Weak** $tmp339 = &param0->compiler;
frost$core$Weak* $tmp340 = *$tmp339;
frost$core$Object* $tmp341 = frost$core$Weak$get$R$frost$core$Weak$T($tmp340);
org$frostlang$frostc$ClassDecl* $tmp342 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp341), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
org$frostlang$frostc$ClassDecl* $tmp343 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local7) = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q($tmp341);
// line 128
org$frostlang$frostc$ClassDecl* $tmp344 = *(&local7);
frost$core$Bit $tmp345 = frost$core$Bit$init$builtin_bit($tmp344 != NULL);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp347 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s348, $tmp347);
abort(); // unreachable
block45:;
// line 129
frost$core$Weak** $tmp349 = &param0->compiler;
frost$core$Weak* $tmp350 = *$tmp349;
frost$core$Object* $tmp351 = frost$core$Weak$get$R$frost$core$Weak$T($tmp350);
org$frostlang$frostc$ClassDecl* $tmp352 = *(&local7);
frost$core$Bit $tmp353 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp351), $tmp352);
frost$core$Bit $tmp354 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp353);
bool $tmp355 = $tmp354.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp351);
if ($tmp355) goto block47; else goto block48;
block47:;
// line 130
frost$collections$HashSet** $tmp356 = &param0->imports;
frost$collections$HashSet* $tmp357 = *$tmp356;
frost$core$String* $tmp358 = *(&local6);
frost$core$Bit $tmp359 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp357, ((frost$collections$Key*) $tmp358));
frost$core$Bit $tmp360 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp359);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block49; else goto block50;
block49:;
// line 131
frost$io$MemoryOutputStream** $tmp362 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp363 = *$tmp362;
frost$core$String* $tmp364 = *(&local6);
frost$core$String* $tmp365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s366, $tmp364);
frost$core$String* $tmp367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp365, &$s368);
frost$core$String* $tmp369 = *(&local6);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp367, $tmp369);
frost$core$String* $tmp371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, &$s372);
$fn374 $tmp373 = ($fn374) ((frost$io$OutputStream*) $tmp363)->$class->vtable[19];
frost$core$Error* $tmp375 = $tmp373(((frost$io$OutputStream*) $tmp363), $tmp371);
if ($tmp375 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local0) = $tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
org$frostlang$frostc$ClassDecl* $tmp376 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp377 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp378 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// line 132
frost$collections$HashSet** $tmp379 = &param0->imports;
frost$collections$HashSet* $tmp380 = *$tmp379;
frost$core$String* $tmp381 = *(&local6);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp380, ((frost$collections$Key*) $tmp381));
goto block50;
block50:;
// line 134
frost$core$String* $tmp382 = *(&local6);
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, &$s384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
org$frostlang$frostc$ClassDecl* $tmp385 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp386 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp387 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp388 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp383;
block48:;
// line 136
org$frostlang$frostc$ClassDecl* $tmp389 = *(&local7);
frost$core$String* $tmp390 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp389, &$s391);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$String* $tmp392 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local8) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// line 137
frost$collections$HashSet** $tmp393 = &param0->imports;
frost$collections$HashSet* $tmp394 = *$tmp393;
frost$core$String* $tmp395 = *(&local8);
frost$core$Bit $tmp396 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp394, ((frost$collections$Key*) $tmp395));
frost$core$Bit $tmp397 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp396);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block53; else goto block54;
block53:;
// line 138
frost$io$MemoryOutputStream** $tmp399 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp400 = *$tmp399;
frost$core$String* $tmp401 = *(&local8);
frost$core$String* $tmp402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s403, $tmp401);
frost$core$String* $tmp404 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp402, &$s405);
$fn407 $tmp406 = ($fn407) ((frost$io$OutputStream*) $tmp400)->$class->vtable[19];
frost$core$Error* $tmp408 = $tmp406(((frost$io$OutputStream*) $tmp400), $tmp404);
if ($tmp408 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local0) = $tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$String* $tmp409 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp410 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp411 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp412 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// line 139
frost$collections$HashSet** $tmp413 = &param0->imports;
frost$collections$HashSet* $tmp414 = *$tmp413;
frost$core$String* $tmp415 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp414, ((frost$collections$Key*) $tmp415));
goto block54;
block54:;
// line 141
frost$core$String* $tmp416 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$String* $tmp417 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp418 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp419 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp420 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp421 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp416;
block44:;
// line 143
org$frostlang$frostc$FixedArray* $tmp422 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp423 = (frost$core$Int64) {0};
frost$core$Object* $tmp424 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp422, $tmp423);
frost$core$String* $tmp425 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp424));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q($tmp424);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$ClassDecl* $tmp426 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp427 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp425;
block40:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {12};
frost$core$Bit $tmp429 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block57; else goto block58;
block57:;
// line 146
frost$core$Weak** $tmp431 = &param1->genericClassParameter;
frost$core$Weak* $tmp432 = *$tmp431;
frost$core$Object* $tmp433 = frost$core$Weak$get$R$frost$core$Weak$T($tmp432);
org$frostlang$frostc$Type** $tmp434 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp433)->bound;
org$frostlang$frostc$Type* $tmp435 = *$tmp434;
frost$core$String* $tmp436 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp435);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q($tmp433);
frost$core$Error* $tmp437 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp436;
block58:;
frost$core$Int64 $tmp438 = (frost$core$Int64) {13};
frost$core$Bit $tmp439 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block59; else goto block60;
block59:;
// line 149
frost$core$Weak** $tmp441 = &param1->genericMethodParameter;
frost$core$Weak* $tmp442 = *$tmp441;
frost$core$Object* $tmp443 = frost$core$Weak$get$R$frost$core$Weak$T($tmp442);
org$frostlang$frostc$Type** $tmp444 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp443)->bound;
org$frostlang$frostc$Type* $tmp445 = *$tmp444;
frost$core$String* $tmp446 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp445);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
frost$core$Error* $tmp447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp446;
block60:;
frost$core$Int64 $tmp448 = (frost$core$Int64) {15};
frost$core$Bit $tmp449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp451 = (frost$core$Int64) {16};
frost$core$Bit $tmp452 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block61; else goto block63;
block61:;
// line 152
org$frostlang$frostc$Type* $tmp454 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp455 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Error* $tmp456 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp455;
block63:;
frost$core$Int64 $tmp457 = (frost$core$Int64) {17};
frost$core$Bit $tmp458 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp457);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {18};
frost$core$Bit $tmp461 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp460);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block64; else goto block66;
block64:;
// line 155
org$frostlang$frostc$Type* $tmp463 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp464 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Error* $tmp465 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp464;
block66:;
frost$core$Int64 $tmp466 = (frost$core$Int64) {10};
frost$core$Bit $tmp467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block67; else goto block68;
block67:;
// line 158
frost$core$Weak** $tmp469 = &param0->compiler;
frost$core$Weak* $tmp470 = *$tmp469;
frost$core$Object* $tmp471 = frost$core$Weak$get$R$frost$core$Weak$T($tmp470);
org$frostlang$frostc$ClassDecl* $tmp472 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp471), param1);
org$frostlang$frostc$Type** $tmp473 = &$tmp472->type;
org$frostlang$frostc$Type* $tmp474 = *$tmp473;
frost$core$String* $tmp475 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q($tmp471);
frost$core$Error* $tmp476 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp475;
block68:;
// line 161
frost$core$Int64 $tmp477 = (frost$core$Int64) {161};
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s479, ((frost$core$Object*) param1));
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s481);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s482, $tmp477, $tmp480);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
abort(); // unreachable
block3:;
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local0) = ((frost$core$Error*) NULL);
// line 167
frost$core$Int64 $tmp484 = (frost$core$Int64) {167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s485, $tmp484);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// line 171
frost$core$String* $tmp486 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp487 = frost$core$String$get_asString$R$frost$core$String($tmp486);
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp487, &$s489);
frost$core$String* $tmp490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp488, param2);
frost$core$String* $tmp491 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp490, &$s492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
return $tmp491;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 176
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp493 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp493, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Weak** $tmp494 = &param0->compiler;
frost$core$Weak* $tmp495 = *$tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Weak** $tmp496 = &param0->compiler;
*$tmp496 = $tmp493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
// line 177
org$frostlang$frostc$LLVMCodeGenerator** $tmp497 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp498 = *$tmp497;
org$frostlang$frostc$LLVMCodeGenerator$setCompiler$org$frostlang$frostc$Compiler($tmp498, param1);
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 181
frost$io$File** $tmp499 = &param0->outDir;
frost$io$File* $tmp500 = *$tmp499;
frost$core$String* $tmp501 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp502 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp500, $tmp501);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
return $tmp502;

}
void org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$io$File* local2 = NULL;
org$frostlang$frostc$FieldDecl* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// line 186
*(&local0) = ((frost$core$Error*) NULL);
// line 187
frost$io$MemoryOutputStream** $tmp503 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp504 = *$tmp503;
frost$io$MemoryOutputStream$clear($tmp504);
// line 188
frost$io$MemoryOutputStream** $tmp505 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp506 = *$tmp505;
frost$io$MemoryOutputStream$clear($tmp506);
// line 189
frost$io$MemoryOutputStream** $tmp507 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp508 = *$tmp507;
frost$io$MemoryOutputStream$clear($tmp508);
// line 190
frost$io$MemoryOutputStream** $tmp509 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp510 = *$tmp509;
frost$io$MemoryOutputStream$clear($tmp510);
// line 191
frost$collections$HashSet** $tmp511 = &param0->typeImports;
frost$collections$HashSet* $tmp512 = *$tmp511;
frost$collections$HashSet$clear($tmp512);
// line 192
frost$collections$HashSet** $tmp513 = &param0->bodyImports;
frost$collections$HashSet* $tmp514 = *$tmp513;
frost$collections$HashSet$clear($tmp514);
// line 193
frost$io$File* $tmp515 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s516);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$io$File* $tmp517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local1) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// line 194
frost$io$File* $tmp518 = *(&local1);
frost$io$File* $tmp519 = frost$io$File$get_parent$R$frost$io$File$Q($tmp518);
frost$core$Error* $tmp520 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp519);
if ($tmp520 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local0) = $tmp520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$io$File* $tmp521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// line 195
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp522 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp523 = *(&local1);
frost$core$Maybe* $tmp524 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp523);
frost$core$Int64* $tmp525 = &$tmp524->$rawValue;
frost$core$Int64 $tmp526 = *$tmp525;
int64_t $tmp527 = $tmp526.value;
bool $tmp528 = $tmp527 == 0;
if ($tmp528) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp529 = (frost$core$Error**) ($tmp524->$data + 0);
frost$core$Error* $tmp530 = *$tmp529;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local0) = $tmp530;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$io$File* $tmp531 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Object** $tmp532 = (frost$core$Object**) ($tmp524->$data + 0);
frost$core$Object* $tmp533 = *$tmp532;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp522, ((frost$io$OutputStream*) $tmp533));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$io$IndentedOutputStream** $tmp534 = &param0->out;
frost$io$IndentedOutputStream* $tmp535 = *$tmp534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$io$IndentedOutputStream** $tmp536 = &param0->out;
*$tmp536 = $tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// line 196
frost$io$File* $tmp537 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s538);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$io$File* $tmp539 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local2) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// line 197
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp540 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp541 = *(&local2);
frost$core$Maybe* $tmp542 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp541);
frost$core$Int64* $tmp543 = &$tmp542->$rawValue;
frost$core$Int64 $tmp544 = *$tmp543;
int64_t $tmp545 = $tmp544.value;
bool $tmp546 = $tmp545 == 0;
if ($tmp546) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp547 = (frost$core$Error**) ($tmp542->$data + 0);
frost$core$Error* $tmp548 = *$tmp547;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local0) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
frost$io$File* $tmp549 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp550 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp551 = (frost$core$Object**) ($tmp542->$data + 0);
frost$core$Object* $tmp552 = *$tmp551;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp540, ((frost$io$OutputStream*) $tmp552));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
frost$io$IndentedOutputStream** $tmp553 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp554 = *$tmp553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$io$IndentedOutputStream** $tmp555 = &param0->typesOut;
*$tmp555 = $tmp540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// line 198
frost$io$IndentedOutputStream** $tmp556 = &param0->out;
frost$io$IndentedOutputStream* $tmp557 = *$tmp556;
$fn559 $tmp558 = ($fn559) ((frost$io$OutputStream*) $tmp557)->$class->vtable[19];
frost$core$Error* $tmp560 = $tmp558(((frost$io$OutputStream*) $tmp557), &$s561);
if ($tmp560 == NULL) goto block9; else goto block10;
block10:;
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
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// line 199
frost$io$IndentedOutputStream** $tmp564 = &param0->out;
frost$io$IndentedOutputStream* $tmp565 = *$tmp564;
$fn567 $tmp566 = ($fn567) ((frost$io$OutputStream*) $tmp565)->$class->vtable[19];
frost$core$Error* $tmp568 = $tmp566(((frost$io$OutputStream*) $tmp565), &$s569);
if ($tmp568 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local0) = $tmp568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
frost$io$File* $tmp570 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// line 200
frost$io$IndentedOutputStream** $tmp572 = &param0->out;
frost$io$IndentedOutputStream* $tmp573 = *$tmp572;
frost$io$File* $tmp574 = *(&local2);
frost$core$String* $tmp575 = frost$io$File$get_name$R$frost$core$String($tmp574);
frost$core$String* $tmp576 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s577, $tmp575);
frost$core$String* $tmp578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp576, &$s579);
$fn581 $tmp580 = ($fn581) ((frost$io$OutputStream*) $tmp573)->$class->vtable[19];
frost$core$Error* $tmp582 = $tmp580(((frost$io$OutputStream*) $tmp573), $tmp578);
if ($tmp582 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local0) = $tmp582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$io$File* $tmp583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp584 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// line 201
frost$io$IndentedOutputStream** $tmp585 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp586 = *$tmp585;
$fn588 $tmp587 = ($fn588) ((frost$io$OutputStream*) $tmp586)->$class->vtable[19];
frost$core$Error* $tmp589 = $tmp587(((frost$io$OutputStream*) $tmp586), &$s590);
if ($tmp589 == NULL) goto block15; else goto block16;
block16:;
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
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// line 202
frost$io$IndentedOutputStream** $tmp593 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp594 = *$tmp593;
$fn596 $tmp595 = ($fn596) ((frost$io$OutputStream*) $tmp594)->$class->vtable[19];
frost$core$Error* $tmp597 = $tmp595(((frost$io$OutputStream*) $tmp594), &$s598);
if ($tmp597 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local0) = $tmp597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$io$File* $tmp599 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp600 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// line 203
frost$io$MemoryOutputStream** $tmp601 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp602 = *$tmp601;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$io$MemoryOutputStream** $tmp603 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp604 = *$tmp603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$io$MemoryOutputStream** $tmp605 = &param0->importStream;
*$tmp605 = $tmp602;
// line 204
frost$collections$HashSet** $tmp606 = &param0->typeImports;
frost$collections$HashSet* $tmp607 = *$tmp606;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$collections$HashSet** $tmp608 = &param0->imports;
frost$collections$HashSet* $tmp609 = *$tmp608;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$collections$HashSet** $tmp610 = &param0->imports;
*$tmp610 = $tmp607;
// line 205
frost$io$IndentedOutputStream** $tmp611 = &param0->types;
frost$io$IndentedOutputStream* $tmp612 = *$tmp611;
frost$core$String** $tmp613 = &param1->name;
frost$core$String* $tmp614 = *$tmp613;
frost$core$String* $tmp615 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp614);
frost$core$String* $tmp616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s617, $tmp615);
frost$core$String* $tmp618 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp616, &$s619);
$fn621 $tmp620 = ($fn621) ((frost$io$OutputStream*) $tmp612)->$class->vtable[19];
frost$core$Error* $tmp622 = $tmp620(((frost$io$OutputStream*) $tmp612), $tmp618);
if ($tmp622 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local0) = $tmp622;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$io$File* $tmp623 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp624 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// line 206
frost$io$IndentedOutputStream** $tmp625 = &param0->types;
frost$io$IndentedOutputStream* $tmp626 = *$tmp625;
frost$core$Int64* $tmp627 = &$tmp626->level;
frost$core$Int64 $tmp628 = *$tmp627;
frost$core$Int64 $tmp629 = (frost$core$Int64) {1};
int64_t $tmp630 = $tmp628.value;
int64_t $tmp631 = $tmp629.value;
int64_t $tmp632 = $tmp630 + $tmp631;
frost$core$Int64 $tmp633 = (frost$core$Int64) {$tmp632};
frost$core$Int64* $tmp634 = &$tmp626->level;
*$tmp634 = $tmp633;
// line 207
frost$core$Weak** $tmp635 = &param0->compiler;
frost$core$Weak* $tmp636 = *$tmp635;
frost$core$Object* $tmp637 = frost$core$Weak$get$R$frost$core$Weak$T($tmp636);
frost$collections$ListView* $tmp638 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp637), param1);
ITable* $tmp639 = ((frost$collections$Iterable*) $tmp638)->$class->itable;
while ($tmp639->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp639 = $tmp639->next;
}
$fn641 $tmp640 = $tmp639->methods[0];
frost$collections$Iterator* $tmp642 = $tmp640(((frost$collections$Iterable*) $tmp638));
goto block21;
block21:;
ITable* $tmp643 = $tmp642->$class->itable;
while ($tmp643->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp643 = $tmp643->next;
}
$fn645 $tmp644 = $tmp643->methods[0];
frost$core$Bit $tmp646 = $tmp644($tmp642);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block23; else goto block22;
block22:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp648 = $tmp642->$class->itable;
while ($tmp648->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp648 = $tmp648->next;
}
$fn650 $tmp649 = $tmp648->methods[1];
frost$core$Object* $tmp651 = $tmp649($tmp642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp651)));
org$frostlang$frostc$FieldDecl* $tmp652 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp651);
// line 208
frost$core$Weak** $tmp653 = &param0->compiler;
frost$core$Weak* $tmp654 = *$tmp653;
frost$core$Object* $tmp655 = frost$core$Weak$get$R$frost$core$Weak$T($tmp654);
org$frostlang$frostc$FieldDecl* $tmp656 = *(&local3);
frost$core$Bit $tmp657 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp655), $tmp656);
frost$core$Frost$unref$frost$core$Object$Q($tmp655);
// line 209
org$frostlang$frostc$FieldDecl* $tmp658 = *(&local3);
org$frostlang$frostc$Type** $tmp659 = &$tmp658->type;
org$frostlang$frostc$Type* $tmp660 = *$tmp659;
org$frostlang$frostc$Type* $tmp661 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp662 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp660, $tmp661);
bool $tmp663 = $tmp662.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
if ($tmp663) goto block24; else goto block26;
block24:;
// line 210
frost$io$IndentedOutputStream** $tmp664 = &param0->types;
frost$io$IndentedOutputStream* $tmp665 = *$tmp664;
org$frostlang$frostc$FieldDecl* $tmp666 = *(&local3);
frost$core$String** $tmp667 = &((org$frostlang$frostc$Symbol*) $tmp666)->name;
frost$core$String* $tmp668 = *$tmp667;
frost$core$String* $tmp669 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s670, $tmp668);
frost$core$String* $tmp671 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp669, &$s672);
org$frostlang$frostc$LLVMCodeGenerator** $tmp673 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp674 = *$tmp673;
frost$core$Int64 $tmp675 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp674, param1);
frost$core$Int64$wrapper* $tmp676;
$tmp676 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp676->value = $tmp675;
frost$core$String* $tmp677 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp671, ((frost$core$Object*) $tmp676));
frost$core$String* $tmp678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp677, &$s679);
$fn681 $tmp680 = ($fn681) ((frost$io$OutputStream*) $tmp665)->$class->vtable[19];
frost$core$Error* $tmp682 = $tmp680(((frost$io$OutputStream*) $tmp665), $tmp678);
if ($tmp682 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local0) = $tmp682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q($tmp651);
org$frostlang$frostc$FieldDecl* $tmp683 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q($tmp637);
frost$io$File* $tmp684 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp685 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
goto block25;
block26:;
// line 1
// line 213
frost$io$IndentedOutputStream** $tmp686 = &param0->types;
frost$io$IndentedOutputStream* $tmp687 = *$tmp686;
org$frostlang$frostc$FieldDecl* $tmp688 = *(&local3);
org$frostlang$frostc$Type** $tmp689 = &$tmp688->type;
org$frostlang$frostc$Type* $tmp690 = *$tmp689;
frost$core$String* $tmp691 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp690);
frost$core$String* $tmp692 = frost$core$String$get_asString$R$frost$core$String($tmp691);
frost$core$String* $tmp693 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp692, &$s694);
org$frostlang$frostc$FieldDecl* $tmp695 = *(&local3);
frost$core$String** $tmp696 = &((org$frostlang$frostc$Symbol*) $tmp695)->name;
frost$core$String* $tmp697 = *$tmp696;
frost$core$String* $tmp698 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp693, $tmp697);
frost$core$String* $tmp699 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp698, &$s700);
$fn702 $tmp701 = ($fn702) ((frost$io$OutputStream*) $tmp687)->$class->vtable[19];
frost$core$Error* $tmp703 = $tmp701(((frost$io$OutputStream*) $tmp687), $tmp699);
if ($tmp703 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local0) = $tmp703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q($tmp651);
org$frostlang$frostc$FieldDecl* $tmp704 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q($tmp637);
frost$io$File* $tmp705 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp706 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp651);
org$frostlang$frostc$FieldDecl* $tmp707 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q($tmp637);
// line 216
frost$core$String** $tmp708 = &param1->name;
frost$core$String* $tmp709 = *$tmp708;
frost$core$Bit $tmp710 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp709, &$s711);
bool $tmp712 = $tmp710.value;
if ($tmp712) goto block31; else goto block32;
block31:;
// line 217
frost$io$IndentedOutputStream** $tmp713 = &param0->types;
frost$io$IndentedOutputStream* $tmp714 = *$tmp713;
$fn716 $tmp715 = ($fn716) ((frost$io$OutputStream*) $tmp714)->$class->vtable[19];
frost$core$Error* $tmp717 = $tmp715(((frost$io$OutputStream*) $tmp714), &$s718);
if ($tmp717 == NULL) goto block33; else goto block34;
block34:;
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
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// line 218
frost$io$IndentedOutputStream** $tmp721 = &param0->types;
frost$io$IndentedOutputStream* $tmp722 = *$tmp721;
$fn724 $tmp723 = ($fn724) ((frost$io$OutputStream*) $tmp722)->$class->vtable[19];
frost$core$Error* $tmp725 = $tmp723(((frost$io$OutputStream*) $tmp722), &$s726);
if ($tmp725 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local0) = $tmp725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$io$File* $tmp727 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp728 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
goto block32;
block32:;
// line 220
frost$io$IndentedOutputStream** $tmp729 = &param0->types;
frost$io$IndentedOutputStream* $tmp730 = *$tmp729;
frost$core$Int64* $tmp731 = &$tmp730->level;
frost$core$Int64 $tmp732 = *$tmp731;
frost$core$Int64 $tmp733 = (frost$core$Int64) {1};
int64_t $tmp734 = $tmp732.value;
int64_t $tmp735 = $tmp733.value;
int64_t $tmp736 = $tmp734 - $tmp735;
frost$core$Int64 $tmp737 = (frost$core$Int64) {$tmp736};
frost$core$Int64* $tmp738 = &$tmp730->level;
*$tmp738 = $tmp737;
// line 221
frost$io$IndentedOutputStream** $tmp739 = &param0->types;
frost$io$IndentedOutputStream* $tmp740 = *$tmp739;
frost$core$String** $tmp741 = &param1->name;
frost$core$String* $tmp742 = *$tmp741;
frost$core$String* $tmp743 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp742);
frost$core$String* $tmp744 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s745, $tmp743);
frost$core$String* $tmp746 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp744, &$s747);
$fn749 $tmp748 = ($fn749) ((frost$io$OutputStream*) $tmp740)->$class->vtable[19];
frost$core$Error* $tmp750 = $tmp748(((frost$io$OutputStream*) $tmp740), $tmp746);
if ($tmp750 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local0) = $tmp750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$io$File* $tmp751 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp752 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// line 222
frost$io$IndentedOutputStream** $tmp753 = &param0->types;
frost$io$IndentedOutputStream* $tmp754 = *$tmp753;
$fn756 $tmp755 = ($fn756) ((frost$io$OutputStream*) $tmp754)->$class->vtable[19];
frost$core$Error* $tmp757 = $tmp755(((frost$io$OutputStream*) $tmp754), &$s758);
if ($tmp757 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local0) = $tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$io$File* $tmp759 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp760 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// line 223
frost$io$IndentedOutputStream** $tmp761 = &param0->types;
frost$io$IndentedOutputStream* $tmp762 = *$tmp761;
org$frostlang$frostc$Type* $tmp763 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp764 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp763);
frost$core$String* $tmp765 = frost$core$String$get_asString$R$frost$core$String($tmp764);
frost$core$String* $tmp766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp765, &$s767);
org$frostlang$frostc$Type* $tmp768 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp769 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp768);
frost$core$String* $tmp770 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp766, $tmp769);
frost$core$String* $tmp771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp770, &$s772);
frost$core$String* $tmp773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s774, $tmp771);
frost$core$Weak** $tmp775 = &param0->compiler;
frost$core$Weak* $tmp776 = *$tmp775;
frost$core$Object* $tmp777 = frost$core$Weak$get$R$frost$core$Weak$T($tmp776);
frost$collections$ListView* $tmp778 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp777), param1);
ITable* $tmp779 = ((frost$collections$CollectionView*) $tmp778)->$class->itable;
while ($tmp779->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp779 = $tmp779->next;
}
$fn781 $tmp780 = $tmp779->methods[0];
frost$core$Int64 $tmp782 = $tmp780(((frost$collections$CollectionView*) $tmp778));
frost$core$Int64$wrapper* $tmp783;
$tmp783 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp783->value = $tmp782;
frost$core$String* $tmp784 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s785, ((frost$core$Object*) $tmp783));
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp784, &$s787);
frost$core$String* $tmp788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp773, $tmp786);
frost$core$String** $tmp789 = &param1->name;
frost$core$String* $tmp790 = *$tmp789;
frost$core$String* $tmp791 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp790);
frost$core$String* $tmp792 = frost$core$String$get_asString$R$frost$core$String($tmp791);
frost$core$String* $tmp793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp792, &$s794);
frost$core$String* $tmp795 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp788, $tmp793);
$fn797 $tmp796 = ($fn797) ((frost$io$OutputStream*) $tmp762)->$class->vtable[19];
frost$core$Error* $tmp798 = $tmp796(((frost$io$OutputStream*) $tmp762), $tmp795);
if ($tmp798 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local0) = $tmp798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q($tmp777);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$io$File* $tmp799 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp800 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q($tmp777);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// line 227
frost$io$IndentedOutputStream** $tmp801 = &param0->types;
frost$io$IndentedOutputStream* $tmp802 = *$tmp801;
frost$core$String** $tmp803 = &param1->name;
frost$core$String* $tmp804 = *$tmp803;
frost$core$String* $tmp805 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp804);
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s807, $tmp805);
frost$core$String* $tmp808 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp806, &$s809);
frost$core$String** $tmp810 = &param1->name;
frost$core$String* $tmp811 = *$tmp810;
frost$core$String* $tmp812 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp811);
frost$core$String* $tmp813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp808, $tmp812);
frost$core$String* $tmp814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp813, &$s815);
$fn817 $tmp816 = ($fn817) ((frost$io$OutputStream*) $tmp802)->$class->vtable[19];
frost$core$Error* $tmp818 = $tmp816(((frost$io$OutputStream*) $tmp802), $tmp814);
if ($tmp818 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local0) = $tmp818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$io$File* $tmp819 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp820 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// line 228
frost$core$Weak** $tmp821 = &param0->compiler;
frost$core$Weak* $tmp822 = *$tmp821;
frost$core$Object* $tmp823 = frost$core$Weak$get$R$frost$core$Weak$T($tmp822);
frost$core$Bit $tmp824 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp823), param1);
bool $tmp825 = $tmp824.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp823);
if ($tmp825) goto block45; else goto block46;
block45:;
// line 229
frost$io$IndentedOutputStream** $tmp826 = &param0->types;
frost$io$IndentedOutputStream* $tmp827 = *$tmp826;
frost$core$String** $tmp828 = &param1->name;
frost$core$String* $tmp829 = *$tmp828;
frost$core$String* $tmp830 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp829);
frost$core$String* $tmp831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s832, $tmp830);
frost$core$String* $tmp833 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp831, &$s834);
$fn836 $tmp835 = ($fn836) ((frost$io$OutputStream*) $tmp827)->$class->vtable[19];
frost$core$Error* $tmp837 = $tmp835(((frost$io$OutputStream*) $tmp827), $tmp833);
if ($tmp837 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local0) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$io$File* $tmp838 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp839 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// line 230
frost$io$IndentedOutputStream** $tmp840 = &param0->types;
frost$io$IndentedOutputStream* $tmp841 = *$tmp840;
frost$core$Int64* $tmp842 = &$tmp841->level;
frost$core$Int64 $tmp843 = *$tmp842;
frost$core$Int64 $tmp844 = (frost$core$Int64) {1};
int64_t $tmp845 = $tmp843.value;
int64_t $tmp846 = $tmp844.value;
int64_t $tmp847 = $tmp845 + $tmp846;
frost$core$Int64 $tmp848 = (frost$core$Int64) {$tmp847};
frost$core$Int64* $tmp849 = &$tmp841->level;
*$tmp849 = $tmp848;
// line 231
frost$io$IndentedOutputStream** $tmp850 = &param0->types;
frost$io$IndentedOutputStream* $tmp851 = *$tmp850;
$fn853 $tmp852 = ($fn853) ((frost$io$OutputStream*) $tmp851)->$class->vtable[19];
frost$core$Error* $tmp854 = $tmp852(((frost$io$OutputStream*) $tmp851), &$s855);
if ($tmp854 == NULL) goto block49; else goto block50;
block50:;
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
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// line 232
frost$io$IndentedOutputStream** $tmp858 = &param0->types;
frost$io$IndentedOutputStream* $tmp859 = *$tmp858;
$fn861 $tmp860 = ($fn861) ((frost$io$OutputStream*) $tmp859)->$class->vtable[19];
frost$core$Error* $tmp862 = $tmp860(((frost$io$OutputStream*) $tmp859), &$s863);
if ($tmp862 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local0) = $tmp862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$io$File* $tmp864 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp865 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// line 233
frost$io$IndentedOutputStream** $tmp866 = &param0->types;
frost$io$IndentedOutputStream* $tmp867 = *$tmp866;
$fn869 $tmp868 = ($fn869) ((frost$io$OutputStream*) $tmp867)->$class->vtable[19];
frost$core$Error* $tmp870 = $tmp868(((frost$io$OutputStream*) $tmp867), &$s871);
if ($tmp870 == NULL) goto block53; else goto block54;
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local0) = $tmp870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$io$File* $tmp872 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp873 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
// line 234
frost$io$IndentedOutputStream** $tmp874 = &param0->types;
frost$io$IndentedOutputStream* $tmp875 = *$tmp874;
org$frostlang$frostc$Type** $tmp876 = &param1->type;
org$frostlang$frostc$Type* $tmp877 = *$tmp876;
frost$core$String* $tmp878 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp877);
frost$core$String* $tmp879 = frost$core$String$get_asString$R$frost$core$String($tmp878);
frost$core$String* $tmp880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp879, &$s881);
$fn883 $tmp882 = ($fn883) ((frost$io$OutputStream*) $tmp875)->$class->vtable[19];
frost$core$Error* $tmp884 = $tmp882(((frost$io$OutputStream*) $tmp875), $tmp880);
if ($tmp884 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local0) = $tmp884;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$io$File* $tmp885 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp886 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// line 235
frost$io$IndentedOutputStream** $tmp887 = &param0->types;
frost$io$IndentedOutputStream* $tmp888 = *$tmp887;
frost$core$Int64* $tmp889 = &$tmp888->level;
frost$core$Int64 $tmp890 = *$tmp889;
frost$core$Int64 $tmp891 = (frost$core$Int64) {1};
int64_t $tmp892 = $tmp890.value;
int64_t $tmp893 = $tmp891.value;
int64_t $tmp894 = $tmp892 - $tmp893;
frost$core$Int64 $tmp895 = (frost$core$Int64) {$tmp894};
frost$core$Int64* $tmp896 = &$tmp888->level;
*$tmp896 = $tmp895;
// line 236
frost$io$IndentedOutputStream** $tmp897 = &param0->types;
frost$io$IndentedOutputStream* $tmp898 = *$tmp897;
frost$core$String** $tmp899 = &param1->name;
frost$core$String* $tmp900 = *$tmp899;
frost$core$String* $tmp901 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp900);
frost$core$String* $tmp902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s903, $tmp901);
frost$core$String* $tmp904 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp902, &$s905);
$fn907 $tmp906 = ($fn907) ((frost$io$OutputStream*) $tmp898)->$class->vtable[19];
frost$core$Error* $tmp908 = $tmp906(((frost$io$OutputStream*) $tmp898), $tmp904);
if ($tmp908 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local0) = $tmp908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$io$File* $tmp909 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp910 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// line 237
frost$io$IndentedOutputStream** $tmp911 = &param0->types;
frost$io$IndentedOutputStream* $tmp912 = *$tmp911;
frost$core$String** $tmp913 = &param1->name;
frost$core$String* $tmp914 = *$tmp913;
frost$core$String* $tmp915 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp914);
frost$core$String* $tmp916 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s917, $tmp915);
frost$core$String* $tmp918 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp916, &$s919);
$fn921 $tmp920 = ($fn921) ((frost$io$OutputStream*) $tmp912)->$class->vtable[19];
frost$core$Error* $tmp922 = $tmp920(((frost$io$OutputStream*) $tmp912), $tmp918);
if ($tmp922 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local0) = $tmp922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$io$File* $tmp923 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp924 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// line 238
frost$io$IndentedOutputStream** $tmp925 = &param0->types;
frost$io$IndentedOutputStream* $tmp926 = *$tmp925;
frost$core$Int64* $tmp927 = &$tmp926->level;
frost$core$Int64 $tmp928 = *$tmp927;
frost$core$Int64 $tmp929 = (frost$core$Int64) {1};
int64_t $tmp930 = $tmp928.value;
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930 + $tmp931;
frost$core$Int64 $tmp933 = (frost$core$Int64) {$tmp932};
frost$core$Int64* $tmp934 = &$tmp926->level;
*$tmp934 = $tmp933;
// line 239
frost$io$IndentedOutputStream** $tmp935 = &param0->types;
frost$io$IndentedOutputStream* $tmp936 = *$tmp935;
frost$core$String** $tmp937 = &param1->name;
frost$core$String* $tmp938 = *$tmp937;
frost$core$String* $tmp939 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp938);
frost$core$String* $tmp940 = frost$core$String$get_asString$R$frost$core$String($tmp939);
frost$core$String* $tmp941 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp940, &$s942);
$fn944 $tmp943 = ($fn944) ((frost$io$OutputStream*) $tmp936)->$class->vtable[19];
frost$core$Error* $tmp945 = $tmp943(((frost$io$OutputStream*) $tmp936), $tmp941);
if ($tmp945 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local0) = $tmp945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$io$File* $tmp946 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp947 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
// line 240
frost$io$IndentedOutputStream** $tmp948 = &param0->types;
frost$io$IndentedOutputStream* $tmp949 = *$tmp948;
$fn951 $tmp950 = ($fn951) ((frost$io$OutputStream*) $tmp949)->$class->vtable[19];
frost$core$Error* $tmp952 = $tmp950(((frost$io$OutputStream*) $tmp949), &$s953);
if ($tmp952 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local0) = $tmp952;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$io$File* $tmp954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp955 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// line 241
frost$io$IndentedOutputStream** $tmp956 = &param0->types;
frost$io$IndentedOutputStream* $tmp957 = *$tmp956;
frost$core$Int64* $tmp958 = &$tmp957->level;
frost$core$Int64 $tmp959 = *$tmp958;
frost$core$Int64 $tmp960 = (frost$core$Int64) {1};
int64_t $tmp961 = $tmp959.value;
int64_t $tmp962 = $tmp960.value;
int64_t $tmp963 = $tmp961 - $tmp962;
frost$core$Int64 $tmp964 = (frost$core$Int64) {$tmp963};
frost$core$Int64* $tmp965 = &$tmp957->level;
*$tmp965 = $tmp964;
// line 242
frost$io$IndentedOutputStream** $tmp966 = &param0->types;
frost$io$IndentedOutputStream* $tmp967 = *$tmp966;
frost$core$String** $tmp968 = &param1->name;
frost$core$String* $tmp969 = *$tmp968;
frost$core$String* $tmp970 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp969);
frost$core$String* $tmp971 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s972, $tmp970);
frost$core$String* $tmp973 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp971, &$s974);
$fn976 $tmp975 = ($fn976) ((frost$io$OutputStream*) $tmp967)->$class->vtable[19];
frost$core$Error* $tmp977 = $tmp975(((frost$io$OutputStream*) $tmp967), $tmp973);
if ($tmp977 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local0) = $tmp977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$io$File* $tmp978 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp979 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
// line 243
frost$core$Weak** $tmp980 = &param0->compiler;
frost$core$Weak* $tmp981 = *$tmp980;
frost$core$Object* $tmp982 = frost$core$Weak$get$R$frost$core$Weak$T($tmp981);
org$frostlang$frostc$Type* $tmp983 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp984 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp982), $tmp983);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
org$frostlang$frostc$ClassDecl* $tmp985 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local4) = $tmp984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$core$Frost$unref$frost$core$Object$Q($tmp982);
// line 244
frost$core$Weak** $tmp986 = &param0->compiler;
frost$core$Weak* $tmp987 = *$tmp986;
frost$core$Object* $tmp988 = frost$core$Weak$get$R$frost$core$Weak$T($tmp987);
org$frostlang$frostc$ClassDecl* $tmp989 = *(&local4);
frost$collections$ListView* $tmp990 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp988), $tmp989);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$collections$ListView* $tmp991 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local5) = $tmp990;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$Frost$unref$frost$core$Object$Q($tmp988);
// line 245
frost$io$IndentedOutputStream** $tmp992 = &param0->types;
frost$io$IndentedOutputStream* $tmp993 = *$tmp992;
frost$collections$ListView* $tmp994 = *(&local5);
ITable* $tmp995 = ((frost$collections$CollectionView*) $tmp994)->$class->itable;
while ($tmp995->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp995 = $tmp995->next;
}
$fn997 $tmp996 = $tmp995->methods[0];
frost$core$Int64 $tmp998 = $tmp996(((frost$collections$CollectionView*) $tmp994));
frost$core$Int64$wrapper* $tmp999;
$tmp999 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp999->value = $tmp998;
frost$core$String* $tmp1000 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1001, ((frost$core$Object*) $tmp999));
frost$core$String* $tmp1002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1000, &$s1003);
frost$core$String* $tmp1004 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1005, $tmp1002);
frost$core$String** $tmp1006 = &param1->name;
frost$core$String* $tmp1007 = *$tmp1006;
frost$core$String* $tmp1008 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1007);
frost$core$String* $tmp1009 = frost$core$String$get_asString$R$frost$core$String($tmp1008);
frost$core$String* $tmp1010 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1009, &$s1011);
frost$core$String* $tmp1012 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1004, $tmp1010);
$fn1014 $tmp1013 = ($fn1014) ((frost$io$OutputStream*) $tmp993)->$class->vtable[19];
frost$core$Error* $tmp1015 = $tmp1013(((frost$io$OutputStream*) $tmp993), $tmp1012);
if ($tmp1015 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local0) = $tmp1015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$collections$ListView* $tmp1016 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1017 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1018 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1019 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// line 249
frost$io$IndentedOutputStream** $tmp1020 = &param0->types;
frost$io$IndentedOutputStream* $tmp1021 = *$tmp1020;
frost$core$String** $tmp1022 = &param1->name;
frost$core$String* $tmp1023 = *$tmp1022;
frost$core$String* $tmp1024 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1023);
frost$core$String* $tmp1025 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1026, $tmp1024);
frost$core$String* $tmp1027 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1025, &$s1028);
frost$core$String** $tmp1029 = &param1->name;
frost$core$String* $tmp1030 = *$tmp1029;
frost$core$String* $tmp1031 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1030);
frost$core$String* $tmp1032 = frost$core$String$get_asString$R$frost$core$String($tmp1031);
frost$core$String* $tmp1033 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1032, &$s1034);
frost$core$String* $tmp1035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1027, $tmp1033);
$fn1037 $tmp1036 = ($fn1037) ((frost$io$OutputStream*) $tmp1021)->$class->vtable[19];
frost$core$Error* $tmp1038 = $tmp1036(((frost$io$OutputStream*) $tmp1021), $tmp1035);
if ($tmp1038 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local0) = $tmp1038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$collections$ListView* $tmp1039 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1040 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1041 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1042 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$collections$ListView* $tmp1043 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1044 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block46;
block46:;
frost$io$File* $tmp1045 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1046 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 254
frost$core$Weak** $tmp1047 = &param0->compiler;
frost$core$Weak* $tmp1048 = *$tmp1047;
frost$core$Object* $tmp1049 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1048);
org$frostlang$frostc$Position* $tmp1050 = &param1->position;
org$frostlang$frostc$Position $tmp1051 = *$tmp1050;
frost$core$Error* $tmp1052 = *(&local0);
frost$core$String** $tmp1053 = &$tmp1052->message;
frost$core$String* $tmp1054 = *$tmp1053;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1049), $tmp1051, $tmp1054);
frost$core$Frost$unref$frost$core$Object$Q($tmp1049);
goto block2;
block2:;
frost$core$Error* $tmp1055 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 259
frost$core$Weak** $tmp1056 = &param1->owner;
frost$core$Weak* $tmp1057 = *$tmp1056;
frost$core$Object* $tmp1058 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1057);
org$frostlang$frostc$Type** $tmp1059 = &((org$frostlang$frostc$ClassDecl*) $tmp1058)->type;
org$frostlang$frostc$Type* $tmp1060 = *$tmp1059;
frost$core$String* $tmp1061 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1060);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$String* $tmp1062 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local0) = $tmp1061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q($tmp1058);
// line 260
org$frostlang$frostc$MethodDecl$Kind* $tmp1063 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1064 = *$tmp1063;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1065;
$tmp1065 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1065->value = $tmp1064;
frost$core$Int64 $tmp1066 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1067 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1066);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1068;
$tmp1068 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1068->value = $tmp1067;
ITable* $tmp1069 = ((frost$core$Equatable*) $tmp1065)->$class->itable;
while ($tmp1069->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[0];
frost$core$Bit $tmp1072 = $tmp1070(((frost$core$Equatable*) $tmp1065), ((frost$core$Equatable*) $tmp1068));
bool $tmp1073 = $tmp1072.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1068)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1065)));
if ($tmp1073) goto block3; else goto block2;
block3:;
frost$core$String* $tmp1074 = *(&local0);
frost$core$Bit $tmp1075 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1074, &$s1076);
frost$core$Bit $tmp1077 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1075);
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block1; else goto block2;
block1:;
// line 261
frost$core$String* $tmp1079 = *(&local0);
frost$core$String* $tmp1080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1079, &$s1081);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$String* $tmp1082 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1080;
block2:;
// line 263
frost$core$String* $tmp1083 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$String* $tmp1084 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1083;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 283
org$frostlang$frostc$Type** $tmp1085 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1086 = *$tmp1085;
frost$core$Bit $tmp1087 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1086);
frost$core$Bit $tmp1088 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1087);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block1; else goto block2;
block1:;
// line 284
frost$core$Bit $tmp1090 = frost$core$Bit$init$builtin_bit(false);
return $tmp1090;
block2:;
// line 286
org$frostlang$frostc$Annotations** $tmp1091 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1092 = *$tmp1091;
frost$core$Bit $tmp1093 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1092);
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1095 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1096 = *$tmp1095;
frost$core$Bit $tmp1097 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1096);
*(&local1) = $tmp1097;
goto block5;
block4:;
*(&local1) = $tmp1093;
goto block5;
block5:;
frost$core$Bit $tmp1098 = *(&local1);
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1100 = &param0->compiler;
frost$core$Weak* $tmp1101 = *$tmp1100;
frost$core$Object* $tmp1102 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1101);
frost$core$Weak** $tmp1103 = &param0->compiler;
frost$core$Weak* $tmp1104 = *$tmp1103;
frost$core$Object* $tmp1105 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1104);
org$frostlang$frostc$Type** $tmp1106 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1107 = *$tmp1106;
org$frostlang$frostc$ClassDecl* $tmp1108 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1105), $tmp1107);
frost$core$Bit $tmp1109 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1102), $tmp1108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$core$Frost$unref$frost$core$Object$Q($tmp1105);
frost$core$Frost$unref$frost$core$Object$Q($tmp1102);
*(&local0) = $tmp1109;
goto block8;
block7:;
*(&local0) = $tmp1098;
goto block8;
block8:;
frost$core$Bit $tmp1110 = *(&local0);
*(&local2) = $tmp1110;
// line 292
frost$core$Bit $tmp1111 = *(&local2);
frost$core$Bit $tmp1112 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1111);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block9; else goto block10;
block9:;
*(&local3) = $tmp1112;
goto block11;
block10:;
org$frostlang$frostc$Annotations** $tmp1114 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1115 = *$tmp1114;
frost$core$Bit $tmp1116 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1115);
frost$core$Bit $tmp1117 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1116);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Annotations** $tmp1119 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1120 = *$tmp1119;
frost$core$Bit $tmp1121 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1120);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block15; else goto block16;
block15:;
*(&local5) = $tmp1121;
goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1123 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1124 = *$tmp1123;
frost$core$Bit $tmp1125 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1124);
*(&local5) = $tmp1125;
goto block17;
block17:;
frost$core$Bit $tmp1126 = *(&local5);
*(&local4) = $tmp1126;
goto block14;
block13:;
*(&local4) = $tmp1117;
goto block14;
block14:;
frost$core$Bit $tmp1127 = *(&local4);
*(&local3) = $tmp1127;
goto block11;
block11:;
frost$core$Bit $tmp1128 = *(&local3);
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1130 = (frost$core$Int64) {292};
frost$core$String* $tmp1131 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1133, $tmp1131);
frost$core$String* $tmp1134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1132, &$s1135);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1136, $tmp1130, $tmp1134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
abort(); // unreachable
block18:;
// line 294
frost$core$Bit $tmp1137 = *(&local2);
return $tmp1137;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
frost$core$String* local3 = NULL;
// line 299
*(&local0) = ((frost$core$Error*) NULL);
// line 300
frost$io$MemoryOutputStream** $tmp1138 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1139 = *$tmp1138;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$io$MemoryOutputStream** $tmp1140 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1141 = *$tmp1140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$io$MemoryOutputStream** $tmp1142 = &param0->importStream;
*$tmp1142 = $tmp1139;
// line 301
frost$collections$HashSet** $tmp1143 = &param0->bodyImports;
frost$collections$HashSet* $tmp1144 = *$tmp1143;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$collections$HashSet** $tmp1145 = &param0->imports;
frost$collections$HashSet* $tmp1146 = *$tmp1145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$collections$HashSet** $tmp1147 = &param0->imports;
*$tmp1147 = $tmp1144;
// line 302
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1148));
frost$core$String* $tmp1149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local1) = &$s1150;
// line 303
frost$core$Bit $tmp1151 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block3; else goto block5;
block3:;
// line 304
frost$io$IndentedOutputStream** $tmp1153 = &param0->body;
frost$io$IndentedOutputStream* $tmp1154 = *$tmp1153;
frost$core$String* $tmp1155 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1157, $tmp1155);
frost$core$String* $tmp1158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1156, &$s1159);
org$frostlang$frostc$Type** $tmp1160 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1161 = *$tmp1160;
frost$core$String* $tmp1162 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1161);
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1158, $tmp1162);
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1163, &$s1165);
$fn1167 $tmp1166 = ($fn1167) ((frost$io$OutputStream*) $tmp1154)->$class->vtable[17];
frost$core$Error* $tmp1168 = $tmp1166(((frost$io$OutputStream*) $tmp1154), $tmp1164);
if ($tmp1168 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local0) = $tmp1168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
frost$core$String* $tmp1169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// line 305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1170));
frost$core$String* $tmp1171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local1) = &$s1172;
goto block4;
block5:;
// line 1
// line 308
frost$io$IndentedOutputStream** $tmp1173 = &param0->body;
frost$io$IndentedOutputStream* $tmp1174 = *$tmp1173;
org$frostlang$frostc$Type** $tmp1175 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1176 = *$tmp1175;
frost$core$String* $tmp1177 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1176);
frost$core$String* $tmp1178 = frost$core$String$get_asString$R$frost$core$String($tmp1177);
frost$core$String* $tmp1179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1178, &$s1180);
frost$core$String* $tmp1181 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1179, $tmp1181);
frost$core$String* $tmp1183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1182, &$s1184);
$fn1186 $tmp1185 = ($fn1186) ((frost$io$OutputStream*) $tmp1174)->$class->vtable[17];
frost$core$Error* $tmp1187 = $tmp1185(((frost$io$OutputStream*) $tmp1174), $tmp1183);
if ($tmp1187 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
*(&local0) = $tmp1187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$String* $tmp1188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
goto block4;
block4:;
// line 310
org$frostlang$frostc$Annotations** $tmp1189 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1190 = *$tmp1189;
frost$core$Bit $tmp1191 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1190);
frost$core$Bit $tmp1192 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1191);
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block12; else goto block11;
block12:;
frost$core$Weak** $tmp1194 = &param0->compiler;
frost$core$Weak* $tmp1195 = *$tmp1194;
frost$core$Object* $tmp1196 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1195);
frost$core$Bit $tmp1197 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1196), param1);
frost$core$Bit $tmp1198 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1197);
bool $tmp1199 = $tmp1198.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1196);
if ($tmp1199) goto block10; else goto block11;
block10:;
// line 311
frost$io$IndentedOutputStream** $tmp1200 = &param0->body;
frost$io$IndentedOutputStream* $tmp1201 = *$tmp1200;
frost$core$String* $tmp1202 = *(&local1);
frost$core$String* $tmp1203 = frost$core$String$get_asString$R$frost$core$String($tmp1202);
frost$core$String* $tmp1204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1203, &$s1205);
frost$core$String* $tmp1206 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1204, $tmp1206);
frost$core$String* $tmp1208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1207, &$s1209);
$fn1211 $tmp1210 = ($fn1211) ((frost$io$OutputStream*) $tmp1201)->$class->vtable[17];
frost$core$Error* $tmp1212 = $tmp1210(((frost$io$OutputStream*) $tmp1201), $tmp1208);
if ($tmp1212 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local0) = $tmp1212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$String* $tmp1213 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// line 312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1214));
frost$core$String* $tmp1215 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local1) = &$s1216;
goto block11;
block11:;
// line 314
frost$collections$Array** $tmp1217 = &param1->parameters;
frost$collections$Array* $tmp1218 = *$tmp1217;
ITable* $tmp1219 = ((frost$collections$Iterable*) $tmp1218)->$class->itable;
while ($tmp1219->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1219 = $tmp1219->next;
}
$fn1221 $tmp1220 = $tmp1219->methods[0];
frost$collections$Iterator* $tmp1222 = $tmp1220(((frost$collections$Iterable*) $tmp1218));
goto block15;
block15:;
ITable* $tmp1223 = $tmp1222->$class->itable;
while ($tmp1223->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1223 = $tmp1223->next;
}
$fn1225 $tmp1224 = $tmp1223->methods[0];
frost$core$Bit $tmp1226 = $tmp1224($tmp1222);
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block17; else goto block16;
block16:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1228 = $tmp1222->$class->itable;
while ($tmp1228->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1228 = $tmp1228->next;
}
$fn1230 $tmp1229 = $tmp1228->methods[1];
frost$core$Object* $tmp1231 = $tmp1229($tmp1222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1231)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1232 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1231);
// line 315
org$frostlang$frostc$MethodDecl$Parameter* $tmp1233 = *(&local2);
frost$core$String** $tmp1234 = &$tmp1233->name;
frost$core$String* $tmp1235 = *$tmp1234;
frost$core$String* $tmp1236 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1235);
frost$core$String* $tmp1237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1238, $tmp1236);
frost$core$String* $tmp1239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1237, &$s1240);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
frost$core$String* $tmp1241 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local3) = $tmp1239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// line 316
frost$io$IndentedOutputStream** $tmp1242 = &param0->body;
frost$io$IndentedOutputStream* $tmp1243 = *$tmp1242;
frost$core$String* $tmp1244 = *(&local1);
frost$core$String* $tmp1245 = frost$core$String$get_asString$R$frost$core$String($tmp1244);
frost$core$String* $tmp1246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1245, &$s1247);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1248 = *(&local2);
org$frostlang$frostc$Type** $tmp1249 = &$tmp1248->type;
org$frostlang$frostc$Type* $tmp1250 = *$tmp1249;
frost$core$String* $tmp1251 = *(&local3);
frost$core$String* $tmp1252 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1250, $tmp1251);
frost$core$String* $tmp1253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1246, $tmp1252);
frost$core$String* $tmp1254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1253, &$s1255);
$fn1257 $tmp1256 = ($fn1257) ((frost$io$OutputStream*) $tmp1243)->$class->vtable[17];
frost$core$Error* $tmp1258 = $tmp1256(((frost$io$OutputStream*) $tmp1243), $tmp1254);
if ($tmp1258 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local0) = $tmp1258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$String* $tmp1259 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1231);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1260 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
frost$core$String* $tmp1261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
// line 317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1262));
frost$core$String* $tmp1263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local1) = &$s1264;
frost$core$String* $tmp1265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1231);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
// line 319
frost$io$IndentedOutputStream** $tmp1267 = &param0->body;
frost$io$IndentedOutputStream* $tmp1268 = *$tmp1267;
$fn1270 $tmp1269 = ($fn1270) ((frost$io$OutputStream*) $tmp1268)->$class->vtable[19];
frost$core$Error* $tmp1271 = $tmp1269(((frost$io$OutputStream*) $tmp1268), &$s1272);
if ($tmp1271 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local0) = $tmp1271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$String* $tmp1273 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$String* $tmp1274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 322
frost$core$Int64 $tmp1275 = (frost$core$Int64) {322};
frost$core$Error* $tmp1276 = *(&local0);
$fn1278 $tmp1277 = ($fn1278) ((frost$core$Object*) $tmp1276)->$class->vtable[0];
frost$core$String* $tmp1279 = $tmp1277(((frost$core$Object*) $tmp1276));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1280, $tmp1275, $tmp1279);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
abort(); // unreachable
block2:;
frost$core$Error* $tmp1281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

// line 328
org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
// line 333
*(&local0) = ((frost$core$Error*) NULL);
// line 334
frost$io$IndentedOutputStream** $tmp1282 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1283 = *$tmp1282;
frost$io$MemoryOutputStream** $tmp1284 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1285 = *$tmp1284;
$fn1287 $tmp1286 = ($fn1287) ((frost$io$OutputStream*) $tmp1283)->$class->vtable[20];
frost$core$Error* $tmp1288 = $tmp1286(((frost$io$OutputStream*) $tmp1283), ((frost$core$Object*) $tmp1285));
if ($tmp1288 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local0) = $tmp1288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
// line 335
frost$io$IndentedOutputStream** $tmp1289 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1290 = *$tmp1289;
frost$io$MemoryOutputStream** $tmp1291 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1292 = *$tmp1291;
$fn1294 $tmp1293 = ($fn1294) ((frost$io$OutputStream*) $tmp1290)->$class->vtable[20];
frost$core$Error* $tmp1295 = $tmp1293(((frost$io$OutputStream*) $tmp1290), ((frost$core$Object*) $tmp1292));
if ($tmp1295 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local0) = $tmp1295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// line 336
frost$io$IndentedOutputStream** $tmp1296 = &param0->out;
frost$io$IndentedOutputStream* $tmp1297 = *$tmp1296;
frost$io$MemoryOutputStream** $tmp1298 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1299 = *$tmp1298;
$fn1301 $tmp1300 = ($fn1301) ((frost$io$OutputStream*) $tmp1297)->$class->vtable[20];
frost$core$Error* $tmp1302 = $tmp1300(((frost$io$OutputStream*) $tmp1297), ((frost$core$Object*) $tmp1299));
if ($tmp1302 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local0) = $tmp1302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
// line 337
frost$io$IndentedOutputStream** $tmp1303 = &param0->out;
frost$io$IndentedOutputStream* $tmp1304 = *$tmp1303;
frost$io$MemoryOutputStream** $tmp1305 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1306 = *$tmp1305;
$fn1308 $tmp1307 = ($fn1308) ((frost$io$OutputStream*) $tmp1304)->$class->vtable[20];
frost$core$Error* $tmp1309 = $tmp1307(((frost$io$OutputStream*) $tmp1304), ((frost$core$Object*) $tmp1306));
if ($tmp1309 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local0) = $tmp1309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
goto block2;
block1:;
// line 340
frost$core$Error* $tmp1310 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp1310));
// line 341
frost$core$Int64 $tmp1311 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp1311);
goto block2;
block2:;
frost$core$Error* $tmp1312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1313 = &param0->compiler;
frost$core$Weak* $tmp1314 = *$tmp1313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$io$MemoryOutputStream** $tmp1315 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1316 = *$tmp1315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$io$MemoryOutputStream** $tmp1317 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1318 = *$tmp1317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$io$IndentedOutputStream** $tmp1319 = &param0->types;
frost$io$IndentedOutputStream* $tmp1320 = *$tmp1319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$io$MemoryOutputStream** $tmp1321 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1322 = *$tmp1321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$io$MemoryOutputStream** $tmp1323 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1324 = *$tmp1323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
frost$io$IndentedOutputStream** $tmp1325 = &param0->body;
frost$io$IndentedOutputStream* $tmp1326 = *$tmp1325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$collections$HashSet** $tmp1327 = &param0->typeImports;
frost$collections$HashSet* $tmp1328 = *$tmp1327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$collections$HashSet** $tmp1329 = &param0->bodyImports;
frost$collections$HashSet* $tmp1330 = *$tmp1329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
frost$collections$HashSet** $tmp1331 = &param0->imports;
frost$collections$HashSet* $tmp1332 = *$tmp1331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$io$MemoryOutputStream** $tmp1333 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1334 = *$tmp1333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$io$File** $tmp1335 = &param0->outDir;
frost$io$File* $tmp1336 = *$tmp1335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$io$IndentedOutputStream** $tmp1337 = &param0->out;
frost$io$IndentedOutputStream* $tmp1338 = *$tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$io$IndentedOutputStream** $tmp1339 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1340 = *$tmp1339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1341 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1342 = *$tmp1341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
frost$core$Weak** $tmp1343 = &param0->cCodeGen;
frost$core$Weak* $tmp1344 = *$tmp1343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
org$frostlang$frostc$CCodeGenerator** $tmp1345 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1346 = *$tmp1345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
return;

}

