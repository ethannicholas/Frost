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
#include "frost/core/Int.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Error.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/Key.h"
#include "frost/collections/HashMap.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Maybe.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$HCodeGenerator$class_type org$frostlang$frostc$HCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$cleanup, org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int, org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$finish} };

typedef frost$core$String* (*$fn169)(frost$core$Object*);
typedef frost$core$String* (*$fn192)(frost$core$Object*);
typedef frost$core$Error* (*$fn302)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn339)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn530)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn569)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn709)(frost$core$Object*);
typedef frost$core$Error* (*$fn829)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn838)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn872)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn881)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn891)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn920)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn948)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn952)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn957)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn999)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1017)(frost$core$Object*);
typedef frost$core$Error* (*$fn1023)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1045)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1061)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1071)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1100)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1109)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1161)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1165)(frost$core$Object*);
typedef frost$core$Error* (*$fn1181)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1207)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1236)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1255)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1265)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1275)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1290)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1318)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1336)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1362)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1371)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1400)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1445)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1449)(frost$core$Object*);
typedef frost$core$Error* (*$fn1466)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1494)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1546)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1721)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1754)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1794)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1821)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1831)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1835)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1840)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1873)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1886)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1895)(frost$core$Object*);
typedef frost$core$Error* (*$fn1903)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1910)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1917)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1924)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn1928)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, -4103086355721065342, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x4c\x54", 3, -497462938104600023, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x47\x54", 3, -504009430337643742, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x51", 2, 565864791841746336, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x43", 2, 565884583051054134, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x24\x49\x6e\x74", 15, -6919318723808386959, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74", 3, 3143511548502526014, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 671970962477988494, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 4128981603702996129, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 671970962477988494, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, -3661474206510476099, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, -3661474206510476099, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, -6914605798766018203, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, -6914605798766018203, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, -6879236761899114840, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, -6879236761899114840, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, -2912907018242783318, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, 2096479397977239101, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 559938424166824396, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1009 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, -2448813731761471205, NULL };
static frost$core$String $s1011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s1021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 670056712733651593, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -4913817114742956656, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -5962813414700443260, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 2703935467625301937, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, -8740092864407068865, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20", 8, 1299553688233014337, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 71, 8885469816273793472, NULL };
static frost$core$String $s1155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -1023494951477965521, NULL };
static frost$core$String $s1195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -1023502648059362998, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, -8967472124348590150, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, -7438197491133939705, NULL };
static frost$core$String $s1257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, 1439842525427575854, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -2305927540240831023, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 14, 3730756510990532336, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1225697948708486459, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -5352411526554368641, NULL };
static frost$core$String $s1360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, 4622182911039583012, NULL };
static frost$core$String $s1396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3803391662366219107, NULL };
static frost$core$String $s1412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20", 122, 5922034436274910413, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, 5593648587920272924, NULL };
static frost$core$String $s1482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, 5593643090362131869, NULL };
static frost$core$String $s1491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -2374506366252631061, NULL };
static frost$core$String $s1514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 7893996714969165842, NULL };
static frost$core$String $s1674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, -9034067459731225523, NULL };
static frost$core$String $s1713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, -5577034943728621570, NULL };
static frost$core$String $s1724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1752 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 1751680115892408369, NULL };
static frost$core$String $s1824 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 636530404172864656, NULL };
static frost$core$String $s1852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1878 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 566764192353433709, NULL };
static frost$core$String $s1897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };

