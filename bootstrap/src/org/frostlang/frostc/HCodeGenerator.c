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

typedef frost$core$String* (*$fn152)(frost$core$Object*);
typedef frost$core$String* (*$fn175)(frost$core$Object*);
typedef frost$core$Error* (*$fn285)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn322)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn513)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn552)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn692)(frost$core$Object*);
typedef frost$core$Error* (*$fn812)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn821)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn855)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn864)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn874)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn903)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn931)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn935)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn940)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn982)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1000)(frost$core$Object*);
typedef frost$core$Error* (*$fn1006)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1028)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1044)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1054)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1083)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1092)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1144)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1148)(frost$core$Object*);
typedef frost$core$Error* (*$fn1164)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1190)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1219)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1238)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1248)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1258)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1273)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1301)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1319)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1345)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1354)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1383)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1428)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1432)(frost$core$Object*);
typedef frost$core$Error* (*$fn1449)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1477)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1529)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1704)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1737)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1777)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1804)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1814)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1818)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1823)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1856)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1869)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1878)(frost$core$Object*);
typedef frost$core$Error* (*$fn1886)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1893)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1900)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1907)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn1911)(frost$core$Object*);

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
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74", 3, 3143511548502526014, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 671970962477988494, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 4128981603702996129, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 671970962477988494, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, -3661474206510476099, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, -3661474206510476099, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, -6914605798766018203, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, -6914605798766018203, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, -6879236761899114840, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, -6879236761899114840, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, -2912907018242783318, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, 2096479397977239101, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 559938424166824396, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, -2448813731761471205, NULL };
static frost$core$String $s994 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s1004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 670056712733651593, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -4913817114742956656, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -5962813414700443260, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 2703935467625301937, NULL };
static frost$core$String $s1107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, -8740092864407068865, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20", 8, 1299553688233014337, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 71, 8885469816273793472, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -1023494951477965521, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -1023502648059362998, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, -8967472124348590150, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, -7438197491133939705, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, 1439842525427575854, NULL };
static frost$core$String $s1250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -2305927540240831023, NULL };
static frost$core$String $s1260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 14, 3730756510990532336, NULL };
static frost$core$String $s1271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1225697948708486459, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -5352411526554368641, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, 4622182911039583012, NULL };
static frost$core$String $s1379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3803391662366219107, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20", 122, 5922034436274910413, NULL };
static frost$core$String $s1446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, 5593648587920272924, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, 5593643090362131869, NULL };
static frost$core$String $s1474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -2374506366252631061, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 7893996714969165842, NULL };
static frost$core$String $s1657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, -9034067459731225523, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, -5577034943728621570, NULL };
static frost$core$String $s1707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 1751680115892408369, NULL };
static frost$core$String $s1807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 636530404172864656, NULL };
static frost$core$String $s1835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 566764192353433709, NULL };
static frost$core$String $s1880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };

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
FROST_ASSERT(264 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp58 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
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
frost$core$Int64 $tmp92 = (frost$core$Int64) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s93, $tmp92);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
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

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp100 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp101 = *$tmp100;
frost$core$Int64 $tmp102 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp101, param1);
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
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:74
org$frostlang$frostc$Type$Kind* $tmp124 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = $tmp125.$rawValue;
frost$core$Int64 $tmp127 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:75:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 == $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:76
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s133));
frost$core$Error* $tmp134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local0) = ((frost$core$Error*) NULL);
return &$s135;
block5:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:78:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp137 = $tmp126.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 == $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:79
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:79:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp142 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp143, param1);
frost$core$Int64 $tmp145 = (frost$core$Int64) {8u};
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146 * $tmp147;
frost$core$Int64 $tmp149 = (frost$core$Int64) {$tmp148};
frost$core$Int64$wrapper* $tmp150;
$tmp150 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp150->value = $tmp149;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:79:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn152 $tmp151 = ($fn152) ((frost$core$Object*) $tmp150)->$class->vtable[0];
frost$core$String* $tmp153 = $tmp151(((frost$core$Object*) $tmp150));
frost$core$String* $tmp154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s155, $tmp153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$String* $tmp156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp154, &$s157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Error* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp156;
block8:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:81:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp160 = $tmp126.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 == $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:82
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:82:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp165 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp166 = *$tmp165;
frost$core$Int64 $tmp167 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp166, param1);
frost$core$Int64 $tmp168 = (frost$core$Int64) {8u};
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 * $tmp170;
frost$core$Int64 $tmp172 = (frost$core$Int64) {$tmp171};
frost$core$Int64$wrapper* $tmp173;
$tmp173 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp173->value = $tmp172;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:82:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn175 $tmp174 = ($fn175) ((frost$core$Object*) $tmp173)->$class->vtable[0];
frost$core$String* $tmp176 = $tmp174(((frost$core$Object*) $tmp173));
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s178, $tmp176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp177, &$s180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Error* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp179;
block13:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:84:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp183 = $tmp126.value;
int64_t $tmp184 = $tmp182.value;
bool $tmp185 = $tmp183 == $tmp184;
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s188));
frost$core$Error* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((frost$core$Error*) NULL);
return &$s190;
block18:;
frost$core$Int64 $tmp191 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:87:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp192 = $tmp126.value;
int64_t $tmp193 = $tmp191.value;
bool $tmp194 = $tmp192 == $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:88
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:88:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp197 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp198 = *$tmp197;
frost$core$Int64 $tmp199 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp198, param1);
frost$core$Int64 $tmp200 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:89:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200.value;
bool $tmp203 = $tmp201 == $tmp202;
frost$core$Bit $tmp204 = (frost$core$Bit) {$tmp203};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s206));
frost$core$Error* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local0) = ((frost$core$Error*) NULL);
return &$s208;
block26:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:90:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp210 = $tmp199.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 == $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s215));
frost$core$Error* $tmp216 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local0) = ((frost$core$Error*) NULL);
return &$s217;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:91
frost$core$Int64 $tmp218 = (frost$core$Int64) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s219, $tmp218);
abort(); // unreachable
block21:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:94:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp221 = $tmp126.value;
int64_t $tmp222 = $tmp220.value;
bool $tmp223 = $tmp221 == $tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:95
frost$core$String** $tmp226 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp227 = *$tmp226;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:95:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp228 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp229 = *$tmp228;
frost$core$String* $tmp230 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp229, $tmp227);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$String* $tmp231 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local1) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:96
frost$core$Weak** $tmp232 = &param0->compiler;
frost$core$Weak* $tmp233 = *$tmp232;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:96:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp234 = &$tmp233->_valid;
frost$core$Bit $tmp235 = *$tmp234;
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp237 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s238, $tmp237);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp239 = &$tmp233->value;
frost$core$Object* $tmp240 = *$tmp239;
frost$core$Frost$ref$frost$core$Object$Q($tmp240);
org$frostlang$frostc$ClassDecl* $tmp241 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp240), param1);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
org$frostlang$frostc$ClassDecl* $tmp242 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local2) = $tmp241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q($tmp240);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:97
org$frostlang$frostc$ClassDecl* $tmp243 = *(&local2);
frost$core$Bit $tmp244 = (frost$core$Bit) {$tmp243 != NULL};
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp246 = (frost$core$Int64) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s247, $tmp246);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:98
frost$core$Weak** $tmp248 = &param0->compiler;
frost$core$Weak* $tmp249 = *$tmp248;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:98:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp250 = &$tmp249->_valid;
frost$core$Bit $tmp251 = *$tmp250;
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s254, $tmp253);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp255 = &$tmp249->value;
frost$core$Object* $tmp256 = *$tmp255;
frost$core$Frost$ref$frost$core$Object$Q($tmp256);
org$frostlang$frostc$ClassDecl* $tmp257 = *(&local2);
frost$core$Bit $tmp258 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp256), $tmp257);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:98:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp259 = $tmp258.value;
bool $tmp260 = !$tmp259;
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260};
bool $tmp262 = $tmp261.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
if ($tmp262) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:99
frost$collections$HashSet** $tmp263 = &param0->imports;
frost$collections$HashSet* $tmp264 = *$tmp263;
frost$core$String* $tmp265 = *(&local1);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:99:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:35
frost$collections$HashMap** $tmp266 = &$tmp264->contents;
frost$collections$HashMap* $tmp267 = *$tmp266;
frost$core$Bit $tmp268 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp267, ((frost$collections$Key*) $tmp265));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:99:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp269 = $tmp268.value;
bool $tmp270 = !$tmp269;
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:100
frost$io$MemoryOutputStream** $tmp273 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp274 = *$tmp273;
frost$core$String* $tmp275 = *(&local1);
frost$core$String* $tmp276 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s277, $tmp275);
frost$core$String* $tmp278 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp276, &$s279);
frost$core$String* $tmp280 = *(&local1);
frost$core$String* $tmp281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp278, $tmp280);
frost$core$String* $tmp282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp281, &$s283);
$fn285 $tmp284 = ($fn285) ((frost$io$OutputStream*) $tmp274)->$class->vtable[19];
frost$core$Error* $tmp286 = $tmp284(((frost$io$OutputStream*) $tmp274), $tmp282);
if ($tmp286 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local0) = $tmp286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
org$frostlang$frostc$ClassDecl* $tmp287 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp288 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:101
frost$collections$HashSet** $tmp289 = &param0->imports;
frost$collections$HashSet* $tmp290 = *$tmp289;
frost$core$String* $tmp291 = *(&local1);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:101:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp292 = &$tmp290->contents;
frost$collections$HashMap* $tmp293 = *$tmp292;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp293, ((frost$collections$Key*) $tmp291), ((frost$core$Object*) ((frost$collections$Key*) $tmp291)));
goto block49;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:103
frost$core$String* $tmp294 = *(&local1);
frost$core$String* $tmp295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp294, &$s296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
org$frostlang$frostc$ClassDecl* $tmp297 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp295;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:105
org$frostlang$frostc$ClassDecl* $tmp300 = *(&local2);
frost$core$String* $tmp301 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp300, &$s302);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$String* $tmp303 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local3) = $tmp301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:106
frost$collections$HashSet** $tmp304 = &param0->imports;
frost$collections$HashSet* $tmp305 = *$tmp304;
frost$core$String* $tmp306 = *(&local3);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:106:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:35
frost$collections$HashMap** $tmp307 = &$tmp305->contents;
frost$collections$HashMap* $tmp308 = *$tmp307;
frost$core$Bit $tmp309 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp308, ((frost$collections$Key*) $tmp306));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp310 = $tmp309.value;
bool $tmp311 = !$tmp310;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:107
frost$io$MemoryOutputStream** $tmp314 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp315 = *$tmp314;
frost$core$String* $tmp316 = *(&local3);
frost$core$String* $tmp317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s318, $tmp316);
frost$core$String* $tmp319 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp317, &$s320);
$fn322 $tmp321 = ($fn322) ((frost$io$OutputStream*) $tmp315)->$class->vtable[19];
frost$core$Error* $tmp323 = $tmp321(((frost$io$OutputStream*) $tmp315), $tmp319);
if ($tmp323 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = $tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$String* $tmp324 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp326 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:108
frost$collections$HashSet** $tmp327 = &param0->imports;
frost$collections$HashSet* $tmp328 = *$tmp327;
frost$core$String* $tmp329 = *(&local3);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:108:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp330 = &$tmp328->contents;
frost$collections$HashMap* $tmp331 = *$tmp330;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp331, ((frost$collections$Key*) $tmp329), ((frost$core$Object*) ((frost$collections$Key*) $tmp329)));
goto block56;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:110
frost$core$String* $tmp332 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$String* $tmp333 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp334 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp335 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp332;
block32:;
frost$core$Int64 $tmp337 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:112:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp338 = $tmp126.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 == $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:113
frost$core$Weak** $tmp343 = &param0->compiler;
frost$core$Weak* $tmp344 = *$tmp343;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:113:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp345 = &$tmp344->_valid;
frost$core$Bit $tmp346 = *$tmp345;
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s349, $tmp348);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp350 = &$tmp344->value;
frost$core$Object* $tmp351 = *$tmp350;
frost$core$Frost$ref$frost$core$Object$Q($tmp351);
org$frostlang$frostc$ClassDecl* $tmp352 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp351), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$ClassDecl* $tmp353 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local4) = $tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q($tmp351);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:114
org$frostlang$frostc$ClassDecl* $tmp354 = *(&local4);
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354 != NULL};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp357 = (frost$core$Int64) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s358, $tmp357);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:115
frost$core$Weak** $tmp359 = &param0->compiler;
frost$core$Weak* $tmp360 = *$tmp359;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:115:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp361 = &$tmp360->_valid;
frost$core$Bit $tmp362 = *$tmp361;
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp364 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s365, $tmp364);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp366 = &$tmp360->value;
frost$core$Object* $tmp367 = *$tmp366;
frost$core$Frost$ref$frost$core$Object$Q($tmp367);
org$frostlang$frostc$ClassDecl* $tmp368 = *(&local4);
frost$core$Bit $tmp369 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp367), $tmp368);
bool $tmp370 = $tmp369.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp367);
if ($tmp370) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:116
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:116:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp371 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp372 = *$tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372 != NULL};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block78; else goto block79;
block79:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s376, $tmp375);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp377 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp378 = *$tmp377;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Int64 $tmp379 = (frost$core$Int64) {0u};
frost$core$Object* $tmp380 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp378, $tmp379);
frost$core$String* $tmp381 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp380));
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp381, &$s383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q($tmp380);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
org$frostlang$frostc$ClassDecl* $tmp384 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp385 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp382;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:118
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:118:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp386 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp387 = *$tmp386;
frost$core$Bit $tmp388 = (frost$core$Bit) {$tmp387 != NULL};
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp390 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s391, $tmp390);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp392 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp393 = *$tmp392;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Int64 $tmp394 = (frost$core$Int64) {0u};
frost$core$Object* $tmp395 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp393, $tmp394);
frost$core$String* $tmp396 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp395));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q($tmp395);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
org$frostlang$frostc$ClassDecl* $tmp397 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp398 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp396;
block63:;
frost$core$Int64 $tmp399 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:120:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp400 = $tmp126.value;
int64_t $tmp401 = $tmp399.value;
bool $tmp402 = $tmp400 == $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:121
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:121:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp405 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp406 = *$tmp405;
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406 != NULL};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp409 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s410, $tmp409);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp411 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp412 = *$tmp411;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Int64 $tmp413 = (frost$core$Int64) {0u};
frost$core$Object* $tmp414 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp412, $tmp413);
frost$core$String** $tmp415 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp414))->name;
frost$core$String* $tmp416 = *$tmp415;
frost$core$Bit $tmp417 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp416, &$s418);
bool $tmp419 = $tmp417.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp414);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
if ($tmp419) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:122
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:122:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp420 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp421 = *$tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421 != NULL};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp424 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s425, $tmp424);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp426 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp427 = *$tmp426;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Int64 $tmp428 = (frost$core$Int64) {1u};
frost$core$Object* $tmp429 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp427, $tmp428);
frost$core$String* $tmp430 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp429));
frost$core$String* $tmp431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp430, &$s432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$unref$frost$core$Object$Q($tmp429);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Error* $tmp433 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp431;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:124
frost$core$Weak** $tmp434 = &param0->compiler;
frost$core$Weak* $tmp435 = *$tmp434;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:124:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp436 = &$tmp435->_valid;
frost$core$Bit $tmp437 = *$tmp436;
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp439 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s440, $tmp439);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp441 = &$tmp435->value;
frost$core$Object* $tmp442 = *$tmp441;
frost$core$Frost$ref$frost$core$Object$Q($tmp442);
org$frostlang$frostc$ClassDecl* $tmp443 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp442), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
org$frostlang$frostc$ClassDecl* $tmp444 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local5) = $tmp443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Frost$unref$frost$core$Object$Q($tmp442);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:125
org$frostlang$frostc$ClassDecl* $tmp445 = *(&local5);
// begin inline call to function org.frostlang.frostc.ClassDecl.isSpecialization():frost.core.Bit from HCodeGenerator.frost:125:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp446 = &$tmp445->name;
frost$core$String* $tmp447 = *$tmp446;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:219
frost$core$String$Index$nullable $tmp448 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q($tmp447, &$s449);
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp448.nonnull};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:126
frost$core$String** $tmp452 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp453 = *$tmp452;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:126:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp454 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp455 = *$tmp454;
frost$core$String* $tmp456 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp455, $tmp453);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:126:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$String* $tmp457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp456, &$s458);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$String* $tmp459 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local6) = $tmp457;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:127
frost$core$Weak** $tmp460 = &param0->compiler;
frost$core$Weak* $tmp461 = *$tmp460;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:127:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp462 = &$tmp461->_valid;
frost$core$Bit $tmp463 = *$tmp462;
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block106; else goto block107;
block107:;
frost$core$Int64 $tmp465 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s466, $tmp465);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp467 = &$tmp461->value;
frost$core$Object* $tmp468 = *$tmp467;
frost$core$Frost$ref$frost$core$Object$Q($tmp468);
org$frostlang$frostc$ClassDecl* $tmp469 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp468), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
org$frostlang$frostc$ClassDecl* $tmp470 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local7) = $tmp469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
frost$core$Frost$unref$frost$core$Object$Q($tmp468);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:128
org$frostlang$frostc$ClassDecl* $tmp471 = *(&local7);
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471 != NULL};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block108; else goto block109;
block109:;
frost$core$Int64 $tmp474 = (frost$core$Int64) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s475, $tmp474);
abort(); // unreachable
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:129
frost$core$Weak** $tmp476 = &param0->compiler;
frost$core$Weak* $tmp477 = *$tmp476;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:129:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp478 = &$tmp477->_valid;
frost$core$Bit $tmp479 = *$tmp478;
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp481 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s482, $tmp481);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp483 = &$tmp477->value;
frost$core$Object* $tmp484 = *$tmp483;
frost$core$Frost$ref$frost$core$Object$Q($tmp484);
org$frostlang$frostc$ClassDecl* $tmp485 = *(&local7);
frost$core$Bit $tmp486 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp484), $tmp485);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:129:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp487 = $tmp486.value;
bool $tmp488 = !$tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp484);
if ($tmp490) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:130
frost$collections$HashSet** $tmp491 = &param0->imports;
frost$collections$HashSet* $tmp492 = *$tmp491;
frost$core$String* $tmp493 = *(&local6);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:130:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:35
frost$collections$HashMap** $tmp494 = &$tmp492->contents;
frost$collections$HashMap* $tmp495 = *$tmp494;
frost$core$Bit $tmp496 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp495, ((frost$collections$Key*) $tmp493));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:130:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp497 = $tmp496.value;
bool $tmp498 = !$tmp497;
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:131
frost$io$MemoryOutputStream** $tmp501 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp502 = *$tmp501;
frost$core$String* $tmp503 = *(&local6);
frost$core$String* $tmp504 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s505, $tmp503);
frost$core$String* $tmp506 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp504, &$s507);
frost$core$String* $tmp508 = *(&local6);
frost$core$String* $tmp509 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp506, $tmp508);
frost$core$String* $tmp510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp509, &$s511);
$fn513 $tmp512 = ($fn513) ((frost$io$OutputStream*) $tmp502)->$class->vtable[19];
frost$core$Error* $tmp514 = $tmp512(((frost$io$OutputStream*) $tmp502), $tmp510);
if ($tmp514 == NULL) goto block121; else goto block122;
block122:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local0) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
org$frostlang$frostc$ClassDecl* $tmp515 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp516 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp517 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:132
frost$collections$HashSet** $tmp518 = &param0->imports;
frost$collections$HashSet* $tmp519 = *$tmp518;
frost$core$String* $tmp520 = *(&local6);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:132:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp521 = &$tmp519->contents;
frost$collections$HashMap* $tmp522 = *$tmp521;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp522, ((frost$collections$Key*) $tmp520), ((frost$core$Object*) ((frost$collections$Key*) $tmp520)));
goto block118;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:134
frost$core$String* $tmp523 = *(&local6);
frost$core$String* $tmp524 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp523, &$s525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
org$frostlang$frostc$ClassDecl* $tmp526 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp527 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp528 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp529 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp524;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:136
org$frostlang$frostc$ClassDecl* $tmp530 = *(&local7);
frost$core$String* $tmp531 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp530, &$s532);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$String* $tmp533 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local8) = $tmp531;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:137
frost$collections$HashSet** $tmp534 = &param0->imports;
frost$collections$HashSet* $tmp535 = *$tmp534;
frost$core$String* $tmp536 = *(&local8);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:137:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:35
frost$collections$HashMap** $tmp537 = &$tmp535->contents;
frost$collections$HashMap* $tmp538 = *$tmp537;
frost$core$Bit $tmp539 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp538, ((frost$collections$Key*) $tmp536));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:137:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp540 = $tmp539.value;
bool $tmp541 = !$tmp540;
frost$core$Bit $tmp542 = (frost$core$Bit) {$tmp541};
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:138
frost$io$MemoryOutputStream** $tmp544 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp545 = *$tmp544;
frost$core$String* $tmp546 = *(&local8);
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s548, $tmp546);
frost$core$String* $tmp549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp547, &$s550);
$fn552 $tmp551 = ($fn552) ((frost$io$OutputStream*) $tmp545)->$class->vtable[19];
frost$core$Error* $tmp553 = $tmp551(((frost$io$OutputStream*) $tmp545), $tmp549);
if ($tmp553 == NULL) goto block128; else goto block129;
block129:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local0) = $tmp553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$String* $tmp554 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp555 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp556 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp557 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block128:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:139
frost$collections$HashSet** $tmp558 = &param0->imports;
frost$collections$HashSet* $tmp559 = *$tmp558;
frost$core$String* $tmp560 = *(&local8);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:139:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp561 = &$tmp559->contents;
frost$collections$HashMap* $tmp562 = *$tmp561;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp562, ((frost$collections$Key*) $tmp560), ((frost$core$Object*) ((frost$collections$Key*) $tmp560)));
goto block125;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:141
frost$core$String* $tmp563 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$String* $tmp564 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp565 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp566 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp567 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp568 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp563;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:143
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:143:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp569 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp570 = *$tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570 != NULL};
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block132; else goto block133;
block133:;
frost$core$Int64 $tmp573 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s574, $tmp573);
abort(); // unreachable
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp575 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp576 = *$tmp575;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Int64 $tmp577 = (frost$core$Int64) {0u};
frost$core$Object* $tmp578 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp576, $tmp577);
frost$core$String* $tmp579 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp578));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
org$frostlang$frostc$ClassDecl* $tmp580 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp581 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp579;
block84:;
frost$core$Int64 $tmp582 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:145:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp583 = $tmp126.value;
int64_t $tmp584 = $tmp582.value;
bool $tmp585 = $tmp583 == $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:146
frost$core$Weak** $tmp588 = &param1->genericClassParameter;
frost$core$Weak* $tmp589 = *$tmp588;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:146:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp590 = &$tmp589->_valid;
frost$core$Bit $tmp591 = *$tmp590;
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block139; else goto block140;
block140:;
frost$core$Int64 $tmp593 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s594, $tmp593);
abort(); // unreachable
block139:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp595 = &$tmp589->value;
frost$core$Object* $tmp596 = *$tmp595;
frost$core$Frost$ref$frost$core$Object$Q($tmp596);
org$frostlang$frostc$Type** $tmp597 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp596)->bound;
org$frostlang$frostc$Type* $tmp598 = *$tmp597;
frost$core$String* $tmp599 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp598);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$unref$frost$core$Object$Q($tmp596);
frost$core$Error* $tmp600 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp599;
block135:;
frost$core$Int64 $tmp601 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:148:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp602 = $tmp126.value;
int64_t $tmp603 = $tmp601.value;
bool $tmp604 = $tmp602 == $tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block141; else goto block142;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:149
frost$core$Weak** $tmp607 = &param1->genericMethodParameter;
frost$core$Weak* $tmp608 = *$tmp607;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:149:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp609 = &$tmp608->_valid;
frost$core$Bit $tmp610 = *$tmp609;
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block146; else goto block147;
block147:;
frost$core$Int64 $tmp612 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s613, $tmp612);
abort(); // unreachable
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp614 = &$tmp608->value;
frost$core$Object* $tmp615 = *$tmp614;
frost$core$Frost$ref$frost$core$Object$Q($tmp615);
org$frostlang$frostc$Type** $tmp616 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp615)->bound;
org$frostlang$frostc$Type* $tmp617 = *$tmp616;
frost$core$String* $tmp618 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q($tmp615);
frost$core$Error* $tmp619 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp618;
block142:;
frost$core$Int64 $tmp620 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp621 = $tmp126.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block148; else goto block149;
block149:;
frost$core$Int64 $tmp626 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:151:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp627 = $tmp126.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 == $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block148; else goto block151;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:152
frost$core$Weak** $tmp632 = &param0->compiler;
frost$core$Weak* $tmp633 = *$tmp632;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:152:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp634 = &$tmp633->_valid;
frost$core$Bit $tmp635 = *$tmp634;
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block155; else goto block156;
block156:;
frost$core$Int64 $tmp637 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s638, $tmp637);
abort(); // unreachable
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp639 = &$tmp633->value;
frost$core$Object* $tmp640 = *$tmp639;
frost$core$Frost$ref$frost$core$Object$Q($tmp640);
org$frostlang$frostc$Type** $tmp641 = &((org$frostlang$frostc$Compiler*) $tmp640)->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp642 = *$tmp641;
frost$core$String* $tmp643 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$core$Frost$unref$frost$core$Object$Q($tmp640);
frost$core$Error* $tmp644 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp643;
block151:;
frost$core$Int64 $tmp645 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp646 = $tmp126.value;
int64_t $tmp647 = $tmp645.value;
bool $tmp648 = $tmp646 == $tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block157; else goto block158;
block158:;
frost$core$Int64 $tmp651 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:154:61
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp652 = $tmp126.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 == $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block157; else goto block160;
block157:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:155
frost$core$Weak** $tmp657 = &param0->compiler;
frost$core$Weak* $tmp658 = *$tmp657;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:155:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp659 = &$tmp658->_valid;
frost$core$Bit $tmp660 = *$tmp659;
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block164; else goto block165;
block165:;
frost$core$Int64 $tmp662 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s663, $tmp662);
abort(); // unreachable
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp664 = &$tmp658->value;
frost$core$Object* $tmp665 = *$tmp664;
frost$core$Frost$ref$frost$core$Object$Q($tmp665);
org$frostlang$frostc$Type** $tmp666 = &((org$frostlang$frostc$Compiler*) $tmp665)->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp667 = *$tmp666;
frost$core$String* $tmp668 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q($tmp665);
frost$core$Error* $tmp669 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp668;
block160:;
frost$core$Int64 $tmp670 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:157:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp671 = $tmp126.value;
int64_t $tmp672 = $tmp670.value;
bool $tmp673 = $tmp671 == $tmp672;
frost$core$Bit $tmp674 = (frost$core$Bit) {$tmp673};
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block166; else goto block167;
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:158
frost$core$Weak** $tmp676 = &param0->compiler;
frost$core$Weak* $tmp677 = *$tmp676;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:158:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp678 = &$tmp677->_valid;
frost$core$Bit $tmp679 = *$tmp678;
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block171; else goto block172;
block172:;
frost$core$Int64 $tmp681 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s682, $tmp681);
abort(); // unreachable
block171:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp683 = &$tmp677->value;
frost$core$Object* $tmp684 = *$tmp683;
frost$core$Frost$ref$frost$core$Object$Q($tmp684);
org$frostlang$frostc$ClassDecl* $tmp685 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp684), param1);
org$frostlang$frostc$Type** $tmp686 = &$tmp685->type;
org$frostlang$frostc$Type* $tmp687 = *$tmp686;
frost$core$String* $tmp688 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q($tmp684);
frost$core$Error* $tmp689 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp688;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:161
frost$core$Int64 $tmp690 = (frost$core$Int64) {161u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:161:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn692 $tmp691 = ($fn692) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp693 = $tmp691(((frost$core$Object*) param1));
frost$core$String* $tmp694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s695, $tmp693);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$String* $tmp696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp694, &$s697);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s698, $tmp690, $tmp696);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
abort(); // unreachable
block1:;
frost$core$Error* $tmp699 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:167
frost$core$Int64 $tmp700 = (frost$core$Int64) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s701, $tmp700);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:171
frost$core$String* $tmp702 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:171:23
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp702, &$s704);
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp703, param2);
frost$core$String* $tmp706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp705, &$s707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
return $tmp706;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:176
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp708 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp708, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Weak** $tmp709 = &param0->compiler;
frost$core$Weak* $tmp710 = *$tmp709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Weak** $tmp711 = &param0->compiler;
*$tmp711 = $tmp708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:177
org$frostlang$frostc$LLVMCodeGenerator** $tmp712 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp713 = *$tmp712;
// begin inline call to method org.frostlang.frostc.LLVMCodeGenerator.setCompiler(compiler:org.frostlang.frostc.Compiler) from HCodeGenerator.frost:177:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:122
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp714 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp714, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Weak** $tmp715 = &$tmp713->compiler;
frost$core$Weak* $tmp716 = *$tmp715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Weak** $tmp717 = &$tmp713->compiler;
*$tmp717 = $tmp714;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:181
frost$io$File** $tmp718 = &param0->outDir;
frost$io$File* $tmp719 = *$tmp718;
frost$core$String* $tmp720 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp721 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp719, $tmp720);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
return $tmp721;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:186
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:187
frost$io$MemoryOutputStream** $tmp722 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp723 = *$tmp722;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:187:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/MemoryOutputStream.stub:20
frost$core$MutableString** $tmp724 = &$tmp723->data;
frost$core$MutableString* $tmp725 = *$tmp724;
frost$core$MutableString$clear($tmp725);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:188
frost$io$MemoryOutputStream** $tmp726 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp727 = *$tmp726;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:188:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/MemoryOutputStream.stub:20
frost$core$MutableString** $tmp728 = &$tmp727->data;
frost$core$MutableString* $tmp729 = *$tmp728;
frost$core$MutableString$clear($tmp729);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:189
frost$io$MemoryOutputStream** $tmp730 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp731 = *$tmp730;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:189:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/MemoryOutputStream.stub:20
frost$core$MutableString** $tmp732 = &$tmp731->data;
frost$core$MutableString* $tmp733 = *$tmp732;
frost$core$MutableString$clear($tmp733);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:190
frost$io$MemoryOutputStream** $tmp734 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp735 = *$tmp734;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:190:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/MemoryOutputStream.stub:20
frost$core$MutableString** $tmp736 = &$tmp735->data;
frost$core$MutableString* $tmp737 = *$tmp736;
frost$core$MutableString$clear($tmp737);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:191
frost$collections$HashSet** $tmp738 = &param0->typeImports;
frost$collections$HashSet* $tmp739 = *$tmp738;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:191:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:26
frost$collections$HashMap** $tmp740 = &$tmp739->contents;
frost$collections$HashMap* $tmp741 = *$tmp740;
frost$collections$HashMap$clear($tmp741);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:192
frost$collections$HashSet** $tmp742 = &param0->bodyImports;
frost$collections$HashSet* $tmp743 = *$tmp742;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:192:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:26
frost$collections$HashMap** $tmp744 = &$tmp743->contents;
frost$collections$HashMap* $tmp745 = *$tmp744;
frost$collections$HashMap$clear($tmp745);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:193
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:193:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:181
frost$io$File** $tmp746 = &param0->outDir;
frost$io$File* $tmp747 = *$tmp746;
frost$core$String* $tmp748 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s749);
frost$io$File* $tmp750 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp747, $tmp748);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$io$File* $tmp751 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local1) = $tmp750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:194
frost$io$File* $tmp752 = *(&local1);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from HCodeGenerator.frost:194:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:27
frost$io$File* $tmp753 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp752, &$s754);
frost$core$String** $tmp755 = &$tmp753->path;
frost$core$String* $tmp756 = *$tmp755;
frost$core$String* $tmp757 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp756);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$String* $tmp758 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local3) = $tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:28
frost$core$String* $tmp759 = *(&local3);
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759 == NULL};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp762 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:31
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp763 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp764 = *(&local3);
frost$io$File$init$frost$core$String($tmp763, $tmp764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$String* $tmp765 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp763;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
goto block10;
block10:;
frost$io$File* $tmp766 = *(&local2);
frost$core$Error* $tmp767 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp766);
if ($tmp767 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local0) = $tmp767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$io$File* $tmp768 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:195
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp770 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp771 = *(&local1);
frost$core$Maybe* $tmp772 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp771);
frost$core$Int64* $tmp773 = &$tmp772->$rawValue;
frost$core$Int64 $tmp774 = *$tmp773;
int64_t $tmp775 = $tmp774.value;
bool $tmp776 = $tmp775 == 0u;
if ($tmp776) goto block15; else goto block16;
block16:;
frost$core$Error** $tmp777 = (frost$core$Error**) ($tmp772->$data + 0);
frost$core$Error* $tmp778 = *$tmp777;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local0) = $tmp778;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$io$File* $tmp779 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp780 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Object** $tmp781 = (frost$core$Object**) ($tmp772->$data + 0);
frost$core$Object* $tmp782 = *$tmp781;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp770, ((frost$io$OutputStream*) $tmp782));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$io$IndentedOutputStream** $tmp783 = &param0->out;
frost$io$IndentedOutputStream* $tmp784 = *$tmp783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$io$IndentedOutputStream** $tmp785 = &param0->out;
*$tmp785 = $tmp770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:196
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:196:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:181
frost$io$File** $tmp786 = &param0->outDir;
frost$io$File* $tmp787 = *$tmp786;
frost$core$String* $tmp788 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s789);
frost$io$File* $tmp790 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp787, $tmp788);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$io$File* $tmp791 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local4) = $tmp790;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:197
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp792 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp793 = *(&local4);
frost$core$Maybe* $tmp794 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp793);
frost$core$Int64* $tmp795 = &$tmp794->$rawValue;
frost$core$Int64 $tmp796 = *$tmp795;
int64_t $tmp797 = $tmp796.value;
bool $tmp798 = $tmp797 == 0u;
if ($tmp798) goto block18; else goto block19;
block19:;
frost$core$Error** $tmp799 = (frost$core$Error**) ($tmp794->$data + 0);
frost$core$Error* $tmp800 = *$tmp799;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local0) = $tmp800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$io$File* $tmp801 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp802 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block18:;
frost$core$Object** $tmp804 = (frost$core$Object**) ($tmp794->$data + 0);
frost$core$Object* $tmp805 = *$tmp804;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp792, ((frost$io$OutputStream*) $tmp805));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$io$IndentedOutputStream** $tmp806 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp807 = *$tmp806;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$io$IndentedOutputStream** $tmp808 = &param0->typesOut;
*$tmp808 = $tmp792;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:198
frost$io$IndentedOutputStream** $tmp809 = &param0->out;
frost$io$IndentedOutputStream* $tmp810 = *$tmp809;
$fn812 $tmp811 = ($fn812) ((frost$io$OutputStream*) $tmp810)->$class->vtable[19];
frost$core$Error* $tmp813 = $tmp811(((frost$io$OutputStream*) $tmp810), &$s814);
if ($tmp813 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local0) = $tmp813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$io$File* $tmp815 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp817 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:199
frost$io$IndentedOutputStream** $tmp818 = &param0->out;
frost$io$IndentedOutputStream* $tmp819 = *$tmp818;
$fn821 $tmp820 = ($fn821) ((frost$io$OutputStream*) $tmp819)->$class->vtable[19];
frost$core$Error* $tmp822 = $tmp820(((frost$io$OutputStream*) $tmp819), &$s823);
if ($tmp822 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local0) = $tmp822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$io$File* $tmp824 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp825 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp826 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:200
frost$io$IndentedOutputStream** $tmp827 = &param0->out;
frost$io$IndentedOutputStream* $tmp828 = *$tmp827;
frost$io$File* $tmp829 = *(&local4);
// begin inline call to function frost.io.File.get_name():frost.core.String from HCodeGenerator.frost:200:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:35
frost$core$String** $tmp830 = &$tmp829->path;
frost$core$String* $tmp831 = *$tmp830;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.stub:35:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
frost$core$String$Index $tmp832 = frost$core$String$get_end$R$frost$core$String$Index($tmp831);
frost$core$String$Index$nullable $tmp833 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp831, &$s834, $tmp832);
*(&local6) = $tmp833;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:36
frost$core$String$Index$nullable $tmp835 = *(&local6);
frost$core$Bit $tmp836 = (frost$core$Bit) {$tmp835.nonnull};
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:37
frost$core$String** $tmp838 = &$tmp829->path;
frost$core$String* $tmp839 = *$tmp838;
frost$core$String** $tmp840 = &$tmp829->path;
frost$core$String* $tmp841 = *$tmp840;
frost$core$String$Index$nullable $tmp842 = *(&local6);
frost$core$String$Index $tmp843 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp841, ((frost$core$String$Index) $tmp842.value));
frost$core$Bit $tmp844 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp845 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp843, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp844);
frost$core$String* $tmp846 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp839, $tmp845);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local5) = $tmp846;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
goto block24;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:40
frost$core$String** $tmp847 = &$tmp829->path;
frost$core$String* $tmp848 = *$tmp847;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local5) = $tmp848;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
goto block24;
block27:;
goto block24;
block24:;
frost$core$String* $tmp849 = *(&local5);
frost$core$String* $tmp850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s851, $tmp849);
frost$core$String* $tmp852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp850, &$s853);
$fn855 $tmp854 = ($fn855) ((frost$io$OutputStream*) $tmp828)->$class->vtable[19];
frost$core$Error* $tmp856 = $tmp854(((frost$io$OutputStream*) $tmp828), $tmp852);
if ($tmp856 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local0) = $tmp856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
frost$core$String* $tmp857 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp858 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp859 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp860 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:201
frost$io$IndentedOutputStream** $tmp861 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp862 = *$tmp861;
$fn864 $tmp863 = ($fn864) ((frost$io$OutputStream*) $tmp862)->$class->vtable[19];
frost$core$Error* $tmp865 = $tmp863(((frost$io$OutputStream*) $tmp862), &$s866);
if ($tmp865 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local0) = $tmp865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$String* $tmp867 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp868 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp869 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp870 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:202
frost$io$IndentedOutputStream** $tmp871 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp872 = *$tmp871;
$fn874 $tmp873 = ($fn874) ((frost$io$OutputStream*) $tmp872)->$class->vtable[19];
frost$core$Error* $tmp875 = $tmp873(((frost$io$OutputStream*) $tmp872), &$s876);
if ($tmp875 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local0) = $tmp875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$String* $tmp877 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp878 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp879 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp880 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:203
frost$io$MemoryOutputStream** $tmp881 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp882 = *$tmp881;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$io$MemoryOutputStream** $tmp883 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp884 = *$tmp883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$io$MemoryOutputStream** $tmp885 = &param0->importStream;
*$tmp885 = $tmp882;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:204
frost$collections$HashSet** $tmp886 = &param0->typeImports;
frost$collections$HashSet* $tmp887 = *$tmp886;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$collections$HashSet** $tmp888 = &param0->imports;
frost$collections$HashSet* $tmp889 = *$tmp888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$collections$HashSet** $tmp890 = &param0->imports;
*$tmp890 = $tmp887;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:205
frost$io$IndentedOutputStream** $tmp891 = &param0->types;
frost$io$IndentedOutputStream* $tmp892 = *$tmp891;
frost$core$String** $tmp893 = &param1->name;
frost$core$String* $tmp894 = *$tmp893;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:205:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp895 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp896 = *$tmp895;
frost$core$String* $tmp897 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp896, $tmp894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$String* $tmp898 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s899, $tmp897);
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp898, &$s901);
$fn903 $tmp902 = ($fn903) ((frost$io$OutputStream*) $tmp892)->$class->vtable[19];
frost$core$Error* $tmp904 = $tmp902(((frost$io$OutputStream*) $tmp892), $tmp900);
if ($tmp904 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local0) = $tmp904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$String* $tmp905 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp906 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp907 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp908 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:206
frost$io$IndentedOutputStream** $tmp909 = &param0->types;
frost$io$IndentedOutputStream* $tmp910 = *$tmp909;
frost$core$Int64* $tmp911 = &$tmp910->level;
frost$core$Int64 $tmp912 = *$tmp911;
frost$core$Int64 $tmp913 = (frost$core$Int64) {1u};
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913.value;
int64_t $tmp916 = $tmp914 + $tmp915;
frost$core$Int64 $tmp917 = (frost$core$Int64) {$tmp916};
frost$core$Int64* $tmp918 = &$tmp910->level;
*$tmp918 = $tmp917;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:207
frost$core$Weak** $tmp919 = &param0->compiler;
frost$core$Weak* $tmp920 = *$tmp919;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:207:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp921 = &$tmp920->_valid;
frost$core$Bit $tmp922 = *$tmp921;
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp924 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s925, $tmp924);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp926 = &$tmp920->value;
frost$core$Object* $tmp927 = *$tmp926;
frost$core$Frost$ref$frost$core$Object$Q($tmp927);
frost$collections$ListView* $tmp928 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp927), param1);
ITable* $tmp929 = ((frost$collections$Iterable*) $tmp928)->$class->itable;
while ($tmp929->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp929 = $tmp929->next;
}
$fn931 $tmp930 = $tmp929->methods[0];
frost$collections$Iterator* $tmp932 = $tmp930(((frost$collections$Iterable*) $tmp928));
goto block42;
block42:;
ITable* $tmp933 = $tmp932->$class->itable;
while ($tmp933->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp933 = $tmp933->next;
}
$fn935 $tmp934 = $tmp933->methods[0];
frost$core$Bit $tmp936 = $tmp934($tmp932);
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block44; else goto block43;
block43:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp938 = $tmp932->$class->itable;
while ($tmp938->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp938 = $tmp938->next;
}
$fn940 $tmp939 = $tmp938->methods[1];
frost$core$Object* $tmp941 = $tmp939($tmp932);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp941)));
org$frostlang$frostc$FieldDecl* $tmp942 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp941);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:208
frost$core$Weak** $tmp943 = &param0->compiler;
frost$core$Weak* $tmp944 = *$tmp943;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:208:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp945 = &$tmp944->_valid;
frost$core$Bit $tmp946 = *$tmp945;
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp948 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s949, $tmp948);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp950 = &$tmp944->value;
frost$core$Object* $tmp951 = *$tmp950;
frost$core$Frost$ref$frost$core$Object$Q($tmp951);
org$frostlang$frostc$FieldDecl* $tmp952 = *(&local7);
frost$core$Bit $tmp953 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp951), $tmp952);
frost$core$Frost$unref$frost$core$Object$Q($tmp951);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:209
org$frostlang$frostc$FieldDecl* $tmp954 = *(&local7);
org$frostlang$frostc$Type** $tmp955 = &$tmp954->type;
org$frostlang$frostc$Type* $tmp956 = *$tmp955;
frost$core$Weak** $tmp957 = &param0->compiler;
frost$core$Weak* $tmp958 = *$tmp957;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:209:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp959 = &$tmp958->_valid;
frost$core$Bit $tmp960 = *$tmp959;
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp962 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s963, $tmp962);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp964 = &$tmp958->value;
frost$core$Object* $tmp965 = *$tmp964;
frost$core$Frost$ref$frost$core$Object$Q($tmp965);
org$frostlang$frostc$Type** $tmp966 = &((org$frostlang$frostc$Compiler*) $tmp965)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp967 = *$tmp966;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from HCodeGenerator.frost:209:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp968 = &((org$frostlang$frostc$Symbol*) $tmp956)->name;
frost$core$String* $tmp969 = *$tmp968;
frost$core$String** $tmp970 = &((org$frostlang$frostc$Symbol*) $tmp967)->name;
frost$core$String* $tmp971 = *$tmp970;
frost$core$Bit $tmp972 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp969, $tmp971);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Type$Kind* $tmp974 = &$tmp956->typeKind;
org$frostlang$frostc$Type$Kind $tmp975 = *$tmp974;
org$frostlang$frostc$Type$Kind$wrapper* $tmp976;
$tmp976 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp976->value = $tmp975;
org$frostlang$frostc$Type$Kind* $tmp977 = &$tmp967->typeKind;
org$frostlang$frostc$Type$Kind $tmp978 = *$tmp977;
org$frostlang$frostc$Type$Kind$wrapper* $tmp979;
$tmp979 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp979->value = $tmp978;
ITable* $tmp980 = ((frost$core$Equatable*) $tmp976)->$class->itable;
while ($tmp980->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp980 = $tmp980->next;
}
$fn982 $tmp981 = $tmp980->methods[0];
frost$core$Bit $tmp983 = $tmp981(((frost$core$Equatable*) $tmp976), ((frost$core$Equatable*) $tmp979));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp979)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp976)));
*(&local8) = $tmp983;
goto block59;
block58:;
*(&local8) = $tmp972;
goto block59;
block59:;
frost$core$Bit $tmp984 = *(&local8);
bool $tmp985 = $tmp984.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp965);
if ($tmp985) goto block49; else goto block51;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:210
frost$io$IndentedOutputStream** $tmp986 = &param0->types;
frost$io$IndentedOutputStream* $tmp987 = *$tmp986;
org$frostlang$frostc$FieldDecl* $tmp988 = *(&local7);
frost$core$String** $tmp989 = &((org$frostlang$frostc$Symbol*) $tmp988)->name;
frost$core$String* $tmp990 = *$tmp989;
frost$core$String* $tmp991 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s992, $tmp990);
frost$core$String* $tmp993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp991, &$s994);
org$frostlang$frostc$LLVMCodeGenerator** $tmp995 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp996 = *$tmp995;
frost$core$Int64 $tmp997 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp996, param1);
frost$core$Int64$wrapper* $tmp998;
$tmp998 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp998->value = $tmp997;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:210:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1000 $tmp999 = ($fn1000) ((frost$core$Object*) $tmp998)->$class->vtable[0];
frost$core$String* $tmp1001 = $tmp999(((frost$core$Object*) $tmp998));
frost$core$String* $tmp1002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp993, $tmp1001);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$String* $tmp1003 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1002, &$s1004);
$fn1006 $tmp1005 = ($fn1006) ((frost$io$OutputStream*) $tmp987)->$class->vtable[19];
frost$core$Error* $tmp1007 = $tmp1005(((frost$io$OutputStream*) $tmp987), $tmp1003);
if ($tmp1007 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local0) = $tmp1007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
frost$core$Frost$unref$frost$core$Object$Q($tmp941);
org$frostlang$frostc$FieldDecl* $tmp1008 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q($tmp927);
frost$core$String* $tmp1009 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1010 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1011 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1012 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
goto block50;
block51:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:213
frost$io$IndentedOutputStream** $tmp1013 = &param0->types;
frost$io$IndentedOutputStream* $tmp1014 = *$tmp1013;
org$frostlang$frostc$FieldDecl* $tmp1015 = *(&local7);
org$frostlang$frostc$Type** $tmp1016 = &$tmp1015->type;
org$frostlang$frostc$Type* $tmp1017 = *$tmp1016;
frost$core$String* $tmp1018 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1017);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:213:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$String* $tmp1019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1018, &$s1020);
org$frostlang$frostc$FieldDecl* $tmp1021 = *(&local7);
frost$core$String** $tmp1022 = &((org$frostlang$frostc$Symbol*) $tmp1021)->name;
frost$core$String* $tmp1023 = *$tmp1022;
frost$core$String* $tmp1024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1019, $tmp1023);
frost$core$String* $tmp1025 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1024, &$s1026);
$fn1028 $tmp1027 = ($fn1028) ((frost$io$OutputStream*) $tmp1014)->$class->vtable[19];
frost$core$Error* $tmp1029 = $tmp1027(((frost$io$OutputStream*) $tmp1014), $tmp1025);
if ($tmp1029 == NULL) goto block64; else goto block65;
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local0) = $tmp1029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q($tmp941);
org$frostlang$frostc$FieldDecl* $tmp1030 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q($tmp927);
frost$core$String* $tmp1031 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1032 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1033 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1034 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block64:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp941);
org$frostlang$frostc$FieldDecl* $tmp1035 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block42;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q($tmp927);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:216
frost$core$String** $tmp1036 = &param1->name;
frost$core$String* $tmp1037 = *$tmp1036;
frost$core$Bit $tmp1038 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1037, &$s1039);
bool $tmp1040 = $tmp1038.value;
if ($tmp1040) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:217
frost$io$IndentedOutputStream** $tmp1041 = &param0->types;
frost$io$IndentedOutputStream* $tmp1042 = *$tmp1041;
$fn1044 $tmp1043 = ($fn1044) ((frost$io$OutputStream*) $tmp1042)->$class->vtable[19];
frost$core$Error* $tmp1045 = $tmp1043(((frost$io$OutputStream*) $tmp1042), &$s1046);
if ($tmp1045 == NULL) goto block68; else goto block69;
block69:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local0) = $tmp1045;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$String* $tmp1047 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1048 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1049 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1050 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:218
frost$io$IndentedOutputStream** $tmp1051 = &param0->types;
frost$io$IndentedOutputStream* $tmp1052 = *$tmp1051;
$fn1054 $tmp1053 = ($fn1054) ((frost$io$OutputStream*) $tmp1052)->$class->vtable[19];
frost$core$Error* $tmp1055 = $tmp1053(((frost$io$OutputStream*) $tmp1052), &$s1056);
if ($tmp1055 == NULL) goto block70; else goto block71;
block71:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local0) = $tmp1055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$String* $tmp1057 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1058 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1059 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1060 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block70:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
goto block67;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:220
frost$io$IndentedOutputStream** $tmp1061 = &param0->types;
frost$io$IndentedOutputStream* $tmp1062 = *$tmp1061;
frost$core$Int64* $tmp1063 = &$tmp1062->level;
frost$core$Int64 $tmp1064 = *$tmp1063;
frost$core$Int64 $tmp1065 = (frost$core$Int64) {1u};
int64_t $tmp1066 = $tmp1064.value;
int64_t $tmp1067 = $tmp1065.value;
int64_t $tmp1068 = $tmp1066 - $tmp1067;
frost$core$Int64 $tmp1069 = (frost$core$Int64) {$tmp1068};
frost$core$Int64* $tmp1070 = &$tmp1062->level;
*$tmp1070 = $tmp1069;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:221
frost$io$IndentedOutputStream** $tmp1071 = &param0->types;
frost$io$IndentedOutputStream* $tmp1072 = *$tmp1071;
frost$core$String** $tmp1073 = &param1->name;
frost$core$String* $tmp1074 = *$tmp1073;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:221:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1075 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1076 = *$tmp1075;
frost$core$String* $tmp1077 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1076, $tmp1074);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
frost$core$String* $tmp1078 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1079, $tmp1077);
frost$core$String* $tmp1080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1078, &$s1081);
$fn1083 $tmp1082 = ($fn1083) ((frost$io$OutputStream*) $tmp1072)->$class->vtable[19];
frost$core$Error* $tmp1084 = $tmp1082(((frost$io$OutputStream*) $tmp1072), $tmp1080);
if ($tmp1084 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local0) = $tmp1084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
frost$core$String* $tmp1085 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1086 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1087 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1088 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:222
frost$io$IndentedOutputStream** $tmp1089 = &param0->types;
frost$io$IndentedOutputStream* $tmp1090 = *$tmp1089;
$fn1092 $tmp1091 = ($fn1092) ((frost$io$OutputStream*) $tmp1090)->$class->vtable[19];
frost$core$Error* $tmp1093 = $tmp1091(((frost$io$OutputStream*) $tmp1090), &$s1094);
if ($tmp1093 == NULL) goto block75; else goto block76;
block76:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local0) = $tmp1093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$core$String* $tmp1095 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1096 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1097 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1098 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:223
frost$io$IndentedOutputStream** $tmp1099 = &param0->types;
frost$io$IndentedOutputStream* $tmp1100 = *$tmp1099;
frost$core$Weak** $tmp1101 = &param0->compiler;
frost$core$Weak* $tmp1102 = *$tmp1101;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:224:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1103 = &$tmp1102->_valid;
frost$core$Bit $tmp1104 = *$tmp1103;
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp1106 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1107, $tmp1106);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1108 = &$tmp1102->value;
frost$core$Object* $tmp1109 = *$tmp1108;
frost$core$Frost$ref$frost$core$Object$Q($tmp1109);
org$frostlang$frostc$Type** $tmp1110 = &((org$frostlang$frostc$Compiler*) $tmp1109)->STRING_TYPE;
org$frostlang$frostc$Type* $tmp1111 = *$tmp1110;
frost$core$String* $tmp1112 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1111);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:224:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$String* $tmp1113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1112, &$s1114);
frost$core$Weak** $tmp1115 = &param0->compiler;
frost$core$Weak* $tmp1116 = *$tmp1115;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:224:65
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1117 = &$tmp1116->_valid;
frost$core$Bit $tmp1118 = *$tmp1117;
bool $tmp1119 = $tmp1118.value;
if ($tmp1119) goto block84; else goto block85;
block85:;
frost$core$Int64 $tmp1120 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1121, $tmp1120);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1122 = &$tmp1116->value;
frost$core$Object* $tmp1123 = *$tmp1122;
frost$core$Frost$ref$frost$core$Object$Q($tmp1123);
org$frostlang$frostc$Type** $tmp1124 = &((org$frostlang$frostc$Compiler*) $tmp1123)->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1125 = *$tmp1124;
frost$core$String* $tmp1126 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1125);
frost$core$String* $tmp1127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1113, $tmp1126);
frost$core$String* $tmp1128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1127, &$s1129);
frost$core$String* $tmp1130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1131, $tmp1128);
frost$core$Weak** $tmp1132 = &param0->compiler;
frost$core$Weak* $tmp1133 = *$tmp1132;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:225:53
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1134 = &$tmp1133->_valid;
frost$core$Bit $tmp1135 = *$tmp1134;
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp1137 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1138, $tmp1137);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1139 = &$tmp1133->value;
frost$core$Object* $tmp1140 = *$tmp1139;
frost$core$Frost$ref$frost$core$Object$Q($tmp1140);
frost$collections$ListView* $tmp1141 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1140), param1);
ITable* $tmp1142 = ((frost$collections$CollectionView*) $tmp1141)->$class->itable;
while ($tmp1142->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1142 = $tmp1142->next;
}
$fn1144 $tmp1143 = $tmp1142->methods[0];
frost$core$Int64 $tmp1145 = $tmp1143(((frost$collections$CollectionView*) $tmp1141));
frost$core$Int64$wrapper* $tmp1146;
$tmp1146 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1146->value = $tmp1145;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:225:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1148 $tmp1147 = ($fn1148) ((frost$core$Object*) $tmp1146)->$class->vtable[0];
frost$core$String* $tmp1149 = $tmp1147(((frost$core$Object*) $tmp1146));
frost$core$String* $tmp1150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1151, $tmp1149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$String* $tmp1152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1150, &$s1153);
frost$core$String* $tmp1154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1130, $tmp1152);
frost$core$String** $tmp1155 = &param1->name;
frost$core$String* $tmp1156 = *$tmp1155;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:226:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1157 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1158 = *$tmp1157;
frost$core$String* $tmp1159 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1158, $tmp1156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:226:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$String* $tmp1160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1159, &$s1161);
frost$core$String* $tmp1162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1154, $tmp1160);
$fn1164 $tmp1163 = ($fn1164) ((frost$io$OutputStream*) $tmp1100)->$class->vtable[19];
frost$core$Error* $tmp1165 = $tmp1163(((frost$io$OutputStream*) $tmp1100), $tmp1162);
if ($tmp1165 == NULL) goto block93; else goto block94;
block94:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local0) = $tmp1165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q($tmp1140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$Frost$unref$frost$core$Object$Q($tmp1123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$Frost$unref$frost$core$Object$Q($tmp1109);
frost$core$String* $tmp1166 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1167 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q($tmp1140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$Frost$unref$frost$core$Object$Q($tmp1123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$Frost$unref$frost$core$Object$Q($tmp1109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:227
frost$io$IndentedOutputStream** $tmp1170 = &param0->types;
frost$io$IndentedOutputStream* $tmp1171 = *$tmp1170;
frost$core$String** $tmp1172 = &param1->name;
frost$core$String* $tmp1173 = *$tmp1172;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:227:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1174 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1175 = *$tmp1174;
frost$core$String* $tmp1176 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1175, $tmp1173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$String* $tmp1177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1178, $tmp1176);
frost$core$String* $tmp1179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1177, &$s1180);
frost$core$String** $tmp1181 = &param1->name;
frost$core$String* $tmp1182 = *$tmp1181;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:227:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1183 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1184 = *$tmp1183;
frost$core$String* $tmp1185 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1184, $tmp1182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$String* $tmp1186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1179, $tmp1185);
frost$core$String* $tmp1187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1186, &$s1188);
$fn1190 $tmp1189 = ($fn1190) ((frost$io$OutputStream*) $tmp1171)->$class->vtable[19];
frost$core$Error* $tmp1191 = $tmp1189(((frost$io$OutputStream*) $tmp1171), $tmp1187);
if ($tmp1191 == NULL) goto block97; else goto block98;
block98:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local0) = $tmp1191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$String* $tmp1192 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1193 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1194 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block97:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:228
frost$core$Weak** $tmp1196 = &param0->compiler;
frost$core$Weak* $tmp1197 = *$tmp1196;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:228:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1198 = &$tmp1197->_valid;
frost$core$Bit $tmp1199 = *$tmp1198;
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block103; else goto block104;
block104:;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1202, $tmp1201);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1203 = &$tmp1197->value;
frost$core$Object* $tmp1204 = *$tmp1203;
frost$core$Frost$ref$frost$core$Object$Q($tmp1204);
frost$core$Bit $tmp1205 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1204), param1);
bool $tmp1206 = $tmp1205.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1204);
if ($tmp1206) goto block99; else goto block100;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:229
frost$io$IndentedOutputStream** $tmp1207 = &param0->types;
frost$io$IndentedOutputStream* $tmp1208 = *$tmp1207;
frost$core$String** $tmp1209 = &param1->name;
frost$core$String* $tmp1210 = *$tmp1209;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:229:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1211 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1212 = *$tmp1211;
frost$core$String* $tmp1213 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1212, $tmp1210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$String* $tmp1214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1215, $tmp1213);
frost$core$String* $tmp1216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1214, &$s1217);
$fn1219 $tmp1218 = ($fn1219) ((frost$io$OutputStream*) $tmp1208)->$class->vtable[19];
frost$core$Error* $tmp1220 = $tmp1218(((frost$io$OutputStream*) $tmp1208), $tmp1216);
if ($tmp1220 == NULL) goto block106; else goto block107;
block107:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local0) = $tmp1220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$String* $tmp1221 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1222 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1223 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:230
frost$io$IndentedOutputStream** $tmp1225 = &param0->types;
frost$io$IndentedOutputStream* $tmp1226 = *$tmp1225;
frost$core$Int64* $tmp1227 = &$tmp1226->level;
frost$core$Int64 $tmp1228 = *$tmp1227;
frost$core$Int64 $tmp1229 = (frost$core$Int64) {1u};
int64_t $tmp1230 = $tmp1228.value;
int64_t $tmp1231 = $tmp1229.value;
int64_t $tmp1232 = $tmp1230 + $tmp1231;
frost$core$Int64 $tmp1233 = (frost$core$Int64) {$tmp1232};
frost$core$Int64* $tmp1234 = &$tmp1226->level;
*$tmp1234 = $tmp1233;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:231
frost$io$IndentedOutputStream** $tmp1235 = &param0->types;
frost$io$IndentedOutputStream* $tmp1236 = *$tmp1235;
$fn1238 $tmp1237 = ($fn1238) ((frost$io$OutputStream*) $tmp1236)->$class->vtable[19];
frost$core$Error* $tmp1239 = $tmp1237(((frost$io$OutputStream*) $tmp1236), &$s1240);
if ($tmp1239 == NULL) goto block108; else goto block109;
block109:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local0) = $tmp1239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
frost$core$String* $tmp1241 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1242 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1243 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1244 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block108:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:232
frost$io$IndentedOutputStream** $tmp1245 = &param0->types;
frost$io$IndentedOutputStream* $tmp1246 = *$tmp1245;
$fn1248 $tmp1247 = ($fn1248) ((frost$io$OutputStream*) $tmp1246)->$class->vtable[19];
frost$core$Error* $tmp1249 = $tmp1247(((frost$io$OutputStream*) $tmp1246), &$s1250);
if ($tmp1249 == NULL) goto block110; else goto block111;
block111:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local0) = $tmp1249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
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
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:233
frost$io$IndentedOutputStream** $tmp1255 = &param0->types;
frost$io$IndentedOutputStream* $tmp1256 = *$tmp1255;
$fn1258 $tmp1257 = ($fn1258) ((frost$io$OutputStream*) $tmp1256)->$class->vtable[19];
frost$core$Error* $tmp1259 = $tmp1257(((frost$io$OutputStream*) $tmp1256), &$s1260);
if ($tmp1259 == NULL) goto block112; else goto block113;
block113:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local0) = $tmp1259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$String* $tmp1261 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1262 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1263 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block112:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:234
frost$io$IndentedOutputStream** $tmp1265 = &param0->types;
frost$io$IndentedOutputStream* $tmp1266 = *$tmp1265;
org$frostlang$frostc$Type** $tmp1267 = &param1->type;
org$frostlang$frostc$Type* $tmp1268 = *$tmp1267;
frost$core$String* $tmp1269 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1268);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:234:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$String* $tmp1270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1269, &$s1271);
$fn1273 $tmp1272 = ($fn1273) ((frost$io$OutputStream*) $tmp1266)->$class->vtable[19];
frost$core$Error* $tmp1274 = $tmp1272(((frost$io$OutputStream*) $tmp1266), $tmp1270);
if ($tmp1274 == NULL) goto block115; else goto block116;
block116:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local0) = $tmp1274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$String* $tmp1275 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1276 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1277 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1278 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block115:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:235
frost$io$IndentedOutputStream** $tmp1279 = &param0->types;
frost$io$IndentedOutputStream* $tmp1280 = *$tmp1279;
frost$core$Int64* $tmp1281 = &$tmp1280->level;
frost$core$Int64 $tmp1282 = *$tmp1281;
frost$core$Int64 $tmp1283 = (frost$core$Int64) {1u};
int64_t $tmp1284 = $tmp1282.value;
int64_t $tmp1285 = $tmp1283.value;
int64_t $tmp1286 = $tmp1284 - $tmp1285;
frost$core$Int64 $tmp1287 = (frost$core$Int64) {$tmp1286};
frost$core$Int64* $tmp1288 = &$tmp1280->level;
*$tmp1288 = $tmp1287;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:236
frost$io$IndentedOutputStream** $tmp1289 = &param0->types;
frost$io$IndentedOutputStream* $tmp1290 = *$tmp1289;
frost$core$String** $tmp1291 = &param1->name;
frost$core$String* $tmp1292 = *$tmp1291;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:236:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1293 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1294 = *$tmp1293;
frost$core$String* $tmp1295 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1294, $tmp1292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$String* $tmp1296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1297, $tmp1295);
frost$core$String* $tmp1298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1296, &$s1299);
$fn1301 $tmp1300 = ($fn1301) ((frost$io$OutputStream*) $tmp1290)->$class->vtable[19];
frost$core$Error* $tmp1302 = $tmp1300(((frost$io$OutputStream*) $tmp1290), $tmp1298);
if ($tmp1302 == NULL) goto block118; else goto block119;
block119:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local0) = $tmp1302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$String* $tmp1303 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1306 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:237
frost$io$IndentedOutputStream** $tmp1307 = &param0->types;
frost$io$IndentedOutputStream* $tmp1308 = *$tmp1307;
frost$core$String** $tmp1309 = &param1->name;
frost$core$String* $tmp1310 = *$tmp1309;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:237:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1311 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1312 = *$tmp1311;
frost$core$String* $tmp1313 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1312, $tmp1310);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$String* $tmp1314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1315, $tmp1313);
frost$core$String* $tmp1316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1314, &$s1317);
$fn1319 $tmp1318 = ($fn1319) ((frost$io$OutputStream*) $tmp1308)->$class->vtable[19];
frost$core$Error* $tmp1320 = $tmp1318(((frost$io$OutputStream*) $tmp1308), $tmp1316);
if ($tmp1320 == NULL) goto block121; else goto block122;
block122:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local0) = $tmp1320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$String* $tmp1321 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1322 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1323 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1324 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:238
frost$io$IndentedOutputStream** $tmp1325 = &param0->types;
frost$io$IndentedOutputStream* $tmp1326 = *$tmp1325;
frost$core$Int64* $tmp1327 = &$tmp1326->level;
frost$core$Int64 $tmp1328 = *$tmp1327;
frost$core$Int64 $tmp1329 = (frost$core$Int64) {1u};
int64_t $tmp1330 = $tmp1328.value;
int64_t $tmp1331 = $tmp1329.value;
int64_t $tmp1332 = $tmp1330 + $tmp1331;
frost$core$Int64 $tmp1333 = (frost$core$Int64) {$tmp1332};
frost$core$Int64* $tmp1334 = &$tmp1326->level;
*$tmp1334 = $tmp1333;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:239
frost$io$IndentedOutputStream** $tmp1335 = &param0->types;
frost$io$IndentedOutputStream* $tmp1336 = *$tmp1335;
frost$core$String** $tmp1337 = &param1->name;
frost$core$String* $tmp1338 = *$tmp1337;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:239:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1339 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1340 = *$tmp1339;
frost$core$String* $tmp1341 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1340, $tmp1338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:239:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$core$String* $tmp1342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1341, &$s1343);
$fn1345 $tmp1344 = ($fn1345) ((frost$io$OutputStream*) $tmp1336)->$class->vtable[19];
frost$core$Error* $tmp1346 = $tmp1344(((frost$io$OutputStream*) $tmp1336), $tmp1342);
if ($tmp1346 == NULL) goto block125; else goto block126;
block126:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local0) = $tmp1346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$core$String* $tmp1347 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1348 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1349 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1350 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:240
frost$io$IndentedOutputStream** $tmp1351 = &param0->types;
frost$io$IndentedOutputStream* $tmp1352 = *$tmp1351;
$fn1354 $tmp1353 = ($fn1354) ((frost$io$OutputStream*) $tmp1352)->$class->vtable[19];
frost$core$Error* $tmp1355 = $tmp1353(((frost$io$OutputStream*) $tmp1352), &$s1356);
if ($tmp1355 == NULL) goto block127; else goto block128;
block128:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local0) = $tmp1355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$String* $tmp1357 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1358 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1359 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1360 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block127:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:241
frost$io$IndentedOutputStream** $tmp1361 = &param0->types;
frost$io$IndentedOutputStream* $tmp1362 = *$tmp1361;
frost$core$Int64* $tmp1363 = &$tmp1362->level;
frost$core$Int64 $tmp1364 = *$tmp1363;
frost$core$Int64 $tmp1365 = (frost$core$Int64) {1u};
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365.value;
int64_t $tmp1368 = $tmp1366 - $tmp1367;
frost$core$Int64 $tmp1369 = (frost$core$Int64) {$tmp1368};
frost$core$Int64* $tmp1370 = &$tmp1362->level;
*$tmp1370 = $tmp1369;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:242
frost$io$IndentedOutputStream** $tmp1371 = &param0->types;
frost$io$IndentedOutputStream* $tmp1372 = *$tmp1371;
frost$core$String** $tmp1373 = &param1->name;
frost$core$String* $tmp1374 = *$tmp1373;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:242:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1375 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1376 = *$tmp1375;
frost$core$String* $tmp1377 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1376, $tmp1374);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
frost$core$String* $tmp1378 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1379, $tmp1377);
frost$core$String* $tmp1380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1378, &$s1381);
$fn1383 $tmp1382 = ($fn1383) ((frost$io$OutputStream*) $tmp1372)->$class->vtable[19];
frost$core$Error* $tmp1384 = $tmp1382(((frost$io$OutputStream*) $tmp1372), $tmp1380);
if ($tmp1384 == NULL) goto block130; else goto block131;
block131:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local0) = $tmp1384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
frost$core$String* $tmp1385 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1386 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1387 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block130:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:243
frost$core$Weak** $tmp1389 = &param0->compiler;
frost$core$Weak* $tmp1390 = *$tmp1389;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:243:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1391 = &$tmp1390->_valid;
frost$core$Bit $tmp1392 = *$tmp1391;
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block134; else goto block135;
block135:;
frost$core$Int64 $tmp1394 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1395, $tmp1394);
abort(); // unreachable
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1396 = &$tmp1390->value;
frost$core$Object* $tmp1397 = *$tmp1396;
frost$core$Frost$ref$frost$core$Object$Q($tmp1397);
frost$core$Weak** $tmp1398 = &param0->compiler;
frost$core$Weak* $tmp1399 = *$tmp1398;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:243:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1400 = &$tmp1399->_valid;
frost$core$Bit $tmp1401 = *$tmp1400;
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block138; else goto block139;
block139:;
frost$core$Int64 $tmp1403 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1404, $tmp1403);
abort(); // unreachable
block138:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1405 = &$tmp1399->value;
frost$core$Object* $tmp1406 = *$tmp1405;
frost$core$Frost$ref$frost$core$Object$Q($tmp1406);
org$frostlang$frostc$Type** $tmp1407 = &((org$frostlang$frostc$Compiler*) $tmp1406)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp1408 = *$tmp1407;
org$frostlang$frostc$ClassDecl* $tmp1409 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1397), $tmp1408);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
org$frostlang$frostc$ClassDecl* $tmp1410 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local9) = $tmp1409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q($tmp1406);
frost$core$Frost$unref$frost$core$Object$Q($tmp1397);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:244
frost$core$Weak** $tmp1411 = &param0->compiler;
frost$core$Weak* $tmp1412 = *$tmp1411;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:244:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1413 = &$tmp1412->_valid;
frost$core$Bit $tmp1414 = *$tmp1413;
bool $tmp1415 = $tmp1414.value;
if ($tmp1415) goto block142; else goto block143;
block143:;
frost$core$Int64 $tmp1416 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1417, $tmp1416);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1418 = &$tmp1412->value;
frost$core$Object* $tmp1419 = *$tmp1418;
frost$core$Frost$ref$frost$core$Object$Q($tmp1419);
org$frostlang$frostc$ClassDecl* $tmp1420 = *(&local9);
frost$collections$ListView* $tmp1421 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1419), $tmp1420);
*(&local10) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$collections$ListView* $tmp1422 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local10) = $tmp1421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Frost$unref$frost$core$Object$Q($tmp1419);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:245
frost$io$IndentedOutputStream** $tmp1423 = &param0->types;
frost$io$IndentedOutputStream* $tmp1424 = *$tmp1423;
frost$collections$ListView* $tmp1425 = *(&local10);
ITable* $tmp1426 = ((frost$collections$CollectionView*) $tmp1425)->$class->itable;
while ($tmp1426->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1426 = $tmp1426->next;
}
$fn1428 $tmp1427 = $tmp1426->methods[0];
frost$core$Int64 $tmp1429 = $tmp1427(((frost$collections$CollectionView*) $tmp1425));
frost$core$Int64$wrapper* $tmp1430;
$tmp1430 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1430->value = $tmp1429;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:247:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1432 $tmp1431 = ($fn1432) ((frost$core$Object*) $tmp1430)->$class->vtable[0];
frost$core$String* $tmp1433 = $tmp1431(((frost$core$Object*) $tmp1430));
frost$core$String* $tmp1434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1435, $tmp1433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$String* $tmp1436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1434, &$s1437);
frost$core$String* $tmp1438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1439, $tmp1436);
frost$core$String** $tmp1440 = &param1->name;
frost$core$String* $tmp1441 = *$tmp1440;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:248:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1442 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1443 = *$tmp1442;
frost$core$String* $tmp1444 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1443, $tmp1441);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:248:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$String* $tmp1445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1444, &$s1446);
frost$core$String* $tmp1447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1438, $tmp1445);
$fn1449 $tmp1448 = ($fn1449) ((frost$io$OutputStream*) $tmp1424)->$class->vtable[19];
frost$core$Error* $tmp1450 = $tmp1448(((frost$io$OutputStream*) $tmp1424), $tmp1447);
if ($tmp1450 == NULL) goto block147; else goto block148;
block148:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local0) = $tmp1450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$collections$ListView* $tmp1451 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1452 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1453 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1454 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block147:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:249
frost$io$IndentedOutputStream** $tmp1457 = &param0->types;
frost$io$IndentedOutputStream* $tmp1458 = *$tmp1457;
frost$core$String** $tmp1459 = &param1->name;
frost$core$String* $tmp1460 = *$tmp1459;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:249:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1461 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1462 = *$tmp1461;
frost$core$String* $tmp1463 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1462, $tmp1460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1465, $tmp1463);
frost$core$String* $tmp1466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1464, &$s1467);
frost$core$String** $tmp1468 = &param1->name;
frost$core$String* $tmp1469 = *$tmp1468;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:250:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1470 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1471 = *$tmp1470;
frost$core$String* $tmp1472 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1471, $tmp1469);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:250:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$String* $tmp1473 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1472, &$s1474);
frost$core$String* $tmp1475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1466, $tmp1473);
$fn1477 $tmp1476 = ($fn1477) ((frost$io$OutputStream*) $tmp1458)->$class->vtable[19];
frost$core$Error* $tmp1478 = $tmp1476(((frost$io$OutputStream*) $tmp1458), $tmp1475);
if ($tmp1478 == NULL) goto block152; else goto block153;
block153:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
*(&local0) = $tmp1478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$collections$ListView* $tmp1479 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1480 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1481 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1482 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1483 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1484 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block152:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$collections$ListView* $tmp1485 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1486 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block100;
block100:;
frost$core$String* $tmp1487 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1488 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1489 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1490 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:254
frost$core$Weak** $tmp1491 = &param0->compiler;
frost$core$Weak* $tmp1492 = *$tmp1491;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:254:13
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1493 = &$tmp1492->_valid;
frost$core$Bit $tmp1494 = *$tmp1493;
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block156; else goto block157;
block157:;
frost$core$Int64 $tmp1496 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1497, $tmp1496);
abort(); // unreachable
block156:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1498 = &$tmp1492->value;
frost$core$Object* $tmp1499 = *$tmp1498;
frost$core$Frost$ref$frost$core$Object$Q($tmp1499);
org$frostlang$frostc$Position* $tmp1500 = &param1->position;
org$frostlang$frostc$Position $tmp1501 = *$tmp1500;
frost$core$Error* $tmp1502 = *(&local0);
frost$core$String** $tmp1503 = &$tmp1502->message;
frost$core$String* $tmp1504 = *$tmp1503;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1499), $tmp1501, $tmp1504);
frost$core$Frost$unref$frost$core$Object$Q($tmp1499);
goto block2;
block2:;
frost$core$Error* $tmp1505 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:259
frost$core$Weak** $tmp1506 = &param1->owner;
frost$core$Weak* $tmp1507 = *$tmp1506;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:259:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1508 = &$tmp1507->_valid;
frost$core$Bit $tmp1509 = *$tmp1508;
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1511 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1512, $tmp1511);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1513 = &$tmp1507->value;
frost$core$Object* $tmp1514 = *$tmp1513;
frost$core$Frost$ref$frost$core$Object$Q($tmp1514);
org$frostlang$frostc$Type** $tmp1515 = &((org$frostlang$frostc$ClassDecl*) $tmp1514)->type;
org$frostlang$frostc$Type* $tmp1516 = *$tmp1515;
frost$core$String* $tmp1517 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1516);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$String* $tmp1518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local0) = $tmp1517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$Frost$unref$frost$core$Object$Q($tmp1514);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:260
org$frostlang$frostc$MethodDecl$Kind* $tmp1519 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1520 = *$tmp1519;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1521;
$tmp1521 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1521->value = $tmp1520;
frost$core$Int64 $tmp1522 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from HCodeGenerator.frost:260:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp1523 = &(&local2)->$rawValue;
*$tmp1523 = $tmp1522;
org$frostlang$frostc$MethodDecl$Kind $tmp1524 = *(&local2);
*(&local1) = $tmp1524;
org$frostlang$frostc$MethodDecl$Kind $tmp1525 = *(&local1);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1526;
$tmp1526 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1526->value = $tmp1525;
ITable* $tmp1527 = ((frost$core$Equatable*) $tmp1521)->$class->itable;
while ($tmp1527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[0];
frost$core$Bit $tmp1530 = $tmp1528(((frost$core$Equatable*) $tmp1521), ((frost$core$Equatable*) $tmp1526));
bool $tmp1531 = $tmp1530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1526)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1521)));
if ($tmp1531) goto block7; else goto block6;
block7:;
frost$core$String* $tmp1532 = *(&local0);
frost$core$Bit $tmp1533 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1532, &$s1534);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:260:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1535 = $tmp1533.value;
bool $tmp1536 = !$tmp1535;
frost$core$Bit $tmp1537 = (frost$core$Bit) {$tmp1536};
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:261
frost$core$String* $tmp1539 = *(&local0);
frost$core$String* $tmp1540 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1539, &$s1541);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
frost$core$String* $tmp1542 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1540;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:263
frost$core$String* $tmp1543 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
frost$core$String* $tmp1544 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1543;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:283
org$frostlang$frostc$Type** $tmp1545 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1546 = *$tmp1545;
frost$core$Bit $tmp1547 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1546);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:283:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1548 = $tmp1547.value;
bool $tmp1549 = !$tmp1548;
frost$core$Bit $tmp1550 = (frost$core$Bit) {$tmp1549};
bool $tmp1551 = $tmp1550.value;
if ($tmp1551) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:284
frost$core$Bit $tmp1552 = (frost$core$Bit) {false};
return $tmp1552;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:286
org$frostlang$frostc$Annotations** $tmp1553 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1554 = *$tmp1553;
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from HCodeGenerator.frost:286:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:127
frost$core$Int64* $tmp1555 = &$tmp1554->flags;
frost$core$Int64 $tmp1556 = *$tmp1555;
frost$core$Int64 $tmp1557 = (frost$core$Int64) {64u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:127:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1558 = $tmp1556.value;
int64_t $tmp1559 = $tmp1557.value;
int64_t $tmp1560 = $tmp1558 & $tmp1559;
frost$core$Int64 $tmp1561 = (frost$core$Int64) {$tmp1560};
frost$core$Int64 $tmp1562 = (frost$core$Int64) {0u};
int64_t $tmp1563 = $tmp1561.value;
int64_t $tmp1564 = $tmp1562.value;
bool $tmp1565 = $tmp1563 != $tmp1564;
frost$core$Bit $tmp1566 = (frost$core$Bit) {$tmp1565};
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1568 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1569 = *$tmp1568;
frost$core$Bit $tmp1570 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1569);
*(&local1) = $tmp1570;
goto block8;
block7:;
*(&local1) = $tmp1566;
goto block8;
block8:;
frost$core$Bit $tmp1571 = *(&local1);
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block9; else goto block10;
block9:;
frost$core$Weak** $tmp1573 = &param0->compiler;
frost$core$Weak* $tmp1574 = *$tmp1573;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:287:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1575 = &$tmp1574->_valid;
frost$core$Bit $tmp1576 = *$tmp1575;
bool $tmp1577 = $tmp1576.value;
if ($tmp1577) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1578 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1579, $tmp1578);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1580 = &$tmp1574->value;
frost$core$Object* $tmp1581 = *$tmp1580;
frost$core$Frost$ref$frost$core$Object$Q($tmp1581);
frost$core$Weak** $tmp1582 = &param0->compiler;
frost$core$Weak* $tmp1583 = *$tmp1582;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:287:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1584 = &$tmp1583->_valid;
frost$core$Bit $tmp1585 = *$tmp1584;
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1587 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1588, $tmp1587);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1589 = &$tmp1583->value;
frost$core$Object* $tmp1590 = *$tmp1589;
frost$core$Frost$ref$frost$core$Object$Q($tmp1590);
org$frostlang$frostc$Type** $tmp1591 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1592 = *$tmp1591;
org$frostlang$frostc$ClassDecl* $tmp1593 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1590), $tmp1592);
frost$core$Bit $tmp1594 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1581), $tmp1593);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q($tmp1590);
frost$core$Frost$unref$frost$core$Object$Q($tmp1581);
*(&local0) = $tmp1594;
goto block11;
block10:;
*(&local0) = $tmp1571;
goto block11;
block11:;
frost$core$Bit $tmp1595 = *(&local0);
*(&local2) = $tmp1595;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:292
frost$core$Bit $tmp1596 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:292:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1597 = $tmp1596.value;
bool $tmp1598 = !$tmp1597;
frost$core$Bit $tmp1599 = (frost$core$Bit) {$tmp1598};
bool $tmp1600 = $tmp1599.value;
if ($tmp1600) goto block21; else goto block22;
block21:;
*(&local3) = $tmp1599;
goto block23;
block22:;
org$frostlang$frostc$Annotations** $tmp1601 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1602 = *$tmp1601;
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from HCodeGenerator.frost:292:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:123
frost$core$Int64* $tmp1603 = &$tmp1602->flags;
frost$core$Int64 $tmp1604 = *$tmp1603;
frost$core$Int64 $tmp1605 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:123:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1606 = $tmp1604.value;
int64_t $tmp1607 = $tmp1605.value;
int64_t $tmp1608 = $tmp1606 & $tmp1607;
frost$core$Int64 $tmp1609 = (frost$core$Int64) {$tmp1608};
frost$core$Int64 $tmp1610 = (frost$core$Int64) {0u};
int64_t $tmp1611 = $tmp1609.value;
int64_t $tmp1612 = $tmp1610.value;
bool $tmp1613 = $tmp1611 != $tmp1612;
frost$core$Bit $tmp1614 = (frost$core$Bit) {$tmp1613};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:292:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1615 = $tmp1614.value;
bool $tmp1616 = !$tmp1615;
frost$core$Bit $tmp1617 = (frost$core$Bit) {$tmp1616};
bool $tmp1618 = $tmp1617.value;
if ($tmp1618) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Annotations** $tmp1619 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1620 = *$tmp1619;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from HCodeGenerator.frost:292:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp1621 = &$tmp1620->flags;
frost$core$Int64 $tmp1622 = *$tmp1621;
frost$core$Int64 $tmp1623 = (frost$core$Int64) {256u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1624 = $tmp1622.value;
int64_t $tmp1625 = $tmp1623.value;
int64_t $tmp1626 = $tmp1624 & $tmp1625;
frost$core$Int64 $tmp1627 = (frost$core$Int64) {$tmp1626};
frost$core$Int64 $tmp1628 = (frost$core$Int64) {0u};
int64_t $tmp1629 = $tmp1627.value;
int64_t $tmp1630 = $tmp1628.value;
bool $tmp1631 = $tmp1629 != $tmp1630;
frost$core$Bit $tmp1632 = (frost$core$Bit) {$tmp1631};
bool $tmp1633 = $tmp1632.value;
if ($tmp1633) goto block32; else goto block33;
block32:;
*(&local5) = $tmp1632;
goto block34;
block33:;
org$frostlang$frostc$Annotations** $tmp1634 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1635 = *$tmp1634;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:293:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp1636 = &$tmp1635->flags;
frost$core$Int64 $tmp1637 = *$tmp1636;
frost$core$Int64 $tmp1638 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1639 = $tmp1637.value;
int64_t $tmp1640 = $tmp1638.value;
int64_t $tmp1641 = $tmp1639 & $tmp1640;
frost$core$Int64 $tmp1642 = (frost$core$Int64) {$tmp1641};
frost$core$Int64 $tmp1643 = (frost$core$Int64) {0u};
int64_t $tmp1644 = $tmp1642.value;
int64_t $tmp1645 = $tmp1643.value;
bool $tmp1646 = $tmp1644 != $tmp1645;
frost$core$Bit $tmp1647 = (frost$core$Bit) {$tmp1646};
*(&local5) = $tmp1647;
goto block34;
block34:;
frost$core$Bit $tmp1648 = *(&local5);
*(&local4) = $tmp1648;
goto block29;
block28:;
*(&local4) = $tmp1617;
goto block29;
block29:;
frost$core$Bit $tmp1649 = *(&local4);
*(&local3) = $tmp1649;
goto block23;
block23:;
frost$core$Bit $tmp1650 = *(&local3);
bool $tmp1651 = $tmp1650.value;
if ($tmp1651) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1652 = (frost$core$Int64) {292u};
frost$core$String* $tmp1653 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1654 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1655, $tmp1653);
frost$core$String* $tmp1656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1654, &$s1657);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1658, $tmp1652, $tmp1656);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:294
frost$core$Bit $tmp1659 = *(&local2);
return $tmp1659;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:299
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:300
frost$io$MemoryOutputStream** $tmp1660 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1661 = *$tmp1660;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
frost$io$MemoryOutputStream** $tmp1662 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1663 = *$tmp1662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
frost$io$MemoryOutputStream** $tmp1664 = &param0->importStream;
*$tmp1664 = $tmp1661;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:301
frost$collections$HashSet** $tmp1665 = &param0->bodyImports;
frost$collections$HashSet* $tmp1666 = *$tmp1665;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
frost$collections$HashSet** $tmp1667 = &param0->imports;
frost$collections$HashSet* $tmp1668 = *$tmp1667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
frost$collections$HashSet** $tmp1669 = &param0->imports;
*$tmp1669 = $tmp1666;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:302
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1670));
frost$core$String* $tmp1671 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local1) = &$s1672;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:303
frost$core$Bit $tmp1673 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:304
frost$io$IndentedOutputStream** $tmp1675 = &param0->body;
frost$io$IndentedOutputStream* $tmp1676 = *$tmp1675;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:304:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1677 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1678 = *$tmp1677;
frost$core$String* $tmp1679 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1678, param1);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
frost$core$String* $tmp1680 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local2) = $tmp1679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1681 = *(&local2);
frost$core$Bit $tmp1682 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1681, &$s1683);
bool $tmp1684 = $tmp1682.value;
if ($tmp1684) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1686, $tmp1685);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1687 = *(&local2);
frost$core$Int64 $tmp1688 = (frost$core$Int64) {1u};
frost$core$Bit $tmp1689 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1690 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1688, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1689);
frost$core$String* $tmp1691 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1687, $tmp1690);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$String* $tmp1692 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp1693 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1694, $tmp1691);
frost$core$String* $tmp1695 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1693, &$s1696);
org$frostlang$frostc$Type** $tmp1697 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1698 = *$tmp1697;
frost$core$String* $tmp1699 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1698);
frost$core$String* $tmp1700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1695, $tmp1699);
frost$core$String* $tmp1701 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1700, &$s1702);
$fn1704 $tmp1703 = ($fn1704) ((frost$io$OutputStream*) $tmp1676)->$class->vtable[17];
frost$core$Error* $tmp1705 = $tmp1703(((frost$io$OutputStream*) $tmp1676), $tmp1701);
if ($tmp1705 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local0) = $tmp1705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$String* $tmp1706 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1707));
frost$core$String* $tmp1708 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local1) = &$s1709;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:308
frost$io$IndentedOutputStream** $tmp1710 = &param0->body;
frost$io$IndentedOutputStream* $tmp1711 = *$tmp1710;
org$frostlang$frostc$Type** $tmp1712 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1713 = *$tmp1712;
frost$core$String* $tmp1714 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1713);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:308:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$String* $tmp1715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1714, &$s1716);
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:308:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1717 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1718 = *$tmp1717;
frost$core$String* $tmp1719 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1718, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
frost$core$String* $tmp1720 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local3) = $tmp1719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1721 = *(&local3);
frost$core$Bit $tmp1722 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1721, &$s1723);
bool $tmp1724 = $tmp1722.value;
if ($tmp1724) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1725 = (frost$core$Int64) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1726, $tmp1725);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1727 = *(&local3);
frost$core$Int64 $tmp1728 = (frost$core$Int64) {1u};
frost$core$Bit $tmp1729 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1730 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1728, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1729);
frost$core$String* $tmp1731 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1727, $tmp1730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$String* $tmp1732 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp1733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1715, $tmp1731);
frost$core$String* $tmp1734 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1733, &$s1735);
$fn1737 $tmp1736 = ($fn1737) ((frost$io$OutputStream*) $tmp1711)->$class->vtable[17];
frost$core$Error* $tmp1738 = $tmp1736(((frost$io$OutputStream*) $tmp1711), $tmp1734);
if ($tmp1738 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local0) = $tmp1738;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$String* $tmp1739 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:310
org$frostlang$frostc$Annotations** $tmp1740 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1741 = *$tmp1740;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:310:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp1742 = &$tmp1741->flags;
frost$core$Int64 $tmp1743 = *$tmp1742;
frost$core$Int64 $tmp1744 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1745 = $tmp1743.value;
int64_t $tmp1746 = $tmp1744.value;
int64_t $tmp1747 = $tmp1745 & $tmp1746;
frost$core$Int64 $tmp1748 = (frost$core$Int64) {$tmp1747};
frost$core$Int64 $tmp1749 = (frost$core$Int64) {0u};
int64_t $tmp1750 = $tmp1748.value;
int64_t $tmp1751 = $tmp1749.value;
bool $tmp1752 = $tmp1750 != $tmp1751;
frost$core$Bit $tmp1753 = (frost$core$Bit) {$tmp1752};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:310:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1754 = $tmp1753.value;
bool $tmp1755 = !$tmp1754;
frost$core$Bit $tmp1756 = (frost$core$Bit) {$tmp1755};
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block19; else goto block18;
block19:;
frost$core$Weak** $tmp1758 = &param0->compiler;
frost$core$Weak* $tmp1759 = *$tmp1758;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:310:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1760 = &$tmp1759->_valid;
frost$core$Bit $tmp1761 = *$tmp1760;
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1763 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1764, $tmp1763);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1765 = &$tmp1759->value;
frost$core$Object* $tmp1766 = *$tmp1765;
frost$core$Frost$ref$frost$core$Object$Q($tmp1766);
// begin inline call to method org.frostlang.frostc.Compiler.isValueInit(m:org.frostlang.frostc.MethodDecl):frost.core.Bit from HCodeGenerator.frost:310:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3953
org$frostlang$frostc$MethodDecl$Kind* $tmp1767 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1768 = *$tmp1767;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1769;
$tmp1769 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1769->value = $tmp1768;
frost$core$Int64 $tmp1770 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Compiler.frost:3953:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp1771 = &(&local6)->$rawValue;
*$tmp1771 = $tmp1770;
org$frostlang$frostc$MethodDecl$Kind $tmp1772 = *(&local6);
*(&local5) = $tmp1772;
org$frostlang$frostc$MethodDecl$Kind $tmp1773 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1774;
$tmp1774 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1774->value = $tmp1773;
ITable* $tmp1775 = ((frost$core$Equatable*) $tmp1769)->$class->itable;
while ($tmp1775->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1775 = $tmp1775->next;
}
$fn1777 $tmp1776 = $tmp1775->methods[0];
frost$core$Bit $tmp1778 = $tmp1776(((frost$core$Equatable*) $tmp1769), ((frost$core$Equatable*) $tmp1774));
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block29; else goto block30;
block29:;
frost$core$Weak** $tmp1780 = &param1->owner;
frost$core$Weak* $tmp1781 = *$tmp1780;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Compiler.frost:3953:63
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp1782 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp1781);
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1784 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1785, $tmp1784);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1786 = &$tmp1781->value;
frost$core$Object* $tmp1787 = *$tmp1786;
frost$core$Frost$ref$frost$core$Object$Q($tmp1787);
frost$core$Bit $tmp1788 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1766), ((org$frostlang$frostc$ClassDecl*) $tmp1787));
frost$core$Frost$unref$frost$core$Object$Q($tmp1787);
*(&local4) = $tmp1788;
goto block31;
block30:;
*(&local4) = $tmp1778;
goto block31;
block31:;
frost$core$Bit $tmp1789 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1774)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1769)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:310:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1790 = $tmp1789.value;
bool $tmp1791 = !$tmp1790;
frost$core$Bit $tmp1792 = (frost$core$Bit) {$tmp1791};
bool $tmp1793 = $tmp1792.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1766);
if ($tmp1793) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:311
frost$io$IndentedOutputStream** $tmp1794 = &param0->body;
frost$io$IndentedOutputStream* $tmp1795 = *$tmp1794;
frost$core$String* $tmp1796 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:311:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
frost$core$String* $tmp1797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1796, &$s1798);
frost$core$String* $tmp1799 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1797, $tmp1799);
frost$core$String* $tmp1801 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1800, &$s1802);
$fn1804 $tmp1803 = ($fn1804) ((frost$io$OutputStream*) $tmp1795)->$class->vtable[17];
frost$core$Error* $tmp1805 = $tmp1803(((frost$io$OutputStream*) $tmp1795), $tmp1801);
if ($tmp1805 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
*(&local0) = $tmp1805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
frost$core$String* $tmp1806 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1807));
frost$core$String* $tmp1808 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local1) = &$s1809;
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:314
frost$collections$Array** $tmp1810 = &param1->parameters;
frost$collections$Array* $tmp1811 = *$tmp1810;
ITable* $tmp1812 = ((frost$collections$Iterable*) $tmp1811)->$class->itable;
while ($tmp1812->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1812 = $tmp1812->next;
}
$fn1814 $tmp1813 = $tmp1812->methods[0];
frost$collections$Iterator* $tmp1815 = $tmp1813(((frost$collections$Iterable*) $tmp1811));
goto block39;
block39:;
ITable* $tmp1816 = $tmp1815->$class->itable;
while ($tmp1816->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1816 = $tmp1816->next;
}
$fn1818 $tmp1817 = $tmp1816->methods[0];
frost$core$Bit $tmp1819 = $tmp1817($tmp1815);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block41; else goto block40;
block40:;
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1821 = $tmp1815->$class->itable;
while ($tmp1821->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1821 = $tmp1821->next;
}
$fn1823 $tmp1822 = $tmp1821->methods[1];
frost$core$Object* $tmp1824 = $tmp1822($tmp1815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1824)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1825 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1824);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:315
org$frostlang$frostc$MethodDecl$Parameter* $tmp1826 = *(&local7);
frost$core$String** $tmp1827 = &$tmp1826->name;
frost$core$String* $tmp1828 = *$tmp1827;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:315:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1829 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1830 = *$tmp1829;
frost$core$String* $tmp1831 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1830, $tmp1828);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$String* $tmp1832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1833, $tmp1831);
frost$core$String* $tmp1834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1832, &$s1835);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$String* $tmp1836 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
*(&local8) = $tmp1834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:316
frost$io$IndentedOutputStream** $tmp1837 = &param0->body;
frost$io$IndentedOutputStream* $tmp1838 = *$tmp1837;
frost$core$String* $tmp1839 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:316:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$String* $tmp1840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1839, &$s1841);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1842 = *(&local7);
org$frostlang$frostc$Type** $tmp1843 = &$tmp1842->type;
org$frostlang$frostc$Type* $tmp1844 = *$tmp1843;
frost$core$String* $tmp1845 = *(&local8);
// begin inline call to method org.frostlang.frostc.HCodeGenerator.declaration(t:org.frostlang.frostc.Type, name:frost.core.String):frost.core.String from HCodeGenerator.frost:316:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:171
frost$core$String* $tmp1846 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1844);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:171:23
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$String* $tmp1847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1846, &$s1848);
frost$core$String* $tmp1849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1847, $tmp1845);
frost$core$String* $tmp1850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1849, &$s1851);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$String* $tmp1852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1840, $tmp1850);
frost$core$String* $tmp1853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1852, &$s1854);
$fn1856 $tmp1855 = ($fn1856) ((frost$io$OutputStream*) $tmp1838)->$class->vtable[17];
frost$core$Error* $tmp1857 = $tmp1855(((frost$io$OutputStream*) $tmp1838), $tmp1853);
if ($tmp1857 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
*(&local0) = $tmp1857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$String* $tmp1858 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1824);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1859 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$String* $tmp1860 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1861));
frost$core$String* $tmp1862 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
*(&local1) = &$s1863;
frost$core$String* $tmp1864 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1824);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1865 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:319
frost$io$IndentedOutputStream** $tmp1866 = &param0->body;
frost$io$IndentedOutputStream* $tmp1867 = *$tmp1866;
$fn1869 $tmp1868 = ($fn1869) ((frost$io$OutputStream*) $tmp1867)->$class->vtable[19];
frost$core$Error* $tmp1870 = $tmp1868(((frost$io$OutputStream*) $tmp1867), &$s1871);
if ($tmp1870 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
*(&local0) = $tmp1870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$String* $tmp1872 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$String* $tmp1873 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp1874 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:322
frost$core$Int64 $tmp1875 = (frost$core$Int64) {322u};
frost$core$Error* $tmp1876 = *(&local0);
$fn1878 $tmp1877 = ($fn1878) ((frost$core$Object*) $tmp1876)->$class->vtable[0];
frost$core$String* $tmp1879 = $tmp1877(((frost$core$Object*) $tmp1876));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1880, $tmp1875, $tmp1879);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
abort(); // unreachable

}
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:328
org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:333
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:334
frost$io$IndentedOutputStream** $tmp1881 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1882 = *$tmp1881;
frost$io$MemoryOutputStream** $tmp1883 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1884 = *$tmp1883;
$fn1886 $tmp1885 = ($fn1886) ((frost$io$OutputStream*) $tmp1882)->$class->vtable[20];
frost$core$Error* $tmp1887 = $tmp1885(((frost$io$OutputStream*) $tmp1882), ((frost$core$Object*) $tmp1884));
if ($tmp1887 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
*(&local0) = $tmp1887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:335
frost$io$IndentedOutputStream** $tmp1888 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1889 = *$tmp1888;
frost$io$MemoryOutputStream** $tmp1890 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1891 = *$tmp1890;
$fn1893 $tmp1892 = ($fn1893) ((frost$io$OutputStream*) $tmp1889)->$class->vtable[20];
frost$core$Error* $tmp1894 = $tmp1892(((frost$io$OutputStream*) $tmp1889), ((frost$core$Object*) $tmp1891));
if ($tmp1894 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
*(&local0) = $tmp1894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:336
frost$io$IndentedOutputStream** $tmp1895 = &param0->out;
frost$io$IndentedOutputStream* $tmp1896 = *$tmp1895;
frost$io$MemoryOutputStream** $tmp1897 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1898 = *$tmp1897;
$fn1900 $tmp1899 = ($fn1900) ((frost$io$OutputStream*) $tmp1896)->$class->vtable[20];
frost$core$Error* $tmp1901 = $tmp1899(((frost$io$OutputStream*) $tmp1896), ((frost$core$Object*) $tmp1898));
if ($tmp1901 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local0) = $tmp1901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:337
frost$io$IndentedOutputStream** $tmp1902 = &param0->out;
frost$io$IndentedOutputStream* $tmp1903 = *$tmp1902;
frost$io$MemoryOutputStream** $tmp1904 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1905 = *$tmp1904;
$fn1907 $tmp1906 = ($fn1907) ((frost$io$OutputStream*) $tmp1903)->$class->vtable[20];
frost$core$Error* $tmp1908 = $tmp1906(((frost$io$OutputStream*) $tmp1903), ((frost$core$Object*) $tmp1905));
if ($tmp1908 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local0) = $tmp1908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:340
frost$core$Error* $tmp1909 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HCodeGenerator.frost:340:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn1911 $tmp1910 = ($fn1911) ((frost$core$Object*) $tmp1909)->$class->vtable[0];
frost$core$String* $tmp1912 = $tmp1910(((frost$core$Object*) $tmp1909));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1912);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:341
frost$core$Int64 $tmp1913 = (frost$core$Int64) {1u};
frost$core$System$exit$frost$core$Int64($tmp1913);
goto block2;
block2:;
frost$core$Error* $tmp1914 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1915 = &param0->compiler;
frost$core$Weak* $tmp1916 = *$tmp1915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
frost$io$MemoryOutputStream** $tmp1917 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1918 = *$tmp1917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
frost$io$MemoryOutputStream** $tmp1919 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1920 = *$tmp1919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
frost$io$IndentedOutputStream** $tmp1921 = &param0->types;
frost$io$IndentedOutputStream* $tmp1922 = *$tmp1921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$io$MemoryOutputStream** $tmp1923 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1924 = *$tmp1923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
frost$io$MemoryOutputStream** $tmp1925 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1926 = *$tmp1925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
frost$io$IndentedOutputStream** $tmp1927 = &param0->body;
frost$io$IndentedOutputStream* $tmp1928 = *$tmp1927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$collections$HashSet** $tmp1929 = &param0->typeImports;
frost$collections$HashSet* $tmp1930 = *$tmp1929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
frost$collections$HashSet** $tmp1931 = &param0->bodyImports;
frost$collections$HashSet* $tmp1932 = *$tmp1931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
frost$collections$HashSet** $tmp1933 = &param0->imports;
frost$collections$HashSet* $tmp1934 = *$tmp1933;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
frost$io$MemoryOutputStream** $tmp1935 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1936 = *$tmp1935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
frost$io$File** $tmp1937 = &param0->outDir;
frost$io$File* $tmp1938 = *$tmp1937;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$io$IndentedOutputStream** $tmp1939 = &param0->out;
frost$io$IndentedOutputStream* $tmp1940 = *$tmp1939;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
frost$io$IndentedOutputStream** $tmp1941 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1942 = *$tmp1941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1943 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1944 = *$tmp1943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$Weak** $tmp1945 = &param0->cCodeGen;
frost$core$Weak* $tmp1946 = *$tmp1945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
org$frostlang$frostc$CCodeGenerator** $tmp1947 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1948 = *$tmp1947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
return;

}

