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
typedef frost$core$Error* (*$fn344)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn536)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn580)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn724)(frost$core$Object*);
typedef frost$core$Error* (*$fn849)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn863)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn902)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn916)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn931)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn965)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn998)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1002)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1007)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1049)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1067)(frost$core$Object*);
typedef frost$core$Error* (*$fn1073)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1100)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1121)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1136)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1170)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1184)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1241)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1245)(frost$core$Object*);
typedef frost$core$Error* (*$fn1261)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1292)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1326)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1350)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1365)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1380)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1400)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1433)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1456)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1487)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1501)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1535)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1585)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1589)(frost$core$Object*);
typedef frost$core$Error* (*$fn1606)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1639)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1696)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1871)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1909)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1954)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1981)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1996)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2000)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2005)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn2038)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2056)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn2070)(frost$core$Object*);
typedef frost$core$Error* (*$fn2078)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn2090)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn2102)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn2114)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn2124)(frost$core$Object*);

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
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, -2912907018242783318, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, 2096479397977239101, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 559938424166824396, NULL };
static frost$core$String $s970 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, -2448813731761471205, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s1071 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 670056712733651593, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -4913817114742956656, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -5962813414700443260, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 2703935467625301937, NULL };
static frost$core$String $s1190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, -8740092864407068865, NULL };
static frost$core$String $s1218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20", 8, 1299553688233014337, NULL };
static frost$core$String $s1228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 71, 8885469816273793472, NULL };
static frost$core$String $s1235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -1023494951477965521, NULL };
static frost$core$String $s1266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -1023502648059362998, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, -8967472124348590150, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, -7438197491133939705, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, 1439842525427575854, NULL };
static frost$core$String $s1356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -2305927540240831023, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 14, 3730756510990532336, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1225697948708486459, NULL };
static frost$core$String $s1438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -5352411526554368641, NULL };
static frost$core$String $s1461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, 4622182911039583012, NULL };
static frost$core$String $s1507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3803391662366219107, NULL };
static frost$core$String $s1540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20", 122, 5922034436274910413, NULL };
static frost$core$String $s1603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, 5593648587920272924, NULL };
static frost$core$String $s1611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, 5593643090362131869, NULL };
static frost$core$String $s1636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -2374506366252631061, NULL };
static frost$core$String $s1644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 7893996714969165842, NULL };
static frost$core$String $s1824 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1837 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, -9034067459731225523, NULL };
static frost$core$String $s1863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, -5577034943728621570, NULL };
static frost$core$String $s1876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1877 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s1898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s1914 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1915 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 1751680115892408369, NULL };
static frost$core$String $s1986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1991 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 636530404172864656, NULL };
static frost$core$String $s2017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s2033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2044 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 566764192353433709, NULL };
static frost$core$String $s2062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

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
frost$core$Bit $tmp275 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp273), $tmp274);
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
frost$core$Bit $tmp304 = (frost$core$Bit) {$tmp303 != NULL};
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block60; else goto block61;
block61:;
frost$core$Int $tmp306 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s307, $tmp306, &$s308);
abort(); // unreachable
block60:;
*(&local0) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
org$frostlang$frostc$ClassDecl* $tmp309 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:104
frost$collections$HashSet** $tmp311 = &param0->imports;
frost$collections$HashSet* $tmp312 = *$tmp311;
frost$core$String* $tmp313 = *(&local1);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:104:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp314 = &$tmp312->contents;
frost$collections$HashMap* $tmp315 = *$tmp314;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp315, ((frost$collections$Key*) $tmp313), ((frost$core$Object*) ((frost$collections$Key*) $tmp313)));
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:106
frost$core$String* $tmp316 = *(&local1);
frost$core$String* $tmp317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp316, &$s318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
org$frostlang$frostc$ClassDecl* $tmp319 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp317;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:108
org$frostlang$frostc$ClassDecl* $tmp322 = *(&local2);
frost$core$String* $tmp323 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp322, &$s324);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$String* $tmp325 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local3) = $tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:109
frost$collections$HashSet** $tmp326 = &param0->imports;
frost$collections$HashSet* $tmp327 = *$tmp326;
frost$core$String* $tmp328 = *(&local3);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:109:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp329 = &$tmp327->contents;
frost$collections$HashMap* $tmp330 = *$tmp329;
frost$core$Bit $tmp331 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp330, ((frost$collections$Key*) $tmp328));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:109:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp332 = $tmp331.value;
bool $tmp333 = !$tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:110
frost$io$MemoryOutputStream** $tmp336 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp337 = *$tmp336;
frost$core$String* $tmp338 = *(&local3);
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s340, $tmp338);
frost$core$String* $tmp341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, &$s342);
$fn344 $tmp343 = ($fn344) ((frost$io$OutputStream*) $tmp337)->$class->vtable[19];
frost$core$Error* $tmp345 = $tmp343(((frost$io$OutputStream*) $tmp337), $tmp341);
if ($tmp345 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345 != NULL};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block69; else goto block70;
block70:;
frost$core$Int $tmp348 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s349, $tmp348, &$s350);
abort(); // unreachable
block69:;
*(&local0) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$String* $tmp351 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp352 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp353 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local1) = ((frost$core$String*) NULL);
goto block7;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:111
frost$collections$HashSet** $tmp354 = &param0->imports;
frost$collections$HashSet* $tmp355 = *$tmp354;
frost$core$String* $tmp356 = *(&local3);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:111:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp357 = &$tmp355->contents;
frost$collections$HashMap* $tmp358 = *$tmp357;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp358, ((frost$collections$Key*) $tmp356), ((frost$core$Object*) ((frost$collections$Key*) $tmp356)));
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:113
frost$core$String* $tmp359 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$String* $tmp360 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp361 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp363 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp359;
block38:;
frost$core$Int $tmp364 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:115:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp365 = $tmp143.value;
int64_t $tmp366 = $tmp364.value;
bool $tmp367 = $tmp365 == $tmp366;
frost$core$Bit $tmp368 = (frost$core$Bit) {$tmp367};
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:116
frost$core$Weak** $tmp370 = &param0->compiler;
frost$core$Weak* $tmp371 = *$tmp370;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:116:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp372 = &$tmp371->_valid;
frost$core$Bit $tmp373 = *$tmp372;
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block77; else goto block78;
block78:;
frost$core$Int $tmp375 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s376, $tmp375);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp377 = &$tmp371->value;
frost$core$Object* $tmp378 = *$tmp377;
frost$core$Frost$ref$frost$core$Object$Q($tmp378);
org$frostlang$frostc$ClassDecl* $tmp379 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp378), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
org$frostlang$frostc$ClassDecl* $tmp380 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local4) = $tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q($tmp378);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:117
org$frostlang$frostc$ClassDecl* $tmp381 = *(&local4);
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381 != NULL};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block79; else goto block80;
block80:;
frost$core$Int $tmp384 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s385, $tmp384);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:118
frost$core$Weak** $tmp386 = &param0->compiler;
frost$core$Weak* $tmp387 = *$tmp386;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:118:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp388 = &$tmp387->_valid;
frost$core$Bit $tmp389 = *$tmp388;
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block85; else goto block86;
block86:;
frost$core$Int $tmp391 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s392, $tmp391);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp393 = &$tmp387->value;
frost$core$Object* $tmp394 = *$tmp393;
frost$core$Frost$ref$frost$core$Object$Q($tmp394);
org$frostlang$frostc$ClassDecl* $tmp395 = *(&local4);
frost$core$Bit $tmp396 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp394), $tmp395);
bool $tmp397 = $tmp396.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp394);
if ($tmp397) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:119
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:119:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp398 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp399 = *$tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399 != NULL};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block88; else goto block89;
block89:;
frost$core$Int $tmp402 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s403, $tmp402, &$s404);
abort(); // unreachable
block88:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Int $tmp405 = (frost$core$Int) {0u};
frost$core$Object* $tmp406 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp399, $tmp405);
frost$core$String* $tmp407 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp406));
frost$core$String* $tmp408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp407, &$s409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
org$frostlang$frostc$ClassDecl* $tmp410 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp411 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp408;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:121
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:121:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp412 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp413 = *$tmp412;
frost$core$Bit $tmp414 = (frost$core$Bit) {$tmp413 != NULL};
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block91; else goto block92;
block92:;
frost$core$Int $tmp416 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s417, $tmp416, &$s418);
abort(); // unreachable
block91:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Int $tmp419 = (frost$core$Int) {0u};
frost$core$Object* $tmp420 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp413, $tmp419);
frost$core$String* $tmp421 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp420));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
org$frostlang$frostc$ClassDecl* $tmp422 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp423 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp421;
block73:;
frost$core$Int $tmp424 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:123:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp425 = $tmp143.value;
int64_t $tmp426 = $tmp424.value;
bool $tmp427 = $tmp425 == $tmp426;
frost$core$Bit $tmp428 = (frost$core$Bit) {$tmp427};
bool $tmp429 = $tmp428.value;
if ($tmp429) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:124
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:124:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp430 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp431 = *$tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431 != NULL};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block99; else goto block100;
block100:;
frost$core$Int $tmp434 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s435, $tmp434, &$s436);
abort(); // unreachable
block99:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Int $tmp437 = (frost$core$Int) {0u};
frost$core$Object* $tmp438 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp431, $tmp437);
frost$core$String** $tmp439 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp438))->name;
frost$core$String* $tmp440 = *$tmp439;
frost$core$Bit $tmp441 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp440, &$s442);
bool $tmp443 = $tmp441.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp438);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
if ($tmp443) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:125
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:125:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp444 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp445 = *$tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445 != NULL};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block102; else goto block103;
block103:;
frost$core$Int $tmp448 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s449, $tmp448, &$s450);
abort(); // unreachable
block102:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Int $tmp451 = (frost$core$Int) {1u};
frost$core$Object* $tmp452 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp445, $tmp451);
frost$core$String* $tmp453 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp452));
frost$core$String* $tmp454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp453, &$s455);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Frost$unref$frost$core$Object$Q($tmp452);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Error* $tmp456 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp454;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:127
frost$core$Weak** $tmp457 = &param0->compiler;
frost$core$Weak* $tmp458 = *$tmp457;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:127:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp459 = &$tmp458->_valid;
frost$core$Bit $tmp460 = *$tmp459;
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block106; else goto block107;
block107:;
frost$core$Int $tmp462 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s463, $tmp462);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp464 = &$tmp458->value;
frost$core$Object* $tmp465 = *$tmp464;
frost$core$Frost$ref$frost$core$Object$Q($tmp465);
org$frostlang$frostc$ClassDecl* $tmp466 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp465), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$ClassDecl* $tmp467 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local5) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q($tmp465);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:128
org$frostlang$frostc$ClassDecl* $tmp468 = *(&local5);
// begin inline call to function org.frostlang.frostc.ClassDecl.isSpecialization():frost.core.Bit from HCodeGenerator.frost:128:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp469 = &$tmp468->name;
frost$core$String* $tmp470 = *$tmp469;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
frost$core$String$Index$nullable $tmp471 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q($tmp470, &$s472);
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp471.nonnull};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block108; else goto block109;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:129
frost$core$String** $tmp475 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp476 = *$tmp475;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp477 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp478 = *$tmp477;
frost$core$String* $tmp479 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp478, $tmp476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp479, &$s481);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$String* $tmp482 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local6) = $tmp480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:130
frost$core$Weak** $tmp483 = &param0->compiler;
frost$core$Weak* $tmp484 = *$tmp483;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:130:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp485 = &$tmp484->_valid;
frost$core$Bit $tmp486 = *$tmp485;
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block116; else goto block117;
block117:;
frost$core$Int $tmp488 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s489, $tmp488);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp490 = &$tmp484->value;
frost$core$Object* $tmp491 = *$tmp490;
frost$core$Frost$ref$frost$core$Object$Q($tmp491);
org$frostlang$frostc$ClassDecl* $tmp492 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp491), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
org$frostlang$frostc$ClassDecl* $tmp493 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local7) = $tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q($tmp491);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:131
org$frostlang$frostc$ClassDecl* $tmp494 = *(&local7);
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494 != NULL};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block118; else goto block119;
block119:;
frost$core$Int $tmp497 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s498, $tmp497);
abort(); // unreachable
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:132
frost$core$Weak** $tmp499 = &param0->compiler;
frost$core$Weak* $tmp500 = *$tmp499;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:132:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp501 = &$tmp500->_valid;
frost$core$Bit $tmp502 = *$tmp501;
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block124; else goto block125;
block125:;
frost$core$Int $tmp504 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s505, $tmp504);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp506 = &$tmp500->value;
frost$core$Object* $tmp507 = *$tmp506;
frost$core$Frost$ref$frost$core$Object$Q($tmp507);
org$frostlang$frostc$ClassDecl* $tmp508 = *(&local7);
frost$core$Bit $tmp509 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp507), $tmp508);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:132:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp510 = $tmp509.value;
bool $tmp511 = !$tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp507);
if ($tmp513) goto block120; else goto block121;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:133
frost$collections$HashSet** $tmp514 = &param0->imports;
frost$collections$HashSet* $tmp515 = *$tmp514;
frost$core$String* $tmp516 = *(&local6);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:133:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp517 = &$tmp515->contents;
frost$collections$HashMap* $tmp518 = *$tmp517;
frost$core$Bit $tmp519 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp518, ((frost$collections$Key*) $tmp516));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:133:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp520 = $tmp519.value;
bool $tmp521 = !$tmp520;
frost$core$Bit $tmp522 = (frost$core$Bit) {$tmp521};
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block127; else goto block128;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:134
frost$io$MemoryOutputStream** $tmp524 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp525 = *$tmp524;
frost$core$String* $tmp526 = *(&local6);
frost$core$String* $tmp527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s528, $tmp526);
frost$core$String* $tmp529 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp527, &$s530);
frost$core$String* $tmp531 = *(&local6);
frost$core$String* $tmp532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp529, $tmp531);
frost$core$String* $tmp533 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp532, &$s534);
$fn536 $tmp535 = ($fn536) ((frost$io$OutputStream*) $tmp525)->$class->vtable[19];
frost$core$Error* $tmp537 = $tmp535(((frost$io$OutputStream*) $tmp525), $tmp533);
if ($tmp537 == NULL) goto block131; else goto block132;
block132:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537 != NULL};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block133; else goto block134;
block134:;
frost$core$Int $tmp540 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s541, $tmp540, &$s542);
abort(); // unreachable
block133:;
*(&local0) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
org$frostlang$frostc$ClassDecl* $tmp543 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp544 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp545 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block7;
block131:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:135
frost$collections$HashSet** $tmp546 = &param0->imports;
frost$collections$HashSet* $tmp547 = *$tmp546;
frost$core$String* $tmp548 = *(&local6);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:135:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp549 = &$tmp547->contents;
frost$collections$HashMap* $tmp550 = *$tmp549;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp550, ((frost$collections$Key*) $tmp548), ((frost$core$Object*) ((frost$collections$Key*) $tmp548)));
goto block128;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:137
frost$core$String* $tmp551 = *(&local6);
frost$core$String* $tmp552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp551, &$s553);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
org$frostlang$frostc$ClassDecl* $tmp554 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp555 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp556 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp557 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp552;
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:139
org$frostlang$frostc$ClassDecl* $tmp558 = *(&local7);
frost$core$String* $tmp559 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp558, &$s560);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$core$String* $tmp561 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local8) = $tmp559;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:140
frost$collections$HashSet** $tmp562 = &param0->imports;
frost$collections$HashSet* $tmp563 = *$tmp562;
frost$core$String* $tmp564 = *(&local8);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:140:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp565 = &$tmp563->contents;
frost$collections$HashMap* $tmp566 = *$tmp565;
frost$core$Bit $tmp567 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp566, ((frost$collections$Key*) $tmp564));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:140:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp568 = $tmp567.value;
bool $tmp569 = !$tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:141
frost$io$MemoryOutputStream** $tmp572 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp573 = *$tmp572;
frost$core$String* $tmp574 = *(&local8);
frost$core$String* $tmp575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s576, $tmp574);
frost$core$String* $tmp577 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp575, &$s578);
$fn580 $tmp579 = ($fn580) ((frost$io$OutputStream*) $tmp573)->$class->vtable[19];
frost$core$Error* $tmp581 = $tmp579(((frost$io$OutputStream*) $tmp573), $tmp577);
if ($tmp581 == NULL) goto block140; else goto block141;
block141:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581 != NULL};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block142; else goto block143;
block143:;
frost$core$Int $tmp584 = (frost$core$Int) {141u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s585, $tmp584, &$s586);
abort(); // unreachable
block142:;
*(&local0) = $tmp581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$String* $tmp587 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp588 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp589 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp590 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block7;
block140:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:142
frost$collections$HashSet** $tmp591 = &param0->imports;
frost$collections$HashSet* $tmp592 = *$tmp591;
frost$core$String* $tmp593 = *(&local8);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:142:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp594 = &$tmp592->contents;
frost$collections$HashMap* $tmp595 = *$tmp594;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp595, ((frost$collections$Key*) $tmp593), ((frost$core$Object*) ((frost$collections$Key*) $tmp593)));
goto block137;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:144
frost$core$String* $tmp596 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$String* $tmp597 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp598 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp599 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp600 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp601 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp596;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:146
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:146:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp602 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp603 = *$tmp602;
frost$core$Bit $tmp604 = (frost$core$Bit) {$tmp603 != NULL};
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block146; else goto block147;
block147:;
frost$core$Int $tmp606 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s607, $tmp606, &$s608);
abort(); // unreachable
block146:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Int $tmp609 = (frost$core$Int) {0u};
frost$core$Object* $tmp610 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp603, $tmp609);
frost$core$String* $tmp611 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp610));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q($tmp610);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
org$frostlang$frostc$ClassDecl* $tmp612 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp613 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp611;
block94:;
frost$core$Int $tmp614 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:148:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp615 = $tmp143.value;
int64_t $tmp616 = $tmp614.value;
bool $tmp617 = $tmp615 == $tmp616;
frost$core$Bit $tmp618 = (frost$core$Bit) {$tmp617};
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:149
frost$core$Weak** $tmp620 = &param1->genericClassParameter;
frost$core$Weak* $tmp621 = *$tmp620;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:149:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp622 = &$tmp621->_valid;
frost$core$Bit $tmp623 = *$tmp622;
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block153; else goto block154;
block154:;
frost$core$Int $tmp625 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s626, $tmp625);
abort(); // unreachable
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp627 = &$tmp621->value;
frost$core$Object* $tmp628 = *$tmp627;
frost$core$Frost$ref$frost$core$Object$Q($tmp628);
org$frostlang$frostc$Type** $tmp629 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp628)->bound;
org$frostlang$frostc$Type* $tmp630 = *$tmp629;
frost$core$String* $tmp631 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q($tmp628);
frost$core$Error* $tmp632 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp631;
block149:;
frost$core$Int $tmp633 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp634 = $tmp143.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 == $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:152
frost$core$Weak** $tmp639 = &param1->genericMethodParameter;
frost$core$Weak* $tmp640 = *$tmp639;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:152:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp641 = &$tmp640->_valid;
frost$core$Bit $tmp642 = *$tmp641;
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block160; else goto block161;
block161:;
frost$core$Int $tmp644 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s645, $tmp644);
abort(); // unreachable
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp646 = &$tmp640->value;
frost$core$Object* $tmp647 = *$tmp646;
frost$core$Frost$ref$frost$core$Object$Q($tmp647);
org$frostlang$frostc$Type** $tmp648 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp647)->bound;
org$frostlang$frostc$Type* $tmp649 = *$tmp648;
frost$core$String* $tmp650 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$Frost$unref$frost$core$Object$Q($tmp647);
frost$core$Error* $tmp651 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp650;
block156:;
frost$core$Int $tmp652 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp653 = $tmp143.value;
int64_t $tmp654 = $tmp652.value;
bool $tmp655 = $tmp653 == $tmp654;
frost$core$Bit $tmp656 = (frost$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block162; else goto block163;
block163:;
frost$core$Int $tmp658 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:154:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp659 = $tmp143.value;
int64_t $tmp660 = $tmp658.value;
bool $tmp661 = $tmp659 == $tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block162; else goto block165;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:155
frost$core$Weak** $tmp664 = &param0->compiler;
frost$core$Weak* $tmp665 = *$tmp664;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:155:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp666 = &$tmp665->_valid;
frost$core$Bit $tmp667 = *$tmp666;
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block169; else goto block170;
block170:;
frost$core$Int $tmp669 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s670, $tmp669);
abort(); // unreachable
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp671 = &$tmp665->value;
frost$core$Object* $tmp672 = *$tmp671;
frost$core$Frost$ref$frost$core$Object$Q($tmp672);
org$frostlang$frostc$Type** $tmp673 = &((org$frostlang$frostc$Compiler*) $tmp672)->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp674 = *$tmp673;
frost$core$String* $tmp675 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q($tmp672);
frost$core$Error* $tmp676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp675;
block165:;
frost$core$Int $tmp677 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:157:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp678 = $tmp143.value;
int64_t $tmp679 = $tmp677.value;
bool $tmp680 = $tmp678 == $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block171; else goto block172;
block172:;
frost$core$Int $tmp683 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:157:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp684 = $tmp143.value;
int64_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 == $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block171; else goto block174;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:158
frost$core$Weak** $tmp689 = &param0->compiler;
frost$core$Weak* $tmp690 = *$tmp689;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:158:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp691 = &$tmp690->_valid;
frost$core$Bit $tmp692 = *$tmp691;
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block178; else goto block179;
block179:;
frost$core$Int $tmp694 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s695, $tmp694);
abort(); // unreachable
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp696 = &$tmp690->value;
frost$core$Object* $tmp697 = *$tmp696;
frost$core$Frost$ref$frost$core$Object$Q($tmp697);
org$frostlang$frostc$Type** $tmp698 = &((org$frostlang$frostc$Compiler*) $tmp697)->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp699 = *$tmp698;
frost$core$String* $tmp700 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp699);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q($tmp697);
frost$core$Error* $tmp701 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp700;
block174:;
frost$core$Int $tmp702 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:160:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp703 = $tmp143.value;
int64_t $tmp704 = $tmp702.value;
bool $tmp705 = $tmp703 == $tmp704;
frost$core$Bit $tmp706 = (frost$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block180; else goto block181;
block180:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:161
frost$core$Weak** $tmp708 = &param0->compiler;
frost$core$Weak* $tmp709 = *$tmp708;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:161:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp710 = &$tmp709->_valid;
frost$core$Bit $tmp711 = *$tmp710;
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block185; else goto block186;
block186:;
frost$core$Int $tmp713 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s714, $tmp713);
abort(); // unreachable
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp715 = &$tmp709->value;
frost$core$Object* $tmp716 = *$tmp715;
frost$core$Frost$ref$frost$core$Object$Q($tmp716);
org$frostlang$frostc$ClassDecl* $tmp717 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp716), param1);
org$frostlang$frostc$Type** $tmp718 = &$tmp717->type;
org$frostlang$frostc$Type* $tmp719 = *$tmp718;
frost$core$String* $tmp720 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp719);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$Frost$unref$frost$core$Object$Q($tmp716);
frost$core$Error* $tmp721 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp720;
block181:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:164
frost$core$Int $tmp722 = (frost$core$Int) {164u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:164:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn724 $tmp723 = ($fn724) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp725 = $tmp723(((frost$core$Object*) param1));
frost$core$String* $tmp726 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s727, $tmp725);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$String* $tmp728 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp726, &$s729);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s730, $tmp722, $tmp728);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
abort(); // unreachable
block7:;
frost$core$Error* $tmp731 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:170
frost$core$Int $tmp732 = (frost$core$Int) {170u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s733, $tmp732);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp734 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$String* $tmp735 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp734, &$s736);
frost$core$String* $tmp737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp735, param2);
frost$core$String* $tmp738 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp737, &$s739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
return $tmp738;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:179
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp740 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp740, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Weak** $tmp741 = &param0->compiler;
frost$core$Weak* $tmp742 = *$tmp741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Weak** $tmp743 = &param0->compiler;
*$tmp743 = $tmp740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:180
org$frostlang$frostc$LLVMCodeGenerator** $tmp744 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp745 = *$tmp744;
// begin inline call to method org.frostlang.frostc.LLVMCodeGenerator.setCompiler(compiler:org.frostlang.frostc.Compiler) from HCodeGenerator.frost:180:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:123
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp746 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp746, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Weak** $tmp747 = &$tmp745->compiler;
frost$core$Weak* $tmp748 = *$tmp747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Weak** $tmp749 = &$tmp745->compiler;
*$tmp749 = $tmp746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp750 = &param0->outDir;
frost$io$File* $tmp751 = *$tmp750;
frost$core$String* $tmp752 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp753 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp751, $tmp752);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
return $tmp753;

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
frost$io$MemoryOutputStream** $tmp754 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp755 = *$tmp754;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:190:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp756 = &$tmp755->data;
frost$core$MutableString* $tmp757 = *$tmp756;
frost$core$MutableString$clear($tmp757);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:191
frost$io$MemoryOutputStream** $tmp758 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp759 = *$tmp758;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:191:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp760 = &$tmp759->data;
frost$core$MutableString* $tmp761 = *$tmp760;
frost$core$MutableString$clear($tmp761);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:192
frost$io$MemoryOutputStream** $tmp762 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp763 = *$tmp762;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:192:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp764 = &$tmp763->data;
frost$core$MutableString* $tmp765 = *$tmp764;
frost$core$MutableString$clear($tmp765);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:193
frost$io$MemoryOutputStream** $tmp766 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp767 = *$tmp766;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:193:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp768 = &$tmp767->data;
frost$core$MutableString* $tmp769 = *$tmp768;
frost$core$MutableString$clear($tmp769);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:194
frost$collections$HashSet** $tmp770 = &param0->typeImports;
frost$collections$HashSet* $tmp771 = *$tmp770;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:194:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp772 = &$tmp771->contents;
frost$collections$HashMap* $tmp773 = *$tmp772;
frost$collections$HashMap$clear($tmp773);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:195
frost$collections$HashSet** $tmp774 = &param0->bodyImports;
frost$collections$HashSet* $tmp775 = *$tmp774;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:195:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp776 = &$tmp775->contents;
frost$collections$HashMap* $tmp777 = *$tmp776;
frost$collections$HashMap$clear($tmp777);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:196
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:196:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp778 = &param0->outDir;
frost$io$File* $tmp779 = *$tmp778;
frost$core$String* $tmp780 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s781);
frost$io$File* $tmp782 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp779, $tmp780);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$io$File* $tmp783 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local1) = $tmp782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:197
frost$io$File* $tmp784 = *(&local1);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from HCodeGenerator.frost:197:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp785 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp784, &$s786);
frost$core$String** $tmp787 = &$tmp785->path;
frost$core$String* $tmp788 = *$tmp787;
frost$core$String* $tmp789 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp788);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$String* $tmp790 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local3) = $tmp789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp791 = *(&local3);
frost$core$Bit $tmp792 = (frost$core$Bit) {$tmp791 == NULL};
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp794 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp795 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp796 = *(&local3);
frost$io$File$init$frost$core$String($tmp795, $tmp796);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$String* $tmp797 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp795;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
goto block10;
block10:;
frost$io$File* $tmp798 = *(&local2);
frost$core$Error* $tmp799 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp798);
if ($tmp799 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Bit $tmp800 = (frost$core$Bit) {$tmp799 != NULL};
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block15; else goto block16;
block16:;
frost$core$Int $tmp802 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s803, $tmp802, &$s804);
abort(); // unreachable
block15:;
*(&local0) = $tmp799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$io$File* $tmp805 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp806 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:198
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp807 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp808 = *(&local1);
frost$core$Maybe* $tmp809 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp808);
frost$core$Int* $tmp810 = &$tmp809->$rawValue;
frost$core$Int $tmp811 = *$tmp810;
int64_t $tmp812 = $tmp811.value;
bool $tmp813 = $tmp812 == 0u;
if ($tmp813) goto block17; else goto block18;
block18:;
frost$core$Error** $tmp814 = (frost$core$Error**) ($tmp809->$data + 0);
frost$core$Error* $tmp815 = *$tmp814;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local0) = $tmp815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$io$File* $tmp816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp817 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Object** $tmp818 = (frost$core$Object**) ($tmp809->$data + 0);
frost$core$Object* $tmp819 = *$tmp818;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp807, ((frost$io$OutputStream*) $tmp819));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$io$IndentedOutputStream** $tmp820 = &param0->out;
frost$io$IndentedOutputStream* $tmp821 = *$tmp820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$io$IndentedOutputStream** $tmp822 = &param0->out;
*$tmp822 = $tmp807;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:199
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:199:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp823 = &param0->outDir;
frost$io$File* $tmp824 = *$tmp823;
frost$core$String* $tmp825 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s826);
frost$io$File* $tmp827 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp824, $tmp825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$io$File* $tmp828 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local4) = $tmp827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:200
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp829 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp830 = *(&local4);
frost$core$Maybe* $tmp831 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp830);
frost$core$Int* $tmp832 = &$tmp831->$rawValue;
frost$core$Int $tmp833 = *$tmp832;
int64_t $tmp834 = $tmp833.value;
bool $tmp835 = $tmp834 == 0u;
if ($tmp835) goto block20; else goto block21;
block21:;
frost$core$Error** $tmp836 = (frost$core$Error**) ($tmp831->$data + 0);
frost$core$Error* $tmp837 = *$tmp836;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local0) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$io$File* $tmp838 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp839 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp840 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block20:;
frost$core$Object** $tmp841 = (frost$core$Object**) ($tmp831->$data + 0);
frost$core$Object* $tmp842 = *$tmp841;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp829, ((frost$io$OutputStream*) $tmp842));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$io$IndentedOutputStream** $tmp843 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp844 = *$tmp843;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$io$IndentedOutputStream** $tmp845 = &param0->typesOut;
*$tmp845 = $tmp829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:201
frost$io$IndentedOutputStream** $tmp846 = &param0->out;
frost$io$IndentedOutputStream* $tmp847 = *$tmp846;
$fn849 $tmp848 = ($fn849) ((frost$io$OutputStream*) $tmp847)->$class->vtable[19];
frost$core$Error* $tmp850 = $tmp848(((frost$io$OutputStream*) $tmp847), &$s851);
if ($tmp850 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp850 != NULL};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block24; else goto block25;
block25:;
frost$core$Int $tmp854 = (frost$core$Int) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s855, $tmp854, &$s856);
abort(); // unreachable
block24:;
*(&local0) = $tmp850;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$io$File* $tmp857 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp858 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp859 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:202
frost$io$IndentedOutputStream** $tmp860 = &param0->out;
frost$io$IndentedOutputStream* $tmp861 = *$tmp860;
$fn863 $tmp862 = ($fn863) ((frost$io$OutputStream*) $tmp861)->$class->vtable[19];
frost$core$Error* $tmp864 = $tmp862(((frost$io$OutputStream*) $tmp861), &$s865);
if ($tmp864 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Bit $tmp866 = (frost$core$Bit) {$tmp864 != NULL};
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block28; else goto block29;
block29:;
frost$core$Int $tmp868 = (frost$core$Int) {202u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s869, $tmp868, &$s870);
abort(); // unreachable
block28:;
*(&local0) = $tmp864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$io$File* $tmp871 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp872 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp873 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:203
frost$io$IndentedOutputStream** $tmp874 = &param0->out;
frost$io$IndentedOutputStream* $tmp875 = *$tmp874;
frost$io$File* $tmp876 = *(&local4);
// begin inline call to function frost.io.File.get_name():frost.core.String from HCodeGenerator.frost:203:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp877 = &$tmp876->path;
frost$core$String* $tmp878 = *$tmp877;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp879 = frost$core$String$get_end$R$frost$core$String$Index($tmp878);
frost$core$String$Index$nullable $tmp880 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp878, &$s881, $tmp879);
*(&local6) = $tmp880;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp882 = *(&local6);
frost$core$Bit $tmp883 = (frost$core$Bit) {$tmp882.nonnull};
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block32; else goto block34;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp885 = &$tmp876->path;
frost$core$String* $tmp886 = *$tmp885;
frost$core$String** $tmp887 = &$tmp876->path;
frost$core$String* $tmp888 = *$tmp887;
frost$core$String$Index$nullable $tmp889 = *(&local6);
frost$core$String$Index $tmp890 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp888, ((frost$core$String$Index) $tmp889.value));
frost$core$Bit $tmp891 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp892 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp890, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp891);
frost$core$String* $tmp893 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp886, $tmp892);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local5) = $tmp893;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
goto block30;
block34:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp894 = &$tmp876->path;
frost$core$String* $tmp895 = *$tmp894;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local5) = $tmp895;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
goto block30;
block33:;
goto block30;
block30:;
frost$core$String* $tmp896 = *(&local5);
frost$core$String* $tmp897 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s898, $tmp896);
frost$core$String* $tmp899 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp897, &$s900);
$fn902 $tmp901 = ($fn902) ((frost$io$OutputStream*) $tmp875)->$class->vtable[19];
frost$core$Error* $tmp903 = $tmp901(((frost$io$OutputStream*) $tmp875), $tmp899);
if ($tmp903 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903 != NULL};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block37; else goto block38;
block38:;
frost$core$Int $tmp906 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s907, $tmp906, &$s908);
abort(); // unreachable
block37:;
*(&local0) = $tmp903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
frost$core$String* $tmp909 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp910 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp911 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp912 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:204
frost$io$IndentedOutputStream** $tmp913 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp914 = *$tmp913;
$fn916 $tmp915 = ($fn916) ((frost$io$OutputStream*) $tmp914)->$class->vtable[19];
frost$core$Error* $tmp917 = $tmp915(((frost$io$OutputStream*) $tmp914), &$s918);
if ($tmp917 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Bit $tmp919 = (frost$core$Bit) {$tmp917 != NULL};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block41; else goto block42;
block42:;
frost$core$Int $tmp921 = (frost$core$Int) {204u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s922, $tmp921, &$s923);
abort(); // unreachable
block41:;
*(&local0) = $tmp917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$String* $tmp924 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp925 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp926 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp927 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:205
frost$io$IndentedOutputStream** $tmp928 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp929 = *$tmp928;
$fn931 $tmp930 = ($fn931) ((frost$io$OutputStream*) $tmp929)->$class->vtable[19];
frost$core$Error* $tmp932 = $tmp930(((frost$io$OutputStream*) $tmp929), &$s933);
if ($tmp932 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Bit $tmp934 = (frost$core$Bit) {$tmp932 != NULL};
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block45; else goto block46;
block46:;
frost$core$Int $tmp936 = (frost$core$Int) {205u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s937, $tmp936, &$s938);
abort(); // unreachable
block45:;
*(&local0) = $tmp932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$String* $tmp939 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp940 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp941 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp942 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:206
frost$io$MemoryOutputStream** $tmp943 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp944 = *$tmp943;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$io$MemoryOutputStream** $tmp945 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp946 = *$tmp945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$io$MemoryOutputStream** $tmp947 = &param0->importStream;
*$tmp947 = $tmp944;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:207
frost$collections$HashSet** $tmp948 = &param0->typeImports;
frost$collections$HashSet* $tmp949 = *$tmp948;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$collections$HashSet** $tmp950 = &param0->imports;
frost$collections$HashSet* $tmp951 = *$tmp950;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$collections$HashSet** $tmp952 = &param0->imports;
*$tmp952 = $tmp949;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:208
frost$io$IndentedOutputStream** $tmp953 = &param0->types;
frost$io$IndentedOutputStream* $tmp954 = *$tmp953;
frost$core$String** $tmp955 = &param1->name;
frost$core$String* $tmp956 = *$tmp955;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:208:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp957 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp958 = *$tmp957;
frost$core$String* $tmp959 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp958, $tmp956);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$String* $tmp960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s961, $tmp959);
frost$core$String* $tmp962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp960, &$s963);
$fn965 $tmp964 = ($fn965) ((frost$io$OutputStream*) $tmp954)->$class->vtable[19];
frost$core$Error* $tmp966 = $tmp964(((frost$io$OutputStream*) $tmp954), $tmp962);
if ($tmp966 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Bit $tmp967 = (frost$core$Bit) {$tmp966 != NULL};
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block50; else goto block51;
block51:;
frost$core$Int $tmp969 = (frost$core$Int) {208u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s970, $tmp969, &$s971);
abort(); // unreachable
block50:;
*(&local0) = $tmp966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$String* $tmp972 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp973 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp974 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp975 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:209
frost$io$IndentedOutputStream** $tmp976 = &param0->types;
frost$io$IndentedOutputStream* $tmp977 = *$tmp976;
frost$core$Int* $tmp978 = &$tmp977->level;
frost$core$Int $tmp979 = *$tmp978;
frost$core$Int $tmp980 = (frost$core$Int) {1u};
int64_t $tmp981 = $tmp979.value;
int64_t $tmp982 = $tmp980.value;
int64_t $tmp983 = $tmp981 + $tmp982;
frost$core$Int $tmp984 = (frost$core$Int) {$tmp983};
frost$core$Int* $tmp985 = &$tmp977->level;
*$tmp985 = $tmp984;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:210
frost$core$Weak** $tmp986 = &param0->compiler;
frost$core$Weak* $tmp987 = *$tmp986;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:210:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp988 = &$tmp987->_valid;
frost$core$Bit $tmp989 = *$tmp988;
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block54; else goto block55;
block55:;
frost$core$Int $tmp991 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s992, $tmp991);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp993 = &$tmp987->value;
frost$core$Object* $tmp994 = *$tmp993;
frost$core$Frost$ref$frost$core$Object$Q($tmp994);
frost$collections$ListView* $tmp995 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp994), param1);
ITable* $tmp996 = ((frost$collections$Iterable*) $tmp995)->$class->itable;
while ($tmp996->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp996 = $tmp996->next;
}
$fn998 $tmp997 = $tmp996->methods[0];
frost$collections$Iterator* $tmp999 = $tmp997(((frost$collections$Iterable*) $tmp995));
goto block56;
block56:;
ITable* $tmp1000 = $tmp999->$class->itable;
while ($tmp1000->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1000 = $tmp1000->next;
}
$fn1002 $tmp1001 = $tmp1000->methods[0];
frost$core$Bit $tmp1003 = $tmp1001($tmp999);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block58; else goto block57;
block57:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp1005 = $tmp999->$class->itable;
while ($tmp1005->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1005 = $tmp1005->next;
}
$fn1007 $tmp1006 = $tmp1005->methods[1];
frost$core$Object* $tmp1008 = $tmp1006($tmp999);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1008)));
org$frostlang$frostc$FieldDecl* $tmp1009 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp1008);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:211
frost$core$Weak** $tmp1010 = &param0->compiler;
frost$core$Weak* $tmp1011 = *$tmp1010;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:211:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1012 = &$tmp1011->_valid;
frost$core$Bit $tmp1013 = *$tmp1012;
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block61; else goto block62;
block62:;
frost$core$Int $tmp1015 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1016, $tmp1015);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1017 = &$tmp1011->value;
frost$core$Object* $tmp1018 = *$tmp1017;
frost$core$Frost$ref$frost$core$Object$Q($tmp1018);
org$frostlang$frostc$FieldDecl* $tmp1019 = *(&local7);
frost$core$Bit $tmp1020 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1018), $tmp1019);
frost$core$Frost$unref$frost$core$Object$Q($tmp1018);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp1021 = *(&local7);
org$frostlang$frostc$Type** $tmp1022 = &$tmp1021->type;
org$frostlang$frostc$Type* $tmp1023 = *$tmp1022;
frost$core$Weak** $tmp1024 = &param0->compiler;
frost$core$Weak* $tmp1025 = *$tmp1024;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:212:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1026 = &$tmp1025->_valid;
frost$core$Bit $tmp1027 = *$tmp1026;
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block68; else goto block69;
block69:;
frost$core$Int $tmp1029 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1030, $tmp1029);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1031 = &$tmp1025->value;
frost$core$Object* $tmp1032 = *$tmp1031;
frost$core$Frost$ref$frost$core$Object$Q($tmp1032);
org$frostlang$frostc$Type** $tmp1033 = &((org$frostlang$frostc$Compiler*) $tmp1032)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp1034 = *$tmp1033;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from HCodeGenerator.frost:212:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1035 = &((org$frostlang$frostc$Symbol*) $tmp1023)->name;
frost$core$String* $tmp1036 = *$tmp1035;
frost$core$String** $tmp1037 = &((org$frostlang$frostc$Symbol*) $tmp1034)->name;
frost$core$String* $tmp1038 = *$tmp1037;
frost$core$Bit $tmp1039 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1036, $tmp1038);
bool $tmp1040 = $tmp1039.value;
if ($tmp1040) goto block71; else goto block72;
block71:;
org$frostlang$frostc$Type$Kind* $tmp1041 = &$tmp1023->typeKind;
org$frostlang$frostc$Type$Kind $tmp1042 = *$tmp1041;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1043;
$tmp1043 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1043->value = $tmp1042;
org$frostlang$frostc$Type$Kind* $tmp1044 = &$tmp1034->typeKind;
org$frostlang$frostc$Type$Kind $tmp1045 = *$tmp1044;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1046;
$tmp1046 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1046->value = $tmp1045;
ITable* $tmp1047 = ((frost$core$Equatable*) $tmp1043)->$class->itable;
while ($tmp1047->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1047 = $tmp1047->next;
}
$fn1049 $tmp1048 = $tmp1047->methods[0];
frost$core$Bit $tmp1050 = $tmp1048(((frost$core$Equatable*) $tmp1043), ((frost$core$Equatable*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1046)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1043)));
*(&local8) = $tmp1050;
goto block73;
block72:;
*(&local8) = $tmp1039;
goto block73;
block73:;
frost$core$Bit $tmp1051 = *(&local8);
bool $tmp1052 = $tmp1051.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1032);
if ($tmp1052) goto block63; else goto block65;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:213
frost$io$IndentedOutputStream** $tmp1053 = &param0->types;
frost$io$IndentedOutputStream* $tmp1054 = *$tmp1053;
org$frostlang$frostc$FieldDecl* $tmp1055 = *(&local7);
frost$core$String** $tmp1056 = &((org$frostlang$frostc$Symbol*) $tmp1055)->name;
frost$core$String* $tmp1057 = *$tmp1056;
frost$core$String* $tmp1058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1059, $tmp1057);
frost$core$String* $tmp1060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1058, &$s1061);
org$frostlang$frostc$LLVMCodeGenerator** $tmp1062 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1063 = *$tmp1062;
frost$core$Int $tmp1064 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int($tmp1063, param1);
frost$core$Int$wrapper* $tmp1065;
$tmp1065 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1065->value = $tmp1064;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:213:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1067 $tmp1066 = ($fn1067) ((frost$core$Object*) $tmp1065)->$class->vtable[0];
frost$core$String* $tmp1068 = $tmp1066(((frost$core$Object*) $tmp1065));
frost$core$String* $tmp1069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1060, $tmp1068);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$String* $tmp1070 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1069, &$s1071);
$fn1073 $tmp1072 = ($fn1073) ((frost$io$OutputStream*) $tmp1054)->$class->vtable[19];
frost$core$Error* $tmp1074 = $tmp1072(((frost$io$OutputStream*) $tmp1054), $tmp1070);
if ($tmp1074 == NULL) goto block75; else goto block76;
block76:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Bit $tmp1075 = (frost$core$Bit) {$tmp1074 != NULL};
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block77; else goto block78;
block78:;
frost$core$Int $tmp1077 = (frost$core$Int) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1078, $tmp1077, &$s1079);
abort(); // unreachable
block77:;
*(&local0) = $tmp1074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$core$Frost$unref$frost$core$Object$Q($tmp1008);
org$frostlang$frostc$FieldDecl* $tmp1080 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q($tmp994);
frost$core$String* $tmp1081 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1082 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1083 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1084 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
goto block64;
block65:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:216
frost$io$IndentedOutputStream** $tmp1085 = &param0->types;
frost$io$IndentedOutputStream* $tmp1086 = *$tmp1085;
org$frostlang$frostc$FieldDecl* $tmp1087 = *(&local7);
org$frostlang$frostc$Type** $tmp1088 = &$tmp1087->type;
org$frostlang$frostc$Type* $tmp1089 = *$tmp1088;
frost$core$String* $tmp1090 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1089);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:216:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$String* $tmp1091 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1090, &$s1092);
org$frostlang$frostc$FieldDecl* $tmp1093 = *(&local7);
frost$core$String** $tmp1094 = &((org$frostlang$frostc$Symbol*) $tmp1093)->name;
frost$core$String* $tmp1095 = *$tmp1094;
frost$core$String* $tmp1096 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1091, $tmp1095);
frost$core$String* $tmp1097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1096, &$s1098);
$fn1100 $tmp1099 = ($fn1100) ((frost$io$OutputStream*) $tmp1086)->$class->vtable[19];
frost$core$Error* $tmp1101 = $tmp1099(((frost$io$OutputStream*) $tmp1086), $tmp1097);
if ($tmp1101 == NULL) goto block80; else goto block81;
block81:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Bit $tmp1102 = (frost$core$Bit) {$tmp1101 != NULL};
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block82; else goto block83;
block83:;
frost$core$Int $tmp1104 = (frost$core$Int) {216u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1105, $tmp1104, &$s1106);
abort(); // unreachable
block82:;
*(&local0) = $tmp1101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q($tmp1008);
org$frostlang$frostc$FieldDecl* $tmp1107 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q($tmp994);
frost$core$String* $tmp1108 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1109 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1110 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block80:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
goto block64;
block64:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1008);
org$frostlang$frostc$FieldDecl* $tmp1112 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block56;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q($tmp994);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:219
frost$core$String** $tmp1113 = &param1->name;
frost$core$String* $tmp1114 = *$tmp1113;
frost$core$Bit $tmp1115 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1114, &$s1116);
bool $tmp1117 = $tmp1115.value;
if ($tmp1117) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:220
frost$io$IndentedOutputStream** $tmp1118 = &param0->types;
frost$io$IndentedOutputStream* $tmp1119 = *$tmp1118;
$fn1121 $tmp1120 = ($fn1121) ((frost$io$OutputStream*) $tmp1119)->$class->vtable[19];
frost$core$Error* $tmp1122 = $tmp1120(((frost$io$OutputStream*) $tmp1119), &$s1123);
if ($tmp1122 == NULL) goto block86; else goto block87;
block87:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$Bit $tmp1124 = (frost$core$Bit) {$tmp1122 != NULL};
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block88; else goto block89;
block89:;
frost$core$Int $tmp1126 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1127, $tmp1126, &$s1128);
abort(); // unreachable
block88:;
*(&local0) = $tmp1122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$String* $tmp1129 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1130 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1132 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block86:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:221
frost$io$IndentedOutputStream** $tmp1133 = &param0->types;
frost$io$IndentedOutputStream* $tmp1134 = *$tmp1133;
$fn1136 $tmp1135 = ($fn1136) ((frost$io$OutputStream*) $tmp1134)->$class->vtable[19];
frost$core$Error* $tmp1137 = $tmp1135(((frost$io$OutputStream*) $tmp1134), &$s1138);
if ($tmp1137 == NULL) goto block90; else goto block91;
block91:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Bit $tmp1139 = (frost$core$Bit) {$tmp1137 != NULL};
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block92; else goto block93;
block93:;
frost$core$Int $tmp1141 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1142, $tmp1141, &$s1143);
abort(); // unreachable
block92:;
*(&local0) = $tmp1137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$String* $tmp1144 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1145 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block90:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
goto block85;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:223
frost$io$IndentedOutputStream** $tmp1148 = &param0->types;
frost$io$IndentedOutputStream* $tmp1149 = *$tmp1148;
frost$core$Int* $tmp1150 = &$tmp1149->level;
frost$core$Int $tmp1151 = *$tmp1150;
frost$core$Int $tmp1152 = (frost$core$Int) {1u};
int64_t $tmp1153 = $tmp1151.value;
int64_t $tmp1154 = $tmp1152.value;
int64_t $tmp1155 = $tmp1153 - $tmp1154;
frost$core$Int $tmp1156 = (frost$core$Int) {$tmp1155};
frost$core$Int* $tmp1157 = &$tmp1149->level;
*$tmp1157 = $tmp1156;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:224
frost$io$IndentedOutputStream** $tmp1158 = &param0->types;
frost$io$IndentedOutputStream* $tmp1159 = *$tmp1158;
frost$core$String** $tmp1160 = &param1->name;
frost$core$String* $tmp1161 = *$tmp1160;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:224:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1162 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1163 = *$tmp1162;
frost$core$String* $tmp1164 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1163, $tmp1161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$String* $tmp1165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1166, $tmp1164);
frost$core$String* $tmp1167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1165, &$s1168);
$fn1170 $tmp1169 = ($fn1170) ((frost$io$OutputStream*) $tmp1159)->$class->vtable[19];
frost$core$Error* $tmp1171 = $tmp1169(((frost$io$OutputStream*) $tmp1159), $tmp1167);
if ($tmp1171 == NULL) goto block95; else goto block96;
block96:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Bit $tmp1172 = (frost$core$Bit) {$tmp1171 != NULL};
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block97; else goto block98;
block98:;
frost$core$Int $tmp1174 = (frost$core$Int) {224u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1175, $tmp1174, &$s1176);
abort(); // unreachable
block97:;
*(&local0) = $tmp1171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$String* $tmp1177 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1178 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1179 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:225
frost$io$IndentedOutputStream** $tmp1181 = &param0->types;
frost$io$IndentedOutputStream* $tmp1182 = *$tmp1181;
$fn1184 $tmp1183 = ($fn1184) ((frost$io$OutputStream*) $tmp1182)->$class->vtable[19];
frost$core$Error* $tmp1185 = $tmp1183(((frost$io$OutputStream*) $tmp1182), &$s1186);
if ($tmp1185 == NULL) goto block99; else goto block100;
block100:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Bit $tmp1187 = (frost$core$Bit) {$tmp1185 != NULL};
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block101; else goto block102;
block102:;
frost$core$Int $tmp1189 = (frost$core$Int) {225u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1190, $tmp1189, &$s1191);
abort(); // unreachable
block101:;
*(&local0) = $tmp1185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
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
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:226
frost$io$IndentedOutputStream** $tmp1196 = &param0->types;
frost$io$IndentedOutputStream* $tmp1197 = *$tmp1196;
frost$core$Weak** $tmp1198 = &param0->compiler;
frost$core$Weak* $tmp1199 = *$tmp1198;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1200 = &$tmp1199->_valid;
frost$core$Bit $tmp1201 = *$tmp1200;
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block105; else goto block106;
block106:;
frost$core$Int $tmp1203 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1204, $tmp1203);
abort(); // unreachable
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1205 = &$tmp1199->value;
frost$core$Object* $tmp1206 = *$tmp1205;
frost$core$Frost$ref$frost$core$Object$Q($tmp1206);
org$frostlang$frostc$Type** $tmp1207 = &((org$frostlang$frostc$Compiler*) $tmp1206)->STRING_TYPE;
org$frostlang$frostc$Type* $tmp1208 = *$tmp1207;
frost$core$String* $tmp1209 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1208);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:227:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$String* $tmp1210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1209, &$s1211);
frost$core$Weak** $tmp1212 = &param0->compiler;
frost$core$Weak* $tmp1213 = *$tmp1212;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1214 = &$tmp1213->_valid;
frost$core$Bit $tmp1215 = *$tmp1214;
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block110; else goto block111;
block111:;
frost$core$Int $tmp1217 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1218, $tmp1217);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1219 = &$tmp1213->value;
frost$core$Object* $tmp1220 = *$tmp1219;
frost$core$Frost$ref$frost$core$Object$Q($tmp1220);
org$frostlang$frostc$Type** $tmp1221 = &((org$frostlang$frostc$Compiler*) $tmp1220)->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1222 = *$tmp1221;
frost$core$String* $tmp1223 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1222);
frost$core$String* $tmp1224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1210, $tmp1223);
frost$core$String* $tmp1225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1224, &$s1226);
frost$core$String* $tmp1227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1228, $tmp1225);
frost$core$Weak** $tmp1229 = &param0->compiler;
frost$core$Weak* $tmp1230 = *$tmp1229;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:228:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1231 = &$tmp1230->_valid;
frost$core$Bit $tmp1232 = *$tmp1231;
bool $tmp1233 = $tmp1232.value;
if ($tmp1233) goto block114; else goto block115;
block115:;
frost$core$Int $tmp1234 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1235, $tmp1234);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1236 = &$tmp1230->value;
frost$core$Object* $tmp1237 = *$tmp1236;
frost$core$Frost$ref$frost$core$Object$Q($tmp1237);
frost$collections$ListView* $tmp1238 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1237), param1);
ITable* $tmp1239 = ((frost$collections$CollectionView*) $tmp1238)->$class->itable;
while ($tmp1239->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1239 = $tmp1239->next;
}
$fn1241 $tmp1240 = $tmp1239->methods[0];
frost$core$Int $tmp1242 = $tmp1240(((frost$collections$CollectionView*) $tmp1238));
frost$core$Int$wrapper* $tmp1243;
$tmp1243 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1243->value = $tmp1242;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:228:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1245 $tmp1244 = ($fn1245) ((frost$core$Object*) $tmp1243)->$class->vtable[0];
frost$core$String* $tmp1246 = $tmp1244(((frost$core$Object*) $tmp1243));
frost$core$String* $tmp1247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1248, $tmp1246);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$String* $tmp1249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1247, &$s1250);
frost$core$String* $tmp1251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1227, $tmp1249);
frost$core$String** $tmp1252 = &param1->name;
frost$core$String* $tmp1253 = *$tmp1252;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1254 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1255 = *$tmp1254;
frost$core$String* $tmp1256 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1255, $tmp1253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1256, &$s1258);
frost$core$String* $tmp1259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1251, $tmp1257);
$fn1261 $tmp1260 = ($fn1261) ((frost$io$OutputStream*) $tmp1197)->$class->vtable[19];
frost$core$Error* $tmp1262 = $tmp1260(((frost$io$OutputStream*) $tmp1197), $tmp1259);
if ($tmp1262 == NULL) goto block119; else goto block120;
block120:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Bit $tmp1263 = (frost$core$Bit) {$tmp1262 != NULL};
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block121; else goto block122;
block122:;
frost$core$Int $tmp1265 = (frost$core$Int) {226u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1266, $tmp1265, &$s1267);
abort(); // unreachable
block121:;
*(&local0) = $tmp1262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
frost$core$Frost$unref$frost$core$Object$Q($tmp1237);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q($tmp1220);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q($tmp1206);
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
block119:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
frost$core$Frost$unref$frost$core$Object$Q($tmp1237);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q($tmp1220);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q($tmp1206);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:230
frost$io$IndentedOutputStream** $tmp1272 = &param0->types;
frost$io$IndentedOutputStream* $tmp1273 = *$tmp1272;
frost$core$String** $tmp1274 = &param1->name;
frost$core$String* $tmp1275 = *$tmp1274;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1276 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1277 = *$tmp1276;
frost$core$String* $tmp1278 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1277, $tmp1275);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
frost$core$String* $tmp1279 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1280, $tmp1278);
frost$core$String* $tmp1281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1279, &$s1282);
frost$core$String** $tmp1283 = &param1->name;
frost$core$String* $tmp1284 = *$tmp1283;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1285 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1286 = *$tmp1285;
frost$core$String* $tmp1287 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1286, $tmp1284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$String* $tmp1288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1281, $tmp1287);
frost$core$String* $tmp1289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1288, &$s1290);
$fn1292 $tmp1291 = ($fn1292) ((frost$io$OutputStream*) $tmp1273)->$class->vtable[19];
frost$core$Error* $tmp1293 = $tmp1291(((frost$io$OutputStream*) $tmp1273), $tmp1289);
if ($tmp1293 == NULL) goto block125; else goto block126;
block126:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Bit $tmp1294 = (frost$core$Bit) {$tmp1293 != NULL};
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block127; else goto block128;
block128:;
frost$core$Int $tmp1296 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1297, $tmp1296, &$s1298);
abort(); // unreachable
block127:;
*(&local0) = $tmp1293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
frost$core$String* $tmp1299 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1300 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1301 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1302 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:231
frost$core$Weak** $tmp1303 = &param0->compiler;
frost$core$Weak* $tmp1304 = *$tmp1303;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:231:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1305 = &$tmp1304->_valid;
frost$core$Bit $tmp1306 = *$tmp1305;
bool $tmp1307 = $tmp1306.value;
if ($tmp1307) goto block133; else goto block134;
block134:;
frost$core$Int $tmp1308 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1309, $tmp1308);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1310 = &$tmp1304->value;
frost$core$Object* $tmp1311 = *$tmp1310;
frost$core$Frost$ref$frost$core$Object$Q($tmp1311);
frost$core$Bit $tmp1312 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1311), param1);
bool $tmp1313 = $tmp1312.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1311);
if ($tmp1313) goto block129; else goto block130;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:232
frost$io$IndentedOutputStream** $tmp1314 = &param0->types;
frost$io$IndentedOutputStream* $tmp1315 = *$tmp1314;
frost$core$String** $tmp1316 = &param1->name;
frost$core$String* $tmp1317 = *$tmp1316;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:232:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1318 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1319 = *$tmp1318;
frost$core$String* $tmp1320 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1319, $tmp1317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$String* $tmp1321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1322, $tmp1320);
frost$core$String* $tmp1323 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1321, &$s1324);
$fn1326 $tmp1325 = ($fn1326) ((frost$io$OutputStream*) $tmp1315)->$class->vtable[19];
frost$core$Error* $tmp1327 = $tmp1325(((frost$io$OutputStream*) $tmp1315), $tmp1323);
if ($tmp1327 == NULL) goto block136; else goto block137;
block137:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Bit $tmp1328 = (frost$core$Bit) {$tmp1327 != NULL};
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block138; else goto block139;
block139:;
frost$core$Int $tmp1330 = (frost$core$Int) {232u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1331, $tmp1330, &$s1332);
abort(); // unreachable
block138:;
*(&local0) = $tmp1327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
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
block136:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:233
frost$io$IndentedOutputStream** $tmp1337 = &param0->types;
frost$io$IndentedOutputStream* $tmp1338 = *$tmp1337;
frost$core$Int* $tmp1339 = &$tmp1338->level;
frost$core$Int $tmp1340 = *$tmp1339;
frost$core$Int $tmp1341 = (frost$core$Int) {1u};
int64_t $tmp1342 = $tmp1340.value;
int64_t $tmp1343 = $tmp1341.value;
int64_t $tmp1344 = $tmp1342 + $tmp1343;
frost$core$Int $tmp1345 = (frost$core$Int) {$tmp1344};
frost$core$Int* $tmp1346 = &$tmp1338->level;
*$tmp1346 = $tmp1345;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:234
frost$io$IndentedOutputStream** $tmp1347 = &param0->types;
frost$io$IndentedOutputStream* $tmp1348 = *$tmp1347;
$fn1350 $tmp1349 = ($fn1350) ((frost$io$OutputStream*) $tmp1348)->$class->vtable[19];
frost$core$Error* $tmp1351 = $tmp1349(((frost$io$OutputStream*) $tmp1348), &$s1352);
if ($tmp1351 == NULL) goto block140; else goto block141;
block141:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$Bit $tmp1353 = (frost$core$Bit) {$tmp1351 != NULL};
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block142; else goto block143;
block143:;
frost$core$Int $tmp1355 = (frost$core$Int) {234u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1356, $tmp1355, &$s1357);
abort(); // unreachable
block142:;
*(&local0) = $tmp1351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$String* $tmp1358 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1359 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1360 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1361 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block140:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:235
frost$io$IndentedOutputStream** $tmp1362 = &param0->types;
frost$io$IndentedOutputStream* $tmp1363 = *$tmp1362;
$fn1365 $tmp1364 = ($fn1365) ((frost$io$OutputStream*) $tmp1363)->$class->vtable[19];
frost$core$Error* $tmp1366 = $tmp1364(((frost$io$OutputStream*) $tmp1363), &$s1367);
if ($tmp1366 == NULL) goto block144; else goto block145;
block145:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$Bit $tmp1368 = (frost$core$Bit) {$tmp1366 != NULL};
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block146; else goto block147;
block147:;
frost$core$Int $tmp1370 = (frost$core$Int) {235u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1371, $tmp1370, &$s1372);
abort(); // unreachable
block146:;
*(&local0) = $tmp1366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$String* $tmp1373 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1374 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1375 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1376 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block144:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:236
frost$io$IndentedOutputStream** $tmp1377 = &param0->types;
frost$io$IndentedOutputStream* $tmp1378 = *$tmp1377;
$fn1380 $tmp1379 = ($fn1380) ((frost$io$OutputStream*) $tmp1378)->$class->vtable[19];
frost$core$Error* $tmp1381 = $tmp1379(((frost$io$OutputStream*) $tmp1378), &$s1382);
if ($tmp1381 == NULL) goto block148; else goto block149;
block149:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
frost$core$Bit $tmp1383 = (frost$core$Bit) {$tmp1381 != NULL};
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block150; else goto block151;
block151:;
frost$core$Int $tmp1385 = (frost$core$Int) {236u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1386, $tmp1385, &$s1387);
abort(); // unreachable
block150:;
*(&local0) = $tmp1381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
frost$core$String* $tmp1388 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1389 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1390 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1391 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block148:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:237
frost$io$IndentedOutputStream** $tmp1392 = &param0->types;
frost$io$IndentedOutputStream* $tmp1393 = *$tmp1392;
org$frostlang$frostc$Type** $tmp1394 = &param1->type;
org$frostlang$frostc$Type* $tmp1395 = *$tmp1394;
frost$core$String* $tmp1396 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1395);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:237:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$String* $tmp1397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1396, &$s1398);
$fn1400 $tmp1399 = ($fn1400) ((frost$io$OutputStream*) $tmp1393)->$class->vtable[19];
frost$core$Error* $tmp1401 = $tmp1399(((frost$io$OutputStream*) $tmp1393), $tmp1397);
if ($tmp1401 == NULL) goto block153; else goto block154;
block154:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Bit $tmp1402 = (frost$core$Bit) {$tmp1401 != NULL};
bool $tmp1403 = $tmp1402.value;
if ($tmp1403) goto block155; else goto block156;
block156:;
frost$core$Int $tmp1404 = (frost$core$Int) {237u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1405, $tmp1404, &$s1406);
abort(); // unreachable
block155:;
*(&local0) = $tmp1401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$String* $tmp1407 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1408 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1409 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block153:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:238
frost$io$IndentedOutputStream** $tmp1411 = &param0->types;
frost$io$IndentedOutputStream* $tmp1412 = *$tmp1411;
frost$core$Int* $tmp1413 = &$tmp1412->level;
frost$core$Int $tmp1414 = *$tmp1413;
frost$core$Int $tmp1415 = (frost$core$Int) {1u};
int64_t $tmp1416 = $tmp1414.value;
int64_t $tmp1417 = $tmp1415.value;
int64_t $tmp1418 = $tmp1416 - $tmp1417;
frost$core$Int $tmp1419 = (frost$core$Int) {$tmp1418};
frost$core$Int* $tmp1420 = &$tmp1412->level;
*$tmp1420 = $tmp1419;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:239
frost$io$IndentedOutputStream** $tmp1421 = &param0->types;
frost$io$IndentedOutputStream* $tmp1422 = *$tmp1421;
frost$core$String** $tmp1423 = &param1->name;
frost$core$String* $tmp1424 = *$tmp1423;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:239:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1425 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1426 = *$tmp1425;
frost$core$String* $tmp1427 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1426, $tmp1424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$String* $tmp1428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1429, $tmp1427);
frost$core$String* $tmp1430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1428, &$s1431);
$fn1433 $tmp1432 = ($fn1433) ((frost$io$OutputStream*) $tmp1422)->$class->vtable[19];
frost$core$Error* $tmp1434 = $tmp1432(((frost$io$OutputStream*) $tmp1422), $tmp1430);
if ($tmp1434 == NULL) goto block158; else goto block159;
block159:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Bit $tmp1435 = (frost$core$Bit) {$tmp1434 != NULL};
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block160; else goto block161;
block161:;
frost$core$Int $tmp1437 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1438, $tmp1437, &$s1439);
abort(); // unreachable
block160:;
*(&local0) = $tmp1434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
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
block158:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:240
frost$io$IndentedOutputStream** $tmp1444 = &param0->types;
frost$io$IndentedOutputStream* $tmp1445 = *$tmp1444;
frost$core$String** $tmp1446 = &param1->name;
frost$core$String* $tmp1447 = *$tmp1446;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:240:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1448 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1449 = *$tmp1448;
frost$core$String* $tmp1450 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1449, $tmp1447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$String* $tmp1451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1452, $tmp1450);
frost$core$String* $tmp1453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1451, &$s1454);
$fn1456 $tmp1455 = ($fn1456) ((frost$io$OutputStream*) $tmp1445)->$class->vtable[19];
frost$core$Error* $tmp1457 = $tmp1455(((frost$io$OutputStream*) $tmp1445), $tmp1453);
if ($tmp1457 == NULL) goto block163; else goto block164;
block164:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Bit $tmp1458 = (frost$core$Bit) {$tmp1457 != NULL};
bool $tmp1459 = $tmp1458.value;
if ($tmp1459) goto block165; else goto block166;
block166:;
frost$core$Int $tmp1460 = (frost$core$Int) {240u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1461, $tmp1460, &$s1462);
abort(); // unreachable
block165:;
*(&local0) = $tmp1457;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$String* $tmp1463 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1464 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1465 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1466 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block163:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:241
frost$io$IndentedOutputStream** $tmp1467 = &param0->types;
frost$io$IndentedOutputStream* $tmp1468 = *$tmp1467;
frost$core$Int* $tmp1469 = &$tmp1468->level;
frost$core$Int $tmp1470 = *$tmp1469;
frost$core$Int $tmp1471 = (frost$core$Int) {1u};
int64_t $tmp1472 = $tmp1470.value;
int64_t $tmp1473 = $tmp1471.value;
int64_t $tmp1474 = $tmp1472 + $tmp1473;
frost$core$Int $tmp1475 = (frost$core$Int) {$tmp1474};
frost$core$Int* $tmp1476 = &$tmp1468->level;
*$tmp1476 = $tmp1475;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:242
frost$io$IndentedOutputStream** $tmp1477 = &param0->types;
frost$io$IndentedOutputStream* $tmp1478 = *$tmp1477;
frost$core$String** $tmp1479 = &param1->name;
frost$core$String* $tmp1480 = *$tmp1479;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1481 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1482 = *$tmp1481;
frost$core$String* $tmp1483 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1482, $tmp1480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$String* $tmp1484 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1483, &$s1485);
$fn1487 $tmp1486 = ($fn1487) ((frost$io$OutputStream*) $tmp1478)->$class->vtable[19];
frost$core$Error* $tmp1488 = $tmp1486(((frost$io$OutputStream*) $tmp1478), $tmp1484);
if ($tmp1488 == NULL) goto block169; else goto block170;
block170:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
frost$core$Bit $tmp1489 = (frost$core$Bit) {$tmp1488 != NULL};
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block171; else goto block172;
block172:;
frost$core$Int $tmp1491 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1492, $tmp1491, &$s1493);
abort(); // unreachable
block171:;
*(&local0) = $tmp1488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$String* $tmp1494 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1495 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1496 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1497 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block169:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:243
frost$io$IndentedOutputStream** $tmp1498 = &param0->types;
frost$io$IndentedOutputStream* $tmp1499 = *$tmp1498;
$fn1501 $tmp1500 = ($fn1501) ((frost$io$OutputStream*) $tmp1499)->$class->vtable[19];
frost$core$Error* $tmp1502 = $tmp1500(((frost$io$OutputStream*) $tmp1499), &$s1503);
if ($tmp1502 == NULL) goto block173; else goto block174;
block174:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$Bit $tmp1504 = (frost$core$Bit) {$tmp1502 != NULL};
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block175; else goto block176;
block176:;
frost$core$Int $tmp1506 = (frost$core$Int) {243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1507, $tmp1506, &$s1508);
abort(); // unreachable
block175:;
*(&local0) = $tmp1502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
frost$core$String* $tmp1509 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1510 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1511 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1512 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block173:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:244
frost$io$IndentedOutputStream** $tmp1513 = &param0->types;
frost$io$IndentedOutputStream* $tmp1514 = *$tmp1513;
frost$core$Int* $tmp1515 = &$tmp1514->level;
frost$core$Int $tmp1516 = *$tmp1515;
frost$core$Int $tmp1517 = (frost$core$Int) {1u};
int64_t $tmp1518 = $tmp1516.value;
int64_t $tmp1519 = $tmp1517.value;
int64_t $tmp1520 = $tmp1518 - $tmp1519;
frost$core$Int $tmp1521 = (frost$core$Int) {$tmp1520};
frost$core$Int* $tmp1522 = &$tmp1514->level;
*$tmp1522 = $tmp1521;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:245
frost$io$IndentedOutputStream** $tmp1523 = &param0->types;
frost$io$IndentedOutputStream* $tmp1524 = *$tmp1523;
frost$core$String** $tmp1525 = &param1->name;
frost$core$String* $tmp1526 = *$tmp1525;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:245:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1527 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1528 = *$tmp1527;
frost$core$String* $tmp1529 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1528, $tmp1526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
frost$core$String* $tmp1530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1531, $tmp1529);
frost$core$String* $tmp1532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1530, &$s1533);
$fn1535 $tmp1534 = ($fn1535) ((frost$io$OutputStream*) $tmp1524)->$class->vtable[19];
frost$core$Error* $tmp1536 = $tmp1534(((frost$io$OutputStream*) $tmp1524), $tmp1532);
if ($tmp1536 == NULL) goto block178; else goto block179;
block179:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$Bit $tmp1537 = (frost$core$Bit) {$tmp1536 != NULL};
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block180; else goto block181;
block181:;
frost$core$Int $tmp1539 = (frost$core$Int) {245u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1540, $tmp1539, &$s1541);
abort(); // unreachable
block180:;
*(&local0) = $tmp1536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
frost$core$String* $tmp1542 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1543 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1544 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1545 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block178:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:246
frost$core$Weak** $tmp1546 = &param0->compiler;
frost$core$Weak* $tmp1547 = *$tmp1546;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1548 = &$tmp1547->_valid;
frost$core$Bit $tmp1549 = *$tmp1548;
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block184; else goto block185;
block185:;
frost$core$Int $tmp1551 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1552, $tmp1551);
abort(); // unreachable
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1553 = &$tmp1547->value;
frost$core$Object* $tmp1554 = *$tmp1553;
frost$core$Frost$ref$frost$core$Object$Q($tmp1554);
frost$core$Weak** $tmp1555 = &param0->compiler;
frost$core$Weak* $tmp1556 = *$tmp1555;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1557 = &$tmp1556->_valid;
frost$core$Bit $tmp1558 = *$tmp1557;
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block188; else goto block189;
block189:;
frost$core$Int $tmp1560 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1561, $tmp1560);
abort(); // unreachable
block188:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1562 = &$tmp1556->value;
frost$core$Object* $tmp1563 = *$tmp1562;
frost$core$Frost$ref$frost$core$Object$Q($tmp1563);
org$frostlang$frostc$Type** $tmp1564 = &((org$frostlang$frostc$Compiler*) $tmp1563)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp1565 = *$tmp1564;
org$frostlang$frostc$ClassDecl* $tmp1566 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1554), $tmp1565);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
org$frostlang$frostc$ClassDecl* $tmp1567 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local9) = $tmp1566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
frost$core$Frost$unref$frost$core$Object$Q($tmp1563);
frost$core$Frost$unref$frost$core$Object$Q($tmp1554);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:247
frost$core$Weak** $tmp1568 = &param0->compiler;
frost$core$Weak* $tmp1569 = *$tmp1568;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:247:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1570 = &$tmp1569->_valid;
frost$core$Bit $tmp1571 = *$tmp1570;
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block192; else goto block193;
block193:;
frost$core$Int $tmp1573 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1574, $tmp1573);
abort(); // unreachable
block192:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1575 = &$tmp1569->value;
frost$core$Object* $tmp1576 = *$tmp1575;
frost$core$Frost$ref$frost$core$Object$Q($tmp1576);
org$frostlang$frostc$ClassDecl* $tmp1577 = *(&local9);
frost$collections$ListView* $tmp1578 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1576), $tmp1577);
*(&local10) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
frost$collections$ListView* $tmp1579 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
*(&local10) = $tmp1578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
frost$core$Frost$unref$frost$core$Object$Q($tmp1576);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:248
frost$io$IndentedOutputStream** $tmp1580 = &param0->types;
frost$io$IndentedOutputStream* $tmp1581 = *$tmp1580;
frost$collections$ListView* $tmp1582 = *(&local10);
ITable* $tmp1583 = ((frost$collections$CollectionView*) $tmp1582)->$class->itable;
while ($tmp1583->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1583 = $tmp1583->next;
}
$fn1585 $tmp1584 = $tmp1583->methods[0];
frost$core$Int $tmp1586 = $tmp1584(((frost$collections$CollectionView*) $tmp1582));
frost$core$Int$wrapper* $tmp1587;
$tmp1587 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1587->value = $tmp1586;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:250:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1589 $tmp1588 = ($fn1589) ((frost$core$Object*) $tmp1587)->$class->vtable[0];
frost$core$String* $tmp1590 = $tmp1588(((frost$core$Object*) $tmp1587));
frost$core$String* $tmp1591 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1592, $tmp1590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
frost$core$String* $tmp1593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1591, &$s1594);
frost$core$String* $tmp1595 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1596, $tmp1593);
frost$core$String** $tmp1597 = &param1->name;
frost$core$String* $tmp1598 = *$tmp1597;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1599 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1600 = *$tmp1599;
frost$core$String* $tmp1601 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1600, $tmp1598);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$String* $tmp1602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1601, &$s1603);
frost$core$String* $tmp1604 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1595, $tmp1602);
$fn1606 $tmp1605 = ($fn1606) ((frost$io$OutputStream*) $tmp1581)->$class->vtable[19];
frost$core$Error* $tmp1607 = $tmp1605(((frost$io$OutputStream*) $tmp1581), $tmp1604);
if ($tmp1607 == NULL) goto block197; else goto block198;
block198:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$Bit $tmp1608 = (frost$core$Bit) {$tmp1607 != NULL};
bool $tmp1609 = $tmp1608.value;
if ($tmp1609) goto block199; else goto block200;
block200:;
frost$core$Int $tmp1610 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1611, $tmp1610, &$s1612);
abort(); // unreachable
block199:;
*(&local0) = $tmp1607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
frost$collections$ListView* $tmp1613 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1614 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1615 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1616 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1617 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1618 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block197:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:252
frost$io$IndentedOutputStream** $tmp1619 = &param0->types;
frost$io$IndentedOutputStream* $tmp1620 = *$tmp1619;
frost$core$String** $tmp1621 = &param1->name;
frost$core$String* $tmp1622 = *$tmp1621;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:252:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1623 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1624 = *$tmp1623;
frost$core$String* $tmp1625 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1624, $tmp1622);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
frost$core$String* $tmp1626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1627, $tmp1625);
frost$core$String* $tmp1628 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1626, &$s1629);
frost$core$String** $tmp1630 = &param1->name;
frost$core$String* $tmp1631 = *$tmp1630;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1632 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1633 = *$tmp1632;
frost$core$String* $tmp1634 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1633, $tmp1631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$String* $tmp1635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1634, &$s1636);
frost$core$String* $tmp1637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1628, $tmp1635);
$fn1639 $tmp1638 = ($fn1639) ((frost$io$OutputStream*) $tmp1620)->$class->vtable[19];
frost$core$Error* $tmp1640 = $tmp1638(((frost$io$OutputStream*) $tmp1620), $tmp1637);
if ($tmp1640 == NULL) goto block204; else goto block205;
block205:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Bit $tmp1641 = (frost$core$Bit) {$tmp1640 != NULL};
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block206; else goto block207;
block207:;
frost$core$Int $tmp1643 = (frost$core$Int) {252u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1644, $tmp1643, &$s1645);
abort(); // unreachable
block206:;
*(&local0) = $tmp1640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
frost$collections$ListView* $tmp1646 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1647 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1648 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1649 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1651 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block204:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
frost$collections$ListView* $tmp1652 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1653 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block130;
block130:;
frost$core$String* $tmp1654 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1655 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1656 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1657 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:257
frost$core$Weak** $tmp1658 = &param0->compiler;
frost$core$Weak* $tmp1659 = *$tmp1658;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:257:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1660 = &$tmp1659->_valid;
frost$core$Bit $tmp1661 = *$tmp1660;
bool $tmp1662 = $tmp1661.value;
if ($tmp1662) goto block210; else goto block211;
block211:;
frost$core$Int $tmp1663 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1664, $tmp1663);
abort(); // unreachable
block210:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1665 = &$tmp1659->value;
frost$core$Object* $tmp1666 = *$tmp1665;
frost$core$Frost$ref$frost$core$Object$Q($tmp1666);
org$frostlang$frostc$Position* $tmp1667 = &param1->position;
org$frostlang$frostc$Position $tmp1668 = *$tmp1667;
frost$core$Error* $tmp1669 = *(&local0);
frost$core$String** $tmp1670 = &$tmp1669->message;
frost$core$String* $tmp1671 = *$tmp1670;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1666), $tmp1668, $tmp1671);
frost$core$Frost$unref$frost$core$Object$Q($tmp1666);
goto block2;
block2:;
frost$core$Error* $tmp1672 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:262
frost$core$Weak** $tmp1673 = &param1->owner;
frost$core$Weak* $tmp1674 = *$tmp1673;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:262:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1675 = &$tmp1674->_valid;
frost$core$Bit $tmp1676 = *$tmp1675;
bool $tmp1677 = $tmp1676.value;
if ($tmp1677) goto block3; else goto block4;
block4:;
frost$core$Int $tmp1678 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1679, $tmp1678);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1680 = &$tmp1674->value;
frost$core$Object* $tmp1681 = *$tmp1680;
frost$core$Frost$ref$frost$core$Object$Q($tmp1681);
org$frostlang$frostc$Type** $tmp1682 = &((org$frostlang$frostc$ClassDecl*) $tmp1681)->type;
org$frostlang$frostc$Type* $tmp1683 = *$tmp1682;
frost$core$String* $tmp1684 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1683);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$String* $tmp1685 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
*(&local0) = $tmp1684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$Frost$unref$frost$core$Object$Q($tmp1681);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:263
org$frostlang$frostc$MethodDecl$Kind* $tmp1686 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1687 = *$tmp1686;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1688;
$tmp1688 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1688->value = $tmp1687;
frost$core$Int $tmp1689 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from HCodeGenerator.frost:263:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1690 = &(&local2)->$rawValue;
*$tmp1690 = $tmp1689;
org$frostlang$frostc$MethodDecl$Kind $tmp1691 = *(&local2);
*(&local1) = $tmp1691;
org$frostlang$frostc$MethodDecl$Kind $tmp1692 = *(&local1);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1693;
$tmp1693 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1693->value = $tmp1692;
ITable* $tmp1694 = ((frost$core$Equatable*) $tmp1688)->$class->itable;
while ($tmp1694->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1694 = $tmp1694->next;
}
$fn1696 $tmp1695 = $tmp1694->methods[0];
frost$core$Bit $tmp1697 = $tmp1695(((frost$core$Equatable*) $tmp1688), ((frost$core$Equatable*) $tmp1693));
bool $tmp1698 = $tmp1697.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1693)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1688)));
if ($tmp1698) goto block7; else goto block6;
block7:;
frost$core$String* $tmp1699 = *(&local0);
frost$core$Bit $tmp1700 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1699, &$s1701);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:263:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1702 = $tmp1700.value;
bool $tmp1703 = !$tmp1702;
frost$core$Bit $tmp1704 = (frost$core$Bit) {$tmp1703};
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:264
frost$core$String* $tmp1706 = *(&local0);
frost$core$String* $tmp1707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1706, &$s1708);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$String* $tmp1709 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1707;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:266
frost$core$String* $tmp1710 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
frost$core$String* $tmp1711 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1710;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:286
org$frostlang$frostc$Type** $tmp1712 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1713 = *$tmp1712;
frost$core$Bit $tmp1714 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1713);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:286:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1715 = $tmp1714.value;
bool $tmp1716 = !$tmp1715;
frost$core$Bit $tmp1717 = (frost$core$Bit) {$tmp1716};
bool $tmp1718 = $tmp1717.value;
if ($tmp1718) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:287
frost$core$Bit $tmp1719 = (frost$core$Bit) {false};
return $tmp1719;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:289
org$frostlang$frostc$Annotations** $tmp1720 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1721 = *$tmp1720;
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from HCodeGenerator.frost:289:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
frost$core$Int* $tmp1722 = &$tmp1721->flags;
frost$core$Int $tmp1723 = *$tmp1722;
frost$core$Int $tmp1724 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1725 = $tmp1723.value;
int64_t $tmp1726 = $tmp1724.value;
int64_t $tmp1727 = $tmp1725 & $tmp1726;
frost$core$Int $tmp1728 = (frost$core$Int) {$tmp1727};
frost$core$Int $tmp1729 = (frost$core$Int) {0u};
int64_t $tmp1730 = $tmp1728.value;
int64_t $tmp1731 = $tmp1729.value;
bool $tmp1732 = $tmp1730 != $tmp1731;
frost$core$Bit $tmp1733 = (frost$core$Bit) {$tmp1732};
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1735 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1736 = *$tmp1735;
frost$core$Bit $tmp1737 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1736);
*(&local1) = $tmp1737;
goto block8;
block7:;
*(&local1) = $tmp1733;
goto block8;
block8:;
frost$core$Bit $tmp1738 = *(&local1);
bool $tmp1739 = $tmp1738.value;
if ($tmp1739) goto block9; else goto block10;
block9:;
frost$core$Weak** $tmp1740 = &param0->compiler;
frost$core$Weak* $tmp1741 = *$tmp1740;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1742 = &$tmp1741->_valid;
frost$core$Bit $tmp1743 = *$tmp1742;
bool $tmp1744 = $tmp1743.value;
if ($tmp1744) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1745 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1746, $tmp1745);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1747 = &$tmp1741->value;
frost$core$Object* $tmp1748 = *$tmp1747;
frost$core$Frost$ref$frost$core$Object$Q($tmp1748);
frost$core$Weak** $tmp1749 = &param0->compiler;
frost$core$Weak* $tmp1750 = *$tmp1749;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1751 = &$tmp1750->_valid;
frost$core$Bit $tmp1752 = *$tmp1751;
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1754 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1755, $tmp1754);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1756 = &$tmp1750->value;
frost$core$Object* $tmp1757 = *$tmp1756;
frost$core$Frost$ref$frost$core$Object$Q($tmp1757);
org$frostlang$frostc$Type** $tmp1758 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1759 = *$tmp1758;
org$frostlang$frostc$ClassDecl* $tmp1760 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1757), $tmp1759);
frost$core$Bit $tmp1761 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1748), $tmp1760);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$core$Frost$unref$frost$core$Object$Q($tmp1757);
frost$core$Frost$unref$frost$core$Object$Q($tmp1748);
*(&local0) = $tmp1761;
goto block11;
block10:;
*(&local0) = $tmp1738;
goto block11;
block11:;
frost$core$Bit $tmp1762 = *(&local0);
*(&local2) = $tmp1762;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:295
frost$core$Bit $tmp1763 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1764 = $tmp1763.value;
bool $tmp1765 = !$tmp1764;
frost$core$Bit $tmp1766 = (frost$core$Bit) {$tmp1765};
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block21; else goto block22;
block21:;
*(&local3) = $tmp1766;
goto block23;
block22:;
org$frostlang$frostc$Annotations** $tmp1768 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1769 = *$tmp1768;
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from HCodeGenerator.frost:295:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
frost$core$Int* $tmp1770 = &$tmp1769->flags;
frost$core$Int $tmp1771 = *$tmp1770;
frost$core$Int $tmp1772 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1773 = $tmp1771.value;
int64_t $tmp1774 = $tmp1772.value;
int64_t $tmp1775 = $tmp1773 & $tmp1774;
frost$core$Int $tmp1776 = (frost$core$Int) {$tmp1775};
frost$core$Int $tmp1777 = (frost$core$Int) {0u};
int64_t $tmp1778 = $tmp1776.value;
int64_t $tmp1779 = $tmp1777.value;
bool $tmp1780 = $tmp1778 != $tmp1779;
frost$core$Bit $tmp1781 = (frost$core$Bit) {$tmp1780};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1782 = $tmp1781.value;
bool $tmp1783 = !$tmp1782;
frost$core$Bit $tmp1784 = (frost$core$Bit) {$tmp1783};
bool $tmp1785 = $tmp1784.value;
if ($tmp1785) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Annotations** $tmp1786 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1787 = *$tmp1786;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from HCodeGenerator.frost:295:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp1788 = &$tmp1787->flags;
frost$core$Int $tmp1789 = *$tmp1788;
frost$core$Int $tmp1790 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1791 = $tmp1789.value;
int64_t $tmp1792 = $tmp1790.value;
int64_t $tmp1793 = $tmp1791 & $tmp1792;
frost$core$Int $tmp1794 = (frost$core$Int) {$tmp1793};
frost$core$Int $tmp1795 = (frost$core$Int) {0u};
int64_t $tmp1796 = $tmp1794.value;
int64_t $tmp1797 = $tmp1795.value;
bool $tmp1798 = $tmp1796 != $tmp1797;
frost$core$Bit $tmp1799 = (frost$core$Bit) {$tmp1798};
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block32; else goto block33;
block32:;
*(&local5) = $tmp1799;
goto block34;
block33:;
org$frostlang$frostc$Annotations** $tmp1801 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1802 = *$tmp1801;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:296:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp1803 = &$tmp1802->flags;
frost$core$Int $tmp1804 = *$tmp1803;
frost$core$Int $tmp1805 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1806 = $tmp1804.value;
int64_t $tmp1807 = $tmp1805.value;
int64_t $tmp1808 = $tmp1806 & $tmp1807;
frost$core$Int $tmp1809 = (frost$core$Int) {$tmp1808};
frost$core$Int $tmp1810 = (frost$core$Int) {0u};
int64_t $tmp1811 = $tmp1809.value;
int64_t $tmp1812 = $tmp1810.value;
bool $tmp1813 = $tmp1811 != $tmp1812;
frost$core$Bit $tmp1814 = (frost$core$Bit) {$tmp1813};
*(&local5) = $tmp1814;
goto block34;
block34:;
frost$core$Bit $tmp1815 = *(&local5);
*(&local4) = $tmp1815;
goto block29;
block28:;
*(&local4) = $tmp1784;
goto block29;
block29:;
frost$core$Bit $tmp1816 = *(&local4);
*(&local3) = $tmp1816;
goto block23;
block23:;
frost$core$Bit $tmp1817 = *(&local3);
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1819 = (frost$core$Int) {295u};
frost$core$String* $tmp1820 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1822, $tmp1820);
frost$core$String* $tmp1823 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1821, &$s1824);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1825, $tmp1819, $tmp1823);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:297
frost$core$Bit $tmp1826 = *(&local2);
return $tmp1826;

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
frost$io$MemoryOutputStream** $tmp1827 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1828 = *$tmp1827;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$io$MemoryOutputStream** $tmp1829 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1830 = *$tmp1829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$io$MemoryOutputStream** $tmp1831 = &param0->importStream;
*$tmp1831 = $tmp1828;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:304
frost$collections$HashSet** $tmp1832 = &param0->bodyImports;
frost$collections$HashSet* $tmp1833 = *$tmp1832;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$collections$HashSet** $tmp1834 = &param0->imports;
frost$collections$HashSet* $tmp1835 = *$tmp1834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$collections$HashSet** $tmp1836 = &param0->imports;
*$tmp1836 = $tmp1833;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:305
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1837));
frost$core$String* $tmp1838 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local1) = &$s1839;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:306
frost$core$Bit $tmp1840 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:307
frost$io$IndentedOutputStream** $tmp1842 = &param0->body;
frost$io$IndentedOutputStream* $tmp1843 = *$tmp1842;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:307:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1844 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1845 = *$tmp1844;
frost$core$String* $tmp1846 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1845, param1);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$String* $tmp1847 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local2) = $tmp1846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1848 = *(&local2);
frost$core$Bit $tmp1849 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1848, &$s1850);
bool $tmp1851 = $tmp1849.value;
if ($tmp1851) goto block7; else goto block8;
block8:;
frost$core$Int $tmp1852 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1853, $tmp1852);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1854 = *(&local2);
frost$core$Int $tmp1855 = (frost$core$Int) {1u};
frost$core$Bit $tmp1856 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1857 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1855, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1856);
frost$core$String* $tmp1858 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp1854, $tmp1857);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$String* $tmp1859 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp1860 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1861, $tmp1858);
frost$core$String* $tmp1862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1860, &$s1863);
org$frostlang$frostc$Type** $tmp1864 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1865 = *$tmp1864;
frost$core$String* $tmp1866 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1865);
frost$core$String* $tmp1867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1862, $tmp1866);
frost$core$String* $tmp1868 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1867, &$s1869);
$fn1871 $tmp1870 = ($fn1871) ((frost$io$OutputStream*) $tmp1843)->$class->vtable[17];
frost$core$Error* $tmp1872 = $tmp1870(((frost$io$OutputStream*) $tmp1843), $tmp1868);
if ($tmp1872 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$core$Bit $tmp1873 = (frost$core$Bit) {$tmp1872 != NULL};
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block11; else goto block12;
block12:;
frost$core$Int $tmp1875 = (frost$core$Int) {307u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1876, $tmp1875, &$s1877);
abort(); // unreachable
block11:;
*(&local0) = $tmp1872;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$String* $tmp1878 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1879));
frost$core$String* $tmp1880 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
*(&local1) = &$s1881;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:311
frost$io$IndentedOutputStream** $tmp1882 = &param0->body;
frost$io$IndentedOutputStream* $tmp1883 = *$tmp1882;
org$frostlang$frostc$Type** $tmp1884 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1885 = *$tmp1884;
frost$core$String* $tmp1886 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1885);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$String* $tmp1887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1886, &$s1888);
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:311:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1889 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1890 = *$tmp1889;
frost$core$String* $tmp1891 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1890, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$String* $tmp1892 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local3) = $tmp1891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1893 = *(&local3);
frost$core$Bit $tmp1894 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1893, &$s1895);
bool $tmp1896 = $tmp1894.value;
if ($tmp1896) goto block15; else goto block16;
block16:;
frost$core$Int $tmp1897 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1898, $tmp1897);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1899 = *(&local3);
frost$core$Int $tmp1900 = (frost$core$Int) {1u};
frost$core$Bit $tmp1901 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1902 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1900, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1901);
frost$core$String* $tmp1903 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp1899, $tmp1902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$String* $tmp1904 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp1905 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1887, $tmp1903);
frost$core$String* $tmp1906 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1905, &$s1907);
$fn1909 $tmp1908 = ($fn1909) ((frost$io$OutputStream*) $tmp1883)->$class->vtable[17];
frost$core$Error* $tmp1910 = $tmp1908(((frost$io$OutputStream*) $tmp1883), $tmp1906);
if ($tmp1910 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Bit $tmp1911 = (frost$core$Bit) {$tmp1910 != NULL};
bool $tmp1912 = $tmp1911.value;
if ($tmp1912) goto block19; else goto block20;
block20:;
frost$core$Int $tmp1913 = (frost$core$Int) {311u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1914, $tmp1913, &$s1915);
abort(); // unreachable
block19:;
*(&local0) = $tmp1910;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$String* $tmp1916 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:313
org$frostlang$frostc$Annotations** $tmp1917 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1918 = *$tmp1917;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:313:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp1919 = &$tmp1918->flags;
frost$core$Int $tmp1920 = *$tmp1919;
frost$core$Int $tmp1921 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1922 = $tmp1920.value;
int64_t $tmp1923 = $tmp1921.value;
int64_t $tmp1924 = $tmp1922 & $tmp1923;
frost$core$Int $tmp1925 = (frost$core$Int) {$tmp1924};
frost$core$Int $tmp1926 = (frost$core$Int) {0u};
int64_t $tmp1927 = $tmp1925.value;
int64_t $tmp1928 = $tmp1926.value;
bool $tmp1929 = $tmp1927 != $tmp1928;
frost$core$Bit $tmp1930 = (frost$core$Bit) {$tmp1929};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1931 = $tmp1930.value;
bool $tmp1932 = !$tmp1931;
frost$core$Bit $tmp1933 = (frost$core$Bit) {$tmp1932};
bool $tmp1934 = $tmp1933.value;
if ($tmp1934) goto block23; else goto block22;
block23:;
frost$core$Weak** $tmp1935 = &param0->compiler;
frost$core$Weak* $tmp1936 = *$tmp1935;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:313:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1937 = &$tmp1936->_valid;
frost$core$Bit $tmp1938 = *$tmp1937;
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1940 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1941, $tmp1940);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1942 = &$tmp1936->value;
frost$core$Object* $tmp1943 = *$tmp1942;
frost$core$Frost$ref$frost$core$Object$Q($tmp1943);
// begin inline call to method org.frostlang.frostc.Compiler.isValueInit(m:org.frostlang.frostc.MethodDecl):frost.core.Bit from HCodeGenerator.frost:313:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3943
org$frostlang$frostc$MethodDecl$Kind* $tmp1944 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1945 = *$tmp1944;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1946;
$tmp1946 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1946->value = $tmp1945;
frost$core$Int $tmp1947 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Compiler.frost:3943:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1948 = &(&local6)->$rawValue;
*$tmp1948 = $tmp1947;
org$frostlang$frostc$MethodDecl$Kind $tmp1949 = *(&local6);
*(&local5) = $tmp1949;
org$frostlang$frostc$MethodDecl$Kind $tmp1950 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1951;
$tmp1951 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1951->value = $tmp1950;
ITable* $tmp1952 = ((frost$core$Equatable*) $tmp1946)->$class->itable;
while ($tmp1952->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1952 = $tmp1952->next;
}
$fn1954 $tmp1953 = $tmp1952->methods[0];
frost$core$Bit $tmp1955 = $tmp1953(((frost$core$Equatable*) $tmp1946), ((frost$core$Equatable*) $tmp1951));
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block33; else goto block34;
block33:;
frost$core$Weak** $tmp1957 = &param1->owner;
frost$core$Weak* $tmp1958 = *$tmp1957;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Compiler.frost:3943:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp1959 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp1958);
bool $tmp1960 = $tmp1959.value;
if ($tmp1960) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1961 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1962, $tmp1961);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1963 = &$tmp1958->value;
frost$core$Object* $tmp1964 = *$tmp1963;
frost$core$Frost$ref$frost$core$Object$Q($tmp1964);
frost$core$Bit $tmp1965 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1943), ((org$frostlang$frostc$ClassDecl*) $tmp1964));
frost$core$Frost$unref$frost$core$Object$Q($tmp1964);
*(&local4) = $tmp1965;
goto block35;
block34:;
*(&local4) = $tmp1955;
goto block35;
block35:;
frost$core$Bit $tmp1966 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1951)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1946)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1967 = $tmp1966.value;
bool $tmp1968 = !$tmp1967;
frost$core$Bit $tmp1969 = (frost$core$Bit) {$tmp1968};
bool $tmp1970 = $tmp1969.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1943);
if ($tmp1970) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:314
frost$io$IndentedOutputStream** $tmp1971 = &param0->body;
frost$io$IndentedOutputStream* $tmp1972 = *$tmp1971;
frost$core$String* $tmp1973 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:314:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
frost$core$String* $tmp1974 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1973, &$s1975);
frost$core$String* $tmp1976 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1977 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1974, $tmp1976);
frost$core$String* $tmp1978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1977, &$s1979);
$fn1981 $tmp1980 = ($fn1981) ((frost$io$OutputStream*) $tmp1972)->$class->vtable[17];
frost$core$Error* $tmp1982 = $tmp1980(((frost$io$OutputStream*) $tmp1972), $tmp1978);
if ($tmp1982 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Bit $tmp1983 = (frost$core$Bit) {$tmp1982 != NULL};
bool $tmp1984 = $tmp1983.value;
if ($tmp1984) goto block43; else goto block44;
block44:;
frost$core$Int $tmp1985 = (frost$core$Int) {314u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1986, $tmp1985, &$s1987);
abort(); // unreachable
block43:;
*(&local0) = $tmp1982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
frost$core$String* $tmp1988 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:315
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1989));
frost$core$String* $tmp1990 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local1) = &$s1991;
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:317
frost$collections$Array** $tmp1992 = &param1->parameters;
frost$collections$Array* $tmp1993 = *$tmp1992;
ITable* $tmp1994 = ((frost$collections$Iterable*) $tmp1993)->$class->itable;
while ($tmp1994->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1994 = $tmp1994->next;
}
$fn1996 $tmp1995 = $tmp1994->methods[0];
frost$collections$Iterator* $tmp1997 = $tmp1995(((frost$collections$Iterable*) $tmp1993));
goto block45;
block45:;
ITable* $tmp1998 = $tmp1997->$class->itable;
while ($tmp1998->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1998 = $tmp1998->next;
}
$fn2000 $tmp1999 = $tmp1998->methods[0];
frost$core$Bit $tmp2001 = $tmp1999($tmp1997);
bool $tmp2002 = $tmp2001.value;
if ($tmp2002) goto block47; else goto block46;
block46:;
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp2003 = $tmp1997->$class->itable;
while ($tmp2003->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2003 = $tmp2003->next;
}
$fn2005 $tmp2004 = $tmp2003->methods[1];
frost$core$Object* $tmp2006 = $tmp2004($tmp1997);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp2006)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2007 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp2006);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:318
org$frostlang$frostc$MethodDecl$Parameter* $tmp2008 = *(&local7);
frost$core$String** $tmp2009 = &$tmp2008->name;
frost$core$String* $tmp2010 = *$tmp2009;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:318:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp2011 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp2012 = *$tmp2011;
frost$core$String* $tmp2013 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp2012, $tmp2010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$String* $tmp2014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2015, $tmp2013);
frost$core$String* $tmp2016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2014, &$s2017);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$String* $tmp2018 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
*(&local8) = $tmp2016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:319
frost$io$IndentedOutputStream** $tmp2019 = &param0->body;
frost$io$IndentedOutputStream* $tmp2020 = *$tmp2019;
frost$core$String* $tmp2021 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:319:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
frost$core$String* $tmp2022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2021, &$s2023);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2024 = *(&local7);
org$frostlang$frostc$Type** $tmp2025 = &$tmp2024->type;
org$frostlang$frostc$Type* $tmp2026 = *$tmp2025;
frost$core$String* $tmp2027 = *(&local8);
// begin inline call to method org.frostlang.frostc.HCodeGenerator.declaration(t:org.frostlang.frostc.Type, name:frost.core.String):frost.core.String from HCodeGenerator.frost:319:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp2028 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2026);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$String* $tmp2029 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2028, &$s2030);
frost$core$String* $tmp2031 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2029, $tmp2027);
frost$core$String* $tmp2032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2031, &$s2033);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$String* $tmp2034 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2022, $tmp2032);
frost$core$String* $tmp2035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2034, &$s2036);
$fn2038 $tmp2037 = ($fn2038) ((frost$io$OutputStream*) $tmp2020)->$class->vtable[17];
frost$core$Error* $tmp2039 = $tmp2037(((frost$io$OutputStream*) $tmp2020), $tmp2035);
if ($tmp2039 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
frost$core$Bit $tmp2040 = (frost$core$Bit) {$tmp2039 != NULL};
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block54; else goto block55;
block55:;
frost$core$Int $tmp2042 = (frost$core$Int) {319u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2043, $tmp2042, &$s2044);
abort(); // unreachable
block54:;
*(&local0) = $tmp2039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
frost$core$String* $tmp2045 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2006);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2046 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
frost$core$String* $tmp2047 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2048));
frost$core$String* $tmp2049 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
*(&local1) = &$s2050;
frost$core$String* $tmp2051 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2006);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2052 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block45;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:322
frost$io$IndentedOutputStream** $tmp2053 = &param0->body;
frost$io$IndentedOutputStream* $tmp2054 = *$tmp2053;
$fn2056 $tmp2055 = ($fn2056) ((frost$io$OutputStream*) $tmp2054)->$class->vtable[19];
frost$core$Error* $tmp2057 = $tmp2055(((frost$io$OutputStream*) $tmp2054), &$s2058);
if ($tmp2057 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Bit $tmp2059 = (frost$core$Bit) {$tmp2057 != NULL};
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block58; else goto block59;
block59:;
frost$core$Int $tmp2061 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2062, $tmp2061, &$s2063);
abort(); // unreachable
block58:;
*(&local0) = $tmp2057;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$String* $tmp2064 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$String* $tmp2065 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2066 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:325
frost$core$Int $tmp2067 = (frost$core$Int) {325u};
frost$core$Error* $tmp2068 = *(&local0);
$fn2070 $tmp2069 = ($fn2070) ((frost$core$Object*) $tmp2068)->$class->vtable[0];
frost$core$String* $tmp2071 = $tmp2069(((frost$core$Object*) $tmp2068));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2072, $tmp2067, $tmp2071);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
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
frost$io$IndentedOutputStream** $tmp2073 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp2074 = *$tmp2073;
frost$io$MemoryOutputStream** $tmp2075 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp2076 = *$tmp2075;
$fn2078 $tmp2077 = ($fn2078) ((frost$io$OutputStream*) $tmp2074)->$class->vtable[20];
frost$core$Error* $tmp2079 = $tmp2077(((frost$io$OutputStream*) $tmp2074), ((frost$core$Object*) $tmp2076));
if ($tmp2079 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
frost$core$Bit $tmp2080 = (frost$core$Bit) {$tmp2079 != NULL};
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block5; else goto block6;
block6:;
frost$core$Int $tmp2082 = (frost$core$Int) {337u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2083, $tmp2082, &$s2084);
abort(); // unreachable
block5:;
*(&local0) = $tmp2079;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:338
frost$io$IndentedOutputStream** $tmp2085 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp2086 = *$tmp2085;
frost$io$MemoryOutputStream** $tmp2087 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp2088 = *$tmp2087;
$fn2090 $tmp2089 = ($fn2090) ((frost$io$OutputStream*) $tmp2086)->$class->vtable[20];
frost$core$Error* $tmp2091 = $tmp2089(((frost$io$OutputStream*) $tmp2086), ((frost$core$Object*) $tmp2088));
if ($tmp2091 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
frost$core$Bit $tmp2092 = (frost$core$Bit) {$tmp2091 != NULL};
bool $tmp2093 = $tmp2092.value;
if ($tmp2093) goto block9; else goto block10;
block10:;
frost$core$Int $tmp2094 = (frost$core$Int) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2095, $tmp2094, &$s2096);
abort(); // unreachable
block9:;
*(&local0) = $tmp2091;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:339
frost$io$IndentedOutputStream** $tmp2097 = &param0->out;
frost$io$IndentedOutputStream* $tmp2098 = *$tmp2097;
frost$io$MemoryOutputStream** $tmp2099 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp2100 = *$tmp2099;
$fn2102 $tmp2101 = ($fn2102) ((frost$io$OutputStream*) $tmp2098)->$class->vtable[20];
frost$core$Error* $tmp2103 = $tmp2101(((frost$io$OutputStream*) $tmp2098), ((frost$core$Object*) $tmp2100));
if ($tmp2103 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
frost$core$Bit $tmp2104 = (frost$core$Bit) {$tmp2103 != NULL};
bool $tmp2105 = $tmp2104.value;
if ($tmp2105) goto block13; else goto block14;
block14:;
frost$core$Int $tmp2106 = (frost$core$Int) {339u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2107, $tmp2106, &$s2108);
abort(); // unreachable
block13:;
*(&local0) = $tmp2103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:340
frost$io$IndentedOutputStream** $tmp2109 = &param0->out;
frost$io$IndentedOutputStream* $tmp2110 = *$tmp2109;
frost$io$MemoryOutputStream** $tmp2111 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp2112 = *$tmp2111;
$fn2114 $tmp2113 = ($fn2114) ((frost$io$OutputStream*) $tmp2110)->$class->vtable[20];
frost$core$Error* $tmp2115 = $tmp2113(((frost$io$OutputStream*) $tmp2110), ((frost$core$Object*) $tmp2112));
if ($tmp2115 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Bit $tmp2116 = (frost$core$Bit) {$tmp2115 != NULL};
bool $tmp2117 = $tmp2116.value;
if ($tmp2117) goto block17; else goto block18;
block18:;
frost$core$Int $tmp2118 = (frost$core$Int) {340u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2119, $tmp2118, &$s2120);
abort(); // unreachable
block17:;
*(&local0) = $tmp2115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Error* $tmp2121 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:343
frost$core$Error* $tmp2122 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HCodeGenerator.frost:343:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn2124 $tmp2123 = ($fn2124) ((frost$core$Object*) $tmp2122)->$class->vtable[0];
frost$core$String* $tmp2125 = $tmp2123(((frost$core$Object*) $tmp2122));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2125);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:344
frost$core$Int $tmp2126 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp2126);
frost$core$Int $tmp2127 = (frost$core$Int) {344u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2128, $tmp2127, &$s2129);
abort(); // unreachable

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp2130 = &param0->compiler;
frost$core$Weak* $tmp2131 = *$tmp2130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$io$MemoryOutputStream** $tmp2132 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp2133 = *$tmp2132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
frost$io$MemoryOutputStream** $tmp2134 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp2135 = *$tmp2134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
frost$io$IndentedOutputStream** $tmp2136 = &param0->types;
frost$io$IndentedOutputStream* $tmp2137 = *$tmp2136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$io$MemoryOutputStream** $tmp2138 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp2139 = *$tmp2138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$io$MemoryOutputStream** $tmp2140 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp2141 = *$tmp2140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
frost$io$IndentedOutputStream** $tmp2142 = &param0->body;
frost$io$IndentedOutputStream* $tmp2143 = *$tmp2142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
frost$collections$HashSet** $tmp2144 = &param0->typeImports;
frost$collections$HashSet* $tmp2145 = *$tmp2144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$collections$HashSet** $tmp2146 = &param0->bodyImports;
frost$collections$HashSet* $tmp2147 = *$tmp2146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
frost$collections$HashSet** $tmp2148 = &param0->imports;
frost$collections$HashSet* $tmp2149 = *$tmp2148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$io$MemoryOutputStream** $tmp2150 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp2151 = *$tmp2150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
frost$io$File** $tmp2152 = &param0->outDir;
frost$io$File* $tmp2153 = *$tmp2152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$io$IndentedOutputStream** $tmp2154 = &param0->out;
frost$io$IndentedOutputStream* $tmp2155 = *$tmp2154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
frost$io$IndentedOutputStream** $tmp2156 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp2157 = *$tmp2156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
org$frostlang$frostc$LLVMCodeGenerator** $tmp2158 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp2159 = *$tmp2158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Weak** $tmp2160 = &param0->cCodeGen;
frost$core$Weak* $tmp2161 = *$tmp2160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
org$frostlang$frostc$CCodeGenerator** $tmp2162 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp2163 = *$tmp2162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
return;

}