void org$frostlang$frostc$HCodeGenerator$init$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:42
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:43
org$frostlang$frostc$CCodeGenerator** $tmp6 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp7 = *$tmp6;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1, org$frostlang$frostc$CCodeGenerator* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:6
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:8
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:10
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:12
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:14
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:16
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:18
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:20
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:22
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:24
frost$collections$HashSet** $tmp48 = &param0->typeImports;
frost$collections$HashSet* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$HashSet** $tmp50 = &param0->imports;
frost$collections$HashSet* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$HashSet** $tmp52 = &param0->imports;
*$tmp52 = $tmp49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:26
frost$io$MemoryOutputStream** $tmp53 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp54 = *$tmp53;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$io$MemoryOutputStream** $tmp55 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$io$MemoryOutputStream** $tmp57 = &param0->importStream;
*$tmp57 = $tmp54;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:34
FROST_ASSERT(272 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp58 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(272, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp64 = &param0->outDir;
frost$io$File* $tmp65 = *$tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$io$File** $tmp66 = &param0->outDir;
*$tmp66 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:48
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:49
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:50
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

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp81 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp82 = *$tmp81;
frost$core$String* $tmp83 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp82, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return $tmp83;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp84 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp85 = *$tmp84;
frost$core$String* $tmp86 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp85, param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$String* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp88 = *(&local0);
frost$core$Bit $tmp89 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp88, &$s90);
bool $tmp91 = $tmp89.value;
if ($tmp91) goto block1; else goto block2;
block2:;
frost$core$Int $tmp92 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s93, $tmp92);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp94 = *(&local0);
frost$core$Int $tmp95 = (frost$core$Int) {1u};
frost$core$Bit $tmp96 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp97 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp95, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp96);
frost$core$String* $tmp98 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp94, $tmp97);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$String* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local0) = ((frost$core$String*) NULL);
return $tmp98;

}
frost$core$Int org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp100 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp101 = *$tmp100;
frost$core$Int $tmp102 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int($tmp101, param1);
return $tmp102;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:68
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:73
frost$core$String** $tmp124 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp125 = *$tmp124;
frost$core$Bit $tmp126 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp125, &$s127);
bool $tmp128 = $tmp126.value;
if ($tmp128) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:74
frost$core$Weak** $tmp129 = &param0->compiler;
frost$core$Weak* $tmp130 = *$tmp129;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:74:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp131 = &$tmp130->_valid;
frost$core$Bit $tmp132 = *$tmp131;
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block5; else goto block6;
block6:;
frost$core$Int $tmp134 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s135, $tmp134);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp136 = &$tmp130->value;
frost$core$Object* $tmp137 = *$tmp136;
frost$core$Frost$ref$frost$core$Object$Q($tmp137);
org$frostlang$frostc$Type** $tmp138 = &((org$frostlang$frostc$Compiler*) $tmp137)->INT64_TYPE;
org$frostlang$frostc$Type* $tmp139 = *$tmp138;
frost$core$String* $tmp140 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
return $tmp140;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:76
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:77
org$frostlang$frostc$Type$Kind* $tmp141 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp142 = *$tmp141;
frost$core$Int $tmp143 = $tmp142.$rawValue;
frost$core$Int $tmp144 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:78:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s150));
frost$core$Error* $tmp151 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local0) = ((frost$core$Error*) NULL);
return &$s152;
block11:;
frost$core$Int $tmp153 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:81:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp154 = $tmp143.value;
int64_t $tmp155 = $tmp153.value;
bool $tmp156 = $tmp154 == $tmp155;
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:82
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int from HCodeGenerator.frost:82:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp159 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp160 = *$tmp159;
frost$core$Int $tmp161 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int($tmp160, param1);
frost$core$Int $tmp162 = (frost$core$Int) {8u};
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163 * $tmp164;
frost$core$Int $tmp166 = (frost$core$Int) {$tmp165};
frost$core$Int$wrapper* $tmp167;
$tmp167 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp167->value = $tmp166;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:82:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn169 $tmp168 = ($fn169) ((frost$core$Object*) $tmp167)->$class->vtable[0];
frost$core$String* $tmp170 = $tmp168(((frost$core$Object*) $tmp167));
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s172, $tmp170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$String* $tmp173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, &$s174);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Error* $tmp175 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp173;
block14:;
frost$core$Int $tmp176 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:84:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp177 = $tmp143.value;
int64_t $tmp178 = $tmp176.value;
bool $tmp179 = $tmp177 == $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:85
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int from HCodeGenerator.frost:85:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp182 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp183 = *$tmp182;
frost$core$Int $tmp184 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int($tmp183, param1);
frost$core$Int $tmp185 = (frost$core$Int) {8u};
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185.value;
int64_t $tmp188 = $tmp186 * $tmp187;
frost$core$Int $tmp189 = (frost$core$Int) {$tmp188};
frost$core$Int$wrapper* $tmp190;
$tmp190 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp190->value = $tmp189;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:85:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn192 $tmp191 = ($fn192) ((frost$core$Object*) $tmp190)->$class->vtable[0];
frost$core$String* $tmp193 = $tmp191(((frost$core$Object*) $tmp190));
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s195, $tmp193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$String* $tmp196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp194, &$s197);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Error* $tmp198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp196;
block19:;
frost$core$Int $tmp199 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:87:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp200 = $tmp143.value;
int64_t $tmp201 = $tmp199.value;
bool $tmp202 = $tmp200 == $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s205));
frost$core$Error* $tmp206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local0) = ((frost$core$Error*) NULL);
return &$s207;
block24:;
frost$core$Int $tmp208 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:90:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp209 = $tmp143.value;
int64_t $tmp210 = $tmp208.value;
bool $tmp211 = $tmp209 == $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:91
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int from HCodeGenerator.frost:91:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp214 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp215 = *$tmp214;
frost$core$Int $tmp216 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int($tmp215, param1);
frost$core$Int $tmp217 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:92:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 == $tmp219;
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:92
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s223));
frost$core$Error* $tmp224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local0) = ((frost$core$Error*) NULL);
return &$s225;
block32:;
frost$core$Int $tmp226 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:93:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp227 = $tmp216.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 == $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s232));
frost$core$Error* $tmp233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local0) = ((frost$core$Error*) NULL);
return &$s234;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:94
frost$core$Int $tmp235 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s236, $tmp235);
abort(); // unreachable
block27:;
frost$core$Int $tmp237 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:97:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp238 = $tmp143.value;
int64_t $tmp239 = $tmp237.value;
bool $tmp240 = $tmp238 == $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:98
frost$core$String** $tmp243 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp244 = *$tmp243;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:98:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp245 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp246 = *$tmp245;
frost$core$String* $tmp247 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp246, $tmp244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$String* $tmp248 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local1) = $tmp247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:99
frost$core$Weak** $tmp249 = &param0->compiler;
frost$core$Weak* $tmp250 = *$tmp249;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:99:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp251 = &$tmp250->_valid;
frost$core$Bit $tmp252 = *$tmp251;
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block43; else goto block44;
block44:;
frost$core$Int $tmp254 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s255, $tmp254);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp256 = &$tmp250->value;
frost$core$Object* $tmp257 = *$tmp256;
frost$core$Frost$ref$frost$core$Object$Q($tmp257);
org$frostlang$frostc$ClassDecl* $tmp258 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp257), param1);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
org$frostlang$frostc$ClassDecl* $tmp259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local2) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:100
org$frostlang$frostc$ClassDecl* $tmp260 = *(&local2);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260 != NULL};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block45; else goto block46;
block46:;
frost$core$Int $tmp263 = (frost$core$Int) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s264, $tmp263);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:101
frost$core$Weak** $tmp265 = &param0->compiler;
frost$core$Weak* $tmp266 = *$tmp265;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:101:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp267 = &$tmp266->_valid;
frost$core$Bit $tmp268 = *$tmp267;
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block51; else goto block52;
block52:;
frost$core$Int $tmp270 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s271, $tmp270);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp272 = &$tmp266->value;
frost$core$Object* $tmp273 = *$tmp272;
frost$core$Frost$ref$frost$core$Object$Q($tmp273);
org$frostlang$frostc$ClassDecl* $tmp274 = *(&local2);
frost$core$Bit $tmp275 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp273), $tmp274);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:101:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp276 = $tmp275.value;
bool $tmp277 = !$tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp273);
if ($tmp279) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:102
frost$collections$HashSet** $tmp280 = &param0->imports;
frost$collections$HashSet* $tmp281 = *$tmp280;
frost$core$String* $tmp282 = *(&local1);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:102:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp283 = &$tmp281->contents;
frost$collections$HashMap* $tmp284 = *$tmp283;
frost$core$Bit $tmp285 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp284, ((frost$collections$Key*) $tmp282));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:102:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp286 = $tmp285.value;
bool $tmp287 = !$tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:103
frost$io$MemoryOutputStream** $tmp290 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp291 = *$tmp290;
frost$core$String* $tmp292 = *(&local1);
frost$core$String* $tmp293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s294, $tmp292);
frost$core$String* $tmp295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp293, &$s296);
frost$core$String* $tmp297 = *(&local1);
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp295, $tmp297);
frost$core$String* $tmp299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, &$s300);
$fn302 $tmp301 = ($fn302) ((frost$io$OutputStream*) $tmp291)->$class->vtable[19];
frost$core$Error* $tmp303 = $tmp301(((frost$io$OutputStream*) $tmp291), $tmp299);
if ($tmp303 == NULL) goto block58; else goto block59;
block59:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
org$frostlang$frostc$ClassDecl* $tmp304 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:104
frost$collections$HashSet** $tmp306 = &param0->imports;
frost$collections$HashSet* $tmp307 = *$tmp306;
frost$core$String* $tmp308 = *(&local1);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:104:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp309 = &$tmp307->contents;
frost$collections$HashMap* $tmp310 = *$tmp309;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp310, ((frost$collections$Key*) $tmp308), ((frost$core$Object*) ((frost$collections$Key*) $tmp308)));
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:106
frost$core$String* $tmp311 = *(&local1);
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp311, &$s313);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
org$frostlang$frostc$ClassDecl* $tmp314 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp315 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp316 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp312;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:108
org$frostlang$frostc$ClassDecl* $tmp317 = *(&local2);
frost$core$String* $tmp318 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp317, &$s319);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$String* $tmp320 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local3) = $tmp318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:109
frost$collections$HashSet** $tmp321 = &param0->imports;
frost$collections$HashSet* $tmp322 = *$tmp321;
frost$core$String* $tmp323 = *(&local3);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:109:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp324 = &$tmp322->contents;
frost$collections$HashMap* $tmp325 = *$tmp324;
frost$core$Bit $tmp326 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp325, ((frost$collections$Key*) $tmp323));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:109:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp327 = $tmp326.value;
bool $tmp328 = !$tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:110
frost$io$MemoryOutputStream** $tmp331 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp332 = *$tmp331;
frost$core$String* $tmp333 = *(&local3);
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s335, $tmp333);
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, &$s337);
$fn339 $tmp338 = ($fn339) ((frost$io$OutputStream*) $tmp332)->$class->vtable[19];
frost$core$Error* $tmp340 = $tmp338(((frost$io$OutputStream*) $tmp332), $tmp336);
if ($tmp340 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local0) = $tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$String* $tmp341 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp342 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp343 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:111
frost$collections$HashSet** $tmp344 = &param0->imports;
frost$collections$HashSet* $tmp345 = *$tmp344;
frost$core$String* $tmp346 = *(&local3);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:111:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp347 = &$tmp345->contents;
frost$collections$HashMap* $tmp348 = *$tmp347;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp348, ((frost$collections$Key*) $tmp346), ((frost$core$Object*) ((frost$collections$Key*) $tmp346)));
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:113
frost$core$String* $tmp349 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$core$String* $tmp350 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp351 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp352 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp353 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp349;
block38:;
frost$core$Int $tmp354 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:115:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp355 = $tmp143.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 == $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:116
frost$core$Weak** $tmp360 = &param0->compiler;
frost$core$Weak* $tmp361 = *$tmp360;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:116:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp362 = &$tmp361->_valid;
frost$core$Bit $tmp363 = *$tmp362;
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block73; else goto block74;
block74:;
frost$core$Int $tmp365 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s366, $tmp365);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp367 = &$tmp361->value;
frost$core$Object* $tmp368 = *$tmp367;
frost$core$Frost$ref$frost$core$Object$Q($tmp368);
org$frostlang$frostc$ClassDecl* $tmp369 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp368), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$ClassDecl* $tmp370 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local4) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q($tmp368);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:117
org$frostlang$frostc$ClassDecl* $tmp371 = *(&local4);
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371 != NULL};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block75; else goto block76;
block76:;
frost$core$Int $tmp374 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s375, $tmp374);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:118
frost$core$Weak** $tmp376 = &param0->compiler;
frost$core$Weak* $tmp377 = *$tmp376;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:118:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp378 = &$tmp377->_valid;
frost$core$Bit $tmp379 = *$tmp378;
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block81; else goto block82;
block82:;
frost$core$Int $tmp381 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s382, $tmp381);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp383 = &$tmp377->value;
frost$core$Object* $tmp384 = *$tmp383;
frost$core$Frost$ref$frost$core$Object$Q($tmp384);
org$frostlang$frostc$ClassDecl* $tmp385 = *(&local4);
frost$core$Bit $tmp386 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp384), $tmp385);
bool $tmp387 = $tmp386.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp384);
if ($tmp387) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:119
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:119:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp388 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp389 = *$tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389 != NULL};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block84; else goto block85;
block85:;
frost$core$Int $tmp392 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s393, $tmp392);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp394 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp395 = *$tmp394;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Int $tmp396 = (frost$core$Int) {0u};
frost$core$Object* $tmp397 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp395, $tmp396);
frost$core$String* $tmp398 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp397));
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp398, &$s400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q($tmp397);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$ClassDecl* $tmp401 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp402 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp399;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:121
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:121:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp403 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp404 = *$tmp403;
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404 != NULL};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block87; else goto block88;
block88:;
frost$core$Int $tmp407 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s408, $tmp407);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp409 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp410 = *$tmp409;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Int $tmp411 = (frost$core$Int) {0u};
frost$core$Object* $tmp412 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp410, $tmp411);
frost$core$String* $tmp413 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp412));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q($tmp412);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$ClassDecl* $tmp414 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp413;
block69:;
frost$core$Int $tmp416 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:123:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp417 = $tmp143.value;
int64_t $tmp418 = $tmp416.value;
bool $tmp419 = $tmp417 == $tmp418;
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:124
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:124:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp422 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp423 = *$tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423 != NULL};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block95; else goto block96;
block96:;
frost$core$Int $tmp426 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s427, $tmp426);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp428 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp429 = *$tmp428;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Int $tmp430 = (frost$core$Int) {0u};
frost$core$Object* $tmp431 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp429, $tmp430);
frost$core$String** $tmp432 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp431))->name;
frost$core$String* $tmp433 = *$tmp432;
frost$core$Bit $tmp434 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp433, &$s435);
bool $tmp436 = $tmp434.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp431);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
if ($tmp436) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:125
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:125:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp437 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp438 = *$tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438 != NULL};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block98; else goto block99;
block99:;
frost$core$Int $tmp441 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s442, $tmp441);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp443 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp444 = *$tmp443;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Int $tmp445 = (frost$core$Int) {1u};
frost$core$Object* $tmp446 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp444, $tmp445);
frost$core$String* $tmp447 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp446));
frost$core$String* $tmp448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp447, &$s449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Error* $tmp450 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp448;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:127
frost$core$Weak** $tmp451 = &param0->compiler;
frost$core$Weak* $tmp452 = *$tmp451;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:127:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp453 = &$tmp452->_valid;
frost$core$Bit $tmp454 = *$tmp453;
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block102; else goto block103;
block103:;
frost$core$Int $tmp456 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s457, $tmp456);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp458 = &$tmp452->value;
frost$core$Object* $tmp459 = *$tmp458;
frost$core$Frost$ref$frost$core$Object$Q($tmp459);
org$frostlang$frostc$ClassDecl* $tmp460 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp459), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
org$frostlang$frostc$ClassDecl* $tmp461 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local5) = $tmp460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q($tmp459);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:128
org$frostlang$frostc$ClassDecl* $tmp462 = *(&local5);
// begin inline call to function org.frostlang.frostc.ClassDecl.isSpecialization():frost.core.Bit from HCodeGenerator.frost:128:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp463 = &$tmp462->name;
frost$core$String* $tmp464 = *$tmp463;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
frost$core$String$Index$nullable $tmp465 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q($tmp464, &$s466);
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp465.nonnull};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:129
frost$core$String** $tmp469 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp470 = *$tmp469;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp471 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp472 = *$tmp471;
frost$core$String* $tmp473 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp472, $tmp470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$String* $tmp474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp473, &$s475);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$String* $tmp476 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local6) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:130
frost$core$Weak** $tmp477 = &param0->compiler;
frost$core$Weak* $tmp478 = *$tmp477;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:130:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp479 = &$tmp478->_valid;
frost$core$Bit $tmp480 = *$tmp479;
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block112; else goto block113;
block113:;
frost$core$Int $tmp482 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s483, $tmp482);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp484 = &$tmp478->value;
frost$core$Object* $tmp485 = *$tmp484;
frost$core$Frost$ref$frost$core$Object$Q($tmp485);
org$frostlang$frostc$ClassDecl* $tmp486 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp485), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
org$frostlang$frostc$ClassDecl* $tmp487 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local7) = $tmp486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q($tmp485);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:131
org$frostlang$frostc$ClassDecl* $tmp488 = *(&local7);
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488 != NULL};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block114; else goto block115;
block115:;
frost$core$Int $tmp491 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s492, $tmp491);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:132
frost$core$Weak** $tmp493 = &param0->compiler;
frost$core$Weak* $tmp494 = *$tmp493;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:132:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp495 = &$tmp494->_valid;
frost$core$Bit $tmp496 = *$tmp495;
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block120; else goto block121;
block121:;
frost$core$Int $tmp498 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s499, $tmp498);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp500 = &$tmp494->value;
frost$core$Object* $tmp501 = *$tmp500;
frost$core$Frost$ref$frost$core$Object$Q($tmp501);
org$frostlang$frostc$ClassDecl* $tmp502 = *(&local7);
frost$core$Bit $tmp503 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp501), $tmp502);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:132:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp504 = $tmp503.value;
bool $tmp505 = !$tmp504;
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505};
bool $tmp507 = $tmp506.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
if ($tmp507) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:133
frost$collections$HashSet** $tmp508 = &param0->imports;
frost$collections$HashSet* $tmp509 = *$tmp508;
frost$core$String* $tmp510 = *(&local6);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:133:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp511 = &$tmp509->contents;
frost$collections$HashMap* $tmp512 = *$tmp511;
frost$core$Bit $tmp513 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp512, ((frost$collections$Key*) $tmp510));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:133:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp514 = $tmp513.value;
bool $tmp515 = !$tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block123; else goto block124;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:134
frost$io$MemoryOutputStream** $tmp518 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp519 = *$tmp518;
frost$core$String* $tmp520 = *(&local6);
frost$core$String* $tmp521 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s522, $tmp520);
frost$core$String* $tmp523 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp521, &$s524);
frost$core$String* $tmp525 = *(&local6);
frost$core$String* $tmp526 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp523, $tmp525);
frost$core$String* $tmp527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp526, &$s528);
$fn530 $tmp529 = ($fn530) ((frost$io$OutputStream*) $tmp519)->$class->vtable[19];
frost$core$Error* $tmp531 = $tmp529(((frost$io$OutputStream*) $tmp519), $tmp527);
if ($tmp531 == NULL) goto block127; else goto block128;
block128:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local0) = $tmp531;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
org$frostlang$frostc$ClassDecl* $tmp532 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp533 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp534 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block7;
block127:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:135
frost$collections$HashSet** $tmp535 = &param0->imports;
frost$collections$HashSet* $tmp536 = *$tmp535;
frost$core$String* $tmp537 = *(&local6);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:135:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp538 = &$tmp536->contents;
frost$collections$HashMap* $tmp539 = *$tmp538;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp539, ((frost$collections$Key*) $tmp537), ((frost$core$Object*) ((frost$collections$Key*) $tmp537)));
goto block124;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:137
frost$core$String* $tmp540 = *(&local6);
frost$core$String* $tmp541 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp540, &$s542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
org$frostlang$frostc$ClassDecl* $tmp543 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp544 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp545 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp546 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp541;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:139
org$frostlang$frostc$ClassDecl* $tmp547 = *(&local7);
frost$core$String* $tmp548 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp547, &$s549);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$String* $tmp550 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local8) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:140
frost$collections$HashSet** $tmp551 = &param0->imports;
frost$collections$HashSet* $tmp552 = *$tmp551;
frost$core$String* $tmp553 = *(&local8);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:140:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp554 = &$tmp552->contents;
frost$collections$HashMap* $tmp555 = *$tmp554;
frost$core$Bit $tmp556 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp555, ((frost$collections$Key*) $tmp553));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:140:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp557 = $tmp556.value;
bool $tmp558 = !$tmp557;
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:141
frost$io$MemoryOutputStream** $tmp561 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp562 = *$tmp561;
frost$core$String* $tmp563 = *(&local8);
frost$core$String* $tmp564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s565, $tmp563);
frost$core$String* $tmp566 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp564, &$s567);
$fn569 $tmp568 = ($fn569) ((frost$io$OutputStream*) $tmp562)->$class->vtable[19];
frost$core$Error* $tmp570 = $tmp568(((frost$io$OutputStream*) $tmp562), $tmp566);
if ($tmp570 == NULL) goto block134; else goto block135;
block135:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local0) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$String* $tmp571 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp572 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp573 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp574 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block7;
block134:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:142
frost$collections$HashSet** $tmp575 = &param0->imports;
frost$collections$HashSet* $tmp576 = *$tmp575;
frost$core$String* $tmp577 = *(&local8);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:142:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp578 = &$tmp576->contents;
frost$collections$HashMap* $tmp579 = *$tmp578;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp579, ((frost$collections$Key*) $tmp577), ((frost$core$Object*) ((frost$collections$Key*) $tmp577)));
goto block131;
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:144
frost$core$String* $tmp580 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$String* $tmp581 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp582 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp583 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp584 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp585 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp580;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:146
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:146:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp586 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp587 = *$tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587 != NULL};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block138; else goto block139;
block139:;
frost$core$Int $tmp590 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s591, $tmp590);
abort(); // unreachable
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp592 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp593 = *$tmp592;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Int $tmp594 = (frost$core$Int) {0u};
frost$core$Object* $tmp595 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp593, $tmp594);
frost$core$String* $tmp596 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp595));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q($tmp595);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
org$frostlang$frostc$ClassDecl* $tmp597 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp598 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp596;
block90:;
frost$core$Int $tmp599 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:148:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp600 = $tmp143.value;
int64_t $tmp601 = $tmp599.value;
bool $tmp602 = $tmp600 == $tmp601;
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:149
frost$core$Weak** $tmp605 = &param1->genericClassParameter;
frost$core$Weak* $tmp606 = *$tmp605;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:149:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp607 = &$tmp606->_valid;
frost$core$Bit $tmp608 = *$tmp607;
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block145; else goto block146;
block146:;
frost$core$Int $tmp610 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s611, $tmp610);
abort(); // unreachable
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp612 = &$tmp606->value;
frost$core$Object* $tmp613 = *$tmp612;
frost$core$Frost$ref$frost$core$Object$Q($tmp613);
org$frostlang$frostc$Type** $tmp614 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp613)->bound;
org$frostlang$frostc$Type* $tmp615 = *$tmp614;
frost$core$String* $tmp616 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp615);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q($tmp613);
frost$core$Error* $tmp617 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp616;
block141:;
frost$core$Int $tmp618 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp619 = $tmp143.value;
int64_t $tmp620 = $tmp618.value;
bool $tmp621 = $tmp619 == $tmp620;
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:152
frost$core$Weak** $tmp624 = &param1->genericMethodParameter;
frost$core$Weak* $tmp625 = *$tmp624;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:152:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp626 = &$tmp625->_valid;
frost$core$Bit $tmp627 = *$tmp626;
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block152; else goto block153;
block153:;
frost$core$Int $tmp629 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s630, $tmp629);
abort(); // unreachable
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp631 = &$tmp625->value;
frost$core$Object* $tmp632 = *$tmp631;
frost$core$Frost$ref$frost$core$Object$Q($tmp632);
org$frostlang$frostc$Type** $tmp633 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp632)->bound;
org$frostlang$frostc$Type* $tmp634 = *$tmp633;
frost$core$String* $tmp635 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q($tmp632);
frost$core$Error* $tmp636 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp635;
block148:;
frost$core$Int $tmp637 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp638 = $tmp143.value;
int64_t $tmp639 = $tmp637.value;
bool $tmp640 = $tmp638 == $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block154; else goto block155;
block155:;
frost$core$Int $tmp643 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:154:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp644 = $tmp143.value;
int64_t $tmp645 = $tmp643.value;
bool $tmp646 = $tmp644 == $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block154; else goto block157;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:155
frost$core$Weak** $tmp649 = &param0->compiler;
frost$core$Weak* $tmp650 = *$tmp649;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:155:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp651 = &$tmp650->_valid;
frost$core$Bit $tmp652 = *$tmp651;
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block161; else goto block162;
block162:;
frost$core$Int $tmp654 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s655, $tmp654);
abort(); // unreachable
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp656 = &$tmp650->value;
frost$core$Object* $tmp657 = *$tmp656;
frost$core$Frost$ref$frost$core$Object$Q($tmp657);
org$frostlang$frostc$Type** $tmp658 = &((org$frostlang$frostc$Compiler*) $tmp657)->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp659 = *$tmp658;
frost$core$String* $tmp660 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q($tmp657);
frost$core$Error* $tmp661 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp660;
block157:;
frost$core$Int $tmp662 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:157:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp663 = $tmp143.value;
int64_t $tmp664 = $tmp662.value;
bool $tmp665 = $tmp663 == $tmp664;
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block163; else goto block164;
block164:;
frost$core$Int $tmp668 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:157:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp669 = $tmp143.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block163; else goto block166;
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:158
frost$core$Weak** $tmp674 = &param0->compiler;
frost$core$Weak* $tmp675 = *$tmp674;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:158:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp676 = &$tmp675->_valid;
frost$core$Bit $tmp677 = *$tmp676;
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block170; else goto block171;
block171:;
frost$core$Int $tmp679 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s680, $tmp679);
abort(); // unreachable
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp681 = &$tmp675->value;
frost$core$Object* $tmp682 = *$tmp681;
frost$core$Frost$ref$frost$core$Object$Q($tmp682);
org$frostlang$frostc$Type** $tmp683 = &((org$frostlang$frostc$Compiler*) $tmp682)->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp684 = *$tmp683;
frost$core$String* $tmp685 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp684);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q($tmp682);
frost$core$Error* $tmp686 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp685;
block166:;
frost$core$Int $tmp687 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:160:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp688 = $tmp143.value;
int64_t $tmp689 = $tmp687.value;
bool $tmp690 = $tmp688 == $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block172; else goto block173;
block172:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:161
frost$core$Weak** $tmp693 = &param0->compiler;
frost$core$Weak* $tmp694 = *$tmp693;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:161:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp695 = &$tmp694->_valid;
frost$core$Bit $tmp696 = *$tmp695;
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block177; else goto block178;
block178:;
frost$core$Int $tmp698 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s699, $tmp698);
abort(); // unreachable
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp700 = &$tmp694->value;
frost$core$Object* $tmp701 = *$tmp700;
frost$core$Frost$ref$frost$core$Object$Q($tmp701);
org$frostlang$frostc$ClassDecl* $tmp702 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp701), param1);
org$frostlang$frostc$Type** $tmp703 = &$tmp702->type;
org$frostlang$frostc$Type* $tmp704 = *$tmp703;
frost$core$String* $tmp705 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q($tmp701);
frost$core$Error* $tmp706 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp705;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:164
frost$core$Int $tmp707 = (frost$core$Int) {164u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:164:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn709 $tmp708 = ($fn709) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp710 = $tmp708(((frost$core$Object*) param1));
frost$core$String* $tmp711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s712, $tmp710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$String* $tmp713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp711, &$s714);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s715, $tmp707, $tmp713);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
abort(); // unreachable
block7:;
frost$core$Error* $tmp716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:170
frost$core$Int $tmp717 = (frost$core$Int) {170u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s718, $tmp717);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp719 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$String* $tmp720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp719, &$s721);
frost$core$String* $tmp722 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp720, param2);
frost$core$String* $tmp723 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp722, &$s724);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
return $tmp723;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:179
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp725 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp725, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Weak** $tmp726 = &param0->compiler;
frost$core$Weak* $tmp727 = *$tmp726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Weak** $tmp728 = &param0->compiler;
*$tmp728 = $tmp725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:180
org$frostlang$frostc$LLVMCodeGenerator** $tmp729 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp730 = *$tmp729;
// begin inline call to method org.frostlang.frostc.LLVMCodeGenerator.setCompiler(compiler:org.frostlang.frostc.Compiler) from HCodeGenerator.frost:180:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:123
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp731 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp731, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Weak** $tmp732 = &$tmp730->compiler;
frost$core$Weak* $tmp733 = *$tmp732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Weak** $tmp734 = &$tmp730->compiler;
*$tmp734 = $tmp731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp735 = &param0->outDir;
frost$io$File* $tmp736 = *$tmp735;
frost$core$String* $tmp737 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp738 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp736, $tmp737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
return $tmp738;

}
void org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$io$File* local2 = NULL;
frost$core$String* local3 = NULL;
frost$io$File* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String$Index$nullable local6;
org$frostlang$frostc$FieldDecl* local7 = NULL;
frost$core$Bit local8;
org$frostlang$frostc$ClassDecl* local9 = NULL;
frost$collections$ListView* local10 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:189
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:190
frost$io$MemoryOutputStream** $tmp739 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp740 = *$tmp739;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:190:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp741 = &$tmp740->data;
frost$core$MutableString* $tmp742 = *$tmp741;
frost$core$MutableString$clear($tmp742);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:191
frost$io$MemoryOutputStream** $tmp743 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp744 = *$tmp743;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:191:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp745 = &$tmp744->data;
frost$core$MutableString* $tmp746 = *$tmp745;
frost$core$MutableString$clear($tmp746);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:192
frost$io$MemoryOutputStream** $tmp747 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp748 = *$tmp747;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:192:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp749 = &$tmp748->data;
frost$core$MutableString* $tmp750 = *$tmp749;
frost$core$MutableString$clear($tmp750);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:193
frost$io$MemoryOutputStream** $tmp751 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp752 = *$tmp751;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:193:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp753 = &$tmp752->data;
frost$core$MutableString* $tmp754 = *$tmp753;
frost$core$MutableString$clear($tmp754);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:194
frost$collections$HashSet** $tmp755 = &param0->typeImports;
frost$collections$HashSet* $tmp756 = *$tmp755;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:194:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp757 = &$tmp756->contents;
frost$collections$HashMap* $tmp758 = *$tmp757;
frost$collections$HashMap$clear($tmp758);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:195
frost$collections$HashSet** $tmp759 = &param0->bodyImports;
frost$collections$HashSet* $tmp760 = *$tmp759;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:195:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp761 = &$tmp760->contents;
frost$collections$HashMap* $tmp762 = *$tmp761;
frost$collections$HashMap$clear($tmp762);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:196
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:196:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp763 = &param0->outDir;
frost$io$File* $tmp764 = *$tmp763;
frost$core$String* $tmp765 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s766);
frost$io$File* $tmp767 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp764, $tmp765);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$io$File* $tmp768 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local1) = $tmp767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:197
frost$io$File* $tmp769 = *(&local1);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from HCodeGenerator.frost:197:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp770 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp769, &$s771);
frost$core$String** $tmp772 = &$tmp770->path;
frost$core$String* $tmp773 = *$tmp772;
frost$core$String* $tmp774 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp773);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
frost$core$String* $tmp775 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local3) = $tmp774;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp776 = *(&local3);
frost$core$Bit $tmp777 = (frost$core$Bit) {$tmp776 == NULL};
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp779 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp780 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp781 = *(&local3);
frost$io$File$init$frost$core$String($tmp780, $tmp781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$String* $tmp782 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp780;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
goto block10;
block10:;
frost$io$File* $tmp783 = *(&local2);
frost$core$Error* $tmp784 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp783);
if ($tmp784 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local0) = $tmp784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$io$File* $tmp785 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp786 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:198
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp787 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp788 = *(&local1);
frost$core$Maybe* $tmp789 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp788);
frost$core$Int* $tmp790 = &$tmp789->$rawValue;
frost$core$Int $tmp791 = *$tmp790;
int64_t $tmp792 = $tmp791.value;
bool $tmp793 = $tmp792 == 0u;
if ($tmp793) goto block15; else goto block16;
block16:;
frost$core$Error** $tmp794 = (frost$core$Error**) ($tmp789->$data + 0);
frost$core$Error* $tmp795 = *$tmp794;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local0) = $tmp795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$io$File* $tmp796 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp797 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Object** $tmp798 = (frost$core$Object**) ($tmp789->$data + 0);
frost$core$Object* $tmp799 = *$tmp798;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp787, ((frost$io$OutputStream*) $tmp799));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$io$IndentedOutputStream** $tmp800 = &param0->out;
frost$io$IndentedOutputStream* $tmp801 = *$tmp800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
frost$io$IndentedOutputStream** $tmp802 = &param0->out;
*$tmp802 = $tmp787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:199
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:199:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp803 = &param0->outDir;
frost$io$File* $tmp804 = *$tmp803;
frost$core$String* $tmp805 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s806);
frost$io$File* $tmp807 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp804, $tmp805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$io$File* $tmp808 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local4) = $tmp807;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:200
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp809 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp810 = *(&local4);
frost$core$Maybe* $tmp811 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp810);
frost$core$Int* $tmp812 = &$tmp811->$rawValue;
frost$core$Int $tmp813 = *$tmp812;
int64_t $tmp814 = $tmp813.value;
bool $tmp815 = $tmp814 == 0u;
if ($tmp815) goto block18; else goto block19;
block19:;
frost$core$Error** $tmp816 = (frost$core$Error**) ($tmp811->$data + 0);
frost$core$Error* $tmp817 = *$tmp816;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local0) = $tmp817;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$io$File* $tmp818 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp819 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp820 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block18:;
frost$core$Object** $tmp821 = (frost$core$Object**) ($tmp811->$data + 0);
frost$core$Object* $tmp822 = *$tmp821;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp809, ((frost$io$OutputStream*) $tmp822));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$io$IndentedOutputStream** $tmp823 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp824 = *$tmp823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$io$IndentedOutputStream** $tmp825 = &param0->typesOut;
*$tmp825 = $tmp809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:201
frost$io$IndentedOutputStream** $tmp826 = &param0->out;
frost$io$IndentedOutputStream* $tmp827 = *$tmp826;
$fn829 $tmp828 = ($fn829) ((frost$io$OutputStream*) $tmp827)->$class->vtable[19];
frost$core$Error* $tmp830 = $tmp828(((frost$io$OutputStream*) $tmp827), &$s831);
if ($tmp830 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local0) = $tmp830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$io$File* $tmp832 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp833 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp834 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:202
frost$io$IndentedOutputStream** $tmp835 = &param0->out;
frost$io$IndentedOutputStream* $tmp836 = *$tmp835;
$fn838 $tmp837 = ($fn838) ((frost$io$OutputStream*) $tmp836)->$class->vtable[19];
frost$core$Error* $tmp839 = $tmp837(((frost$io$OutputStream*) $tmp836), &$s840);
if ($tmp839 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local0) = $tmp839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$io$File* $tmp841 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp842 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:203
frost$io$IndentedOutputStream** $tmp844 = &param0->out;
frost$io$IndentedOutputStream* $tmp845 = *$tmp844;
frost$io$File* $tmp846 = *(&local4);
// begin inline call to function frost.io.File.get_name():frost.core.String from HCodeGenerator.frost:203:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp847 = &$tmp846->path;
frost$core$String* $tmp848 = *$tmp847;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp849 = frost$core$String$get_end$R$frost$core$String$Index($tmp848);
frost$core$String$Index$nullable $tmp850 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp848, &$s851, $tmp849);
*(&local6) = $tmp850;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp852 = *(&local6);
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852.nonnull};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp855 = &$tmp846->path;
frost$core$String* $tmp856 = *$tmp855;
frost$core$String** $tmp857 = &$tmp846->path;
frost$core$String* $tmp858 = *$tmp857;
frost$core$String$Index$nullable $tmp859 = *(&local6);
frost$core$String$Index $tmp860 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp858, ((frost$core$String$Index) $tmp859.value));
frost$core$Bit $tmp861 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp862 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp860, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp861);
frost$core$String* $tmp863 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp856, $tmp862);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local5) = $tmp863;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
goto block24;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp864 = &$tmp846->path;
frost$core$String* $tmp865 = *$tmp864;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local5) = $tmp865;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
goto block24;
block27:;
goto block24;
block24:;
frost$core$String* $tmp866 = *(&local5);
frost$core$String* $tmp867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s868, $tmp866);
frost$core$String* $tmp869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp867, &$s870);
$fn872 $tmp871 = ($fn872) ((frost$io$OutputStream*) $tmp845)->$class->vtable[19];
frost$core$Error* $tmp873 = $tmp871(((frost$io$OutputStream*) $tmp845), $tmp869);
if ($tmp873 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local0) = $tmp873;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$String* $tmp874 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp875 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp876 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp877 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:204
frost$io$IndentedOutputStream** $tmp878 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp879 = *$tmp878;
$fn881 $tmp880 = ($fn881) ((frost$io$OutputStream*) $tmp879)->$class->vtable[19];
frost$core$Error* $tmp882 = $tmp880(((frost$io$OutputStream*) $tmp879), &$s883);
if ($tmp882 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local0) = $tmp882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$String* $tmp884 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp885 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp886 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp887 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:205
frost$io$IndentedOutputStream** $tmp888 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp889 = *$tmp888;
$fn891 $tmp890 = ($fn891) ((frost$io$OutputStream*) $tmp889)->$class->vtable[19];
frost$core$Error* $tmp892 = $tmp890(((frost$io$OutputStream*) $tmp889), &$s893);
if ($tmp892 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local0) = $tmp892;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$String* $tmp894 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp895 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp896 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp897 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:206
frost$io$MemoryOutputStream** $tmp898 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp899 = *$tmp898;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$io$MemoryOutputStream** $tmp900 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp901 = *$tmp900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$io$MemoryOutputStream** $tmp902 = &param0->importStream;
*$tmp902 = $tmp899;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:207
frost$collections$HashSet** $tmp903 = &param0->typeImports;
frost$collections$HashSet* $tmp904 = *$tmp903;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$collections$HashSet** $tmp905 = &param0->imports;
frost$collections$HashSet* $tmp906 = *$tmp905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
frost$collections$HashSet** $tmp907 = &param0->imports;
*$tmp907 = $tmp904;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:208
frost$io$IndentedOutputStream** $tmp908 = &param0->types;
frost$io$IndentedOutputStream* $tmp909 = *$tmp908;
frost$core$String** $tmp910 = &param1->name;
frost$core$String* $tmp911 = *$tmp910;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:208:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp912 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp913 = *$tmp912;
frost$core$String* $tmp914 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp913, $tmp911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$String* $tmp915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s916, $tmp914);
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp915, &$s918);
$fn920 $tmp919 = ($fn920) ((frost$io$OutputStream*) $tmp909)->$class->vtable[19];
frost$core$Error* $tmp921 = $tmp919(((frost$io$OutputStream*) $tmp909), $tmp917);
if ($tmp921 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local0) = $tmp921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$String* $tmp922 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp923 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp924 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp925 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:209
frost$io$IndentedOutputStream** $tmp926 = &param0->types;
frost$io$IndentedOutputStream* $tmp927 = *$tmp926;
frost$core$Int* $tmp928 = &$tmp927->level;
frost$core$Int $tmp929 = *$tmp928;
frost$core$Int $tmp930 = (frost$core$Int) {1u};
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930.value;
int64_t $tmp933 = $tmp931 + $tmp932;
frost$core$Int $tmp934 = (frost$core$Int) {$tmp933};
frost$core$Int* $tmp935 = &$tmp927->level;
*$tmp935 = $tmp934;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:210
frost$core$Weak** $tmp936 = &param0->compiler;
frost$core$Weak* $tmp937 = *$tmp936;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:210:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp938 = &$tmp937->_valid;
frost$core$Bit $tmp939 = *$tmp938;
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block40; else goto block41;
block41:;
frost$core$Int $tmp941 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s942, $tmp941);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp943 = &$tmp937->value;
frost$core$Object* $tmp944 = *$tmp943;
frost$core$Frost$ref$frost$core$Object$Q($tmp944);
frost$collections$ListView* $tmp945 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp944), param1);
ITable* $tmp946 = ((frost$collections$Iterable*) $tmp945)->$class->itable;
while ($tmp946->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp946 = $tmp946->next;
}
$fn948 $tmp947 = $tmp946->methods[0];
frost$collections$Iterator* $tmp949 = $tmp947(((frost$collections$Iterable*) $tmp945));
goto block42;
block42:;
ITable* $tmp950 = $tmp949->$class->itable;
while ($tmp950->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp950 = $tmp950->next;
}
$fn952 $tmp951 = $tmp950->methods[0];
frost$core$Bit $tmp953 = $tmp951($tmp949);
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block44; else goto block43;
block43:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp955 = $tmp949->$class->itable;
while ($tmp955->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp955 = $tmp955->next;
}
$fn957 $tmp956 = $tmp955->methods[1];
frost$core$Object* $tmp958 = $tmp956($tmp949);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp958)));
org$frostlang$frostc$FieldDecl* $tmp959 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp958);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:211
frost$core$Weak** $tmp960 = &param0->compiler;
frost$core$Weak* $tmp961 = *$tmp960;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:211:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp962 = &$tmp961->_valid;
frost$core$Bit $tmp963 = *$tmp962;
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block47; else goto block48;
block48:;
frost$core$Int $tmp965 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s966, $tmp965);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp967 = &$tmp961->value;
frost$core$Object* $tmp968 = *$tmp967;
frost$core$Frost$ref$frost$core$Object$Q($tmp968);
org$frostlang$frostc$FieldDecl* $tmp969 = *(&local7);
frost$core$Bit $tmp970 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp968), $tmp969);
frost$core$Frost$unref$frost$core$Object$Q($tmp968);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp971 = *(&local7);
org$frostlang$frostc$Type** $tmp972 = &$tmp971->type;
org$frostlang$frostc$Type* $tmp973 = *$tmp972;
frost$core$Weak** $tmp974 = &param0->compiler;
frost$core$Weak* $tmp975 = *$tmp974;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:212:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp976 = &$tmp975->_valid;
frost$core$Bit $tmp977 = *$tmp976;
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block54; else goto block55;
block55:;
frost$core$Int $tmp979 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s980, $tmp979);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp981 = &$tmp975->value;
frost$core$Object* $tmp982 = *$tmp981;
frost$core$Frost$ref$frost$core$Object$Q($tmp982);
org$frostlang$frostc$Type** $tmp983 = &((org$frostlang$frostc$Compiler*) $tmp982)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp984 = *$tmp983;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from HCodeGenerator.frost:212:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp985 = &((org$frostlang$frostc$Symbol*) $tmp973)->name;
frost$core$String* $tmp986 = *$tmp985;
frost$core$String** $tmp987 = &((org$frostlang$frostc$Symbol*) $tmp984)->name;
frost$core$String* $tmp988 = *$tmp987;
frost$core$Bit $tmp989 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp986, $tmp988);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Type$Kind* $tmp991 = &$tmp973->typeKind;
org$frostlang$frostc$Type$Kind $tmp992 = *$tmp991;
org$frostlang$frostc$Type$Kind$wrapper* $tmp993;
$tmp993 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp993->value = $tmp992;
org$frostlang$frostc$Type$Kind* $tmp994 = &$tmp984->typeKind;
org$frostlang$frostc$Type$Kind $tmp995 = *$tmp994;
org$frostlang$frostc$Type$Kind$wrapper* $tmp996;
$tmp996 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp996->value = $tmp995;
ITable* $tmp997 = ((frost$core$Equatable*) $tmp993)->$class->itable;
while ($tmp997->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp997 = $tmp997->next;
}
$fn999 $tmp998 = $tmp997->methods[0];
frost$core$Bit $tmp1000 = $tmp998(((frost$core$Equatable*) $tmp993), ((frost$core$Equatable*) $tmp996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp996)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp993)));
*(&local8) = $tmp1000;
goto block59;
block58:;
*(&local8) = $tmp989;
goto block59;
block59:;
frost$core$Bit $tmp1001 = *(&local8);
bool $tmp1002 = $tmp1001.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp982);
if ($tmp1002) goto block49; else goto block51;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:213
frost$io$IndentedOutputStream** $tmp1003 = &param0->types;
frost$io$IndentedOutputStream* $tmp1004 = *$tmp1003;
org$frostlang$frostc$FieldDecl* $tmp1005 = *(&local7);
frost$core$String** $tmp1006 = &((org$frostlang$frostc$Symbol*) $tmp1005)->name;
frost$core$String* $tmp1007 = *$tmp1006;
frost$core$String* $tmp1008 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1009, $tmp1007);
frost$core$String* $tmp1010 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1008, &$s1011);
org$frostlang$frostc$LLVMCodeGenerator** $tmp1012 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1013 = *$tmp1012;
frost$core$Int $tmp1014 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int($tmp1013, param1);
frost$core$Int$wrapper* $tmp1015;
$tmp1015 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1015->value = $tmp1014;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:213:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1017 $tmp1016 = ($fn1017) ((frost$core$Object*) $tmp1015)->$class->vtable[0];
frost$core$String* $tmp1018 = $tmp1016(((frost$core$Object*) $tmp1015));
frost$core$String* $tmp1019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1010, $tmp1018);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$String* $tmp1020 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1019, &$s1021);
$fn1023 $tmp1022 = ($fn1023) ((frost$io$OutputStream*) $tmp1004)->$class->vtable[19];
frost$core$Error* $tmp1024 = $tmp1022(((frost$io$OutputStream*) $tmp1004), $tmp1020);
if ($tmp1024 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local0) = $tmp1024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$Frost$unref$frost$core$Object$Q($tmp958);
org$frostlang$frostc$FieldDecl* $tmp1025 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q($tmp944);
frost$core$String* $tmp1026 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1027 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1028 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1029 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
goto block50;
block51:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:216
frost$io$IndentedOutputStream** $tmp1030 = &param0->types;
frost$io$IndentedOutputStream* $tmp1031 = *$tmp1030;
org$frostlang$frostc$FieldDecl* $tmp1032 = *(&local7);
org$frostlang$frostc$Type** $tmp1033 = &$tmp1032->type;
org$frostlang$frostc$Type* $tmp1034 = *$tmp1033;
frost$core$String* $tmp1035 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1034);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:216:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$String* $tmp1036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1035, &$s1037);
org$frostlang$frostc$FieldDecl* $tmp1038 = *(&local7);
frost$core$String** $tmp1039 = &((org$frostlang$frostc$Symbol*) $tmp1038)->name;
frost$core$String* $tmp1040 = *$tmp1039;
frost$core$String* $tmp1041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1036, $tmp1040);
frost$core$String* $tmp1042 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1041, &$s1043);
$fn1045 $tmp1044 = ($fn1045) ((frost$io$OutputStream*) $tmp1031)->$class->vtable[19];
frost$core$Error* $tmp1046 = $tmp1044(((frost$io$OutputStream*) $tmp1031), $tmp1042);
if ($tmp1046 == NULL) goto block64; else goto block65;
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local0) = $tmp1046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q($tmp958);
org$frostlang$frostc$FieldDecl* $tmp1047 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q($tmp944);
frost$core$String* $tmp1048 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1049 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1050 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1051 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block64:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp958);
org$frostlang$frostc$FieldDecl* $tmp1052 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block42;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q($tmp944);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:219
frost$core$String** $tmp1053 = &param1->name;
frost$core$String* $tmp1054 = *$tmp1053;
frost$core$Bit $tmp1055 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1054, &$s1056);
bool $tmp1057 = $tmp1055.value;
if ($tmp1057) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:220
frost$io$IndentedOutputStream** $tmp1058 = &param0->types;
frost$io$IndentedOutputStream* $tmp1059 = *$tmp1058;
$fn1061 $tmp1060 = ($fn1061) ((frost$io$OutputStream*) $tmp1059)->$class->vtable[19];
frost$core$Error* $tmp1062 = $tmp1060(((frost$io$OutputStream*) $tmp1059), &$s1063);
if ($tmp1062 == NULL) goto block68; else goto block69;
block69:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local0) = $tmp1062;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$String* $tmp1064 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1065 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1066 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1067 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:221
frost$io$IndentedOutputStream** $tmp1068 = &param0->types;
frost$io$IndentedOutputStream* $tmp1069 = *$tmp1068;
$fn1071 $tmp1070 = ($fn1071) ((frost$io$OutputStream*) $tmp1069)->$class->vtable[19];
frost$core$Error* $tmp1072 = $tmp1070(((frost$io$OutputStream*) $tmp1069), &$s1073);
if ($tmp1072 == NULL) goto block70; else goto block71;
block71:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local0) = $tmp1072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$String* $tmp1074 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1075 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1076 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1077 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block70:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
goto block67;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:223
frost$io$IndentedOutputStream** $tmp1078 = &param0->types;
frost$io$IndentedOutputStream* $tmp1079 = *$tmp1078;
frost$core$Int* $tmp1080 = &$tmp1079->level;
frost$core$Int $tmp1081 = *$tmp1080;
frost$core$Int $tmp1082 = (frost$core$Int) {1u};
int64_t $tmp1083 = $tmp1081.value;
int64_t $tmp1084 = $tmp1082.value;
int64_t $tmp1085 = $tmp1083 - $tmp1084;
frost$core$Int $tmp1086 = (frost$core$Int) {$tmp1085};
frost$core$Int* $tmp1087 = &$tmp1079->level;
*$tmp1087 = $tmp1086;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:224
frost$io$IndentedOutputStream** $tmp1088 = &param0->types;
frost$io$IndentedOutputStream* $tmp1089 = *$tmp1088;
frost$core$String** $tmp1090 = &param1->name;
frost$core$String* $tmp1091 = *$tmp1090;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:224:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1092 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1093 = *$tmp1092;
frost$core$String* $tmp1094 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1093, $tmp1091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
frost$core$String* $tmp1095 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1096, $tmp1094);
frost$core$String* $tmp1097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1095, &$s1098);
$fn1100 $tmp1099 = ($fn1100) ((frost$io$OutputStream*) $tmp1089)->$class->vtable[19];
frost$core$Error* $tmp1101 = $tmp1099(((frost$io$OutputStream*) $tmp1089), $tmp1097);
if ($tmp1101 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
*(&local0) = $tmp1101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
frost$core$String* $tmp1102 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1103 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1104 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:225
frost$io$IndentedOutputStream** $tmp1106 = &param0->types;
frost$io$IndentedOutputStream* $tmp1107 = *$tmp1106;
$fn1109 $tmp1108 = ($fn1109) ((frost$io$OutputStream*) $tmp1107)->$class->vtable[19];
frost$core$Error* $tmp1110 = $tmp1108(((frost$io$OutputStream*) $tmp1107), &$s1111);
if ($tmp1110 == NULL) goto block75; else goto block76;
block76:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
*(&local0) = $tmp1110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
frost$core$String* $tmp1112 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1113 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1114 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1115 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:226
frost$io$IndentedOutputStream** $tmp1116 = &param0->types;
frost$io$IndentedOutputStream* $tmp1117 = *$tmp1116;
frost$core$Weak** $tmp1118 = &param0->compiler;
frost$core$Weak* $tmp1119 = *$tmp1118;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1120 = &$tmp1119->_valid;
frost$core$Bit $tmp1121 = *$tmp1120;
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block79; else goto block80;
block80:;
frost$core$Int $tmp1123 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1124, $tmp1123);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1125 = &$tmp1119->value;
frost$core$Object* $tmp1126 = *$tmp1125;
frost$core$Frost$ref$frost$core$Object$Q($tmp1126);
org$frostlang$frostc$Type** $tmp1127 = &((org$frostlang$frostc$Compiler*) $tmp1126)->STRING_TYPE;
org$frostlang$frostc$Type* $tmp1128 = *$tmp1127;
frost$core$String* $tmp1129 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1128);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:227:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$String* $tmp1130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1129, &$s1131);
frost$core$Weak** $tmp1132 = &param0->compiler;
frost$core$Weak* $tmp1133 = *$tmp1132;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1134 = &$tmp1133->_valid;
frost$core$Bit $tmp1135 = *$tmp1134;
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block84; else goto block85;
block85:;
frost$core$Int $tmp1137 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1138, $tmp1137);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1139 = &$tmp1133->value;
frost$core$Object* $tmp1140 = *$tmp1139;
frost$core$Frost$ref$frost$core$Object$Q($tmp1140);
org$frostlang$frostc$Type** $tmp1141 = &((org$frostlang$frostc$Compiler*) $tmp1140)->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1142 = *$tmp1141;
frost$core$String* $tmp1143 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1142);
frost$core$String* $tmp1144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1130, $tmp1143);
frost$core$String* $tmp1145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1144, &$s1146);
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1148, $tmp1145);
frost$core$Weak** $tmp1149 = &param0->compiler;
frost$core$Weak* $tmp1150 = *$tmp1149;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:228:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1151 = &$tmp1150->_valid;
frost$core$Bit $tmp1152 = *$tmp1151;
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block88; else goto block89;
block89:;
frost$core$Int $tmp1154 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1155, $tmp1154);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1156 = &$tmp1150->value;
frost$core$Object* $tmp1157 = *$tmp1156;
frost$core$Frost$ref$frost$core$Object$Q($tmp1157);
frost$collections$ListView* $tmp1158 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1157), param1);
ITable* $tmp1159 = ((frost$collections$CollectionView*) $tmp1158)->$class->itable;
while ($tmp1159->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1159 = $tmp1159->next;
}
$fn1161 $tmp1160 = $tmp1159->methods[0];
frost$core$Int $tmp1162 = $tmp1160(((frost$collections$CollectionView*) $tmp1158));
frost$core$Int$wrapper* $tmp1163;
$tmp1163 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1163->value = $tmp1162;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:228:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1165 $tmp1164 = ($fn1165) ((frost$core$Object*) $tmp1163)->$class->vtable[0];
frost$core$String* $tmp1166 = $tmp1164(((frost$core$Object*) $tmp1163));
frost$core$String* $tmp1167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1168, $tmp1166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$String* $tmp1169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1167, &$s1170);
frost$core$String* $tmp1171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1147, $tmp1169);
frost$core$String** $tmp1172 = &param1->name;
frost$core$String* $tmp1173 = *$tmp1172;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1174 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1175 = *$tmp1174;
frost$core$String* $tmp1176 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1175, $tmp1173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$String* $tmp1177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1176, &$s1178);
frost$core$String* $tmp1179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1171, $tmp1177);
$fn1181 $tmp1180 = ($fn1181) ((frost$io$OutputStream*) $tmp1117)->$class->vtable[19];
frost$core$Error* $tmp1182 = $tmp1180(((frost$io$OutputStream*) $tmp1117), $tmp1179);
if ($tmp1182 == NULL) goto block93; else goto block94;
block94:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local0) = $tmp1182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q($tmp1157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q($tmp1140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q($tmp1126);
frost$core$String* $tmp1183 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1184 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q($tmp1157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q($tmp1140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q($tmp1126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:230
frost$io$IndentedOutputStream** $tmp1187 = &param0->types;
frost$io$IndentedOutputStream* $tmp1188 = *$tmp1187;
frost$core$String** $tmp1189 = &param1->name;
frost$core$String* $tmp1190 = *$tmp1189;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1191 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1192 = *$tmp1191;
frost$core$String* $tmp1193 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1192, $tmp1190);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$String* $tmp1194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1195, $tmp1193);
frost$core$String* $tmp1196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1194, &$s1197);
frost$core$String** $tmp1198 = &param1->name;
frost$core$String* $tmp1199 = *$tmp1198;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1200 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1201 = *$tmp1200;
frost$core$String* $tmp1202 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1201, $tmp1199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$String* $tmp1203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1196, $tmp1202);
frost$core$String* $tmp1204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1203, &$s1205);
$fn1207 $tmp1206 = ($fn1207) ((frost$io$OutputStream*) $tmp1188)->$class->vtable[19];
frost$core$Error* $tmp1208 = $tmp1206(((frost$io$OutputStream*) $tmp1188), $tmp1204);
if ($tmp1208 == NULL) goto block97; else goto block98;
block98:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
*(&local0) = $tmp1208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$String* $tmp1209 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1210 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1211 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block97:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:231
frost$core$Weak** $tmp1213 = &param0->compiler;
frost$core$Weak* $tmp1214 = *$tmp1213;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:231:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1215 = &$tmp1214->_valid;
frost$core$Bit $tmp1216 = *$tmp1215;
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block103; else goto block104;
block104:;
frost$core$Int $tmp1218 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1219, $tmp1218);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1220 = &$tmp1214->value;
frost$core$Object* $tmp1221 = *$tmp1220;
frost$core$Frost$ref$frost$core$Object$Q($tmp1221);
frost$core$Bit $tmp1222 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1221), param1);
bool $tmp1223 = $tmp1222.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1221);
if ($tmp1223) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:232
frost$io$IndentedOutputStream** $tmp1224 = &param0->types;
frost$io$IndentedOutputStream* $tmp1225 = *$tmp1224;
frost$core$String** $tmp1226 = &param1->name;
frost$core$String* $tmp1227 = *$tmp1226;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:232:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1228 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1229 = *$tmp1228;
frost$core$String* $tmp1230 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1229, $tmp1227);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$String* $tmp1231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1232, $tmp1230);
frost$core$String* $tmp1233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1231, &$s1234);
$fn1236 $tmp1235 = ($fn1236) ((frost$io$OutputStream*) $tmp1225)->$class->vtable[19];
frost$core$Error* $tmp1237 = $tmp1235(((frost$io$OutputStream*) $tmp1225), $tmp1233);
if ($tmp1237 == NULL) goto block106; else goto block107;
block107:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local0) = $tmp1237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$String* $tmp1238 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1239 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:233
frost$io$IndentedOutputStream** $tmp1242 = &param0->types;
frost$io$IndentedOutputStream* $tmp1243 = *$tmp1242;
frost$core$Int* $tmp1244 = &$tmp1243->level;
frost$core$Int $tmp1245 = *$tmp1244;
frost$core$Int $tmp1246 = (frost$core$Int) {1u};
int64_t $tmp1247 = $tmp1245.value;
int64_t $tmp1248 = $tmp1246.value;
int64_t $tmp1249 = $tmp1247 + $tmp1248;
frost$core$Int $tmp1250 = (frost$core$Int) {$tmp1249};
frost$core$Int* $tmp1251 = &$tmp1243->level;
*$tmp1251 = $tmp1250;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:234
frost$io$IndentedOutputStream** $tmp1252 = &param0->types;
frost$io$IndentedOutputStream* $tmp1253 = *$tmp1252;
$fn1255 $tmp1254 = ($fn1255) ((frost$io$OutputStream*) $tmp1253)->$class->vtable[19];
frost$core$Error* $tmp1256 = $tmp1254(((frost$io$OutputStream*) $tmp1253), &$s1257);
if ($tmp1256 == NULL) goto block108; else goto block109;
block109:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local0) = $tmp1256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1258 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1259 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1260 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block108:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:235
frost$io$IndentedOutputStream** $tmp1262 = &param0->types;
frost$io$IndentedOutputStream* $tmp1263 = *$tmp1262;
$fn1265 $tmp1264 = ($fn1265) ((frost$io$OutputStream*) $tmp1263)->$class->vtable[19];
frost$core$Error* $tmp1266 = $tmp1264(((frost$io$OutputStream*) $tmp1263), &$s1267);
if ($tmp1266 == NULL) goto block110; else goto block111;
block111:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local0) = $tmp1266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
frost$core$String* $tmp1268 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1269 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1270 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1271 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:236
frost$io$IndentedOutputStream** $tmp1272 = &param0->types;
frost$io$IndentedOutputStream* $tmp1273 = *$tmp1272;
$fn1275 $tmp1274 = ($fn1275) ((frost$io$OutputStream*) $tmp1273)->$class->vtable[19];
frost$core$Error* $tmp1276 = $tmp1274(((frost$io$OutputStream*) $tmp1273), &$s1277);
if ($tmp1276 == NULL) goto block112; else goto block113;
block113:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local0) = $tmp1276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$core$String* $tmp1278 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1279 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1280 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1281 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block112:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:237
frost$io$IndentedOutputStream** $tmp1282 = &param0->types;
frost$io$IndentedOutputStream* $tmp1283 = *$tmp1282;
org$frostlang$frostc$Type** $tmp1284 = &param1->type;
org$frostlang$frostc$Type* $tmp1285 = *$tmp1284;
frost$core$String* $tmp1286 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1285);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:237:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$String* $tmp1287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1286, &$s1288);
$fn1290 $tmp1289 = ($fn1290) ((frost$io$OutputStream*) $tmp1283)->$class->vtable[19];
frost$core$Error* $tmp1291 = $tmp1289(((frost$io$OutputStream*) $tmp1283), $tmp1287);
if ($tmp1291 == NULL) goto block115; else goto block116;
block116:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local0) = $tmp1291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$String* $tmp1292 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1293 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1294 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1295 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block115:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:238
frost$io$IndentedOutputStream** $tmp1296 = &param0->types;
frost$io$IndentedOutputStream* $tmp1297 = *$tmp1296;
frost$core$Int* $tmp1298 = &$tmp1297->level;
frost$core$Int $tmp1299 = *$tmp1298;
frost$core$Int $tmp1300 = (frost$core$Int) {1u};
int64_t $tmp1301 = $tmp1299.value;
int64_t $tmp1302 = $tmp1300.value;
int64_t $tmp1303 = $tmp1301 - $tmp1302;
frost$core$Int $tmp1304 = (frost$core$Int) {$tmp1303};
frost$core$Int* $tmp1305 = &$tmp1297->level;
*$tmp1305 = $tmp1304;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:239
frost$io$IndentedOutputStream** $tmp1306 = &param0->types;
frost$io$IndentedOutputStream* $tmp1307 = *$tmp1306;
frost$core$String** $tmp1308 = &param1->name;
frost$core$String* $tmp1309 = *$tmp1308;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:239:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1310 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1311 = *$tmp1310;
frost$core$String* $tmp1312 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1311, $tmp1309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$String* $tmp1313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1314, $tmp1312);
frost$core$String* $tmp1315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1313, &$s1316);
$fn1318 $tmp1317 = ($fn1318) ((frost$io$OutputStream*) $tmp1307)->$class->vtable[19];
frost$core$Error* $tmp1319 = $tmp1317(((frost$io$OutputStream*) $tmp1307), $tmp1315);
if ($tmp1319 == NULL) goto block118; else goto block119;
block119:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local0) = $tmp1319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$String* $tmp1320 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1321 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1322 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1323 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:240
frost$io$IndentedOutputStream** $tmp1324 = &param0->types;
frost$io$IndentedOutputStream* $tmp1325 = *$tmp1324;
frost$core$String** $tmp1326 = &param1->name;
frost$core$String* $tmp1327 = *$tmp1326;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:240:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1328 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1329 = *$tmp1328;
frost$core$String* $tmp1330 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1329, $tmp1327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
frost$core$String* $tmp1331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1332, $tmp1330);
frost$core$String* $tmp1333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1331, &$s1334);
$fn1336 $tmp1335 = ($fn1336) ((frost$io$OutputStream*) $tmp1325)->$class->vtable[19];
frost$core$Error* $tmp1337 = $tmp1335(((frost$io$OutputStream*) $tmp1325), $tmp1333);
if ($tmp1337 == NULL) goto block121; else goto block122;
block122:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local0) = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
frost$core$String* $tmp1338 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1339 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1341 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:241
frost$io$IndentedOutputStream** $tmp1342 = &param0->types;
frost$io$IndentedOutputStream* $tmp1343 = *$tmp1342;
frost$core$Int* $tmp1344 = &$tmp1343->level;
frost$core$Int $tmp1345 = *$tmp1344;
frost$core$Int $tmp1346 = (frost$core$Int) {1u};
int64_t $tmp1347 = $tmp1345.value;
int64_t $tmp1348 = $tmp1346.value;
int64_t $tmp1349 = $tmp1347 + $tmp1348;
frost$core$Int $tmp1350 = (frost$core$Int) {$tmp1349};
frost$core$Int* $tmp1351 = &$tmp1343->level;
*$tmp1351 = $tmp1350;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:242
frost$io$IndentedOutputStream** $tmp1352 = &param0->types;
frost$io$IndentedOutputStream* $tmp1353 = *$tmp1352;
frost$core$String** $tmp1354 = &param1->name;
frost$core$String* $tmp1355 = *$tmp1354;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1356 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1357 = *$tmp1356;
frost$core$String* $tmp1358 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1357, $tmp1355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$String* $tmp1359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1358, &$s1360);
$fn1362 $tmp1361 = ($fn1362) ((frost$io$OutputStream*) $tmp1353)->$class->vtable[19];
frost$core$Error* $tmp1363 = $tmp1361(((frost$io$OutputStream*) $tmp1353), $tmp1359);
if ($tmp1363 == NULL) goto block125; else goto block126;
block126:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
*(&local0) = $tmp1363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$String* $tmp1364 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1365 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1366 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1367 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:243
frost$io$IndentedOutputStream** $tmp1368 = &param0->types;
frost$io$IndentedOutputStream* $tmp1369 = *$tmp1368;
$fn1371 $tmp1370 = ($fn1371) ((frost$io$OutputStream*) $tmp1369)->$class->vtable[19];
frost$core$Error* $tmp1372 = $tmp1370(((frost$io$OutputStream*) $tmp1369), &$s1373);
if ($tmp1372 == NULL) goto block127; else goto block128;
block128:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local0) = $tmp1372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$String* $tmp1374 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1375 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1376 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1377 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block127:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:244
frost$io$IndentedOutputStream** $tmp1378 = &param0->types;
frost$io$IndentedOutputStream* $tmp1379 = *$tmp1378;
frost$core$Int* $tmp1380 = &$tmp1379->level;
frost$core$Int $tmp1381 = *$tmp1380;
frost$core$Int $tmp1382 = (frost$core$Int) {1u};
int64_t $tmp1383 = $tmp1381.value;
int64_t $tmp1384 = $tmp1382.value;
int64_t $tmp1385 = $tmp1383 - $tmp1384;
frost$core$Int $tmp1386 = (frost$core$Int) {$tmp1385};
frost$core$Int* $tmp1387 = &$tmp1379->level;
*$tmp1387 = $tmp1386;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:245
frost$io$IndentedOutputStream** $tmp1388 = &param0->types;
frost$io$IndentedOutputStream* $tmp1389 = *$tmp1388;
frost$core$String** $tmp1390 = &param1->name;
frost$core$String* $tmp1391 = *$tmp1390;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:245:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1392 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1393 = *$tmp1392;
frost$core$String* $tmp1394 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1393, $tmp1391);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$String* $tmp1395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1396, $tmp1394);
frost$core$String* $tmp1397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1395, &$s1398);
$fn1400 $tmp1399 = ($fn1400) ((frost$io$OutputStream*) $tmp1389)->$class->vtable[19];
frost$core$Error* $tmp1401 = $tmp1399(((frost$io$OutputStream*) $tmp1389), $tmp1397);
if ($tmp1401 == NULL) goto block130; else goto block131;
block131:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local0) = $tmp1401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$String* $tmp1402 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1403 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1405 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block130:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:246
frost$core$Weak** $tmp1406 = &param0->compiler;
frost$core$Weak* $tmp1407 = *$tmp1406;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1408 = &$tmp1407->_valid;
frost$core$Bit $tmp1409 = *$tmp1408;
bool $tmp1410 = $tmp1409.value;
if ($tmp1410) goto block134; else goto block135;
block135:;
frost$core$Int $tmp1411 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1412, $tmp1411);
abort(); // unreachable
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1413 = &$tmp1407->value;
frost$core$Object* $tmp1414 = *$tmp1413;
frost$core$Frost$ref$frost$core$Object$Q($tmp1414);
frost$core$Weak** $tmp1415 = &param0->compiler;
frost$core$Weak* $tmp1416 = *$tmp1415;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1417 = &$tmp1416->_valid;
frost$core$Bit $tmp1418 = *$tmp1417;
bool $tmp1419 = $tmp1418.value;
if ($tmp1419) goto block138; else goto block139;
block139:;
frost$core$Int $tmp1420 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1421, $tmp1420);
abort(); // unreachable
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1422 = &$tmp1416->value;
frost$core$Object* $tmp1423 = *$tmp1422;
frost$core$Frost$ref$frost$core$Object$Q($tmp1423);
org$frostlang$frostc$Type** $tmp1424 = &((org$frostlang$frostc$Compiler*) $tmp1423)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp1425 = *$tmp1424;
org$frostlang$frostc$ClassDecl* $tmp1426 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1414), $tmp1425);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
org$frostlang$frostc$ClassDecl* $tmp1427 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local9) = $tmp1426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q($tmp1423);
frost$core$Frost$unref$frost$core$Object$Q($tmp1414);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:247
frost$core$Weak** $tmp1428 = &param0->compiler;
frost$core$Weak* $tmp1429 = *$tmp1428;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:247:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1430 = &$tmp1429->_valid;
frost$core$Bit $tmp1431 = *$tmp1430;
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block142; else goto block143;
block143:;
frost$core$Int $tmp1433 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1434, $tmp1433);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1435 = &$tmp1429->value;
frost$core$Object* $tmp1436 = *$tmp1435;
frost$core$Frost$ref$frost$core$Object$Q($tmp1436);
org$frostlang$frostc$ClassDecl* $tmp1437 = *(&local9);
frost$collections$ListView* $tmp1438 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1436), $tmp1437);
*(&local10) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$collections$ListView* $tmp1439 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local10) = $tmp1438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q($tmp1436);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:248
frost$io$IndentedOutputStream** $tmp1440 = &param0->types;
frost$io$IndentedOutputStream* $tmp1441 = *$tmp1440;
frost$collections$ListView* $tmp1442 = *(&local10);
ITable* $tmp1443 = ((frost$collections$CollectionView*) $tmp1442)->$class->itable;
while ($tmp1443->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1443 = $tmp1443->next;
}
$fn1445 $tmp1444 = $tmp1443->methods[0];
frost$core$Int $tmp1446 = $tmp1444(((frost$collections$CollectionView*) $tmp1442));
frost$core$Int$wrapper* $tmp1447;
$tmp1447 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1447->value = $tmp1446;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:250:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1449 $tmp1448 = ($fn1449) ((frost$core$Object*) $tmp1447)->$class->vtable[0];
frost$core$String* $tmp1450 = $tmp1448(((frost$core$Object*) $tmp1447));
frost$core$String* $tmp1451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1452, $tmp1450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$String* $tmp1453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1451, &$s1454);
frost$core$String* $tmp1455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1456, $tmp1453);
frost$core$String** $tmp1457 = &param1->name;
frost$core$String* $tmp1458 = *$tmp1457;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1459 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1460 = *$tmp1459;
frost$core$String* $tmp1461 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1460, $tmp1458);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$String* $tmp1462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1461, &$s1463);
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1455, $tmp1462);
$fn1466 $tmp1465 = ($fn1466) ((frost$io$OutputStream*) $tmp1441)->$class->vtable[19];
frost$core$Error* $tmp1467 = $tmp1465(((frost$io$OutputStream*) $tmp1441), $tmp1464);
if ($tmp1467 == NULL) goto block147; else goto block148;
block148:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local0) = $tmp1467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
frost$collections$ListView* $tmp1468 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1469 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1470 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1471 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1472 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block147:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:252
frost$io$IndentedOutputStream** $tmp1474 = &param0->types;
frost$io$IndentedOutputStream* $tmp1475 = *$tmp1474;
frost$core$String** $tmp1476 = &param1->name;
frost$core$String* $tmp1477 = *$tmp1476;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:252:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1478 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1479 = *$tmp1478;
frost$core$String* $tmp1480 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1479, $tmp1477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$String* $tmp1481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1482, $tmp1480);
frost$core$String* $tmp1483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1481, &$s1484);
frost$core$String** $tmp1485 = &param1->name;
frost$core$String* $tmp1486 = *$tmp1485;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1487 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1488 = *$tmp1487;
frost$core$String* $tmp1489 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1488, $tmp1486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$String* $tmp1490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1489, &$s1491);
frost$core$String* $tmp1492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1483, $tmp1490);
$fn1494 $tmp1493 = ($fn1494) ((frost$io$OutputStream*) $tmp1475)->$class->vtable[19];
frost$core$Error* $tmp1495 = $tmp1493(((frost$io$OutputStream*) $tmp1475), $tmp1492);
if ($tmp1495 == NULL) goto block152; else goto block153;
block153:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local0) = $tmp1495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$collections$ListView* $tmp1496 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1497 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1498 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1499 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1500 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1501 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block152:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$collections$ListView* $tmp1502 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1503 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block100;
block100:;
frost$core$String* $tmp1504 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1505 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1506 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1507 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:257
frost$core$Weak** $tmp1508 = &param0->compiler;
frost$core$Weak* $tmp1509 = *$tmp1508;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:257:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1510 = &$tmp1509->_valid;
frost$core$Bit $tmp1511 = *$tmp1510;
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block156; else goto block157;
block157:;
frost$core$Int $tmp1513 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1514, $tmp1513);
abort(); // unreachable
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1515 = &$tmp1509->value;
frost$core$Object* $tmp1516 = *$tmp1515;
frost$core$Frost$ref$frost$core$Object$Q($tmp1516);
org$frostlang$frostc$Position* $tmp1517 = &param1->position;
org$frostlang$frostc$Position $tmp1518 = *$tmp1517;
frost$core$Error* $tmp1519 = *(&local0);
frost$core$String** $tmp1520 = &$tmp1519->message;
frost$core$String* $tmp1521 = *$tmp1520;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1516), $tmp1518, $tmp1521);
frost$core$Frost$unref$frost$core$Object$Q($tmp1516);
goto block2;
block2:;
frost$core$Error* $tmp1522 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:262
frost$core$Weak** $tmp1523 = &param1->owner;
frost$core$Weak* $tmp1524 = *$tmp1523;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:262:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1525 = &$tmp1524->_valid;
frost$core$Bit $tmp1526 = *$tmp1525;
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block3; else goto block4;
block4:;
frost$core$Int $tmp1528 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1529, $tmp1528);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1530 = &$tmp1524->value;
frost$core$Object* $tmp1531 = *$tmp1530;
frost$core$Frost$ref$frost$core$Object$Q($tmp1531);
org$frostlang$frostc$Type** $tmp1532 = &((org$frostlang$frostc$ClassDecl*) $tmp1531)->type;
org$frostlang$frostc$Type* $tmp1533 = *$tmp1532;
frost$core$String* $tmp1534 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1533);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
frost$core$String* $tmp1535 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local0) = $tmp1534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
frost$core$Frost$unref$frost$core$Object$Q($tmp1531);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:263
org$frostlang$frostc$MethodDecl$Kind* $tmp1536 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1537 = *$tmp1536;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1538;
$tmp1538 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1538->value = $tmp1537;
frost$core$Int $tmp1539 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from HCodeGenerator.frost:263:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1540 = &(&local2)->$rawValue;
*$tmp1540 = $tmp1539;
org$frostlang$frostc$MethodDecl$Kind $tmp1541 = *(&local2);
*(&local1) = $tmp1541;
org$frostlang$frostc$MethodDecl$Kind $tmp1542 = *(&local1);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1543;
$tmp1543 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1543->value = $tmp1542;
ITable* $tmp1544 = ((frost$core$Equatable*) $tmp1538)->$class->itable;
while ($tmp1544->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1544 = $tmp1544->next;
}
$fn1546 $tmp1545 = $tmp1544->methods[0];
frost$core$Bit $tmp1547 = $tmp1545(((frost$core$Equatable*) $tmp1538), ((frost$core$Equatable*) $tmp1543));
bool $tmp1548 = $tmp1547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1538)));
if ($tmp1548) goto block7; else goto block6;
block7:;
frost$core$String* $tmp1549 = *(&local0);
frost$core$Bit $tmp1550 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1549, &$s1551);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:263:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1552 = $tmp1550.value;
bool $tmp1553 = !$tmp1552;
frost$core$Bit $tmp1554 = (frost$core$Bit) {$tmp1553};
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:264
frost$core$String* $tmp1556 = *(&local0);
frost$core$String* $tmp1557 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1556, &$s1558);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
frost$core$String* $tmp1559 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1557;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:266
frost$core$String* $tmp1560 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
frost$core$String* $tmp1561 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1560;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:286
org$frostlang$frostc$Type** $tmp1562 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1563 = *$tmp1562;
frost$core$Bit $tmp1564 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1563);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:286:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1565 = $tmp1564.value;
bool $tmp1566 = !$tmp1565;
frost$core$Bit $tmp1567 = (frost$core$Bit) {$tmp1566};
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:287
frost$core$Bit $tmp1569 = (frost$core$Bit) {false};
return $tmp1569;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:289
org$frostlang$frostc$Annotations** $tmp1570 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1571 = *$tmp1570;
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from HCodeGenerator.frost:289:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:127
frost$core$Int* $tmp1572 = &$tmp1571->flags;
frost$core$Int $tmp1573 = *$tmp1572;
frost$core$Int $tmp1574 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:127:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1575 = $tmp1573.value;
int64_t $tmp1576 = $tmp1574.value;
int64_t $tmp1577 = $tmp1575 & $tmp1576;
frost$core$Int $tmp1578 = (frost$core$Int) {$tmp1577};
frost$core$Int $tmp1579 = (frost$core$Int) {0u};
int64_t $tmp1580 = $tmp1578.value;
int64_t $tmp1581 = $tmp1579.value;
bool $tmp1582 = $tmp1580 != $tmp1581;
frost$core$Bit $tmp1583 = (frost$core$Bit) {$tmp1582};
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1585 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1586 = *$tmp1585;
frost$core$Bit $tmp1587 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1586);
*(&local1) = $tmp1587;
goto block8;
block7:;
*(&local1) = $tmp1583;
goto block8;
block8:;
frost$core$Bit $tmp1588 = *(&local1);
bool $tmp1589 = $tmp1588.value;
if ($tmp1589) goto block9; else goto block10;
block9:;
frost$core$Weak** $tmp1590 = &param0->compiler;
frost$core$Weak* $tmp1591 = *$tmp1590;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1592 = &$tmp1591->_valid;
frost$core$Bit $tmp1593 = *$tmp1592;
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1595 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1596, $tmp1595);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1597 = &$tmp1591->value;
frost$core$Object* $tmp1598 = *$tmp1597;
frost$core$Frost$ref$frost$core$Object$Q($tmp1598);
frost$core$Weak** $tmp1599 = &param0->compiler;
frost$core$Weak* $tmp1600 = *$tmp1599;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1601 = &$tmp1600->_valid;
frost$core$Bit $tmp1602 = *$tmp1601;
bool $tmp1603 = $tmp1602.value;
if ($tmp1603) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1604 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1605, $tmp1604);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1606 = &$tmp1600->value;
frost$core$Object* $tmp1607 = *$tmp1606;
frost$core$Frost$ref$frost$core$Object$Q($tmp1607);
org$frostlang$frostc$Type** $tmp1608 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1609 = *$tmp1608;
org$frostlang$frostc$ClassDecl* $tmp1610 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1607), $tmp1609);
frost$core$Bit $tmp1611 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1598), $tmp1610);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
frost$core$Frost$unref$frost$core$Object$Q($tmp1607);
frost$core$Frost$unref$frost$core$Object$Q($tmp1598);
*(&local0) = $tmp1611;
goto block11;
block10:;
*(&local0) = $tmp1588;
goto block11;
block11:;
frost$core$Bit $tmp1612 = *(&local0);
*(&local2) = $tmp1612;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:295
frost$core$Bit $tmp1613 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1614 = $tmp1613.value;
bool $tmp1615 = !$tmp1614;
frost$core$Bit $tmp1616 = (frost$core$Bit) {$tmp1615};
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block21; else goto block22;
block21:;
*(&local3) = $tmp1616;
goto block23;
block22:;
org$frostlang$frostc$Annotations** $tmp1618 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1619 = *$tmp1618;
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from HCodeGenerator.frost:295:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:123
frost$core$Int* $tmp1620 = &$tmp1619->flags;
frost$core$Int $tmp1621 = *$tmp1620;
frost$core$Int $tmp1622 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:123:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1623 = $tmp1621.value;
int64_t $tmp1624 = $tmp1622.value;
int64_t $tmp1625 = $tmp1623 & $tmp1624;
frost$core$Int $tmp1626 = (frost$core$Int) {$tmp1625};
frost$core$Int $tmp1627 = (frost$core$Int) {0u};
int64_t $tmp1628 = $tmp1626.value;
int64_t $tmp1629 = $tmp1627.value;
bool $tmp1630 = $tmp1628 != $tmp1629;
frost$core$Bit $tmp1631 = (frost$core$Bit) {$tmp1630};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1632 = $tmp1631.value;
bool $tmp1633 = !$tmp1632;
frost$core$Bit $tmp1634 = (frost$core$Bit) {$tmp1633};
bool $tmp1635 = $tmp1634.value;
if ($tmp1635) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Annotations** $tmp1636 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1637 = *$tmp1636;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from HCodeGenerator.frost:295:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int* $tmp1638 = &$tmp1637->flags;
frost$core$Int $tmp1639 = *$tmp1638;
frost$core$Int $tmp1640 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1641 = $tmp1639.value;
int64_t $tmp1642 = $tmp1640.value;
int64_t $tmp1643 = $tmp1641 & $tmp1642;
frost$core$Int $tmp1644 = (frost$core$Int) {$tmp1643};
frost$core$Int $tmp1645 = (frost$core$Int) {0u};
int64_t $tmp1646 = $tmp1644.value;
int64_t $tmp1647 = $tmp1645.value;
bool $tmp1648 = $tmp1646 != $tmp1647;
frost$core$Bit $tmp1649 = (frost$core$Bit) {$tmp1648};
bool $tmp1650 = $tmp1649.value;
if ($tmp1650) goto block32; else goto block33;
block32:;
*(&local5) = $tmp1649;
goto block34;
block33:;
org$frostlang$frostc$Annotations** $tmp1651 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1652 = *$tmp1651;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:296:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp1653 = &$tmp1652->flags;
frost$core$Int $tmp1654 = *$tmp1653;
frost$core$Int $tmp1655 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1656 = $tmp1654.value;
int64_t $tmp1657 = $tmp1655.value;
int64_t $tmp1658 = $tmp1656 & $tmp1657;
frost$core$Int $tmp1659 = (frost$core$Int) {$tmp1658};
frost$core$Int $tmp1660 = (frost$core$Int) {0u};
int64_t $tmp1661 = $tmp1659.value;
int64_t $tmp1662 = $tmp1660.value;
bool $tmp1663 = $tmp1661 != $tmp1662;
frost$core$Bit $tmp1664 = (frost$core$Bit) {$tmp1663};
*(&local5) = $tmp1664;
goto block34;
block34:;
frost$core$Bit $tmp1665 = *(&local5);
*(&local4) = $tmp1665;
goto block29;
block28:;
*(&local4) = $tmp1634;
goto block29;
block29:;
frost$core$Bit $tmp1666 = *(&local4);
*(&local3) = $tmp1666;
goto block23;
block23:;
frost$core$Bit $tmp1667 = *(&local3);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1669 = (frost$core$Int) {295u};
frost$core$String* $tmp1670 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1671 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1672, $tmp1670);
frost$core$String* $tmp1673 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1671, &$s1674);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1675, $tmp1669, $tmp1673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:297
frost$core$Bit $tmp1676 = *(&local2);
return $tmp1676;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Bit local4;
org$frostlang$frostc$MethodDecl$Kind local5;
org$frostlang$frostc$MethodDecl$Kind local6;
org$frostlang$frostc$MethodDecl$Parameter* local7 = NULL;
frost$core$String* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:302
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:303
frost$io$MemoryOutputStream** $tmp1677 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1678 = *$tmp1677;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
frost$io$MemoryOutputStream** $tmp1679 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1680 = *$tmp1679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$io$MemoryOutputStream** $tmp1681 = &param0->importStream;
*$tmp1681 = $tmp1678;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:304
frost$collections$HashSet** $tmp1682 = &param0->bodyImports;
frost$collections$HashSet* $tmp1683 = *$tmp1682;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
frost$collections$HashSet** $tmp1684 = &param0->imports;
frost$collections$HashSet* $tmp1685 = *$tmp1684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
frost$collections$HashSet** $tmp1686 = &param0->imports;
*$tmp1686 = $tmp1683;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:305
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1687));
frost$core$String* $tmp1688 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local1) = &$s1689;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:306
frost$core$Bit $tmp1690 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:307
frost$io$IndentedOutputStream** $tmp1692 = &param0->body;
frost$io$IndentedOutputStream* $tmp1693 = *$tmp1692;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:307:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1694 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1695 = *$tmp1694;
frost$core$String* $tmp1696 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1695, param1);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$core$String* $tmp1697 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local2) = $tmp1696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1698 = *(&local2);
frost$core$Bit $tmp1699 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1698, &$s1700);
bool $tmp1701 = $tmp1699.value;
if ($tmp1701) goto block7; else goto block8;
block8:;
frost$core$Int $tmp1702 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1703, $tmp1702);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1704 = *(&local2);
frost$core$Int $tmp1705 = (frost$core$Int) {1u};
frost$core$Bit $tmp1706 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1707 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1705, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1706);
frost$core$String* $tmp1708 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp1704, $tmp1707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
frost$core$String* $tmp1709 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp1710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1711, $tmp1708);
frost$core$String* $tmp1712 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1710, &$s1713);
org$frostlang$frostc$Type** $tmp1714 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1715 = *$tmp1714;
frost$core$String* $tmp1716 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1715);
frost$core$String* $tmp1717 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1712, $tmp1716);
frost$core$String* $tmp1718 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1717, &$s1719);
$fn1721 $tmp1720 = ($fn1721) ((frost$io$OutputStream*) $tmp1693)->$class->vtable[17];
frost$core$Error* $tmp1722 = $tmp1720(((frost$io$OutputStream*) $tmp1693), $tmp1718);
if ($tmp1722 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local0) = $tmp1722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
frost$core$String* $tmp1723 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1724));
frost$core$String* $tmp1725 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local1) = &$s1726;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:311
frost$io$IndentedOutputStream** $tmp1727 = &param0->body;
frost$io$IndentedOutputStream* $tmp1728 = *$tmp1727;
org$frostlang$frostc$Type** $tmp1729 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1730 = *$tmp1729;
frost$core$String* $tmp1731 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1730);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$String* $tmp1732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1731, &$s1733);
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:311:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1734 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1735 = *$tmp1734;
frost$core$String* $tmp1736 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1735, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$String* $tmp1737 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
*(&local3) = $tmp1736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1738 = *(&local3);
frost$core$Bit $tmp1739 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1738, &$s1740);
bool $tmp1741 = $tmp1739.value;
if ($tmp1741) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1742 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1743, $tmp1742);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1744 = *(&local3);
frost$core$Int $tmp1745 = (frost$core$Int) {1u};
frost$core$Bit $tmp1746 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1747 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1745, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1746);
frost$core$String* $tmp1748 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp1744, $tmp1747);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
frost$core$String* $tmp1749 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp1750 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1732, $tmp1748);
frost$core$String* $tmp1751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1750, &$s1752);
$fn1754 $tmp1753 = ($fn1754) ((frost$io$OutputStream*) $tmp1728)->$class->vtable[17];
frost$core$Error* $tmp1755 = $tmp1753(((frost$io$OutputStream*) $tmp1728), $tmp1751);
if ($tmp1755 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local0) = $tmp1755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$String* $tmp1756 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:313
org$frostlang$frostc$Annotations** $tmp1757 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1758 = *$tmp1757;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:313:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp1759 = &$tmp1758->flags;
frost$core$Int $tmp1760 = *$tmp1759;
frost$core$Int $tmp1761 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1762 = $tmp1760.value;
int64_t $tmp1763 = $tmp1761.value;
int64_t $tmp1764 = $tmp1762 & $tmp1763;
frost$core$Int $tmp1765 = (frost$core$Int) {$tmp1764};
frost$core$Int $tmp1766 = (frost$core$Int) {0u};
int64_t $tmp1767 = $tmp1765.value;
int64_t $tmp1768 = $tmp1766.value;
bool $tmp1769 = $tmp1767 != $tmp1768;
frost$core$Bit $tmp1770 = (frost$core$Bit) {$tmp1769};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1771 = $tmp1770.value;
bool $tmp1772 = !$tmp1771;
frost$core$Bit $tmp1773 = (frost$core$Bit) {$tmp1772};
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block19; else goto block18;
block19:;
frost$core$Weak** $tmp1775 = &param0->compiler;
frost$core$Weak* $tmp1776 = *$tmp1775;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:313:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1777 = &$tmp1776->_valid;
frost$core$Bit $tmp1778 = *$tmp1777;
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1780 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1781, $tmp1780);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1782 = &$tmp1776->value;
frost$core$Object* $tmp1783 = *$tmp1782;
frost$core$Frost$ref$frost$core$Object$Q($tmp1783);
// begin inline call to method org.frostlang.frostc.Compiler.isValueInit(m:org.frostlang.frostc.MethodDecl):frost.core.Bit from HCodeGenerator.frost:313:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3937
org$frostlang$frostc$MethodDecl$Kind* $tmp1784 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1785 = *$tmp1784;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1786;
$tmp1786 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1786->value = $tmp1785;
frost$core$Int $tmp1787 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Compiler.frost:3937:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1788 = &(&local6)->$rawValue;
*$tmp1788 = $tmp1787;
org$frostlang$frostc$MethodDecl$Kind $tmp1789 = *(&local6);
*(&local5) = $tmp1789;
org$frostlang$frostc$MethodDecl$Kind $tmp1790 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1791;
$tmp1791 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1791->value = $tmp1790;
ITable* $tmp1792 = ((frost$core$Equatable*) $tmp1786)->$class->itable;
while ($tmp1792->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1792 = $tmp1792->next;
}
$fn1794 $tmp1793 = $tmp1792->methods[0];
frost$core$Bit $tmp1795 = $tmp1793(((frost$core$Equatable*) $tmp1786), ((frost$core$Equatable*) $tmp1791));
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block29; else goto block30;
block29:;
frost$core$Weak** $tmp1797 = &param1->owner;
frost$core$Weak* $tmp1798 = *$tmp1797;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Compiler.frost:3937:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp1799 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp1798);
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block33; else goto block34;
block34:;
frost$core$Int $tmp1801 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1802, $tmp1801);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1803 = &$tmp1798->value;
frost$core$Object* $tmp1804 = *$tmp1803;
frost$core$Frost$ref$frost$core$Object$Q($tmp1804);
frost$core$Bit $tmp1805 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1783), ((org$frostlang$frostc$ClassDecl*) $tmp1804));
frost$core$Frost$unref$frost$core$Object$Q($tmp1804);
*(&local4) = $tmp1805;
goto block31;
block30:;
*(&local4) = $tmp1795;
goto block31;
block31:;
frost$core$Bit $tmp1806 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1791)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1786)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1807 = $tmp1806.value;
bool $tmp1808 = !$tmp1807;
frost$core$Bit $tmp1809 = (frost$core$Bit) {$tmp1808};
bool $tmp1810 = $tmp1809.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1783);
if ($tmp1810) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:314
frost$io$IndentedOutputStream** $tmp1811 = &param0->body;
frost$io$IndentedOutputStream* $tmp1812 = *$tmp1811;
frost$core$String* $tmp1813 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:314:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
frost$core$String* $tmp1814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1813, &$s1815);
frost$core$String* $tmp1816 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1817 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1814, $tmp1816);
frost$core$String* $tmp1818 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1817, &$s1819);
$fn1821 $tmp1820 = ($fn1821) ((frost$io$OutputStream*) $tmp1812)->$class->vtable[17];
frost$core$Error* $tmp1822 = $tmp1820(((frost$io$OutputStream*) $tmp1812), $tmp1818);
if ($tmp1822 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
*(&local0) = $tmp1822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
frost$core$String* $tmp1823 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:315
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1824));
frost$core$String* $tmp1825 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local1) = &$s1826;
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:317
frost$collections$Array** $tmp1827 = &param1->parameters;
frost$collections$Array* $tmp1828 = *$tmp1827;
ITable* $tmp1829 = ((frost$collections$Iterable*) $tmp1828)->$class->itable;
while ($tmp1829->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1829 = $tmp1829->next;
}
$fn1831 $tmp1830 = $tmp1829->methods[0];
frost$collections$Iterator* $tmp1832 = $tmp1830(((frost$collections$Iterable*) $tmp1828));
goto block39;
block39:;
ITable* $tmp1833 = $tmp1832->$class->itable;
while ($tmp1833->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1833 = $tmp1833->next;
}
$fn1835 $tmp1834 = $tmp1833->methods[0];
frost$core$Bit $tmp1836 = $tmp1834($tmp1832);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block41; else goto block40;
block40:;
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1838 = $tmp1832->$class->itable;
while ($tmp1838->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1838 = $tmp1838->next;
}
$fn1840 $tmp1839 = $tmp1838->methods[1];
frost$core$Object* $tmp1841 = $tmp1839($tmp1832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1841)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1842 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1841);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:318
org$frostlang$frostc$MethodDecl$Parameter* $tmp1843 = *(&local7);
frost$core$String** $tmp1844 = &$tmp1843->name;
frost$core$String* $tmp1845 = *$tmp1844;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:318:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1846 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1847 = *$tmp1846;
frost$core$String* $tmp1848 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1847, $tmp1845);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
frost$core$String* $tmp1849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1850, $tmp1848);
frost$core$String* $tmp1851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1849, &$s1852);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$String* $tmp1853 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
*(&local8) = $tmp1851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:319
frost$io$IndentedOutputStream** $tmp1854 = &param0->body;
frost$io$IndentedOutputStream* $tmp1855 = *$tmp1854;
frost$core$String* $tmp1856 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:319:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1856, &$s1858);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1859 = *(&local7);
org$frostlang$frostc$Type** $tmp1860 = &$tmp1859->type;
org$frostlang$frostc$Type* $tmp1861 = *$tmp1860;
frost$core$String* $tmp1862 = *(&local8);
// begin inline call to method org.frostlang.frostc.HCodeGenerator.declaration(t:org.frostlang.frostc.Type, name:frost.core.String):frost.core.String from HCodeGenerator.frost:319:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp1863 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1861);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$String* $tmp1864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1863, &$s1865);
frost$core$String* $tmp1866 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1864, $tmp1862);
frost$core$String* $tmp1867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1866, &$s1868);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$String* $tmp1869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1857, $tmp1867);
frost$core$String* $tmp1870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1869, &$s1871);
$fn1873 $tmp1872 = ($fn1873) ((frost$io$OutputStream*) $tmp1855)->$class->vtable[17];
frost$core$Error* $tmp1874 = $tmp1872(((frost$io$OutputStream*) $tmp1855), $tmp1870);
if ($tmp1874 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
*(&local0) = $tmp1874;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$String* $tmp1875 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1841);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1876 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$String* $tmp1877 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1878));
frost$core$String* $tmp1879 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
*(&local1) = &$s1880;
frost$core$String* $tmp1881 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1841);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1882 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:322
frost$io$IndentedOutputStream** $tmp1883 = &param0->body;
frost$io$IndentedOutputStream* $tmp1884 = *$tmp1883;
$fn1886 $tmp1885 = ($fn1886) ((frost$io$OutputStream*) $tmp1884)->$class->vtable[19];
frost$core$Error* $tmp1887 = $tmp1885(((frost$io$OutputStream*) $tmp1884), &$s1888);
if ($tmp1887 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
*(&local0) = $tmp1887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$String* $tmp1889 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$String* $tmp1890 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp1891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:325
frost$core$Int $tmp1892 = (frost$core$Int) {325u};
frost$core$Error* $tmp1893 = *(&local0);
$fn1895 $tmp1894 = ($fn1895) ((frost$core$Object*) $tmp1893)->$class->vtable[0];
frost$core$String* $tmp1896 = $tmp1894(((frost$core$Object*) $tmp1893));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1897, $tmp1892, $tmp1896);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
abort(); // unreachable

}
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:331
org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:336
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:337
frost$io$IndentedOutputStream** $tmp1898 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1899 = *$tmp1898;
frost$io$MemoryOutputStream** $tmp1900 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1901 = *$tmp1900;
$fn1903 $tmp1902 = ($fn1903) ((frost$io$OutputStream*) $tmp1899)->$class->vtable[20];
frost$core$Error* $tmp1904 = $tmp1902(((frost$io$OutputStream*) $tmp1899), ((frost$core$Object*) $tmp1901));
if ($tmp1904 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local0) = $tmp1904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:338
frost$io$IndentedOutputStream** $tmp1905 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1906 = *$tmp1905;
frost$io$MemoryOutputStream** $tmp1907 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1908 = *$tmp1907;
$fn1910 $tmp1909 = ($fn1910) ((frost$io$OutputStream*) $tmp1906)->$class->vtable[20];
frost$core$Error* $tmp1911 = $tmp1909(((frost$io$OutputStream*) $tmp1906), ((frost$core$Object*) $tmp1908));
if ($tmp1911 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
*(&local0) = $tmp1911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:339
frost$io$IndentedOutputStream** $tmp1912 = &param0->out;
frost$io$IndentedOutputStream* $tmp1913 = *$tmp1912;
frost$io$MemoryOutputStream** $tmp1914 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1915 = *$tmp1914;
$fn1917 $tmp1916 = ($fn1917) ((frost$io$OutputStream*) $tmp1913)->$class->vtable[20];
frost$core$Error* $tmp1918 = $tmp1916(((frost$io$OutputStream*) $tmp1913), ((frost$core$Object*) $tmp1915));
if ($tmp1918 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
*(&local0) = $tmp1918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:340
frost$io$IndentedOutputStream** $tmp1919 = &param0->out;
frost$io$IndentedOutputStream* $tmp1920 = *$tmp1919;
frost$io$MemoryOutputStream** $tmp1921 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1922 = *$tmp1921;
$fn1924 $tmp1923 = ($fn1924) ((frost$io$OutputStream*) $tmp1920)->$class->vtable[20];
frost$core$Error* $tmp1925 = $tmp1923(((frost$io$OutputStream*) $tmp1920), ((frost$core$Object*) $tmp1922));
if ($tmp1925 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
*(&local0) = $tmp1925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:343
frost$core$Error* $tmp1926 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HCodeGenerator.frost:343:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1928 $tmp1927 = ($fn1928) ((frost$core$Object*) $tmp1926)->$class->vtable[0];
frost$core$String* $tmp1929 = $tmp1927(((frost$core$Object*) $tmp1926));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1929);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:344
frost$core$Int $tmp1930 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1930);
goto block2;
block2:;
frost$core$Error* $tmp1931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1932 = &param0->compiler;
frost$core$Weak* $tmp1933 = *$tmp1932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
frost$io$MemoryOutputStream** $tmp1934 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1935 = *$tmp1934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
frost$io$MemoryOutputStream** $tmp1936 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1937 = *$tmp1936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
frost$io$IndentedOutputStream** $tmp1938 = &param0->types;
frost$io$IndentedOutputStream* $tmp1939 = *$tmp1938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$io$MemoryOutputStream** $tmp1940 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1941 = *$tmp1940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
frost$io$MemoryOutputStream** $tmp1942 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1943 = *$tmp1942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
frost$io$IndentedOutputStream** $tmp1944 = &param0->body;
frost$io$IndentedOutputStream* $tmp1945 = *$tmp1944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
frost$collections$HashSet** $tmp1946 = &param0->typeImports;
frost$collections$HashSet* $tmp1947 = *$tmp1946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
frost$collections$HashSet** $tmp1948 = &param0->bodyImports;
frost$collections$HashSet* $tmp1949 = *$tmp1948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
frost$collections$HashSet** $tmp1950 = &param0->imports;
frost$collections$HashSet* $tmp1951 = *$tmp1950;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
frost$io$MemoryOutputStream** $tmp1952 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1953 = *$tmp1952;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
frost$io$File** $tmp1954 = &param0->outDir;
frost$io$File* $tmp1955 = *$tmp1954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
frost$io$IndentedOutputStream** $tmp1956 = &param0->out;
frost$io$IndentedOutputStream* $tmp1957 = *$tmp1956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
frost$io$IndentedOutputStream** $tmp1958 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1959 = *$tmp1958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1960 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1961 = *$tmp1960;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$Weak** $tmp1962 = &param0->cCodeGen;
frost$core$Weak* $tmp1963 = *$tmp1962;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
org$frostlang$frostc$CCodeGenerator** $tmp1964 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1965 = *$tmp1964;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
return;

}

