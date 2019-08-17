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
typedef frost$core$Error* (*$fn506)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn545)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn679)(frost$core$Object*);
typedef frost$core$Error* (*$fn799)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn808)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn842)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn851)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn861)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn890)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn918)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn922)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn927)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn969)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn987)(frost$core$Object*);
typedef frost$core$Error* (*$fn993)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1015)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1031)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1041)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1070)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1079)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1131)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1135)(frost$core$Object*);
typedef frost$core$Error* (*$fn1151)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1177)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1206)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1225)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1235)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1245)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1260)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1288)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1306)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1332)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1341)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1370)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1415)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1419)(frost$core$Object*);
typedef frost$core$Error* (*$fn1436)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1464)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1516)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1691)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1724)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1764)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1791)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1801)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1805)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1810)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1843)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1856)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1865)(frost$core$Object*);
typedef frost$core$Error* (*$fn1873)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1880)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1887)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1894)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn1898)(frost$core$Object*);

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
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, -2912907018242783318, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, 2096479397977239101, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 559938424166824396, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, -2448813731761471205, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s991 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 670056712733651593, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -4913817114742956656, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -5962813414700443260, NULL };
static frost$core$String $s1066 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 2703935467625301937, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, -8740092864407068865, NULL };
static frost$core$String $s1108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20", 8, 1299553688233014337, NULL };
static frost$core$String $s1118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 71, 8885469816273793472, NULL };
static frost$core$String $s1125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -1023494951477965521, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -1023502648059362998, NULL };
static frost$core$String $s1175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, -8967472124348590150, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, -7438197491133939705, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, 1439842525427575854, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -2305927540240831023, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 14, 3730756510990532336, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1225697948708486459, NULL };
static frost$core$String $s1302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -5352411526554368641, NULL };
static frost$core$String $s1330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, 4622182911039583012, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3803391662366219107, NULL };
static frost$core$String $s1382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20", 122, 5922034436274910413, NULL };
static frost$core$String $s1433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, 5593648587920272924, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, 5593643090362131869, NULL };
static frost$core$String $s1461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -2374506366252631061, NULL };
static frost$core$String $s1484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 7893996714969165842, NULL };
static frost$core$String $s1644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, -9034067459731225523, NULL };
static frost$core$String $s1683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, -5577034943728621570, NULL };
static frost$core$String $s1694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 1751680115892408369, NULL };
static frost$core$String $s1794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 636530404172864656, NULL };
static frost$core$String $s1822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 566764192353433709, NULL };
static frost$core$String $s1867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Int $tmp390 = (frost$core$Int) {0u};
frost$core$Object* $tmp391 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp389, $tmp390);
frost$core$String* $tmp392 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp391));
frost$core$String* $tmp393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp392, &$s394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q($tmp391);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$ClassDecl* $tmp395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp396 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp393;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:121
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:121:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp397 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp398 = *$tmp397;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Int $tmp399 = (frost$core$Int) {0u};
frost$core$Object* $tmp400 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp398, $tmp399);
frost$core$String* $tmp401 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp400));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q($tmp400);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
org$frostlang$frostc$ClassDecl* $tmp402 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp403 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp401;
block69:;
frost$core$Int $tmp404 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:123:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp405 = $tmp143.value;
int64_t $tmp406 = $tmp404.value;
bool $tmp407 = $tmp405 == $tmp406;
frost$core$Bit $tmp408 = (frost$core$Bit) {$tmp407};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block85; else goto block86;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:124
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:124:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp410 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp411 = *$tmp410;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Int $tmp412 = (frost$core$Int) {0u};
frost$core$Object* $tmp413 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp411, $tmp412);
frost$core$String** $tmp414 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp413))->name;
frost$core$String* $tmp415 = *$tmp414;
frost$core$Bit $tmp416 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp415, &$s417);
bool $tmp418 = $tmp416.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp413);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
if ($tmp418) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:125
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:125:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp419 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp420 = *$tmp419;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Int $tmp421 = (frost$core$Int) {1u};
frost$core$Object* $tmp422 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp420, $tmp421);
frost$core$String* $tmp423 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp422));
frost$core$String* $tmp424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp423, &$s425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q($tmp422);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Error* $tmp426 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp424;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:127
frost$core$Weak** $tmp427 = &param0->compiler;
frost$core$Weak* $tmp428 = *$tmp427;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:127:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp429 = &$tmp428->_valid;
frost$core$Bit $tmp430 = *$tmp429;
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block94; else goto block95;
block95:;
frost$core$Int $tmp432 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s433, $tmp432);
abort(); // unreachable
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp434 = &$tmp428->value;
frost$core$Object* $tmp435 = *$tmp434;
frost$core$Frost$ref$frost$core$Object$Q($tmp435);
org$frostlang$frostc$ClassDecl* $tmp436 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp435), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
org$frostlang$frostc$ClassDecl* $tmp437 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local5) = $tmp436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q($tmp435);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:128
org$frostlang$frostc$ClassDecl* $tmp438 = *(&local5);
// begin inline call to function org.frostlang.frostc.ClassDecl.isSpecialization():frost.core.Bit from HCodeGenerator.frost:128:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp439 = &$tmp438->name;
frost$core$String* $tmp440 = *$tmp439;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
frost$core$String$Index$nullable $tmp441 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q($tmp440, &$s442);
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp441.nonnull};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:129
frost$core$String** $tmp445 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp446 = *$tmp445;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp447 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp448 = *$tmp447;
frost$core$String* $tmp449 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp448, $tmp446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$String* $tmp450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp449, &$s451);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$String* $tmp452 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local6) = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:130
frost$core$Weak** $tmp453 = &param0->compiler;
frost$core$Weak* $tmp454 = *$tmp453;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:130:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp455 = &$tmp454->_valid;
frost$core$Bit $tmp456 = *$tmp455;
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block104; else goto block105;
block105:;
frost$core$Int $tmp458 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s459, $tmp458);
abort(); // unreachable
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp460 = &$tmp454->value;
frost$core$Object* $tmp461 = *$tmp460;
frost$core$Frost$ref$frost$core$Object$Q($tmp461);
org$frostlang$frostc$ClassDecl* $tmp462 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp461), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
org$frostlang$frostc$ClassDecl* $tmp463 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local7) = $tmp462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q($tmp461);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:131
org$frostlang$frostc$ClassDecl* $tmp464 = *(&local7);
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464 != NULL};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block106; else goto block107;
block107:;
frost$core$Int $tmp467 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s468, $tmp467);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:132
frost$core$Weak** $tmp469 = &param0->compiler;
frost$core$Weak* $tmp470 = *$tmp469;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:132:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp471 = &$tmp470->_valid;
frost$core$Bit $tmp472 = *$tmp471;
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block112; else goto block113;
block113:;
frost$core$Int $tmp474 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s475, $tmp474);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp476 = &$tmp470->value;
frost$core$Object* $tmp477 = *$tmp476;
frost$core$Frost$ref$frost$core$Object$Q($tmp477);
org$frostlang$frostc$ClassDecl* $tmp478 = *(&local7);
frost$core$Bit $tmp479 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp477), $tmp478);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:132:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp480 = $tmp479.value;
bool $tmp481 = !$tmp480;
frost$core$Bit $tmp482 = (frost$core$Bit) {$tmp481};
bool $tmp483 = $tmp482.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp477);
if ($tmp483) goto block108; else goto block109;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:133
frost$collections$HashSet** $tmp484 = &param0->imports;
frost$collections$HashSet* $tmp485 = *$tmp484;
frost$core$String* $tmp486 = *(&local6);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:133:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp487 = &$tmp485->contents;
frost$collections$HashMap* $tmp488 = *$tmp487;
frost$core$Bit $tmp489 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp488, ((frost$collections$Key*) $tmp486));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:133:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp490 = $tmp489.value;
bool $tmp491 = !$tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:134
frost$io$MemoryOutputStream** $tmp494 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp495 = *$tmp494;
frost$core$String* $tmp496 = *(&local6);
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s498, $tmp496);
frost$core$String* $tmp499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s500);
frost$core$String* $tmp501 = *(&local6);
frost$core$String* $tmp502 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp499, $tmp501);
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp502, &$s504);
$fn506 $tmp505 = ($fn506) ((frost$io$OutputStream*) $tmp495)->$class->vtable[19];
frost$core$Error* $tmp507 = $tmp505(((frost$io$OutputStream*) $tmp495), $tmp503);
if ($tmp507 == NULL) goto block119; else goto block120;
block120:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local0) = $tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
org$frostlang$frostc$ClassDecl* $tmp508 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp509 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp510 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block7;
block119:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:135
frost$collections$HashSet** $tmp511 = &param0->imports;
frost$collections$HashSet* $tmp512 = *$tmp511;
frost$core$String* $tmp513 = *(&local6);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:135:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp514 = &$tmp512->contents;
frost$collections$HashMap* $tmp515 = *$tmp514;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp515, ((frost$collections$Key*) $tmp513), ((frost$core$Object*) ((frost$collections$Key*) $tmp513)));
goto block116;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:137
frost$core$String* $tmp516 = *(&local6);
frost$core$String* $tmp517 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp516, &$s518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
org$frostlang$frostc$ClassDecl* $tmp519 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp520 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp521 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp522 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp517;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:139
org$frostlang$frostc$ClassDecl* $tmp523 = *(&local7);
frost$core$String* $tmp524 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp523, &$s525);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$String* $tmp526 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local8) = $tmp524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:140
frost$collections$HashSet** $tmp527 = &param0->imports;
frost$collections$HashSet* $tmp528 = *$tmp527;
frost$core$String* $tmp529 = *(&local8);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:140:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp530 = &$tmp528->contents;
frost$collections$HashMap* $tmp531 = *$tmp530;
frost$core$Bit $tmp532 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp531, ((frost$collections$Key*) $tmp529));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:140:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp533 = $tmp532.value;
bool $tmp534 = !$tmp533;
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:141
frost$io$MemoryOutputStream** $tmp537 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp538 = *$tmp537;
frost$core$String* $tmp539 = *(&local8);
frost$core$String* $tmp540 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s541, $tmp539);
frost$core$String* $tmp542 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp540, &$s543);
$fn545 $tmp544 = ($fn545) ((frost$io$OutputStream*) $tmp538)->$class->vtable[19];
frost$core$Error* $tmp546 = $tmp544(((frost$io$OutputStream*) $tmp538), $tmp542);
if ($tmp546 == NULL) goto block126; else goto block127;
block127:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local0) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
frost$core$String* $tmp547 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp548 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp549 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp550 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block7;
block126:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:142
frost$collections$HashSet** $tmp551 = &param0->imports;
frost$collections$HashSet* $tmp552 = *$tmp551;
frost$core$String* $tmp553 = *(&local8);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:142:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp554 = &$tmp552->contents;
frost$collections$HashMap* $tmp555 = *$tmp554;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp555, ((frost$collections$Key*) $tmp553), ((frost$core$Object*) ((frost$collections$Key*) $tmp553)));
goto block123;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:144
frost$core$String* $tmp556 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$String* $tmp557 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp558 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp559 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp560 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp561 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp556;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:146
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:146:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp562 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp563 = *$tmp562;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Int $tmp564 = (frost$core$Int) {0u};
frost$core$Object* $tmp565 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp563, $tmp564);
frost$core$String* $tmp566 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp565));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q($tmp565);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
org$frostlang$frostc$ClassDecl* $tmp567 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp568 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp566;
block86:;
frost$core$Int $tmp569 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:148:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp570 = $tmp143.value;
int64_t $tmp571 = $tmp569.value;
bool $tmp572 = $tmp570 == $tmp571;
frost$core$Bit $tmp573 = (frost$core$Bit) {$tmp572};
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:149
frost$core$Weak** $tmp575 = &param1->genericClassParameter;
frost$core$Weak* $tmp576 = *$tmp575;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:149:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp577 = &$tmp576->_valid;
frost$core$Bit $tmp578 = *$tmp577;
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block135; else goto block136;
block136:;
frost$core$Int $tmp580 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s581, $tmp580);
abort(); // unreachable
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp582 = &$tmp576->value;
frost$core$Object* $tmp583 = *$tmp582;
frost$core$Frost$ref$frost$core$Object$Q($tmp583);
org$frostlang$frostc$Type** $tmp584 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp583)->bound;
org$frostlang$frostc$Type* $tmp585 = *$tmp584;
frost$core$String* $tmp586 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp585);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q($tmp583);
frost$core$Error* $tmp587 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp586;
block131:;
frost$core$Int $tmp588 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp589 = $tmp143.value;
int64_t $tmp590 = $tmp588.value;
bool $tmp591 = $tmp589 == $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:152
frost$core$Weak** $tmp594 = &param1->genericMethodParameter;
frost$core$Weak* $tmp595 = *$tmp594;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:152:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp596 = &$tmp595->_valid;
frost$core$Bit $tmp597 = *$tmp596;
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block142; else goto block143;
block143:;
frost$core$Int $tmp599 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s600, $tmp599);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp601 = &$tmp595->value;
frost$core$Object* $tmp602 = *$tmp601;
frost$core$Frost$ref$frost$core$Object$Q($tmp602);
org$frostlang$frostc$Type** $tmp603 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp602)->bound;
org$frostlang$frostc$Type* $tmp604 = *$tmp603;
frost$core$String* $tmp605 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp604);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$core$Frost$unref$frost$core$Object$Q($tmp602);
frost$core$Error* $tmp606 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp605;
block138:;
frost$core$Int $tmp607 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp608 = $tmp143.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 == $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block144; else goto block145;
block145:;
frost$core$Int $tmp613 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:154:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp614 = $tmp143.value;
int64_t $tmp615 = $tmp613.value;
bool $tmp616 = $tmp614 == $tmp615;
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block144; else goto block147;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:155
frost$core$Weak** $tmp619 = &param0->compiler;
frost$core$Weak* $tmp620 = *$tmp619;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:155:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp621 = &$tmp620->_valid;
frost$core$Bit $tmp622 = *$tmp621;
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block151; else goto block152;
block152:;
frost$core$Int $tmp624 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s625, $tmp624);
abort(); // unreachable
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp626 = &$tmp620->value;
frost$core$Object* $tmp627 = *$tmp626;
frost$core$Frost$ref$frost$core$Object$Q($tmp627);
org$frostlang$frostc$Type** $tmp628 = &((org$frostlang$frostc$Compiler*) $tmp627)->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp629 = *$tmp628;
frost$core$String* $tmp630 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp629);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q($tmp627);
frost$core$Error* $tmp631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp630;
block147:;
frost$core$Int $tmp632 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:157:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp633 = $tmp143.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 == $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block153; else goto block154;
block154:;
frost$core$Int $tmp638 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:157:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp639 = $tmp143.value;
int64_t $tmp640 = $tmp638.value;
bool $tmp641 = $tmp639 == $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block153; else goto block156;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:158
frost$core$Weak** $tmp644 = &param0->compiler;
frost$core$Weak* $tmp645 = *$tmp644;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:158:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp646 = &$tmp645->_valid;
frost$core$Bit $tmp647 = *$tmp646;
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block160; else goto block161;
block161:;
frost$core$Int $tmp649 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s650, $tmp649);
abort(); // unreachable
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp651 = &$tmp645->value;
frost$core$Object* $tmp652 = *$tmp651;
frost$core$Frost$ref$frost$core$Object$Q($tmp652);
org$frostlang$frostc$Type** $tmp653 = &((org$frostlang$frostc$Compiler*) $tmp652)->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp654 = *$tmp653;
frost$core$String* $tmp655 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q($tmp652);
frost$core$Error* $tmp656 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp655;
block156:;
frost$core$Int $tmp657 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:160:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp658 = $tmp143.value;
int64_t $tmp659 = $tmp657.value;
bool $tmp660 = $tmp658 == $tmp659;
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block162; else goto block163;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:161
frost$core$Weak** $tmp663 = &param0->compiler;
frost$core$Weak* $tmp664 = *$tmp663;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:161:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp665 = &$tmp664->_valid;
frost$core$Bit $tmp666 = *$tmp665;
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block167; else goto block168;
block168:;
frost$core$Int $tmp668 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s669, $tmp668);
abort(); // unreachable
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp670 = &$tmp664->value;
frost$core$Object* $tmp671 = *$tmp670;
frost$core$Frost$ref$frost$core$Object$Q($tmp671);
org$frostlang$frostc$ClassDecl* $tmp672 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp671), param1);
org$frostlang$frostc$Type** $tmp673 = &$tmp672->type;
org$frostlang$frostc$Type* $tmp674 = *$tmp673;
frost$core$String* $tmp675 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$Frost$unref$frost$core$Object$Q($tmp671);
frost$core$Error* $tmp676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp675;
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:164
frost$core$Int $tmp677 = (frost$core$Int) {164u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:164:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn679 $tmp678 = ($fn679) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp680 = $tmp678(((frost$core$Object*) param1));
frost$core$String* $tmp681 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s682, $tmp680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
frost$core$String* $tmp683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp681, &$s684);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s685, $tmp677, $tmp683);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
abort(); // unreachable
block7:;
frost$core$Error* $tmp686 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:170
frost$core$Int $tmp687 = (frost$core$Int) {170u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s688, $tmp687);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp689 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$String* $tmp690 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp689, &$s691);
frost$core$String* $tmp692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp690, param2);
frost$core$String* $tmp693 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp692, &$s694);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
return $tmp693;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:179
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp695 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp695, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Weak** $tmp696 = &param0->compiler;
frost$core$Weak* $tmp697 = *$tmp696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Weak** $tmp698 = &param0->compiler;
*$tmp698 = $tmp695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:180
org$frostlang$frostc$LLVMCodeGenerator** $tmp699 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp700 = *$tmp699;
// begin inline call to method org.frostlang.frostc.LLVMCodeGenerator.setCompiler(compiler:org.frostlang.frostc.Compiler) from HCodeGenerator.frost:180:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:123
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp701 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp701, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Weak** $tmp702 = &$tmp700->compiler;
frost$core$Weak* $tmp703 = *$tmp702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Weak** $tmp704 = &$tmp700->compiler;
*$tmp704 = $tmp701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp705 = &param0->outDir;
frost$io$File* $tmp706 = *$tmp705;
frost$core$String* $tmp707 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp708 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp706, $tmp707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
return $tmp708;

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
frost$io$MemoryOutputStream** $tmp709 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp710 = *$tmp709;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:190:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp711 = &$tmp710->data;
frost$core$MutableString* $tmp712 = *$tmp711;
frost$core$MutableString$clear($tmp712);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:191
frost$io$MemoryOutputStream** $tmp713 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp714 = *$tmp713;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:191:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp715 = &$tmp714->data;
frost$core$MutableString* $tmp716 = *$tmp715;
frost$core$MutableString$clear($tmp716);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:192
frost$io$MemoryOutputStream** $tmp717 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp718 = *$tmp717;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:192:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp719 = &$tmp718->data;
frost$core$MutableString* $tmp720 = *$tmp719;
frost$core$MutableString$clear($tmp720);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:193
frost$io$MemoryOutputStream** $tmp721 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp722 = *$tmp721;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:193:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp723 = &$tmp722->data;
frost$core$MutableString* $tmp724 = *$tmp723;
frost$core$MutableString$clear($tmp724);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:194
frost$collections$HashSet** $tmp725 = &param0->typeImports;
frost$collections$HashSet* $tmp726 = *$tmp725;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:194:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp727 = &$tmp726->contents;
frost$collections$HashMap* $tmp728 = *$tmp727;
frost$collections$HashMap$clear($tmp728);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:195
frost$collections$HashSet** $tmp729 = &param0->bodyImports;
frost$collections$HashSet* $tmp730 = *$tmp729;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:195:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp731 = &$tmp730->contents;
frost$collections$HashMap* $tmp732 = *$tmp731;
frost$collections$HashMap$clear($tmp732);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:196
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:196:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp733 = &param0->outDir;
frost$io$File* $tmp734 = *$tmp733;
frost$core$String* $tmp735 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s736);
frost$io$File* $tmp737 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp734, $tmp735);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$io$File* $tmp738 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local1) = $tmp737;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:197
frost$io$File* $tmp739 = *(&local1);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from HCodeGenerator.frost:197:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp740 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp739, &$s741);
frost$core$String** $tmp742 = &$tmp740->path;
frost$core$String* $tmp743 = *$tmp742;
frost$core$String* $tmp744 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp743);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$String* $tmp745 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local3) = $tmp744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp746 = *(&local3);
frost$core$Bit $tmp747 = (frost$core$Bit) {$tmp746 == NULL};
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp749 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp750 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp751 = *(&local3);
frost$io$File$init$frost$core$String($tmp750, $tmp751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$String* $tmp752 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp750;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
goto block10;
block10:;
frost$io$File* $tmp753 = *(&local2);
frost$core$Error* $tmp754 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp753);
if ($tmp754 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local0) = $tmp754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$io$File* $tmp755 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp756 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:198
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp757 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp758 = *(&local1);
frost$core$Maybe* $tmp759 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp758);
frost$core$Int* $tmp760 = &$tmp759->$rawValue;
frost$core$Int $tmp761 = *$tmp760;
int64_t $tmp762 = $tmp761.value;
bool $tmp763 = $tmp762 == 0u;
if ($tmp763) goto block15; else goto block16;
block16:;
frost$core$Error** $tmp764 = (frost$core$Error**) ($tmp759->$data + 0);
frost$core$Error* $tmp765 = *$tmp764;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local0) = $tmp765;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$io$File* $tmp766 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp767 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Object** $tmp768 = (frost$core$Object**) ($tmp759->$data + 0);
frost$core$Object* $tmp769 = *$tmp768;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp757, ((frost$io$OutputStream*) $tmp769));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$io$IndentedOutputStream** $tmp770 = &param0->out;
frost$io$IndentedOutputStream* $tmp771 = *$tmp770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$io$IndentedOutputStream** $tmp772 = &param0->out;
*$tmp772 = $tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:199
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:199:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp773 = &param0->outDir;
frost$io$File* $tmp774 = *$tmp773;
frost$core$String* $tmp775 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s776);
frost$io$File* $tmp777 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp774, $tmp775);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$io$File* $tmp778 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local4) = $tmp777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:200
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp779 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp780 = *(&local4);
frost$core$Maybe* $tmp781 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp780);
frost$core$Int* $tmp782 = &$tmp781->$rawValue;
frost$core$Int $tmp783 = *$tmp782;
int64_t $tmp784 = $tmp783.value;
bool $tmp785 = $tmp784 == 0u;
if ($tmp785) goto block18; else goto block19;
block19:;
frost$core$Error** $tmp786 = (frost$core$Error**) ($tmp781->$data + 0);
frost$core$Error* $tmp787 = *$tmp786;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local0) = $tmp787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$io$File* $tmp788 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp789 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp790 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block18:;
frost$core$Object** $tmp791 = (frost$core$Object**) ($tmp781->$data + 0);
frost$core$Object* $tmp792 = *$tmp791;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp779, ((frost$io$OutputStream*) $tmp792));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$io$IndentedOutputStream** $tmp793 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp794 = *$tmp793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$io$IndentedOutputStream** $tmp795 = &param0->typesOut;
*$tmp795 = $tmp779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:201
frost$io$IndentedOutputStream** $tmp796 = &param0->out;
frost$io$IndentedOutputStream* $tmp797 = *$tmp796;
$fn799 $tmp798 = ($fn799) ((frost$io$OutputStream*) $tmp797)->$class->vtable[19];
frost$core$Error* $tmp800 = $tmp798(((frost$io$OutputStream*) $tmp797), &$s801);
if ($tmp800 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local0) = $tmp800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$io$File* $tmp802 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp803 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp804 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:202
frost$io$IndentedOutputStream** $tmp805 = &param0->out;
frost$io$IndentedOutputStream* $tmp806 = *$tmp805;
$fn808 $tmp807 = ($fn808) ((frost$io$OutputStream*) $tmp806)->$class->vtable[19];
frost$core$Error* $tmp809 = $tmp807(((frost$io$OutputStream*) $tmp806), &$s810);
if ($tmp809 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local0) = $tmp809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$io$File* $tmp811 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp812 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp813 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:203
frost$io$IndentedOutputStream** $tmp814 = &param0->out;
frost$io$IndentedOutputStream* $tmp815 = *$tmp814;
frost$io$File* $tmp816 = *(&local4);
// begin inline call to function frost.io.File.get_name():frost.core.String from HCodeGenerator.frost:203:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp817 = &$tmp816->path;
frost$core$String* $tmp818 = *$tmp817;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp819 = frost$core$String$get_end$R$frost$core$String$Index($tmp818);
frost$core$String$Index$nullable $tmp820 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp818, &$s821, $tmp819);
*(&local6) = $tmp820;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp822 = *(&local6);
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822.nonnull};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp825 = &$tmp816->path;
frost$core$String* $tmp826 = *$tmp825;
frost$core$String** $tmp827 = &$tmp816->path;
frost$core$String* $tmp828 = *$tmp827;
frost$core$String$Index$nullable $tmp829 = *(&local6);
frost$core$String$Index $tmp830 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp828, ((frost$core$String$Index) $tmp829.value));
frost$core$Bit $tmp831 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp832 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp830, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp831);
frost$core$String* $tmp833 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp826, $tmp832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local5) = $tmp833;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
goto block24;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp834 = &$tmp816->path;
frost$core$String* $tmp835 = *$tmp834;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local5) = $tmp835;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
goto block24;
block27:;
goto block24;
block24:;
frost$core$String* $tmp836 = *(&local5);
frost$core$String* $tmp837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s838, $tmp836);
frost$core$String* $tmp839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp837, &$s840);
$fn842 $tmp841 = ($fn842) ((frost$io$OutputStream*) $tmp815)->$class->vtable[19];
frost$core$Error* $tmp843 = $tmp841(((frost$io$OutputStream*) $tmp815), $tmp839);
if ($tmp843 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local0) = $tmp843;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$String* $tmp844 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local5) = ((frost$core$String*) NULL);
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
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:204
frost$io$IndentedOutputStream** $tmp848 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp849 = *$tmp848;
$fn851 $tmp850 = ($fn851) ((frost$io$OutputStream*) $tmp849)->$class->vtable[19];
frost$core$Error* $tmp852 = $tmp850(((frost$io$OutputStream*) $tmp849), &$s853);
if ($tmp852 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local0) = $tmp852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$String* $tmp854 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp855 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp856 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp857 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:205
frost$io$IndentedOutputStream** $tmp858 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp859 = *$tmp858;
$fn861 $tmp860 = ($fn861) ((frost$io$OutputStream*) $tmp859)->$class->vtable[19];
frost$core$Error* $tmp862 = $tmp860(((frost$io$OutputStream*) $tmp859), &$s863);
if ($tmp862 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local0) = $tmp862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$String* $tmp864 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp865 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp866 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp867 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:206
frost$io$MemoryOutputStream** $tmp868 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp869 = *$tmp868;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$io$MemoryOutputStream** $tmp870 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp871 = *$tmp870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
frost$io$MemoryOutputStream** $tmp872 = &param0->importStream;
*$tmp872 = $tmp869;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:207
frost$collections$HashSet** $tmp873 = &param0->typeImports;
frost$collections$HashSet* $tmp874 = *$tmp873;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$collections$HashSet** $tmp875 = &param0->imports;
frost$collections$HashSet* $tmp876 = *$tmp875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$collections$HashSet** $tmp877 = &param0->imports;
*$tmp877 = $tmp874;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:208
frost$io$IndentedOutputStream** $tmp878 = &param0->types;
frost$io$IndentedOutputStream* $tmp879 = *$tmp878;
frost$core$String** $tmp880 = &param1->name;
frost$core$String* $tmp881 = *$tmp880;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:208:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp882 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp883 = *$tmp882;
frost$core$String* $tmp884 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp883, $tmp881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$String* $tmp885 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s886, $tmp884);
frost$core$String* $tmp887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp885, &$s888);
$fn890 $tmp889 = ($fn890) ((frost$io$OutputStream*) $tmp879)->$class->vtable[19];
frost$core$Error* $tmp891 = $tmp889(((frost$io$OutputStream*) $tmp879), $tmp887);
if ($tmp891 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local0) = $tmp891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$String* $tmp892 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp893 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp894 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp895 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:209
frost$io$IndentedOutputStream** $tmp896 = &param0->types;
frost$io$IndentedOutputStream* $tmp897 = *$tmp896;
frost$core$Int* $tmp898 = &$tmp897->level;
frost$core$Int $tmp899 = *$tmp898;
frost$core$Int $tmp900 = (frost$core$Int) {1u};
int64_t $tmp901 = $tmp899.value;
int64_t $tmp902 = $tmp900.value;
int64_t $tmp903 = $tmp901 + $tmp902;
frost$core$Int $tmp904 = (frost$core$Int) {$tmp903};
frost$core$Int* $tmp905 = &$tmp897->level;
*$tmp905 = $tmp904;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:210
frost$core$Weak** $tmp906 = &param0->compiler;
frost$core$Weak* $tmp907 = *$tmp906;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:210:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp908 = &$tmp907->_valid;
frost$core$Bit $tmp909 = *$tmp908;
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block40; else goto block41;
block41:;
frost$core$Int $tmp911 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s912, $tmp911);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp913 = &$tmp907->value;
frost$core$Object* $tmp914 = *$tmp913;
frost$core$Frost$ref$frost$core$Object$Q($tmp914);
frost$collections$ListView* $tmp915 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp914), param1);
ITable* $tmp916 = ((frost$collections$Iterable*) $tmp915)->$class->itable;
while ($tmp916->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp916 = $tmp916->next;
}
$fn918 $tmp917 = $tmp916->methods[0];
frost$collections$Iterator* $tmp919 = $tmp917(((frost$collections$Iterable*) $tmp915));
goto block42;
block42:;
ITable* $tmp920 = $tmp919->$class->itable;
while ($tmp920->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp920 = $tmp920->next;
}
$fn922 $tmp921 = $tmp920->methods[0];
frost$core$Bit $tmp923 = $tmp921($tmp919);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block44; else goto block43;
block43:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp925 = $tmp919->$class->itable;
while ($tmp925->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp925 = $tmp925->next;
}
$fn927 $tmp926 = $tmp925->methods[1];
frost$core$Object* $tmp928 = $tmp926($tmp919);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp928)));
org$frostlang$frostc$FieldDecl* $tmp929 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp928);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:211
frost$core$Weak** $tmp930 = &param0->compiler;
frost$core$Weak* $tmp931 = *$tmp930;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:211:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp932 = &$tmp931->_valid;
frost$core$Bit $tmp933 = *$tmp932;
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block47; else goto block48;
block48:;
frost$core$Int $tmp935 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s936, $tmp935);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp937 = &$tmp931->value;
frost$core$Object* $tmp938 = *$tmp937;
frost$core$Frost$ref$frost$core$Object$Q($tmp938);
org$frostlang$frostc$FieldDecl* $tmp939 = *(&local7);
frost$core$Bit $tmp940 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp938), $tmp939);
frost$core$Frost$unref$frost$core$Object$Q($tmp938);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp941 = *(&local7);
org$frostlang$frostc$Type** $tmp942 = &$tmp941->type;
org$frostlang$frostc$Type* $tmp943 = *$tmp942;
frost$core$Weak** $tmp944 = &param0->compiler;
frost$core$Weak* $tmp945 = *$tmp944;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:212:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp946 = &$tmp945->_valid;
frost$core$Bit $tmp947 = *$tmp946;
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block54; else goto block55;
block55:;
frost$core$Int $tmp949 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s950, $tmp949);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp951 = &$tmp945->value;
frost$core$Object* $tmp952 = *$tmp951;
frost$core$Frost$ref$frost$core$Object$Q($tmp952);
org$frostlang$frostc$Type** $tmp953 = &((org$frostlang$frostc$Compiler*) $tmp952)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp954 = *$tmp953;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from HCodeGenerator.frost:212:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp955 = &((org$frostlang$frostc$Symbol*) $tmp943)->name;
frost$core$String* $tmp956 = *$tmp955;
frost$core$String** $tmp957 = &((org$frostlang$frostc$Symbol*) $tmp954)->name;
frost$core$String* $tmp958 = *$tmp957;
frost$core$Bit $tmp959 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp956, $tmp958);
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Type$Kind* $tmp961 = &$tmp943->typeKind;
org$frostlang$frostc$Type$Kind $tmp962 = *$tmp961;
org$frostlang$frostc$Type$Kind$wrapper* $tmp963;
$tmp963 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp963->value = $tmp962;
org$frostlang$frostc$Type$Kind* $tmp964 = &$tmp954->typeKind;
org$frostlang$frostc$Type$Kind $tmp965 = *$tmp964;
org$frostlang$frostc$Type$Kind$wrapper* $tmp966;
$tmp966 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp966->value = $tmp965;
ITable* $tmp967 = ((frost$core$Equatable*) $tmp963)->$class->itable;
while ($tmp967->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp967 = $tmp967->next;
}
$fn969 $tmp968 = $tmp967->methods[0];
frost$core$Bit $tmp970 = $tmp968(((frost$core$Equatable*) $tmp963), ((frost$core$Equatable*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp966)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp963)));
*(&local8) = $tmp970;
goto block59;
block58:;
*(&local8) = $tmp959;
goto block59;
block59:;
frost$core$Bit $tmp971 = *(&local8);
bool $tmp972 = $tmp971.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp952);
if ($tmp972) goto block49; else goto block51;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:213
frost$io$IndentedOutputStream** $tmp973 = &param0->types;
frost$io$IndentedOutputStream* $tmp974 = *$tmp973;
org$frostlang$frostc$FieldDecl* $tmp975 = *(&local7);
frost$core$String** $tmp976 = &((org$frostlang$frostc$Symbol*) $tmp975)->name;
frost$core$String* $tmp977 = *$tmp976;
frost$core$String* $tmp978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s979, $tmp977);
frost$core$String* $tmp980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp978, &$s981);
org$frostlang$frostc$LLVMCodeGenerator** $tmp982 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp983 = *$tmp982;
frost$core$Int $tmp984 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int($tmp983, param1);
frost$core$Int$wrapper* $tmp985;
$tmp985 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp985->value = $tmp984;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:213:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn987 $tmp986 = ($fn987) ((frost$core$Object*) $tmp985)->$class->vtable[0];
frost$core$String* $tmp988 = $tmp986(((frost$core$Object*) $tmp985));
frost$core$String* $tmp989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp980, $tmp988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$String* $tmp990 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp989, &$s991);
$fn993 $tmp992 = ($fn993) ((frost$io$OutputStream*) $tmp974)->$class->vtable[19];
frost$core$Error* $tmp994 = $tmp992(((frost$io$OutputStream*) $tmp974), $tmp990);
if ($tmp994 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local0) = $tmp994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q($tmp928);
org$frostlang$frostc$FieldDecl* $tmp995 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q($tmp914);
frost$core$String* $tmp996 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp997 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp998 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp999 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
goto block50;
block51:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:216
frost$io$IndentedOutputStream** $tmp1000 = &param0->types;
frost$io$IndentedOutputStream* $tmp1001 = *$tmp1000;
org$frostlang$frostc$FieldDecl* $tmp1002 = *(&local7);
org$frostlang$frostc$Type** $tmp1003 = &$tmp1002->type;
org$frostlang$frostc$Type* $tmp1004 = *$tmp1003;
frost$core$String* $tmp1005 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1004);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:216:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$String* $tmp1006 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1005, &$s1007);
org$frostlang$frostc$FieldDecl* $tmp1008 = *(&local7);
frost$core$String** $tmp1009 = &((org$frostlang$frostc$Symbol*) $tmp1008)->name;
frost$core$String* $tmp1010 = *$tmp1009;
frost$core$String* $tmp1011 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1006, $tmp1010);
frost$core$String* $tmp1012 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1011, &$s1013);
$fn1015 $tmp1014 = ($fn1015) ((frost$io$OutputStream*) $tmp1001)->$class->vtable[19];
frost$core$Error* $tmp1016 = $tmp1014(((frost$io$OutputStream*) $tmp1001), $tmp1012);
if ($tmp1016 == NULL) goto block64; else goto block65;
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local0) = $tmp1016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q($tmp928);
org$frostlang$frostc$FieldDecl* $tmp1017 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q($tmp914);
frost$core$String* $tmp1018 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1019 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1020 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1021 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block64:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp928);
org$frostlang$frostc$FieldDecl* $tmp1022 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block42;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q($tmp914);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:219
frost$core$String** $tmp1023 = &param1->name;
frost$core$String* $tmp1024 = *$tmp1023;
frost$core$Bit $tmp1025 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1024, &$s1026);
bool $tmp1027 = $tmp1025.value;
if ($tmp1027) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:220
frost$io$IndentedOutputStream** $tmp1028 = &param0->types;
frost$io$IndentedOutputStream* $tmp1029 = *$tmp1028;
$fn1031 $tmp1030 = ($fn1031) ((frost$io$OutputStream*) $tmp1029)->$class->vtable[19];
frost$core$Error* $tmp1032 = $tmp1030(((frost$io$OutputStream*) $tmp1029), &$s1033);
if ($tmp1032 == NULL) goto block68; else goto block69;
block69:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
*(&local0) = $tmp1032;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$String* $tmp1034 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1035 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1036 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1037 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:221
frost$io$IndentedOutputStream** $tmp1038 = &param0->types;
frost$io$IndentedOutputStream* $tmp1039 = *$tmp1038;
$fn1041 $tmp1040 = ($fn1041) ((frost$io$OutputStream*) $tmp1039)->$class->vtable[19];
frost$core$Error* $tmp1042 = $tmp1040(((frost$io$OutputStream*) $tmp1039), &$s1043);
if ($tmp1042 == NULL) goto block70; else goto block71;
block71:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local0) = $tmp1042;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$String* $tmp1044 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1045 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1046 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1047 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block70:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
goto block67;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:223
frost$io$IndentedOutputStream** $tmp1048 = &param0->types;
frost$io$IndentedOutputStream* $tmp1049 = *$tmp1048;
frost$core$Int* $tmp1050 = &$tmp1049->level;
frost$core$Int $tmp1051 = *$tmp1050;
frost$core$Int $tmp1052 = (frost$core$Int) {1u};
int64_t $tmp1053 = $tmp1051.value;
int64_t $tmp1054 = $tmp1052.value;
int64_t $tmp1055 = $tmp1053 - $tmp1054;
frost$core$Int $tmp1056 = (frost$core$Int) {$tmp1055};
frost$core$Int* $tmp1057 = &$tmp1049->level;
*$tmp1057 = $tmp1056;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:224
frost$io$IndentedOutputStream** $tmp1058 = &param0->types;
frost$io$IndentedOutputStream* $tmp1059 = *$tmp1058;
frost$core$String** $tmp1060 = &param1->name;
frost$core$String* $tmp1061 = *$tmp1060;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:224:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1062 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1063 = *$tmp1062;
frost$core$String* $tmp1064 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1063, $tmp1061);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$String* $tmp1065 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1066, $tmp1064);
frost$core$String* $tmp1067 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1065, &$s1068);
$fn1070 $tmp1069 = ($fn1070) ((frost$io$OutputStream*) $tmp1059)->$class->vtable[19];
frost$core$Error* $tmp1071 = $tmp1069(((frost$io$OutputStream*) $tmp1059), $tmp1067);
if ($tmp1071 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local0) = $tmp1071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$String* $tmp1072 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1073 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1074 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1075 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:225
frost$io$IndentedOutputStream** $tmp1076 = &param0->types;
frost$io$IndentedOutputStream* $tmp1077 = *$tmp1076;
$fn1079 $tmp1078 = ($fn1079) ((frost$io$OutputStream*) $tmp1077)->$class->vtable[19];
frost$core$Error* $tmp1080 = $tmp1078(((frost$io$OutputStream*) $tmp1077), &$s1081);
if ($tmp1080 == NULL) goto block75; else goto block76;
block76:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local0) = $tmp1080;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$String* $tmp1082 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1083 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1084 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1085 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:226
frost$io$IndentedOutputStream** $tmp1086 = &param0->types;
frost$io$IndentedOutputStream* $tmp1087 = *$tmp1086;
frost$core$Weak** $tmp1088 = &param0->compiler;
frost$core$Weak* $tmp1089 = *$tmp1088;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1090 = &$tmp1089->_valid;
frost$core$Bit $tmp1091 = *$tmp1090;
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block79; else goto block80;
block80:;
frost$core$Int $tmp1093 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1094, $tmp1093);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1095 = &$tmp1089->value;
frost$core$Object* $tmp1096 = *$tmp1095;
frost$core$Frost$ref$frost$core$Object$Q($tmp1096);
org$frostlang$frostc$Type** $tmp1097 = &((org$frostlang$frostc$Compiler*) $tmp1096)->STRING_TYPE;
org$frostlang$frostc$Type* $tmp1098 = *$tmp1097;
frost$core$String* $tmp1099 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1098);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:227:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$core$String* $tmp1100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1099, &$s1101);
frost$core$Weak** $tmp1102 = &param0->compiler;
frost$core$Weak* $tmp1103 = *$tmp1102;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1104 = &$tmp1103->_valid;
frost$core$Bit $tmp1105 = *$tmp1104;
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block84; else goto block85;
block85:;
frost$core$Int $tmp1107 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1108, $tmp1107);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1109 = &$tmp1103->value;
frost$core$Object* $tmp1110 = *$tmp1109;
frost$core$Frost$ref$frost$core$Object$Q($tmp1110);
org$frostlang$frostc$Type** $tmp1111 = &((org$frostlang$frostc$Compiler*) $tmp1110)->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1112 = *$tmp1111;
frost$core$String* $tmp1113 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1112);
frost$core$String* $tmp1114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1100, $tmp1113);
frost$core$String* $tmp1115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1114, &$s1116);
frost$core$String* $tmp1117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1118, $tmp1115);
frost$core$Weak** $tmp1119 = &param0->compiler;
frost$core$Weak* $tmp1120 = *$tmp1119;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:228:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1121 = &$tmp1120->_valid;
frost$core$Bit $tmp1122 = *$tmp1121;
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block88; else goto block89;
block89:;
frost$core$Int $tmp1124 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1125, $tmp1124);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1126 = &$tmp1120->value;
frost$core$Object* $tmp1127 = *$tmp1126;
frost$core$Frost$ref$frost$core$Object$Q($tmp1127);
frost$collections$ListView* $tmp1128 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1127), param1);
ITable* $tmp1129 = ((frost$collections$CollectionView*) $tmp1128)->$class->itable;
while ($tmp1129->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[0];
frost$core$Int $tmp1132 = $tmp1130(((frost$collections$CollectionView*) $tmp1128));
frost$core$Int$wrapper* $tmp1133;
$tmp1133 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1133->value = $tmp1132;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:228:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1135 $tmp1134 = ($fn1135) ((frost$core$Object*) $tmp1133)->$class->vtable[0];
frost$core$String* $tmp1136 = $tmp1134(((frost$core$Object*) $tmp1133));
frost$core$String* $tmp1137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1138, $tmp1136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
frost$core$String* $tmp1139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1137, &$s1140);
frost$core$String* $tmp1141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1117, $tmp1139);
frost$core$String** $tmp1142 = &param1->name;
frost$core$String* $tmp1143 = *$tmp1142;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1144 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1145 = *$tmp1144;
frost$core$String* $tmp1146 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1145, $tmp1143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1146, &$s1148);
frost$core$String* $tmp1149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1141, $tmp1147);
$fn1151 $tmp1150 = ($fn1151) ((frost$io$OutputStream*) $tmp1087)->$class->vtable[19];
frost$core$Error* $tmp1152 = $tmp1150(((frost$io$OutputStream*) $tmp1087), $tmp1149);
if ($tmp1152 == NULL) goto block93; else goto block94;
block94:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local0) = $tmp1152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q($tmp1127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q($tmp1110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$core$Frost$unref$frost$core$Object$Q($tmp1096);
frost$core$String* $tmp1153 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1154 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1155 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1156 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q($tmp1127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q($tmp1110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$core$Frost$unref$frost$core$Object$Q($tmp1096);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:230
frost$io$IndentedOutputStream** $tmp1157 = &param0->types;
frost$io$IndentedOutputStream* $tmp1158 = *$tmp1157;
frost$core$String** $tmp1159 = &param1->name;
frost$core$String* $tmp1160 = *$tmp1159;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1161 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1162 = *$tmp1161;
frost$core$String* $tmp1163 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1162, $tmp1160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1165, $tmp1163);
frost$core$String* $tmp1166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1164, &$s1167);
frost$core$String** $tmp1168 = &param1->name;
frost$core$String* $tmp1169 = *$tmp1168;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1170 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1171 = *$tmp1170;
frost$core$String* $tmp1172 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1171, $tmp1169);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$String* $tmp1173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1166, $tmp1172);
frost$core$String* $tmp1174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1173, &$s1175);
$fn1177 $tmp1176 = ($fn1177) ((frost$io$OutputStream*) $tmp1158)->$class->vtable[19];
frost$core$Error* $tmp1178 = $tmp1176(((frost$io$OutputStream*) $tmp1158), $tmp1174);
if ($tmp1178 == NULL) goto block97; else goto block98;
block98:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local0) = $tmp1178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$String* $tmp1179 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1180 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1181 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block97:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:231
frost$core$Weak** $tmp1183 = &param0->compiler;
frost$core$Weak* $tmp1184 = *$tmp1183;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:231:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1185 = &$tmp1184->_valid;
frost$core$Bit $tmp1186 = *$tmp1185;
bool $tmp1187 = $tmp1186.value;
if ($tmp1187) goto block103; else goto block104;
block104:;
frost$core$Int $tmp1188 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1189, $tmp1188);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1190 = &$tmp1184->value;
frost$core$Object* $tmp1191 = *$tmp1190;
frost$core$Frost$ref$frost$core$Object$Q($tmp1191);
frost$core$Bit $tmp1192 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1191), param1);
bool $tmp1193 = $tmp1192.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1191);
if ($tmp1193) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:232
frost$io$IndentedOutputStream** $tmp1194 = &param0->types;
frost$io$IndentedOutputStream* $tmp1195 = *$tmp1194;
frost$core$String** $tmp1196 = &param1->name;
frost$core$String* $tmp1197 = *$tmp1196;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:232:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1198 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1199 = *$tmp1198;
frost$core$String* $tmp1200 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1199, $tmp1197);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$String* $tmp1201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1202, $tmp1200);
frost$core$String* $tmp1203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1201, &$s1204);
$fn1206 $tmp1205 = ($fn1206) ((frost$io$OutputStream*) $tmp1195)->$class->vtable[19];
frost$core$Error* $tmp1207 = $tmp1205(((frost$io$OutputStream*) $tmp1195), $tmp1203);
if ($tmp1207 == NULL) goto block106; else goto block107;
block107:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local0) = $tmp1207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$String* $tmp1208 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1209 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1210 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1211 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:233
frost$io$IndentedOutputStream** $tmp1212 = &param0->types;
frost$io$IndentedOutputStream* $tmp1213 = *$tmp1212;
frost$core$Int* $tmp1214 = &$tmp1213->level;
frost$core$Int $tmp1215 = *$tmp1214;
frost$core$Int $tmp1216 = (frost$core$Int) {1u};
int64_t $tmp1217 = $tmp1215.value;
int64_t $tmp1218 = $tmp1216.value;
int64_t $tmp1219 = $tmp1217 + $tmp1218;
frost$core$Int $tmp1220 = (frost$core$Int) {$tmp1219};
frost$core$Int* $tmp1221 = &$tmp1213->level;
*$tmp1221 = $tmp1220;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:234
frost$io$IndentedOutputStream** $tmp1222 = &param0->types;
frost$io$IndentedOutputStream* $tmp1223 = *$tmp1222;
$fn1225 $tmp1224 = ($fn1225) ((frost$io$OutputStream*) $tmp1223)->$class->vtable[19];
frost$core$Error* $tmp1226 = $tmp1224(((frost$io$OutputStream*) $tmp1223), &$s1227);
if ($tmp1226 == NULL) goto block108; else goto block109;
block109:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local0) = $tmp1226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$String* $tmp1228 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1229 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1231 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block108:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:235
frost$io$IndentedOutputStream** $tmp1232 = &param0->types;
frost$io$IndentedOutputStream* $tmp1233 = *$tmp1232;
$fn1235 $tmp1234 = ($fn1235) ((frost$io$OutputStream*) $tmp1233)->$class->vtable[19];
frost$core$Error* $tmp1236 = $tmp1234(((frost$io$OutputStream*) $tmp1233), &$s1237);
if ($tmp1236 == NULL) goto block110; else goto block111;
block111:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local0) = $tmp1236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
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
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:236
frost$io$IndentedOutputStream** $tmp1242 = &param0->types;
frost$io$IndentedOutputStream* $tmp1243 = *$tmp1242;
$fn1245 $tmp1244 = ($fn1245) ((frost$io$OutputStream*) $tmp1243)->$class->vtable[19];
frost$core$Error* $tmp1246 = $tmp1244(((frost$io$OutputStream*) $tmp1243), &$s1247);
if ($tmp1246 == NULL) goto block112; else goto block113;
block113:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local0) = $tmp1246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$String* $tmp1248 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1249 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1250 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block112:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:237
frost$io$IndentedOutputStream** $tmp1252 = &param0->types;
frost$io$IndentedOutputStream* $tmp1253 = *$tmp1252;
org$frostlang$frostc$Type** $tmp1254 = &param1->type;
org$frostlang$frostc$Type* $tmp1255 = *$tmp1254;
frost$core$String* $tmp1256 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1255);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:237:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1256, &$s1258);
$fn1260 $tmp1259 = ($fn1260) ((frost$io$OutputStream*) $tmp1253)->$class->vtable[19];
frost$core$Error* $tmp1261 = $tmp1259(((frost$io$OutputStream*) $tmp1253), $tmp1257);
if ($tmp1261 == NULL) goto block115; else goto block116;
block116:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local0) = $tmp1261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1262 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1263 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1264 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1265 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block115:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:238
frost$io$IndentedOutputStream** $tmp1266 = &param0->types;
frost$io$IndentedOutputStream* $tmp1267 = *$tmp1266;
frost$core$Int* $tmp1268 = &$tmp1267->level;
frost$core$Int $tmp1269 = *$tmp1268;
frost$core$Int $tmp1270 = (frost$core$Int) {1u};
int64_t $tmp1271 = $tmp1269.value;
int64_t $tmp1272 = $tmp1270.value;
int64_t $tmp1273 = $tmp1271 - $tmp1272;
frost$core$Int $tmp1274 = (frost$core$Int) {$tmp1273};
frost$core$Int* $tmp1275 = &$tmp1267->level;
*$tmp1275 = $tmp1274;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:239
frost$io$IndentedOutputStream** $tmp1276 = &param0->types;
frost$io$IndentedOutputStream* $tmp1277 = *$tmp1276;
frost$core$String** $tmp1278 = &param1->name;
frost$core$String* $tmp1279 = *$tmp1278;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:239:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1280 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1281 = *$tmp1280;
frost$core$String* $tmp1282 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1281, $tmp1279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$String* $tmp1283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1284, $tmp1282);
frost$core$String* $tmp1285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1283, &$s1286);
$fn1288 $tmp1287 = ($fn1288) ((frost$io$OutputStream*) $tmp1277)->$class->vtable[19];
frost$core$Error* $tmp1289 = $tmp1287(((frost$io$OutputStream*) $tmp1277), $tmp1285);
if ($tmp1289 == NULL) goto block118; else goto block119;
block119:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local0) = $tmp1289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$String* $tmp1290 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:240
frost$io$IndentedOutputStream** $tmp1294 = &param0->types;
frost$io$IndentedOutputStream* $tmp1295 = *$tmp1294;
frost$core$String** $tmp1296 = &param1->name;
frost$core$String* $tmp1297 = *$tmp1296;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:240:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1298 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1299 = *$tmp1298;
frost$core$String* $tmp1300 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1299, $tmp1297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$String* $tmp1301 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1302, $tmp1300);
frost$core$String* $tmp1303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1301, &$s1304);
$fn1306 $tmp1305 = ($fn1306) ((frost$io$OutputStream*) $tmp1295)->$class->vtable[19];
frost$core$Error* $tmp1307 = $tmp1305(((frost$io$OutputStream*) $tmp1295), $tmp1303);
if ($tmp1307 == NULL) goto block121; else goto block122;
block122:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local0) = $tmp1307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$String* $tmp1308 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1309 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1310 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1311 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:241
frost$io$IndentedOutputStream** $tmp1312 = &param0->types;
frost$io$IndentedOutputStream* $tmp1313 = *$tmp1312;
frost$core$Int* $tmp1314 = &$tmp1313->level;
frost$core$Int $tmp1315 = *$tmp1314;
frost$core$Int $tmp1316 = (frost$core$Int) {1u};
int64_t $tmp1317 = $tmp1315.value;
int64_t $tmp1318 = $tmp1316.value;
int64_t $tmp1319 = $tmp1317 + $tmp1318;
frost$core$Int $tmp1320 = (frost$core$Int) {$tmp1319};
frost$core$Int* $tmp1321 = &$tmp1313->level;
*$tmp1321 = $tmp1320;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:242
frost$io$IndentedOutputStream** $tmp1322 = &param0->types;
frost$io$IndentedOutputStream* $tmp1323 = *$tmp1322;
frost$core$String** $tmp1324 = &param1->name;
frost$core$String* $tmp1325 = *$tmp1324;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1326 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1327 = *$tmp1326;
frost$core$String* $tmp1328 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1327, $tmp1325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$core$String* $tmp1329 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1328, &$s1330);
$fn1332 $tmp1331 = ($fn1332) ((frost$io$OutputStream*) $tmp1323)->$class->vtable[19];
frost$core$Error* $tmp1333 = $tmp1331(((frost$io$OutputStream*) $tmp1323), $tmp1329);
if ($tmp1333 == NULL) goto block125; else goto block126;
block126:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local0) = $tmp1333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$core$String* $tmp1334 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1335 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1336 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1337 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:243
frost$io$IndentedOutputStream** $tmp1338 = &param0->types;
frost$io$IndentedOutputStream* $tmp1339 = *$tmp1338;
$fn1341 $tmp1340 = ($fn1341) ((frost$io$OutputStream*) $tmp1339)->$class->vtable[19];
frost$core$Error* $tmp1342 = $tmp1340(((frost$io$OutputStream*) $tmp1339), &$s1343);
if ($tmp1342 == NULL) goto block127; else goto block128;
block128:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local0) = $tmp1342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
frost$core$String* $tmp1344 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1345 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block127:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:244
frost$io$IndentedOutputStream** $tmp1348 = &param0->types;
frost$io$IndentedOutputStream* $tmp1349 = *$tmp1348;
frost$core$Int* $tmp1350 = &$tmp1349->level;
frost$core$Int $tmp1351 = *$tmp1350;
frost$core$Int $tmp1352 = (frost$core$Int) {1u};
int64_t $tmp1353 = $tmp1351.value;
int64_t $tmp1354 = $tmp1352.value;
int64_t $tmp1355 = $tmp1353 - $tmp1354;
frost$core$Int $tmp1356 = (frost$core$Int) {$tmp1355};
frost$core$Int* $tmp1357 = &$tmp1349->level;
*$tmp1357 = $tmp1356;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:245
frost$io$IndentedOutputStream** $tmp1358 = &param0->types;
frost$io$IndentedOutputStream* $tmp1359 = *$tmp1358;
frost$core$String** $tmp1360 = &param1->name;
frost$core$String* $tmp1361 = *$tmp1360;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:245:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1362 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1363 = *$tmp1362;
frost$core$String* $tmp1364 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1363, $tmp1361);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$String* $tmp1365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1366, $tmp1364);
frost$core$String* $tmp1367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1365, &$s1368);
$fn1370 $tmp1369 = ($fn1370) ((frost$io$OutputStream*) $tmp1359)->$class->vtable[19];
frost$core$Error* $tmp1371 = $tmp1369(((frost$io$OutputStream*) $tmp1359), $tmp1367);
if ($tmp1371 == NULL) goto block130; else goto block131;
block131:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local0) = $tmp1371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$String* $tmp1372 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1373 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1374 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1375 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block130:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:246
frost$core$Weak** $tmp1376 = &param0->compiler;
frost$core$Weak* $tmp1377 = *$tmp1376;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1378 = &$tmp1377->_valid;
frost$core$Bit $tmp1379 = *$tmp1378;
bool $tmp1380 = $tmp1379.value;
if ($tmp1380) goto block134; else goto block135;
block135:;
frost$core$Int $tmp1381 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1382, $tmp1381);
abort(); // unreachable
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1383 = &$tmp1377->value;
frost$core$Object* $tmp1384 = *$tmp1383;
frost$core$Frost$ref$frost$core$Object$Q($tmp1384);
frost$core$Weak** $tmp1385 = &param0->compiler;
frost$core$Weak* $tmp1386 = *$tmp1385;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1387 = &$tmp1386->_valid;
frost$core$Bit $tmp1388 = *$tmp1387;
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block138; else goto block139;
block139:;
frost$core$Int $tmp1390 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1391, $tmp1390);
abort(); // unreachable
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1392 = &$tmp1386->value;
frost$core$Object* $tmp1393 = *$tmp1392;
frost$core$Frost$ref$frost$core$Object$Q($tmp1393);
org$frostlang$frostc$Type** $tmp1394 = &((org$frostlang$frostc$Compiler*) $tmp1393)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp1395 = *$tmp1394;
org$frostlang$frostc$ClassDecl* $tmp1396 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1384), $tmp1395);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
org$frostlang$frostc$ClassDecl* $tmp1397 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local9) = $tmp1396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$Frost$unref$frost$core$Object$Q($tmp1393);
frost$core$Frost$unref$frost$core$Object$Q($tmp1384);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:247
frost$core$Weak** $tmp1398 = &param0->compiler;
frost$core$Weak* $tmp1399 = *$tmp1398;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:247:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1400 = &$tmp1399->_valid;
frost$core$Bit $tmp1401 = *$tmp1400;
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block142; else goto block143;
block143:;
frost$core$Int $tmp1403 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1404, $tmp1403);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1405 = &$tmp1399->value;
frost$core$Object* $tmp1406 = *$tmp1405;
frost$core$Frost$ref$frost$core$Object$Q($tmp1406);
org$frostlang$frostc$ClassDecl* $tmp1407 = *(&local9);
frost$collections$ListView* $tmp1408 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1406), $tmp1407);
*(&local10) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$collections$ListView* $tmp1409 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local10) = $tmp1408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q($tmp1406);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:248
frost$io$IndentedOutputStream** $tmp1410 = &param0->types;
frost$io$IndentedOutputStream* $tmp1411 = *$tmp1410;
frost$collections$ListView* $tmp1412 = *(&local10);
ITable* $tmp1413 = ((frost$collections$CollectionView*) $tmp1412)->$class->itable;
while ($tmp1413->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1413 = $tmp1413->next;
}
$fn1415 $tmp1414 = $tmp1413->methods[0];
frost$core$Int $tmp1416 = $tmp1414(((frost$collections$CollectionView*) $tmp1412));
frost$core$Int$wrapper* $tmp1417;
$tmp1417 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1417->value = $tmp1416;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:250:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1419 $tmp1418 = ($fn1419) ((frost$core$Object*) $tmp1417)->$class->vtable[0];
frost$core$String* $tmp1420 = $tmp1418(((frost$core$Object*) $tmp1417));
frost$core$String* $tmp1421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1422, $tmp1420);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$core$String* $tmp1423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1421, &$s1424);
frost$core$String* $tmp1425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1426, $tmp1423);
frost$core$String** $tmp1427 = &param1->name;
frost$core$String* $tmp1428 = *$tmp1427;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1429 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1430 = *$tmp1429;
frost$core$String* $tmp1431 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1430, $tmp1428);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$String* $tmp1432 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1431, &$s1433);
frost$core$String* $tmp1434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1425, $tmp1432);
$fn1436 $tmp1435 = ($fn1436) ((frost$io$OutputStream*) $tmp1411)->$class->vtable[19];
frost$core$Error* $tmp1437 = $tmp1435(((frost$io$OutputStream*) $tmp1411), $tmp1434);
if ($tmp1437 == NULL) goto block147; else goto block148;
block148:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local0) = $tmp1437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
frost$collections$ListView* $tmp1438 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1439 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1440 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1441 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1442 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1443 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block147:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:252
frost$io$IndentedOutputStream** $tmp1444 = &param0->types;
frost$io$IndentedOutputStream* $tmp1445 = *$tmp1444;
frost$core$String** $tmp1446 = &param1->name;
frost$core$String* $tmp1447 = *$tmp1446;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:252:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1448 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1449 = *$tmp1448;
frost$core$String* $tmp1450 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1449, $tmp1447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$String* $tmp1451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1452, $tmp1450);
frost$core$String* $tmp1453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1451, &$s1454);
frost$core$String** $tmp1455 = &param1->name;
frost$core$String* $tmp1456 = *$tmp1455;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1457 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1458 = *$tmp1457;
frost$core$String* $tmp1459 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1458, $tmp1456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$String* $tmp1460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1459, &$s1461);
frost$core$String* $tmp1462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1453, $tmp1460);
$fn1464 $tmp1463 = ($fn1464) ((frost$io$OutputStream*) $tmp1445)->$class->vtable[19];
frost$core$Error* $tmp1465 = $tmp1463(((frost$io$OutputStream*) $tmp1445), $tmp1462);
if ($tmp1465 == NULL) goto block152; else goto block153;
block153:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local0) = $tmp1465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$collections$ListView* $tmp1466 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1467 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1468 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1469 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1470 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1471 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block152:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$collections$ListView* $tmp1472 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1473 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block100;
block100:;
frost$core$String* $tmp1474 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1475 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1476 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1477 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:257
frost$core$Weak** $tmp1478 = &param0->compiler;
frost$core$Weak* $tmp1479 = *$tmp1478;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:257:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1480 = &$tmp1479->_valid;
frost$core$Bit $tmp1481 = *$tmp1480;
bool $tmp1482 = $tmp1481.value;
if ($tmp1482) goto block156; else goto block157;
block157:;
frost$core$Int $tmp1483 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1484, $tmp1483);
abort(); // unreachable
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1485 = &$tmp1479->value;
frost$core$Object* $tmp1486 = *$tmp1485;
frost$core$Frost$ref$frost$core$Object$Q($tmp1486);
org$frostlang$frostc$Position* $tmp1487 = &param1->position;
org$frostlang$frostc$Position $tmp1488 = *$tmp1487;
frost$core$Error* $tmp1489 = *(&local0);
frost$core$String** $tmp1490 = &$tmp1489->message;
frost$core$String* $tmp1491 = *$tmp1490;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1486), $tmp1488, $tmp1491);
frost$core$Frost$unref$frost$core$Object$Q($tmp1486);
goto block2;
block2:;
frost$core$Error* $tmp1492 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:262
frost$core$Weak** $tmp1493 = &param1->owner;
frost$core$Weak* $tmp1494 = *$tmp1493;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:262:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1495 = &$tmp1494->_valid;
frost$core$Bit $tmp1496 = *$tmp1495;
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block3; else goto block4;
block4:;
frost$core$Int $tmp1498 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1499, $tmp1498);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1500 = &$tmp1494->value;
frost$core$Object* $tmp1501 = *$tmp1500;
frost$core$Frost$ref$frost$core$Object$Q($tmp1501);
org$frostlang$frostc$Type** $tmp1502 = &((org$frostlang$frostc$ClassDecl*) $tmp1501)->type;
org$frostlang$frostc$Type* $tmp1503 = *$tmp1502;
frost$core$String* $tmp1504 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1503);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
frost$core$String* $tmp1505 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
*(&local0) = $tmp1504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
frost$core$Frost$unref$frost$core$Object$Q($tmp1501);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:263
org$frostlang$frostc$MethodDecl$Kind* $tmp1506 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1507 = *$tmp1506;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1508;
$tmp1508 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1508->value = $tmp1507;
frost$core$Int $tmp1509 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from HCodeGenerator.frost:263:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1510 = &(&local2)->$rawValue;
*$tmp1510 = $tmp1509;
org$frostlang$frostc$MethodDecl$Kind $tmp1511 = *(&local2);
*(&local1) = $tmp1511;
org$frostlang$frostc$MethodDecl$Kind $tmp1512 = *(&local1);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1513;
$tmp1513 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1513->value = $tmp1512;
ITable* $tmp1514 = ((frost$core$Equatable*) $tmp1508)->$class->itable;
while ($tmp1514->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1514 = $tmp1514->next;
}
$fn1516 $tmp1515 = $tmp1514->methods[0];
frost$core$Bit $tmp1517 = $tmp1515(((frost$core$Equatable*) $tmp1508), ((frost$core$Equatable*) $tmp1513));
bool $tmp1518 = $tmp1517.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1513)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1508)));
if ($tmp1518) goto block7; else goto block6;
block7:;
frost$core$String* $tmp1519 = *(&local0);
frost$core$Bit $tmp1520 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1519, &$s1521);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:263:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1522 = $tmp1520.value;
bool $tmp1523 = !$tmp1522;
frost$core$Bit $tmp1524 = (frost$core$Bit) {$tmp1523};
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:264
frost$core$String* $tmp1526 = *(&local0);
frost$core$String* $tmp1527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1526, &$s1528);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
frost$core$String* $tmp1529 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1527;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:266
frost$core$String* $tmp1530 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
frost$core$String* $tmp1531 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1530;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:286
org$frostlang$frostc$Type** $tmp1532 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1533 = *$tmp1532;
frost$core$Bit $tmp1534 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1533);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:286:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1535 = $tmp1534.value;
bool $tmp1536 = !$tmp1535;
frost$core$Bit $tmp1537 = (frost$core$Bit) {$tmp1536};
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:287
frost$core$Bit $tmp1539 = (frost$core$Bit) {false};
return $tmp1539;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:289
org$frostlang$frostc$Annotations** $tmp1540 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1541 = *$tmp1540;
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from HCodeGenerator.frost:289:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
frost$core$Int* $tmp1542 = &$tmp1541->flags;
frost$core$Int $tmp1543 = *$tmp1542;
frost$core$Int $tmp1544 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1545 = $tmp1543.value;
int64_t $tmp1546 = $tmp1544.value;
int64_t $tmp1547 = $tmp1545 & $tmp1546;
frost$core$Int $tmp1548 = (frost$core$Int) {$tmp1547};
frost$core$Int $tmp1549 = (frost$core$Int) {0u};
int64_t $tmp1550 = $tmp1548.value;
int64_t $tmp1551 = $tmp1549.value;
bool $tmp1552 = $tmp1550 != $tmp1551;
frost$core$Bit $tmp1553 = (frost$core$Bit) {$tmp1552};
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1555 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1556 = *$tmp1555;
frost$core$Bit $tmp1557 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1556);
*(&local1) = $tmp1557;
goto block8;
block7:;
*(&local1) = $tmp1553;
goto block8;
block8:;
frost$core$Bit $tmp1558 = *(&local1);
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block9; else goto block10;
block9:;
frost$core$Weak** $tmp1560 = &param0->compiler;
frost$core$Weak* $tmp1561 = *$tmp1560;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1562 = &$tmp1561->_valid;
frost$core$Bit $tmp1563 = *$tmp1562;
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1565 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1566, $tmp1565);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1567 = &$tmp1561->value;
frost$core$Object* $tmp1568 = *$tmp1567;
frost$core$Frost$ref$frost$core$Object$Q($tmp1568);
frost$core$Weak** $tmp1569 = &param0->compiler;
frost$core$Weak* $tmp1570 = *$tmp1569;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1571 = &$tmp1570->_valid;
frost$core$Bit $tmp1572 = *$tmp1571;
bool $tmp1573 = $tmp1572.value;
if ($tmp1573) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1574 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1575, $tmp1574);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1576 = &$tmp1570->value;
frost$core$Object* $tmp1577 = *$tmp1576;
frost$core$Frost$ref$frost$core$Object$Q($tmp1577);
org$frostlang$frostc$Type** $tmp1578 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1579 = *$tmp1578;
org$frostlang$frostc$ClassDecl* $tmp1580 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1577), $tmp1579);
frost$core$Bit $tmp1581 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1568), $tmp1580);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q($tmp1577);
frost$core$Frost$unref$frost$core$Object$Q($tmp1568);
*(&local0) = $tmp1581;
goto block11;
block10:;
*(&local0) = $tmp1558;
goto block11;
block11:;
frost$core$Bit $tmp1582 = *(&local0);
*(&local2) = $tmp1582;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:295
frost$core$Bit $tmp1583 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1584 = $tmp1583.value;
bool $tmp1585 = !$tmp1584;
frost$core$Bit $tmp1586 = (frost$core$Bit) {$tmp1585};
bool $tmp1587 = $tmp1586.value;
if ($tmp1587) goto block21; else goto block22;
block21:;
*(&local3) = $tmp1586;
goto block23;
block22:;
org$frostlang$frostc$Annotations** $tmp1588 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1589 = *$tmp1588;
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from HCodeGenerator.frost:295:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
frost$core$Int* $tmp1590 = &$tmp1589->flags;
frost$core$Int $tmp1591 = *$tmp1590;
frost$core$Int $tmp1592 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1593 = $tmp1591.value;
int64_t $tmp1594 = $tmp1592.value;
int64_t $tmp1595 = $tmp1593 & $tmp1594;
frost$core$Int $tmp1596 = (frost$core$Int) {$tmp1595};
frost$core$Int $tmp1597 = (frost$core$Int) {0u};
int64_t $tmp1598 = $tmp1596.value;
int64_t $tmp1599 = $tmp1597.value;
bool $tmp1600 = $tmp1598 != $tmp1599;
frost$core$Bit $tmp1601 = (frost$core$Bit) {$tmp1600};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1602 = $tmp1601.value;
bool $tmp1603 = !$tmp1602;
frost$core$Bit $tmp1604 = (frost$core$Bit) {$tmp1603};
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Annotations** $tmp1606 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1607 = *$tmp1606;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from HCodeGenerator.frost:295:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp1608 = &$tmp1607->flags;
frost$core$Int $tmp1609 = *$tmp1608;
frost$core$Int $tmp1610 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1611 = $tmp1609.value;
int64_t $tmp1612 = $tmp1610.value;
int64_t $tmp1613 = $tmp1611 & $tmp1612;
frost$core$Int $tmp1614 = (frost$core$Int) {$tmp1613};
frost$core$Int $tmp1615 = (frost$core$Int) {0u};
int64_t $tmp1616 = $tmp1614.value;
int64_t $tmp1617 = $tmp1615.value;
bool $tmp1618 = $tmp1616 != $tmp1617;
frost$core$Bit $tmp1619 = (frost$core$Bit) {$tmp1618};
bool $tmp1620 = $tmp1619.value;
if ($tmp1620) goto block32; else goto block33;
block32:;
*(&local5) = $tmp1619;
goto block34;
block33:;
org$frostlang$frostc$Annotations** $tmp1621 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1622 = *$tmp1621;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:296:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp1623 = &$tmp1622->flags;
frost$core$Int $tmp1624 = *$tmp1623;
frost$core$Int $tmp1625 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1626 = $tmp1624.value;
int64_t $tmp1627 = $tmp1625.value;
int64_t $tmp1628 = $tmp1626 & $tmp1627;
frost$core$Int $tmp1629 = (frost$core$Int) {$tmp1628};
frost$core$Int $tmp1630 = (frost$core$Int) {0u};
int64_t $tmp1631 = $tmp1629.value;
int64_t $tmp1632 = $tmp1630.value;
bool $tmp1633 = $tmp1631 != $tmp1632;
frost$core$Bit $tmp1634 = (frost$core$Bit) {$tmp1633};
*(&local5) = $tmp1634;
goto block34;
block34:;
frost$core$Bit $tmp1635 = *(&local5);
*(&local4) = $tmp1635;
goto block29;
block28:;
*(&local4) = $tmp1604;
goto block29;
block29:;
frost$core$Bit $tmp1636 = *(&local4);
*(&local3) = $tmp1636;
goto block23;
block23:;
frost$core$Bit $tmp1637 = *(&local3);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1639 = (frost$core$Int) {295u};
frost$core$String* $tmp1640 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1641 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1642, $tmp1640);
frost$core$String* $tmp1643 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1641, &$s1644);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1645, $tmp1639, $tmp1643);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:297
frost$core$Bit $tmp1646 = *(&local2);
return $tmp1646;

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
frost$io$MemoryOutputStream** $tmp1647 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1648 = *$tmp1647;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
frost$io$MemoryOutputStream** $tmp1649 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1650 = *$tmp1649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$io$MemoryOutputStream** $tmp1651 = &param0->importStream;
*$tmp1651 = $tmp1648;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:304
frost$collections$HashSet** $tmp1652 = &param0->bodyImports;
frost$collections$HashSet* $tmp1653 = *$tmp1652;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
frost$collections$HashSet** $tmp1654 = &param0->imports;
frost$collections$HashSet* $tmp1655 = *$tmp1654;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
frost$collections$HashSet** $tmp1656 = &param0->imports;
*$tmp1656 = $tmp1653;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:305
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1657));
frost$core$String* $tmp1658 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local1) = &$s1659;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:306
frost$core$Bit $tmp1660 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:307
frost$io$IndentedOutputStream** $tmp1662 = &param0->body;
frost$io$IndentedOutputStream* $tmp1663 = *$tmp1662;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:307:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1664 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1665 = *$tmp1664;
frost$core$String* $tmp1666 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1665, param1);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
frost$core$String* $tmp1667 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local2) = $tmp1666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1668 = *(&local2);
frost$core$Bit $tmp1669 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1668, &$s1670);
bool $tmp1671 = $tmp1669.value;
if ($tmp1671) goto block7; else goto block8;
block8:;
frost$core$Int $tmp1672 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1673, $tmp1672);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1674 = *(&local2);
frost$core$Int $tmp1675 = (frost$core$Int) {1u};
frost$core$Bit $tmp1676 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1677 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1675, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1676);
frost$core$String* $tmp1678 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp1674, $tmp1677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
frost$core$String* $tmp1679 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp1680 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1681, $tmp1678);
frost$core$String* $tmp1682 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1680, &$s1683);
org$frostlang$frostc$Type** $tmp1684 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1685 = *$tmp1684;
frost$core$String* $tmp1686 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1685);
frost$core$String* $tmp1687 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1682, $tmp1686);
frost$core$String* $tmp1688 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1687, &$s1689);
$fn1691 $tmp1690 = ($fn1691) ((frost$io$OutputStream*) $tmp1663)->$class->vtable[17];
frost$core$Error* $tmp1692 = $tmp1690(((frost$io$OutputStream*) $tmp1663), $tmp1688);
if ($tmp1692 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local0) = $tmp1692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
frost$core$String* $tmp1693 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1694));
frost$core$String* $tmp1695 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
*(&local1) = &$s1696;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:311
frost$io$IndentedOutputStream** $tmp1697 = &param0->body;
frost$io$IndentedOutputStream* $tmp1698 = *$tmp1697;
org$frostlang$frostc$Type** $tmp1699 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1700 = *$tmp1699;
frost$core$String* $tmp1701 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1700);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$String* $tmp1702 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1701, &$s1703);
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:311:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1704 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1705 = *$tmp1704;
frost$core$String* $tmp1706 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1705, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
frost$core$String* $tmp1707 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local3) = $tmp1706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1708 = *(&local3);
frost$core$Bit $tmp1709 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1708, &$s1710);
bool $tmp1711 = $tmp1709.value;
if ($tmp1711) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1712 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1713, $tmp1712);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1714 = *(&local3);
frost$core$Int $tmp1715 = (frost$core$Int) {1u};
frost$core$Bit $tmp1716 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1717 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1715, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1716);
frost$core$String* $tmp1718 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp1714, $tmp1717);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
frost$core$String* $tmp1719 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp1720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1702, $tmp1718);
frost$core$String* $tmp1721 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1720, &$s1722);
$fn1724 $tmp1723 = ($fn1724) ((frost$io$OutputStream*) $tmp1698)->$class->vtable[17];
frost$core$Error* $tmp1725 = $tmp1723(((frost$io$OutputStream*) $tmp1698), $tmp1721);
if ($tmp1725 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local0) = $tmp1725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$String* $tmp1726 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:313
org$frostlang$frostc$Annotations** $tmp1727 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1728 = *$tmp1727;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:313:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp1729 = &$tmp1728->flags;
frost$core$Int $tmp1730 = *$tmp1729;
frost$core$Int $tmp1731 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1732 = $tmp1730.value;
int64_t $tmp1733 = $tmp1731.value;
int64_t $tmp1734 = $tmp1732 & $tmp1733;
frost$core$Int $tmp1735 = (frost$core$Int) {$tmp1734};
frost$core$Int $tmp1736 = (frost$core$Int) {0u};
int64_t $tmp1737 = $tmp1735.value;
int64_t $tmp1738 = $tmp1736.value;
bool $tmp1739 = $tmp1737 != $tmp1738;
frost$core$Bit $tmp1740 = (frost$core$Bit) {$tmp1739};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1741 = $tmp1740.value;
bool $tmp1742 = !$tmp1741;
frost$core$Bit $tmp1743 = (frost$core$Bit) {$tmp1742};
bool $tmp1744 = $tmp1743.value;
if ($tmp1744) goto block19; else goto block18;
block19:;
frost$core$Weak** $tmp1745 = &param0->compiler;
frost$core$Weak* $tmp1746 = *$tmp1745;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:313:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1747 = &$tmp1746->_valid;
frost$core$Bit $tmp1748 = *$tmp1747;
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block25; else goto block26;
block26:;
frost$core$Int $tmp1750 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1751, $tmp1750);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1752 = &$tmp1746->value;
frost$core$Object* $tmp1753 = *$tmp1752;
frost$core$Frost$ref$frost$core$Object$Q($tmp1753);
// begin inline call to method org.frostlang.frostc.Compiler.isValueInit(m:org.frostlang.frostc.MethodDecl):frost.core.Bit from HCodeGenerator.frost:313:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3942
org$frostlang$frostc$MethodDecl$Kind* $tmp1754 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1755 = *$tmp1754;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1756;
$tmp1756 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1756->value = $tmp1755;
frost$core$Int $tmp1757 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Compiler.frost:3942:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1758 = &(&local6)->$rawValue;
*$tmp1758 = $tmp1757;
org$frostlang$frostc$MethodDecl$Kind $tmp1759 = *(&local6);
*(&local5) = $tmp1759;
org$frostlang$frostc$MethodDecl$Kind $tmp1760 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1761;
$tmp1761 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1761->value = $tmp1760;
ITable* $tmp1762 = ((frost$core$Equatable*) $tmp1756)->$class->itable;
while ($tmp1762->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1762 = $tmp1762->next;
}
$fn1764 $tmp1763 = $tmp1762->methods[0];
frost$core$Bit $tmp1765 = $tmp1763(((frost$core$Equatable*) $tmp1756), ((frost$core$Equatable*) $tmp1761));
bool $tmp1766 = $tmp1765.value;
if ($tmp1766) goto block29; else goto block30;
block29:;
frost$core$Weak** $tmp1767 = &param1->owner;
frost$core$Weak* $tmp1768 = *$tmp1767;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Compiler.frost:3942:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp1769 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp1768);
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block33; else goto block34;
block34:;
frost$core$Int $tmp1771 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1772, $tmp1771);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1773 = &$tmp1768->value;
frost$core$Object* $tmp1774 = *$tmp1773;
frost$core$Frost$ref$frost$core$Object$Q($tmp1774);
frost$core$Bit $tmp1775 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1753), ((org$frostlang$frostc$ClassDecl*) $tmp1774));
frost$core$Frost$unref$frost$core$Object$Q($tmp1774);
*(&local4) = $tmp1775;
goto block31;
block30:;
*(&local4) = $tmp1765;
goto block31;
block31:;
frost$core$Bit $tmp1776 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1761)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1756)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1777 = $tmp1776.value;
bool $tmp1778 = !$tmp1777;
frost$core$Bit $tmp1779 = (frost$core$Bit) {$tmp1778};
bool $tmp1780 = $tmp1779.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1753);
if ($tmp1780) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:314
frost$io$IndentedOutputStream** $tmp1781 = &param0->body;
frost$io$IndentedOutputStream* $tmp1782 = *$tmp1781;
frost$core$String* $tmp1783 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:314:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$core$String* $tmp1784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1783, &$s1785);
frost$core$String* $tmp1786 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1787 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1784, $tmp1786);
frost$core$String* $tmp1788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1787, &$s1789);
$fn1791 $tmp1790 = ($fn1791) ((frost$io$OutputStream*) $tmp1782)->$class->vtable[17];
frost$core$Error* $tmp1792 = $tmp1790(((frost$io$OutputStream*) $tmp1782), $tmp1788);
if ($tmp1792 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
*(&local0) = $tmp1792;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$core$String* $tmp1793 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:315
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1794));
frost$core$String* $tmp1795 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
*(&local1) = &$s1796;
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:317
frost$collections$Array** $tmp1797 = &param1->parameters;
frost$collections$Array* $tmp1798 = *$tmp1797;
ITable* $tmp1799 = ((frost$collections$Iterable*) $tmp1798)->$class->itable;
while ($tmp1799->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1799 = $tmp1799->next;
}
$fn1801 $tmp1800 = $tmp1799->methods[0];
frost$collections$Iterator* $tmp1802 = $tmp1800(((frost$collections$Iterable*) $tmp1798));
goto block39;
block39:;
ITable* $tmp1803 = $tmp1802->$class->itable;
while ($tmp1803->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1803 = $tmp1803->next;
}
$fn1805 $tmp1804 = $tmp1803->methods[0];
frost$core$Bit $tmp1806 = $tmp1804($tmp1802);
bool $tmp1807 = $tmp1806.value;
if ($tmp1807) goto block41; else goto block40;
block40:;
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1808 = $tmp1802->$class->itable;
while ($tmp1808->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1808 = $tmp1808->next;
}
$fn1810 $tmp1809 = $tmp1808->methods[1];
frost$core$Object* $tmp1811 = $tmp1809($tmp1802);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1811)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1812 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1811);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:318
org$frostlang$frostc$MethodDecl$Parameter* $tmp1813 = *(&local7);
frost$core$String** $tmp1814 = &$tmp1813->name;
frost$core$String* $tmp1815 = *$tmp1814;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:318:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1816 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1817 = *$tmp1816;
frost$core$String* $tmp1818 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1817, $tmp1815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
frost$core$String* $tmp1819 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1820, $tmp1818);
frost$core$String* $tmp1821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1819, &$s1822);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
frost$core$String* $tmp1823 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local8) = $tmp1821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:319
frost$io$IndentedOutputStream** $tmp1824 = &param0->body;
frost$io$IndentedOutputStream* $tmp1825 = *$tmp1824;
frost$core$String* $tmp1826 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:319:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$String* $tmp1827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1826, &$s1828);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1829 = *(&local7);
org$frostlang$frostc$Type** $tmp1830 = &$tmp1829->type;
org$frostlang$frostc$Type* $tmp1831 = *$tmp1830;
frost$core$String* $tmp1832 = *(&local8);
// begin inline call to method org.frostlang.frostc.HCodeGenerator.declaration(t:org.frostlang.frostc.Type, name:frost.core.String):frost.core.String from HCodeGenerator.frost:319:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp1833 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1831);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$core$String* $tmp1834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1833, &$s1835);
frost$core$String* $tmp1836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1834, $tmp1832);
frost$core$String* $tmp1837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1836, &$s1838);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$core$String* $tmp1839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1827, $tmp1837);
frost$core$String* $tmp1840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1839, &$s1841);
$fn1843 $tmp1842 = ($fn1843) ((frost$io$OutputStream*) $tmp1825)->$class->vtable[17];
frost$core$Error* $tmp1844 = $tmp1842(((frost$io$OutputStream*) $tmp1825), $tmp1840);
if ($tmp1844 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
*(&local0) = $tmp1844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$String* $tmp1845 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1811);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1846 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$String* $tmp1847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1848));
frost$core$String* $tmp1849 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
*(&local1) = &$s1850;
frost$core$String* $tmp1851 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1811);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1852 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:322
frost$io$IndentedOutputStream** $tmp1853 = &param0->body;
frost$io$IndentedOutputStream* $tmp1854 = *$tmp1853;
$fn1856 $tmp1855 = ($fn1856) ((frost$io$OutputStream*) $tmp1854)->$class->vtable[19];
frost$core$Error* $tmp1857 = $tmp1855(((frost$io$OutputStream*) $tmp1854), &$s1858);
if ($tmp1857 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
*(&local0) = $tmp1857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$String* $tmp1859 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$String* $tmp1860 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp1861 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:325
frost$core$Int $tmp1862 = (frost$core$Int) {325u};
frost$core$Error* $tmp1863 = *(&local0);
$fn1865 $tmp1864 = ($fn1865) ((frost$core$Object*) $tmp1863)->$class->vtable[0];
frost$core$String* $tmp1866 = $tmp1864(((frost$core$Object*) $tmp1863));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1867, $tmp1862, $tmp1866);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
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
frost$io$IndentedOutputStream** $tmp1868 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1869 = *$tmp1868;
frost$io$MemoryOutputStream** $tmp1870 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1871 = *$tmp1870;
$fn1873 $tmp1872 = ($fn1873) ((frost$io$OutputStream*) $tmp1869)->$class->vtable[20];
frost$core$Error* $tmp1874 = $tmp1872(((frost$io$OutputStream*) $tmp1869), ((frost$core$Object*) $tmp1871));
if ($tmp1874 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
*(&local0) = $tmp1874;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:338
frost$io$IndentedOutputStream** $tmp1875 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1876 = *$tmp1875;
frost$io$MemoryOutputStream** $tmp1877 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1878 = *$tmp1877;
$fn1880 $tmp1879 = ($fn1880) ((frost$io$OutputStream*) $tmp1876)->$class->vtable[20];
frost$core$Error* $tmp1881 = $tmp1879(((frost$io$OutputStream*) $tmp1876), ((frost$core$Object*) $tmp1878));
if ($tmp1881 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
*(&local0) = $tmp1881;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:339
frost$io$IndentedOutputStream** $tmp1882 = &param0->out;
frost$io$IndentedOutputStream* $tmp1883 = *$tmp1882;
frost$io$MemoryOutputStream** $tmp1884 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1885 = *$tmp1884;
$fn1887 $tmp1886 = ($fn1887) ((frost$io$OutputStream*) $tmp1883)->$class->vtable[20];
frost$core$Error* $tmp1888 = $tmp1886(((frost$io$OutputStream*) $tmp1883), ((frost$core$Object*) $tmp1885));
if ($tmp1888 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
*(&local0) = $tmp1888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:340
frost$io$IndentedOutputStream** $tmp1889 = &param0->out;
frost$io$IndentedOutputStream* $tmp1890 = *$tmp1889;
frost$io$MemoryOutputStream** $tmp1891 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1892 = *$tmp1891;
$fn1894 $tmp1893 = ($fn1894) ((frost$io$OutputStream*) $tmp1890)->$class->vtable[20];
frost$core$Error* $tmp1895 = $tmp1893(((frost$io$OutputStream*) $tmp1890), ((frost$core$Object*) $tmp1892));
if ($tmp1895 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
*(&local0) = $tmp1895;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:343
frost$core$Error* $tmp1896 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HCodeGenerator.frost:343:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1898 $tmp1897 = ($fn1898) ((frost$core$Object*) $tmp1896)->$class->vtable[0];
frost$core$String* $tmp1899 = $tmp1897(((frost$core$Object*) $tmp1896));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1899);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:344
frost$core$Int $tmp1900 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1900);
goto block2;
block2:;
frost$core$Error* $tmp1901 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1902 = &param0->compiler;
frost$core$Weak* $tmp1903 = *$tmp1902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$io$MemoryOutputStream** $tmp1904 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1905 = *$tmp1904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$io$MemoryOutputStream** $tmp1906 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1907 = *$tmp1906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$io$IndentedOutputStream** $tmp1908 = &param0->types;
frost$io$IndentedOutputStream* $tmp1909 = *$tmp1908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
frost$io$MemoryOutputStream** $tmp1910 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1911 = *$tmp1910;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
frost$io$MemoryOutputStream** $tmp1912 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1913 = *$tmp1912;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
frost$io$IndentedOutputStream** $tmp1914 = &param0->body;
frost$io$IndentedOutputStream* $tmp1915 = *$tmp1914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
frost$collections$HashSet** $tmp1916 = &param0->typeImports;
frost$collections$HashSet* $tmp1917 = *$tmp1916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$collections$HashSet** $tmp1918 = &param0->bodyImports;
frost$collections$HashSet* $tmp1919 = *$tmp1918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$collections$HashSet** $tmp1920 = &param0->imports;
frost$collections$HashSet* $tmp1921 = *$tmp1920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
frost$io$MemoryOutputStream** $tmp1922 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1923 = *$tmp1922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
frost$io$File** $tmp1924 = &param0->outDir;
frost$io$File* $tmp1925 = *$tmp1924;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
frost$io$IndentedOutputStream** $tmp1926 = &param0->out;
frost$io$IndentedOutputStream* $tmp1927 = *$tmp1926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
frost$io$IndentedOutputStream** $tmp1928 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1929 = *$tmp1928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1930 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1931 = *$tmp1930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
frost$core$Weak** $tmp1932 = &param0->cCodeGen;
frost$core$Weak* $tmp1933 = *$tmp1932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
org$frostlang$frostc$CCodeGenerator** $tmp1934 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1935 = *$tmp1934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
return;

}

