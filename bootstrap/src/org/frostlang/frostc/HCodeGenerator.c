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
org$frostlang$frostc$HCodeGenerator$class_type org$frostlang$frostc$HCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$cleanup, org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$finish} };

typedef frost$core$String* (*$fn169)(frost$core$Object*);
typedef frost$core$String* (*$fn192)(frost$core$Object*);
typedef frost$core$Error* (*$fn302)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn339)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn530)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn569)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn709)(frost$core$Object*);
typedef frost$core$Error* (*$fn842)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn851)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn885)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn894)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn904)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn933)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn961)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn965)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn970)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1012)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1030)(frost$core$Object*);
typedef frost$core$Error* (*$fn1036)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1058)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1074)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1084)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1113)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1122)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1174)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1178)(frost$core$Object*);
typedef frost$core$Error* (*$fn1194)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1220)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1249)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1268)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1278)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1288)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1303)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1331)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1349)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1375)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1384)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1413)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1458)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1462)(frost$core$Object*);
typedef frost$core$Error* (*$fn1479)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1507)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1559)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1734)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1767)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1807)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1834)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1844)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1848)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1853)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1886)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1899)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1908)(frost$core$Object*);
typedef frost$core$Error* (*$fn1916)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1923)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1930)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1937)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn1941)(frost$core$Object*);

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
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x49\x6e\x74", 15, 3708876411062091060, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x49\x6e\x74", 15, 3708876411062091060, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x49\x6e\x74\x36\x34", 17, 5532243573330585942, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x49\x6e\x74\x36\x34", 17, 5532243573330585942, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 559938424166824396, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s993 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, -2448813731761471205, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 670056712733651593, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -4913817114742956656, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -5962813414700443260, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 2703935467625301937, NULL };
static frost$core$String $s1137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, -8740092864407068865, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20", 8, 1299553688233014337, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 71, 8885469816273793472, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -1023494951477965521, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -1023502648059362998, NULL };
static frost$core$String $s1218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, -8967472124348590150, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, -7438197491133939705, NULL };
static frost$core$String $s1270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, 1439842525427575854, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -2305927540240831023, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 14, 3730756510990532336, NULL };
static frost$core$String $s1301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1225697948708486459, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -5352411526554368641, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, 4622182911039583012, NULL };
static frost$core$String $s1409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3803391662366219107, NULL };
static frost$core$String $s1425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20", 122, 5922034436274910413, NULL };
static frost$core$String $s1476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, 5593648587920272924, NULL };
static frost$core$String $s1495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, 5593643090362131869, NULL };
static frost$core$String $s1504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -2374506366252631061, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1685 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 7893996714969165842, NULL };
static frost$core$String $s1687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, -9034067459731225523, NULL };
static frost$core$String $s1726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, -5577034943728621570, NULL };
static frost$core$String $s1737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1753 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1832 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 1751680115892408369, NULL };
static frost$core$String $s1837 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 636530404172864656, NULL };
static frost$core$String $s1865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1878 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1884 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 566764192353433709, NULL };
static frost$core$String $s1910 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };

