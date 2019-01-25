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
typedef frost$core$Error* (*$fn381)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn414)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn556)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn564)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn578)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn585)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn593)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn618)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn638)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn642)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn647)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn678)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn699)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn713)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn721)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn746)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn753)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn778)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn794)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn814)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn833)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn850)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn858)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn872)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn896)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn910)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn933)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn940)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn965)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn986)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1003)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1026)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1060)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1156)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1175)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1200)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1210)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1214)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1219)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1246)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1259)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1267)(frost$core$Object*);
typedef frost$core$Error* (*$fn1276)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1283)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1290)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1297)(frost$io$OutputStream*, frost$core$Object*);

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
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s994 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };

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
org$frostlang$frostc$FixedArray** $tmp295 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp296 = *$tmp295;
frost$core$Int64 $tmp297 = (frost$core$Int64) {0};
frost$core$Object* $tmp298 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp296, $tmp297);
frost$core$String* $tmp299 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp298));
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp299, &$s301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
org$frostlang$frostc$ClassDecl* $tmp302 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp303 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp300;
block38:;
// line 118
org$frostlang$frostc$FixedArray** $tmp304 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp305 = *$tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {0};
frost$core$Object* $tmp307 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp305, $tmp306);
frost$core$String* $tmp308 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp307));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
org$frostlang$frostc$ClassDecl* $tmp309 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp310 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp308;
block34:;
frost$core$Int64 $tmp311 = (frost$core$Int64) {10};
frost$core$Bit $tmp312 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp311);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block39; else goto block40;
block39:;
// line 121
org$frostlang$frostc$FixedArray** $tmp314 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp315 = *$tmp314;
frost$core$Int64 $tmp316 = (frost$core$Int64) {0};
frost$core$Object* $tmp317 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp315, $tmp316);
frost$core$String** $tmp318 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp317))->name;
frost$core$String* $tmp319 = *$tmp318;
frost$core$Bit $tmp320 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp319, &$s321);
bool $tmp322 = $tmp320.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp317);
if ($tmp322) goto block41; else goto block42;
block41:;
// line 122
org$frostlang$frostc$FixedArray** $tmp323 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp324 = *$tmp323;
frost$core$Int64 $tmp325 = (frost$core$Int64) {1};
frost$core$Object* $tmp326 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp324, $tmp325);
frost$core$String* $tmp327 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp326));
frost$core$String* $tmp328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp327, &$s329);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
frost$core$Error* $tmp330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp328;
block42:;
// line 124
frost$core$Weak** $tmp331 = &param0->compiler;
frost$core$Weak* $tmp332 = *$tmp331;
frost$core$Object* $tmp333 = frost$core$Weak$get$R$frost$core$Weak$T($tmp332);
org$frostlang$frostc$ClassDecl* $tmp334 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp333), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
org$frostlang$frostc$ClassDecl* $tmp335 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local5) = $tmp334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q($tmp333);
// line 125
org$frostlang$frostc$ClassDecl* $tmp336 = *(&local5);
frost$core$Bit $tmp337 = org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp336);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block43; else goto block44;
block43:;
// line 126
frost$core$String** $tmp339 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp340 = *$tmp339;
frost$core$String* $tmp341 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp340);
frost$core$String* $tmp342 = frost$core$String$get_asString$R$frost$core$String($tmp341);
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, &$s344);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$String* $tmp345 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local6) = $tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// line 127
frost$core$Weak** $tmp346 = &param0->compiler;
frost$core$Weak* $tmp347 = *$tmp346;
frost$core$Object* $tmp348 = frost$core$Weak$get$R$frost$core$Weak$T($tmp347);
org$frostlang$frostc$ClassDecl* $tmp349 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp348), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
org$frostlang$frostc$ClassDecl* $tmp350 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local7) = $tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$core$Frost$unref$frost$core$Object$Q($tmp348);
// line 128
org$frostlang$frostc$ClassDecl* $tmp351 = *(&local7);
frost$core$Bit $tmp352 = frost$core$Bit$init$builtin_bit($tmp351 != NULL);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp354 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s355, $tmp354);
abort(); // unreachable
block45:;
// line 129
frost$core$Weak** $tmp356 = &param0->compiler;
frost$core$Weak* $tmp357 = *$tmp356;
frost$core$Object* $tmp358 = frost$core$Weak$get$R$frost$core$Weak$T($tmp357);
org$frostlang$frostc$ClassDecl* $tmp359 = *(&local7);
frost$core$Bit $tmp360 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp358), $tmp359);
frost$core$Bit $tmp361 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp360);
bool $tmp362 = $tmp361.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp358);
if ($tmp362) goto block47; else goto block48;
block47:;
// line 130
frost$collections$HashSet** $tmp363 = &param0->imports;
frost$collections$HashSet* $tmp364 = *$tmp363;
frost$core$String* $tmp365 = *(&local6);
frost$core$Bit $tmp366 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp364, ((frost$collections$Key*) $tmp365));
frost$core$Bit $tmp367 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block49; else goto block50;
block49:;
// line 131
frost$io$MemoryOutputStream** $tmp369 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp370 = *$tmp369;
frost$core$String* $tmp371 = *(&local6);
frost$core$String* $tmp372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s373, $tmp371);
frost$core$String* $tmp374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp372, &$s375);
frost$core$String* $tmp376 = *(&local6);
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp374, $tmp376);
frost$core$String* $tmp378 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp377, &$s379);
$fn381 $tmp380 = ($fn381) ((frost$io$OutputStream*) $tmp370)->$class->vtable[19];
frost$core$Error* $tmp382 = $tmp380(((frost$io$OutputStream*) $tmp370), $tmp378);
if ($tmp382 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local0) = $tmp382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$ClassDecl* $tmp383 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp384 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp385 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// line 132
frost$collections$HashSet** $tmp386 = &param0->imports;
frost$collections$HashSet* $tmp387 = *$tmp386;
frost$core$String* $tmp388 = *(&local6);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp387, ((frost$collections$Key*) $tmp388));
goto block50;
block50:;
// line 134
frost$core$String* $tmp389 = *(&local6);
frost$core$String* $tmp390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp389, &$s391);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
org$frostlang$frostc$ClassDecl* $tmp392 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp393 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp394 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp395 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp390;
block48:;
// line 136
org$frostlang$frostc$ClassDecl* $tmp396 = *(&local7);
frost$core$String* $tmp397 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp396, &$s398);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$String* $tmp399 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local8) = $tmp397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// line 137
frost$collections$HashSet** $tmp400 = &param0->imports;
frost$collections$HashSet* $tmp401 = *$tmp400;
frost$core$String* $tmp402 = *(&local8);
frost$core$Bit $tmp403 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp401, ((frost$collections$Key*) $tmp402));
frost$core$Bit $tmp404 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp403);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block53; else goto block54;
block53:;
// line 138
frost$io$MemoryOutputStream** $tmp406 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp407 = *$tmp406;
frost$core$String* $tmp408 = *(&local8);
frost$core$String* $tmp409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s410, $tmp408);
frost$core$String* $tmp411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp409, &$s412);
$fn414 $tmp413 = ($fn414) ((frost$io$OutputStream*) $tmp407)->$class->vtable[19];
frost$core$Error* $tmp415 = $tmp413(((frost$io$OutputStream*) $tmp407), $tmp411);
if ($tmp415 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local0) = $tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$String* $tmp416 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp417 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp418 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp419 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// line 139
frost$collections$HashSet** $tmp420 = &param0->imports;
frost$collections$HashSet* $tmp421 = *$tmp420;
frost$core$String* $tmp422 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp421, ((frost$collections$Key*) $tmp422));
goto block54;
block54:;
// line 141
frost$core$String* $tmp423 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$String* $tmp424 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp425 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp426 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp427 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp428 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp423;
block44:;
// line 143
org$frostlang$frostc$FixedArray** $tmp429 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp430 = *$tmp429;
frost$core$Int64 $tmp431 = (frost$core$Int64) {0};
frost$core$Object* $tmp432 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp430, $tmp431);
frost$core$String* $tmp433 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp432));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q($tmp432);
org$frostlang$frostc$ClassDecl* $tmp434 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp435 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp433;
block40:;
frost$core$Int64 $tmp436 = (frost$core$Int64) {11};
frost$core$Bit $tmp437 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp436);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block57; else goto block58;
block57:;
// line 146
frost$core$Weak** $tmp439 = &param1->genericClassParameter;
frost$core$Weak* $tmp440 = *$tmp439;
frost$core$Object* $tmp441 = frost$core$Weak$get$R$frost$core$Weak$T($tmp440);
org$frostlang$frostc$Type** $tmp442 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp441)->bound;
org$frostlang$frostc$Type* $tmp443 = *$tmp442;
frost$core$String* $tmp444 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q($tmp441);
frost$core$Error* $tmp445 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp444;
block58:;
frost$core$Int64 $tmp446 = (frost$core$Int64) {12};
frost$core$Bit $tmp447 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block59; else goto block60;
block59:;
// line 149
frost$core$Weak** $tmp449 = &param1->genericMethodParameter;
frost$core$Weak* $tmp450 = *$tmp449;
frost$core$Object* $tmp451 = frost$core$Weak$get$R$frost$core$Weak$T($tmp450);
org$frostlang$frostc$Type** $tmp452 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp451)->bound;
org$frostlang$frostc$Type* $tmp453 = *$tmp452;
frost$core$String* $tmp454 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp453);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
frost$core$Error* $tmp455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp454;
block60:;
frost$core$Int64 $tmp456 = (frost$core$Int64) {14};
frost$core$Bit $tmp457 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp459 = (frost$core$Int64) {15};
frost$core$Bit $tmp460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block61; else goto block63;
block61:;
// line 152
org$frostlang$frostc$Type* $tmp462 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp463 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp462);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Error* $tmp464 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp463;
block63:;
frost$core$Int64 $tmp465 = (frost$core$Int64) {16};
frost$core$Bit $tmp466 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp465);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {17};
frost$core$Bit $tmp469 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp468);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block64; else goto block66;
block64:;
// line 155
org$frostlang$frostc$Type* $tmp471 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp472 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp471);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Error* $tmp473 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp472;
block66:;
// line 158
frost$core$Int64 $tmp474 = (frost$core$Int64) {158};
frost$core$String* $tmp475 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s476, ((frost$core$Object*) param1));
frost$core$String* $tmp477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp475, &$s478);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s479, $tmp474, $tmp477);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
abort(); // unreachable
block3:;
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp480 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local0) = ((frost$core$Error*) NULL);
// line 164
frost$core$Int64 $tmp481 = (frost$core$Int64) {164};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s482, $tmp481);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// line 168
frost$core$String* $tmp483 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp484 = frost$core$String$get_asString$R$frost$core$String($tmp483);
frost$core$String* $tmp485 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp484, &$s486);
frost$core$String* $tmp487 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp485, param2);
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp487, &$s489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
return $tmp488;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 173
frost$core$Weak* $tmp490 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp490, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Weak** $tmp491 = &param0->compiler;
frost$core$Weak* $tmp492 = *$tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Weak** $tmp493 = &param0->compiler;
*$tmp493 = $tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// line 174
org$frostlang$frostc$LLVMCodeGenerator** $tmp494 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp495 = *$tmp494;
org$frostlang$frostc$LLVMCodeGenerator$setCompiler$org$frostlang$frostc$Compiler($tmp495, param1);
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 178
frost$io$File** $tmp496 = &param0->outDir;
frost$io$File* $tmp497 = *$tmp496;
frost$core$String* $tmp498 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp499 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp497, $tmp498);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
return $tmp499;

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
frost$io$MemoryOutputStream** $tmp500 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp501 = *$tmp500;
frost$io$MemoryOutputStream$clear($tmp501);
// line 185
frost$io$MemoryOutputStream** $tmp502 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp503 = *$tmp502;
frost$io$MemoryOutputStream$clear($tmp503);
// line 186
frost$io$MemoryOutputStream** $tmp504 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp505 = *$tmp504;
frost$io$MemoryOutputStream$clear($tmp505);
// line 187
frost$io$MemoryOutputStream** $tmp506 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp507 = *$tmp506;
frost$io$MemoryOutputStream$clear($tmp507);
// line 188
frost$collections$HashSet** $tmp508 = &param0->typeImports;
frost$collections$HashSet* $tmp509 = *$tmp508;
frost$collections$HashSet$clear($tmp509);
// line 189
frost$collections$HashSet** $tmp510 = &param0->bodyImports;
frost$collections$HashSet* $tmp511 = *$tmp510;
frost$collections$HashSet$clear($tmp511);
// line 190
frost$io$File* $tmp512 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s513);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$io$File* $tmp514 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local1) = $tmp512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// line 191
frost$io$File* $tmp515 = *(&local1);
frost$io$File* $tmp516 = frost$io$File$get_parent$R$frost$io$File$Q($tmp515);
frost$core$Error* $tmp517 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp516);
if ($tmp517 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local0) = $tmp517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$io$File* $tmp518 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// line 192
frost$io$IndentedOutputStream* $tmp519 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp520 = *(&local1);
frost$core$Maybe* $tmp521 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp520);
frost$core$Int64* $tmp522 = &$tmp521->$rawValue;
frost$core$Int64 $tmp523 = *$tmp522;
int64_t $tmp524 = $tmp523.value;
bool $tmp525 = $tmp524 == 0;
if ($tmp525) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp526 = (frost$core$Error**) ($tmp521->$data + 0);
frost$core$Error* $tmp527 = *$tmp526;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local0) = $tmp527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$io$File* $tmp528 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Object** $tmp529 = (frost$core$Object**) ($tmp521->$data + 0);
frost$core$Object* $tmp530 = *$tmp529;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp519, ((frost$io$OutputStream*) $tmp530));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$io$IndentedOutputStream** $tmp531 = &param0->out;
frost$io$IndentedOutputStream* $tmp532 = *$tmp531;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$io$IndentedOutputStream** $tmp533 = &param0->out;
*$tmp533 = $tmp519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// line 193
frost$io$File* $tmp534 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s535);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$io$File* $tmp536 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local2) = $tmp534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// line 194
frost$io$IndentedOutputStream* $tmp537 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp538 = *(&local2);
frost$core$Maybe* $tmp539 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp538);
frost$core$Int64* $tmp540 = &$tmp539->$rawValue;
frost$core$Int64 $tmp541 = *$tmp540;
int64_t $tmp542 = $tmp541.value;
bool $tmp543 = $tmp542 == 0;
if ($tmp543) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp544 = (frost$core$Error**) ($tmp539->$data + 0);
frost$core$Error* $tmp545 = *$tmp544;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local0) = $tmp545;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$io$File* $tmp546 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp547 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp548 = (frost$core$Object**) ($tmp539->$data + 0);
frost$core$Object* $tmp549 = *$tmp548;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp537, ((frost$io$OutputStream*) $tmp549));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$io$IndentedOutputStream** $tmp550 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp551 = *$tmp550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$io$IndentedOutputStream** $tmp552 = &param0->typesOut;
*$tmp552 = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// line 195
frost$io$IndentedOutputStream** $tmp553 = &param0->out;
frost$io$IndentedOutputStream* $tmp554 = *$tmp553;
$fn556 $tmp555 = ($fn556) ((frost$io$OutputStream*) $tmp554)->$class->vtable[19];
frost$core$Error* $tmp557 = $tmp555(((frost$io$OutputStream*) $tmp554), &$s558);
if ($tmp557 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local0) = $tmp557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$io$File* $tmp559 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp560 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// line 196
frost$io$IndentedOutputStream** $tmp561 = &param0->out;
frost$io$IndentedOutputStream* $tmp562 = *$tmp561;
$fn564 $tmp563 = ($fn564) ((frost$io$OutputStream*) $tmp562)->$class->vtable[19];
frost$core$Error* $tmp565 = $tmp563(((frost$io$OutputStream*) $tmp562), &$s566);
if ($tmp565 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local0) = $tmp565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$io$File* $tmp567 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp568 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// line 197
frost$io$IndentedOutputStream** $tmp569 = &param0->out;
frost$io$IndentedOutputStream* $tmp570 = *$tmp569;
frost$io$File* $tmp571 = *(&local2);
frost$core$String* $tmp572 = frost$io$File$get_name$R$frost$core$String($tmp571);
frost$core$String* $tmp573 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s574, $tmp572);
frost$core$String* $tmp575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp573, &$s576);
$fn578 $tmp577 = ($fn578) ((frost$io$OutputStream*) $tmp570)->$class->vtable[19];
frost$core$Error* $tmp579 = $tmp577(((frost$io$OutputStream*) $tmp570), $tmp575);
if ($tmp579 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local0) = $tmp579;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
frost$io$File* $tmp580 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp581 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// line 198
frost$io$IndentedOutputStream** $tmp582 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp583 = *$tmp582;
$fn585 $tmp584 = ($fn585) ((frost$io$OutputStream*) $tmp583)->$class->vtable[19];
frost$core$Error* $tmp586 = $tmp584(((frost$io$OutputStream*) $tmp583), &$s587);
if ($tmp586 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local0) = $tmp586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$io$File* $tmp588 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp589 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// line 199
frost$io$IndentedOutputStream** $tmp590 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp591 = *$tmp590;
$fn593 $tmp592 = ($fn593) ((frost$io$OutputStream*) $tmp591)->$class->vtable[19];
frost$core$Error* $tmp594 = $tmp592(((frost$io$OutputStream*) $tmp591), &$s595);
if ($tmp594 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local0) = $tmp594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$io$File* $tmp596 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
// line 200
frost$io$MemoryOutputStream** $tmp598 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp599 = *$tmp598;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$io$MemoryOutputStream** $tmp600 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp601 = *$tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$io$MemoryOutputStream** $tmp602 = &param0->importStream;
*$tmp602 = $tmp599;
// line 201
frost$collections$HashSet** $tmp603 = &param0->typeImports;
frost$collections$HashSet* $tmp604 = *$tmp603;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$collections$HashSet** $tmp605 = &param0->imports;
frost$collections$HashSet* $tmp606 = *$tmp605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$collections$HashSet** $tmp607 = &param0->imports;
*$tmp607 = $tmp604;
// line 202
frost$io$IndentedOutputStream** $tmp608 = &param0->types;
frost$io$IndentedOutputStream* $tmp609 = *$tmp608;
frost$core$String** $tmp610 = &param1->name;
frost$core$String* $tmp611 = *$tmp610;
frost$core$String* $tmp612 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp611);
frost$core$String* $tmp613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s614, $tmp612);
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp613, &$s616);
$fn618 $tmp617 = ($fn618) ((frost$io$OutputStream*) $tmp609)->$class->vtable[19];
frost$core$Error* $tmp619 = $tmp617(((frost$io$OutputStream*) $tmp609), $tmp615);
if ($tmp619 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local0) = $tmp619;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$io$File* $tmp620 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp621 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// line 203
frost$io$IndentedOutputStream** $tmp622 = &param0->types;
frost$io$IndentedOutputStream* $tmp623 = *$tmp622;
frost$core$Int64* $tmp624 = &$tmp623->level;
frost$core$Int64 $tmp625 = *$tmp624;
frost$core$Int64 $tmp626 = (frost$core$Int64) {1};
int64_t $tmp627 = $tmp625.value;
int64_t $tmp628 = $tmp626.value;
int64_t $tmp629 = $tmp627 + $tmp628;
frost$core$Int64 $tmp630 = (frost$core$Int64) {$tmp629};
frost$core$Int64* $tmp631 = &$tmp623->level;
*$tmp631 = $tmp630;
// line 204
frost$core$Weak** $tmp632 = &param0->compiler;
frost$core$Weak* $tmp633 = *$tmp632;
frost$core$Object* $tmp634 = frost$core$Weak$get$R$frost$core$Weak$T($tmp633);
frost$collections$ListView* $tmp635 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp634), param1);
ITable* $tmp636 = ((frost$collections$Iterable*) $tmp635)->$class->itable;
while ($tmp636->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp636 = $tmp636->next;
}
$fn638 $tmp637 = $tmp636->methods[0];
frost$collections$Iterator* $tmp639 = $tmp637(((frost$collections$Iterable*) $tmp635));
goto block21;
block21:;
ITable* $tmp640 = $tmp639->$class->itable;
while ($tmp640->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp640 = $tmp640->next;
}
$fn642 $tmp641 = $tmp640->methods[0];
frost$core$Bit $tmp643 = $tmp641($tmp639);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block23; else goto block22;
block22:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp645 = $tmp639->$class->itable;
while ($tmp645->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[1];
frost$core$Object* $tmp648 = $tmp646($tmp639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp648)));
org$frostlang$frostc$FieldDecl* $tmp649 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp648);
// line 205
frost$core$Weak** $tmp650 = &param0->compiler;
frost$core$Weak* $tmp651 = *$tmp650;
frost$core$Object* $tmp652 = frost$core$Weak$get$R$frost$core$Weak$T($tmp651);
org$frostlang$frostc$FieldDecl* $tmp653 = *(&local3);
frost$core$Bit $tmp654 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp652), $tmp653);
frost$core$Frost$unref$frost$core$Object$Q($tmp652);
// line 206
org$frostlang$frostc$FieldDecl* $tmp655 = *(&local3);
org$frostlang$frostc$Type** $tmp656 = &$tmp655->type;
org$frostlang$frostc$Type* $tmp657 = *$tmp656;
org$frostlang$frostc$Type* $tmp658 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp659 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp657, $tmp658);
bool $tmp660 = $tmp659.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
if ($tmp660) goto block24; else goto block26;
block24:;
// line 207
frost$io$IndentedOutputStream** $tmp661 = &param0->types;
frost$io$IndentedOutputStream* $tmp662 = *$tmp661;
org$frostlang$frostc$FieldDecl* $tmp663 = *(&local3);
frost$core$String** $tmp664 = &((org$frostlang$frostc$Symbol*) $tmp663)->name;
frost$core$String* $tmp665 = *$tmp664;
frost$core$String* $tmp666 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s667, $tmp665);
frost$core$String* $tmp668 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp666, &$s669);
org$frostlang$frostc$LLVMCodeGenerator** $tmp670 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp671 = *$tmp670;
frost$core$Int64 $tmp672 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp671, param1);
frost$core$Int64$wrapper* $tmp673;
$tmp673 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp673->value = $tmp672;
frost$core$String* $tmp674 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp668, ((frost$core$Object*) $tmp673));
frost$core$String* $tmp675 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp674, &$s676);
$fn678 $tmp677 = ($fn678) ((frost$io$OutputStream*) $tmp662)->$class->vtable[19];
frost$core$Error* $tmp679 = $tmp677(((frost$io$OutputStream*) $tmp662), $tmp675);
if ($tmp679 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local0) = $tmp679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q($tmp648);
org$frostlang$frostc$FieldDecl* $tmp680 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q($tmp634);
frost$io$File* $tmp681 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp682 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
goto block25;
block26:;
// line 1
// line 210
frost$io$IndentedOutputStream** $tmp683 = &param0->types;
frost$io$IndentedOutputStream* $tmp684 = *$tmp683;
org$frostlang$frostc$FieldDecl* $tmp685 = *(&local3);
org$frostlang$frostc$Type** $tmp686 = &$tmp685->type;
org$frostlang$frostc$Type* $tmp687 = *$tmp686;
frost$core$String* $tmp688 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp687);
frost$core$String* $tmp689 = frost$core$String$get_asString$R$frost$core$String($tmp688);
frost$core$String* $tmp690 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp689, &$s691);
org$frostlang$frostc$FieldDecl* $tmp692 = *(&local3);
frost$core$String** $tmp693 = &((org$frostlang$frostc$Symbol*) $tmp692)->name;
frost$core$String* $tmp694 = *$tmp693;
frost$core$String* $tmp695 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp690, $tmp694);
frost$core$String* $tmp696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp695, &$s697);
$fn699 $tmp698 = ($fn699) ((frost$io$OutputStream*) $tmp684)->$class->vtable[19];
frost$core$Error* $tmp700 = $tmp698(((frost$io$OutputStream*) $tmp684), $tmp696);
if ($tmp700 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local0) = $tmp700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q($tmp648);
org$frostlang$frostc$FieldDecl* $tmp701 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q($tmp634);
frost$io$File* $tmp702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp703 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp648);
org$frostlang$frostc$FieldDecl* $tmp704 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q($tmp634);
// line 213
frost$core$String** $tmp705 = &param1->name;
frost$core$String* $tmp706 = *$tmp705;
frost$core$Bit $tmp707 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp706, &$s708);
bool $tmp709 = $tmp707.value;
if ($tmp709) goto block31; else goto block32;
block31:;
// line 214
frost$io$IndentedOutputStream** $tmp710 = &param0->types;
frost$io$IndentedOutputStream* $tmp711 = *$tmp710;
$fn713 $tmp712 = ($fn713) ((frost$io$OutputStream*) $tmp711)->$class->vtable[19];
frost$core$Error* $tmp714 = $tmp712(((frost$io$OutputStream*) $tmp711), &$s715);
if ($tmp714 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local0) = $tmp714;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$io$File* $tmp716 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp717 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// line 215
frost$io$IndentedOutputStream** $tmp718 = &param0->types;
frost$io$IndentedOutputStream* $tmp719 = *$tmp718;
$fn721 $tmp720 = ($fn721) ((frost$io$OutputStream*) $tmp719)->$class->vtable[19];
frost$core$Error* $tmp722 = $tmp720(((frost$io$OutputStream*) $tmp719), &$s723);
if ($tmp722 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local0) = $tmp722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$io$File* $tmp724 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp725 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
goto block32;
block32:;
// line 217
frost$io$IndentedOutputStream** $tmp726 = &param0->types;
frost$io$IndentedOutputStream* $tmp727 = *$tmp726;
frost$core$Int64* $tmp728 = &$tmp727->level;
frost$core$Int64 $tmp729 = *$tmp728;
frost$core$Int64 $tmp730 = (frost$core$Int64) {1};
int64_t $tmp731 = $tmp729.value;
int64_t $tmp732 = $tmp730.value;
int64_t $tmp733 = $tmp731 - $tmp732;
frost$core$Int64 $tmp734 = (frost$core$Int64) {$tmp733};
frost$core$Int64* $tmp735 = &$tmp727->level;
*$tmp735 = $tmp734;
// line 218
frost$io$IndentedOutputStream** $tmp736 = &param0->types;
frost$io$IndentedOutputStream* $tmp737 = *$tmp736;
frost$core$String** $tmp738 = &param1->name;
frost$core$String* $tmp739 = *$tmp738;
frost$core$String* $tmp740 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp739);
frost$core$String* $tmp741 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s742, $tmp740);
frost$core$String* $tmp743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp741, &$s744);
$fn746 $tmp745 = ($fn746) ((frost$io$OutputStream*) $tmp737)->$class->vtable[19];
frost$core$Error* $tmp747 = $tmp745(((frost$io$OutputStream*) $tmp737), $tmp743);
if ($tmp747 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local0) = $tmp747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$io$File* $tmp748 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp749 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// line 219
frost$io$IndentedOutputStream** $tmp750 = &param0->types;
frost$io$IndentedOutputStream* $tmp751 = *$tmp750;
$fn753 $tmp752 = ($fn753) ((frost$io$OutputStream*) $tmp751)->$class->vtable[19];
frost$core$Error* $tmp754 = $tmp752(((frost$io$OutputStream*) $tmp751), &$s755);
if ($tmp754 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local0) = $tmp754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$io$File* $tmp756 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp757 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// line 220
frost$io$IndentedOutputStream** $tmp758 = &param0->types;
frost$io$IndentedOutputStream* $tmp759 = *$tmp758;
org$frostlang$frostc$Type* $tmp760 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp761 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp760);
frost$core$String* $tmp762 = frost$core$String$get_asString$R$frost$core$String($tmp761);
frost$core$String* $tmp763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp762, &$s764);
org$frostlang$frostc$Type* $tmp765 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp766 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp765);
frost$core$String* $tmp767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp763, $tmp766);
frost$core$String* $tmp768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp767, &$s769);
frost$core$String* $tmp770 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s771, $tmp768);
frost$core$Weak** $tmp772 = &param0->compiler;
frost$core$Weak* $tmp773 = *$tmp772;
frost$core$Object* $tmp774 = frost$core$Weak$get$R$frost$core$Weak$T($tmp773);
frost$collections$ListView* $tmp775 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp774), param1);
ITable* $tmp776 = ((frost$collections$CollectionView*) $tmp775)->$class->itable;
while ($tmp776->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp776 = $tmp776->next;
}
$fn778 $tmp777 = $tmp776->methods[0];
frost$core$Int64 $tmp779 = $tmp777(((frost$collections$CollectionView*) $tmp775));
frost$core$Int64$wrapper* $tmp780;
$tmp780 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp780->value = $tmp779;
frost$core$String* $tmp781 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s782, ((frost$core$Object*) $tmp780));
frost$core$String* $tmp783 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp781, &$s784);
frost$core$String* $tmp785 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp770, $tmp783);
frost$core$String** $tmp786 = &param1->name;
frost$core$String* $tmp787 = *$tmp786;
frost$core$String* $tmp788 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp787);
frost$core$String* $tmp789 = frost$core$String$get_asString$R$frost$core$String($tmp788);
frost$core$String* $tmp790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp789, &$s791);
frost$core$String* $tmp792 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp785, $tmp790);
$fn794 $tmp793 = ($fn794) ((frost$io$OutputStream*) $tmp759)->$class->vtable[19];
frost$core$Error* $tmp795 = $tmp793(((frost$io$OutputStream*) $tmp759), $tmp792);
if ($tmp795 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local0) = $tmp795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q($tmp774);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$io$File* $tmp796 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp797 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q($tmp774);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// line 224
frost$io$IndentedOutputStream** $tmp798 = &param0->types;
frost$io$IndentedOutputStream* $tmp799 = *$tmp798;
frost$core$String** $tmp800 = &param1->name;
frost$core$String* $tmp801 = *$tmp800;
frost$core$String* $tmp802 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp801);
frost$core$String* $tmp803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s804, $tmp802);
frost$core$String* $tmp805 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp803, &$s806);
frost$core$String** $tmp807 = &param1->name;
frost$core$String* $tmp808 = *$tmp807;
frost$core$String* $tmp809 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp808);
frost$core$String* $tmp810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp805, $tmp809);
frost$core$String* $tmp811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp810, &$s812);
$fn814 $tmp813 = ($fn814) ((frost$io$OutputStream*) $tmp799)->$class->vtable[19];
frost$core$Error* $tmp815 = $tmp813(((frost$io$OutputStream*) $tmp799), $tmp811);
if ($tmp815 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local0) = $tmp815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$io$File* $tmp816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp817 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// line 225
frost$core$Weak** $tmp818 = &param0->compiler;
frost$core$Weak* $tmp819 = *$tmp818;
frost$core$Object* $tmp820 = frost$core$Weak$get$R$frost$core$Weak$T($tmp819);
frost$core$Bit $tmp821 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp820), param1);
bool $tmp822 = $tmp821.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp820);
if ($tmp822) goto block45; else goto block46;
block45:;
// line 226
frost$io$IndentedOutputStream** $tmp823 = &param0->types;
frost$io$IndentedOutputStream* $tmp824 = *$tmp823;
frost$core$String** $tmp825 = &param1->name;
frost$core$String* $tmp826 = *$tmp825;
frost$core$String* $tmp827 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp826);
frost$core$String* $tmp828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s829, $tmp827);
frost$core$String* $tmp830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp828, &$s831);
$fn833 $tmp832 = ($fn833) ((frost$io$OutputStream*) $tmp824)->$class->vtable[19];
frost$core$Error* $tmp834 = $tmp832(((frost$io$OutputStream*) $tmp824), $tmp830);
if ($tmp834 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local0) = $tmp834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$io$File* $tmp835 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp836 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// line 227
frost$io$IndentedOutputStream** $tmp837 = &param0->types;
frost$io$IndentedOutputStream* $tmp838 = *$tmp837;
frost$core$Int64* $tmp839 = &$tmp838->level;
frost$core$Int64 $tmp840 = *$tmp839;
frost$core$Int64 $tmp841 = (frost$core$Int64) {1};
int64_t $tmp842 = $tmp840.value;
int64_t $tmp843 = $tmp841.value;
int64_t $tmp844 = $tmp842 + $tmp843;
frost$core$Int64 $tmp845 = (frost$core$Int64) {$tmp844};
frost$core$Int64* $tmp846 = &$tmp838->level;
*$tmp846 = $tmp845;
// line 228
frost$io$IndentedOutputStream** $tmp847 = &param0->types;
frost$io$IndentedOutputStream* $tmp848 = *$tmp847;
$fn850 $tmp849 = ($fn850) ((frost$io$OutputStream*) $tmp848)->$class->vtable[19];
frost$core$Error* $tmp851 = $tmp849(((frost$io$OutputStream*) $tmp848), &$s852);
if ($tmp851 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local0) = $tmp851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$io$File* $tmp853 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp854 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// line 229
frost$io$IndentedOutputStream** $tmp855 = &param0->types;
frost$io$IndentedOutputStream* $tmp856 = *$tmp855;
$fn858 $tmp857 = ($fn858) ((frost$io$OutputStream*) $tmp856)->$class->vtable[19];
frost$core$Error* $tmp859 = $tmp857(((frost$io$OutputStream*) $tmp856), &$s860);
if ($tmp859 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local0) = $tmp859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$io$File* $tmp861 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp862 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// line 230
frost$io$IndentedOutputStream** $tmp863 = &param0->types;
frost$io$IndentedOutputStream* $tmp864 = *$tmp863;
org$frostlang$frostc$Type** $tmp865 = &param1->type;
org$frostlang$frostc$Type* $tmp866 = *$tmp865;
frost$core$String* $tmp867 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp866);
frost$core$String* $tmp868 = frost$core$String$get_asString$R$frost$core$String($tmp867);
frost$core$String* $tmp869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp868, &$s870);
$fn872 $tmp871 = ($fn872) ((frost$io$OutputStream*) $tmp864)->$class->vtable[19];
frost$core$Error* $tmp873 = $tmp871(((frost$io$OutputStream*) $tmp864), $tmp869);
if ($tmp873 == NULL) goto block53; else goto block54;
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local0) = $tmp873;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$io$File* $tmp874 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp875 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// line 231
frost$io$IndentedOutputStream** $tmp876 = &param0->types;
frost$io$IndentedOutputStream* $tmp877 = *$tmp876;
frost$core$Int64* $tmp878 = &$tmp877->level;
frost$core$Int64 $tmp879 = *$tmp878;
frost$core$Int64 $tmp880 = (frost$core$Int64) {1};
int64_t $tmp881 = $tmp879.value;
int64_t $tmp882 = $tmp880.value;
int64_t $tmp883 = $tmp881 - $tmp882;
frost$core$Int64 $tmp884 = (frost$core$Int64) {$tmp883};
frost$core$Int64* $tmp885 = &$tmp877->level;
*$tmp885 = $tmp884;
// line 232
frost$io$IndentedOutputStream** $tmp886 = &param0->types;
frost$io$IndentedOutputStream* $tmp887 = *$tmp886;
frost$core$String** $tmp888 = &param1->name;
frost$core$String* $tmp889 = *$tmp888;
frost$core$String* $tmp890 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp889);
frost$core$String* $tmp891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s892, $tmp890);
frost$core$String* $tmp893 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp891, &$s894);
$fn896 $tmp895 = ($fn896) ((frost$io$OutputStream*) $tmp887)->$class->vtable[19];
frost$core$Error* $tmp897 = $tmp895(((frost$io$OutputStream*) $tmp887), $tmp893);
if ($tmp897 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local0) = $tmp897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$io$File* $tmp898 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp899 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// line 233
frost$io$IndentedOutputStream** $tmp900 = &param0->types;
frost$io$IndentedOutputStream* $tmp901 = *$tmp900;
frost$core$String** $tmp902 = &param1->name;
frost$core$String* $tmp903 = *$tmp902;
frost$core$String* $tmp904 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp903);
frost$core$String* $tmp905 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s906, $tmp904);
frost$core$String* $tmp907 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp905, &$s908);
$fn910 $tmp909 = ($fn910) ((frost$io$OutputStream*) $tmp901)->$class->vtable[19];
frost$core$Error* $tmp911 = $tmp909(((frost$io$OutputStream*) $tmp901), $tmp907);
if ($tmp911 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local0) = $tmp911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$io$File* $tmp912 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp913 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// line 234
frost$io$IndentedOutputStream** $tmp914 = &param0->types;
frost$io$IndentedOutputStream* $tmp915 = *$tmp914;
frost$core$Int64* $tmp916 = &$tmp915->level;
frost$core$Int64 $tmp917 = *$tmp916;
frost$core$Int64 $tmp918 = (frost$core$Int64) {1};
int64_t $tmp919 = $tmp917.value;
int64_t $tmp920 = $tmp918.value;
int64_t $tmp921 = $tmp919 + $tmp920;
frost$core$Int64 $tmp922 = (frost$core$Int64) {$tmp921};
frost$core$Int64* $tmp923 = &$tmp915->level;
*$tmp923 = $tmp922;
// line 235
frost$io$IndentedOutputStream** $tmp924 = &param0->types;
frost$io$IndentedOutputStream* $tmp925 = *$tmp924;
frost$core$String** $tmp926 = &param1->name;
frost$core$String* $tmp927 = *$tmp926;
frost$core$String* $tmp928 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp927);
frost$core$String* $tmp929 = frost$core$String$get_asString$R$frost$core$String($tmp928);
frost$core$String* $tmp930 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp929, &$s931);
$fn933 $tmp932 = ($fn933) ((frost$io$OutputStream*) $tmp925)->$class->vtable[19];
frost$core$Error* $tmp934 = $tmp932(((frost$io$OutputStream*) $tmp925), $tmp930);
if ($tmp934 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local0) = $tmp934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$io$File* $tmp935 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp936 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// line 236
frost$io$IndentedOutputStream** $tmp937 = &param0->types;
frost$io$IndentedOutputStream* $tmp938 = *$tmp937;
$fn940 $tmp939 = ($fn940) ((frost$io$OutputStream*) $tmp938)->$class->vtable[19];
frost$core$Error* $tmp941 = $tmp939(((frost$io$OutputStream*) $tmp938), &$s942);
if ($tmp941 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local0) = $tmp941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$io$File* $tmp943 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp944 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// line 237
frost$io$IndentedOutputStream** $tmp945 = &param0->types;
frost$io$IndentedOutputStream* $tmp946 = *$tmp945;
frost$core$Int64* $tmp947 = &$tmp946->level;
frost$core$Int64 $tmp948 = *$tmp947;
frost$core$Int64 $tmp949 = (frost$core$Int64) {1};
int64_t $tmp950 = $tmp948.value;
int64_t $tmp951 = $tmp949.value;
int64_t $tmp952 = $tmp950 - $tmp951;
frost$core$Int64 $tmp953 = (frost$core$Int64) {$tmp952};
frost$core$Int64* $tmp954 = &$tmp946->level;
*$tmp954 = $tmp953;
// line 238
frost$io$IndentedOutputStream** $tmp955 = &param0->types;
frost$io$IndentedOutputStream* $tmp956 = *$tmp955;
frost$core$String** $tmp957 = &param1->name;
frost$core$String* $tmp958 = *$tmp957;
frost$core$String* $tmp959 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp958);
frost$core$String* $tmp960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s961, $tmp959);
frost$core$String* $tmp962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp960, &$s963);
$fn965 $tmp964 = ($fn965) ((frost$io$OutputStream*) $tmp956)->$class->vtable[19];
frost$core$Error* $tmp966 = $tmp964(((frost$io$OutputStream*) $tmp956), $tmp962);
if ($tmp966 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local0) = $tmp966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$io$File* $tmp967 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp968 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// line 239
frost$core$Weak** $tmp969 = &param0->compiler;
frost$core$Weak* $tmp970 = *$tmp969;
frost$core$Object* $tmp971 = frost$core$Weak$get$R$frost$core$Weak$T($tmp970);
org$frostlang$frostc$Type* $tmp972 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp973 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp971), $tmp972);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
org$frostlang$frostc$ClassDecl* $tmp974 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local4) = $tmp973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q($tmp971);
// line 240
frost$core$Weak** $tmp975 = &param0->compiler;
frost$core$Weak* $tmp976 = *$tmp975;
frost$core$Object* $tmp977 = frost$core$Weak$get$R$frost$core$Weak$T($tmp976);
org$frostlang$frostc$ClassDecl* $tmp978 = *(&local4);
frost$collections$ListView* $tmp979 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp977), $tmp978);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$collections$ListView* $tmp980 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local5) = $tmp979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$core$Frost$unref$frost$core$Object$Q($tmp977);
// line 241
frost$io$IndentedOutputStream** $tmp981 = &param0->types;
frost$io$IndentedOutputStream* $tmp982 = *$tmp981;
frost$collections$ListView* $tmp983 = *(&local5);
ITable* $tmp984 = ((frost$collections$CollectionView*) $tmp983)->$class->itable;
while ($tmp984->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp984 = $tmp984->next;
}
$fn986 $tmp985 = $tmp984->methods[0];
frost$core$Int64 $tmp987 = $tmp985(((frost$collections$CollectionView*) $tmp983));
frost$core$Int64$wrapper* $tmp988;
$tmp988 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp988->value = $tmp987;
frost$core$String* $tmp989 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s990, ((frost$core$Object*) $tmp988));
frost$core$String* $tmp991 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp989, &$s992);
frost$core$String* $tmp993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s994, $tmp991);
frost$core$String** $tmp995 = &param1->name;
frost$core$String* $tmp996 = *$tmp995;
frost$core$String* $tmp997 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp996);
frost$core$String* $tmp998 = frost$core$String$get_asString$R$frost$core$String($tmp997);
frost$core$String* $tmp999 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp998, &$s1000);
frost$core$String* $tmp1001 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp993, $tmp999);
$fn1003 $tmp1002 = ($fn1003) ((frost$io$OutputStream*) $tmp982)->$class->vtable[19];
frost$core$Error* $tmp1004 = $tmp1002(((frost$io$OutputStream*) $tmp982), $tmp1001);
if ($tmp1004 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local0) = $tmp1004;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$collections$ListView* $tmp1005 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1006 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1007 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1008 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// line 245
frost$io$IndentedOutputStream** $tmp1009 = &param0->types;
frost$io$IndentedOutputStream* $tmp1010 = *$tmp1009;
frost$core$String** $tmp1011 = &param1->name;
frost$core$String* $tmp1012 = *$tmp1011;
frost$core$String* $tmp1013 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1012);
frost$core$String* $tmp1014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1015, $tmp1013);
frost$core$String* $tmp1016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1014, &$s1017);
frost$core$String** $tmp1018 = &param1->name;
frost$core$String* $tmp1019 = *$tmp1018;
frost$core$String* $tmp1020 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1019);
frost$core$String* $tmp1021 = frost$core$String$get_asString$R$frost$core$String($tmp1020);
frost$core$String* $tmp1022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1021, &$s1023);
frost$core$String* $tmp1024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1016, $tmp1022);
$fn1026 $tmp1025 = ($fn1026) ((frost$io$OutputStream*) $tmp1010)->$class->vtable[19];
frost$core$Error* $tmp1027 = $tmp1025(((frost$io$OutputStream*) $tmp1010), $tmp1024);
if ($tmp1027 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local0) = $tmp1027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$collections$ListView* $tmp1028 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1029 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1030 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1031 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$collections$ListView* $tmp1032 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1033 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block46;
block46:;
frost$io$File* $tmp1034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1035 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 250
frost$core$Weak** $tmp1036 = &param0->compiler;
frost$core$Weak* $tmp1037 = *$tmp1036;
frost$core$Object* $tmp1038 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1037);
org$frostlang$frostc$Position* $tmp1039 = &param1->position;
org$frostlang$frostc$Position $tmp1040 = *$tmp1039;
frost$core$Error* $tmp1041 = *(&local0);
frost$core$String** $tmp1042 = &$tmp1041->message;
frost$core$String* $tmp1043 = *$tmp1042;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1038), $tmp1040, $tmp1043);
frost$core$Frost$unref$frost$core$Object$Q($tmp1038);
goto block2;
block2:;
frost$core$Error* $tmp1044 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 255
frost$core$Weak** $tmp1045 = &param1->owner;
frost$core$Weak* $tmp1046 = *$tmp1045;
frost$core$Object* $tmp1047 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1046);
org$frostlang$frostc$Type** $tmp1048 = &((org$frostlang$frostc$ClassDecl*) $tmp1047)->type;
org$frostlang$frostc$Type* $tmp1049 = *$tmp1048;
frost$core$String* $tmp1050 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1049);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
frost$core$String* $tmp1051 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local0) = $tmp1050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
frost$core$Frost$unref$frost$core$Object$Q($tmp1047);
// line 256
org$frostlang$frostc$MethodDecl$Kind* $tmp1052 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1053 = *$tmp1052;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1054;
$tmp1054 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1054->value = $tmp1053;
frost$core$Int64 $tmp1055 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1056 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1055);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1057;
$tmp1057 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1057->value = $tmp1056;
ITable* $tmp1058 = ((frost$core$Equatable*) $tmp1054)->$class->itable;
while ($tmp1058->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1058 = $tmp1058->next;
}
$fn1060 $tmp1059 = $tmp1058->methods[0];
frost$core$Bit $tmp1061 = $tmp1059(((frost$core$Equatable*) $tmp1054), ((frost$core$Equatable*) $tmp1057));
bool $tmp1062 = $tmp1061.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1057)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1054)));
if ($tmp1062) goto block3; else goto block2;
block3:;
frost$core$String* $tmp1063 = *(&local0);
frost$core$Bit $tmp1064 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1063, &$s1065);
frost$core$Bit $tmp1066 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1064);
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block1; else goto block2;
block1:;
// line 257
frost$core$String* $tmp1068 = *(&local0);
frost$core$String* $tmp1069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1068, &$s1070);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$String* $tmp1071 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1069;
block2:;
// line 259
frost$core$String* $tmp1072 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$String* $tmp1073 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1072;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 279
org$frostlang$frostc$Type** $tmp1074 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1075 = *$tmp1074;
frost$core$Bit $tmp1076 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1075);
frost$core$Bit $tmp1077 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1076);
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block1; else goto block2;
block1:;
// line 280
frost$core$Bit $tmp1079 = frost$core$Bit$init$builtin_bit(false);
return $tmp1079;
block2:;
// line 282
org$frostlang$frostc$Annotations** $tmp1080 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1081 = *$tmp1080;
frost$core$Bit $tmp1082 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1081);
bool $tmp1083 = $tmp1082.value;
if ($tmp1083) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1084 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1085 = *$tmp1084;
frost$core$Bit $tmp1086 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1085);
*(&local1) = $tmp1086;
goto block5;
block4:;
*(&local1) = $tmp1082;
goto block5;
block5:;
frost$core$Bit $tmp1087 = *(&local1);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1089 = &param0->compiler;
frost$core$Weak* $tmp1090 = *$tmp1089;
frost$core$Object* $tmp1091 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1090);
frost$core$Weak** $tmp1092 = &param0->compiler;
frost$core$Weak* $tmp1093 = *$tmp1092;
frost$core$Object* $tmp1094 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1093);
org$frostlang$frostc$Type** $tmp1095 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1096 = *$tmp1095;
org$frostlang$frostc$ClassDecl* $tmp1097 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1094), $tmp1096);
frost$core$Bit $tmp1098 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1091), $tmp1097);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q($tmp1094);
frost$core$Frost$unref$frost$core$Object$Q($tmp1091);
*(&local0) = $tmp1098;
goto block8;
block7:;
*(&local0) = $tmp1087;
goto block8;
block8:;
frost$core$Bit $tmp1099 = *(&local0);
*(&local2) = $tmp1099;
// line 288
frost$core$Bit $tmp1100 = *(&local2);
frost$core$Bit $tmp1101 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1100);
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block9; else goto block10;
block9:;
*(&local3) = $tmp1101;
goto block11;
block10:;
org$frostlang$frostc$Annotations** $tmp1103 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1104 = *$tmp1103;
frost$core$Bit $tmp1105 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1104);
frost$core$Bit $tmp1106 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1105);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Annotations** $tmp1108 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1109 = *$tmp1108;
frost$core$Bit $tmp1110 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1109);
bool $tmp1111 = $tmp1110.value;
if ($tmp1111) goto block15; else goto block16;
block15:;
*(&local5) = $tmp1110;
goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1112 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1113 = *$tmp1112;
frost$core$Bit $tmp1114 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1113);
*(&local5) = $tmp1114;
goto block17;
block17:;
frost$core$Bit $tmp1115 = *(&local5);
*(&local4) = $tmp1115;
goto block14;
block13:;
*(&local4) = $tmp1106;
goto block14;
block14:;
frost$core$Bit $tmp1116 = *(&local4);
*(&local3) = $tmp1116;
goto block11;
block11:;
frost$core$Bit $tmp1117 = *(&local3);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {288};
frost$core$String* $tmp1120 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1122, $tmp1120);
frost$core$String* $tmp1123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1121, &$s1124);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1125, $tmp1119, $tmp1123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
abort(); // unreachable
block18:;
// line 290
frost$core$Bit $tmp1126 = *(&local2);
return $tmp1126;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
frost$core$String* local3 = NULL;
// line 295
*(&local0) = ((frost$core$Error*) NULL);
// line 296
frost$io$MemoryOutputStream** $tmp1127 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1128 = *$tmp1127;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$io$MemoryOutputStream** $tmp1129 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1130 = *$tmp1129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$io$MemoryOutputStream** $tmp1131 = &param0->importStream;
*$tmp1131 = $tmp1128;
// line 297
frost$collections$HashSet** $tmp1132 = &param0->bodyImports;
frost$collections$HashSet* $tmp1133 = *$tmp1132;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$collections$HashSet** $tmp1134 = &param0->imports;
frost$collections$HashSet* $tmp1135 = *$tmp1134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$collections$HashSet** $tmp1136 = &param0->imports;
*$tmp1136 = $tmp1133;
// line 298
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1137));
frost$core$String* $tmp1138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local1) = &$s1139;
// line 299
frost$core$Bit $tmp1140 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1141 = $tmp1140.value;
if ($tmp1141) goto block3; else goto block5;
block3:;
// line 300
frost$io$IndentedOutputStream** $tmp1142 = &param0->body;
frost$io$IndentedOutputStream* $tmp1143 = *$tmp1142;
frost$core$String* $tmp1144 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1146, $tmp1144);
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1145, &$s1148);
org$frostlang$frostc$Type** $tmp1149 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1150 = *$tmp1149;
frost$core$String* $tmp1151 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1150);
frost$core$String* $tmp1152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1147, $tmp1151);
frost$core$String* $tmp1153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1152, &$s1154);
$fn1156 $tmp1155 = ($fn1156) ((frost$io$OutputStream*) $tmp1143)->$class->vtable[17];
frost$core$Error* $tmp1157 = $tmp1155(((frost$io$OutputStream*) $tmp1143), $tmp1153);
if ($tmp1157 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local0) = $tmp1157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$String* $tmp1158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1159));
frost$core$String* $tmp1160 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local1) = &$s1161;
goto block4;
block5:;
// line 1
// line 304
frost$io$IndentedOutputStream** $tmp1162 = &param0->body;
frost$io$IndentedOutputStream* $tmp1163 = *$tmp1162;
org$frostlang$frostc$Type** $tmp1164 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1165 = *$tmp1164;
frost$core$String* $tmp1166 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1165);
frost$core$String* $tmp1167 = frost$core$String$get_asString$R$frost$core$String($tmp1166);
frost$core$String* $tmp1168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1167, &$s1169);
frost$core$String* $tmp1170 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1168, $tmp1170);
frost$core$String* $tmp1172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1171, &$s1173);
$fn1175 $tmp1174 = ($fn1175) ((frost$io$OutputStream*) $tmp1163)->$class->vtable[17];
frost$core$Error* $tmp1176 = $tmp1174(((frost$io$OutputStream*) $tmp1163), $tmp1172);
if ($tmp1176 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local0) = $tmp1176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$String* $tmp1177 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
goto block4;
block4:;
// line 306
org$frostlang$frostc$Annotations** $tmp1178 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1179 = *$tmp1178;
frost$core$Bit $tmp1180 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1179);
frost$core$Bit $tmp1181 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1180);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block12; else goto block11;
block12:;
frost$core$Weak** $tmp1183 = &param0->compiler;
frost$core$Weak* $tmp1184 = *$tmp1183;
frost$core$Object* $tmp1185 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1184);
frost$core$Bit $tmp1186 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1185), param1);
frost$core$Bit $tmp1187 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1186);
bool $tmp1188 = $tmp1187.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1185);
if ($tmp1188) goto block10; else goto block11;
block10:;
// line 307
frost$io$IndentedOutputStream** $tmp1189 = &param0->body;
frost$io$IndentedOutputStream* $tmp1190 = *$tmp1189;
frost$core$String* $tmp1191 = *(&local1);
frost$core$String* $tmp1192 = frost$core$String$get_asString$R$frost$core$String($tmp1191);
frost$core$String* $tmp1193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1192, &$s1194);
frost$core$String* $tmp1195 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1193, $tmp1195);
frost$core$String* $tmp1197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1196, &$s1198);
$fn1200 $tmp1199 = ($fn1200) ((frost$io$OutputStream*) $tmp1190)->$class->vtable[17];
frost$core$Error* $tmp1201 = $tmp1199(((frost$io$OutputStream*) $tmp1190), $tmp1197);
if ($tmp1201 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
*(&local0) = $tmp1201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$String* $tmp1202 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1203));
frost$core$String* $tmp1204 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local1) = &$s1205;
goto block11;
block11:;
// line 310
frost$collections$Array** $tmp1206 = &param1->parameters;
frost$collections$Array* $tmp1207 = *$tmp1206;
ITable* $tmp1208 = ((frost$collections$Iterable*) $tmp1207)->$class->itable;
while ($tmp1208->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1208 = $tmp1208->next;
}
$fn1210 $tmp1209 = $tmp1208->methods[0];
frost$collections$Iterator* $tmp1211 = $tmp1209(((frost$collections$Iterable*) $tmp1207));
goto block15;
block15:;
ITable* $tmp1212 = $tmp1211->$class->itable;
while ($tmp1212->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1212 = $tmp1212->next;
}
$fn1214 $tmp1213 = $tmp1212->methods[0];
frost$core$Bit $tmp1215 = $tmp1213($tmp1211);
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block17; else goto block16;
block16:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1217 = $tmp1211->$class->itable;
while ($tmp1217->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1217 = $tmp1217->next;
}
$fn1219 $tmp1218 = $tmp1217->methods[1];
frost$core$Object* $tmp1220 = $tmp1218($tmp1211);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1220)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1221 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1220);
// line 311
org$frostlang$frostc$MethodDecl$Parameter* $tmp1222 = *(&local2);
frost$core$String** $tmp1223 = &$tmp1222->name;
frost$core$String* $tmp1224 = *$tmp1223;
frost$core$String* $tmp1225 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1224);
frost$core$String* $tmp1226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1227, $tmp1225);
frost$core$String* $tmp1228 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1226, &$s1229);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$String* $tmp1230 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local3) = $tmp1228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// line 312
frost$io$IndentedOutputStream** $tmp1231 = &param0->body;
frost$io$IndentedOutputStream* $tmp1232 = *$tmp1231;
frost$core$String* $tmp1233 = *(&local1);
frost$core$String* $tmp1234 = frost$core$String$get_asString$R$frost$core$String($tmp1233);
frost$core$String* $tmp1235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1234, &$s1236);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1237 = *(&local2);
org$frostlang$frostc$Type** $tmp1238 = &$tmp1237->type;
org$frostlang$frostc$Type* $tmp1239 = *$tmp1238;
frost$core$String* $tmp1240 = *(&local3);
frost$core$String* $tmp1241 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1239, $tmp1240);
frost$core$String* $tmp1242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1235, $tmp1241);
frost$core$String* $tmp1243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1242, &$s1244);
$fn1246 $tmp1245 = ($fn1246) ((frost$io$OutputStream*) $tmp1232)->$class->vtable[17];
frost$core$Error* $tmp1247 = $tmp1245(((frost$io$OutputStream*) $tmp1232), $tmp1243);
if ($tmp1247 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local0) = $tmp1247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
frost$core$String* $tmp1248 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1220);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1249 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
frost$core$String* $tmp1250 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// line 313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1251));
frost$core$String* $tmp1252 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local1) = &$s1253;
frost$core$String* $tmp1254 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1220);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
// line 315
frost$io$IndentedOutputStream** $tmp1256 = &param0->body;
frost$io$IndentedOutputStream* $tmp1257 = *$tmp1256;
$fn1259 $tmp1258 = ($fn1259) ((frost$io$OutputStream*) $tmp1257)->$class->vtable[19];
frost$core$Error* $tmp1260 = $tmp1258(((frost$io$OutputStream*) $tmp1257), &$s1261);
if ($tmp1260 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local0) = $tmp1260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
frost$core$String* $tmp1262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
frost$core$String* $tmp1263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 318
frost$core$Int64 $tmp1264 = (frost$core$Int64) {318};
frost$core$Error* $tmp1265 = *(&local0);
$fn1267 $tmp1266 = ($fn1267) ((frost$core$Object*) $tmp1265)->$class->vtable[0];
frost$core$String* $tmp1268 = $tmp1266(((frost$core$Object*) $tmp1265));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1269, $tmp1264, $tmp1268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
abort(); // unreachable
block2:;
frost$core$Error* $tmp1270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
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
frost$io$IndentedOutputStream** $tmp1271 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1272 = *$tmp1271;
frost$io$MemoryOutputStream** $tmp1273 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1274 = *$tmp1273;
$fn1276 $tmp1275 = ($fn1276) ((frost$io$OutputStream*) $tmp1272)->$class->vtable[20];
frost$core$Error* $tmp1277 = $tmp1275(((frost$io$OutputStream*) $tmp1272), ((frost$core$Object*) $tmp1274));
if ($tmp1277 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local0) = $tmp1277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// line 331
frost$io$IndentedOutputStream** $tmp1278 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1279 = *$tmp1278;
frost$io$MemoryOutputStream** $tmp1280 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1281 = *$tmp1280;
$fn1283 $tmp1282 = ($fn1283) ((frost$io$OutputStream*) $tmp1279)->$class->vtable[20];
frost$core$Error* $tmp1284 = $tmp1282(((frost$io$OutputStream*) $tmp1279), ((frost$core$Object*) $tmp1281));
if ($tmp1284 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local0) = $tmp1284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// line 332
frost$io$IndentedOutputStream** $tmp1285 = &param0->out;
frost$io$IndentedOutputStream* $tmp1286 = *$tmp1285;
frost$io$MemoryOutputStream** $tmp1287 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1288 = *$tmp1287;
$fn1290 $tmp1289 = ($fn1290) ((frost$io$OutputStream*) $tmp1286)->$class->vtable[20];
frost$core$Error* $tmp1291 = $tmp1289(((frost$io$OutputStream*) $tmp1286), ((frost$core$Object*) $tmp1288));
if ($tmp1291 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local0) = $tmp1291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
// line 333
frost$io$IndentedOutputStream** $tmp1292 = &param0->out;
frost$io$IndentedOutputStream* $tmp1293 = *$tmp1292;
frost$io$MemoryOutputStream** $tmp1294 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1295 = *$tmp1294;
$fn1297 $tmp1296 = ($fn1297) ((frost$io$OutputStream*) $tmp1293)->$class->vtable[20];
frost$core$Error* $tmp1298 = $tmp1296(((frost$io$OutputStream*) $tmp1293), ((frost$core$Object*) $tmp1295));
if ($tmp1298 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local0) = $tmp1298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
goto block2;
block1:;
// line 336
frost$core$Error* $tmp1299 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp1299));
// line 337
frost$core$Int64 $tmp1300 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp1300);
goto block2;
block2:;
frost$core$Error* $tmp1301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1302 = &param0->compiler;
frost$core$Weak* $tmp1303 = *$tmp1302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$io$MemoryOutputStream** $tmp1304 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1305 = *$tmp1304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$io$MemoryOutputStream** $tmp1306 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1307 = *$tmp1306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$io$IndentedOutputStream** $tmp1308 = &param0->types;
frost$io$IndentedOutputStream* $tmp1309 = *$tmp1308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$io$MemoryOutputStream** $tmp1310 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1311 = *$tmp1310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
frost$io$MemoryOutputStream** $tmp1312 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1313 = *$tmp1312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$io$IndentedOutputStream** $tmp1314 = &param0->body;
frost$io$IndentedOutputStream* $tmp1315 = *$tmp1314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$collections$HashSet** $tmp1316 = &param0->typeImports;
frost$collections$HashSet* $tmp1317 = *$tmp1316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$collections$HashSet** $tmp1318 = &param0->bodyImports;
frost$collections$HashSet* $tmp1319 = *$tmp1318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$collections$HashSet** $tmp1320 = &param0->imports;
frost$collections$HashSet* $tmp1321 = *$tmp1320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$io$MemoryOutputStream** $tmp1322 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1323 = *$tmp1322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$io$File** $tmp1324 = &param0->outDir;
frost$io$File* $tmp1325 = *$tmp1324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$io$IndentedOutputStream** $tmp1326 = &param0->out;
frost$io$IndentedOutputStream* $tmp1327 = *$tmp1326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$io$IndentedOutputStream** $tmp1328 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1329 = *$tmp1328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1330 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1331 = *$tmp1330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Weak** $tmp1332 = &param0->cCodeGen;
frost$core$Weak* $tmp1333 = *$tmp1332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
org$frostlang$frostc$CCodeGenerator** $tmp1334 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1335 = *$tmp1334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
return;

}

