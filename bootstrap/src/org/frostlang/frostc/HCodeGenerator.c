#include "org/frostlang/frostc/HCodeGenerator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/io/MemoryOutputStream.h"
#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Error.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/HashKey.h"
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

typedef frost$core$String* (*$fn179)(frost$core$Object*);
typedef frost$core$String* (*$fn202)(frost$core$Object*);
typedef frost$core$Error* (*$fn327)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn374)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn606)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn655)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn829)(frost$core$Object*);
typedef frost$core$Error* (*$fn964)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn978)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1022)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1036)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1051)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1085)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1123)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1127)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1132)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1184)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1202)(frost$core$Object*);
typedef frost$core$Error* (*$fn1208)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1235)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1256)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1271)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1305)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1319)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1391)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1395)(frost$core$Object*);
typedef frost$core$Error* (*$fn1411)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1442)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1481)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1505)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1520)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1535)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1555)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1588)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1611)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1642)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1656)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1690)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1760)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1764)(frost$core$Object*);
typedef frost$core$Error* (*$fn1781)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1814)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1876)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn2066)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2104)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn2154)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn2181)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn2196)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2200)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2205)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn2238)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2256)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn2270)(frost$core$Object*);
typedef frost$core$Error* (*$fn2278)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn2290)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn2302)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn2314)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn2324)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, -4103086355721065342, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 109, -5927710150382349779, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x4c\x54", 3, -497462938104600023, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x47\x54", 3, -504009430337643742, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x51", 2, 565864791841746336, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x43", 2, 565884583051054134, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x24\x49\x6e\x74", 15, -6919318723808386959, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74", 3, 3143511548502526014, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 671970962477988494, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 4128981603702996129, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 671970962477988494, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, -3661474206510476099, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, -3661474206510476099, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, -6914605798766018203, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, -6914605798766018203, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, -6879236761899114840, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, -6879236761899114840, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, -2912907018242783318, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 133, -6858303649085076227, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, -7705315543961432915, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, 2096479397977239101, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 565857095260348859, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, -1262396787746464999, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s970 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1009 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s1018 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 5849859264470463548, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1028 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, 2266335419673499523, NULL };
static frost$core$String $s1042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1053 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -3452322778799334300, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 559938424166824396, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, -2448813731761471205, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s1206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 670056712733651593, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s1233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -4913817114742956656, NULL };
static frost$core$String $s1262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -5962813414700443260, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s1310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 2703935467625301937, NULL };
static frost$core$String $s1325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, -8740092864407068865, NULL };
static frost$core$String $s1358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20", 8, 1299553688233014337, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 71, 8885469816273793472, NULL };
static frost$core$String $s1380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -1023494951477965521, NULL };
static frost$core$String $s1416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -1023502648059362998, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, -8967472124348590150, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, -7438197491133939705, NULL };
static frost$core$String $s1486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, 1439842525427575854, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -2305927540240831023, NULL };
static frost$core$String $s1526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 14, 3730756510990532336, NULL };
static frost$core$String $s1541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1225697948708486459, NULL };
static frost$core$String $s1593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, -2545999853784231609, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -5352411526554368641, NULL };
static frost$core$String $s1616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 1978957539291219069, NULL };
static frost$core$String $s1647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, 4622182911039583012, NULL };
static frost$core$String $s1662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 639504583126607736, NULL };
static frost$core$String $s1688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3803391662366219107, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1752 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s1767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, 2866752995418129111, NULL };
static frost$core$String $s1769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, -603134967458908570, NULL };
static frost$core$String $s1771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20", 122, 5922034436274910413, NULL };
static frost$core$String $s1778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, 5593648587920272924, NULL };
static frost$core$String $s1786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 8833271432630347349, NULL };
static frost$core$String $s1804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, 5593643090362131869, NULL };
static frost$core$String $s1811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -2374506366252631061, NULL };
static frost$core$String $s1819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s1926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1932 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1947 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s1955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s2017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 7893996714969165842, NULL };
static frost$core$String $s2019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2045 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s2048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, -9034067459731225523, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, -5577034943728621570, NULL };
static frost$core$String $s2071 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s2090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, -5808520589270178657, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s2109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s2162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 1751680115892408369, NULL };
static frost$core$String $s2186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 636530404172864656, NULL };
static frost$core$String $s2217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s2233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s2258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 566764192353433709, NULL };
static frost$core$String $s2262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s2328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 7884330340994460475, NULL };
static frost$core$String $s2329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

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
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
frost$core$Int $tmp10 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block1:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1, org$frostlang$frostc$CCodeGenerator* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:6
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp13 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp13, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Weak** $tmp14 = &param0->compiler;
frost$core$Weak* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Weak** $tmp16 = &param0->compiler;
*$tmp16 = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:8
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp17 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$io$MemoryOutputStream** $tmp18 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$io$MemoryOutputStream** $tmp20 = &param0->typeImportStream;
*$tmp20 = $tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:10
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp21 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$io$MemoryOutputStream** $tmp22 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$io$MemoryOutputStream** $tmp24 = &param0->typesBuffer;
*$tmp24 = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:12
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp25 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp26 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp27 = *$tmp26;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp25, ((frost$io$OutputStream*) $tmp27));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$io$IndentedOutputStream** $tmp28 = &param0->types;
frost$io$IndentedOutputStream* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$io$IndentedOutputStream** $tmp30 = &param0->types;
*$tmp30 = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:14
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp31 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$io$MemoryOutputStream** $tmp32 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$io$MemoryOutputStream** $tmp34 = &param0->bodyImportStream;
*$tmp34 = $tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:16
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp35 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$io$MemoryOutputStream** $tmp36 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$io$MemoryOutputStream** $tmp38 = &param0->bodyBuffer;
*$tmp38 = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:18
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp39 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp40 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp41 = *$tmp40;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp39, ((frost$io$OutputStream*) $tmp41));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$io$IndentedOutputStream** $tmp42 = &param0->body;
frost$io$IndentedOutputStream* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$io$IndentedOutputStream** $tmp44 = &param0->body;
*$tmp44 = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:20
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp45 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$collections$HashSet** $tmp46 = &param0->typeImports;
frost$collections$HashSet* $tmp47 = *$tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$collections$HashSet** $tmp48 = &param0->typeImports;
*$tmp48 = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:22
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp49 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$HashSet** $tmp50 = &param0->bodyImports;
frost$collections$HashSet* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$HashSet** $tmp52 = &param0->bodyImports;
*$tmp52 = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:24
frost$collections$HashSet** $tmp53 = &param0->typeImports;
frost$collections$HashSet* $tmp54 = *$tmp53;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$collections$HashSet** $tmp55 = &param0->imports;
frost$collections$HashSet* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$collections$HashSet** $tmp57 = &param0->imports;
*$tmp57 = $tmp54;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:26
frost$io$MemoryOutputStream** $tmp58 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp59 = *$tmp58;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$io$MemoryOutputStream** $tmp60 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp61 = *$tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$io$MemoryOutputStream** $tmp62 = &param0->importStream;
*$tmp62 = $tmp59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:34
FROST_ASSERT(272 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp63 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(272, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp64 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp64);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp63, &$s65, ((frost$io$OutputStream*) $tmp64));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
org$frostlang$frostc$LLVMCodeGenerator** $tmp66 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$LLVMCodeGenerator** $tmp68 = &param0->llvmCodeGen;
*$tmp68 = $tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp69 = &param0->outDir;
frost$io$File* $tmp70 = *$tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$io$File** $tmp71 = &param0->outDir;
*$tmp71 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:48
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp72 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp73 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp73);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp72, ((frost$io$OutputStream*) $tmp73));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$io$IndentedOutputStream** $tmp74 = &param0->out;
frost$io$IndentedOutputStream* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$io$IndentedOutputStream** $tmp76 = &param0->out;
*$tmp76 = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:49
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp77 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp78 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp78);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp77, ((frost$io$OutputStream*) $tmp78));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$io$IndentedOutputStream** $tmp79 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp80 = *$tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$io$IndentedOutputStream** $tmp81 = &param0->typesOut;
*$tmp81 = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:50
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp82 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp82, ((frost$core$Object*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Weak** $tmp83 = &param0->cCodeGen;
frost$core$Weak* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Weak** $tmp85 = &param0->cCodeGen;
*$tmp85 = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp86 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp87 = *$tmp86;
frost$core$String* $tmp88 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp87, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
return $tmp88;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp89 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp90 = *$tmp89;
frost$core$String* $tmp91 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp90, param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$String* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp93 = *(&local0);
frost$core$Bit $tmp94 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp93, &$s95);
bool $tmp96 = $tmp94.value;
if ($tmp96) goto block1; else goto block2;
block2:;
frost$core$Int $tmp97 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s98, $tmp97);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp99 = *(&local0);
frost$core$Int $tmp100 = (frost$core$Int) {1u};
frost$core$Bit $tmp101 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp102 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp100, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp101);
frost$core$String* $tmp103 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp99, $tmp102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$String* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local0) = ((frost$core$String*) NULL);
return $tmp103;

}
frost$core$Int org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp105 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp106 = *$tmp105;
frost$core$Int $tmp107 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int($tmp106, param1);
return $tmp107;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:68
frost$core$String** $tmp108 = &param1->name;
frost$core$String* $tmp109 = *$tmp108;
frost$core$String* $tmp110 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp109, &$s111, &$s112);
frost$core$String* $tmp113 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp110, &$s114, &$s115);
frost$core$String* $tmp116 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp113, &$s117, &$s118);
frost$core$String* $tmp119 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp116, &$s120, &$s121);
frost$core$String* $tmp122 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp119, &$s123, &$s124);
frost$core$String* $tmp125 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp122, &$s126, &$s127);
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp125, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
return $tmp128;

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
frost$core$String** $tmp129 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp130 = *$tmp129;
frost$core$Bit $tmp131 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp130, &$s132);
bool $tmp133 = $tmp131.value;
if ($tmp133) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:74
frost$core$Weak** $tmp134 = &param0->compiler;
frost$core$Weak* $tmp135 = *$tmp134;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:74:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp136 = &$tmp135->_valid;
frost$core$Bit $tmp137 = *$tmp136;
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block5; else goto block6;
block6:;
frost$core$Int $tmp139 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s140, $tmp139);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp141 = &$tmp135->value;
frost$core$Object* $tmp142 = *$tmp141;
frost$core$Frost$ref$frost$core$Object$Q($tmp142);
frost$core$Bit $tmp143 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp142) != NULL};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block7; else goto block8;
block8:;
frost$core$Int $tmp145 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s146, $tmp145, &$s147);
abort(); // unreachable
block7:;
org$frostlang$frostc$Type** $tmp148 = &((org$frostlang$frostc$Compiler*) $tmp142)->INT64_TYPE;
org$frostlang$frostc$Type* $tmp149 = *$tmp148;
frost$core$String* $tmp150 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
return $tmp150;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:76
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:77
org$frostlang$frostc$Type$Kind* $tmp151 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp152 = *$tmp151;
frost$core$Int $tmp153 = $tmp152.$rawValue;
frost$core$Int $tmp154 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:78:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 == $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s160));
frost$core$Error* $tmp161 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local0) = ((frost$core$Error*) NULL);
return &$s162;
block13:;
frost$core$Int $tmp163 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:81:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp164 = $tmp153.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 == $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:82
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int from HCodeGenerator.frost:82:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp169 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp170 = *$tmp169;
frost$core$Int $tmp171 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int($tmp170, param1);
frost$core$Int $tmp172 = (frost$core$Int) {8u};
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173 * $tmp174;
frost$core$Int $tmp176 = (frost$core$Int) {$tmp175};
frost$core$Int$wrapper* $tmp177;
$tmp177 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp177->value = $tmp176;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:82:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn179 $tmp178 = ($fn179) ((frost$core$Object*) $tmp177)->$class->vtable[0];
frost$core$String* $tmp180 = $tmp178(((frost$core$Object*) $tmp177));
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s182, $tmp180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$String* $tmp183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp181, &$s184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Error* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp183;
block16:;
frost$core$Int $tmp186 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:84:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp187 = $tmp153.value;
int64_t $tmp188 = $tmp186.value;
bool $tmp189 = $tmp187 == $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:85
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int from HCodeGenerator.frost:85:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp192 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp193 = *$tmp192;
frost$core$Int $tmp194 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int($tmp193, param1);
frost$core$Int $tmp195 = (frost$core$Int) {8u};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 * $tmp197;
frost$core$Int $tmp199 = (frost$core$Int) {$tmp198};
frost$core$Int$wrapper* $tmp200;
$tmp200 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp200->value = $tmp199;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:85:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn202 $tmp201 = ($fn202) ((frost$core$Object*) $tmp200)->$class->vtable[0];
frost$core$String* $tmp203 = $tmp201(((frost$core$Object*) $tmp200));
frost$core$String* $tmp204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s205, $tmp203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$String* $tmp206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp204, &$s207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Error* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp206;
block21:;
frost$core$Int $tmp209 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:87:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp210 = $tmp153.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 == $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s215));
frost$core$Error* $tmp216 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local0) = ((frost$core$Error*) NULL);
return &$s217;
block26:;
frost$core$Int $tmp218 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:90:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp219 = $tmp153.value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 == $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:91
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int from HCodeGenerator.frost:91:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp224 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp225 = *$tmp224;
frost$core$Int $tmp226 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int($tmp225, param1);
frost$core$Int $tmp227 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:92:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227.value;
bool $tmp230 = $tmp228 == $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:92
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s233));
frost$core$Error* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local0) = ((frost$core$Error*) NULL);
return &$s235;
block34:;
frost$core$Int $tmp236 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:93:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp237 = $tmp226.value;
int64_t $tmp238 = $tmp236.value;
bool $tmp239 = $tmp237 == $tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s242));
frost$core$Error* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = ((frost$core$Error*) NULL);
return &$s244;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:94
frost$core$Int $tmp245 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s246, $tmp245);
abort(); // unreachable
block29:;
frost$core$Int $tmp247 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:97:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp248 = $tmp153.value;
int64_t $tmp249 = $tmp247.value;
bool $tmp250 = $tmp248 == $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:98
frost$core$String** $tmp253 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp254 = *$tmp253;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:98:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp255 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp256 = *$tmp255;
frost$core$String* $tmp257 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp256, $tmp254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$String* $tmp258 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local1) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:99
frost$core$Weak** $tmp259 = &param0->compiler;
frost$core$Weak* $tmp260 = *$tmp259;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:99:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp261 = &$tmp260->_valid;
frost$core$Bit $tmp262 = *$tmp261;
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block45; else goto block46;
block46:;
frost$core$Int $tmp264 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s265, $tmp264);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp266 = &$tmp260->value;
frost$core$Object* $tmp267 = *$tmp266;
frost$core$Frost$ref$frost$core$Object$Q($tmp267);
frost$core$Bit $tmp268 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp267) != NULL};
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block47; else goto block48;
block48:;
frost$core$Int $tmp270 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s271, $tmp270, &$s272);
abort(); // unreachable
block47:;
org$frostlang$frostc$ClassDecl* $tmp273 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp267), param1);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
org$frostlang$frostc$ClassDecl* $tmp274 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local2) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:100
org$frostlang$frostc$ClassDecl* $tmp275 = *(&local2);
frost$core$Bit $tmp276 = (frost$core$Bit) {$tmp275 != NULL};
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block49; else goto block50;
block50:;
frost$core$Int $tmp278 = (frost$core$Int) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s279, $tmp278);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:101
frost$core$Weak** $tmp280 = &param0->compiler;
frost$core$Weak* $tmp281 = *$tmp280;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:101:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp282 = &$tmp281->_valid;
frost$core$Bit $tmp283 = *$tmp282;
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block55; else goto block56;
block56:;
frost$core$Int $tmp285 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s286, $tmp285);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp287 = &$tmp281->value;
frost$core$Object* $tmp288 = *$tmp287;
frost$core$Frost$ref$frost$core$Object$Q($tmp288);
frost$core$Bit $tmp289 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp288) != NULL};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block57; else goto block58;
block58:;
frost$core$Int $tmp291 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s292, $tmp291, &$s293);
abort(); // unreachable
block57:;
org$frostlang$frostc$ClassDecl* $tmp294 = *(&local2);
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294 != NULL};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block59; else goto block60;
block60:;
frost$core$Int $tmp297 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s298, $tmp297, &$s299);
abort(); // unreachable
block59:;
frost$core$Bit $tmp300 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp288), $tmp294);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:101:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp301 = $tmp300.value;
bool $tmp302 = !$tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp288);
if ($tmp304) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:102
frost$collections$HashSet** $tmp305 = &param0->imports;
frost$collections$HashSet* $tmp306 = *$tmp305;
frost$core$String* $tmp307 = *(&local1);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:102:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp308 = &$tmp306->contents;
frost$collections$HashMap* $tmp309 = *$tmp308;
frost$core$Bit $tmp310 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp309, ((frost$collections$HashKey*) $tmp307));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:102:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp311 = $tmp310.value;
bool $tmp312 = !$tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:103
frost$io$MemoryOutputStream** $tmp315 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp316 = *$tmp315;
frost$core$String* $tmp317 = *(&local1);
frost$core$String* $tmp318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s319, $tmp317);
frost$core$String* $tmp320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp318, &$s321);
frost$core$String* $tmp322 = *(&local1);
frost$core$String* $tmp323 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp320, $tmp322);
frost$core$String* $tmp324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp323, &$s325);
$fn327 $tmp326 = ($fn327) ((frost$io$OutputStream*) $tmp316)->$class->vtable[19];
frost$core$Error* $tmp328 = $tmp326(((frost$io$OutputStream*) $tmp316), $tmp324);
if ($tmp328 == NULL) goto block66; else goto block67;
block67:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328 != NULL};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block68; else goto block69;
block69:;
frost$core$Int $tmp331 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s332, $tmp331, &$s333);
abort(); // unreachable
block68:;
*(&local0) = $tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
org$frostlang$frostc$ClassDecl* $tmp334 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp335 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local1) = ((frost$core$String*) NULL);
goto block9;
block66:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:104
frost$collections$HashSet** $tmp336 = &param0->imports;
frost$collections$HashSet* $tmp337 = *$tmp336;
frost$core$String* $tmp338 = *(&local1);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:104:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp339 = &$tmp337->contents;
frost$collections$HashMap* $tmp340 = *$tmp339;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp340, ((frost$collections$HashKey*) $tmp338), ((frost$core$Object*) ((frost$collections$HashKey*) $tmp338)));
goto block63;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:106
frost$core$String* $tmp341 = *(&local1);
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp341, &$s343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
org$frostlang$frostc$ClassDecl* $tmp344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp345 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp346 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp342;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:108
org$frostlang$frostc$ClassDecl* $tmp347 = *(&local2);
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347 != NULL};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block71; else goto block72;
block72:;
frost$core$Int $tmp350 = (frost$core$Int) {108u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s351, $tmp350, &$s352);
abort(); // unreachable
block71:;
frost$core$String* $tmp353 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp347, &$s354);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$String* $tmp355 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local3) = $tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:109
frost$collections$HashSet** $tmp356 = &param0->imports;
frost$collections$HashSet* $tmp357 = *$tmp356;
frost$core$String* $tmp358 = *(&local3);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:109:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp359 = &$tmp357->contents;
frost$collections$HashMap* $tmp360 = *$tmp359;
frost$core$Bit $tmp361 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp360, ((frost$collections$HashKey*) $tmp358));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:109:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp362 = $tmp361.value;
bool $tmp363 = !$tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:110
frost$io$MemoryOutputStream** $tmp366 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp367 = *$tmp366;
frost$core$String* $tmp368 = *(&local3);
frost$core$String* $tmp369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s370, $tmp368);
frost$core$String* $tmp371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp369, &$s372);
$fn374 $tmp373 = ($fn374) ((frost$io$OutputStream*) $tmp367)->$class->vtable[19];
frost$core$Error* $tmp375 = $tmp373(((frost$io$OutputStream*) $tmp367), $tmp371);
if ($tmp375 == NULL) goto block77; else goto block78;
block78:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375 != NULL};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block79; else goto block80;
block80:;
frost$core$Int $tmp378 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block79:;
*(&local0) = $tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$String* $tmp381 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp382 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp383 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local1) = ((frost$core$String*) NULL);
goto block9;
block77:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:111
frost$collections$HashSet** $tmp384 = &param0->imports;
frost$collections$HashSet* $tmp385 = *$tmp384;
frost$core$String* $tmp386 = *(&local3);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:111:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp387 = &$tmp385->contents;
frost$collections$HashMap* $tmp388 = *$tmp387;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp388, ((frost$collections$HashKey*) $tmp386), ((frost$core$Object*) ((frost$collections$HashKey*) $tmp386)));
goto block74;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:113
frost$core$String* $tmp389 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$String* $tmp390 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp391 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp392 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp393 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp389;
block40:;
frost$core$Int $tmp394 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:115:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp395 = $tmp153.value;
int64_t $tmp396 = $tmp394.value;
bool $tmp397 = $tmp395 == $tmp396;
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397};
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:116
frost$core$Weak** $tmp400 = &param0->compiler;
frost$core$Weak* $tmp401 = *$tmp400;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:116:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp402 = &$tmp401->_valid;
frost$core$Bit $tmp403 = *$tmp402;
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block87; else goto block88;
block88:;
frost$core$Int $tmp405 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s406, $tmp405);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp407 = &$tmp401->value;
frost$core$Object* $tmp408 = *$tmp407;
frost$core$Frost$ref$frost$core$Object$Q($tmp408);
frost$core$Bit $tmp409 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp408) != NULL};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block89; else goto block90;
block90:;
frost$core$Int $tmp411 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s412, $tmp411, &$s413);
abort(); // unreachable
block89:;
org$frostlang$frostc$ClassDecl* $tmp414 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp408), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
org$frostlang$frostc$ClassDecl* $tmp415 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local4) = $tmp414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q($tmp408);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:117
org$frostlang$frostc$ClassDecl* $tmp416 = *(&local4);
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416 != NULL};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block91; else goto block92;
block92:;
frost$core$Int $tmp419 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s420, $tmp419);
abort(); // unreachable
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:118
frost$core$Weak** $tmp421 = &param0->compiler;
frost$core$Weak* $tmp422 = *$tmp421;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:118:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp423 = &$tmp422->_valid;
frost$core$Bit $tmp424 = *$tmp423;
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block97; else goto block98;
block98:;
frost$core$Int $tmp426 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s427, $tmp426);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp428 = &$tmp422->value;
frost$core$Object* $tmp429 = *$tmp428;
frost$core$Frost$ref$frost$core$Object$Q($tmp429);
frost$core$Bit $tmp430 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp429) != NULL};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block99; else goto block100;
block100:;
frost$core$Int $tmp432 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s433, $tmp432, &$s434);
abort(); // unreachable
block99:;
org$frostlang$frostc$ClassDecl* $tmp435 = *(&local4);
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435 != NULL};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block101; else goto block102;
block102:;
frost$core$Int $tmp438 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s439, $tmp438, &$s440);
abort(); // unreachable
block101:;
frost$core$Bit $tmp441 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp429), $tmp435);
bool $tmp442 = $tmp441.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp429);
if ($tmp442) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:119
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:119:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp443 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp444 = *$tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444 != NULL};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block104; else goto block105;
block105:;
frost$core$Int $tmp447 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s448, $tmp447, &$s449);
abort(); // unreachable
block104:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Int $tmp450 = (frost$core$Int) {0u};
frost$core$Object* $tmp451 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp444, $tmp450);
frost$core$String* $tmp452 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp451));
frost$core$String* $tmp453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp452, &$s454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
org$frostlang$frostc$ClassDecl* $tmp455 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp456 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp453;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:121
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:121:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp457 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp458 = *$tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458 != NULL};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block107; else goto block108;
block108:;
frost$core$Int $tmp461 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s462, $tmp461, &$s463);
abort(); // unreachable
block107:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Int $tmp464 = (frost$core$Int) {0u};
frost$core$Object* $tmp465 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp458, $tmp464);
frost$core$String* $tmp466 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp465));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q($tmp465);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
org$frostlang$frostc$ClassDecl* $tmp467 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp466;
block83:;
frost$core$Int $tmp469 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:123:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp470 = $tmp153.value;
int64_t $tmp471 = $tmp469.value;
bool $tmp472 = $tmp470 == $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:124
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:124:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp475 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp476 = *$tmp475;
frost$core$Bit $tmp477 = (frost$core$Bit) {$tmp476 != NULL};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block115; else goto block116;
block116:;
frost$core$Int $tmp479 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s480, $tmp479, &$s481);
abort(); // unreachable
block115:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Int $tmp482 = (frost$core$Int) {0u};
frost$core$Object* $tmp483 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp476, $tmp482);
frost$core$String** $tmp484 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp483))->name;
frost$core$String* $tmp485 = *$tmp484;
frost$core$Bit $tmp486 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp485, &$s487);
bool $tmp488 = $tmp486.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp483);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
if ($tmp488) goto block112; else goto block113;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:125
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:125:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp489 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp490 = *$tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490 != NULL};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block118; else goto block119;
block119:;
frost$core$Int $tmp493 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s494, $tmp493, &$s495);
abort(); // unreachable
block118:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Int $tmp496 = (frost$core$Int) {1u};
frost$core$Object* $tmp497 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp490, $tmp496);
frost$core$String* $tmp498 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp497));
frost$core$String* $tmp499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp498, &$s500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q($tmp497);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Error* $tmp501 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp499;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:127
frost$core$Weak** $tmp502 = &param0->compiler;
frost$core$Weak* $tmp503 = *$tmp502;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:127:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp504 = &$tmp503->_valid;
frost$core$Bit $tmp505 = *$tmp504;
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block122; else goto block123;
block123:;
frost$core$Int $tmp507 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s508, $tmp507);
abort(); // unreachable
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp509 = &$tmp503->value;
frost$core$Object* $tmp510 = *$tmp509;
frost$core$Frost$ref$frost$core$Object$Q($tmp510);
frost$core$Bit $tmp511 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp510) != NULL};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block124; else goto block125;
block125:;
frost$core$Int $tmp513 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s514, $tmp513, &$s515);
abort(); // unreachable
block124:;
org$frostlang$frostc$ClassDecl* $tmp516 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp510), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
org$frostlang$frostc$ClassDecl* $tmp517 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local5) = $tmp516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$core$Frost$unref$frost$core$Object$Q($tmp510);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:128
org$frostlang$frostc$ClassDecl* $tmp518 = *(&local5);
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518 != NULL};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block128; else goto block129;
block129:;
frost$core$Int $tmp521 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s522, $tmp521, &$s523);
abort(); // unreachable
block128:;
// begin inline call to function org.frostlang.frostc.ClassDecl.isSpecialization():frost.core.Bit from HCodeGenerator.frost:128:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp524 = &$tmp518->name;
frost$core$String* $tmp525 = *$tmp524;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
frost$core$String$Index$nullable $tmp526 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q($tmp525, &$s527);
frost$core$Bit $tmp528 = (frost$core$Bit) {$tmp526.nonnull};
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block126; else goto block127;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:129
frost$core$String** $tmp530 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp531 = *$tmp530;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp532 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp533 = *$tmp532;
frost$core$String* $tmp534 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp533, $tmp531);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:129:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$String* $tmp535 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp534, &$s536);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$core$String* $tmp537 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local6) = $tmp535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:130
frost$core$Weak** $tmp538 = &param0->compiler;
frost$core$Weak* $tmp539 = *$tmp538;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:130:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp540 = &$tmp539->_valid;
frost$core$Bit $tmp541 = *$tmp540;
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block136; else goto block137;
block137:;
frost$core$Int $tmp543 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s544, $tmp543);
abort(); // unreachable
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp545 = &$tmp539->value;
frost$core$Object* $tmp546 = *$tmp545;
frost$core$Frost$ref$frost$core$Object$Q($tmp546);
frost$core$Bit $tmp547 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp546) != NULL};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block138; else goto block139;
block139:;
frost$core$Int $tmp549 = (frost$core$Int) {130u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s550, $tmp549, &$s551);
abort(); // unreachable
block138:;
org$frostlang$frostc$ClassDecl* $tmp552 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp546), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
org$frostlang$frostc$ClassDecl* $tmp553 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local7) = $tmp552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q($tmp546);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:131
org$frostlang$frostc$ClassDecl* $tmp554 = *(&local7);
frost$core$Bit $tmp555 = (frost$core$Bit) {$tmp554 != NULL};
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block140; else goto block141;
block141:;
frost$core$Int $tmp557 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s558, $tmp557);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:132
frost$core$Weak** $tmp559 = &param0->compiler;
frost$core$Weak* $tmp560 = *$tmp559;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:132:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp561 = &$tmp560->_valid;
frost$core$Bit $tmp562 = *$tmp561;
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block146; else goto block147;
block147:;
frost$core$Int $tmp564 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s565, $tmp564);
abort(); // unreachable
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp566 = &$tmp560->value;
frost$core$Object* $tmp567 = *$tmp566;
frost$core$Frost$ref$frost$core$Object$Q($tmp567);
frost$core$Bit $tmp568 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp567) != NULL};
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block148; else goto block149;
block149:;
frost$core$Int $tmp570 = (frost$core$Int) {132u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s571, $tmp570, &$s572);
abort(); // unreachable
block148:;
org$frostlang$frostc$ClassDecl* $tmp573 = *(&local7);
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573 != NULL};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block150; else goto block151;
block151:;
frost$core$Int $tmp576 = (frost$core$Int) {132u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s577, $tmp576, &$s578);
abort(); // unreachable
block150:;
frost$core$Bit $tmp579 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp567), $tmp573);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:132:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp580 = $tmp579.value;
bool $tmp581 = !$tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp567);
if ($tmp583) goto block142; else goto block143;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:133
frost$collections$HashSet** $tmp584 = &param0->imports;
frost$collections$HashSet* $tmp585 = *$tmp584;
frost$core$String* $tmp586 = *(&local6);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:133:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp587 = &$tmp585->contents;
frost$collections$HashMap* $tmp588 = *$tmp587;
frost$core$Bit $tmp589 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp588, ((frost$collections$HashKey*) $tmp586));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:133:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp590 = $tmp589.value;
bool $tmp591 = !$tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block153; else goto block154;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:134
frost$io$MemoryOutputStream** $tmp594 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp595 = *$tmp594;
frost$core$String* $tmp596 = *(&local6);
frost$core$String* $tmp597 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s598, $tmp596);
frost$core$String* $tmp599 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp597, &$s600);
frost$core$String* $tmp601 = *(&local6);
frost$core$String* $tmp602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp599, $tmp601);
frost$core$String* $tmp603 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp602, &$s604);
$fn606 $tmp605 = ($fn606) ((frost$io$OutputStream*) $tmp595)->$class->vtable[19];
frost$core$Error* $tmp607 = $tmp605(((frost$io$OutputStream*) $tmp595), $tmp603);
if ($tmp607 == NULL) goto block157; else goto block158;
block158:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Bit $tmp608 = (frost$core$Bit) {$tmp607 != NULL};
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block159; else goto block160;
block160:;
frost$core$Int $tmp610 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s611, $tmp610, &$s612);
abort(); // unreachable
block159:;
*(&local0) = $tmp607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
org$frostlang$frostc$ClassDecl* $tmp613 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp614 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp615 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block9;
block157:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:135
frost$collections$HashSet** $tmp616 = &param0->imports;
frost$collections$HashSet* $tmp617 = *$tmp616;
frost$core$String* $tmp618 = *(&local6);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:135:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp619 = &$tmp617->contents;
frost$collections$HashMap* $tmp620 = *$tmp619;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp620, ((frost$collections$HashKey*) $tmp618), ((frost$core$Object*) ((frost$collections$HashKey*) $tmp618)));
goto block154;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:137
frost$core$String* $tmp621 = *(&local6);
frost$core$String* $tmp622 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp621, &$s623);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
org$frostlang$frostc$ClassDecl* $tmp624 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp625 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp626 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp627 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp622;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:139
org$frostlang$frostc$ClassDecl* $tmp628 = *(&local7);
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628 != NULL};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block162; else goto block163;
block163:;
frost$core$Int $tmp631 = (frost$core$Int) {139u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s632, $tmp631, &$s633);
abort(); // unreachable
block162:;
frost$core$String* $tmp634 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp628, &$s635);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$String* $tmp636 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local8) = $tmp634;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:140
frost$collections$HashSet** $tmp637 = &param0->imports;
frost$collections$HashSet* $tmp638 = *$tmp637;
frost$core$String* $tmp639 = *(&local8);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from HCodeGenerator.frost:140:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp640 = &$tmp638->contents;
frost$collections$HashMap* $tmp641 = *$tmp640;
frost$core$Bit $tmp642 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp641, ((frost$collections$HashKey*) $tmp639));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:140:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp643 = $tmp642.value;
bool $tmp644 = !$tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:141
frost$io$MemoryOutputStream** $tmp647 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp648 = *$tmp647;
frost$core$String* $tmp649 = *(&local8);
frost$core$String* $tmp650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s651, $tmp649);
frost$core$String* $tmp652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp650, &$s653);
$fn655 $tmp654 = ($fn655) ((frost$io$OutputStream*) $tmp648)->$class->vtable[19];
frost$core$Error* $tmp656 = $tmp654(((frost$io$OutputStream*) $tmp648), $tmp652);
if ($tmp656 == NULL) goto block168; else goto block169;
block169:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Bit $tmp657 = (frost$core$Bit) {$tmp656 != NULL};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block170; else goto block171;
block171:;
frost$core$Int $tmp659 = (frost$core$Int) {141u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s660, $tmp659, &$s661);
abort(); // unreachable
block170:;
*(&local0) = $tmp656;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$String* $tmp662 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp663 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp664 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp665 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block9;
block168:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:142
frost$collections$HashSet** $tmp666 = &param0->imports;
frost$collections$HashSet* $tmp667 = *$tmp666;
frost$core$String* $tmp668 = *(&local8);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HCodeGenerator.frost:142:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp669 = &$tmp667->contents;
frost$collections$HashMap* $tmp670 = *$tmp669;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp670, ((frost$collections$HashKey*) $tmp668), ((frost$core$Object*) ((frost$collections$HashKey*) $tmp668)));
goto block165;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:144
frost$core$String* $tmp671 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$String* $tmp672 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp673 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp674 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp675 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp671;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:146
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:146:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp677 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp678 = *$tmp677;
frost$core$Bit $tmp679 = (frost$core$Bit) {$tmp678 != NULL};
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block174; else goto block175;
block175:;
frost$core$Int $tmp681 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s682, $tmp681, &$s683);
abort(); // unreachable
block174:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Int $tmp684 = (frost$core$Int) {0u};
frost$core$Object* $tmp685 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp678, $tmp684);
frost$core$String* $tmp686 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp685));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q($tmp685);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
org$frostlang$frostc$ClassDecl* $tmp687 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp688 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp686;
block110:;
frost$core$Int $tmp689 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:148:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp690 = $tmp153.value;
int64_t $tmp691 = $tmp689.value;
bool $tmp692 = $tmp690 == $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:149
frost$core$Weak** $tmp695 = &param1->genericClassParameter;
frost$core$Weak* $tmp696 = *$tmp695;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:149:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp697 = &$tmp696->_valid;
frost$core$Bit $tmp698 = *$tmp697;
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block181; else goto block182;
block182:;
frost$core$Int $tmp700 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s701, $tmp700);
abort(); // unreachable
block181:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp702 = &$tmp696->value;
frost$core$Object* $tmp703 = *$tmp702;
frost$core$Frost$ref$frost$core$Object$Q($tmp703);
frost$core$Bit $tmp704 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp703) != NULL};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block183; else goto block184;
block184:;
frost$core$Int $tmp706 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s707, $tmp706, &$s708);
abort(); // unreachable
block183:;
org$frostlang$frostc$Type** $tmp709 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp703)->bound;
org$frostlang$frostc$Type* $tmp710 = *$tmp709;
frost$core$String* $tmp711 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q($tmp703);
frost$core$Error* $tmp712 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp711;
block177:;
frost$core$Int $tmp713 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp714 = $tmp153.value;
int64_t $tmp715 = $tmp713.value;
bool $tmp716 = $tmp714 == $tmp715;
frost$core$Bit $tmp717 = (frost$core$Bit) {$tmp716};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:152
frost$core$Weak** $tmp719 = &param1->genericMethodParameter;
frost$core$Weak* $tmp720 = *$tmp719;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:152:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp721 = &$tmp720->_valid;
frost$core$Bit $tmp722 = *$tmp721;
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block190; else goto block191;
block191:;
frost$core$Int $tmp724 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s725, $tmp724);
abort(); // unreachable
block190:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp726 = &$tmp720->value;
frost$core$Object* $tmp727 = *$tmp726;
frost$core$Frost$ref$frost$core$Object$Q($tmp727);
frost$core$Bit $tmp728 = (frost$core$Bit) {((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp727) != NULL};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block192; else goto block193;
block193:;
frost$core$Int $tmp730 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s731, $tmp730, &$s732);
abort(); // unreachable
block192:;
org$frostlang$frostc$Type** $tmp733 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp727)->bound;
org$frostlang$frostc$Type* $tmp734 = *$tmp733;
frost$core$String* $tmp735 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q($tmp727);
frost$core$Error* $tmp736 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp735;
block186:;
frost$core$Int $tmp737 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp738 = $tmp153.value;
int64_t $tmp739 = $tmp737.value;
bool $tmp740 = $tmp738 == $tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block194; else goto block195;
block195:;
frost$core$Int $tmp743 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:154:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp744 = $tmp153.value;
int64_t $tmp745 = $tmp743.value;
bool $tmp746 = $tmp744 == $tmp745;
frost$core$Bit $tmp747 = (frost$core$Bit) {$tmp746};
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block194; else goto block197;
block194:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:155
frost$core$Weak** $tmp749 = &param0->compiler;
frost$core$Weak* $tmp750 = *$tmp749;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:155:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp751 = &$tmp750->_valid;
frost$core$Bit $tmp752 = *$tmp751;
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block201; else goto block202;
block202:;
frost$core$Int $tmp754 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s755, $tmp754);
abort(); // unreachable
block201:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp756 = &$tmp750->value;
frost$core$Object* $tmp757 = *$tmp756;
frost$core$Frost$ref$frost$core$Object$Q($tmp757);
frost$core$Bit $tmp758 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp757) != NULL};
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block203; else goto block204;
block204:;
frost$core$Int $tmp760 = (frost$core$Int) {155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s761, $tmp760, &$s762);
abort(); // unreachable
block203:;
org$frostlang$frostc$Type** $tmp763 = &((org$frostlang$frostc$Compiler*) $tmp757)->MUTABLE_METHOD_TYPE;
org$frostlang$frostc$Type* $tmp764 = *$tmp763;
frost$core$String* $tmp765 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q($tmp757);
frost$core$Error* $tmp766 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp765;
block197:;
frost$core$Int $tmp767 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:157:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp768 = $tmp153.value;
int64_t $tmp769 = $tmp767.value;
bool $tmp770 = $tmp768 == $tmp769;
frost$core$Bit $tmp771 = (frost$core$Bit) {$tmp770};
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block205; else goto block206;
block206:;
frost$core$Int $tmp773 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:157:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp774 = $tmp153.value;
int64_t $tmp775 = $tmp773.value;
bool $tmp776 = $tmp774 == $tmp775;
frost$core$Bit $tmp777 = (frost$core$Bit) {$tmp776};
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block205; else goto block208;
block205:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:158
frost$core$Weak** $tmp779 = &param0->compiler;
frost$core$Weak* $tmp780 = *$tmp779;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:158:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp781 = &$tmp780->_valid;
frost$core$Bit $tmp782 = *$tmp781;
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block212; else goto block213;
block213:;
frost$core$Int $tmp784 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s785, $tmp784);
abort(); // unreachable
block212:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp786 = &$tmp780->value;
frost$core$Object* $tmp787 = *$tmp786;
frost$core$Frost$ref$frost$core$Object$Q($tmp787);
frost$core$Bit $tmp788 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp787) != NULL};
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block214; else goto block215;
block215:;
frost$core$Int $tmp790 = (frost$core$Int) {158u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s791, $tmp790, &$s792);
abort(); // unreachable
block214:;
org$frostlang$frostc$Type** $tmp793 = &((org$frostlang$frostc$Compiler*) $tmp787)->METHOD_TYPE;
org$frostlang$frostc$Type* $tmp794 = *$tmp793;
frost$core$String* $tmp795 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q($tmp787);
frost$core$Error* $tmp796 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp795;
block208:;
frost$core$Int $tmp797 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HCodeGenerator.frost:160:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp798 = $tmp153.value;
int64_t $tmp799 = $tmp797.value;
bool $tmp800 = $tmp798 == $tmp799;
frost$core$Bit $tmp801 = (frost$core$Bit) {$tmp800};
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block216; else goto block217;
block216:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:161
frost$core$Weak** $tmp803 = &param0->compiler;
frost$core$Weak* $tmp804 = *$tmp803;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:161:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp805 = &$tmp804->_valid;
frost$core$Bit $tmp806 = *$tmp805;
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block221; else goto block222;
block222:;
frost$core$Int $tmp808 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s809, $tmp808);
abort(); // unreachable
block221:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp810 = &$tmp804->value;
frost$core$Object* $tmp811 = *$tmp810;
frost$core$Frost$ref$frost$core$Object$Q($tmp811);
frost$core$Bit $tmp812 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp811) != NULL};
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block223; else goto block224;
block224:;
frost$core$Int $tmp814 = (frost$core$Int) {161u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s815, $tmp814, &$s816);
abort(); // unreachable
block223:;
org$frostlang$frostc$ClassDecl* $tmp817 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp811), param1);
frost$core$Bit $tmp818 = (frost$core$Bit) {$tmp817 != NULL};
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block225; else goto block226;
block226:;
frost$core$Int $tmp820 = (frost$core$Int) {161u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s821, $tmp820, &$s822);
abort(); // unreachable
block225:;
org$frostlang$frostc$Type** $tmp823 = &$tmp817->type;
org$frostlang$frostc$Type* $tmp824 = *$tmp823;
frost$core$String* $tmp825 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp824);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$Frost$unref$frost$core$Object$Q($tmp811);
frost$core$Error* $tmp826 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp825;
block217:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:164
frost$core$Int $tmp827 = (frost$core$Int) {164u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:164:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn829 $tmp828 = ($fn829) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp830 = $tmp828(((frost$core$Object*) param1));
frost$core$String* $tmp831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s832, $tmp830);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp833 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp831, &$s834);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s835, $tmp827, $tmp833);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
abort(); // unreachable
block9:;
frost$core$Error* $tmp836 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:170
frost$core$Int $tmp837 = (frost$core$Int) {170u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s838, $tmp837);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp839 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$String* $tmp840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp839, &$s841);
frost$core$String* $tmp842 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp840, param2);
frost$core$String* $tmp843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp842, &$s844);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
return $tmp843;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:179
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp845 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp845, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Weak** $tmp846 = &param0->compiler;
frost$core$Weak* $tmp847 = *$tmp846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Weak** $tmp848 = &param0->compiler;
*$tmp848 = $tmp845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:180
org$frostlang$frostc$LLVMCodeGenerator** $tmp849 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp850 = *$tmp849;
// begin inline call to method org.frostlang.frostc.LLVMCodeGenerator.setCompiler(compiler:org.frostlang.frostc.Compiler) from HCodeGenerator.frost:180:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:123
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp851 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp851, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$core$Weak** $tmp852 = &$tmp850->compiler;
frost$core$Weak* $tmp853 = *$tmp852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
frost$core$Weak** $tmp854 = &$tmp850->compiler;
*$tmp854 = $tmp851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp855 = &param0->outDir;
frost$io$File* $tmp856 = *$tmp855;
frost$core$String* $tmp857 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp858 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp856, $tmp857);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
return $tmp858;

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
frost$io$MemoryOutputStream** $tmp859 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp860 = *$tmp859;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:190:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp861 = &$tmp860->data;
frost$core$MutableString* $tmp862 = *$tmp861;
frost$core$MutableString$clear($tmp862);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:191
frost$io$MemoryOutputStream** $tmp863 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp864 = *$tmp863;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:191:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp865 = &$tmp864->data;
frost$core$MutableString* $tmp866 = *$tmp865;
frost$core$MutableString$clear($tmp866);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:192
frost$io$MemoryOutputStream** $tmp867 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp868 = *$tmp867;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:192:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp869 = &$tmp868->data;
frost$core$MutableString* $tmp870 = *$tmp869;
frost$core$MutableString$clear($tmp870);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:193
frost$io$MemoryOutputStream** $tmp871 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp872 = *$tmp871;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:193:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
frost$core$MutableString** $tmp873 = &$tmp872->data;
frost$core$MutableString* $tmp874 = *$tmp873;
frost$core$MutableString$clear($tmp874);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:194
frost$collections$HashSet** $tmp875 = &param0->typeImports;
frost$collections$HashSet* $tmp876 = *$tmp875;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:194:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp877 = &$tmp876->contents;
frost$collections$HashMap* $tmp878 = *$tmp877;
frost$collections$HashMap$clear($tmp878);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:195
frost$collections$HashSet** $tmp879 = &param0->bodyImports;
frost$collections$HashSet* $tmp880 = *$tmp879;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:195:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
frost$collections$HashMap** $tmp881 = &$tmp880->contents;
frost$collections$HashMap* $tmp882 = *$tmp881;
frost$collections$HashMap$clear($tmp882);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:196
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:196:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp883 = &param0->outDir;
frost$io$File* $tmp884 = *$tmp883;
frost$core$String* $tmp885 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s886);
frost$io$File* $tmp887 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp884, $tmp885);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$io$File* $tmp888 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local1) = $tmp887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:197
frost$io$File* $tmp889 = *(&local1);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from HCodeGenerator.frost:197:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp890 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp889, &$s891);
frost$core$String** $tmp892 = &$tmp890->path;
frost$core$String* $tmp893 = *$tmp892;
frost$core$String* $tmp894 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp893);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$String* $tmp895 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local3) = $tmp894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp896 = *(&local3);
frost$core$Bit $tmp897 = (frost$core$Bit) {$tmp896 == NULL};
bool $tmp898 = $tmp897.value;
if ($tmp898) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp899 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp900 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp901 = *(&local3);
frost$core$Bit $tmp902 = (frost$core$Bit) {$tmp901 != NULL};
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block13; else goto block14;
block14:;
frost$core$Int $tmp904 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s905, $tmp904, &$s906);
abort(); // unreachable
block13:;
frost$io$File$init$frost$core$String($tmp900, $tmp901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$String* $tmp907 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp900;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
goto block10;
block10:;
frost$io$File* $tmp908 = *(&local2);
frost$core$Bit $tmp909 = (frost$core$Bit) {$tmp908 != NULL};
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block15; else goto block16;
block16:;
frost$core$Int $tmp911 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s912, $tmp911, &$s913);
abort(); // unreachable
block15:;
frost$core$Error* $tmp914 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp908);
if ($tmp914 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Bit $tmp915 = (frost$core$Bit) {$tmp914 != NULL};
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block19; else goto block20;
block20:;
frost$core$Int $tmp917 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s918, $tmp917, &$s919);
abort(); // unreachable
block19:;
*(&local0) = $tmp914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$io$File* $tmp920 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp921 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:198
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp922 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp923 = *(&local1);
frost$core$Maybe* $tmp924 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp923);
frost$core$Int* $tmp925 = &$tmp924->$rawValue;
frost$core$Int $tmp926 = *$tmp925;
int64_t $tmp927 = $tmp926.value;
bool $tmp928 = $tmp927 == 0u;
if ($tmp928) goto block21; else goto block22;
block22:;
frost$core$Error** $tmp929 = (frost$core$Error**) ($tmp924->$data + 0);
frost$core$Error* $tmp930 = *$tmp929;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
*(&local0) = $tmp930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$io$File* $tmp931 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp932 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block21:;
frost$core$Object** $tmp933 = (frost$core$Object**) ($tmp924->$data + 0);
frost$core$Object* $tmp934 = *$tmp933;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp922, ((frost$io$OutputStream*) $tmp934));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$io$IndentedOutputStream** $tmp935 = &param0->out;
frost$io$IndentedOutputStream* $tmp936 = *$tmp935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$io$IndentedOutputStream** $tmp937 = &param0->out;
*$tmp937 = $tmp922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:199
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:199:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:184
frost$io$File** $tmp938 = &param0->outDir;
frost$io$File* $tmp939 = *$tmp938;
frost$core$String* $tmp940 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s941);
frost$io$File* $tmp942 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp939, $tmp940);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$io$File* $tmp943 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local4) = $tmp942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:200
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp944 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp945 = *(&local4);
frost$core$Maybe* $tmp946 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp945);
frost$core$Int* $tmp947 = &$tmp946->$rawValue;
frost$core$Int $tmp948 = *$tmp947;
int64_t $tmp949 = $tmp948.value;
bool $tmp950 = $tmp949 == 0u;
if ($tmp950) goto block24; else goto block25;
block25:;
frost$core$Error** $tmp951 = (frost$core$Error**) ($tmp946->$data + 0);
frost$core$Error* $tmp952 = *$tmp951;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local0) = $tmp952;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$io$File* $tmp953 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp955 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block24:;
frost$core$Object** $tmp956 = (frost$core$Object**) ($tmp946->$data + 0);
frost$core$Object* $tmp957 = *$tmp956;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp944, ((frost$io$OutputStream*) $tmp957));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$io$IndentedOutputStream** $tmp958 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp959 = *$tmp958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$io$IndentedOutputStream** $tmp960 = &param0->typesOut;
*$tmp960 = $tmp944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:201
frost$io$IndentedOutputStream** $tmp961 = &param0->out;
frost$io$IndentedOutputStream* $tmp962 = *$tmp961;
$fn964 $tmp963 = ($fn964) ((frost$io$OutputStream*) $tmp962)->$class->vtable[19];
frost$core$Error* $tmp965 = $tmp963(((frost$io$OutputStream*) $tmp962), &$s966);
if ($tmp965 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$core$Bit $tmp967 = (frost$core$Bit) {$tmp965 != NULL};
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block28; else goto block29;
block29:;
frost$core$Int $tmp969 = (frost$core$Int) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s970, $tmp969, &$s971);
abort(); // unreachable
block28:;
*(&local0) = $tmp965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$io$File* $tmp972 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp973 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp974 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:202
frost$io$IndentedOutputStream** $tmp975 = &param0->out;
frost$io$IndentedOutputStream* $tmp976 = *$tmp975;
$fn978 $tmp977 = ($fn978) ((frost$io$OutputStream*) $tmp976)->$class->vtable[19];
frost$core$Error* $tmp979 = $tmp977(((frost$io$OutputStream*) $tmp976), &$s980);
if ($tmp979 == NULL) goto block30; else goto block31;
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$core$Bit $tmp981 = (frost$core$Bit) {$tmp979 != NULL};
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block32; else goto block33;
block33:;
frost$core$Int $tmp983 = (frost$core$Int) {202u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s984, $tmp983, &$s985);
abort(); // unreachable
block32:;
*(&local0) = $tmp979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$io$File* $tmp986 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp987 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp988 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:203
frost$io$IndentedOutputStream** $tmp989 = &param0->out;
frost$io$IndentedOutputStream* $tmp990 = *$tmp989;
frost$io$File* $tmp991 = *(&local4);
// begin inline call to function frost.io.File.get_name():frost.core.String from HCodeGenerator.frost:203:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp992 = &$tmp991->path;
frost$core$String* $tmp993 = *$tmp992;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp994 = frost$core$String$get_end$R$frost$core$String$Index($tmp993);
frost$core$String$Index$nullable $tmp995 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp993, &$s996, $tmp994);
*(&local6) = $tmp995;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp997 = *(&local6);
frost$core$Bit $tmp998 = (frost$core$Bit) {$tmp997.nonnull};
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block36; else goto block38;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp1000 = &$tmp991->path;
frost$core$String* $tmp1001 = *$tmp1000;
frost$core$String** $tmp1002 = &$tmp991->path;
frost$core$String* $tmp1003 = *$tmp1002;
frost$core$String$Index$nullable $tmp1004 = *(&local6);
frost$core$Bit $tmp1005 = (frost$core$Bit) {$tmp1004.nonnull};
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block39; else goto block40;
block40:;
frost$core$Int $tmp1007 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1008, $tmp1007, &$s1009);
abort(); // unreachable
block39:;
frost$core$String$Index $tmp1010 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp1003, ((frost$core$String$Index) $tmp1004.value));
frost$core$Bit $tmp1011 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1012 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1010, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1011);
frost$core$String* $tmp1013 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1001, $tmp1012);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local5) = $tmp1013;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
goto block34;
block38:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp1014 = &$tmp991->path;
frost$core$String* $tmp1015 = *$tmp1014;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local5) = $tmp1015;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
goto block34;
block37:;
goto block34;
block34:;
frost$core$String* $tmp1016 = *(&local5);
frost$core$String* $tmp1017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1018, $tmp1016);
frost$core$String* $tmp1019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1017, &$s1020);
$fn1022 $tmp1021 = ($fn1022) ((frost$io$OutputStream*) $tmp990)->$class->vtable[19];
frost$core$Error* $tmp1023 = $tmp1021(((frost$io$OutputStream*) $tmp990), $tmp1019);
if ($tmp1023 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Bit $tmp1024 = (frost$core$Bit) {$tmp1023 != NULL};
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block43; else goto block44;
block44:;
frost$core$Int $tmp1026 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1027, $tmp1026, &$s1028);
abort(); // unreachable
block43:;
*(&local0) = $tmp1023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$String* $tmp1029 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1030 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1031 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1032 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:204
frost$io$IndentedOutputStream** $tmp1033 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1034 = *$tmp1033;
$fn1036 $tmp1035 = ($fn1036) ((frost$io$OutputStream*) $tmp1034)->$class->vtable[19];
frost$core$Error* $tmp1037 = $tmp1035(((frost$io$OutputStream*) $tmp1034), &$s1038);
if ($tmp1037 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Bit $tmp1039 = (frost$core$Bit) {$tmp1037 != NULL};
bool $tmp1040 = $tmp1039.value;
if ($tmp1040) goto block47; else goto block48;
block48:;
frost$core$Int $tmp1041 = (frost$core$Int) {204u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1042, $tmp1041, &$s1043);
abort(); // unreachable
block47:;
*(&local0) = $tmp1037;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
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
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:205
frost$io$IndentedOutputStream** $tmp1048 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1049 = *$tmp1048;
$fn1051 $tmp1050 = ($fn1051) ((frost$io$OutputStream*) $tmp1049)->$class->vtable[19];
frost$core$Error* $tmp1052 = $tmp1050(((frost$io$OutputStream*) $tmp1049), &$s1053);
if ($tmp1052 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Bit $tmp1054 = (frost$core$Bit) {$tmp1052 != NULL};
bool $tmp1055 = $tmp1054.value;
if ($tmp1055) goto block51; else goto block52;
block52:;
frost$core$Int $tmp1056 = (frost$core$Int) {205u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1057, $tmp1056, &$s1058);
abort(); // unreachable
block51:;
*(&local0) = $tmp1052;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$String* $tmp1059 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1060 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1061 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1062 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:206
frost$io$MemoryOutputStream** $tmp1063 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1064 = *$tmp1063;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$io$MemoryOutputStream** $tmp1065 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1066 = *$tmp1065;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$io$MemoryOutputStream** $tmp1067 = &param0->importStream;
*$tmp1067 = $tmp1064;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:207
frost$collections$HashSet** $tmp1068 = &param0->typeImports;
frost$collections$HashSet* $tmp1069 = *$tmp1068;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$collections$HashSet** $tmp1070 = &param0->imports;
frost$collections$HashSet* $tmp1071 = *$tmp1070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$collections$HashSet** $tmp1072 = &param0->imports;
*$tmp1072 = $tmp1069;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:208
frost$io$IndentedOutputStream** $tmp1073 = &param0->types;
frost$io$IndentedOutputStream* $tmp1074 = *$tmp1073;
frost$core$String** $tmp1075 = &param1->name;
frost$core$String* $tmp1076 = *$tmp1075;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:208:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1077 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1078 = *$tmp1077;
frost$core$String* $tmp1079 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1078, $tmp1076);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$String* $tmp1080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1081, $tmp1079);
frost$core$String* $tmp1082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1080, &$s1083);
$fn1085 $tmp1084 = ($fn1085) ((frost$io$OutputStream*) $tmp1074)->$class->vtable[19];
frost$core$Error* $tmp1086 = $tmp1084(((frost$io$OutputStream*) $tmp1074), $tmp1082);
if ($tmp1086 == NULL) goto block54; else goto block55;
block55:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$Bit $tmp1087 = (frost$core$Bit) {$tmp1086 != NULL};
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block56; else goto block57;
block57:;
frost$core$Int $tmp1089 = (frost$core$Int) {208u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1090, $tmp1089, &$s1091);
abort(); // unreachable
block56:;
*(&local0) = $tmp1086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$String* $tmp1092 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1093 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1094 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1095 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:209
frost$io$IndentedOutputStream** $tmp1096 = &param0->types;
frost$io$IndentedOutputStream* $tmp1097 = *$tmp1096;
frost$core$Int* $tmp1098 = &$tmp1097->level;
frost$core$Int $tmp1099 = *$tmp1098;
frost$core$Int $tmp1100 = (frost$core$Int) {1u};
int64_t $tmp1101 = $tmp1099.value;
int64_t $tmp1102 = $tmp1100.value;
int64_t $tmp1103 = $tmp1101 + $tmp1102;
frost$core$Int $tmp1104 = (frost$core$Int) {$tmp1103};
frost$core$Int* $tmp1105 = &$tmp1097->level;
*$tmp1105 = $tmp1104;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:210
frost$core$Weak** $tmp1106 = &param0->compiler;
frost$core$Weak* $tmp1107 = *$tmp1106;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:210:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1108 = &$tmp1107->_valid;
frost$core$Bit $tmp1109 = *$tmp1108;
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block60; else goto block61;
block61:;
frost$core$Int $tmp1111 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1112, $tmp1111);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1113 = &$tmp1107->value;
frost$core$Object* $tmp1114 = *$tmp1113;
frost$core$Frost$ref$frost$core$Object$Q($tmp1114);
frost$core$Bit $tmp1115 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1114) != NULL};
bool $tmp1116 = $tmp1115.value;
if ($tmp1116) goto block62; else goto block63;
block63:;
frost$core$Int $tmp1117 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1118, $tmp1117, &$s1119);
abort(); // unreachable
block62:;
frost$collections$ListView* $tmp1120 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1114), param1);
ITable* $tmp1121 = ((frost$collections$Iterable*) $tmp1120)->$class->itable;
while ($tmp1121->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1121 = $tmp1121->next;
}
$fn1123 $tmp1122 = $tmp1121->methods[0];
frost$collections$Iterator* $tmp1124 = $tmp1122(((frost$collections$Iterable*) $tmp1120));
goto block64;
block64:;
ITable* $tmp1125 = $tmp1124->$class->itable;
while ($tmp1125->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1125 = $tmp1125->next;
}
$fn1127 $tmp1126 = $tmp1125->methods[0];
frost$core$Bit $tmp1128 = $tmp1126($tmp1124);
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block66; else goto block65;
block65:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp1130 = $tmp1124->$class->itable;
while ($tmp1130->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1130 = $tmp1130->next;
}
$fn1132 $tmp1131 = $tmp1130->methods[1];
frost$core$Object* $tmp1133 = $tmp1131($tmp1124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1133)));
org$frostlang$frostc$FieldDecl* $tmp1134 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp1133);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:211
frost$core$Weak** $tmp1135 = &param0->compiler;
frost$core$Weak* $tmp1136 = *$tmp1135;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:211:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1137 = &$tmp1136->_valid;
frost$core$Bit $tmp1138 = *$tmp1137;
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block69; else goto block70;
block70:;
frost$core$Int $tmp1140 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1141, $tmp1140);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1142 = &$tmp1136->value;
frost$core$Object* $tmp1143 = *$tmp1142;
frost$core$Frost$ref$frost$core$Object$Q($tmp1143);
frost$core$Bit $tmp1144 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1143) != NULL};
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block71; else goto block72;
block72:;
frost$core$Int $tmp1146 = (frost$core$Int) {211u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1147, $tmp1146, &$s1148);
abort(); // unreachable
block71:;
org$frostlang$frostc$FieldDecl* $tmp1149 = *(&local7);
frost$core$Bit $tmp1150 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1143), $tmp1149);
frost$core$Frost$unref$frost$core$Object$Q($tmp1143);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp1151 = *(&local7);
org$frostlang$frostc$Type** $tmp1152 = &$tmp1151->type;
org$frostlang$frostc$Type* $tmp1153 = *$tmp1152;
frost$core$Weak** $tmp1154 = &param0->compiler;
frost$core$Weak* $tmp1155 = *$tmp1154;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:212:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1156 = &$tmp1155->_valid;
frost$core$Bit $tmp1157 = *$tmp1156;
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block78; else goto block79;
block79:;
frost$core$Int $tmp1159 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1160, $tmp1159);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1161 = &$tmp1155->value;
frost$core$Object* $tmp1162 = *$tmp1161;
frost$core$Frost$ref$frost$core$Object$Q($tmp1162);
frost$core$Bit $tmp1163 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1162) != NULL};
bool $tmp1164 = $tmp1163.value;
if ($tmp1164) goto block80; else goto block81;
block81:;
frost$core$Int $tmp1165 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1166, $tmp1165, &$s1167);
abort(); // unreachable
block80:;
org$frostlang$frostc$Type** $tmp1168 = &((org$frostlang$frostc$Compiler*) $tmp1162)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp1169 = *$tmp1168;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from HCodeGenerator.frost:212:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1170 = &((org$frostlang$frostc$Symbol*) $tmp1153)->name;
frost$core$String* $tmp1171 = *$tmp1170;
frost$core$String** $tmp1172 = &((org$frostlang$frostc$Symbol*) $tmp1169)->name;
frost$core$String* $tmp1173 = *$tmp1172;
frost$core$Bit $tmp1174 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1171, $tmp1173);
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block83; else goto block84;
block83:;
org$frostlang$frostc$Type$Kind* $tmp1176 = &$tmp1153->typeKind;
org$frostlang$frostc$Type$Kind $tmp1177 = *$tmp1176;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1178;
$tmp1178 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1178->value = $tmp1177;
org$frostlang$frostc$Type$Kind* $tmp1179 = &$tmp1169->typeKind;
org$frostlang$frostc$Type$Kind $tmp1180 = *$tmp1179;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1181;
$tmp1181 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1181->value = $tmp1180;
ITable* $tmp1182 = ((frost$core$Equatable*) $tmp1178)->$class->itable;
while ($tmp1182->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1182 = $tmp1182->next;
}
$fn1184 $tmp1183 = $tmp1182->methods[0];
frost$core$Bit $tmp1185 = $tmp1183(((frost$core$Equatable*) $tmp1178), ((frost$core$Equatable*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1181)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1178)));
*(&local8) = $tmp1185;
goto block85;
block84:;
*(&local8) = $tmp1174;
goto block85;
block85:;
frost$core$Bit $tmp1186 = *(&local8);
bool $tmp1187 = $tmp1186.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1162);
if ($tmp1187) goto block73; else goto block75;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:213
frost$io$IndentedOutputStream** $tmp1188 = &param0->types;
frost$io$IndentedOutputStream* $tmp1189 = *$tmp1188;
org$frostlang$frostc$FieldDecl* $tmp1190 = *(&local7);
frost$core$String** $tmp1191 = &((org$frostlang$frostc$Symbol*) $tmp1190)->name;
frost$core$String* $tmp1192 = *$tmp1191;
frost$core$String* $tmp1193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1194, $tmp1192);
frost$core$String* $tmp1195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1193, &$s1196);
org$frostlang$frostc$LLVMCodeGenerator** $tmp1197 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1198 = *$tmp1197;
frost$core$Int $tmp1199 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int($tmp1198, param1);
frost$core$Int$wrapper* $tmp1200;
$tmp1200 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1200->value = $tmp1199;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:213:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1202 $tmp1201 = ($fn1202) ((frost$core$Object*) $tmp1200)->$class->vtable[0];
frost$core$String* $tmp1203 = $tmp1201(((frost$core$Object*) $tmp1200));
frost$core$String* $tmp1204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1195, $tmp1203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$String* $tmp1205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1204, &$s1206);
$fn1208 $tmp1207 = ($fn1208) ((frost$io$OutputStream*) $tmp1189)->$class->vtable[19];
frost$core$Error* $tmp1209 = $tmp1207(((frost$io$OutputStream*) $tmp1189), $tmp1205);
if ($tmp1209 == NULL) goto block87; else goto block88;
block88:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Bit $tmp1210 = (frost$core$Bit) {$tmp1209 != NULL};
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block89; else goto block90;
block90:;
frost$core$Int $tmp1212 = (frost$core$Int) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1213, $tmp1212, &$s1214);
abort(); // unreachable
block89:;
*(&local0) = $tmp1209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q($tmp1133);
org$frostlang$frostc$FieldDecl* $tmp1215 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q($tmp1114);
frost$core$String* $tmp1216 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1217 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1218 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block87:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
goto block74;
block75:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:216
frost$io$IndentedOutputStream** $tmp1220 = &param0->types;
frost$io$IndentedOutputStream* $tmp1221 = *$tmp1220;
org$frostlang$frostc$FieldDecl* $tmp1222 = *(&local7);
org$frostlang$frostc$Type** $tmp1223 = &$tmp1222->type;
org$frostlang$frostc$Type* $tmp1224 = *$tmp1223;
frost$core$String* $tmp1225 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1224);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:216:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$String* $tmp1226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1225, &$s1227);
org$frostlang$frostc$FieldDecl* $tmp1228 = *(&local7);
frost$core$String** $tmp1229 = &((org$frostlang$frostc$Symbol*) $tmp1228)->name;
frost$core$String* $tmp1230 = *$tmp1229;
frost$core$String* $tmp1231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1226, $tmp1230);
frost$core$String* $tmp1232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1231, &$s1233);
$fn1235 $tmp1234 = ($fn1235) ((frost$io$OutputStream*) $tmp1221)->$class->vtable[19];
frost$core$Error* $tmp1236 = $tmp1234(((frost$io$OutputStream*) $tmp1221), $tmp1232);
if ($tmp1236 == NULL) goto block92; else goto block93;
block93:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
frost$core$Bit $tmp1237 = (frost$core$Bit) {$tmp1236 != NULL};
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block94; else goto block95;
block95:;
frost$core$Int $tmp1239 = (frost$core$Int) {216u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1240, $tmp1239, &$s1241);
abort(); // unreachable
block94:;
*(&local0) = $tmp1236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q($tmp1133);
org$frostlang$frostc$FieldDecl* $tmp1242 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q($tmp1114);
frost$core$String* $tmp1243 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1244 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1245 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1246 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block92:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
goto block74;
block74:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1133);
org$frostlang$frostc$FieldDecl* $tmp1247 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block64;
block66:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q($tmp1114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:219
frost$core$String** $tmp1248 = &param1->name;
frost$core$String* $tmp1249 = *$tmp1248;
frost$core$Bit $tmp1250 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1249, &$s1251);
bool $tmp1252 = $tmp1250.value;
if ($tmp1252) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:220
frost$io$IndentedOutputStream** $tmp1253 = &param0->types;
frost$io$IndentedOutputStream* $tmp1254 = *$tmp1253;
$fn1256 $tmp1255 = ($fn1256) ((frost$io$OutputStream*) $tmp1254)->$class->vtable[19];
frost$core$Error* $tmp1257 = $tmp1255(((frost$io$OutputStream*) $tmp1254), &$s1258);
if ($tmp1257 == NULL) goto block98; else goto block99;
block99:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Bit $tmp1259 = (frost$core$Bit) {$tmp1257 != NULL};
bool $tmp1260 = $tmp1259.value;
if ($tmp1260) goto block100; else goto block101;
block101:;
frost$core$Int $tmp1261 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1262, $tmp1261, &$s1263);
abort(); // unreachable
block100:;
*(&local0) = $tmp1257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$String* $tmp1264 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1265 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block98:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:221
frost$io$IndentedOutputStream** $tmp1268 = &param0->types;
frost$io$IndentedOutputStream* $tmp1269 = *$tmp1268;
$fn1271 $tmp1270 = ($fn1271) ((frost$io$OutputStream*) $tmp1269)->$class->vtable[19];
frost$core$Error* $tmp1272 = $tmp1270(((frost$io$OutputStream*) $tmp1269), &$s1273);
if ($tmp1272 == NULL) goto block102; else goto block103;
block103:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$Bit $tmp1274 = (frost$core$Bit) {$tmp1272 != NULL};
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block104; else goto block105;
block105:;
frost$core$Int $tmp1276 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1277, $tmp1276, &$s1278);
abort(); // unreachable
block104:;
*(&local0) = $tmp1272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$String* $tmp1279 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1280 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1281 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1282 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block102:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:223
frost$io$IndentedOutputStream** $tmp1283 = &param0->types;
frost$io$IndentedOutputStream* $tmp1284 = *$tmp1283;
frost$core$Int* $tmp1285 = &$tmp1284->level;
frost$core$Int $tmp1286 = *$tmp1285;
frost$core$Int $tmp1287 = (frost$core$Int) {1u};
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287.value;
int64_t $tmp1290 = $tmp1288 - $tmp1289;
frost$core$Int $tmp1291 = (frost$core$Int) {$tmp1290};
frost$core$Int* $tmp1292 = &$tmp1284->level;
*$tmp1292 = $tmp1291;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:224
frost$io$IndentedOutputStream** $tmp1293 = &param0->types;
frost$io$IndentedOutputStream* $tmp1294 = *$tmp1293;
frost$core$String** $tmp1295 = &param1->name;
frost$core$String* $tmp1296 = *$tmp1295;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:224:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1297 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1298 = *$tmp1297;
frost$core$String* $tmp1299 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1298, $tmp1296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$String* $tmp1300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1301, $tmp1299);
frost$core$String* $tmp1302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1300, &$s1303);
$fn1305 $tmp1304 = ($fn1305) ((frost$io$OutputStream*) $tmp1294)->$class->vtable[19];
frost$core$Error* $tmp1306 = $tmp1304(((frost$io$OutputStream*) $tmp1294), $tmp1302);
if ($tmp1306 == NULL) goto block107; else goto block108;
block108:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Bit $tmp1307 = (frost$core$Bit) {$tmp1306 != NULL};
bool $tmp1308 = $tmp1307.value;
if ($tmp1308) goto block109; else goto block110;
block110:;
frost$core$Int $tmp1309 = (frost$core$Int) {224u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1310, $tmp1309, &$s1311);
abort(); // unreachable
block109:;
*(&local0) = $tmp1306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$String* $tmp1312 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1313 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1314 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1315 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block107:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:225
frost$io$IndentedOutputStream** $tmp1316 = &param0->types;
frost$io$IndentedOutputStream* $tmp1317 = *$tmp1316;
$fn1319 $tmp1318 = ($fn1319) ((frost$io$OutputStream*) $tmp1317)->$class->vtable[19];
frost$core$Error* $tmp1320 = $tmp1318(((frost$io$OutputStream*) $tmp1317), &$s1321);
if ($tmp1320 == NULL) goto block111; else goto block112;
block112:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Bit $tmp1322 = (frost$core$Bit) {$tmp1320 != NULL};
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block113; else goto block114;
block114:;
frost$core$Int $tmp1324 = (frost$core$Int) {225u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1325, $tmp1324, &$s1326);
abort(); // unreachable
block113:;
*(&local0) = $tmp1320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$String* $tmp1327 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1328 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1329 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1330 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block111:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:226
frost$io$IndentedOutputStream** $tmp1331 = &param0->types;
frost$io$IndentedOutputStream* $tmp1332 = *$tmp1331;
frost$core$Weak** $tmp1333 = &param0->compiler;
frost$core$Weak* $tmp1334 = *$tmp1333;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1335 = &$tmp1334->_valid;
frost$core$Bit $tmp1336 = *$tmp1335;
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block117; else goto block118;
block118:;
frost$core$Int $tmp1338 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1339, $tmp1338);
abort(); // unreachable
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1340 = &$tmp1334->value;
frost$core$Object* $tmp1341 = *$tmp1340;
frost$core$Frost$ref$frost$core$Object$Q($tmp1341);
frost$core$Bit $tmp1342 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1341) != NULL};
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block119; else goto block120;
block120:;
frost$core$Int $tmp1344 = (frost$core$Int) {227u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1345, $tmp1344, &$s1346);
abort(); // unreachable
block119:;
org$frostlang$frostc$Type** $tmp1347 = &((org$frostlang$frostc$Compiler*) $tmp1341)->STRING_TYPE;
org$frostlang$frostc$Type* $tmp1348 = *$tmp1347;
frost$core$String* $tmp1349 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1348);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:227:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$String* $tmp1350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1349, &$s1351);
frost$core$Weak** $tmp1352 = &param0->compiler;
frost$core$Weak* $tmp1353 = *$tmp1352;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:227:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1354 = &$tmp1353->_valid;
frost$core$Bit $tmp1355 = *$tmp1354;
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block124; else goto block125;
block125:;
frost$core$Int $tmp1357 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1358, $tmp1357);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1359 = &$tmp1353->value;
frost$core$Object* $tmp1360 = *$tmp1359;
frost$core$Frost$ref$frost$core$Object$Q($tmp1360);
frost$core$Bit $tmp1361 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1360) != NULL};
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block126; else goto block127;
block127:;
frost$core$Int $tmp1363 = (frost$core$Int) {227u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1364, $tmp1363, &$s1365);
abort(); // unreachable
block126:;
org$frostlang$frostc$Type** $tmp1366 = &((org$frostlang$frostc$Compiler*) $tmp1360)->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp1367 = *$tmp1366;
frost$core$String* $tmp1368 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1367);
frost$core$String* $tmp1369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1350, $tmp1368);
frost$core$String* $tmp1370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1369, &$s1371);
frost$core$String* $tmp1372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1373, $tmp1370);
frost$core$Weak** $tmp1374 = &param0->compiler;
frost$core$Weak* $tmp1375 = *$tmp1374;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:228:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1376 = &$tmp1375->_valid;
frost$core$Bit $tmp1377 = *$tmp1376;
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block130; else goto block131;
block131:;
frost$core$Int $tmp1379 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1380, $tmp1379);
abort(); // unreachable
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1381 = &$tmp1375->value;
frost$core$Object* $tmp1382 = *$tmp1381;
frost$core$Frost$ref$frost$core$Object$Q($tmp1382);
frost$core$Bit $tmp1383 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1382) != NULL};
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block132; else goto block133;
block133:;
frost$core$Int $tmp1385 = (frost$core$Int) {228u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1386, $tmp1385, &$s1387);
abort(); // unreachable
block132:;
frost$collections$ListView* $tmp1388 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1382), param1);
ITable* $tmp1389 = ((frost$collections$CollectionView*) $tmp1388)->$class->itable;
while ($tmp1389->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1389 = $tmp1389->next;
}
$fn1391 $tmp1390 = $tmp1389->methods[0];
frost$core$Int $tmp1392 = $tmp1390(((frost$collections$CollectionView*) $tmp1388));
frost$core$Int$wrapper* $tmp1393;
$tmp1393 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1393->value = $tmp1392;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:228:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1395 $tmp1394 = ($fn1395) ((frost$core$Object*) $tmp1393)->$class->vtable[0];
frost$core$String* $tmp1396 = $tmp1394(((frost$core$Object*) $tmp1393));
frost$core$String* $tmp1397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1398, $tmp1396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$String* $tmp1399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1397, &$s1400);
frost$core$String* $tmp1401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1372, $tmp1399);
frost$core$String** $tmp1402 = &param1->name;
frost$core$String* $tmp1403 = *$tmp1402;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1404 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1405 = *$tmp1404;
frost$core$String* $tmp1406 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1405, $tmp1403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:229:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$String* $tmp1407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1406, &$s1408);
frost$core$String* $tmp1409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1401, $tmp1407);
$fn1411 $tmp1410 = ($fn1411) ((frost$io$OutputStream*) $tmp1332)->$class->vtable[19];
frost$core$Error* $tmp1412 = $tmp1410(((frost$io$OutputStream*) $tmp1332), $tmp1409);
if ($tmp1412 == NULL) goto block137; else goto block138;
block138:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Bit $tmp1413 = (frost$core$Bit) {$tmp1412 != NULL};
bool $tmp1414 = $tmp1413.value;
if ($tmp1414) goto block139; else goto block140;
block140:;
frost$core$Int $tmp1415 = (frost$core$Int) {226u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1416, $tmp1415, &$s1417);
abort(); // unreachable
block139:;
*(&local0) = $tmp1412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
frost$core$Frost$unref$frost$core$Object$Q($tmp1382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$Frost$unref$frost$core$Object$Q($tmp1360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q($tmp1341);
frost$core$String* $tmp1418 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1419 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1420 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1421 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block137:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
frost$core$Frost$unref$frost$core$Object$Q($tmp1382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$Frost$unref$frost$core$Object$Q($tmp1360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q($tmp1341);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:230
frost$io$IndentedOutputStream** $tmp1422 = &param0->types;
frost$io$IndentedOutputStream* $tmp1423 = *$tmp1422;
frost$core$String** $tmp1424 = &param1->name;
frost$core$String* $tmp1425 = *$tmp1424;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1426 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1427 = *$tmp1426;
frost$core$String* $tmp1428 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1427, $tmp1425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$String* $tmp1429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1430, $tmp1428);
frost$core$String* $tmp1431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1429, &$s1432);
frost$core$String** $tmp1433 = &param1->name;
frost$core$String* $tmp1434 = *$tmp1433;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:230:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1435 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1436 = *$tmp1435;
frost$core$String* $tmp1437 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1436, $tmp1434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$String* $tmp1438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1431, $tmp1437);
frost$core$String* $tmp1439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1438, &$s1440);
$fn1442 $tmp1441 = ($fn1442) ((frost$io$OutputStream*) $tmp1423)->$class->vtable[19];
frost$core$Error* $tmp1443 = $tmp1441(((frost$io$OutputStream*) $tmp1423), $tmp1439);
if ($tmp1443 == NULL) goto block143; else goto block144;
block144:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Bit $tmp1444 = (frost$core$Bit) {$tmp1443 != NULL};
bool $tmp1445 = $tmp1444.value;
if ($tmp1445) goto block145; else goto block146;
block146:;
frost$core$Int $tmp1446 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1447, $tmp1446, &$s1448);
abort(); // unreachable
block145:;
*(&local0) = $tmp1443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$String* $tmp1449 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1450 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1451 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block143:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:231
frost$core$Weak** $tmp1453 = &param0->compiler;
frost$core$Weak* $tmp1454 = *$tmp1453;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:231:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1455 = &$tmp1454->_valid;
frost$core$Bit $tmp1456 = *$tmp1455;
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block151; else goto block152;
block152:;
frost$core$Int $tmp1458 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1459, $tmp1458);
abort(); // unreachable
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1460 = &$tmp1454->value;
frost$core$Object* $tmp1461 = *$tmp1460;
frost$core$Frost$ref$frost$core$Object$Q($tmp1461);
frost$core$Bit $tmp1462 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1461) != NULL};
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block153; else goto block154;
block154:;
frost$core$Int $tmp1464 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1465, $tmp1464, &$s1466);
abort(); // unreachable
block153:;
frost$core$Bit $tmp1467 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1461), param1);
bool $tmp1468 = $tmp1467.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1461);
if ($tmp1468) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:232
frost$io$IndentedOutputStream** $tmp1469 = &param0->types;
frost$io$IndentedOutputStream* $tmp1470 = *$tmp1469;
frost$core$String** $tmp1471 = &param1->name;
frost$core$String* $tmp1472 = *$tmp1471;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:232:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1473 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1474 = *$tmp1473;
frost$core$String* $tmp1475 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1474, $tmp1472);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$core$String* $tmp1476 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1477, $tmp1475);
frost$core$String* $tmp1478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1476, &$s1479);
$fn1481 $tmp1480 = ($fn1481) ((frost$io$OutputStream*) $tmp1470)->$class->vtable[19];
frost$core$Error* $tmp1482 = $tmp1480(((frost$io$OutputStream*) $tmp1470), $tmp1478);
if ($tmp1482 == NULL) goto block156; else goto block157;
block157:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Bit $tmp1483 = (frost$core$Bit) {$tmp1482 != NULL};
bool $tmp1484 = $tmp1483.value;
if ($tmp1484) goto block158; else goto block159;
block159:;
frost$core$Int $tmp1485 = (frost$core$Int) {232u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1486, $tmp1485, &$s1487);
abort(); // unreachable
block158:;
*(&local0) = $tmp1482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$core$String* $tmp1488 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1489 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1490 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1491 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block156:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:233
frost$io$IndentedOutputStream** $tmp1492 = &param0->types;
frost$io$IndentedOutputStream* $tmp1493 = *$tmp1492;
frost$core$Int* $tmp1494 = &$tmp1493->level;
frost$core$Int $tmp1495 = *$tmp1494;
frost$core$Int $tmp1496 = (frost$core$Int) {1u};
int64_t $tmp1497 = $tmp1495.value;
int64_t $tmp1498 = $tmp1496.value;
int64_t $tmp1499 = $tmp1497 + $tmp1498;
frost$core$Int $tmp1500 = (frost$core$Int) {$tmp1499};
frost$core$Int* $tmp1501 = &$tmp1493->level;
*$tmp1501 = $tmp1500;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:234
frost$io$IndentedOutputStream** $tmp1502 = &param0->types;
frost$io$IndentedOutputStream* $tmp1503 = *$tmp1502;
$fn1505 $tmp1504 = ($fn1505) ((frost$io$OutputStream*) $tmp1503)->$class->vtable[19];
frost$core$Error* $tmp1506 = $tmp1504(((frost$io$OutputStream*) $tmp1503), &$s1507);
if ($tmp1506 == NULL) goto block160; else goto block161;
block161:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
frost$core$Bit $tmp1508 = (frost$core$Bit) {$tmp1506 != NULL};
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block162; else goto block163;
block163:;
frost$core$Int $tmp1510 = (frost$core$Int) {234u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1511, $tmp1510, &$s1512);
abort(); // unreachable
block162:;
*(&local0) = $tmp1506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
frost$core$String* $tmp1513 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1514 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1515 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1516 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block160:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:235
frost$io$IndentedOutputStream** $tmp1517 = &param0->types;
frost$io$IndentedOutputStream* $tmp1518 = *$tmp1517;
$fn1520 $tmp1519 = ($fn1520) ((frost$io$OutputStream*) $tmp1518)->$class->vtable[19];
frost$core$Error* $tmp1521 = $tmp1519(((frost$io$OutputStream*) $tmp1518), &$s1522);
if ($tmp1521 == NULL) goto block164; else goto block165;
block165:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
frost$core$Bit $tmp1523 = (frost$core$Bit) {$tmp1521 != NULL};
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block166; else goto block167;
block167:;
frost$core$Int $tmp1525 = (frost$core$Int) {235u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1526, $tmp1525, &$s1527);
abort(); // unreachable
block166:;
*(&local0) = $tmp1521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
frost$core$String* $tmp1528 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1529 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1530 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1531 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block164:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:236
frost$io$IndentedOutputStream** $tmp1532 = &param0->types;
frost$io$IndentedOutputStream* $tmp1533 = *$tmp1532;
$fn1535 $tmp1534 = ($fn1535) ((frost$io$OutputStream*) $tmp1533)->$class->vtable[19];
frost$core$Error* $tmp1536 = $tmp1534(((frost$io$OutputStream*) $tmp1533), &$s1537);
if ($tmp1536 == NULL) goto block168; else goto block169;
block169:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$Bit $tmp1538 = (frost$core$Bit) {$tmp1536 != NULL};
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block170; else goto block171;
block171:;
frost$core$Int $tmp1540 = (frost$core$Int) {236u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1541, $tmp1540, &$s1542);
abort(); // unreachable
block170:;
*(&local0) = $tmp1536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$String* $tmp1543 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1544 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1545 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1546 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block168:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:237
frost$io$IndentedOutputStream** $tmp1547 = &param0->types;
frost$io$IndentedOutputStream* $tmp1548 = *$tmp1547;
org$frostlang$frostc$Type** $tmp1549 = &param1->type;
org$frostlang$frostc$Type* $tmp1550 = *$tmp1549;
frost$core$String* $tmp1551 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1550);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:237:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
frost$core$String* $tmp1552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1551, &$s1553);
$fn1555 $tmp1554 = ($fn1555) ((frost$io$OutputStream*) $tmp1548)->$class->vtable[19];
frost$core$Error* $tmp1556 = $tmp1554(((frost$io$OutputStream*) $tmp1548), $tmp1552);
if ($tmp1556 == NULL) goto block173; else goto block174;
block174:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Bit $tmp1557 = (frost$core$Bit) {$tmp1556 != NULL};
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block175; else goto block176;
block176:;
frost$core$Int $tmp1559 = (frost$core$Int) {237u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1560, $tmp1559, &$s1561);
abort(); // unreachable
block175:;
*(&local0) = $tmp1556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
frost$core$String* $tmp1562 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1563 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1564 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1565 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block173:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:238
frost$io$IndentedOutputStream** $tmp1566 = &param0->types;
frost$io$IndentedOutputStream* $tmp1567 = *$tmp1566;
frost$core$Int* $tmp1568 = &$tmp1567->level;
frost$core$Int $tmp1569 = *$tmp1568;
frost$core$Int $tmp1570 = (frost$core$Int) {1u};
int64_t $tmp1571 = $tmp1569.value;
int64_t $tmp1572 = $tmp1570.value;
int64_t $tmp1573 = $tmp1571 - $tmp1572;
frost$core$Int $tmp1574 = (frost$core$Int) {$tmp1573};
frost$core$Int* $tmp1575 = &$tmp1567->level;
*$tmp1575 = $tmp1574;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:239
frost$io$IndentedOutputStream** $tmp1576 = &param0->types;
frost$io$IndentedOutputStream* $tmp1577 = *$tmp1576;
frost$core$String** $tmp1578 = &param1->name;
frost$core$String* $tmp1579 = *$tmp1578;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:239:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1580 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1581 = *$tmp1580;
frost$core$String* $tmp1582 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1581, $tmp1579);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
frost$core$String* $tmp1583 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1584, $tmp1582);
frost$core$String* $tmp1585 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1583, &$s1586);
$fn1588 $tmp1587 = ($fn1588) ((frost$io$OutputStream*) $tmp1577)->$class->vtable[19];
frost$core$Error* $tmp1589 = $tmp1587(((frost$io$OutputStream*) $tmp1577), $tmp1585);
if ($tmp1589 == NULL) goto block178; else goto block179;
block179:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Bit $tmp1590 = (frost$core$Bit) {$tmp1589 != NULL};
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block180; else goto block181;
block181:;
frost$core$Int $tmp1592 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1593, $tmp1592, &$s1594);
abort(); // unreachable
block180:;
*(&local0) = $tmp1589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
frost$core$String* $tmp1595 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1596 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1597 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1598 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block178:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:240
frost$io$IndentedOutputStream** $tmp1599 = &param0->types;
frost$io$IndentedOutputStream* $tmp1600 = *$tmp1599;
frost$core$String** $tmp1601 = &param1->name;
frost$core$String* $tmp1602 = *$tmp1601;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:240:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1603 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1604 = *$tmp1603;
frost$core$String* $tmp1605 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1604, $tmp1602);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
frost$core$String* $tmp1606 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1607, $tmp1605);
frost$core$String* $tmp1608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1606, &$s1609);
$fn1611 $tmp1610 = ($fn1611) ((frost$io$OutputStream*) $tmp1600)->$class->vtable[19];
frost$core$Error* $tmp1612 = $tmp1610(((frost$io$OutputStream*) $tmp1600), $tmp1608);
if ($tmp1612 == NULL) goto block183; else goto block184;
block184:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
frost$core$Bit $tmp1613 = (frost$core$Bit) {$tmp1612 != NULL};
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block185; else goto block186;
block186:;
frost$core$Int $tmp1615 = (frost$core$Int) {240u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1616, $tmp1615, &$s1617);
abort(); // unreachable
block185:;
*(&local0) = $tmp1612;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
frost$core$String* $tmp1618 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1619 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1620 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1621 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block183:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:241
frost$io$IndentedOutputStream** $tmp1622 = &param0->types;
frost$io$IndentedOutputStream* $tmp1623 = *$tmp1622;
frost$core$Int* $tmp1624 = &$tmp1623->level;
frost$core$Int $tmp1625 = *$tmp1624;
frost$core$Int $tmp1626 = (frost$core$Int) {1u};
int64_t $tmp1627 = $tmp1625.value;
int64_t $tmp1628 = $tmp1626.value;
int64_t $tmp1629 = $tmp1627 + $tmp1628;
frost$core$Int $tmp1630 = (frost$core$Int) {$tmp1629};
frost$core$Int* $tmp1631 = &$tmp1623->level;
*$tmp1631 = $tmp1630;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:242
frost$io$IndentedOutputStream** $tmp1632 = &param0->types;
frost$io$IndentedOutputStream* $tmp1633 = *$tmp1632;
frost$core$String** $tmp1634 = &param1->name;
frost$core$String* $tmp1635 = *$tmp1634;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1636 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1637 = *$tmp1636;
frost$core$String* $tmp1638 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1637, $tmp1635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:242:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$core$String* $tmp1639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1638, &$s1640);
$fn1642 $tmp1641 = ($fn1642) ((frost$io$OutputStream*) $tmp1633)->$class->vtable[19];
frost$core$Error* $tmp1643 = $tmp1641(((frost$io$OutputStream*) $tmp1633), $tmp1639);
if ($tmp1643 == NULL) goto block189; else goto block190;
block190:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$core$Bit $tmp1644 = (frost$core$Bit) {$tmp1643 != NULL};
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block191; else goto block192;
block192:;
frost$core$Int $tmp1646 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1647, $tmp1646, &$s1648);
abort(); // unreachable
block191:;
*(&local0) = $tmp1643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$core$String* $tmp1649 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1650 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1651 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1652 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block189:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:243
frost$io$IndentedOutputStream** $tmp1653 = &param0->types;
frost$io$IndentedOutputStream* $tmp1654 = *$tmp1653;
$fn1656 $tmp1655 = ($fn1656) ((frost$io$OutputStream*) $tmp1654)->$class->vtable[19];
frost$core$Error* $tmp1657 = $tmp1655(((frost$io$OutputStream*) $tmp1654), &$s1658);
if ($tmp1657 == NULL) goto block193; else goto block194;
block194:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
frost$core$Bit $tmp1659 = (frost$core$Bit) {$tmp1657 != NULL};
bool $tmp1660 = $tmp1659.value;
if ($tmp1660) goto block195; else goto block196;
block196:;
frost$core$Int $tmp1661 = (frost$core$Int) {243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1662, $tmp1661, &$s1663);
abort(); // unreachable
block195:;
*(&local0) = $tmp1657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
frost$core$String* $tmp1664 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1665 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1666 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1667 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block193:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:244
frost$io$IndentedOutputStream** $tmp1668 = &param0->types;
frost$io$IndentedOutputStream* $tmp1669 = *$tmp1668;
frost$core$Int* $tmp1670 = &$tmp1669->level;
frost$core$Int $tmp1671 = *$tmp1670;
frost$core$Int $tmp1672 = (frost$core$Int) {1u};
int64_t $tmp1673 = $tmp1671.value;
int64_t $tmp1674 = $tmp1672.value;
int64_t $tmp1675 = $tmp1673 - $tmp1674;
frost$core$Int $tmp1676 = (frost$core$Int) {$tmp1675};
frost$core$Int* $tmp1677 = &$tmp1669->level;
*$tmp1677 = $tmp1676;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:245
frost$io$IndentedOutputStream** $tmp1678 = &param0->types;
frost$io$IndentedOutputStream* $tmp1679 = *$tmp1678;
frost$core$String** $tmp1680 = &param1->name;
frost$core$String* $tmp1681 = *$tmp1680;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:245:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1682 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1683 = *$tmp1682;
frost$core$String* $tmp1684 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1683, $tmp1681);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$String* $tmp1685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1686, $tmp1684);
frost$core$String* $tmp1687 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1685, &$s1688);
$fn1690 $tmp1689 = ($fn1690) ((frost$io$OutputStream*) $tmp1679)->$class->vtable[19];
frost$core$Error* $tmp1691 = $tmp1689(((frost$io$OutputStream*) $tmp1679), $tmp1687);
if ($tmp1691 == NULL) goto block198; else goto block199;
block199:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Bit $tmp1692 = (frost$core$Bit) {$tmp1691 != NULL};
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block200; else goto block201;
block201:;
frost$core$Int $tmp1694 = (frost$core$Int) {245u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1695, $tmp1694, &$s1696);
abort(); // unreachable
block200:;
*(&local0) = $tmp1691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$String* $tmp1697 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1698 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1699 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1700 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block198:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:246
frost$core$Weak** $tmp1701 = &param0->compiler;
frost$core$Weak* $tmp1702 = *$tmp1701;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1703 = &$tmp1702->_valid;
frost$core$Bit $tmp1704 = *$tmp1703;
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block204; else goto block205;
block205:;
frost$core$Int $tmp1706 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1707, $tmp1706);
abort(); // unreachable
block204:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1708 = &$tmp1702->value;
frost$core$Object* $tmp1709 = *$tmp1708;
frost$core$Frost$ref$frost$core$Object$Q($tmp1709);
frost$core$Bit $tmp1710 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1709) != NULL};
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block206; else goto block207;
block207:;
frost$core$Int $tmp1712 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1713, $tmp1712, &$s1714);
abort(); // unreachable
block206:;
frost$core$Weak** $tmp1715 = &param0->compiler;
frost$core$Weak* $tmp1716 = *$tmp1715;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:246:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1717 = &$tmp1716->_valid;
frost$core$Bit $tmp1718 = *$tmp1717;
bool $tmp1719 = $tmp1718.value;
if ($tmp1719) goto block210; else goto block211;
block211:;
frost$core$Int $tmp1720 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1721, $tmp1720);
abort(); // unreachable
block210:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1722 = &$tmp1716->value;
frost$core$Object* $tmp1723 = *$tmp1722;
frost$core$Frost$ref$frost$core$Object$Q($tmp1723);
frost$core$Bit $tmp1724 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1723) != NULL};
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block212; else goto block213;
block213:;
frost$core$Int $tmp1726 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1727, $tmp1726, &$s1728);
abort(); // unreachable
block212:;
org$frostlang$frostc$Type** $tmp1729 = &((org$frostlang$frostc$Compiler*) $tmp1723)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp1730 = *$tmp1729;
org$frostlang$frostc$ClassDecl* $tmp1731 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1709), $tmp1730);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
org$frostlang$frostc$ClassDecl* $tmp1732 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local9) = $tmp1731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q($tmp1723);
frost$core$Frost$unref$frost$core$Object$Q($tmp1709);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:247
frost$core$Weak** $tmp1733 = &param0->compiler;
frost$core$Weak* $tmp1734 = *$tmp1733;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:247:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1735 = &$tmp1734->_valid;
frost$core$Bit $tmp1736 = *$tmp1735;
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block216; else goto block217;
block217:;
frost$core$Int $tmp1738 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1739, $tmp1738);
abort(); // unreachable
block216:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1740 = &$tmp1734->value;
frost$core$Object* $tmp1741 = *$tmp1740;
frost$core$Frost$ref$frost$core$Object$Q($tmp1741);
frost$core$Bit $tmp1742 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1741) != NULL};
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block218; else goto block219;
block219:;
frost$core$Int $tmp1744 = (frost$core$Int) {247u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1745, $tmp1744, &$s1746);
abort(); // unreachable
block218:;
org$frostlang$frostc$ClassDecl* $tmp1747 = *(&local9);
frost$core$Bit $tmp1748 = (frost$core$Bit) {$tmp1747 != NULL};
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block220; else goto block221;
block221:;
frost$core$Int $tmp1750 = (frost$core$Int) {247u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1751, $tmp1750, &$s1752);
abort(); // unreachable
block220:;
frost$collections$ListView* $tmp1753 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1741), $tmp1747);
*(&local10) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
frost$collections$ListView* $tmp1754 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
*(&local10) = $tmp1753;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
frost$core$Frost$unref$frost$core$Object$Q($tmp1741);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:248
frost$io$IndentedOutputStream** $tmp1755 = &param0->types;
frost$io$IndentedOutputStream* $tmp1756 = *$tmp1755;
frost$collections$ListView* $tmp1757 = *(&local10);
ITable* $tmp1758 = ((frost$collections$CollectionView*) $tmp1757)->$class->itable;
while ($tmp1758->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1758 = $tmp1758->next;
}
$fn1760 $tmp1759 = $tmp1758->methods[0];
frost$core$Int $tmp1761 = $tmp1759(((frost$collections$CollectionView*) $tmp1757));
frost$core$Int$wrapper* $tmp1762;
$tmp1762 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1762->value = $tmp1761;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:250:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1764 $tmp1763 = ($fn1764) ((frost$core$Object*) $tmp1762)->$class->vtable[0];
frost$core$String* $tmp1765 = $tmp1763(((frost$core$Object*) $tmp1762));
frost$core$String* $tmp1766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1767, $tmp1765);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$String* $tmp1768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1766, &$s1769);
frost$core$String* $tmp1770 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1771, $tmp1768);
frost$core$String** $tmp1772 = &param1->name;
frost$core$String* $tmp1773 = *$tmp1772;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1774 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1775 = *$tmp1774;
frost$core$String* $tmp1776 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1775, $tmp1773);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:251:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$core$String* $tmp1777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1776, &$s1778);
frost$core$String* $tmp1779 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1770, $tmp1777);
$fn1781 $tmp1780 = ($fn1781) ((frost$io$OutputStream*) $tmp1756)->$class->vtable[19];
frost$core$Error* $tmp1782 = $tmp1780(((frost$io$OutputStream*) $tmp1756), $tmp1779);
if ($tmp1782 == NULL) goto block225; else goto block226;
block226:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$Bit $tmp1783 = (frost$core$Bit) {$tmp1782 != NULL};
bool $tmp1784 = $tmp1783.value;
if ($tmp1784) goto block227; else goto block228;
block228:;
frost$core$Int $tmp1785 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1786, $tmp1785, &$s1787);
abort(); // unreachable
block227:;
*(&local0) = $tmp1782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
frost$collections$ListView* $tmp1788 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1789 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1790 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1791 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1792 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1793 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block225:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:252
frost$io$IndentedOutputStream** $tmp1794 = &param0->types;
frost$io$IndentedOutputStream* $tmp1795 = *$tmp1794;
frost$core$String** $tmp1796 = &param1->name;
frost$core$String* $tmp1797 = *$tmp1796;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:252:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1798 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1799 = *$tmp1798;
frost$core$String* $tmp1800 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1799, $tmp1797);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$String* $tmp1801 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1802, $tmp1800);
frost$core$String* $tmp1803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1801, &$s1804);
frost$core$String** $tmp1805 = &param1->name;
frost$core$String* $tmp1806 = *$tmp1805;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1807 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1808 = *$tmp1807;
frost$core$String* $tmp1809 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1808, $tmp1806);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:253:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$String* $tmp1810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1809, &$s1811);
frost$core$String* $tmp1812 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1803, $tmp1810);
$fn1814 $tmp1813 = ($fn1814) ((frost$io$OutputStream*) $tmp1795)->$class->vtable[19];
frost$core$Error* $tmp1815 = $tmp1813(((frost$io$OutputStream*) $tmp1795), $tmp1812);
if ($tmp1815 == NULL) goto block232; else goto block233;
block233:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Bit $tmp1816 = (frost$core$Bit) {$tmp1815 != NULL};
bool $tmp1817 = $tmp1816.value;
if ($tmp1817) goto block234; else goto block235;
block235:;
frost$core$Int $tmp1818 = (frost$core$Int) {252u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1819, $tmp1818, &$s1820);
abort(); // unreachable
block234:;
*(&local0) = $tmp1815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$collections$ListView* $tmp1821 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1822 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1823 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1824 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1825 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1826 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block232:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$collections$ListView* $tmp1827 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
*(&local10) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1828 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block148;
block148:;
frost$core$String* $tmp1829 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1830 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1831 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1832 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:257
frost$core$Weak** $tmp1833 = &param0->compiler;
frost$core$Weak* $tmp1834 = *$tmp1833;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:257:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1835 = &$tmp1834->_valid;
frost$core$Bit $tmp1836 = *$tmp1835;
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block238; else goto block239;
block239:;
frost$core$Int $tmp1838 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1839, $tmp1838);
abort(); // unreachable
block238:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1840 = &$tmp1834->value;
frost$core$Object* $tmp1841 = *$tmp1840;
frost$core$Frost$ref$frost$core$Object$Q($tmp1841);
frost$core$Bit $tmp1842 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1841) != NULL};
bool $tmp1843 = $tmp1842.value;
if ($tmp1843) goto block240; else goto block241;
block241:;
frost$core$Int $tmp1844 = (frost$core$Int) {257u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1845, $tmp1844, &$s1846);
abort(); // unreachable
block240:;
org$frostlang$frostc$Position* $tmp1847 = &param1->position;
org$frostlang$frostc$Position $tmp1848 = *$tmp1847;
frost$core$Error* $tmp1849 = *(&local0);
frost$core$String** $tmp1850 = &$tmp1849->message;
frost$core$String* $tmp1851 = *$tmp1850;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1841), $tmp1848, $tmp1851);
frost$core$Frost$unref$frost$core$Object$Q($tmp1841);
goto block2;
block2:;
frost$core$Error* $tmp1852 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:262
frost$core$Weak** $tmp1853 = &param1->owner;
frost$core$Weak* $tmp1854 = *$tmp1853;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:262:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1855 = &$tmp1854->_valid;
frost$core$Bit $tmp1856 = *$tmp1855;
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block3; else goto block4;
block4:;
frost$core$Int $tmp1858 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1859, $tmp1858);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1860 = &$tmp1854->value;
frost$core$Object* $tmp1861 = *$tmp1860;
frost$core$Frost$ref$frost$core$Object$Q($tmp1861);
org$frostlang$frostc$Type** $tmp1862 = &((org$frostlang$frostc$ClassDecl*) $tmp1861)->type;
org$frostlang$frostc$Type* $tmp1863 = *$tmp1862;
frost$core$String* $tmp1864 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1863);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$String* $tmp1865 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local0) = $tmp1864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$Frost$unref$frost$core$Object$Q($tmp1861);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:263
org$frostlang$frostc$MethodDecl$Kind* $tmp1866 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1867 = *$tmp1866;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1868;
$tmp1868 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1868->value = $tmp1867;
frost$core$Int $tmp1869 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from HCodeGenerator.frost:263:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp1870 = &(&local2)->$rawValue;
*$tmp1870 = $tmp1869;
org$frostlang$frostc$MethodDecl$Kind $tmp1871 = *(&local2);
*(&local1) = $tmp1871;
org$frostlang$frostc$MethodDecl$Kind $tmp1872 = *(&local1);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1873;
$tmp1873 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1873->value = $tmp1872;
ITable* $tmp1874 = ((frost$core$Equatable*) $tmp1868)->$class->itable;
while ($tmp1874->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1874 = $tmp1874->next;
}
$fn1876 $tmp1875 = $tmp1874->methods[0];
frost$core$Bit $tmp1877 = $tmp1875(((frost$core$Equatable*) $tmp1868), ((frost$core$Equatable*) $tmp1873));
bool $tmp1878 = $tmp1877.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1873)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1868)));
if ($tmp1878) goto block7; else goto block6;
block7:;
frost$core$String* $tmp1879 = *(&local0);
frost$core$Bit $tmp1880 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1879, &$s1881);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:263:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1882 = $tmp1880.value;
bool $tmp1883 = !$tmp1882;
frost$core$Bit $tmp1884 = (frost$core$Bit) {$tmp1883};
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:264
frost$core$String* $tmp1886 = *(&local0);
frost$core$String* $tmp1887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1886, &$s1888);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$String* $tmp1889 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1887;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:266
frost$core$String* $tmp1890 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
frost$core$String* $tmp1891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1890;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:286
org$frostlang$frostc$Type** $tmp1892 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1893 = *$tmp1892;
frost$core$Bit $tmp1894 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1893);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:286:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1895 = $tmp1894.value;
bool $tmp1896 = !$tmp1895;
frost$core$Bit $tmp1897 = (frost$core$Bit) {$tmp1896};
bool $tmp1898 = $tmp1897.value;
if ($tmp1898) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:287
frost$core$Bit $tmp1899 = (frost$core$Bit) {false};
return $tmp1899;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:289
org$frostlang$frostc$Annotations** $tmp1900 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1901 = *$tmp1900;
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from HCodeGenerator.frost:289:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
frost$core$Int* $tmp1902 = &$tmp1901->flags;
frost$core$Int $tmp1903 = *$tmp1902;
frost$core$Int $tmp1904 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1905 = $tmp1903.value;
int64_t $tmp1906 = $tmp1904.value;
int64_t $tmp1907 = $tmp1905 & $tmp1906;
frost$core$Int $tmp1908 = (frost$core$Int) {$tmp1907};
frost$core$Int $tmp1909 = (frost$core$Int) {0u};
int64_t $tmp1910 = $tmp1908.value;
int64_t $tmp1911 = $tmp1909.value;
bool $tmp1912 = $tmp1910 != $tmp1911;
frost$core$Bit $tmp1913 = (frost$core$Bit) {$tmp1912};
bool $tmp1914 = $tmp1913.value;
if ($tmp1914) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1915 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1916 = *$tmp1915;
frost$core$Bit $tmp1917 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1916);
*(&local1) = $tmp1917;
goto block8;
block7:;
*(&local1) = $tmp1913;
goto block8;
block8:;
frost$core$Bit $tmp1918 = *(&local1);
bool $tmp1919 = $tmp1918.value;
if ($tmp1919) goto block9; else goto block10;
block9:;
frost$core$Weak** $tmp1920 = &param0->compiler;
frost$core$Weak* $tmp1921 = *$tmp1920;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1922 = &$tmp1921->_valid;
frost$core$Bit $tmp1923 = *$tmp1922;
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1925 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1926, $tmp1925);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1927 = &$tmp1921->value;
frost$core$Object* $tmp1928 = *$tmp1927;
frost$core$Frost$ref$frost$core$Object$Q($tmp1928);
frost$core$Bit $tmp1929 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1928) != NULL};
bool $tmp1930 = $tmp1929.value;
if ($tmp1930) goto block16; else goto block17;
block17:;
frost$core$Int $tmp1931 = (frost$core$Int) {290u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1932, $tmp1931, &$s1933);
abort(); // unreachable
block16:;
frost$core$Weak** $tmp1934 = &param0->compiler;
frost$core$Weak* $tmp1935 = *$tmp1934;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:290:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1936 = &$tmp1935->_valid;
frost$core$Bit $tmp1937 = *$tmp1936;
bool $tmp1938 = $tmp1937.value;
if ($tmp1938) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1939 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1940, $tmp1939);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1941 = &$tmp1935->value;
frost$core$Object* $tmp1942 = *$tmp1941;
frost$core$Frost$ref$frost$core$Object$Q($tmp1942);
frost$core$Bit $tmp1943 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp1942) != NULL};
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1945 = (frost$core$Int) {290u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1946, $tmp1945, &$s1947);
abort(); // unreachable
block22:;
org$frostlang$frostc$Type** $tmp1948 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1949 = *$tmp1948;
org$frostlang$frostc$ClassDecl* $tmp1950 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1942), $tmp1949);
frost$core$Bit $tmp1951 = (frost$core$Bit) {$tmp1950 != NULL};
bool $tmp1952 = $tmp1951.value;
if ($tmp1952) goto block24; else goto block25;
block25:;
frost$core$Int $tmp1953 = (frost$core$Int) {290u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1954, $tmp1953, &$s1955);
abort(); // unreachable
block24:;
frost$core$Bit $tmp1956 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1928), $tmp1950);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
frost$core$Frost$unref$frost$core$Object$Q($tmp1942);
frost$core$Frost$unref$frost$core$Object$Q($tmp1928);
*(&local0) = $tmp1956;
goto block11;
block10:;
*(&local0) = $tmp1918;
goto block11;
block11:;
frost$core$Bit $tmp1957 = *(&local0);
*(&local2) = $tmp1957;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:295
frost$core$Bit $tmp1958 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1959 = $tmp1958.value;
bool $tmp1960 = !$tmp1959;
frost$core$Bit $tmp1961 = (frost$core$Bit) {$tmp1960};
bool $tmp1962 = $tmp1961.value;
if ($tmp1962) goto block27; else goto block28;
block27:;
*(&local3) = $tmp1961;
goto block29;
block28:;
org$frostlang$frostc$Annotations** $tmp1963 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1964 = *$tmp1963;
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from HCodeGenerator.frost:295:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
frost$core$Int* $tmp1965 = &$tmp1964->flags;
frost$core$Int $tmp1966 = *$tmp1965;
frost$core$Int $tmp1967 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1968 = $tmp1966.value;
int64_t $tmp1969 = $tmp1967.value;
int64_t $tmp1970 = $tmp1968 & $tmp1969;
frost$core$Int $tmp1971 = (frost$core$Int) {$tmp1970};
frost$core$Int $tmp1972 = (frost$core$Int) {0u};
int64_t $tmp1973 = $tmp1971.value;
int64_t $tmp1974 = $tmp1972.value;
bool $tmp1975 = $tmp1973 != $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:295:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1977 = $tmp1976.value;
bool $tmp1978 = !$tmp1977;
frost$core$Bit $tmp1979 = (frost$core$Bit) {$tmp1978};
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Annotations** $tmp1981 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1982 = *$tmp1981;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from HCodeGenerator.frost:295:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp1983 = &$tmp1982->flags;
frost$core$Int $tmp1984 = *$tmp1983;
frost$core$Int $tmp1985 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1986 = $tmp1984.value;
int64_t $tmp1987 = $tmp1985.value;
int64_t $tmp1988 = $tmp1986 & $tmp1987;
frost$core$Int $tmp1989 = (frost$core$Int) {$tmp1988};
frost$core$Int $tmp1990 = (frost$core$Int) {0u};
int64_t $tmp1991 = $tmp1989.value;
int64_t $tmp1992 = $tmp1990.value;
bool $tmp1993 = $tmp1991 != $tmp1992;
frost$core$Bit $tmp1994 = (frost$core$Bit) {$tmp1993};
bool $tmp1995 = $tmp1994.value;
if ($tmp1995) goto block38; else goto block39;
block38:;
*(&local5) = $tmp1994;
goto block40;
block39:;
org$frostlang$frostc$Annotations** $tmp1996 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1997 = *$tmp1996;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:296:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp1998 = &$tmp1997->flags;
frost$core$Int $tmp1999 = *$tmp1998;
frost$core$Int $tmp2000 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2001 = $tmp1999.value;
int64_t $tmp2002 = $tmp2000.value;
int64_t $tmp2003 = $tmp2001 & $tmp2002;
frost$core$Int $tmp2004 = (frost$core$Int) {$tmp2003};
frost$core$Int $tmp2005 = (frost$core$Int) {0u};
int64_t $tmp2006 = $tmp2004.value;
int64_t $tmp2007 = $tmp2005.value;
bool $tmp2008 = $tmp2006 != $tmp2007;
frost$core$Bit $tmp2009 = (frost$core$Bit) {$tmp2008};
*(&local5) = $tmp2009;
goto block40;
block40:;
frost$core$Bit $tmp2010 = *(&local5);
*(&local4) = $tmp2010;
goto block35;
block34:;
*(&local4) = $tmp1979;
goto block35;
block35:;
frost$core$Bit $tmp2011 = *(&local4);
*(&local3) = $tmp2011;
goto block29;
block29:;
frost$core$Bit $tmp2012 = *(&local3);
bool $tmp2013 = $tmp2012.value;
if ($tmp2013) goto block43; else goto block44;
block44:;
frost$core$Int $tmp2014 = (frost$core$Int) {295u};
frost$core$String* $tmp2015 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp2016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2017, $tmp2015);
frost$core$String* $tmp2018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2016, &$s2019);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2020, $tmp2014, $tmp2018);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:297
frost$core$Bit $tmp2021 = *(&local2);
return $tmp2021;

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
frost$io$MemoryOutputStream** $tmp2022 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp2023 = *$tmp2022;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
frost$io$MemoryOutputStream** $tmp2024 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp2025 = *$tmp2024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
frost$io$MemoryOutputStream** $tmp2026 = &param0->importStream;
*$tmp2026 = $tmp2023;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:304
frost$collections$HashSet** $tmp2027 = &param0->bodyImports;
frost$collections$HashSet* $tmp2028 = *$tmp2027;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$collections$HashSet** $tmp2029 = &param0->imports;
frost$collections$HashSet* $tmp2030 = *$tmp2029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
frost$collections$HashSet** $tmp2031 = &param0->imports;
*$tmp2031 = $tmp2028;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:305
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2032));
frost$core$String* $tmp2033 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
*(&local1) = &$s2034;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:306
frost$core$Bit $tmp2035 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:307
frost$io$IndentedOutputStream** $tmp2037 = &param0->body;
frost$io$IndentedOutputStream* $tmp2038 = *$tmp2037;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:307:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp2039 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp2040 = *$tmp2039;
frost$core$String* $tmp2041 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp2040, param1);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
frost$core$String* $tmp2042 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
*(&local2) = $tmp2041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp2043 = *(&local2);
frost$core$Bit $tmp2044 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2043, &$s2045);
bool $tmp2046 = $tmp2044.value;
if ($tmp2046) goto block7; else goto block8;
block8:;
frost$core$Int $tmp2047 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2048, $tmp2047);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp2049 = *(&local2);
frost$core$Int $tmp2050 = (frost$core$Int) {1u};
frost$core$Bit $tmp2051 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp2052 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp2050, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp2051);
frost$core$String* $tmp2053 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp2049, $tmp2052);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$core$String* $tmp2054 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2056, $tmp2053);
frost$core$String* $tmp2057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2055, &$s2058);
org$frostlang$frostc$Type** $tmp2059 = &param1->returnType;
org$frostlang$frostc$Type* $tmp2060 = *$tmp2059;
frost$core$String* $tmp2061 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2060);
frost$core$String* $tmp2062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2057, $tmp2061);
frost$core$String* $tmp2063 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2062, &$s2064);
$fn2066 $tmp2065 = ($fn2066) ((frost$io$OutputStream*) $tmp2038)->$class->vtable[17];
frost$core$Error* $tmp2067 = $tmp2065(((frost$io$OutputStream*) $tmp2038), $tmp2063);
if ($tmp2067 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
frost$core$Bit $tmp2068 = (frost$core$Bit) {$tmp2067 != NULL};
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block11; else goto block12;
block12:;
frost$core$Int $tmp2070 = (frost$core$Int) {307u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2071, $tmp2070, &$s2072);
abort(); // unreachable
block11:;
*(&local0) = $tmp2067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$core$String* $tmp2073 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2074));
frost$core$String* $tmp2075 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local1) = &$s2076;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:311
frost$io$IndentedOutputStream** $tmp2077 = &param0->body;
frost$io$IndentedOutputStream* $tmp2078 = *$tmp2077;
org$frostlang$frostc$Type** $tmp2079 = &param1->returnType;
org$frostlang$frostc$Type* $tmp2080 = *$tmp2079;
frost$core$String* $tmp2081 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2080);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$String* $tmp2082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2081, &$s2083);
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:311:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp2084 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp2085 = *$tmp2084;
frost$core$String* $tmp2086 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp2085, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
frost$core$String* $tmp2087 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
*(&local3) = $tmp2086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp2088 = *(&local3);
frost$core$Bit $tmp2089 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2088, &$s2090);
bool $tmp2091 = $tmp2089.value;
if ($tmp2091) goto block15; else goto block16;
block16:;
frost$core$Int $tmp2092 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2093, $tmp2092);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp2094 = *(&local3);
frost$core$Int $tmp2095 = (frost$core$Int) {1u};
frost$core$Bit $tmp2096 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp2097 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp2095, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp2096);
frost$core$String* $tmp2098 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp2094, $tmp2097);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$String* $tmp2099 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2082, $tmp2098);
frost$core$String* $tmp2101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2100, &$s2102);
$fn2104 $tmp2103 = ($fn2104) ((frost$io$OutputStream*) $tmp2078)->$class->vtable[17];
frost$core$Error* $tmp2105 = $tmp2103(((frost$io$OutputStream*) $tmp2078), $tmp2101);
if ($tmp2105 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$Bit $tmp2106 = (frost$core$Bit) {$tmp2105 != NULL};
bool $tmp2107 = $tmp2106.value;
if ($tmp2107) goto block19; else goto block20;
block20:;
frost$core$Int $tmp2108 = (frost$core$Int) {311u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2109, $tmp2108, &$s2110);
abort(); // unreachable
block19:;
*(&local0) = $tmp2105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$String* $tmp2111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:313
org$frostlang$frostc$Annotations** $tmp2112 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2113 = *$tmp2112;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:313:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp2114 = &$tmp2113->flags;
frost$core$Int $tmp2115 = *$tmp2114;
frost$core$Int $tmp2116 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2117 = $tmp2115.value;
int64_t $tmp2118 = $tmp2116.value;
int64_t $tmp2119 = $tmp2117 & $tmp2118;
frost$core$Int $tmp2120 = (frost$core$Int) {$tmp2119};
frost$core$Int $tmp2121 = (frost$core$Int) {0u};
int64_t $tmp2122 = $tmp2120.value;
int64_t $tmp2123 = $tmp2121.value;
bool $tmp2124 = $tmp2122 != $tmp2123;
frost$core$Bit $tmp2125 = (frost$core$Bit) {$tmp2124};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2126 = $tmp2125.value;
bool $tmp2127 = !$tmp2126;
frost$core$Bit $tmp2128 = (frost$core$Bit) {$tmp2127};
bool $tmp2129 = $tmp2128.value;
if ($tmp2129) goto block23; else goto block22;
block23:;
frost$core$Weak** $tmp2130 = &param0->compiler;
frost$core$Weak* $tmp2131 = *$tmp2130;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:313:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2132 = &$tmp2131->_valid;
frost$core$Bit $tmp2133 = *$tmp2132;
bool $tmp2134 = $tmp2133.value;
if ($tmp2134) goto block29; else goto block30;
block30:;
frost$core$Int $tmp2135 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2136, $tmp2135);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2137 = &$tmp2131->value;
frost$core$Object* $tmp2138 = *$tmp2137;
frost$core$Frost$ref$frost$core$Object$Q($tmp2138);
frost$core$Bit $tmp2139 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp2138) != NULL};
bool $tmp2140 = $tmp2139.value;
if ($tmp2140) goto block31; else goto block32;
block32:;
frost$core$Int $tmp2141 = (frost$core$Int) {313u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2142, $tmp2141, &$s2143);
abort(); // unreachable
block31:;
// begin inline call to method org.frostlang.frostc.Compiler.isValueInit(m:org.frostlang.frostc.MethodDecl):frost.core.Bit from HCodeGenerator.frost:313:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3969
org$frostlang$frostc$MethodDecl$Kind* $tmp2144 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2145 = *$tmp2144;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2146;
$tmp2146 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2146->value = $tmp2145;
frost$core$Int $tmp2147 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Compiler.frost:3969:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2148 = &(&local6)->$rawValue;
*$tmp2148 = $tmp2147;
org$frostlang$frostc$MethodDecl$Kind $tmp2149 = *(&local6);
*(&local5) = $tmp2149;
org$frostlang$frostc$MethodDecl$Kind $tmp2150 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2151;
$tmp2151 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2151->value = $tmp2150;
ITable* $tmp2152 = ((frost$core$Equatable*) $tmp2146)->$class->itable;
while ($tmp2152->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2152 = $tmp2152->next;
}
$fn2154 $tmp2153 = $tmp2152->methods[0];
frost$core$Bit $tmp2155 = $tmp2153(((frost$core$Equatable*) $tmp2146), ((frost$core$Equatable*) $tmp2151));
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block35; else goto block36;
block35:;
frost$core$Weak** $tmp2157 = &param1->owner;
frost$core$Weak* $tmp2158 = *$tmp2157;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Compiler.frost:3969:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2159 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2158);
bool $tmp2160 = $tmp2159.value;
if ($tmp2160) goto block39; else goto block40;
block40:;
frost$core$Int $tmp2161 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2162, $tmp2161);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2163 = &$tmp2158->value;
frost$core$Object* $tmp2164 = *$tmp2163;
frost$core$Frost$ref$frost$core$Object$Q($tmp2164);
frost$core$Bit $tmp2165 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp2138), ((org$frostlang$frostc$ClassDecl*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q($tmp2164);
*(&local4) = $tmp2165;
goto block37;
block36:;
*(&local4) = $tmp2155;
goto block37;
block37:;
frost$core$Bit $tmp2166 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2151)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2146)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:313:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2167 = $tmp2166.value;
bool $tmp2168 = !$tmp2167;
frost$core$Bit $tmp2169 = (frost$core$Bit) {$tmp2168};
bool $tmp2170 = $tmp2169.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2138);
if ($tmp2170) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:314
frost$io$IndentedOutputStream** $tmp2171 = &param0->body;
frost$io$IndentedOutputStream* $tmp2172 = *$tmp2171;
frost$core$String* $tmp2173 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:314:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
frost$core$String* $tmp2174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2173, &$s2175);
frost$core$String* $tmp2176 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp2177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2174, $tmp2176);
frost$core$String* $tmp2178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2177, &$s2179);
$fn2181 $tmp2180 = ($fn2181) ((frost$io$OutputStream*) $tmp2172)->$class->vtable[17];
frost$core$Error* $tmp2182 = $tmp2180(((frost$io$OutputStream*) $tmp2172), $tmp2178);
if ($tmp2182 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$core$Bit $tmp2183 = (frost$core$Bit) {$tmp2182 != NULL};
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block45; else goto block46;
block46:;
frost$core$Int $tmp2185 = (frost$core$Int) {314u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2186, $tmp2185, &$s2187);
abort(); // unreachable
block45:;
*(&local0) = $tmp2182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
frost$core$String* $tmp2188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:315
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2189));
frost$core$String* $tmp2190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
*(&local1) = &$s2191;
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:317
frost$collections$Array** $tmp2192 = &param1->parameters;
frost$collections$Array* $tmp2193 = *$tmp2192;
ITable* $tmp2194 = ((frost$collections$Iterable*) $tmp2193)->$class->itable;
while ($tmp2194->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2194 = $tmp2194->next;
}
$fn2196 $tmp2195 = $tmp2194->methods[0];
frost$collections$Iterator* $tmp2197 = $tmp2195(((frost$collections$Iterable*) $tmp2193));
goto block47;
block47:;
ITable* $tmp2198 = $tmp2197->$class->itable;
while ($tmp2198->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2198 = $tmp2198->next;
}
$fn2200 $tmp2199 = $tmp2198->methods[0];
frost$core$Bit $tmp2201 = $tmp2199($tmp2197);
bool $tmp2202 = $tmp2201.value;
if ($tmp2202) goto block49; else goto block48;
block48:;
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp2203 = $tmp2197->$class->itable;
while ($tmp2203->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2203 = $tmp2203->next;
}
$fn2205 $tmp2204 = $tmp2203->methods[1];
frost$core$Object* $tmp2206 = $tmp2204($tmp2197);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp2206)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2207 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp2206);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:318
org$frostlang$frostc$MethodDecl$Parameter* $tmp2208 = *(&local7);
frost$core$String** $tmp2209 = &$tmp2208->name;
frost$core$String* $tmp2210 = *$tmp2209;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:318:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp2211 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp2212 = *$tmp2211;
frost$core$String* $tmp2213 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp2212, $tmp2210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
frost$core$String* $tmp2214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2215, $tmp2213);
frost$core$String* $tmp2216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2214, &$s2217);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
frost$core$String* $tmp2218 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local8) = $tmp2216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:319
frost$io$IndentedOutputStream** $tmp2219 = &param0->body;
frost$io$IndentedOutputStream* $tmp2220 = *$tmp2219;
frost$core$String* $tmp2221 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:319:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
frost$core$String* $tmp2222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2221, &$s2223);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2224 = *(&local7);
org$frostlang$frostc$Type** $tmp2225 = &$tmp2224->type;
org$frostlang$frostc$Type* $tmp2226 = *$tmp2225;
frost$core$String* $tmp2227 = *(&local8);
// begin inline call to method org.frostlang.frostc.HCodeGenerator.declaration(t:org.frostlang.frostc.Type, name:frost.core.String):frost.core.String from HCodeGenerator.frost:319:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:174
frost$core$String* $tmp2228 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2226);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:174:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
frost$core$String* $tmp2229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2228, &$s2230);
frost$core$String* $tmp2231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2229, $tmp2227);
frost$core$String* $tmp2232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2231, &$s2233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
frost$core$String* $tmp2234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2222, $tmp2232);
frost$core$String* $tmp2235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2234, &$s2236);
$fn2238 $tmp2237 = ($fn2238) ((frost$io$OutputStream*) $tmp2220)->$class->vtable[17];
frost$core$Error* $tmp2239 = $tmp2237(((frost$io$OutputStream*) $tmp2220), $tmp2235);
if ($tmp2239 == NULL) goto block54; else goto block55;
block55:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
frost$core$Bit $tmp2240 = (frost$core$Bit) {$tmp2239 != NULL};
bool $tmp2241 = $tmp2240.value;
if ($tmp2241) goto block56; else goto block57;
block57:;
frost$core$Int $tmp2242 = (frost$core$Int) {319u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2243, $tmp2242, &$s2244);
abort(); // unreachable
block56:;
*(&local0) = $tmp2239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
frost$core$String* $tmp2245 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2206);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2246 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$String* $tmp2247 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2248));
frost$core$String* $tmp2249 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
*(&local1) = &$s2250;
frost$core$String* $tmp2251 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2206);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2252 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:322
frost$io$IndentedOutputStream** $tmp2253 = &param0->body;
frost$io$IndentedOutputStream* $tmp2254 = *$tmp2253;
$fn2256 $tmp2255 = ($fn2256) ((frost$io$OutputStream*) $tmp2254)->$class->vtable[19];
frost$core$Error* $tmp2257 = $tmp2255(((frost$io$OutputStream*) $tmp2254), &$s2258);
if ($tmp2257 == NULL) goto block58; else goto block59;
block59:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
frost$core$Bit $tmp2259 = (frost$core$Bit) {$tmp2257 != NULL};
bool $tmp2260 = $tmp2259.value;
if ($tmp2260) goto block60; else goto block61;
block61:;
frost$core$Int $tmp2261 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2262, $tmp2261, &$s2263);
abort(); // unreachable
block60:;
*(&local0) = $tmp2257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
frost$core$String* $tmp2264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
frost$core$String* $tmp2265 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2266 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:325
frost$core$Int $tmp2267 = (frost$core$Int) {325u};
frost$core$Error* $tmp2268 = *(&local0);
$fn2270 $tmp2269 = ($fn2270) ((frost$core$Object*) $tmp2268)->$class->vtable[0];
frost$core$String* $tmp2271 = $tmp2269(((frost$core$Object*) $tmp2268));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2272, $tmp2267, $tmp2271);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
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
frost$io$IndentedOutputStream** $tmp2273 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp2274 = *$tmp2273;
frost$io$MemoryOutputStream** $tmp2275 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp2276 = *$tmp2275;
$fn2278 $tmp2277 = ($fn2278) ((frost$io$OutputStream*) $tmp2274)->$class->vtable[20];
frost$core$Error* $tmp2279 = $tmp2277(((frost$io$OutputStream*) $tmp2274), ((frost$core$Object*) $tmp2276));
if ($tmp2279 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
frost$core$Bit $tmp2280 = (frost$core$Bit) {$tmp2279 != NULL};
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block5; else goto block6;
block6:;
frost$core$Int $tmp2282 = (frost$core$Int) {337u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2283, $tmp2282, &$s2284);
abort(); // unreachable
block5:;
*(&local0) = $tmp2279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:338
frost$io$IndentedOutputStream** $tmp2285 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp2286 = *$tmp2285;
frost$io$MemoryOutputStream** $tmp2287 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp2288 = *$tmp2287;
$fn2290 $tmp2289 = ($fn2290) ((frost$io$OutputStream*) $tmp2286)->$class->vtable[20];
frost$core$Error* $tmp2291 = $tmp2289(((frost$io$OutputStream*) $tmp2286), ((frost$core$Object*) $tmp2288));
if ($tmp2291 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
frost$core$Bit $tmp2292 = (frost$core$Bit) {$tmp2291 != NULL};
bool $tmp2293 = $tmp2292.value;
if ($tmp2293) goto block9; else goto block10;
block10:;
frost$core$Int $tmp2294 = (frost$core$Int) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2295, $tmp2294, &$s2296);
abort(); // unreachable
block9:;
*(&local0) = $tmp2291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:339
frost$io$IndentedOutputStream** $tmp2297 = &param0->out;
frost$io$IndentedOutputStream* $tmp2298 = *$tmp2297;
frost$io$MemoryOutputStream** $tmp2299 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp2300 = *$tmp2299;
$fn2302 $tmp2301 = ($fn2302) ((frost$io$OutputStream*) $tmp2298)->$class->vtable[20];
frost$core$Error* $tmp2303 = $tmp2301(((frost$io$OutputStream*) $tmp2298), ((frost$core$Object*) $tmp2300));
if ($tmp2303 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
frost$core$Bit $tmp2304 = (frost$core$Bit) {$tmp2303 != NULL};
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block13; else goto block14;
block14:;
frost$core$Int $tmp2306 = (frost$core$Int) {339u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2307, $tmp2306, &$s2308);
abort(); // unreachable
block13:;
*(&local0) = $tmp2303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:340
frost$io$IndentedOutputStream** $tmp2309 = &param0->out;
frost$io$IndentedOutputStream* $tmp2310 = *$tmp2309;
frost$io$MemoryOutputStream** $tmp2311 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp2312 = *$tmp2311;
$fn2314 $tmp2313 = ($fn2314) ((frost$io$OutputStream*) $tmp2310)->$class->vtable[20];
frost$core$Error* $tmp2315 = $tmp2313(((frost$io$OutputStream*) $tmp2310), ((frost$core$Object*) $tmp2312));
if ($tmp2315 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$Bit $tmp2316 = (frost$core$Bit) {$tmp2315 != NULL};
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block17; else goto block18;
block18:;
frost$core$Int $tmp2318 = (frost$core$Int) {340u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2319, $tmp2318, &$s2320);
abort(); // unreachable
block17:;
*(&local0) = $tmp2315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$Error* $tmp2321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:343
frost$core$Error* $tmp2322 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HCodeGenerator.frost:343:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn2324 $tmp2323 = ($fn2324) ((frost$core$Object*) $tmp2322)->$class->vtable[0];
frost$core$String* $tmp2325 = $tmp2323(((frost$core$Object*) $tmp2322));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp2325);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:344
frost$core$Int $tmp2326 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp2326);
frost$core$Int $tmp2327 = (frost$core$Int) {344u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2328, $tmp2327, &$s2329);
abort(); // unreachable

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp2330 = &param0->compiler;
frost$core$Weak* $tmp2331 = *$tmp2330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
frost$io$MemoryOutputStream** $tmp2332 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp2333 = *$tmp2332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
frost$io$MemoryOutputStream** $tmp2334 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp2335 = *$tmp2334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
frost$io$IndentedOutputStream** $tmp2336 = &param0->types;
frost$io$IndentedOutputStream* $tmp2337 = *$tmp2336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
frost$io$MemoryOutputStream** $tmp2338 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp2339 = *$tmp2338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2339));
frost$io$MemoryOutputStream** $tmp2340 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp2341 = *$tmp2340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$io$IndentedOutputStream** $tmp2342 = &param0->body;
frost$io$IndentedOutputStream* $tmp2343 = *$tmp2342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
frost$collections$HashSet** $tmp2344 = &param0->typeImports;
frost$collections$HashSet* $tmp2345 = *$tmp2344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2345));
frost$collections$HashSet** $tmp2346 = &param0->bodyImports;
frost$collections$HashSet* $tmp2347 = *$tmp2346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$collections$HashSet** $tmp2348 = &param0->imports;
frost$collections$HashSet* $tmp2349 = *$tmp2348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
frost$io$MemoryOutputStream** $tmp2350 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp2351 = *$tmp2350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
frost$io$File** $tmp2352 = &param0->outDir;
frost$io$File* $tmp2353 = *$tmp2352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
frost$io$IndentedOutputStream** $tmp2354 = &param0->out;
frost$io$IndentedOutputStream* $tmp2355 = *$tmp2354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
frost$io$IndentedOutputStream** $tmp2356 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp2357 = *$tmp2356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
org$frostlang$frostc$LLVMCodeGenerator** $tmp2358 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp2359 = *$tmp2358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
frost$core$Weak** $tmp2360 = &param0->cCodeGen;
frost$core$Weak* $tmp2361 = *$tmp2360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
org$frostlang$frostc$CCodeGenerator** $tmp2362 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp2363 = *$tmp2362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
return;

}