void org$frostlang$frostc$HCodeGenerator$init$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:42
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:43
org$frostlang$frostc$CCodeGenerator** $tmp6 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp7 = *$tmp6;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1, org$frostlang$frostc$CCodeGenerator* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:6
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:8
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:10
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:12
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:14
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:16
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:18
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:20
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:22
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:24
frost$collections$HashSet** $tmp48 = &param0->typeImports;
frost$collections$HashSet* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$HashSet** $tmp50 = &param0->imports;
frost$collections$HashSet* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$HashSet** $tmp52 = &param0->imports;
*$tmp52 = $tmp49;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:26
frost$io$MemoryOutputStream** $tmp53 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp54 = *$tmp53;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$io$MemoryOutputStream** $tmp55 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$io$MemoryOutputStream** $tmp57 = &param0->importStream;
*$tmp57 = $tmp54;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:34
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp64 = &param0->outDir;
frost$io$File* $tmp65 = *$tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$io$File** $tmp66 = &param0->outDir;
*$tmp66 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:48
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:49
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:50
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

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp81 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp82 = *$tmp81;
frost$core$String* $tmp83 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp82, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return $tmp83;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp84 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp85 = *$tmp84;
frost$core$String* $tmp86 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp85, param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$String* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp88 = *(&local0);
frost$core$Bit $tmp89 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp88, &$s90);
bool $tmp91 = $tmp89.value;
if ($tmp91) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s93, $tmp92);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp94 = *(&local0);
frost$core$Int64 $tmp95 = (frost$core$Int64) {1u};
frost$core$Bit $tmp96 = (frost$core$Bit) {false};
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

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp100 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp101 = *$tmp100;
frost$core$Int64 $tmp102 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp101, param1);
return $tmp102;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:68
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:73
frost$core$String** $tmp124 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp125 = *$tmp124;
frost$core$Bit $tmp126 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp125, &$s127);
bool $tmp128 = $tmp126.value;
if ($tmp128) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:74
frost$core$Weak** $tmp129 = &param0->compiler;
frost$core$Weak* $tmp130 = *$tmp129;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:74:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp131 = &$tmp130->_valid;
frost$core$Bit $tmp132 = *$tmp131;
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp134 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s135, $tmp134);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:76
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:77
org$frostlang$frostc$Type$Kind* $tmp141 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp142 = *$tmp141;
frost$core$Int64 $tmp143 = $tmp142.$rawValue;
frost$core$Int64 $tmp144 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:78:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s150));
frost$core$Error* $tmp151 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local0) = ((frost$core$Error*) NULL);
return &$s152;
block11:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:81:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp154 = $tmp143.value;
int64_t $tmp155 = $tmp153.value;
bool $tmp156 = $tmp154 == $tmp155;
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:82
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:82:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp159 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp160 = *$tmp159;
frost$core$Int64 $tmp161 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp160, param1);
frost$core$Int64 $tmp162 = (frost$core$Int64) {8u};
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163 * $tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {$tmp165};
frost$core$Int64$wrapper* $tmp167;
$tmp167 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp167->value = $tmp166;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:82:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
frost$core$Int64 $tmp176 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:84:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp177 = $tmp143.value;
int64_t $tmp178 = $tmp176.value;
bool $tmp179 = $tmp177 == $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:85
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:85:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp182 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp183 = *$tmp182;
frost$core$Int64 $tmp184 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp183, param1);
frost$core$Int64 $tmp185 = (frost$core$Int64) {8u};
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185.value;
int64_t $tmp188 = $tmp186 * $tmp187;
frost$core$Int64 $tmp189 = (frost$core$Int64) {$tmp188};
frost$core$Int64$wrapper* $tmp190;
$tmp190 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp190->value = $tmp189;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:85:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
frost$core$Int64 $tmp199 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:87:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp200 = $tmp143.value;
int64_t $tmp201 = $tmp199.value;
bool $tmp202 = $tmp200 == $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s205));
frost$core$Error* $tmp206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local0) = ((frost$core$Error*) NULL);
return &$s207;
block24:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:90:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp209 = $tmp143.value;
int64_t $tmp210 = $tmp208.value;
bool $tmp211 = $tmp209 == $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:91
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:91:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp214 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp215 = *$tmp214;
frost$core$Int64 $tmp216 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp215, param1);
frost$core$Int64 $tmp217 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:92:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 == $tmp219;
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:92
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s223));
frost$core$Error* $tmp224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local0) = ((frost$core$Error*) NULL);
return &$s225;
block32:;
frost$core$Int64 $tmp226 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:93:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp227 = $tmp216.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 == $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s232));
frost$core$Error* $tmp233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local0) = ((frost$core$Error*) NULL);
return &$s234;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:94
frost$core$Int64 $tmp235 = (frost$core$Int64) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s236, $tmp235);
abort(); // unreachable
block27:;
frost$core$Int64 $tmp237 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:97:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp238 = $tmp143.value;
int64_t $tmp239 = $tmp237.value;
bool $tmp240 = $tmp238 == $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:98
frost$core$String** $tmp243 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp244 = *$tmp243;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:98:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:99
frost$core$Weak** $tmp249 = &param0->compiler;
frost$core$Weak* $tmp250 = *$tmp249;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:99:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp251 = &$tmp250->_valid;
frost$core$Bit $tmp252 = *$tmp251;
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp254 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s255, $tmp254);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:100
org$frostlang$frostc$ClassDecl* $tmp260 = *(&local2);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260 != NULL};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp263 = (frost$core$Int64) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s264, $tmp263);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:101
frost$core$Weak** $tmp265 = &param0->compiler;
frost$core$Weak* $tmp266 = *$tmp265;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:101:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp267 = &$tmp266->_valid;
frost$core$Bit $tmp268 = *$tmp267;
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp270 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s271, $tmp270);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp272 = &$tmp266->value;
frost$core$Object* $tmp273 = *$tmp272;
frost$core$Frost$ref$frost$core$Object$Q($tmp273);
org$frostlang$frostc$ClassDecl* $tmp274 = *(&local2);
frost$core$Bit $tmp275 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp273), $tmp274);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:101:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp276 = $tmp275.value;
bool $tmp277 = !$tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp273);
if ($tmp279) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:102
frost$collections$HashSet** $tmp280 = &param0->imports;
frost$collections$HashSet* $tmp281 = *$tmp280;
frost$core$String* $tmp282 = *(&local1);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:102:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp283 = &$tmp281->contents;
frost$collections$HashMap* $tmp284 = *$tmp283;
frost$core$Bit $tmp285 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp284, ((frost$collections$Key*) $tmp282));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:102:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp286 = $tmp285.value;
bool $tmp287 = !$tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:103
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:104
frost$collections$HashSet** $tmp306 = &param0->imports;
frost$collections$HashSet* $tmp307 = *$tmp306;
frost$core$String* $tmp308 = *(&local1);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:104:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp309 = &$tmp307->contents;
frost$collections$HashMap* $tmp310 = *$tmp309;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp310, ((frost$collections$Key*) $tmp308), ((frost$core$Object*) ((frost$collections$Key*) $tmp308)));
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:106
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:108
org$frostlang$frostc$ClassDecl* $tmp317 = *(&local2);
frost$core$String* $tmp318 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp317, &$s319);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$String* $tmp320 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local3) = $tmp318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:109
frost$collections$HashSet** $tmp321 = &param0->imports;
frost$collections$HashSet* $tmp322 = *$tmp321;
frost$core$String* $tmp323 = *(&local3);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:109:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp324 = &$tmp322->contents;
frost$collections$HashMap* $tmp325 = *$tmp324;
frost$core$Bit $tmp326 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp325, ((frost$collections$Key*) $tmp323));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:109:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp327 = $tmp326.value;
bool $tmp328 = !$tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:110
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:111
frost$collections$HashSet** $tmp344 = &param0->imports;
frost$collections$HashSet* $tmp345 = *$tmp344;
frost$core$String* $tmp346 = *(&local3);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:111:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp347 = &$tmp345->contents;
frost$collections$HashMap* $tmp348 = *$tmp347;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp348, ((frost$collections$Key*) $tmp346), ((frost$core$Object*) ((frost$collections$Key*) $tmp346)));
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:113
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
frost$core$Int64 $tmp354 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:115:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp355 = $tmp143.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 == $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:116
frost$core$Weak** $tmp360 = &param0->compiler;
frost$core$Weak* $tmp361 = *$tmp360;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:116:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp362 = &$tmp361->_valid;
frost$core$Bit $tmp363 = *$tmp362;
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp365 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s366, $tmp365);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:117
org$frostlang$frostc$ClassDecl* $tmp371 = *(&local4);
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371 != NULL};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp374 = (frost$core$Int64) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s375, $tmp374);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:118
frost$core$Weak** $tmp376 = &param0->compiler;
frost$core$Weak* $tmp377 = *$tmp376;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:118:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp378 = &$tmp377->_valid;
frost$core$Bit $tmp379 = *$tmp378;
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp381 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s382, $tmp381);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp383 = &$tmp377->value;
frost$core$Object* $tmp384 = *$tmp383;
frost$core$Frost$ref$frost$core$Object$Q($tmp384);
org$frostlang$frostc$ClassDecl* $tmp385 = *(&local4);
frost$core$Bit $tmp386 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp384), $tmp385);
bool $tmp387 = $tmp386.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp384);
if ($tmp387) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:119
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:119:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp388 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp389 = *$tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389 != NULL};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block84; else goto block85;
block85:;
frost$core$Int64 $tmp392 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s393, $tmp392);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp394 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp395 = *$tmp394;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Int64 $tmp396 = (frost$core$Int64) {0u};
frost$core$Object* $tmp397 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp395, $tmp396);
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:121
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:121:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp403 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp404 = *$tmp403;
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404 != NULL};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp407 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s408, $tmp407);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp409 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp410 = *$tmp409;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Int64 $tmp411 = (frost$core$Int64) {0u};
frost$core$Object* $tmp412 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp410, $tmp411);
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
frost$core$Int64 $tmp416 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:123:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp417 = $tmp143.value;
int64_t $tmp418 = $tmp416.value;
bool $tmp419 = $tmp417 == $tmp418;
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:124
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:124:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp422 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp423 = *$tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423 != NULL};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp426 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s427, $tmp426);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp428 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp429 = *$tmp428;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Int64 $tmp430 = (frost$core$Int64) {0u};
frost$core$Object* $tmp431 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp429, $tmp430);
frost$core$String** $tmp432 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp431))->name;
frost$core$String* $tmp433 = *$tmp432;
frost$core$Bit $tmp434 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp433, &$s435);
bool $tmp436 = $tmp434.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp431);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
if ($tmp436) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:125
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:125:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp437 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp438 = *$tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438 != NULL};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp441 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s442, $tmp441);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp443 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp444 = *$tmp443;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Int64 $tmp445 = (frost$core$Int64) {1u};
frost$core$Object* $tmp446 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp444, $tmp445);
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:127
frost$core$Weak** $tmp451 = &param0->compiler;
frost$core$Weak* $tmp452 = *$tmp451;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:127:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp453 = &$tmp452->_valid;
frost$core$Bit $tmp454 = *$tmp453;
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp456 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s457, $tmp456);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:128
org$frostlang$frostc$ClassDecl* $tmp462 = *(&local5);
// begin inline call to function org.frostlang.frostc.ClassDecl.isSpecialization():frost.core.Bit from HCodeGenerator.frost:128:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp463 = &$tmp462->name;
frost$core$String* $tmp464 = *$tmp463;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:967
frost$core$String$Index$nullable $tmp465 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q($tmp464, &$s466);
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp465.nonnull};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:129
frost$core$String** $tmp469 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp470 = *$tmp469;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp471 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp472 = *$tmp471;
frost$core$String* $tmp473 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp472, $tmp470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:130
frost$core$Weak** $tmp477 = &param0->compiler;
frost$core$Weak* $tmp478 = *$tmp477;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:130:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp479 = &$tmp478->_valid;
frost$core$Bit $tmp480 = *$tmp479;
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp482 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s483, $tmp482);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:131
org$frostlang$frostc$ClassDecl* $tmp488 = *(&local7);
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488 != NULL};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp491 = (frost$core$Int64) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s492, $tmp491);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:132
frost$core$Weak** $tmp493 = &param0->compiler;
frost$core$Weak* $tmp494 = *$tmp493;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:132:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp495 = &$tmp494->_valid;
frost$core$Bit $tmp496 = *$tmp495;
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block120; else goto block121;
block121:;
frost$core$Int64 $tmp498 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s499, $tmp498);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp500 = &$tmp494->value;
frost$core$Object* $tmp501 = *$tmp500;
frost$core$Frost$ref$frost$core$Object$Q($tmp501);
org$frostlang$frostc$ClassDecl* $tmp502 = *(&local7);
frost$core$Bit $tmp503 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp501), $tmp502);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:132:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp504 = $tmp503.value;
bool $tmp505 = !$tmp504;
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505};
bool $tmp507 = $tmp506.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
if ($tmp507) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:133
frost$collections$HashSet** $tmp508 = &param0->imports;
frost$collections$HashSet* $tmp509 = *$tmp508;
frost$core$String* $tmp510 = *(&local6);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:133:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp511 = &$tmp509->contents;
frost$collections$HashMap* $tmp512 = *$tmp511;
frost$core$Bit $tmp513 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp512, ((frost$collections$Key*) $tmp510));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:133:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp514 = $tmp513.value;
bool $tmp515 = !$tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block123; else goto block124;
block123:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:134
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:135
frost$collections$HashSet** $tmp535 = &param0->imports;
frost$collections$HashSet* $tmp536 = *$tmp535;
frost$core$String* $tmp537 = *(&local6);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:135:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp538 = &$tmp536->contents;
frost$collections$HashMap* $tmp539 = *$tmp538;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp539, ((frost$collections$Key*) $tmp537), ((frost$core$Object*) ((frost$collections$Key*) $tmp537)));
goto block124;
block124:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:137
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:139
org$frostlang$frostc$ClassDecl* $tmp547 = *(&local7);
frost$core$String* $tmp548 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp547, &$s549);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$String* $tmp550 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local8) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:140
frost$collections$HashSet** $tmp551 = &param0->imports;
frost$collections$HashSet* $tmp552 = *$tmp551;
frost$core$String* $tmp553 = *(&local8);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:140:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp554 = &$tmp552->contents;
frost$collections$HashMap* $tmp555 = *$tmp554;
frost$core$Bit $tmp556 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp555, ((frost$collections$Key*) $tmp553));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:140:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp557 = $tmp556.value;
bool $tmp558 = !$tmp557;
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:141
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:142
frost$collections$HashSet** $tmp575 = &param0->imports;
frost$collections$HashSet* $tmp576 = *$tmp575;
frost$core$String* $tmp577 = *(&local8);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:142:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp578 = &$tmp576->contents;
frost$collections$HashMap* $tmp579 = *$tmp578;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp579, ((frost$collections$Key*) $tmp577), ((frost$core$Object*) ((frost$collections$Key*) $tmp577)));
goto block131;
block131:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:144
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:146
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:146:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp586 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp587 = *$tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587 != NULL};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block138; else goto block139;
block139:;
frost$core$Int64 $tmp590 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s591, $tmp590);
abort(); // unreachable
block138:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp592 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp593 = *$tmp592;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Int64 $tmp594 = (frost$core$Int64) {0u};
frost$core$Object* $tmp595 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp593, $tmp594);
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
frost$core$Int64 $tmp599 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:148:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp600 = $tmp143.value;
int64_t $tmp601 = $tmp599.value;
bool $tmp602 = $tmp600 == $tmp601;
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:149
frost$core$Weak** $tmp605 = &param1->genericClassParameter;
frost$core$Weak* $tmp606 = *$tmp605;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:149:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp607 = &$tmp606->_valid;
frost$core$Bit $tmp608 = *$tmp607;
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block145; else goto block146;
block146:;
frost$core$Int64 $tmp610 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s611, $tmp610);
abort(); // unreachable
block145:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
frost$core$Int64 $tmp618 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:151:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp619 = $tmp143.value;
int64_t $tmp620 = $tmp618.value;
bool $tmp621 = $tmp619 == $tmp620;
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:152
frost$core$Weak** $tmp624 = &param1->genericMethodParameter;
frost$core$Weak* $tmp625 = *$tmp624;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:152:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp626 = &$tmp625->_valid;
frost$core$Bit $tmp627 = *$tmp626;
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block152; else goto block153;
block153:;
frost$core$Int64 $tmp629 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s630, $tmp629);
abort(); // unreachable
block152:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
frost$core$Int64 $tmp637 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:154:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp638 = $tmp143.value;
int64_t $tmp639 = $tmp637.value;
bool $tmp640 = $tmp638 == $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block154; else goto block155;
block155:;
frost$core$Int64 $tmp643 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:154:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp644 = $tmp143.value;
int64_t $tmp645 = $tmp643.value;
bool $tmp646 = $tmp644 == $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block154; else goto block157;
block154:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:155
frost$core$Weak** $tmp649 = &param0->compiler;
frost$core$Weak* $tmp650 = *$tmp649;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:155:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp651 = &$tmp650->_valid;
frost$core$Bit $tmp652 = *$tmp651;
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block161; else goto block162;
block162:;
frost$core$Int64 $tmp654 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s655, $tmp654);
abort(); // unreachable
block161:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
frost$core$Int64 $tmp662 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:157:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp663 = $tmp143.value;
int64_t $tmp664 = $tmp662.value;
bool $tmp665 = $tmp663 == $tmp664;
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block163; else goto block164;
block164:;
frost$core$Int64 $tmp668 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:157:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp669 = $tmp143.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block163; else goto block166;
block163:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:158
frost$core$Weak** $tmp674 = &param0->compiler;
frost$core$Weak* $tmp675 = *$tmp674;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:158:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp676 = &$tmp675->_valid;
frost$core$Bit $tmp677 = *$tmp676;
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block170; else goto block171;
block171:;
frost$core$Int64 $tmp679 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s680, $tmp679);
abort(); // unreachable
block170:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
frost$core$Int64 $tmp687 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:160:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp688 = $tmp143.value;
int64_t $tmp689 = $tmp687.value;
bool $tmp690 = $tmp688 == $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block172; else goto block173;
block172:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:161
frost$core$Weak** $tmp693 = &param0->compiler;
frost$core$Weak* $tmp694 = *$tmp693;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:161:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp695 = &$tmp694->_valid;
frost$core$Bit $tmp696 = *$tmp695;
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block177; else goto block178;
block178:;
frost$core$Int64 $tmp698 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s699, $tmp698);
abort(); // unreachable
block177:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:164
frost$core$Int64 $tmp707 = (frost$core$Int64) {164u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:164:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn709 $tmp708 = ($fn709) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp710 = $tmp708(((frost$core$Object*) param1));
frost$core$String* $tmp711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s712, $tmp710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$String* $tmp713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp711, &$s714);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s715, $tmp707, $tmp713);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
abort(); // unreachable
block7:;
frost$core$Error* $tmp716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:170
frost$core$Int64 $tmp717 = (frost$core$Int64) {170u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s718, $tmp717);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp719 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
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

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:179
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:180
org$frostlang$frostc$LLVMCodeGenerator** $tmp729 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp730 = *$tmp729;
// begin inline call to method org.frostlang.frostc.LLVMCodeGenerator.setCompiler(compiler:org.frostlang.frostc.Compiler) from HCodeGenerator.frost:180:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:123
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:124
frost$core$Bit* $tmp735 = &param1->INT_EXISTS;
frost$core$Bit $tmp736 = *$tmp735;
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block2; else goto block4;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s738));
frost$core$String** $tmp739 = &$tmp730->INT_CLASS;
frost$core$String* $tmp740 = *$tmp739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$String** $tmp741 = &$tmp730->INT_CLASS;
*$tmp741 = &$s742;
goto block3;
block4:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:128
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s743));
frost$core$String** $tmp744 = &$tmp730->INT_CLASS;
frost$core$String* $tmp745 = *$tmp744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$String** $tmp746 = &$tmp730->INT_CLASS;
*$tmp746 = &$s747;
goto block3;
block3:;
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp748 = &param0->outDir;
frost$io$File* $tmp749 = *$tmp748;
frost$core$String* $tmp750 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp751 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp749, $tmp750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
return $tmp751;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:189
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:190
frost$io$MemoryOutputStream** $tmp752 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp753 = *$tmp752;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:190:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp754 = &$tmp753->data;
frost$core$MutableString* $tmp755 = *$tmp754;
frost$core$MutableString$clear($tmp755);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:191
frost$io$MemoryOutputStream** $tmp756 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp757 = *$tmp756;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:191:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp758 = &$tmp757->data;
frost$core$MutableString* $tmp759 = *$tmp758;
frost$core$MutableString$clear($tmp759);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:192
frost$io$MemoryOutputStream** $tmp760 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp761 = *$tmp760;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:192:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp762 = &$tmp761->data;
frost$core$MutableString* $tmp763 = *$tmp762;
frost$core$MutableString$clear($tmp763);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:193
frost$io$MemoryOutputStream** $tmp764 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp765 = *$tmp764;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:193:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp766 = &$tmp765->data;
frost$core$MutableString* $tmp767 = *$tmp766;
frost$core$MutableString$clear($tmp767);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:194
frost$collections$HashSet** $tmp768 = &param0->typeImports;
frost$collections$HashSet* $tmp769 = *$tmp768;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:194:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp770 = &$tmp769->contents;
frost$collections$HashMap* $tmp771 = *$tmp770;
frost$collections$HashMap$clear($tmp771);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:195
frost$collections$HashSet** $tmp772 = &param0->bodyImports;
frost$collections$HashSet* $tmp773 = *$tmp772;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:195:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp774 = &$tmp773->contents;
frost$collections$HashMap* $tmp775 = *$tmp774;
frost$collections$HashMap$clear($tmp775);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:196
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:196:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp776 = &param0->outDir;
frost$io$File* $tmp777 = *$tmp776;
frost$core$String* $tmp778 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s779);
frost$io$File* $tmp780 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp777, $tmp778);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$io$File* $tmp781 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local1) = $tmp780;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:197
frost$io$File* $tmp782 = *(&local1);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from HCodeGenerator.frost:197:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:140
frost$io$File* $tmp783 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp782, &$s784);
frost$core$String** $tmp785 = &$tmp783->path;
frost$core$String* $tmp786 = *$tmp785;
frost$core$String* $tmp787 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp786);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$String* $tmp788 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local3) = $tmp787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:141
frost$core$String* $tmp789 = *(&local3);
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789 == NULL};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp792 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp793 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp794 = *(&local3);
frost$io$File$init$frost$core$String($tmp793, $tmp794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$String* $tmp795 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp793;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
goto block10;
block10:;
frost$io$File* $tmp796 = *(&local2);
frost$core$Error* $tmp797 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp796);
if ($tmp797 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local0) = $tmp797;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$io$File* $tmp798 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp799 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:198
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp800 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp801 = *(&local1);
frost$core$Maybe* $tmp802 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp801);
frost$core$Int64* $tmp803 = &$tmp802->$rawValue;
frost$core$Int64 $tmp804 = *$tmp803;
int64_t $tmp805 = $tmp804.value;
bool $tmp806 = $tmp805 == 0u;
if ($tmp806) goto block15; else goto block16;
block16:;
frost$core$Error** $tmp807 = (frost$core$Error**) ($tmp802->$data + 0);
frost$core$Error* $tmp808 = *$tmp807;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local0) = $tmp808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$io$File* $tmp809 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp810 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Object** $tmp811 = (frost$core$Object**) ($tmp802->$data + 0);
frost$core$Object* $tmp812 = *$tmp811;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp800, ((frost$io$OutputStream*) $tmp812));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$io$IndentedOutputStream** $tmp813 = &param0->out;
frost$io$IndentedOutputStream* $tmp814 = *$tmp813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$io$IndentedOutputStream** $tmp815 = &param0->out;
*$tmp815 = $tmp800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:199
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:199:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp816 = &param0->outDir;
frost$io$File* $tmp817 = *$tmp816;
frost$core$String* $tmp818 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s819);
frost$io$File* $tmp820 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp817, $tmp818);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$io$File* $tmp821 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local4) = $tmp820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:200
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp822 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp823 = *(&local4);
frost$core$Maybe* $tmp824 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp823);
frost$core$Int64* $tmp825 = &$tmp824->$rawValue;
frost$core$Int64 $tmp826 = *$tmp825;
int64_t $tmp827 = $tmp826.value;
bool $tmp828 = $tmp827 == 0u;
if ($tmp828) goto block18; else goto block19;
block19:;
frost$core$Error** $tmp829 = (frost$core$Error**) ($tmp824->$data + 0);
frost$core$Error* $tmp830 = *$tmp829;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local0) = $tmp830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$io$File* $tmp831 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp832 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp833 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block18:;
frost$core$Object** $tmp834 = (frost$core$Object**) ($tmp824->$data + 0);
frost$core$Object* $tmp835 = *$tmp834;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp822, ((frost$io$OutputStream*) $tmp835));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$io$IndentedOutputStream** $tmp836 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp837 = *$tmp836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$io$IndentedOutputStream** $tmp838 = &param0->typesOut;
*$tmp838 = $tmp822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:201
frost$io$IndentedOutputStream** $tmp839 = &param0->out;
frost$io$IndentedOutputStream* $tmp840 = *$tmp839;
$fn842 $tmp841 = ($fn842) ((frost$io$OutputStream*) $tmp840)->$class->vtable[19];
frost$core$Error* $tmp843 = $tmp841(((frost$io$OutputStream*) $tmp840), &$s844);
if ($tmp843 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local0) = $tmp843;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$io$File* $tmp845 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp846 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:202
frost$io$IndentedOutputStream** $tmp848 = &param0->out;
frost$io$IndentedOutputStream* $tmp849 = *$tmp848;
$fn851 $tmp850 = ($fn851) ((frost$io$OutputStream*) $tmp849)->$class->vtable[19];
frost$core$Error* $tmp852 = $tmp850(((frost$io$OutputStream*) $tmp849), &$s853);
if ($tmp852 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local0) = $tmp852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$io$File* $tmp854 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp855 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp856 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:203
frost$io$IndentedOutputStream** $tmp857 = &param0->out;
frost$io$IndentedOutputStream* $tmp858 = *$tmp857;
frost$io$File* $tmp859 = *(&local4);
// begin inline call to function frost.io.File.get_name():frost.core.String from HCodeGenerator.frost:203:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:148
frost$core$String** $tmp860 = &$tmp859->path;
frost$core$String* $tmp861 = *$tmp860;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
frost$core$String$Index $tmp862 = frost$core$String$get_end$R$frost$core$String$Index($tmp861);
frost$core$String$Index$nullable $tmp863 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp861, &$s864, $tmp862);
*(&local6) = $tmp863;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp865 = *(&local6);
frost$core$Bit $tmp866 = (frost$core$Bit) {$tmp865.nonnull};
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:150
frost$core$String** $tmp868 = &$tmp859->path;
frost$core$String* $tmp869 = *$tmp868;
frost$core$String** $tmp870 = &$tmp859->path;
frost$core$String* $tmp871 = *$tmp870;
frost$core$String$Index$nullable $tmp872 = *(&local6);
frost$core$String$Index $tmp873 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp871, ((frost$core$String$Index) $tmp872.value));
frost$core$Bit $tmp874 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp875 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp873, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp874);
frost$core$String* $tmp876 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp869, $tmp875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local5) = $tmp876;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
goto block24;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:153
frost$core$String** $tmp877 = &$tmp859->path;
frost$core$String* $tmp878 = *$tmp877;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local5) = $tmp878;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
goto block24;
block27:;
goto block24;
block24:;
frost$core$String* $tmp879 = *(&local5);
frost$core$String* $tmp880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s881, $tmp879);
frost$core$String* $tmp882 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp880, &$s883);
$fn885 $tmp884 = ($fn885) ((frost$io$OutputStream*) $tmp858)->$class->vtable[19];
frost$core$Error* $tmp886 = $tmp884(((frost$io$OutputStream*) $tmp858), $tmp882);
if ($tmp886 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local0) = $tmp886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$String* $tmp887 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp888 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp889 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp890 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:204
frost$io$IndentedOutputStream** $tmp891 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp892 = *$tmp891;
$fn894 $tmp893 = ($fn894) ((frost$io$OutputStream*) $tmp892)->$class->vtable[19];
frost$core$Error* $tmp895 = $tmp893(((frost$io$OutputStream*) $tmp892), &$s896);
if ($tmp895 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local0) = $tmp895;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$String* $tmp897 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp898 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp899 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp900 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:205
frost$io$IndentedOutputStream** $tmp901 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp902 = *$tmp901;
$fn904 $tmp903 = ($fn904) ((frost$io$OutputStream*) $tmp902)->$class->vtable[19];
frost$core$Error* $tmp905 = $tmp903(((frost$io$OutputStream*) $tmp902), &$s906);
if ($tmp905 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local0) = $tmp905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
frost$core$String* $tmp907 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp908 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp909 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp910 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:206
frost$io$MemoryOutputStream** $tmp911 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp912 = *$tmp911;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$io$MemoryOutputStream** $tmp913 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp914 = *$tmp913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$io$MemoryOutputStream** $tmp915 = &param0->importStream;
*$tmp915 = $tmp912;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:207
frost$collections$HashSet** $tmp916 = &param0->typeImports;
frost$collections$HashSet* $tmp917 = *$tmp916;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$collections$HashSet** $tmp918 = &param0->imports;
frost$collections$HashSet* $tmp919 = *$tmp918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$collections$HashSet** $tmp920 = &param0->imports;
*$tmp920 = $tmp917;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:208
frost$io$IndentedOutputStream** $tmp921 = &param0->types;
frost$io$IndentedOutputStream* $tmp922 = *$tmp921;
frost$core$String** $tmp923 = &param1->name;
frost$core$String* $tmp924 = *$tmp923;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:208:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp925 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp926 = *$tmp925;
frost$core$String* $tmp927 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp926, $tmp924);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$String* $tmp928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s929, $tmp927);
frost$core$String* $tmp930 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp928, &$s931);
$fn933 $tmp932 = ($fn933) ((frost$io$OutputStream*) $tmp922)->$class->vtable[19];
frost$core$Error* $tmp934 = $tmp932(((frost$io$OutputStream*) $tmp922), $tmp930);
if ($tmp934 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local0) = $tmp934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$String* $tmp935 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp936 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp937 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp938 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:209
frost$io$IndentedOutputStream** $tmp939 = &param0->types;
frost$io$IndentedOutputStream* $tmp940 = *$tmp939;
frost$core$Int64* $tmp941 = &$tmp940->level;
frost$core$Int64 $tmp942 = *$tmp941;
frost$core$Int64 $tmp943 = (frost$core$Int64) {1u};
int64_t $tmp944 = $tmp942.value;
int64_t $tmp945 = $tmp943.value;
int64_t $tmp946 = $tmp944 + $tmp945;
frost$core$Int64 $tmp947 = (frost$core$Int64) {$tmp946};
frost$core$Int64* $tmp948 = &$tmp940->level;
*$tmp948 = $tmp947;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:210
frost$core$Weak** $tmp949 = &param0->compiler;
frost$core$Weak* $tmp950 = *$tmp949;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:210:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp951 = &$tmp950->_valid;
frost$core$Bit $tmp952 = *$tmp951;
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp954 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s955, $tmp954);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp956 = &$tmp950->value;
frost$core$Object* $tmp957 = *$tmp956;
frost$core$Frost$ref$frost$core$Object$Q($tmp957);
frost$collections$ListView* $tmp958 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp957), param1);
ITable* $tmp959 = ((frost$collections$Iterable*) $tmp958)->$class->itable;
while ($tmp959->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp959 = $tmp959->next;
}
$fn961 $tmp960 = $tmp959->methods[0];
frost$collections$Iterator* $tmp962 = $tmp960(((frost$collections$Iterable*) $tmp958));
goto block42;
block42:;
ITable* $tmp963 = $tmp962->$class->itable;
while ($tmp963->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp963 = $tmp963->next;
}
$fn965 $tmp964 = $tmp963->methods[0];
frost$core$Bit $tmp966 = $tmp964($tmp962);
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block44; else goto block43;
block43:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp968 = $tmp962->$class->itable;
while ($tmp968->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp968 = $tmp968->next;
}
$fn970 $tmp969 = $tmp968->methods[1];
frost$core$Object* $tmp971 = $tmp969($tmp962);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp971)));
org$frostlang$frostc$FieldDecl* $tmp972 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp971);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:211
frost$core$Weak** $tmp973 = &param0->compiler;
frost$core$Weak* $tmp974 = *$tmp973;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:211:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp975 = &$tmp974->_valid;
frost$core$Bit $tmp976 = *$tmp975;
bool $tmp977 = $tmp976.value;
if ($tmp977) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp978 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s979, $tmp978);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp980 = &$tmp974->value;
frost$core$Object* $tmp981 = *$tmp980;
frost$core$Frost$ref$frost$core$Object$Q($tmp981);
org$frostlang$frostc$FieldDecl* $tmp982 = *(&local7);
frost$core$Bit $tmp983 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp981), $tmp982);
frost$core$Frost$unref$frost$core$Object$Q($tmp981);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp984 = *(&local7);
org$frostlang$frostc$Type** $tmp985 = &$tmp984->type;
org$frostlang$frostc$Type* $tmp986 = *$tmp985;
frost$core$Weak** $tmp987 = &param0->compiler;
frost$core$Weak* $tmp988 = *$tmp987;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:212:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp989 = &$tmp988->_valid;
frost$core$Bit $tmp990 = *$tmp989;
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp992 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s993, $tmp992);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp994 = &$tmp988->value;
frost$core$Object* $tmp995 = *$tmp994;
frost$core$Frost$ref$frost$core$Object$Q($tmp995);
org$frostlang$frostc$Type** $tmp996 = &((org$frostlang$frostc$Compiler*) $tmp995)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp997 = *$tmp996;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from HCodeGenerator.frost:212:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp998 = &((org$frostlang$frostc$Symbol*) $tmp986)->name;
frost$core$String* $tmp999 = *$tmp998;
frost$core$String** $tmp1000 = &((org$frostlang$frostc$Symbol*) $tmp997)->name;
frost$core$String* $tmp1001 = *$tmp1000;
frost$core$Bit $tmp1002 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp999, $tmp1001);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Type$Kind* $tmp1004 = &$tmp986->typeKind;
org$frostlang$frostc$Type$Kind $tmp1005 = *$tmp1004;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1006;
$tmp1006 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1006->value = $tmp1005;
org$frostlang$frostc$Type$Kind* $tmp1007 = &$tmp997->typeKind;
org$frostlang$frostc$Type$Kind $tmp1008 = *$tmp1007;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1009;
$tmp1009 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1009->value = $tmp1008;
ITable* $tmp1010 = ((frost$core$Equatable*) $tmp1006)->$class->itable;
while ($tmp1010->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1010 = $tmp1010->next;
}
$fn1012 $tmp1011 = $tmp1010->methods[0];
frost$core$Bit $tmp1013 = $tmp1011(((frost$core$Equatable*) $tmp1006), ((frost$core$Equatable*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1009)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1006)));
*(&local8) = $tmp1013;
goto block59;
block58:;
*(&local8) = $tmp1002;
goto block59;
block59:;
frost$core$Bit $tmp1014 = *(&local8);
bool $tmp1015 = $tmp1014.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp995);
if ($tmp1015) goto block49; else goto block51;
block49:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:213
frost$io$IndentedOutputStream** $tmp1016 = &param0->types;
frost$io$IndentedOutputStream* $tmp1017 = *$tmp1016;
org$frostlang$frostc$FieldDecl* $tmp1018 = *(&local7);
frost$core$String** $tmp1019 = &((org$frostlang$frostc$Symbol*) $tmp1018)->name;
frost$core$String* $tmp1020 = *$tmp1019;
frost$core$String* $tmp1021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1022, $tmp1020);
frost$core$String* $tmp1023 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1021, &$s1024);
org$frostlang$frostc$LLVMCodeGenerator** $tmp1025 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1026 = *$tmp1025;
frost$core$Int64 $tmp1027 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp1026, param1);
frost$core$Int64$wrapper* $tmp1028;
$tmp1028 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1028->value = $tmp1027;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:213:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1030 $tmp1029 = ($fn1030) ((frost$core$Object*) $tmp1028)->$class->vtable[0];
frost$core$String* $tmp1031 = $tmp1029(((frost$core$Object*) $tmp1028));
frost$core$String* $tmp1032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1023, $tmp1031);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$String* $tmp1033 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1032, &$s1034);
$fn1036 $tmp1035 = ($fn1036) ((frost$io$OutputStream*) $tmp1017)->$class->vtable[19];
frost$core$Error* $tmp1037 = $tmp1035(((frost$io$OutputStream*) $tmp1017), $tmp1033);
if ($tmp1037 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local0) = $tmp1037;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q($tmp971);
org$frostlang$frostc$FieldDecl* $tmp1038 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
frost$core$Frost$unref$frost$core$Object$Q($tmp957);
frost$core$String* $tmp1039 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1040 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1041 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1042 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
goto block50;
block51:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:216
frost$io$IndentedOutputStream** $tmp1043 = &param0->types;
frost$io$IndentedOutputStream* $tmp1044 = *$tmp1043;
org$frostlang$frostc$FieldDecl* $tmp1045 = *(&local7);
org$frostlang$frostc$Type** $tmp1046 = &$tmp1045->type;
org$frostlang$frostc$Type* $tmp1047 = *$tmp1046;
frost$core$String* $tmp1048 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1047);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:216:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$String* $tmp1049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1048, &$s1050);
org$frostlang$frostc$FieldDecl* $tmp1051 = *(&local7);
frost$core$String** $tmp1052 = &((org$frostlang$frostc$Symbol*) $tmp1051)->name;
frost$core$String* $tmp1053 = *$tmp1052;
frost$core$String* $tmp1054 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1049, $tmp1053);
frost$core$String* $tmp1055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1054, &$s1056);
$fn1058 $tmp1057 = ($fn1058) ((frost$io$OutputStream*) $tmp1044)->$class->vtable[19];
frost$core$Error* $tmp1059 = $tmp1057(((frost$io$OutputStream*) $tmp1044), $tmp1055);
if ($tmp1059 == NULL) goto block64; else goto block65;
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local0) = $tmp1059;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q($tmp971);
org$frostlang$frostc$FieldDecl* $tmp1060 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
frost$core$Frost$unref$frost$core$Object$Q($tmp957);
frost$core$String* $tmp1061 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1062 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1063 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1064 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block64:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp971);
org$frostlang$frostc$FieldDecl* $tmp1065 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block42;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
frost$core$Frost$unref$frost$core$Object$Q($tmp957);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:219
frost$core$String** $tmp1066 = &param1->name;
frost$core$String* $tmp1067 = *$tmp1066;
frost$core$Bit $tmp1068 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1067, &$s1069);
bool $tmp1070 = $tmp1068.value;
if ($tmp1070) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:220
frost$io$IndentedOutputStream** $tmp1071 = &param0->types;
frost$io$IndentedOutputStream* $tmp1072 = *$tmp1071;
$fn1074 $tmp1073 = ($fn1074) ((frost$io$OutputStream*) $tmp1072)->$class->vtable[19];
frost$core$Error* $tmp1075 = $tmp1073(((frost$io$OutputStream*) $tmp1072), &$s1076);
if ($tmp1075 == NULL) goto block68; else goto block69;
block69:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local0) = $tmp1075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$String* $tmp1077 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1078 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1079 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1080 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:221
frost$io$IndentedOutputStream** $tmp1081 = &param0->types;
frost$io$IndentedOutputStream* $tmp1082 = *$tmp1081;
$fn1084 $tmp1083 = ($fn1084) ((frost$io$OutputStream*) $tmp1082)->$class->vtable[19];
frost$core$Error* $tmp1085 = $tmp1083(((frost$io$OutputStream*) $tmp1082), &$s1086);
if ($tmp1085 == NULL) goto block70; else goto block71;
block71:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local0) = $tmp1085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$String* $tmp1087 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1088 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1089 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1090 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block70:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
goto block67;
block67:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:223
frost$io$IndentedOutputStream** $tmp1091 = &param0->types;
frost$io$IndentedOutputStream* $tmp1092 = *$tmp1091;
frost$core$Int64* $tmp1093 = &$tmp1092->level;
frost$core$Int64 $tmp1094 = *$tmp1093;
frost$core$Int64 $tmp1095 = (frost$core$Int64) {1u};
int64_t $tmp1096 = $tmp1094.value;
int64_t $tmp1097 = $tmp1095.value;
int64_t $tmp1098 = $tmp1096 - $tmp1097;
frost$core$Int64 $tmp1099 = (frost$core$Int64) {$tmp1098};
frost$core$Int64* $tmp1100 = &$tmp1092->level;
*$tmp1100 = $tmp1099;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:224
frost$io$IndentedOutputStream** $tmp1101 = &param0->types;
frost$io$IndentedOutputStream* $tmp1102 = *$tmp1101;
frost$core$String** $tmp1103 = &param1->name;
frost$core$String* $tmp1104 = *$tmp1103;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:224:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1105 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1106 = *$tmp1105;
frost$core$String* $tmp1107 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1106, $tmp1104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
frost$core$String* $tmp1108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1109, $tmp1107);
frost$core$String* $tmp1110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1108, &$s1111);
$fn1113 $tmp1112 = ($fn1113) ((frost$io$OutputStream*) $tmp1102)->$class->vtable[19];
frost$core$Error* $tmp1114 = $tmp1112(((frost$io$OutputStream*) $tmp1102), $tmp1110);
if ($tmp1114 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local0) = $tmp1114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
frost$core$String* $tmp1115 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1116 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1117 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1118 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:225
frost$io$IndentedOutputStream** $tmp1119 = &param0->types;
frost$io$IndentedOutputStream* $tmp1120 = *$tmp1119;
$fn1122 $tmp1121 = ($fn1122) ((frost$io$OutputStream*) $tmp1120)->$class->vtable[19];
frost$core$Error* $tmp1123 = $tmp1121(((frost$io$OutputStream*) $tmp1120), &$s1124);
if ($tmp1123 == NULL) goto block75; else goto block76;
block76:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
*(&local0) = $tmp1123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$String* $tmp1125 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1126 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1127 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1128 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:226
frost$io$IndentedOutputStream** $tmp1129 = &param0->types;
frost$io$IndentedOutputStream* $tmp1130 = *$tmp1129;
frost$core$Weak** $tmp1131 = &param0->compiler;
frost$core$Weak* $tmp1132 = *$tmp1131;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1133 = &$tmp1132->_valid;
frost$core$Bit $tmp1134 = *$tmp1133;
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp1136 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1137, $tmp1136);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1138 = &$tmp1132->value;
frost$core$Object* $tmp1139 = *$tmp1138;
frost$core$Frost$ref$frost$core$Object$Q($tmp1139);
org$frostlang$frostc$Type** $tmp1140 = &((org$frostlang$frostc$Compiler*) $tmp1139)->STRING_TYPE;
org$frostlang$frostc$Type* $tmp1141 = *$tmp1140;
frost$core$String* $tmp1142 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1141);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:227:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$String* $tmp1143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1142, &$s1144);
frost$core$Weak** $tmp1145 = &param0->compiler;
frost$core$Weak* $tmp1146 = *$tmp1145;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1147 = &$tmp1146->_valid;
frost$core$Bit $tmp1148 = *$tmp1147;
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block84; else goto block85;
block85:;
frost$core$Int64 $tmp1150 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1151, $tmp1150);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1152 = &$tmp1146->value;
frost$core$Object* $tmp1153 = *$tmp1152;
frost$core$Frost$ref$frost$core$Object$Q($tmp1153);
org$frostlang$frostc$Type** $tmp1154 = &((org$frostlang$frostc$Compiler*) $tmp1153)->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1155 = *$tmp1154;
frost$core$String* $tmp1156 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1155);
frost$core$String* $tmp1157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1143, $tmp1156);
frost$core$String* $tmp1158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1157, &$s1159);
frost$core$String* $tmp1160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1161, $tmp1158);
frost$core$Weak** $tmp1162 = &param0->compiler;
frost$core$Weak* $tmp1163 = *$tmp1162;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:228:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1164 = &$tmp1163->_valid;
frost$core$Bit $tmp1165 = *$tmp1164;
bool $tmp1166 = $tmp1165.value;
if ($tmp1166) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp1167 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1168, $tmp1167);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1169 = &$tmp1163->value;
frost$core$Object* $tmp1170 = *$tmp1169;
frost$core$Frost$ref$frost$core$Object$Q($tmp1170);
frost$collections$ListView* $tmp1171 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1170), param1);
ITable* $tmp1172 = ((frost$collections$CollectionView*) $tmp1171)->$class->itable;
while ($tmp1172->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1172 = $tmp1172->next;
}
$fn1174 $tmp1173 = $tmp1172->methods[0];
frost$core$Int64 $tmp1175 = $tmp1173(((frost$collections$CollectionView*) $tmp1171));
frost$core$Int64$wrapper* $tmp1176;
$tmp1176 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1176->value = $tmp1175;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:228:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1178 $tmp1177 = ($fn1178) ((frost$core$Object*) $tmp1176)->$class->vtable[0];
frost$core$String* $tmp1179 = $tmp1177(((frost$core$Object*) $tmp1176));
frost$core$String* $tmp1180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1181, $tmp1179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$String* $tmp1182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1180, &$s1183);
frost$core$String* $tmp1184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1160, $tmp1182);
frost$core$String** $tmp1185 = &param1->name;
frost$core$String* $tmp1186 = *$tmp1185;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1187 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1188 = *$tmp1187;
frost$core$String* $tmp1189 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1188, $tmp1186);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$String* $tmp1190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1189, &$s1191);
frost$core$String* $tmp1192 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1184, $tmp1190);
$fn1194 $tmp1193 = ($fn1194) ((frost$io$OutputStream*) $tmp1130)->$class->vtable[19];
frost$core$Error* $tmp1195 = $tmp1193(((frost$io$OutputStream*) $tmp1130), $tmp1192);
if ($tmp1195 == NULL) goto block93; else goto block94;
block94:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local0) = $tmp1195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q($tmp1170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q($tmp1153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q($tmp1139);
frost$core$String* $tmp1196 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1197 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1198 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q($tmp1170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q($tmp1153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q($tmp1139);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:230
frost$io$IndentedOutputStream** $tmp1200 = &param0->types;
frost$io$IndentedOutputStream* $tmp1201 = *$tmp1200;
frost$core$String** $tmp1202 = &param1->name;
frost$core$String* $tmp1203 = *$tmp1202;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1204 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1205 = *$tmp1204;
frost$core$String* $tmp1206 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1205, $tmp1203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$String* $tmp1207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1208, $tmp1206);
frost$core$String* $tmp1209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1207, &$s1210);
frost$core$String** $tmp1211 = &param1->name;
frost$core$String* $tmp1212 = *$tmp1211;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1213 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1214 = *$tmp1213;
frost$core$String* $tmp1215 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1214, $tmp1212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$String* $tmp1216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1209, $tmp1215);
frost$core$String* $tmp1217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1216, &$s1218);
$fn1220 $tmp1219 = ($fn1220) ((frost$io$OutputStream*) $tmp1201)->$class->vtable[19];
frost$core$Error* $tmp1221 = $tmp1219(((frost$io$OutputStream*) $tmp1201), $tmp1217);
if ($tmp1221 == NULL) goto block97; else goto block98;
block98:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local0) = $tmp1221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$String* $tmp1222 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1223 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1224 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1225 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block97:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:231
frost$core$Weak** $tmp1226 = &param0->compiler;
frost$core$Weak* $tmp1227 = *$tmp1226;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:231:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1228 = &$tmp1227->_valid;
frost$core$Bit $tmp1229 = *$tmp1228;
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block103; else goto block104;
block104:;
frost$core$Int64 $tmp1231 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1232, $tmp1231);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1233 = &$tmp1227->value;
frost$core$Object* $tmp1234 = *$tmp1233;
frost$core$Frost$ref$frost$core$Object$Q($tmp1234);
frost$core$Bit $tmp1235 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1234), param1);
bool $tmp1236 = $tmp1235.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1234);
if ($tmp1236) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:232
frost$io$IndentedOutputStream** $tmp1237 = &param0->types;
frost$io$IndentedOutputStream* $tmp1238 = *$tmp1237;
frost$core$String** $tmp1239 = &param1->name;
frost$core$String* $tmp1240 = *$tmp1239;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:232:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1241 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1242 = *$tmp1241;
frost$core$String* $tmp1243 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1242, $tmp1240);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$String* $tmp1244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1245, $tmp1243);
frost$core$String* $tmp1246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1244, &$s1247);
$fn1249 $tmp1248 = ($fn1249) ((frost$io$OutputStream*) $tmp1238)->$class->vtable[19];
frost$core$Error* $tmp1250 = $tmp1248(((frost$io$OutputStream*) $tmp1238), $tmp1246);
if ($tmp1250 == NULL) goto block106; else goto block107;
block107:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local0) = $tmp1250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$String* $tmp1251 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1252 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1253 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1254 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:233
frost$io$IndentedOutputStream** $tmp1255 = &param0->types;
frost$io$IndentedOutputStream* $tmp1256 = *$tmp1255;
frost$core$Int64* $tmp1257 = &$tmp1256->level;
frost$core$Int64 $tmp1258 = *$tmp1257;
frost$core$Int64 $tmp1259 = (frost$core$Int64) {1u};
int64_t $tmp1260 = $tmp1258.value;
int64_t $tmp1261 = $tmp1259.value;
int64_t $tmp1262 = $tmp1260 + $tmp1261;
frost$core$Int64 $tmp1263 = (frost$core$Int64) {$tmp1262};
frost$core$Int64* $tmp1264 = &$tmp1256->level;
*$tmp1264 = $tmp1263;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:234
frost$io$IndentedOutputStream** $tmp1265 = &param0->types;
frost$io$IndentedOutputStream* $tmp1266 = *$tmp1265;
$fn1268 $tmp1267 = ($fn1268) ((frost$io$OutputStream*) $tmp1266)->$class->vtable[19];
frost$core$Error* $tmp1269 = $tmp1267(((frost$io$OutputStream*) $tmp1266), &$s1270);
if ($tmp1269 == NULL) goto block108; else goto block109;
block109:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local0) = $tmp1269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$String* $tmp1271 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1272 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1273 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block108:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:235
frost$io$IndentedOutputStream** $tmp1275 = &param0->types;
frost$io$IndentedOutputStream* $tmp1276 = *$tmp1275;
$fn1278 $tmp1277 = ($fn1278) ((frost$io$OutputStream*) $tmp1276)->$class->vtable[19];
frost$core$Error* $tmp1279 = $tmp1277(((frost$io$OutputStream*) $tmp1276), &$s1280);
if ($tmp1279 == NULL) goto block110; else goto block111;
block111:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local0) = $tmp1279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$String* $tmp1281 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1282 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1283 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:236
frost$io$IndentedOutputStream** $tmp1285 = &param0->types;
frost$io$IndentedOutputStream* $tmp1286 = *$tmp1285;
$fn1288 $tmp1287 = ($fn1288) ((frost$io$OutputStream*) $tmp1286)->$class->vtable[19];
frost$core$Error* $tmp1289 = $tmp1287(((frost$io$OutputStream*) $tmp1286), &$s1290);
if ($tmp1289 == NULL) goto block112; else goto block113;
block113:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local0) = $tmp1289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$String* $tmp1291 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1292 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1293 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1294 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block112:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:237
frost$io$IndentedOutputStream** $tmp1295 = &param0->types;
frost$io$IndentedOutputStream* $tmp1296 = *$tmp1295;
org$frostlang$frostc$Type** $tmp1297 = &param1->type;
org$frostlang$frostc$Type* $tmp1298 = *$tmp1297;
frost$core$String* $tmp1299 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1298);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:237:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$String* $tmp1300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1299, &$s1301);
$fn1303 $tmp1302 = ($fn1303) ((frost$io$OutputStream*) $tmp1296)->$class->vtable[19];
frost$core$Error* $tmp1304 = $tmp1302(((frost$io$OutputStream*) $tmp1296), $tmp1300);
if ($tmp1304 == NULL) goto block115; else goto block116;
block116:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local0) = $tmp1304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$String* $tmp1305 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1306 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1307 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block115:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:238
frost$io$IndentedOutputStream** $tmp1309 = &param0->types;
frost$io$IndentedOutputStream* $tmp1310 = *$tmp1309;
frost$core$Int64* $tmp1311 = &$tmp1310->level;
frost$core$Int64 $tmp1312 = *$tmp1311;
frost$core$Int64 $tmp1313 = (frost$core$Int64) {1u};
int64_t $tmp1314 = $tmp1312.value;
int64_t $tmp1315 = $tmp1313.value;
int64_t $tmp1316 = $tmp1314 - $tmp1315;
frost$core$Int64 $tmp1317 = (frost$core$Int64) {$tmp1316};
frost$core$Int64* $tmp1318 = &$tmp1310->level;
*$tmp1318 = $tmp1317;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:239
frost$io$IndentedOutputStream** $tmp1319 = &param0->types;
frost$io$IndentedOutputStream* $tmp1320 = *$tmp1319;
frost$core$String** $tmp1321 = &param1->name;
frost$core$String* $tmp1322 = *$tmp1321;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:239:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1323 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1324 = *$tmp1323;
frost$core$String* $tmp1325 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1324, $tmp1322);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$String* $tmp1326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1327, $tmp1325);
frost$core$String* $tmp1328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1326, &$s1329);
$fn1331 $tmp1330 = ($fn1331) ((frost$io$OutputStream*) $tmp1320)->$class->vtable[19];
frost$core$Error* $tmp1332 = $tmp1330(((frost$io$OutputStream*) $tmp1320), $tmp1328);
if ($tmp1332 == NULL) goto block118; else goto block119;
block119:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local0) = $tmp1332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$String* $tmp1333 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1334 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1335 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:240
frost$io$IndentedOutputStream** $tmp1337 = &param0->types;
frost$io$IndentedOutputStream* $tmp1338 = *$tmp1337;
frost$core$String** $tmp1339 = &param1->name;
frost$core$String* $tmp1340 = *$tmp1339;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:240:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1341 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1342 = *$tmp1341;
frost$core$String* $tmp1343 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1342, $tmp1340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$String* $tmp1344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1345, $tmp1343);
frost$core$String* $tmp1346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1344, &$s1347);
$fn1349 $tmp1348 = ($fn1349) ((frost$io$OutputStream*) $tmp1338)->$class->vtable[19];
frost$core$Error* $tmp1350 = $tmp1348(((frost$io$OutputStream*) $tmp1338), $tmp1346);
if ($tmp1350 == NULL) goto block121; else goto block122;
block122:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local0) = $tmp1350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$String* $tmp1351 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1352 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1353 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1354 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:241
frost$io$IndentedOutputStream** $tmp1355 = &param0->types;
frost$io$IndentedOutputStream* $tmp1356 = *$tmp1355;
frost$core$Int64* $tmp1357 = &$tmp1356->level;
frost$core$Int64 $tmp1358 = *$tmp1357;
frost$core$Int64 $tmp1359 = (frost$core$Int64) {1u};
int64_t $tmp1360 = $tmp1358.value;
int64_t $tmp1361 = $tmp1359.value;
int64_t $tmp1362 = $tmp1360 + $tmp1361;
frost$core$Int64 $tmp1363 = (frost$core$Int64) {$tmp1362};
frost$core$Int64* $tmp1364 = &$tmp1356->level;
*$tmp1364 = $tmp1363;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:242
frost$io$IndentedOutputStream** $tmp1365 = &param0->types;
frost$io$IndentedOutputStream* $tmp1366 = *$tmp1365;
frost$core$String** $tmp1367 = &param1->name;
frost$core$String* $tmp1368 = *$tmp1367;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1369 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1370 = *$tmp1369;
frost$core$String* $tmp1371 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1370, $tmp1368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$String* $tmp1372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1371, &$s1373);
$fn1375 $tmp1374 = ($fn1375) ((frost$io$OutputStream*) $tmp1366)->$class->vtable[19];
frost$core$Error* $tmp1376 = $tmp1374(((frost$io$OutputStream*) $tmp1366), $tmp1372);
if ($tmp1376 == NULL) goto block125; else goto block126;
block126:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local0) = $tmp1376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$String* $tmp1377 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1378 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1380 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:243
frost$io$IndentedOutputStream** $tmp1381 = &param0->types;
frost$io$IndentedOutputStream* $tmp1382 = *$tmp1381;
$fn1384 $tmp1383 = ($fn1384) ((frost$io$OutputStream*) $tmp1382)->$class->vtable[19];
frost$core$Error* $tmp1385 = $tmp1383(((frost$io$OutputStream*) $tmp1382), &$s1386);
if ($tmp1385 == NULL) goto block127; else goto block128;
block128:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local0) = $tmp1385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
frost$core$String* $tmp1387 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1388 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1389 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block127:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:244
frost$io$IndentedOutputStream** $tmp1391 = &param0->types;
frost$io$IndentedOutputStream* $tmp1392 = *$tmp1391;
frost$core$Int64* $tmp1393 = &$tmp1392->level;
frost$core$Int64 $tmp1394 = *$tmp1393;
frost$core$Int64 $tmp1395 = (frost$core$Int64) {1u};
int64_t $tmp1396 = $tmp1394.value;
int64_t $tmp1397 = $tmp1395.value;
int64_t $tmp1398 = $tmp1396 - $tmp1397;
frost$core$Int64 $tmp1399 = (frost$core$Int64) {$tmp1398};
frost$core$Int64* $tmp1400 = &$tmp1392->level;
*$tmp1400 = $tmp1399;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:245
frost$io$IndentedOutputStream** $tmp1401 = &param0->types;
frost$io$IndentedOutputStream* $tmp1402 = *$tmp1401;
frost$core$String** $tmp1403 = &param1->name;
frost$core$String* $tmp1404 = *$tmp1403;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:245:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1405 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1406 = *$tmp1405;
frost$core$String* $tmp1407 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1406, $tmp1404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$String* $tmp1408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1409, $tmp1407);
frost$core$String* $tmp1410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1408, &$s1411);
$fn1413 $tmp1412 = ($fn1413) ((frost$io$OutputStream*) $tmp1402)->$class->vtable[19];
frost$core$Error* $tmp1414 = $tmp1412(((frost$io$OutputStream*) $tmp1402), $tmp1410);
if ($tmp1414 == NULL) goto block130; else goto block131;
block131:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local0) = $tmp1414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$String* $tmp1415 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1416 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1417 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1418 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block130:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:246
frost$core$Weak** $tmp1419 = &param0->compiler;
frost$core$Weak* $tmp1420 = *$tmp1419;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1421 = &$tmp1420->_valid;
frost$core$Bit $tmp1422 = *$tmp1421;
bool $tmp1423 = $tmp1422.value;
if ($tmp1423) goto block134; else goto block135;
block135:;
frost$core$Int64 $tmp1424 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1425, $tmp1424);
abort(); // unreachable
block134:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1426 = &$tmp1420->value;
frost$core$Object* $tmp1427 = *$tmp1426;
frost$core$Frost$ref$frost$core$Object$Q($tmp1427);
frost$core$Weak** $tmp1428 = &param0->compiler;
frost$core$Weak* $tmp1429 = *$tmp1428;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1430 = &$tmp1429->_valid;
frost$core$Bit $tmp1431 = *$tmp1430;
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block138; else goto block139;
block139:;
frost$core$Int64 $tmp1433 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1434, $tmp1433);
abort(); // unreachable
block138:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1435 = &$tmp1429->value;
frost$core$Object* $tmp1436 = *$tmp1435;
frost$core$Frost$ref$frost$core$Object$Q($tmp1436);
org$frostlang$frostc$Type** $tmp1437 = &((org$frostlang$frostc$Compiler*) $tmp1436)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp1438 = *$tmp1437;
org$frostlang$frostc$ClassDecl* $tmp1439 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1427), $tmp1438);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
org$frostlang$frostc$ClassDecl* $tmp1440 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local9) = $tmp1439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$Frost$unref$frost$core$Object$Q($tmp1436);
frost$core$Frost$unref$frost$core$Object$Q($tmp1427);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:247
frost$core$Weak** $tmp1441 = &param0->compiler;
frost$core$Weak* $tmp1442 = *$tmp1441;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:247:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1443 = &$tmp1442->_valid;
frost$core$Bit $tmp1444 = *$tmp1443;
bool $tmp1445 = $tmp1444.value;
if ($tmp1445) goto block142; else goto block143;
block143:;
frost$core$Int64 $tmp1446 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1447, $tmp1446);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1448 = &$tmp1442->value;
frost$core$Object* $tmp1449 = *$tmp1448;
frost$core$Frost$ref$frost$core$Object$Q($tmp1449);
org$frostlang$frostc$ClassDecl* $tmp1450 = *(&local9);
frost$collections$ListView* $tmp1451 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1449), $tmp1450);
*(&local10) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$collections$ListView* $tmp1452 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local10) = $tmp1451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q($tmp1449);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:248
frost$io$IndentedOutputStream** $tmp1453 = &param0->types;
frost$io$IndentedOutputStream* $tmp1454 = *$tmp1453;
frost$collections$ListView* $tmp1455 = *(&local10);
ITable* $tmp1456 = ((frost$collections$CollectionView*) $tmp1455)->$class->itable;
while ($tmp1456->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1456 = $tmp1456->next;
}
$fn1458 $tmp1457 = $tmp1456->methods[0];
frost$core$Int64 $tmp1459 = $tmp1457(((frost$collections$CollectionView*) $tmp1455));
frost$core$Int64$wrapper* $tmp1460;
$tmp1460 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1460->value = $tmp1459;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:250:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn1462 $tmp1461 = ($fn1462) ((frost$core$Object*) $tmp1460)->$class->vtable[0];
frost$core$String* $tmp1463 = $tmp1461(((frost$core$Object*) $tmp1460));
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1465, $tmp1463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$core$String* $tmp1466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1464, &$s1467);
frost$core$String* $tmp1468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1469, $tmp1466);
frost$core$String** $tmp1470 = &param1->name;
frost$core$String* $tmp1471 = *$tmp1470;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1472 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1473 = *$tmp1472;
frost$core$String* $tmp1474 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1473, $tmp1471);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$String* $tmp1475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1474, &$s1476);
frost$core$String* $tmp1477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1468, $tmp1475);
$fn1479 $tmp1478 = ($fn1479) ((frost$io$OutputStream*) $tmp1454)->$class->vtable[19];
frost$core$Error* $tmp1480 = $tmp1478(((frost$io$OutputStream*) $tmp1454), $tmp1477);
if ($tmp1480 == NULL) goto block147; else goto block148;
block148:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local0) = $tmp1480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$collections$ListView* $tmp1481 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1482 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1483 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1484 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1485 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1486 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block147:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:252
frost$io$IndentedOutputStream** $tmp1487 = &param0->types;
frost$io$IndentedOutputStream* $tmp1488 = *$tmp1487;
frost$core$String** $tmp1489 = &param1->name;
frost$core$String* $tmp1490 = *$tmp1489;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:252:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1491 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1492 = *$tmp1491;
frost$core$String* $tmp1493 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1492, $tmp1490);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
frost$core$String* $tmp1494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1495, $tmp1493);
frost$core$String* $tmp1496 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1494, &$s1497);
frost$core$String** $tmp1498 = &param1->name;
frost$core$String* $tmp1499 = *$tmp1498;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1500 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1501 = *$tmp1500;
frost$core$String* $tmp1502 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1501, $tmp1499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$String* $tmp1503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1502, &$s1504);
frost$core$String* $tmp1505 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1496, $tmp1503);
$fn1507 $tmp1506 = ($fn1507) ((frost$io$OutputStream*) $tmp1488)->$class->vtable[19];
frost$core$Error* $tmp1508 = $tmp1506(((frost$io$OutputStream*) $tmp1488), $tmp1505);
if ($tmp1508 == NULL) goto block152; else goto block153;
block153:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local0) = $tmp1508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
frost$collections$ListView* $tmp1509 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1510 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1511 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1512 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1513 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1514 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block152:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
frost$collections$ListView* $tmp1515 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1516 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block100;
block100:;
frost$core$String* $tmp1517 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1518 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1519 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1520 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:257
frost$core$Weak** $tmp1521 = &param0->compiler;
frost$core$Weak* $tmp1522 = *$tmp1521;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:257:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1523 = &$tmp1522->_valid;
frost$core$Bit $tmp1524 = *$tmp1523;
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block156; else goto block157;
block157:;
frost$core$Int64 $tmp1526 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1527, $tmp1526);
abort(); // unreachable
block156:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1528 = &$tmp1522->value;
frost$core$Object* $tmp1529 = *$tmp1528;
frost$core$Frost$ref$frost$core$Object$Q($tmp1529);
org$frostlang$frostc$Position* $tmp1530 = &param1->position;
org$frostlang$frostc$Position $tmp1531 = *$tmp1530;
frost$core$Error* $tmp1532 = *(&local0);
frost$core$String** $tmp1533 = &$tmp1532->message;
frost$core$String* $tmp1534 = *$tmp1533;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1529), $tmp1531, $tmp1534);
frost$core$Frost$unref$frost$core$Object$Q($tmp1529);
goto block2;
block2:;
frost$core$Error* $tmp1535 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:262
frost$core$Weak** $tmp1536 = &param1->owner;
frost$core$Weak* $tmp1537 = *$tmp1536;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:262:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1538 = &$tmp1537->_valid;
frost$core$Bit $tmp1539 = *$tmp1538;
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1542, $tmp1541);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1543 = &$tmp1537->value;
frost$core$Object* $tmp1544 = *$tmp1543;
frost$core$Frost$ref$frost$core$Object$Q($tmp1544);
org$frostlang$frostc$Type** $tmp1545 = &((org$frostlang$frostc$ClassDecl*) $tmp1544)->type;
org$frostlang$frostc$Type* $tmp1546 = *$tmp1545;
frost$core$String* $tmp1547 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1546);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$core$String* $tmp1548 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
*(&local0) = $tmp1547;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$core$Frost$unref$frost$core$Object$Q($tmp1544);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:263
org$frostlang$frostc$MethodDecl$Kind* $tmp1549 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1550 = *$tmp1549;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1551;
$tmp1551 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1551->value = $tmp1550;
frost$core$Int64 $tmp1552 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from HCodeGenerator.frost:263:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp1553 = &(&local2)->$rawValue;
*$tmp1553 = $tmp1552;
org$frostlang$frostc$MethodDecl$Kind $tmp1554 = *(&local2);
*(&local1) = $tmp1554;
org$frostlang$frostc$MethodDecl$Kind $tmp1555 = *(&local1);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1556;
$tmp1556 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1556->value = $tmp1555;
ITable* $tmp1557 = ((frost$core$Equatable*) $tmp1551)->$class->itable;
while ($tmp1557->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1557 = $tmp1557->next;
}
$fn1559 $tmp1558 = $tmp1557->methods[0];
frost$core$Bit $tmp1560 = $tmp1558(((frost$core$Equatable*) $tmp1551), ((frost$core$Equatable*) $tmp1556));
bool $tmp1561 = $tmp1560.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1556)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1551)));
if ($tmp1561) goto block7; else goto block6;
block7:;
frost$core$String* $tmp1562 = *(&local0);
frost$core$Bit $tmp1563 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1562, &$s1564);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:263:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp1565 = $tmp1563.value;
bool $tmp1566 = !$tmp1565;
frost$core$Bit $tmp1567 = (frost$core$Bit) {$tmp1566};
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:264
frost$core$String* $tmp1569 = *(&local0);
frost$core$String* $tmp1570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1569, &$s1571);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
frost$core$String* $tmp1572 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1570;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:266
frost$core$String* $tmp1573 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
frost$core$String* $tmp1574 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1573;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:286
org$frostlang$frostc$Type** $tmp1575 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1576 = *$tmp1575;
frost$core$Bit $tmp1577 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1576);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:286:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp1578 = $tmp1577.value;
bool $tmp1579 = !$tmp1578;
frost$core$Bit $tmp1580 = (frost$core$Bit) {$tmp1579};
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:287
frost$core$Bit $tmp1582 = (frost$core$Bit) {false};
return $tmp1582;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:289
org$frostlang$frostc$Annotations** $tmp1583 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1584 = *$tmp1583;
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from HCodeGenerator.frost:289:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:127
frost$core$Int64* $tmp1585 = &$tmp1584->flags;
frost$core$Int64 $tmp1586 = *$tmp1585;
frost$core$Int64 $tmp1587 = (frost$core$Int64) {64u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:127:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp1588 = $tmp1586.value;
int64_t $tmp1589 = $tmp1587.value;
int64_t $tmp1590 = $tmp1588 & $tmp1589;
frost$core$Int64 $tmp1591 = (frost$core$Int64) {$tmp1590};
frost$core$Int64 $tmp1592 = (frost$core$Int64) {0u};
int64_t $tmp1593 = $tmp1591.value;
int64_t $tmp1594 = $tmp1592.value;
bool $tmp1595 = $tmp1593 != $tmp1594;
frost$core$Bit $tmp1596 = (frost$core$Bit) {$tmp1595};
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1598 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1599 = *$tmp1598;
frost$core$Bit $tmp1600 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1599);
*(&local1) = $tmp1600;
goto block8;
block7:;
*(&local1) = $tmp1596;
goto block8;
block8:;
frost$core$Bit $tmp1601 = *(&local1);
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block9; else goto block10;
block9:;
frost$core$Weak** $tmp1603 = &param0->compiler;
frost$core$Weak* $tmp1604 = *$tmp1603;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1605 = &$tmp1604->_valid;
frost$core$Bit $tmp1606 = *$tmp1605;
bool $tmp1607 = $tmp1606.value;
if ($tmp1607) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1608 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1609, $tmp1608);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1610 = &$tmp1604->value;
frost$core$Object* $tmp1611 = *$tmp1610;
frost$core$Frost$ref$frost$core$Object$Q($tmp1611);
frost$core$Weak** $tmp1612 = &param0->compiler;
frost$core$Weak* $tmp1613 = *$tmp1612;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1614 = &$tmp1613->_valid;
frost$core$Bit $tmp1615 = *$tmp1614;
bool $tmp1616 = $tmp1615.value;
if ($tmp1616) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1617 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1618, $tmp1617);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1619 = &$tmp1613->value;
frost$core$Object* $tmp1620 = *$tmp1619;
frost$core$Frost$ref$frost$core$Object$Q($tmp1620);
org$frostlang$frostc$Type** $tmp1621 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1622 = *$tmp1621;
org$frostlang$frostc$ClassDecl* $tmp1623 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1620), $tmp1622);
frost$core$Bit $tmp1624 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1611), $tmp1623);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
frost$core$Frost$unref$frost$core$Object$Q($tmp1620);
frost$core$Frost$unref$frost$core$Object$Q($tmp1611);
*(&local0) = $tmp1624;
goto block11;
block10:;
*(&local0) = $tmp1601;
goto block11;
block11:;
frost$core$Bit $tmp1625 = *(&local0);
*(&local2) = $tmp1625;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:295
frost$core$Bit $tmp1626 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp1627 = $tmp1626.value;
bool $tmp1628 = !$tmp1627;
frost$core$Bit $tmp1629 = (frost$core$Bit) {$tmp1628};
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block21; else goto block22;
block21:;
*(&local3) = $tmp1629;
goto block23;
block22:;
org$frostlang$frostc$Annotations** $tmp1631 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1632 = *$tmp1631;
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from HCodeGenerator.frost:295:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:123
frost$core$Int64* $tmp1633 = &$tmp1632->flags;
frost$core$Int64 $tmp1634 = *$tmp1633;
frost$core$Int64 $tmp1635 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:123:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp1636 = $tmp1634.value;
int64_t $tmp1637 = $tmp1635.value;
int64_t $tmp1638 = $tmp1636 & $tmp1637;
frost$core$Int64 $tmp1639 = (frost$core$Int64) {$tmp1638};
frost$core$Int64 $tmp1640 = (frost$core$Int64) {0u};
int64_t $tmp1641 = $tmp1639.value;
int64_t $tmp1642 = $tmp1640.value;
bool $tmp1643 = $tmp1641 != $tmp1642;
frost$core$Bit $tmp1644 = (frost$core$Bit) {$tmp1643};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp1645 = $tmp1644.value;
bool $tmp1646 = !$tmp1645;
frost$core$Bit $tmp1647 = (frost$core$Bit) {$tmp1646};
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Annotations** $tmp1649 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1650 = *$tmp1649;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from HCodeGenerator.frost:295:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp1651 = &$tmp1650->flags;
frost$core$Int64 $tmp1652 = *$tmp1651;
frost$core$Int64 $tmp1653 = (frost$core$Int64) {256u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp1654 = $tmp1652.value;
int64_t $tmp1655 = $tmp1653.value;
int64_t $tmp1656 = $tmp1654 & $tmp1655;
frost$core$Int64 $tmp1657 = (frost$core$Int64) {$tmp1656};
frost$core$Int64 $tmp1658 = (frost$core$Int64) {0u};
int64_t $tmp1659 = $tmp1657.value;
int64_t $tmp1660 = $tmp1658.value;
bool $tmp1661 = $tmp1659 != $tmp1660;
frost$core$Bit $tmp1662 = (frost$core$Bit) {$tmp1661};
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block32; else goto block33;
block32:;
*(&local5) = $tmp1662;
goto block34;
block33:;
org$frostlang$frostc$Annotations** $tmp1664 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1665 = *$tmp1664;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:296:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp1666 = &$tmp1665->flags;
frost$core$Int64 $tmp1667 = *$tmp1666;
frost$core$Int64 $tmp1668 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp1669 = $tmp1667.value;
int64_t $tmp1670 = $tmp1668.value;
int64_t $tmp1671 = $tmp1669 & $tmp1670;
frost$core$Int64 $tmp1672 = (frost$core$Int64) {$tmp1671};
frost$core$Int64 $tmp1673 = (frost$core$Int64) {0u};
int64_t $tmp1674 = $tmp1672.value;
int64_t $tmp1675 = $tmp1673.value;
bool $tmp1676 = $tmp1674 != $tmp1675;
frost$core$Bit $tmp1677 = (frost$core$Bit) {$tmp1676};
*(&local5) = $tmp1677;
goto block34;
block34:;
frost$core$Bit $tmp1678 = *(&local5);
*(&local4) = $tmp1678;
goto block29;
block28:;
*(&local4) = $tmp1647;
goto block29;
block29:;
frost$core$Bit $tmp1679 = *(&local4);
*(&local3) = $tmp1679;
goto block23;
block23:;
frost$core$Bit $tmp1680 = *(&local3);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1682 = (frost$core$Int64) {295u};
frost$core$String* $tmp1683 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1684 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1685, $tmp1683);
frost$core$String* $tmp1686 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1684, &$s1687);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1688, $tmp1682, $tmp1686);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:297
frost$core$Bit $tmp1689 = *(&local2);
return $tmp1689;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:302
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:303
frost$io$MemoryOutputStream** $tmp1690 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1691 = *$tmp1690;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$io$MemoryOutputStream** $tmp1692 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1693 = *$tmp1692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
frost$io$MemoryOutputStream** $tmp1694 = &param0->importStream;
*$tmp1694 = $tmp1691;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:304
frost$collections$HashSet** $tmp1695 = &param0->bodyImports;
frost$collections$HashSet* $tmp1696 = *$tmp1695;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$collections$HashSet** $tmp1697 = &param0->imports;
frost$collections$HashSet* $tmp1698 = *$tmp1697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
frost$collections$HashSet** $tmp1699 = &param0->imports;
*$tmp1699 = $tmp1696;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:305
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1700));
frost$core$String* $tmp1701 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
*(&local1) = &$s1702;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:306
frost$core$Bit $tmp1703 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:307
frost$io$IndentedOutputStream** $tmp1705 = &param0->body;
frost$io$IndentedOutputStream* $tmp1706 = *$tmp1705;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:307:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1707 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1708 = *$tmp1707;
frost$core$String* $tmp1709 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1708, param1);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
frost$core$String* $tmp1710 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local2) = $tmp1709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1711 = *(&local2);
frost$core$Bit $tmp1712 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1711, &$s1713);
bool $tmp1714 = $tmp1712.value;
if ($tmp1714) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1715 = (frost$core$Int64) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1716, $tmp1715);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1717 = *(&local2);
frost$core$Int64 $tmp1718 = (frost$core$Int64) {1u};
frost$core$Bit $tmp1719 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1720 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1718, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1719);
frost$core$String* $tmp1721 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1717, $tmp1720);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
frost$core$String* $tmp1722 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp1723 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1724, $tmp1721);
frost$core$String* $tmp1725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1723, &$s1726);
org$frostlang$frostc$Type** $tmp1727 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1728 = *$tmp1727;
frost$core$String* $tmp1729 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1728);
frost$core$String* $tmp1730 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1725, $tmp1729);
frost$core$String* $tmp1731 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1730, &$s1732);
$fn1734 $tmp1733 = ($fn1734) ((frost$io$OutputStream*) $tmp1706)->$class->vtable[17];
frost$core$Error* $tmp1735 = $tmp1733(((frost$io$OutputStream*) $tmp1706), $tmp1731);
if ($tmp1735 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local0) = $tmp1735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
frost$core$String* $tmp1736 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1737));
frost$core$String* $tmp1738 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local1) = &$s1739;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:311
frost$io$IndentedOutputStream** $tmp1740 = &param0->body;
frost$io$IndentedOutputStream* $tmp1741 = *$tmp1740;
org$frostlang$frostc$Type** $tmp1742 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1743 = *$tmp1742;
frost$core$String* $tmp1744 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1743);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:311:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
frost$core$String* $tmp1745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1744, &$s1746);
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:311:60
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1747 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1748 = *$tmp1747;
frost$core$String* $tmp1749 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1748, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
frost$core$String* $tmp1750 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
*(&local3) = $tmp1749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1751 = *(&local3);
frost$core$Bit $tmp1752 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1751, &$s1753);
bool $tmp1754 = $tmp1752.value;
if ($tmp1754) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1755 = (frost$core$Int64) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1756, $tmp1755);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1757 = *(&local3);
frost$core$Int64 $tmp1758 = (frost$core$Int64) {1u};
frost$core$Bit $tmp1759 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1760 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1758, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1759);
frost$core$String* $tmp1761 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1757, $tmp1760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
frost$core$String* $tmp1762 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp1763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1745, $tmp1761);
frost$core$String* $tmp1764 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1763, &$s1765);
$fn1767 $tmp1766 = ($fn1767) ((frost$io$OutputStream*) $tmp1741)->$class->vtable[17];
frost$core$Error* $tmp1768 = $tmp1766(((frost$io$OutputStream*) $tmp1741), $tmp1764);
if ($tmp1768 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
*(&local0) = $tmp1768;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
frost$core$String* $tmp1769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:313
org$frostlang$frostc$Annotations** $tmp1770 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1771 = *$tmp1770;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:313:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp1772 = &$tmp1771->flags;
frost$core$Int64 $tmp1773 = *$tmp1772;
frost$core$Int64 $tmp1774 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp1775 = $tmp1773.value;
int64_t $tmp1776 = $tmp1774.value;
int64_t $tmp1777 = $tmp1775 & $tmp1776;
frost$core$Int64 $tmp1778 = (frost$core$Int64) {$tmp1777};
frost$core$Int64 $tmp1779 = (frost$core$Int64) {0u};
int64_t $tmp1780 = $tmp1778.value;
int64_t $tmp1781 = $tmp1779.value;
bool $tmp1782 = $tmp1780 != $tmp1781;
frost$core$Bit $tmp1783 = (frost$core$Bit) {$tmp1782};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp1784 = $tmp1783.value;
bool $tmp1785 = !$tmp1784;
frost$core$Bit $tmp1786 = (frost$core$Bit) {$tmp1785};
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block19; else goto block18;
block19:;
frost$core$Weak** $tmp1788 = &param0->compiler;
frost$core$Weak* $tmp1789 = *$tmp1788;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:313:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1790 = &$tmp1789->_valid;
frost$core$Bit $tmp1791 = *$tmp1790;
bool $tmp1792 = $tmp1791.value;
if ($tmp1792) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1793 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1794, $tmp1793);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1795 = &$tmp1789->value;
frost$core$Object* $tmp1796 = *$tmp1795;
frost$core$Frost$ref$frost$core$Object$Q($tmp1796);
// begin inline call to method org.frostlang.frostc.Compiler.isValueInit(m:org.frostlang.frostc.MethodDecl):frost.core.Bit from HCodeGenerator.frost:313:62
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:3992
org$frostlang$frostc$MethodDecl$Kind* $tmp1797 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1798 = *$tmp1797;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1799;
$tmp1799 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1799->value = $tmp1798;
frost$core$Int64 $tmp1800 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Compiler.frost:3992:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp1801 = &(&local6)->$rawValue;
*$tmp1801 = $tmp1800;
org$frostlang$frostc$MethodDecl$Kind $tmp1802 = *(&local6);
*(&local5) = $tmp1802;
org$frostlang$frostc$MethodDecl$Kind $tmp1803 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1804;
$tmp1804 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1804->value = $tmp1803;
ITable* $tmp1805 = ((frost$core$Equatable*) $tmp1799)->$class->itable;
while ($tmp1805->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1805 = $tmp1805->next;
}
$fn1807 $tmp1806 = $tmp1805->methods[0];
frost$core$Bit $tmp1808 = $tmp1806(((frost$core$Equatable*) $tmp1799), ((frost$core$Equatable*) $tmp1804));
bool $tmp1809 = $tmp1808.value;
if ($tmp1809) goto block29; else goto block30;
block29:;
frost$core$Weak** $tmp1810 = &param1->owner;
frost$core$Weak* $tmp1811 = *$tmp1810;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Compiler.frost:3992:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
frost$core$Bit $tmp1812 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp1811);
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1814 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1815, $tmp1814);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1816 = &$tmp1811->value;
frost$core$Object* $tmp1817 = *$tmp1816;
frost$core$Frost$ref$frost$core$Object$Q($tmp1817);
frost$core$Bit $tmp1818 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1796), ((org$frostlang$frostc$ClassDecl*) $tmp1817));
frost$core$Frost$unref$frost$core$Object$Q($tmp1817);
*(&local4) = $tmp1818;
goto block31;
block30:;
*(&local4) = $tmp1808;
goto block31;
block31:;
frost$core$Bit $tmp1819 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1804)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1799)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp1820 = $tmp1819.value;
bool $tmp1821 = !$tmp1820;
frost$core$Bit $tmp1822 = (frost$core$Bit) {$tmp1821};
bool $tmp1823 = $tmp1822.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1796);
if ($tmp1823) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:314
frost$io$IndentedOutputStream** $tmp1824 = &param0->body;
frost$io$IndentedOutputStream* $tmp1825 = *$tmp1824;
frost$core$String* $tmp1826 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:314:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$String* $tmp1827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1826, &$s1828);
frost$core$String* $tmp1829 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1827, $tmp1829);
frost$core$String* $tmp1831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1830, &$s1832);
$fn1834 $tmp1833 = ($fn1834) ((frost$io$OutputStream*) $tmp1825)->$class->vtable[17];
frost$core$Error* $tmp1835 = $tmp1833(((frost$io$OutputStream*) $tmp1825), $tmp1831);
if ($tmp1835 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
*(&local0) = $tmp1835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$String* $tmp1836 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:315
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1837));
frost$core$String* $tmp1838 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local1) = &$s1839;
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:317
frost$collections$Array** $tmp1840 = &param1->parameters;
frost$collections$Array* $tmp1841 = *$tmp1840;
ITable* $tmp1842 = ((frost$collections$Iterable*) $tmp1841)->$class->itable;
while ($tmp1842->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1842 = $tmp1842->next;
}
$fn1844 $tmp1843 = $tmp1842->methods[0];
frost$collections$Iterator* $tmp1845 = $tmp1843(((frost$collections$Iterable*) $tmp1841));
goto block39;
block39:;
ITable* $tmp1846 = $tmp1845->$class->itable;
while ($tmp1846->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1846 = $tmp1846->next;
}
$fn1848 $tmp1847 = $tmp1846->methods[0];
frost$core$Bit $tmp1849 = $tmp1847($tmp1845);
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block41; else goto block40;
block40:;
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1851 = $tmp1845->$class->itable;
while ($tmp1851->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1851 = $tmp1851->next;
}
$fn1853 $tmp1852 = $tmp1851->methods[1];
frost$core$Object* $tmp1854 = $tmp1852($tmp1845);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1854)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1855 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1854);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:318
org$frostlang$frostc$MethodDecl$Parameter* $tmp1856 = *(&local7);
frost$core$String** $tmp1857 = &$tmp1856->name;
frost$core$String* $tmp1858 = *$tmp1857;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:318:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1859 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1860 = *$tmp1859;
frost$core$String* $tmp1861 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1860, $tmp1858);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$String* $tmp1862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1863, $tmp1861);
frost$core$String* $tmp1864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1862, &$s1865);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$String* $tmp1866 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
*(&local8) = $tmp1864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:319
frost$io$IndentedOutputStream** $tmp1867 = &param0->body;
frost$io$IndentedOutputStream* $tmp1868 = *$tmp1867;
frost$core$String* $tmp1869 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:319:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
frost$core$String* $tmp1870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1869, &$s1871);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1872 = *(&local7);
org$frostlang$frostc$Type** $tmp1873 = &$tmp1872->type;
org$frostlang$frostc$Type* $tmp1874 = *$tmp1873;
frost$core$String* $tmp1875 = *(&local8);
// begin inline call to method org.frostlang.frostc.HCodeGenerator.declaration(t:org.frostlang.frostc.Type, name:frost.core.String):frost.core.String from HCodeGenerator.frost:319:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp1876 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1874);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$String* $tmp1877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1876, &$s1878);
frost$core$String* $tmp1879 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1877, $tmp1875);
frost$core$String* $tmp1880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1879, &$s1881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$String* $tmp1882 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1870, $tmp1880);
frost$core$String* $tmp1883 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1882, &$s1884);
$fn1886 $tmp1885 = ($fn1886) ((frost$io$OutputStream*) $tmp1868)->$class->vtable[17];
frost$core$Error* $tmp1887 = $tmp1885(((frost$io$OutputStream*) $tmp1868), $tmp1883);
if ($tmp1887 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
*(&local0) = $tmp1887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
frost$core$String* $tmp1888 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1854);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1889 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$core$String* $tmp1890 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1891));
frost$core$String* $tmp1892 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local1) = &$s1893;
frost$core$String* $tmp1894 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1854);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1895 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:322
frost$io$IndentedOutputStream** $tmp1896 = &param0->body;
frost$io$IndentedOutputStream* $tmp1897 = *$tmp1896;
$fn1899 $tmp1898 = ($fn1899) ((frost$io$OutputStream*) $tmp1897)->$class->vtable[19];
frost$core$Error* $tmp1900 = $tmp1898(((frost$io$OutputStream*) $tmp1897), &$s1901);
if ($tmp1900 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local0) = $tmp1900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
frost$core$String* $tmp1902 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
frost$core$String* $tmp1903 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp1904 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:325
frost$core$Int64 $tmp1905 = (frost$core$Int64) {325u};
frost$core$Error* $tmp1906 = *(&local0);
$fn1908 $tmp1907 = ($fn1908) ((frost$core$Object*) $tmp1906)->$class->vtable[0];
frost$core$String* $tmp1909 = $tmp1907(((frost$core$Object*) $tmp1906));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1910, $tmp1905, $tmp1909);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
abort(); // unreachable

}
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:331
org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:336
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:337
frost$io$IndentedOutputStream** $tmp1911 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1912 = *$tmp1911;
frost$io$MemoryOutputStream** $tmp1913 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1914 = *$tmp1913;
$fn1916 $tmp1915 = ($fn1916) ((frost$io$OutputStream*) $tmp1912)->$class->vtable[20];
frost$core$Error* $tmp1917 = $tmp1915(((frost$io$OutputStream*) $tmp1912), ((frost$core$Object*) $tmp1914));
if ($tmp1917 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
*(&local0) = $tmp1917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:338
frost$io$IndentedOutputStream** $tmp1918 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1919 = *$tmp1918;
frost$io$MemoryOutputStream** $tmp1920 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1921 = *$tmp1920;
$fn1923 $tmp1922 = ($fn1923) ((frost$io$OutputStream*) $tmp1919)->$class->vtable[20];
frost$core$Error* $tmp1924 = $tmp1922(((frost$io$OutputStream*) $tmp1919), ((frost$core$Object*) $tmp1921));
if ($tmp1924 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
*(&local0) = $tmp1924;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:339
frost$io$IndentedOutputStream** $tmp1925 = &param0->out;
frost$io$IndentedOutputStream* $tmp1926 = *$tmp1925;
frost$io$MemoryOutputStream** $tmp1927 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1928 = *$tmp1927;
$fn1930 $tmp1929 = ($fn1930) ((frost$io$OutputStream*) $tmp1926)->$class->vtable[20];
frost$core$Error* $tmp1931 = $tmp1929(((frost$io$OutputStream*) $tmp1926), ((frost$core$Object*) $tmp1928));
if ($tmp1931 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
*(&local0) = $tmp1931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:340
frost$io$IndentedOutputStream** $tmp1932 = &param0->out;
frost$io$IndentedOutputStream* $tmp1933 = *$tmp1932;
frost$io$MemoryOutputStream** $tmp1934 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1935 = *$tmp1934;
$fn1937 $tmp1936 = ($fn1937) ((frost$io$OutputStream*) $tmp1933)->$class->vtable[20];
frost$core$Error* $tmp1938 = $tmp1936(((frost$io$OutputStream*) $tmp1933), ((frost$core$Object*) $tmp1935));
if ($tmp1938 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local0) = $tmp1938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:343
frost$core$Error* $tmp1939 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HCodeGenerator.frost:343:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:62
$fn1941 $tmp1940 = ($fn1941) ((frost$core$Object*) $tmp1939)->$class->vtable[0];
frost$core$String* $tmp1942 = $tmp1940(((frost$core$Object*) $tmp1939));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1942);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:344
frost$core$Int64 $tmp1943 = (frost$core$Int64) {1u};
frost$core$System$exit$frost$core$Int64($tmp1943);
goto block2;
block2:;
frost$core$Error* $tmp1944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1945 = &param0->compiler;
frost$core$Weak* $tmp1946 = *$tmp1945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
frost$io$MemoryOutputStream** $tmp1947 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1948 = *$tmp1947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
frost$io$MemoryOutputStream** $tmp1949 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1950 = *$tmp1949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
frost$io$IndentedOutputStream** $tmp1951 = &param0->types;
frost$io$IndentedOutputStream* $tmp1952 = *$tmp1951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
frost$io$MemoryOutputStream** $tmp1953 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1954 = *$tmp1953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
frost$io$MemoryOutputStream** $tmp1955 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1956 = *$tmp1955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
frost$io$IndentedOutputStream** $tmp1957 = &param0->body;
frost$io$IndentedOutputStream* $tmp1958 = *$tmp1957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
frost$collections$HashSet** $tmp1959 = &param0->typeImports;
frost$collections$HashSet* $tmp1960 = *$tmp1959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
frost$collections$HashSet** $tmp1961 = &param0->bodyImports;
frost$collections$HashSet* $tmp1962 = *$tmp1961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$collections$HashSet** $tmp1963 = &param0->imports;
frost$collections$HashSet* $tmp1964 = *$tmp1963;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
frost$io$MemoryOutputStream** $tmp1965 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1966 = *$tmp1965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
frost$io$File** $tmp1967 = &param0->outDir;
frost$io$File* $tmp1968 = *$tmp1967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
frost$io$IndentedOutputStream** $tmp1969 = &param0->out;
frost$io$IndentedOutputStream* $tmp1970 = *$tmp1969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$io$IndentedOutputStream** $tmp1971 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1972 = *$tmp1971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1973 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1974 = *$tmp1973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
frost$core$Weak** $tmp1975 = &param0->cCodeGen;
frost$core$Weak* $tmp1976 = *$tmp1975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
org$frostlang$frostc$CCodeGenerator** $tmp1977 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1978 = *$tmp1977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
return;

}

