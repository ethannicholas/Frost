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
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Maybe.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
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
typedef frost$core$String* (*$fn686)(frost$core$Object*);
typedef frost$core$Error* (*$fn806)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn815)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn849)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn858)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn868)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn897)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn925)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn929)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn934)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn973)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn991)(frost$core$Object*);
typedef frost$core$Error* (*$fn997)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1019)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1035)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1045)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1074)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1083)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1129)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1133)(frost$core$Object*);
typedef frost$core$Error* (*$fn1149)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1175)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1204)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1223)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1233)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1243)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1258)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1286)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1304)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1330)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1339)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1368)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1410)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1414)(frost$core$Object*);
typedef frost$core$Error* (*$fn1431)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1459)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1511)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1686)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1719)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1759)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1786)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1796)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1800)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1805)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1838)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1851)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1860)(frost$core$Object*);
typedef frost$core$Error* (*$fn1868)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1875)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1882)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1889)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn1893)(frost$core$Object*);

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
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s995 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s1011 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s1070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s1072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s1085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s1110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 71, -5337883038282373450, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s1163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s1225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s1235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b", 14, -7365331167748677648, NULL };
static frost$core$String $s1256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s1282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s1284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s1300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s1302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s1341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s1364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s1380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s1399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 29, -2864429813656612391, NULL };
static frost$core$String $s1419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x75\x69\x6e\x74\x38\x5f\x74\x20\x66\x6c\x61\x67\x73\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20", 122, 4184645696787544911, NULL };
static frost$core$String $s1428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1652 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, 165, NULL };
static frost$core$String $s1668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40", 1, 165, NULL };
static frost$core$String $s1708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1780 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };

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
FROST_ASSERT(248 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp58 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(248, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
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
frost$core$Int64 $tmp92 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s93, $tmp92);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
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
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:73
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:74
org$frostlang$frostc$Type$Kind* $tmp124 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = $tmp125.$rawValue;
frost$core$Int64 $tmp127 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:75:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 == $tmp129;
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit($tmp130);
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
frost$core$Int64 $tmp136 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:78:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp137 = $tmp126.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 == $tmp138;
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit($tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:79
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:79:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp142 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp143, param1);
frost$core$Int64 $tmp145 = (frost$core$Int64) {8};
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
frost$core$Int64 $tmp159 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:81:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp160 = $tmp126.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 == $tmp161;
frost$core$Bit $tmp163 = frost$core$Bit$init$builtin_bit($tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:82
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:82:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp165 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp166 = *$tmp165;
frost$core$Int64 $tmp167 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp166, param1);
frost$core$Int64 $tmp168 = (frost$core$Int64) {8};
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
frost$core$Int64 $tmp182 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:84:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp183 = $tmp126.value;
int64_t $tmp184 = $tmp182.value;
bool $tmp185 = $tmp183 == $tmp184;
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit($tmp185);
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
frost$core$Int64 $tmp191 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:87:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp192 = $tmp126.value;
int64_t $tmp193 = $tmp191.value;
bool $tmp194 = $tmp192 == $tmp193;
frost$core$Bit $tmp195 = frost$core$Bit$init$builtin_bit($tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:88
// begin inline call to function org.frostlang.frostc.HCodeGenerator.sizeOf(t:org.frostlang.frostc.Type):frost.core.Int64 from HCodeGenerator.frost:88:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:64
org$frostlang$frostc$LLVMCodeGenerator** $tmp197 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp198 = *$tmp197;
frost$core$Int64 $tmp199 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp198, param1);
frost$core$Int64 $tmp200 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:89:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200.value;
bool $tmp203 = $tmp201 == $tmp202;
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203);
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
frost$core$Int64 $tmp209 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:90:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp210 = $tmp199.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 == $tmp211;
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212);
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
frost$core$Int64 $tmp218 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s219, $tmp218);
abort(); // unreachable
block21:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:94:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp221 = $tmp126.value;
int64_t $tmp222 = $tmp220.value;
bool $tmp223 = $tmp221 == $tmp222;
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit($tmp223);
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
frost$core$Int64 $tmp237 = (frost$core$Int64) {16};
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
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243 != NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp246 = (frost$core$Int64) {97};
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
frost$core$Int64 $tmp253 = (frost$core$Int64) {16};
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
frost$core$Int64 $tmp337 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:112:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp338 = $tmp126.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 == $tmp339;
frost$core$Bit $tmp341 = frost$core$Bit$init$builtin_bit($tmp340);
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
frost$core$Int64 $tmp348 = (frost$core$Int64) {16};
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
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354 != NULL);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp357 = (frost$core$Int64) {114};
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
frost$core$Int64 $tmp364 = (frost$core$Int64) {16};
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
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block78; else goto block79;
block79:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s376, $tmp375);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp377 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp378 = *$tmp377;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Int64 $tmp379 = (frost$core$Int64) {0};
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
frost$core$Bit $tmp388 = frost$core$Bit$init$builtin_bit($tmp387 != NULL);
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp390 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s391, $tmp390);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp392 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp393 = *$tmp392;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Int64 $tmp394 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp399 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:120:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp400 = $tmp126.value;
int64_t $tmp401 = $tmp399.value;
bool $tmp402 = $tmp400 == $tmp401;
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit($tmp402);
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:121
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from HCodeGenerator.frost:121:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp405 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp406 = *$tmp405;
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit($tmp406 != NULL);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp409 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s410, $tmp409);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp411 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp412 = *$tmp411;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Int64 $tmp413 = (frost$core$Int64) {0};
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
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit($tmp421 != NULL);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp424 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s425, $tmp424);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp426 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp427 = *$tmp426;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Int64 $tmp428 = (frost$core$Int64) {1};
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
frost$core$Int64 $tmp439 = (frost$core$Int64) {16};
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
frost$core$Bit $tmp450 = frost$core$Bit$init$builtin_bit($tmp448.nonnull);
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
frost$core$Int64 $tmp465 = (frost$core$Int64) {16};
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
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit($tmp471 != NULL);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block108; else goto block109;
block109:;
frost$core$Int64 $tmp474 = (frost$core$Int64) {128};
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
frost$core$Int64 $tmp481 = (frost$core$Int64) {16};
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
frost$core$Bit $tmp571 = frost$core$Bit$init$builtin_bit($tmp570 != NULL);
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block132; else goto block133;
block133:;
frost$core$Int64 $tmp573 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s574, $tmp573);
abort(); // unreachable
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp575 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp576 = *$tmp575;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Int64 $tmp577 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp582 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:145:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp583 = $tmp126.value;
int64_t $tmp584 = $tmp582.value;
bool $tmp585 = $tmp583 == $tmp584;
frost$core$Bit $tmp586 = frost$core$Bit$init$builtin_bit($tmp585);
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
frost$core$Int64 $tmp593 = (frost$core$Int64) {16};
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
frost$core$Int64 $tmp601 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:148:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp602 = $tmp126.value;
int64_t $tmp603 = $tmp601.value;
bool $tmp604 = $tmp602 == $tmp603;
frost$core$Bit $tmp605 = frost$core$Bit$init$builtin_bit($tmp604);
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
frost$core$Int64 $tmp612 = (frost$core$Int64) {16};
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
frost$core$Int64 $tmp620 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp621 = $tmp126.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block148; else goto block149;
block149:;
frost$core$Int64 $tmp626 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:151:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp627 = $tmp126.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 == $tmp628;
frost$core$Bit $tmp630 = frost$core$Bit$init$builtin_bit($tmp629);
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block148; else goto block151;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:152
// begin inline call to method org.frostlang.frostc.Type.MutableMethod():org.frostlang.frostc.Type from HCodeGenerator.frost:152:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:482
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp632 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp633 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:482:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp634 = &(&local10)->$rawValue;
*$tmp634 = $tmp633;
org$frostlang$frostc$Type$Kind $tmp635 = *(&local10);
*(&local9) = $tmp635;
org$frostlang$frostc$Type$Kind $tmp636 = *(&local9);
org$frostlang$frostc$Position $tmp637 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp638 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp632, &$s639, $tmp636, $tmp637, $tmp638);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$String* $tmp640 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Error* $tmp641 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp640;
block151:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp643 = $tmp126.value;
int64_t $tmp644 = $tmp642.value;
bool $tmp645 = $tmp643 == $tmp644;
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit($tmp645);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block155; else goto block156;
block156:;
frost$core$Int64 $tmp648 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:154:61
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp649 = $tmp126.value;
int64_t $tmp650 = $tmp648.value;
bool $tmp651 = $tmp649 == $tmp650;
frost$core$Bit $tmp652 = frost$core$Bit$init$builtin_bit($tmp651);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block155; else goto block158;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:155
// begin inline call to method org.frostlang.frostc.Type.Method():org.frostlang.frostc.Type from HCodeGenerator.frost:155:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:477
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp654 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp655 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:477:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp656 = &(&local12)->$rawValue;
*$tmp656 = $tmp655;
org$frostlang$frostc$Type$Kind $tmp657 = *(&local12);
*(&local11) = $tmp657;
org$frostlang$frostc$Type$Kind $tmp658 = *(&local11);
org$frostlang$frostc$Position $tmp659 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp660 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp654, &$s661, $tmp658, $tmp659, $tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$String* $tmp662 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Error* $tmp663 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp662;
block158:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HCodeGenerator.frost:157:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp665 = $tmp126.value;
int64_t $tmp666 = $tmp664.value;
bool $tmp667 = $tmp665 == $tmp666;
frost$core$Bit $tmp668 = frost$core$Bit$init$builtin_bit($tmp667);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block162; else goto block163;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:158
frost$core$Weak** $tmp670 = &param0->compiler;
frost$core$Weak* $tmp671 = *$tmp670;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:158:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp672 = &$tmp671->_valid;
frost$core$Bit $tmp673 = *$tmp672;
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block167; else goto block168;
block168:;
frost$core$Int64 $tmp675 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s676, $tmp675);
abort(); // unreachable
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp677 = &$tmp671->value;
frost$core$Object* $tmp678 = *$tmp677;
frost$core$Frost$ref$frost$core$Object$Q($tmp678);
org$frostlang$frostc$ClassDecl* $tmp679 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp678), param1);
org$frostlang$frostc$Type** $tmp680 = &$tmp679->type;
org$frostlang$frostc$Type* $tmp681 = *$tmp680;
frost$core$String* $tmp682 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp681);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q($tmp678);
frost$core$Error* $tmp683 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp682;
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:161
frost$core$Int64 $tmp684 = (frost$core$Int64) {161};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:161:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn686 $tmp685 = ($fn686) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp687 = $tmp685(((frost$core$Object*) param1));
frost$core$String* $tmp688 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s689, $tmp687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$String* $tmp690 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp688, &$s691);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s692, $tmp684, $tmp690);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
abort(); // unreachable
block1:;
frost$core$Error* $tmp693 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:167
frost$core$Int64 $tmp694 = (frost$core$Int64) {167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s695, $tmp694);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:171
frost$core$String* $tmp696 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:171:23
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$String* $tmp697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp696, &$s698);
frost$core$String* $tmp699 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp697, param2);
frost$core$String* $tmp700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp699, &$s701);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
return $tmp700;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:176
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp702 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp702, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Weak** $tmp703 = &param0->compiler;
frost$core$Weak* $tmp704 = *$tmp703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
frost$core$Weak** $tmp705 = &param0->compiler;
*$tmp705 = $tmp702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:177
org$frostlang$frostc$LLVMCodeGenerator** $tmp706 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp707 = *$tmp706;
// begin inline call to method org.frostlang.frostc.LLVMCodeGenerator.setCompiler(compiler:org.frostlang.frostc.Compiler) from HCodeGenerator.frost:177:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:118
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp708 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp708, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Weak** $tmp709 = &$tmp707->compiler;
frost$core$Weak* $tmp710 = *$tmp709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Weak** $tmp711 = &$tmp707->compiler;
*$tmp711 = $tmp708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:181
frost$io$File** $tmp712 = &param0->outDir;
frost$io$File* $tmp713 = *$tmp712;
frost$core$String* $tmp714 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp715 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp713, $tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
return $tmp715;

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
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$core$Bit local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$ClassDecl* local17 = NULL;
frost$collections$ListView* local18 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:186
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:187
frost$io$MemoryOutputStream** $tmp716 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp717 = *$tmp716;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:187:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/MemoryOutputStream.stub:20
frost$core$MutableString** $tmp718 = &$tmp717->data;
frost$core$MutableString* $tmp719 = *$tmp718;
frost$core$MutableString$clear($tmp719);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:188
frost$io$MemoryOutputStream** $tmp720 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp721 = *$tmp720;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:188:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/MemoryOutputStream.stub:20
frost$core$MutableString** $tmp722 = &$tmp721->data;
frost$core$MutableString* $tmp723 = *$tmp722;
frost$core$MutableString$clear($tmp723);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:189
frost$io$MemoryOutputStream** $tmp724 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp725 = *$tmp724;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:189:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/MemoryOutputStream.stub:20
frost$core$MutableString** $tmp726 = &$tmp725->data;
frost$core$MutableString* $tmp727 = *$tmp726;
frost$core$MutableString$clear($tmp727);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:190
frost$io$MemoryOutputStream** $tmp728 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp729 = *$tmp728;
// begin inline call to method frost.io.MemoryOutputStream.clear() from HCodeGenerator.frost:190:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/MemoryOutputStream.stub:20
frost$core$MutableString** $tmp730 = &$tmp729->data;
frost$core$MutableString* $tmp731 = *$tmp730;
frost$core$MutableString$clear($tmp731);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:191
frost$collections$HashSet** $tmp732 = &param0->typeImports;
frost$collections$HashSet* $tmp733 = *$tmp732;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:191:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:26
frost$collections$HashMap** $tmp734 = &$tmp733->contents;
frost$collections$HashMap* $tmp735 = *$tmp734;
frost$collections$HashMap$clear($tmp735);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:192
frost$collections$HashSet** $tmp736 = &param0->bodyImports;
frost$collections$HashSet* $tmp737 = *$tmp736;
// begin inline call to method frost.collections.HashSet.clear() from HCodeGenerator.frost:192:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:26
frost$collections$HashMap** $tmp738 = &$tmp737->contents;
frost$collections$HashMap* $tmp739 = *$tmp738;
frost$collections$HashMap$clear($tmp739);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:193
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:193:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:181
frost$io$File** $tmp740 = &param0->outDir;
frost$io$File* $tmp741 = *$tmp740;
frost$core$String* $tmp742 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s743);
frost$io$File* $tmp744 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp741, $tmp742);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$io$File* $tmp745 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local1) = $tmp744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:194
frost$io$File* $tmp746 = *(&local1);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from HCodeGenerator.frost:194:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:27
frost$io$File* $tmp747 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp746, &$s748);
frost$core$String** $tmp749 = &$tmp747->path;
frost$core$String* $tmp750 = *$tmp749;
frost$core$String* $tmp751 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp750);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$String* $tmp752 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local3) = $tmp751;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:28
frost$core$String* $tmp753 = *(&local3);
frost$core$Bit $tmp754 = frost$core$Bit$init$builtin_bit($tmp753 == NULL);
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp756 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:31
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp757 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp758 = *(&local3);
frost$io$File$init$frost$core$String($tmp757, $tmp758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$String* $tmp759 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local3) = ((frost$core$String*) NULL);
*(&local2) = $tmp757;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
goto block10;
block10:;
frost$io$File* $tmp760 = *(&local2);
frost$core$Error* $tmp761 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp760);
if ($tmp761 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local0) = $tmp761;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$io$File* $tmp762 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp763 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:195
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp764 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp765 = *(&local1);
frost$core$Maybe* $tmp766 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp765);
frost$core$Int64* $tmp767 = &$tmp766->$rawValue;
frost$core$Int64 $tmp768 = *$tmp767;
int64_t $tmp769 = $tmp768.value;
bool $tmp770 = $tmp769 == 0;
if ($tmp770) goto block15; else goto block16;
block16:;
frost$core$Error** $tmp771 = (frost$core$Error**) ($tmp766->$data + 0);
frost$core$Error* $tmp772 = *$tmp771;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local0) = $tmp772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$io$File* $tmp773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Object** $tmp775 = (frost$core$Object**) ($tmp766->$data + 0);
frost$core$Object* $tmp776 = *$tmp775;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp764, ((frost$io$OutputStream*) $tmp776));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$io$IndentedOutputStream** $tmp777 = &param0->out;
frost$io$IndentedOutputStream* $tmp778 = *$tmp777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$io$IndentedOutputStream** $tmp779 = &param0->out;
*$tmp779 = $tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:196
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getPath(cl:org.frostlang.frostc.ClassDecl, extension:frost.core.String):frost.io.File from HCodeGenerator.frost:196:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:181
frost$io$File** $tmp780 = &param0->outDir;
frost$io$File* $tmp781 = *$tmp780;
frost$core$String* $tmp782 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, &$s783);
frost$io$File* $tmp784 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp781, $tmp782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$io$File* $tmp785 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local4) = $tmp784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:197
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp786 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp787 = *(&local4);
frost$core$Maybe* $tmp788 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp787);
frost$core$Int64* $tmp789 = &$tmp788->$rawValue;
frost$core$Int64 $tmp790 = *$tmp789;
int64_t $tmp791 = $tmp790.value;
bool $tmp792 = $tmp791 == 0;
if ($tmp792) goto block18; else goto block19;
block19:;
frost$core$Error** $tmp793 = (frost$core$Error**) ($tmp788->$data + 0);
frost$core$Error* $tmp794 = *$tmp793;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local0) = $tmp794;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$io$File* $tmp795 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp796 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp797 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block18:;
frost$core$Object** $tmp798 = (frost$core$Object**) ($tmp788->$data + 0);
frost$core$Object* $tmp799 = *$tmp798;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp786, ((frost$io$OutputStream*) $tmp799));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$io$IndentedOutputStream** $tmp800 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp801 = *$tmp800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
frost$io$IndentedOutputStream** $tmp802 = &param0->typesOut;
*$tmp802 = $tmp786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:198
frost$io$IndentedOutputStream** $tmp803 = &param0->out;
frost$io$IndentedOutputStream* $tmp804 = *$tmp803;
$fn806 $tmp805 = ($fn806) ((frost$io$OutputStream*) $tmp804)->$class->vtable[19];
frost$core$Error* $tmp807 = $tmp805(((frost$io$OutputStream*) $tmp804), &$s808);
if ($tmp807 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local0) = $tmp807;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$io$File* $tmp809 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp810 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp811 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:199
frost$io$IndentedOutputStream** $tmp812 = &param0->out;
frost$io$IndentedOutputStream* $tmp813 = *$tmp812;
$fn815 $tmp814 = ($fn815) ((frost$io$OutputStream*) $tmp813)->$class->vtable[19];
frost$core$Error* $tmp816 = $tmp814(((frost$io$OutputStream*) $tmp813), &$s817);
if ($tmp816 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local0) = $tmp816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
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
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:200
frost$io$IndentedOutputStream** $tmp821 = &param0->out;
frost$io$IndentedOutputStream* $tmp822 = *$tmp821;
frost$io$File* $tmp823 = *(&local4);
// begin inline call to function frost.io.File.get_name():frost.core.String from HCodeGenerator.frost:200:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:35
frost$core$String** $tmp824 = &$tmp823->path;
frost$core$String* $tmp825 = *$tmp824;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.stub:35:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
frost$core$String$Index $tmp826 = frost$core$String$get_end$R$frost$core$String$Index($tmp825);
frost$core$String$Index$nullable $tmp827 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp825, &$s828, $tmp826);
*(&local6) = $tmp827;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:36
frost$core$String$Index$nullable $tmp829 = *(&local6);
frost$core$Bit $tmp830 = frost$core$Bit$init$builtin_bit($tmp829.nonnull);
bool $tmp831 = $tmp830.value;
if ($tmp831) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:37
frost$core$String** $tmp832 = &$tmp823->path;
frost$core$String* $tmp833 = *$tmp832;
frost$core$String** $tmp834 = &$tmp823->path;
frost$core$String* $tmp835 = *$tmp834;
frost$core$String$Index$nullable $tmp836 = *(&local6);
frost$core$String$Index $tmp837 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp835, ((frost$core$String$Index) $tmp836.value));
frost$core$Bit $tmp838 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp839 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp837, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp838);
frost$core$String* $tmp840 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp833, $tmp839);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local5) = $tmp840;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
goto block24;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:40
frost$core$String** $tmp841 = &$tmp823->path;
frost$core$String* $tmp842 = *$tmp841;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local5) = $tmp842;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
goto block24;
block27:;
goto block24;
block24:;
frost$core$String* $tmp843 = *(&local5);
frost$core$String* $tmp844 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s845, $tmp843);
frost$core$String* $tmp846 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp844, &$s847);
$fn849 $tmp848 = ($fn849) ((frost$io$OutputStream*) $tmp822)->$class->vtable[19];
frost$core$Error* $tmp850 = $tmp848(((frost$io$OutputStream*) $tmp822), $tmp846);
if ($tmp850 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local0) = $tmp850;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$core$String* $tmp851 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp852 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp853 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp854 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:201
frost$io$IndentedOutputStream** $tmp855 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp856 = *$tmp855;
$fn858 $tmp857 = ($fn858) ((frost$io$OutputStream*) $tmp856)->$class->vtable[19];
frost$core$Error* $tmp859 = $tmp857(((frost$io$OutputStream*) $tmp856), &$s860);
if ($tmp859 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local0) = $tmp859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$String* $tmp861 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp862 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp863 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp864 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:202
frost$io$IndentedOutputStream** $tmp865 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp866 = *$tmp865;
$fn868 $tmp867 = ($fn868) ((frost$io$OutputStream*) $tmp866)->$class->vtable[19];
frost$core$Error* $tmp869 = $tmp867(((frost$io$OutputStream*) $tmp866), &$s870);
if ($tmp869 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local0) = $tmp869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$String* $tmp871 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp872 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp873 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp874 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:203
frost$io$MemoryOutputStream** $tmp875 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp876 = *$tmp875;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$io$MemoryOutputStream** $tmp877 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp878 = *$tmp877;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$io$MemoryOutputStream** $tmp879 = &param0->importStream;
*$tmp879 = $tmp876;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:204
frost$collections$HashSet** $tmp880 = &param0->typeImports;
frost$collections$HashSet* $tmp881 = *$tmp880;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
frost$collections$HashSet** $tmp882 = &param0->imports;
frost$collections$HashSet* $tmp883 = *$tmp882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$collections$HashSet** $tmp884 = &param0->imports;
*$tmp884 = $tmp881;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:205
frost$io$IndentedOutputStream** $tmp885 = &param0->types;
frost$io$IndentedOutputStream* $tmp886 = *$tmp885;
frost$core$String** $tmp887 = &param1->name;
frost$core$String* $tmp888 = *$tmp887;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:205:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp889 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp890 = *$tmp889;
frost$core$String* $tmp891 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp890, $tmp888);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$String* $tmp892 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s893, $tmp891);
frost$core$String* $tmp894 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp892, &$s895);
$fn897 $tmp896 = ($fn897) ((frost$io$OutputStream*) $tmp886)->$class->vtable[19];
frost$core$Error* $tmp898 = $tmp896(((frost$io$OutputStream*) $tmp886), $tmp894);
if ($tmp898 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local0) = $tmp898;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$String* $tmp899 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp900 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp901 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp902 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:206
frost$io$IndentedOutputStream** $tmp903 = &param0->types;
frost$io$IndentedOutputStream* $tmp904 = *$tmp903;
frost$core$Int64* $tmp905 = &$tmp904->level;
frost$core$Int64 $tmp906 = *$tmp905;
frost$core$Int64 $tmp907 = (frost$core$Int64) {1};
int64_t $tmp908 = $tmp906.value;
int64_t $tmp909 = $tmp907.value;
int64_t $tmp910 = $tmp908 + $tmp909;
frost$core$Int64 $tmp911 = (frost$core$Int64) {$tmp910};
frost$core$Int64* $tmp912 = &$tmp904->level;
*$tmp912 = $tmp911;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:207
frost$core$Weak** $tmp913 = &param0->compiler;
frost$core$Weak* $tmp914 = *$tmp913;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:207:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp915 = &$tmp914->_valid;
frost$core$Bit $tmp916 = *$tmp915;
bool $tmp917 = $tmp916.value;
if ($tmp917) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp918 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s919, $tmp918);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp920 = &$tmp914->value;
frost$core$Object* $tmp921 = *$tmp920;
frost$core$Frost$ref$frost$core$Object$Q($tmp921);
frost$collections$ListView* $tmp922 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp921), param1);
ITable* $tmp923 = ((frost$collections$Iterable*) $tmp922)->$class->itable;
while ($tmp923->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp923 = $tmp923->next;
}
$fn925 $tmp924 = $tmp923->methods[0];
frost$collections$Iterator* $tmp926 = $tmp924(((frost$collections$Iterable*) $tmp922));
goto block42;
block42:;
ITable* $tmp927 = $tmp926->$class->itable;
while ($tmp927->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp927 = $tmp927->next;
}
$fn929 $tmp928 = $tmp927->methods[0];
frost$core$Bit $tmp930 = $tmp928($tmp926);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block44; else goto block43;
block43:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp932 = $tmp926->$class->itable;
while ($tmp932->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp932 = $tmp932->next;
}
$fn934 $tmp933 = $tmp932->methods[1];
frost$core$Object* $tmp935 = $tmp933($tmp926);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp935)));
org$frostlang$frostc$FieldDecl* $tmp936 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp935);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:208
frost$core$Weak** $tmp937 = &param0->compiler;
frost$core$Weak* $tmp938 = *$tmp937;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:208:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp939 = &$tmp938->_valid;
frost$core$Bit $tmp940 = *$tmp939;
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp942 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s943, $tmp942);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp944 = &$tmp938->value;
frost$core$Object* $tmp945 = *$tmp944;
frost$core$Frost$ref$frost$core$Object$Q($tmp945);
org$frostlang$frostc$FieldDecl* $tmp946 = *(&local7);
frost$core$Bit $tmp947 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp945), $tmp946);
frost$core$Frost$unref$frost$core$Object$Q($tmp945);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:209
org$frostlang$frostc$FieldDecl* $tmp948 = *(&local7);
org$frostlang$frostc$Type** $tmp949 = &$tmp948->type;
org$frostlang$frostc$Type* $tmp950 = *$tmp949;
// begin inline call to method org.frostlang.frostc.Type.ChoiceData():org.frostlang.frostc.Type from HCodeGenerator.frost:209:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:550
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp951 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp952 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:550:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp953 = &(&local9)->$rawValue;
*$tmp953 = $tmp952;
org$frostlang$frostc$Type$Kind $tmp954 = *(&local9);
*(&local8) = $tmp954;
org$frostlang$frostc$Type$Kind $tmp955 = *(&local8);
org$frostlang$frostc$Position $tmp956 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp957 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp951, &$s958, $tmp955, $tmp956, $tmp957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from HCodeGenerator.frost:209:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp959 = &((org$frostlang$frostc$Symbol*) $tmp950)->name;
frost$core$String* $tmp960 = *$tmp959;
frost$core$String** $tmp961 = &((org$frostlang$frostc$Symbol*) $tmp951)->name;
frost$core$String* $tmp962 = *$tmp961;
frost$core$Bit $tmp963 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp960, $tmp962);
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Type$Kind* $tmp965 = &$tmp950->typeKind;
org$frostlang$frostc$Type$Kind $tmp966 = *$tmp965;
org$frostlang$frostc$Type$Kind$wrapper* $tmp967;
$tmp967 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp967->value = $tmp966;
org$frostlang$frostc$Type$Kind* $tmp968 = &$tmp951->typeKind;
org$frostlang$frostc$Type$Kind $tmp969 = *$tmp968;
org$frostlang$frostc$Type$Kind$wrapper* $tmp970;
$tmp970 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp970->value = $tmp969;
ITable* $tmp971 = ((frost$core$Equatable*) $tmp967)->$class->itable;
while ($tmp971->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp971 = $tmp971->next;
}
$fn973 $tmp972 = $tmp971->methods[0];
frost$core$Bit $tmp974 = $tmp972(((frost$core$Equatable*) $tmp967), ((frost$core$Equatable*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp970)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp967)));
*(&local10) = $tmp974;
goto block57;
block56:;
*(&local10) = $tmp963;
goto block57;
block57:;
frost$core$Bit $tmp975 = *(&local10);
bool $tmp976 = $tmp975.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
if ($tmp976) goto block49; else goto block51;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:210
frost$io$IndentedOutputStream** $tmp977 = &param0->types;
frost$io$IndentedOutputStream* $tmp978 = *$tmp977;
org$frostlang$frostc$FieldDecl* $tmp979 = *(&local7);
frost$core$String** $tmp980 = &((org$frostlang$frostc$Symbol*) $tmp979)->name;
frost$core$String* $tmp981 = *$tmp980;
frost$core$String* $tmp982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s983, $tmp981);
frost$core$String* $tmp984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp982, &$s985);
org$frostlang$frostc$LLVMCodeGenerator** $tmp986 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp987 = *$tmp986;
frost$core$Int64 $tmp988 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp987, param1);
frost$core$Int64$wrapper* $tmp989;
$tmp989 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp989->value = $tmp988;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:210:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn991 $tmp990 = ($fn991) ((frost$core$Object*) $tmp989)->$class->vtable[0];
frost$core$String* $tmp992 = $tmp990(((frost$core$Object*) $tmp989));
frost$core$String* $tmp993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp984, $tmp992);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$String* $tmp994 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp993, &$s995);
$fn997 $tmp996 = ($fn997) ((frost$io$OutputStream*) $tmp978)->$class->vtable[19];
frost$core$Error* $tmp998 = $tmp996(((frost$io$OutputStream*) $tmp978), $tmp994);
if ($tmp998 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local0) = $tmp998;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q($tmp935);
org$frostlang$frostc$FieldDecl* $tmp999 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q($tmp921);
frost$core$String* $tmp1000 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1001 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1002 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1003 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
goto block50;
block51:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:213
frost$io$IndentedOutputStream** $tmp1004 = &param0->types;
frost$io$IndentedOutputStream* $tmp1005 = *$tmp1004;
org$frostlang$frostc$FieldDecl* $tmp1006 = *(&local7);
org$frostlang$frostc$Type** $tmp1007 = &$tmp1006->type;
org$frostlang$frostc$Type* $tmp1008 = *$tmp1007;
frost$core$String* $tmp1009 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1008);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:213:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$String* $tmp1010 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1009, &$s1011);
org$frostlang$frostc$FieldDecl* $tmp1012 = *(&local7);
frost$core$String** $tmp1013 = &((org$frostlang$frostc$Symbol*) $tmp1012)->name;
frost$core$String* $tmp1014 = *$tmp1013;
frost$core$String* $tmp1015 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1010, $tmp1014);
frost$core$String* $tmp1016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1015, &$s1017);
$fn1019 $tmp1018 = ($fn1019) ((frost$io$OutputStream*) $tmp1005)->$class->vtable[19];
frost$core$Error* $tmp1020 = $tmp1018(((frost$io$OutputStream*) $tmp1005), $tmp1016);
if ($tmp1020 == NULL) goto block62; else goto block63;
block63:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local0) = $tmp1020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q($tmp935);
org$frostlang$frostc$FieldDecl* $tmp1021 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q($tmp921);
frost$core$String* $tmp1022 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1023 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1024 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1025 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
goto block50;
block50:;
frost$core$Frost$unref$frost$core$Object$Q($tmp935);
org$frostlang$frostc$FieldDecl* $tmp1026 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block42;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q($tmp921);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:216
frost$core$String** $tmp1027 = &param1->name;
frost$core$String* $tmp1028 = *$tmp1027;
frost$core$Bit $tmp1029 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1028, &$s1030);
bool $tmp1031 = $tmp1029.value;
if ($tmp1031) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:217
frost$io$IndentedOutputStream** $tmp1032 = &param0->types;
frost$io$IndentedOutputStream* $tmp1033 = *$tmp1032;
$fn1035 $tmp1034 = ($fn1035) ((frost$io$OutputStream*) $tmp1033)->$class->vtable[19];
frost$core$Error* $tmp1036 = $tmp1034(((frost$io$OutputStream*) $tmp1033), &$s1037);
if ($tmp1036 == NULL) goto block66; else goto block67;
block67:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local0) = $tmp1036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$String* $tmp1038 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1039 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1040 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1041 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block66:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:218
frost$io$IndentedOutputStream** $tmp1042 = &param0->types;
frost$io$IndentedOutputStream* $tmp1043 = *$tmp1042;
$fn1045 $tmp1044 = ($fn1045) ((frost$io$OutputStream*) $tmp1043)->$class->vtable[19];
frost$core$Error* $tmp1046 = $tmp1044(((frost$io$OutputStream*) $tmp1043), &$s1047);
if ($tmp1046 == NULL) goto block68; else goto block69;
block69:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local0) = $tmp1046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
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
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
goto block65;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:220
frost$io$IndentedOutputStream** $tmp1052 = &param0->types;
frost$io$IndentedOutputStream* $tmp1053 = *$tmp1052;
frost$core$Int64* $tmp1054 = &$tmp1053->level;
frost$core$Int64 $tmp1055 = *$tmp1054;
frost$core$Int64 $tmp1056 = (frost$core$Int64) {1};
int64_t $tmp1057 = $tmp1055.value;
int64_t $tmp1058 = $tmp1056.value;
int64_t $tmp1059 = $tmp1057 - $tmp1058;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {$tmp1059};
frost$core$Int64* $tmp1061 = &$tmp1053->level;
*$tmp1061 = $tmp1060;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:221
frost$io$IndentedOutputStream** $tmp1062 = &param0->types;
frost$io$IndentedOutputStream* $tmp1063 = *$tmp1062;
frost$core$String** $tmp1064 = &param1->name;
frost$core$String* $tmp1065 = *$tmp1064;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:221:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1066 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1067 = *$tmp1066;
frost$core$String* $tmp1068 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1067, $tmp1065);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$String* $tmp1069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1070, $tmp1068);
frost$core$String* $tmp1071 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1069, &$s1072);
$fn1074 $tmp1073 = ($fn1074) ((frost$io$OutputStream*) $tmp1063)->$class->vtable[19];
frost$core$Error* $tmp1075 = $tmp1073(((frost$io$OutputStream*) $tmp1063), $tmp1071);
if ($tmp1075 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local0) = $tmp1075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$String* $tmp1076 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1077 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1078 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1079 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:222
frost$io$IndentedOutputStream** $tmp1080 = &param0->types;
frost$io$IndentedOutputStream* $tmp1081 = *$tmp1080;
$fn1083 $tmp1082 = ($fn1083) ((frost$io$OutputStream*) $tmp1081)->$class->vtable[19];
frost$core$Error* $tmp1084 = $tmp1082(((frost$io$OutputStream*) $tmp1081), &$s1085);
if ($tmp1084 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local0) = $tmp1084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$String* $tmp1086 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1087 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1088 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1089 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:223
frost$io$IndentedOutputStream** $tmp1090 = &param0->types;
frost$io$IndentedOutputStream* $tmp1091 = *$tmp1090;
// begin inline call to method org.frostlang.frostc.Type.StringType():org.frostlang.frostc.Type from HCodeGenerator.frost:224:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:295
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1092 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1093 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:295:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1094 = &(&local12)->$rawValue;
*$tmp1094 = $tmp1093;
org$frostlang$frostc$Type$Kind $tmp1095 = *(&local12);
*(&local11) = $tmp1095;
org$frostlang$frostc$Type$Kind $tmp1096 = *(&local11);
org$frostlang$frostc$Position $tmp1097 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1098 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1092, &$s1099, $tmp1096, $tmp1097, $tmp1098);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
frost$core$String* $tmp1100 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1092);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:224:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$core$String* $tmp1101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1100, &$s1102);
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from HCodeGenerator.frost:224:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1103 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1104 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:280:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1105 = &(&local14)->$rawValue;
*$tmp1105 = $tmp1104;
org$frostlang$frostc$Type$Kind $tmp1106 = *(&local14);
*(&local13) = $tmp1106;
org$frostlang$frostc$Type$Kind $tmp1107 = *(&local13);
org$frostlang$frostc$Position $tmp1108 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1109 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1103, &$s1110, $tmp1107, $tmp1108, $tmp1109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$String* $tmp1111 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1103);
frost$core$String* $tmp1112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1101, $tmp1111);
frost$core$String* $tmp1113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1112, &$s1114);
frost$core$String* $tmp1115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1116, $tmp1113);
frost$core$Weak** $tmp1117 = &param0->compiler;
frost$core$Weak* $tmp1118 = *$tmp1117;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:225:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1119 = &$tmp1118->_valid;
frost$core$Bit $tmp1120 = *$tmp1119;
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp1122 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1123, $tmp1122);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1124 = &$tmp1118->value;
frost$core$Object* $tmp1125 = *$tmp1124;
frost$core$Frost$ref$frost$core$Object$Q($tmp1125);
frost$collections$ListView* $tmp1126 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1125), param1);
ITable* $tmp1127 = ((frost$collections$CollectionView*) $tmp1126)->$class->itable;
while ($tmp1127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1127 = $tmp1127->next;
}
$fn1129 $tmp1128 = $tmp1127->methods[0];
frost$core$Int64 $tmp1130 = $tmp1128(((frost$collections$CollectionView*) $tmp1126));
frost$core$Int64$wrapper* $tmp1131;
$tmp1131 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1131->value = $tmp1130;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:225:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1133 $tmp1132 = ($fn1133) ((frost$core$Object*) $tmp1131)->$class->vtable[0];
frost$core$String* $tmp1134 = $tmp1132(((frost$core$Object*) $tmp1131));
frost$core$String* $tmp1135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1136, $tmp1134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
frost$core$String* $tmp1137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1135, &$s1138);
frost$core$String* $tmp1139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1115, $tmp1137);
frost$core$String** $tmp1140 = &param1->name;
frost$core$String* $tmp1141 = *$tmp1140;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:226:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1142 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1143 = *$tmp1142;
frost$core$String* $tmp1144 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1143, $tmp1141);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:226:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$String* $tmp1145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1144, &$s1146);
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1139, $tmp1145);
$fn1149 $tmp1148 = ($fn1149) ((frost$io$OutputStream*) $tmp1091)->$class->vtable[19];
frost$core$Error* $tmp1150 = $tmp1148(((frost$io$OutputStream*) $tmp1091), $tmp1147);
if ($tmp1150 == NULL) goto block87; else goto block88;
block88:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local0) = $tmp1150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$Frost$unref$frost$core$Object$Q($tmp1125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
frost$core$String* $tmp1151 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1152 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1153 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block87:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$Frost$unref$frost$core$Object$Q($tmp1125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:227
frost$io$IndentedOutputStream** $tmp1155 = &param0->types;
frost$io$IndentedOutputStream* $tmp1156 = *$tmp1155;
frost$core$String** $tmp1157 = &param1->name;
frost$core$String* $tmp1158 = *$tmp1157;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:227:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1159 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1160 = *$tmp1159;
frost$core$String* $tmp1161 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1160, $tmp1158);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$String* $tmp1162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1163, $tmp1161);
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1162, &$s1165);
frost$core$String** $tmp1166 = &param1->name;
frost$core$String* $tmp1167 = *$tmp1166;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:227:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1168 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1169 = *$tmp1168;
frost$core$String* $tmp1170 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1169, $tmp1167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$String* $tmp1171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1164, $tmp1170);
frost$core$String* $tmp1172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1171, &$s1173);
$fn1175 $tmp1174 = ($fn1175) ((frost$io$OutputStream*) $tmp1156)->$class->vtable[19];
frost$core$Error* $tmp1176 = $tmp1174(((frost$io$OutputStream*) $tmp1156), $tmp1172);
if ($tmp1176 == NULL) goto block91; else goto block92;
block92:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local0) = $tmp1176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
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
block91:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:228
frost$core$Weak** $tmp1181 = &param0->compiler;
frost$core$Weak* $tmp1182 = *$tmp1181;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:228:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1183 = &$tmp1182->_valid;
frost$core$Bit $tmp1184 = *$tmp1183;
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp1186 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1187, $tmp1186);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1188 = &$tmp1182->value;
frost$core$Object* $tmp1189 = *$tmp1188;
frost$core$Frost$ref$frost$core$Object$Q($tmp1189);
frost$core$Bit $tmp1190 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1189), param1);
bool $tmp1191 = $tmp1190.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1189);
if ($tmp1191) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:229
frost$io$IndentedOutputStream** $tmp1192 = &param0->types;
frost$io$IndentedOutputStream* $tmp1193 = *$tmp1192;
frost$core$String** $tmp1194 = &param1->name;
frost$core$String* $tmp1195 = *$tmp1194;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:229:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1196 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1197 = *$tmp1196;
frost$core$String* $tmp1198 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1197, $tmp1195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$String* $tmp1199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1200, $tmp1198);
frost$core$String* $tmp1201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1199, &$s1202);
$fn1204 $tmp1203 = ($fn1204) ((frost$io$OutputStream*) $tmp1193)->$class->vtable[19];
frost$core$Error* $tmp1205 = $tmp1203(((frost$io$OutputStream*) $tmp1193), $tmp1201);
if ($tmp1205 == NULL) goto block100; else goto block101;
block101:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local0) = $tmp1205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$String* $tmp1206 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1207 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1208 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block100:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:230
frost$io$IndentedOutputStream** $tmp1210 = &param0->types;
frost$io$IndentedOutputStream* $tmp1211 = *$tmp1210;
frost$core$Int64* $tmp1212 = &$tmp1211->level;
frost$core$Int64 $tmp1213 = *$tmp1212;
frost$core$Int64 $tmp1214 = (frost$core$Int64) {1};
int64_t $tmp1215 = $tmp1213.value;
int64_t $tmp1216 = $tmp1214.value;
int64_t $tmp1217 = $tmp1215 + $tmp1216;
frost$core$Int64 $tmp1218 = (frost$core$Int64) {$tmp1217};
frost$core$Int64* $tmp1219 = &$tmp1211->level;
*$tmp1219 = $tmp1218;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:231
frost$io$IndentedOutputStream** $tmp1220 = &param0->types;
frost$io$IndentedOutputStream* $tmp1221 = *$tmp1220;
$fn1223 $tmp1222 = ($fn1223) ((frost$io$OutputStream*) $tmp1221)->$class->vtable[19];
frost$core$Error* $tmp1224 = $tmp1222(((frost$io$OutputStream*) $tmp1221), &$s1225);
if ($tmp1224 == NULL) goto block102; else goto block103;
block103:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local0) = $tmp1224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$String* $tmp1226 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1227 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1228 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1229 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block102:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:232
frost$io$IndentedOutputStream** $tmp1230 = &param0->types;
frost$io$IndentedOutputStream* $tmp1231 = *$tmp1230;
$fn1233 $tmp1232 = ($fn1233) ((frost$io$OutputStream*) $tmp1231)->$class->vtable[19];
frost$core$Error* $tmp1234 = $tmp1232(((frost$io$OutputStream*) $tmp1231), &$s1235);
if ($tmp1234 == NULL) goto block104; else goto block105;
block105:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local0) = $tmp1234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
frost$core$String* $tmp1236 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1237 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1238 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block104:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:233
frost$io$IndentedOutputStream** $tmp1240 = &param0->types;
frost$io$IndentedOutputStream* $tmp1241 = *$tmp1240;
$fn1243 $tmp1242 = ($fn1243) ((frost$io$OutputStream*) $tmp1241)->$class->vtable[19];
frost$core$Error* $tmp1244 = $tmp1242(((frost$io$OutputStream*) $tmp1241), &$s1245);
if ($tmp1244 == NULL) goto block106; else goto block107;
block107:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local0) = $tmp1244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$String* $tmp1246 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1247 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1248 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1249 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:234
frost$io$IndentedOutputStream** $tmp1250 = &param0->types;
frost$io$IndentedOutputStream* $tmp1251 = *$tmp1250;
org$frostlang$frostc$Type** $tmp1252 = &param1->type;
org$frostlang$frostc$Type* $tmp1253 = *$tmp1252;
frost$core$String* $tmp1254 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1253);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:234:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$String* $tmp1255 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1254, &$s1256);
$fn1258 $tmp1257 = ($fn1258) ((frost$io$OutputStream*) $tmp1251)->$class->vtable[19];
frost$core$Error* $tmp1259 = $tmp1257(((frost$io$OutputStream*) $tmp1251), $tmp1255);
if ($tmp1259 == NULL) goto block109; else goto block110;
block110:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local0) = $tmp1259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$String* $tmp1260 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1261 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1262 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block109:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:235
frost$io$IndentedOutputStream** $tmp1264 = &param0->types;
frost$io$IndentedOutputStream* $tmp1265 = *$tmp1264;
frost$core$Int64* $tmp1266 = &$tmp1265->level;
frost$core$Int64 $tmp1267 = *$tmp1266;
frost$core$Int64 $tmp1268 = (frost$core$Int64) {1};
int64_t $tmp1269 = $tmp1267.value;
int64_t $tmp1270 = $tmp1268.value;
int64_t $tmp1271 = $tmp1269 - $tmp1270;
frost$core$Int64 $tmp1272 = (frost$core$Int64) {$tmp1271};
frost$core$Int64* $tmp1273 = &$tmp1265->level;
*$tmp1273 = $tmp1272;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:236
frost$io$IndentedOutputStream** $tmp1274 = &param0->types;
frost$io$IndentedOutputStream* $tmp1275 = *$tmp1274;
frost$core$String** $tmp1276 = &param1->name;
frost$core$String* $tmp1277 = *$tmp1276;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:236:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1278 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1279 = *$tmp1278;
frost$core$String* $tmp1280 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1279, $tmp1277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$String* $tmp1281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1282, $tmp1280);
frost$core$String* $tmp1283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1281, &$s1284);
$fn1286 $tmp1285 = ($fn1286) ((frost$io$OutputStream*) $tmp1275)->$class->vtable[19];
frost$core$Error* $tmp1287 = $tmp1285(((frost$io$OutputStream*) $tmp1275), $tmp1283);
if ($tmp1287 == NULL) goto block112; else goto block113;
block113:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local0) = $tmp1287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$String* $tmp1288 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1289 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1290 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1291 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block112:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:237
frost$io$IndentedOutputStream** $tmp1292 = &param0->types;
frost$io$IndentedOutputStream* $tmp1293 = *$tmp1292;
frost$core$String** $tmp1294 = &param1->name;
frost$core$String* $tmp1295 = *$tmp1294;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:237:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1296 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1297 = *$tmp1296;
frost$core$String* $tmp1298 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1297, $tmp1295);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$String* $tmp1299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1300, $tmp1298);
frost$core$String* $tmp1301 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1299, &$s1302);
$fn1304 $tmp1303 = ($fn1304) ((frost$io$OutputStream*) $tmp1293)->$class->vtable[19];
frost$core$Error* $tmp1305 = $tmp1303(((frost$io$OutputStream*) $tmp1293), $tmp1301);
if ($tmp1305 == NULL) goto block115; else goto block116;
block116:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local0) = $tmp1305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$String* $tmp1306 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1307 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1308 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1309 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block115:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:238
frost$io$IndentedOutputStream** $tmp1310 = &param0->types;
frost$io$IndentedOutputStream* $tmp1311 = *$tmp1310;
frost$core$Int64* $tmp1312 = &$tmp1311->level;
frost$core$Int64 $tmp1313 = *$tmp1312;
frost$core$Int64 $tmp1314 = (frost$core$Int64) {1};
int64_t $tmp1315 = $tmp1313.value;
int64_t $tmp1316 = $tmp1314.value;
int64_t $tmp1317 = $tmp1315 + $tmp1316;
frost$core$Int64 $tmp1318 = (frost$core$Int64) {$tmp1317};
frost$core$Int64* $tmp1319 = &$tmp1311->level;
*$tmp1319 = $tmp1318;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:239
frost$io$IndentedOutputStream** $tmp1320 = &param0->types;
frost$io$IndentedOutputStream* $tmp1321 = *$tmp1320;
frost$core$String** $tmp1322 = &param1->name;
frost$core$String* $tmp1323 = *$tmp1322;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:239:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1324 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1325 = *$tmp1324;
frost$core$String* $tmp1326 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1325, $tmp1323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:239:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$String* $tmp1327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1326, &$s1328);
$fn1330 $tmp1329 = ($fn1330) ((frost$io$OutputStream*) $tmp1321)->$class->vtable[19];
frost$core$Error* $tmp1331 = $tmp1329(((frost$io$OutputStream*) $tmp1321), $tmp1327);
if ($tmp1331 == NULL) goto block119; else goto block120;
block120:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local0) = $tmp1331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$String* $tmp1332 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1333 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1334 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1335 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block119:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:240
frost$io$IndentedOutputStream** $tmp1336 = &param0->types;
frost$io$IndentedOutputStream* $tmp1337 = *$tmp1336;
$fn1339 $tmp1338 = ($fn1339) ((frost$io$OutputStream*) $tmp1337)->$class->vtable[19];
frost$core$Error* $tmp1340 = $tmp1338(((frost$io$OutputStream*) $tmp1337), &$s1341);
if ($tmp1340 == NULL) goto block121; else goto block122;
block122:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local0) = $tmp1340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$core$String* $tmp1342 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1343 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1345 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:241
frost$io$IndentedOutputStream** $tmp1346 = &param0->types;
frost$io$IndentedOutputStream* $tmp1347 = *$tmp1346;
frost$core$Int64* $tmp1348 = &$tmp1347->level;
frost$core$Int64 $tmp1349 = *$tmp1348;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {1};
int64_t $tmp1351 = $tmp1349.value;
int64_t $tmp1352 = $tmp1350.value;
int64_t $tmp1353 = $tmp1351 - $tmp1352;
frost$core$Int64 $tmp1354 = (frost$core$Int64) {$tmp1353};
frost$core$Int64* $tmp1355 = &$tmp1347->level;
*$tmp1355 = $tmp1354;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:242
frost$io$IndentedOutputStream** $tmp1356 = &param0->types;
frost$io$IndentedOutputStream* $tmp1357 = *$tmp1356;
frost$core$String** $tmp1358 = &param1->name;
frost$core$String* $tmp1359 = *$tmp1358;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:242:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1360 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1361 = *$tmp1360;
frost$core$String* $tmp1362 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1361, $tmp1359);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$String* $tmp1363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1364, $tmp1362);
frost$core$String* $tmp1365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1363, &$s1366);
$fn1368 $tmp1367 = ($fn1368) ((frost$io$OutputStream*) $tmp1357)->$class->vtable[19];
frost$core$Error* $tmp1369 = $tmp1367(((frost$io$OutputStream*) $tmp1357), $tmp1365);
if ($tmp1369 == NULL) goto block124; else goto block125;
block125:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local0) = $tmp1369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$String* $tmp1370 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1371 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1372 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1373 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block124:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:243
frost$core$Weak** $tmp1374 = &param0->compiler;
frost$core$Weak* $tmp1375 = *$tmp1374;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:243:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1376 = &$tmp1375->_valid;
frost$core$Bit $tmp1377 = *$tmp1376;
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block128; else goto block129;
block129:;
frost$core$Int64 $tmp1379 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1380, $tmp1379);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1381 = &$tmp1375->value;
frost$core$Object* $tmp1382 = *$tmp1381;
frost$core$Frost$ref$frost$core$Object$Q($tmp1382);
// begin inline call to method org.frostlang.frostc.Type.Value():org.frostlang.frostc.Type from HCodeGenerator.frost:243:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:290
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1383 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1384 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:290:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1385 = &(&local16)->$rawValue;
*$tmp1385 = $tmp1384;
org$frostlang$frostc$Type$Kind $tmp1386 = *(&local16);
*(&local15) = $tmp1386;
org$frostlang$frostc$Type$Kind $tmp1387 = *(&local15);
org$frostlang$frostc$Position $tmp1388 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1389 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1383, &$s1390, $tmp1387, $tmp1388, $tmp1389);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
org$frostlang$frostc$ClassDecl* $tmp1391 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1382), $tmp1383);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
org$frostlang$frostc$ClassDecl* $tmp1392 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local17) = $tmp1391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
frost$core$Frost$unref$frost$core$Object$Q($tmp1382);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:244
frost$core$Weak** $tmp1393 = &param0->compiler;
frost$core$Weak* $tmp1394 = *$tmp1393;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:244:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1395 = &$tmp1394->_valid;
frost$core$Bit $tmp1396 = *$tmp1395;
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block134; else goto block135;
block135:;
frost$core$Int64 $tmp1398 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1399, $tmp1398);
abort(); // unreachable
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1400 = &$tmp1394->value;
frost$core$Object* $tmp1401 = *$tmp1400;
frost$core$Frost$ref$frost$core$Object$Q($tmp1401);
org$frostlang$frostc$ClassDecl* $tmp1402 = *(&local17);
frost$collections$ListView* $tmp1403 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1401), $tmp1402);
*(&local18) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
frost$collections$ListView* $tmp1404 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local18) = $tmp1403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
frost$core$Frost$unref$frost$core$Object$Q($tmp1401);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:245
frost$io$IndentedOutputStream** $tmp1405 = &param0->types;
frost$io$IndentedOutputStream* $tmp1406 = *$tmp1405;
frost$collections$ListView* $tmp1407 = *(&local18);
ITable* $tmp1408 = ((frost$collections$CollectionView*) $tmp1407)->$class->itable;
while ($tmp1408->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1408 = $tmp1408->next;
}
$fn1410 $tmp1409 = $tmp1408->methods[0];
frost$core$Int64 $tmp1411 = $tmp1409(((frost$collections$CollectionView*) $tmp1407));
frost$core$Int64$wrapper* $tmp1412;
$tmp1412 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1412->value = $tmp1411;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HCodeGenerator.frost:247:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1414 $tmp1413 = ($fn1414) ((frost$core$Object*) $tmp1412)->$class->vtable[0];
frost$core$String* $tmp1415 = $tmp1413(((frost$core$Object*) $tmp1412));
frost$core$String* $tmp1416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1417, $tmp1415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$String* $tmp1418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1416, &$s1419);
frost$core$String* $tmp1420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1421, $tmp1418);
frost$core$String** $tmp1422 = &param1->name;
frost$core$String* $tmp1423 = *$tmp1422;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:248:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1424 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1425 = *$tmp1424;
frost$core$String* $tmp1426 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1425, $tmp1423);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:248:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$String* $tmp1427 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1426, &$s1428);
frost$core$String* $tmp1429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1420, $tmp1427);
$fn1431 $tmp1430 = ($fn1431) ((frost$io$OutputStream*) $tmp1406)->$class->vtable[19];
frost$core$Error* $tmp1432 = $tmp1430(((frost$io$OutputStream*) $tmp1406), $tmp1429);
if ($tmp1432 == NULL) goto block139; else goto block140;
block140:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local0) = $tmp1432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$collections$ListView* $tmp1433 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local18) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1434 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp1435 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1436 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1437 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1438 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block139:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:249
frost$io$IndentedOutputStream** $tmp1439 = &param0->types;
frost$io$IndentedOutputStream* $tmp1440 = *$tmp1439;
frost$core$String** $tmp1441 = &param1->name;
frost$core$String* $tmp1442 = *$tmp1441;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:249:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1443 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1444 = *$tmp1443;
frost$core$String* $tmp1445 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1444, $tmp1442);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$String* $tmp1446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1447, $tmp1445);
frost$core$String* $tmp1448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1446, &$s1449);
frost$core$String** $tmp1450 = &param1->name;
frost$core$String* $tmp1451 = *$tmp1450;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:250:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1452 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1453 = *$tmp1452;
frost$core$String* $tmp1454 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1453, $tmp1451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:250:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$String* $tmp1455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1454, &$s1456);
frost$core$String* $tmp1457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1448, $tmp1455);
$fn1459 $tmp1458 = ($fn1459) ((frost$io$OutputStream*) $tmp1440)->$class->vtable[19];
frost$core$Error* $tmp1460 = $tmp1458(((frost$io$OutputStream*) $tmp1440), $tmp1457);
if ($tmp1460 == NULL) goto block144; else goto block145;
block145:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local0) = $tmp1460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$collections$ListView* $tmp1461 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local18) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1462 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
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
block144:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$collections$ListView* $tmp1467 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local18) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1468 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block94;
block94:;
frost$core$String* $tmp1469 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp1470 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp1471 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1472 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:254
frost$core$Weak** $tmp1473 = &param0->compiler;
frost$core$Weak* $tmp1474 = *$tmp1473;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:254:13
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1475 = &$tmp1474->_valid;
frost$core$Bit $tmp1476 = *$tmp1475;
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block148; else goto block149;
block149:;
frost$core$Int64 $tmp1478 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1479, $tmp1478);
abort(); // unreachable
block148:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1480 = &$tmp1474->value;
frost$core$Object* $tmp1481 = *$tmp1480;
frost$core$Frost$ref$frost$core$Object$Q($tmp1481);
org$frostlang$frostc$Position* $tmp1482 = &param1->position;
org$frostlang$frostc$Position $tmp1483 = *$tmp1482;
frost$core$Error* $tmp1484 = *(&local0);
frost$core$String** $tmp1485 = &$tmp1484->message;
frost$core$String* $tmp1486 = *$tmp1485;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1481), $tmp1483, $tmp1486);
frost$core$Frost$unref$frost$core$Object$Q($tmp1481);
goto block2;
block2:;
frost$core$Error* $tmp1487 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:259
frost$core$Weak** $tmp1488 = &param1->owner;
frost$core$Weak* $tmp1489 = *$tmp1488;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:259:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1490 = &$tmp1489->_valid;
frost$core$Bit $tmp1491 = *$tmp1490;
bool $tmp1492 = $tmp1491.value;
if ($tmp1492) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1493 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1494, $tmp1493);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1495 = &$tmp1489->value;
frost$core$Object* $tmp1496 = *$tmp1495;
frost$core$Frost$ref$frost$core$Object$Q($tmp1496);
org$frostlang$frostc$Type** $tmp1497 = &((org$frostlang$frostc$ClassDecl*) $tmp1496)->type;
org$frostlang$frostc$Type* $tmp1498 = *$tmp1497;
frost$core$String* $tmp1499 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1498);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
frost$core$String* $tmp1500 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local0) = $tmp1499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
frost$core$Frost$unref$frost$core$Object$Q($tmp1496);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:260
org$frostlang$frostc$MethodDecl$Kind* $tmp1501 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1502 = *$tmp1501;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1503;
$tmp1503 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1503->value = $tmp1502;
frost$core$Int64 $tmp1504 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from HCodeGenerator.frost:260:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp1505 = &(&local2)->$rawValue;
*$tmp1505 = $tmp1504;
org$frostlang$frostc$MethodDecl$Kind $tmp1506 = *(&local2);
*(&local1) = $tmp1506;
org$frostlang$frostc$MethodDecl$Kind $tmp1507 = *(&local1);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1508;
$tmp1508 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1508->value = $tmp1507;
ITable* $tmp1509 = ((frost$core$Equatable*) $tmp1503)->$class->itable;
while ($tmp1509->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1509 = $tmp1509->next;
}
$fn1511 $tmp1510 = $tmp1509->methods[0];
frost$core$Bit $tmp1512 = $tmp1510(((frost$core$Equatable*) $tmp1503), ((frost$core$Equatable*) $tmp1508));
bool $tmp1513 = $tmp1512.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1508)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1503)));
if ($tmp1513) goto block7; else goto block6;
block7:;
frost$core$String* $tmp1514 = *(&local0);
frost$core$Bit $tmp1515 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1514, &$s1516);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:260:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1517 = $tmp1515.value;
bool $tmp1518 = !$tmp1517;
frost$core$Bit $tmp1519 = (frost$core$Bit) {$tmp1518};
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:261
frost$core$String* $tmp1521 = *(&local0);
frost$core$String* $tmp1522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1521, &$s1523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
frost$core$String* $tmp1524 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1522;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:263
frost$core$String* $tmp1525 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
frost$core$String* $tmp1526 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1525;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:283
org$frostlang$frostc$Type** $tmp1527 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1528 = *$tmp1527;
frost$core$Bit $tmp1529 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1528);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:283:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1530 = $tmp1529.value;
bool $tmp1531 = !$tmp1530;
frost$core$Bit $tmp1532 = (frost$core$Bit) {$tmp1531};
bool $tmp1533 = $tmp1532.value;
if ($tmp1533) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:284
frost$core$Bit $tmp1534 = frost$core$Bit$init$builtin_bit(false);
return $tmp1534;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:286
org$frostlang$frostc$Annotations** $tmp1535 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1536 = *$tmp1535;
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from HCodeGenerator.frost:286:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:127
frost$core$Int64* $tmp1537 = &$tmp1536->flags;
frost$core$Int64 $tmp1538 = *$tmp1537;
frost$core$Int64 $tmp1539 = (frost$core$Int64) {64};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:127:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1540 = $tmp1538.value;
int64_t $tmp1541 = $tmp1539.value;
int64_t $tmp1542 = $tmp1540 & $tmp1541;
frost$core$Int64 $tmp1543 = frost$core$Int64$init$builtin_int64($tmp1542);
frost$core$Int64 $tmp1544 = (frost$core$Int64) {0};
int64_t $tmp1545 = $tmp1543.value;
int64_t $tmp1546 = $tmp1544.value;
bool $tmp1547 = $tmp1545 != $tmp1546;
frost$core$Bit $tmp1548 = (frost$core$Bit) {$tmp1547};
bool $tmp1549 = $tmp1548.value;
if ($tmp1549) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1550 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1551 = *$tmp1550;
frost$core$Bit $tmp1552 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1551);
*(&local1) = $tmp1552;
goto block8;
block7:;
*(&local1) = $tmp1548;
goto block8;
block8:;
frost$core$Bit $tmp1553 = *(&local1);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block9; else goto block10;
block9:;
frost$core$Weak** $tmp1555 = &param0->compiler;
frost$core$Weak* $tmp1556 = *$tmp1555;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:287:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1557 = &$tmp1556->_valid;
frost$core$Bit $tmp1558 = *$tmp1557;
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1560 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1561, $tmp1560);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1562 = &$tmp1556->value;
frost$core$Object* $tmp1563 = *$tmp1562;
frost$core$Frost$ref$frost$core$Object$Q($tmp1563);
frost$core$Weak** $tmp1564 = &param0->compiler;
frost$core$Weak* $tmp1565 = *$tmp1564;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:287:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1566 = &$tmp1565->_valid;
frost$core$Bit $tmp1567 = *$tmp1566;
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1569 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1570, $tmp1569);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1571 = &$tmp1565->value;
frost$core$Object* $tmp1572 = *$tmp1571;
frost$core$Frost$ref$frost$core$Object$Q($tmp1572);
org$frostlang$frostc$Type** $tmp1573 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1574 = *$tmp1573;
org$frostlang$frostc$ClassDecl* $tmp1575 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1572), $tmp1574);
frost$core$Bit $tmp1576 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1563), $tmp1575);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
frost$core$Frost$unref$frost$core$Object$Q($tmp1572);
frost$core$Frost$unref$frost$core$Object$Q($tmp1563);
*(&local0) = $tmp1576;
goto block11;
block10:;
*(&local0) = $tmp1553;
goto block11;
block11:;
frost$core$Bit $tmp1577 = *(&local0);
*(&local2) = $tmp1577;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:292
frost$core$Bit $tmp1578 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:292:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1579 = $tmp1578.value;
bool $tmp1580 = !$tmp1579;
frost$core$Bit $tmp1581 = (frost$core$Bit) {$tmp1580};
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block21; else goto block22;
block21:;
*(&local3) = $tmp1581;
goto block23;
block22:;
org$frostlang$frostc$Annotations** $tmp1583 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1584 = *$tmp1583;
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from HCodeGenerator.frost:292:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:123
frost$core$Int64* $tmp1585 = &$tmp1584->flags;
frost$core$Int64 $tmp1586 = *$tmp1585;
frost$core$Int64 $tmp1587 = (frost$core$Int64) {32};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:123:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1588 = $tmp1586.value;
int64_t $tmp1589 = $tmp1587.value;
int64_t $tmp1590 = $tmp1588 & $tmp1589;
frost$core$Int64 $tmp1591 = frost$core$Int64$init$builtin_int64($tmp1590);
frost$core$Int64 $tmp1592 = (frost$core$Int64) {0};
int64_t $tmp1593 = $tmp1591.value;
int64_t $tmp1594 = $tmp1592.value;
bool $tmp1595 = $tmp1593 != $tmp1594;
frost$core$Bit $tmp1596 = (frost$core$Bit) {$tmp1595};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:292:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1597 = $tmp1596.value;
bool $tmp1598 = !$tmp1597;
frost$core$Bit $tmp1599 = (frost$core$Bit) {$tmp1598};
bool $tmp1600 = $tmp1599.value;
if ($tmp1600) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Annotations** $tmp1601 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1602 = *$tmp1601;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from HCodeGenerator.frost:292:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp1603 = &$tmp1602->flags;
frost$core$Int64 $tmp1604 = *$tmp1603;
frost$core$Int64 $tmp1605 = (frost$core$Int64) {256};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1606 = $tmp1604.value;
int64_t $tmp1607 = $tmp1605.value;
int64_t $tmp1608 = $tmp1606 & $tmp1607;
frost$core$Int64 $tmp1609 = frost$core$Int64$init$builtin_int64($tmp1608);
frost$core$Int64 $tmp1610 = (frost$core$Int64) {0};
int64_t $tmp1611 = $tmp1609.value;
int64_t $tmp1612 = $tmp1610.value;
bool $tmp1613 = $tmp1611 != $tmp1612;
frost$core$Bit $tmp1614 = (frost$core$Bit) {$tmp1613};
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block32; else goto block33;
block32:;
*(&local5) = $tmp1614;
goto block34;
block33:;
org$frostlang$frostc$Annotations** $tmp1616 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1617 = *$tmp1616;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:293:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp1618 = &$tmp1617->flags;
frost$core$Int64 $tmp1619 = *$tmp1618;
frost$core$Int64 $tmp1620 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1621 = $tmp1619.value;
int64_t $tmp1622 = $tmp1620.value;
int64_t $tmp1623 = $tmp1621 & $tmp1622;
frost$core$Int64 $tmp1624 = frost$core$Int64$init$builtin_int64($tmp1623);
frost$core$Int64 $tmp1625 = (frost$core$Int64) {0};
int64_t $tmp1626 = $tmp1624.value;
int64_t $tmp1627 = $tmp1625.value;
bool $tmp1628 = $tmp1626 != $tmp1627;
frost$core$Bit $tmp1629 = (frost$core$Bit) {$tmp1628};
*(&local5) = $tmp1629;
goto block34;
block34:;
frost$core$Bit $tmp1630 = *(&local5);
*(&local4) = $tmp1630;
goto block29;
block28:;
*(&local4) = $tmp1599;
goto block29;
block29:;
frost$core$Bit $tmp1631 = *(&local4);
*(&local3) = $tmp1631;
goto block23;
block23:;
frost$core$Bit $tmp1632 = *(&local3);
bool $tmp1633 = $tmp1632.value;
if ($tmp1633) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1634 = (frost$core$Int64) {292};
frost$core$String* $tmp1635 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1637, $tmp1635);
frost$core$String* $tmp1638 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1636, &$s1639);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1640, $tmp1634, $tmp1638);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:294
frost$core$Bit $tmp1641 = *(&local2);
return $tmp1641;

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
frost$io$MemoryOutputStream** $tmp1642 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1643 = *$tmp1642;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$io$MemoryOutputStream** $tmp1644 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1645 = *$tmp1644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
frost$io$MemoryOutputStream** $tmp1646 = &param0->importStream;
*$tmp1646 = $tmp1643;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:301
frost$collections$HashSet** $tmp1647 = &param0->bodyImports;
frost$collections$HashSet* $tmp1648 = *$tmp1647;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
frost$collections$HashSet** $tmp1649 = &param0->imports;
frost$collections$HashSet* $tmp1650 = *$tmp1649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$collections$HashSet** $tmp1651 = &param0->imports;
*$tmp1651 = $tmp1648;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:302
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1652));
frost$core$String* $tmp1653 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local1) = &$s1654;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:303
frost$core$Bit $tmp1655 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:304
frost$io$IndentedOutputStream** $tmp1657 = &param0->body;
frost$io$IndentedOutputStream* $tmp1658 = *$tmp1657;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:304:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1659 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1660 = *$tmp1659;
frost$core$String* $tmp1661 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1660, param1);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
frost$core$String* $tmp1662 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local2) = $tmp1661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1663 = *(&local2);
frost$core$Bit $tmp1664 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1663, &$s1665);
bool $tmp1666 = $tmp1664.value;
if ($tmp1666) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1667 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1668, $tmp1667);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1669 = *(&local2);
frost$core$Int64 $tmp1670 = (frost$core$Int64) {1};
frost$core$Bit $tmp1671 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1672 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1670, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1671);
frost$core$String* $tmp1673 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1669, $tmp1672);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$String* $tmp1674 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp1675 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1676, $tmp1673);
frost$core$String* $tmp1677 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1675, &$s1678);
org$frostlang$frostc$Type** $tmp1679 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1680 = *$tmp1679;
frost$core$String* $tmp1681 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1680);
frost$core$String* $tmp1682 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1677, $tmp1681);
frost$core$String* $tmp1683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1682, &$s1684);
$fn1686 $tmp1685 = ($fn1686) ((frost$io$OutputStream*) $tmp1658)->$class->vtable[17];
frost$core$Error* $tmp1687 = $tmp1685(((frost$io$OutputStream*) $tmp1658), $tmp1683);
if ($tmp1687 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local0) = $tmp1687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$String* $tmp1688 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1689));
frost$core$String* $tmp1690 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
*(&local1) = &$s1691;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:308
frost$io$IndentedOutputStream** $tmp1692 = &param0->body;
frost$io$IndentedOutputStream* $tmp1693 = *$tmp1692;
org$frostlang$frostc$Type** $tmp1694 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1695 = *$tmp1694;
frost$core$String* $tmp1696 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1695);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:308:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$core$String* $tmp1697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1696, &$s1698);
// begin inline call to function org.frostlang.frostc.HCodeGenerator.getName(m:org.frostlang.frostc.MethodDecl):frost.core.String from HCodeGenerator.frost:308:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:58
org$frostlang$frostc$LLVMCodeGenerator** $tmp1699 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1700 = *$tmp1699;
frost$core$String* $tmp1701 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp1700, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$String* $tmp1702 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local3) = $tmp1701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:59
frost$core$String* $tmp1703 = *(&local3);
frost$core$Bit $tmp1704 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1703, &$s1705);
bool $tmp1706 = $tmp1704.value;
if ($tmp1706) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1707 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1708, $tmp1707);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:60
frost$core$String* $tmp1709 = *(&local3);
frost$core$Int64 $tmp1710 = (frost$core$Int64) {1};
frost$core$Bit $tmp1711 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1712 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1710, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1711);
frost$core$String* $tmp1713 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1709, $tmp1712);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
frost$core$String* $tmp1714 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp1715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1697, $tmp1713);
frost$core$String* $tmp1716 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1715, &$s1717);
$fn1719 $tmp1718 = ($fn1719) ((frost$io$OutputStream*) $tmp1693)->$class->vtable[17];
frost$core$Error* $tmp1720 = $tmp1718(((frost$io$OutputStream*) $tmp1693), $tmp1716);
if ($tmp1720 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local0) = $tmp1720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$core$String* $tmp1721 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:310
org$frostlang$frostc$Annotations** $tmp1722 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1723 = *$tmp1722;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from HCodeGenerator.frost:310:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp1724 = &$tmp1723->flags;
frost$core$Int64 $tmp1725 = *$tmp1724;
frost$core$Int64 $tmp1726 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1727 = $tmp1725.value;
int64_t $tmp1728 = $tmp1726.value;
int64_t $tmp1729 = $tmp1727 & $tmp1728;
frost$core$Int64 $tmp1730 = frost$core$Int64$init$builtin_int64($tmp1729);
frost$core$Int64 $tmp1731 = (frost$core$Int64) {0};
int64_t $tmp1732 = $tmp1730.value;
int64_t $tmp1733 = $tmp1731.value;
bool $tmp1734 = $tmp1732 != $tmp1733;
frost$core$Bit $tmp1735 = (frost$core$Bit) {$tmp1734};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:310:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1736 = $tmp1735.value;
bool $tmp1737 = !$tmp1736;
frost$core$Bit $tmp1738 = (frost$core$Bit) {$tmp1737};
bool $tmp1739 = $tmp1738.value;
if ($tmp1739) goto block19; else goto block18;
block19:;
frost$core$Weak** $tmp1740 = &param0->compiler;
frost$core$Weak* $tmp1741 = *$tmp1740;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from HCodeGenerator.frost:310:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1742 = &$tmp1741->_valid;
frost$core$Bit $tmp1743 = *$tmp1742;
bool $tmp1744 = $tmp1743.value;
if ($tmp1744) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1745 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1746, $tmp1745);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1747 = &$tmp1741->value;
frost$core$Object* $tmp1748 = *$tmp1747;
frost$core$Frost$ref$frost$core$Object$Q($tmp1748);
// begin inline call to method org.frostlang.frostc.Compiler.isValueInit(m:org.frostlang.frostc.MethodDecl):frost.core.Bit from HCodeGenerator.frost:310:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3839
org$frostlang$frostc$MethodDecl$Kind* $tmp1749 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1750 = *$tmp1749;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1751;
$tmp1751 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1751->value = $tmp1750;
frost$core$Int64 $tmp1752 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Compiler.frost:3839:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp1753 = &(&local6)->$rawValue;
*$tmp1753 = $tmp1752;
org$frostlang$frostc$MethodDecl$Kind $tmp1754 = *(&local6);
*(&local5) = $tmp1754;
org$frostlang$frostc$MethodDecl$Kind $tmp1755 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1756;
$tmp1756 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1756->value = $tmp1755;
ITable* $tmp1757 = ((frost$core$Equatable*) $tmp1751)->$class->itable;
while ($tmp1757->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1757 = $tmp1757->next;
}
$fn1759 $tmp1758 = $tmp1757->methods[0];
frost$core$Bit $tmp1760 = $tmp1758(((frost$core$Equatable*) $tmp1751), ((frost$core$Equatable*) $tmp1756));
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block29; else goto block30;
block29:;
frost$core$Weak** $tmp1762 = &param1->owner;
frost$core$Weak* $tmp1763 = *$tmp1762;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Compiler.frost:3839:63
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp1764 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp1763);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1766 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1767, $tmp1766);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1768 = &$tmp1763->value;
frost$core$Object* $tmp1769 = *$tmp1768;
frost$core$Frost$ref$frost$core$Object$Q($tmp1769);
frost$core$Bit $tmp1770 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1748), ((org$frostlang$frostc$ClassDecl*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q($tmp1769);
*(&local4) = $tmp1770;
goto block31;
block30:;
*(&local4) = $tmp1760;
goto block31;
block31:;
frost$core$Bit $tmp1771 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1756)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1751)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from HCodeGenerator.frost:310:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1772 = $tmp1771.value;
bool $tmp1773 = !$tmp1772;
frost$core$Bit $tmp1774 = (frost$core$Bit) {$tmp1773};
bool $tmp1775 = $tmp1774.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1748);
if ($tmp1775) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:311
frost$io$IndentedOutputStream** $tmp1776 = &param0->body;
frost$io$IndentedOutputStream* $tmp1777 = *$tmp1776;
frost$core$String* $tmp1778 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:311:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
frost$core$String* $tmp1779 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1778, &$s1780);
frost$core$String* $tmp1781 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1779, $tmp1781);
frost$core$String* $tmp1783 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1782, &$s1784);
$fn1786 $tmp1785 = ($fn1786) ((frost$io$OutputStream*) $tmp1777)->$class->vtable[17];
frost$core$Error* $tmp1787 = $tmp1785(((frost$io$OutputStream*) $tmp1777), $tmp1783);
if ($tmp1787 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
*(&local0) = $tmp1787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
frost$core$String* $tmp1788 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1789));
frost$core$String* $tmp1790 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local1) = &$s1791;
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:314
frost$collections$Array** $tmp1792 = &param1->parameters;
frost$collections$Array* $tmp1793 = *$tmp1792;
ITable* $tmp1794 = ((frost$collections$Iterable*) $tmp1793)->$class->itable;
while ($tmp1794->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1794 = $tmp1794->next;
}
$fn1796 $tmp1795 = $tmp1794->methods[0];
frost$collections$Iterator* $tmp1797 = $tmp1795(((frost$collections$Iterable*) $tmp1793));
goto block39;
block39:;
ITable* $tmp1798 = $tmp1797->$class->itable;
while ($tmp1798->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1798 = $tmp1798->next;
}
$fn1800 $tmp1799 = $tmp1798->methods[0];
frost$core$Bit $tmp1801 = $tmp1799($tmp1797);
bool $tmp1802 = $tmp1801.value;
if ($tmp1802) goto block41; else goto block40;
block40:;
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1803 = $tmp1797->$class->itable;
while ($tmp1803->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1803 = $tmp1803->next;
}
$fn1805 $tmp1804 = $tmp1803->methods[1];
frost$core$Object* $tmp1806 = $tmp1804($tmp1797);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1806)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1807 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1806);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:315
org$frostlang$frostc$MethodDecl$Parameter* $tmp1808 = *(&local7);
frost$core$String** $tmp1809 = &$tmp1808->name;
frost$core$String* $tmp1810 = *$tmp1809;
// begin inline call to function org.frostlang.frostc.HCodeGenerator.escapeName(s:frost.core.String):frost.core.String from HCodeGenerator.frost:315:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:54
org$frostlang$frostc$LLVMCodeGenerator** $tmp1811 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1812 = *$tmp1811;
frost$core$String* $tmp1813 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp1812, $tmp1810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
frost$core$String* $tmp1814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1815, $tmp1813);
frost$core$String* $tmp1816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1814, &$s1817);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$String* $tmp1818 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local8) = $tmp1816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:316
frost$io$IndentedOutputStream** $tmp1819 = &param0->body;
frost$io$IndentedOutputStream* $tmp1820 = *$tmp1819;
frost$core$String* $tmp1821 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:316:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
frost$core$String* $tmp1822 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1821, &$s1823);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1824 = *(&local7);
org$frostlang$frostc$Type** $tmp1825 = &$tmp1824->type;
org$frostlang$frostc$Type* $tmp1826 = *$tmp1825;
frost$core$String* $tmp1827 = *(&local8);
// begin inline call to method org.frostlang.frostc.HCodeGenerator.declaration(t:org.frostlang.frostc.Type, name:frost.core.String):frost.core.String from HCodeGenerator.frost:316:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:171
frost$core$String* $tmp1828 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1826);
// begin inline call to function frost.core.String.get_asString():frost.core.String from HCodeGenerator.frost:171:23
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$String* $tmp1829 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1828, &$s1830);
frost$core$String* $tmp1831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1829, $tmp1827);
frost$core$String* $tmp1832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1831, &$s1833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$String* $tmp1834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1822, $tmp1832);
frost$core$String* $tmp1835 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1834, &$s1836);
$fn1838 $tmp1837 = ($fn1838) ((frost$io$OutputStream*) $tmp1820)->$class->vtable[17];
frost$core$Error* $tmp1839 = $tmp1837(((frost$io$OutputStream*) $tmp1820), $tmp1835);
if ($tmp1839 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
*(&local0) = $tmp1839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
frost$core$String* $tmp1840 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1806);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1841 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$String* $tmp1842 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1843));
frost$core$String* $tmp1844 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
*(&local1) = &$s1845;
frost$core$String* $tmp1846 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1806);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1847 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local7) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:319
frost$io$IndentedOutputStream** $tmp1848 = &param0->body;
frost$io$IndentedOutputStream* $tmp1849 = *$tmp1848;
$fn1851 $tmp1850 = ($fn1851) ((frost$io$OutputStream*) $tmp1849)->$class->vtable[19];
frost$core$Error* $tmp1852 = $tmp1850(((frost$io$OutputStream*) $tmp1849), &$s1853);
if ($tmp1852 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local0) = $tmp1852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$String* $tmp1854 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$String* $tmp1855 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp1856 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:322
frost$core$Int64 $tmp1857 = (frost$core$Int64) {322};
frost$core$Error* $tmp1858 = *(&local0);
$fn1860 $tmp1859 = ($fn1860) ((frost$core$Object*) $tmp1858)->$class->vtable[0];
frost$core$String* $tmp1861 = $tmp1859(((frost$core$Object*) $tmp1858));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1862, $tmp1857, $tmp1861);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
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
frost$io$IndentedOutputStream** $tmp1863 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1864 = *$tmp1863;
frost$io$MemoryOutputStream** $tmp1865 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1866 = *$tmp1865;
$fn1868 $tmp1867 = ($fn1868) ((frost$io$OutputStream*) $tmp1864)->$class->vtable[20];
frost$core$Error* $tmp1869 = $tmp1867(((frost$io$OutputStream*) $tmp1864), ((frost$core$Object*) $tmp1866));
if ($tmp1869 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
*(&local0) = $tmp1869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:335
frost$io$IndentedOutputStream** $tmp1870 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1871 = *$tmp1870;
frost$io$MemoryOutputStream** $tmp1872 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1873 = *$tmp1872;
$fn1875 $tmp1874 = ($fn1875) ((frost$io$OutputStream*) $tmp1871)->$class->vtable[20];
frost$core$Error* $tmp1876 = $tmp1874(((frost$io$OutputStream*) $tmp1871), ((frost$core$Object*) $tmp1873));
if ($tmp1876 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
*(&local0) = $tmp1876;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:336
frost$io$IndentedOutputStream** $tmp1877 = &param0->out;
frost$io$IndentedOutputStream* $tmp1878 = *$tmp1877;
frost$io$MemoryOutputStream** $tmp1879 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1880 = *$tmp1879;
$fn1882 $tmp1881 = ($fn1882) ((frost$io$OutputStream*) $tmp1878)->$class->vtable[20];
frost$core$Error* $tmp1883 = $tmp1881(((frost$io$OutputStream*) $tmp1878), ((frost$core$Object*) $tmp1880));
if ($tmp1883 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
*(&local0) = $tmp1883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:337
frost$io$IndentedOutputStream** $tmp1884 = &param0->out;
frost$io$IndentedOutputStream* $tmp1885 = *$tmp1884;
frost$io$MemoryOutputStream** $tmp1886 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1887 = *$tmp1886;
$fn1889 $tmp1888 = ($fn1889) ((frost$io$OutputStream*) $tmp1885)->$class->vtable[20];
frost$core$Error* $tmp1890 = $tmp1888(((frost$io$OutputStream*) $tmp1885), ((frost$core$Object*) $tmp1887));
if ($tmp1890 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local0) = $tmp1890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:340
frost$core$Error* $tmp1891 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HCodeGenerator.frost:340:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn1893 $tmp1892 = ($fn1893) ((frost$core$Object*) $tmp1891)->$class->vtable[0];
frost$core$String* $tmp1894 = $tmp1892(((frost$core$Object*) $tmp1891));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1894);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:341
frost$core$Int64 $tmp1895 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp1895);
goto block2;
block2:;
frost$core$Error* $tmp1896 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HCodeGenerator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1897 = &param0->compiler;
frost$core$Weak* $tmp1898 = *$tmp1897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
frost$io$MemoryOutputStream** $tmp1899 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1900 = *$tmp1899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
frost$io$MemoryOutputStream** $tmp1901 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1902 = *$tmp1901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
frost$io$IndentedOutputStream** $tmp1903 = &param0->types;
frost$io$IndentedOutputStream* $tmp1904 = *$tmp1903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$io$MemoryOutputStream** $tmp1905 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1906 = *$tmp1905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$io$MemoryOutputStream** $tmp1907 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1908 = *$tmp1907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
frost$io$IndentedOutputStream** $tmp1909 = &param0->body;
frost$io$IndentedOutputStream* $tmp1910 = *$tmp1909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$collections$HashSet** $tmp1911 = &param0->typeImports;
frost$collections$HashSet* $tmp1912 = *$tmp1911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
frost$collections$HashSet** $tmp1913 = &param0->bodyImports;
frost$collections$HashSet* $tmp1914 = *$tmp1913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$collections$HashSet** $tmp1915 = &param0->imports;
frost$collections$HashSet* $tmp1916 = *$tmp1915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
frost$io$MemoryOutputStream** $tmp1917 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1918 = *$tmp1917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
frost$io$File** $tmp1919 = &param0->outDir;
frost$io$File* $tmp1920 = *$tmp1919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
frost$io$IndentedOutputStream** $tmp1921 = &param0->out;
frost$io$IndentedOutputStream* $tmp1922 = *$tmp1921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$io$IndentedOutputStream** $tmp1923 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1924 = *$tmp1923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1925 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1926 = *$tmp1925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
frost$core$Weak** $tmp1927 = &param0->cCodeGen;
frost$core$Weak* $tmp1928 = *$tmp1927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$CCodeGenerator** $tmp1929 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1930 = *$tmp1929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
return;

}

