#include "org/frostlang/frostc/HCodeGenerator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/io/MemoryOutputStream.h"
#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/MethodDecl.h"
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

typedef frost$core$Error* (*$fn249)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn285)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn453)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn491)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn579)(frost$core$Object*);
typedef frost$core$Error* (*$fn666)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn674)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn688)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn695)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn703)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn728)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn753)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn757)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn762)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn798)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn819)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn833)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn841)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn866)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn873)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn903)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn919)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn939)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn963)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn980)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn988)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1002)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1026)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1040)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1063)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1070)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1095)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1131)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1148)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1171)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1210)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1317)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1336)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1367)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1377)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1381)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1386)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1413)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1426)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1436)(frost$core$Object*);
typedef frost$core$Error* (*$fn1445)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1452)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1459)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1466)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, 945681673046986118, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 109, -7616283196064397501, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40", 1, 165, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 133, -1550011923375769787, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, 8768873314443410019, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 119, 6369952431726339328, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s1038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s1072 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s1091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s1093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s1137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s1145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };

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
// unreffing REF($1:org.frostlang.frostc.CCodeGenerator)
// line 43
org$frostlang$frostc$CCodeGenerator** $tmp6 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block1:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1, org$frostlang$frostc$CCodeGenerator* param2) {

// line 6
frost$core$Weak* $tmp13 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp13, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Weak** $tmp14 = &param0->compiler;
frost$core$Weak* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Weak** $tmp16 = &param0->compiler;
*$tmp16 = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.Compiler?>)
// line 8
frost$io$MemoryOutputStream* $tmp17 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$io$MemoryOutputStream** $tmp18 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$io$MemoryOutputStream** $tmp20 = &param0->typeImportStream;
*$tmp20 = $tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($17:frost.io.MemoryOutputStream)
// line 10
frost$io$MemoryOutputStream* $tmp21 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$io$MemoryOutputStream** $tmp22 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$io$MemoryOutputStream** $tmp24 = &param0->typesBuffer;
*$tmp24 = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($31:frost.io.MemoryOutputStream)
// line 12
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
// unreffing REF($45:frost.io.IndentedOutputStream)
// line 14
frost$io$MemoryOutputStream* $tmp31 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$io$MemoryOutputStream** $tmp32 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$io$MemoryOutputStream** $tmp34 = &param0->bodyImportStream;
*$tmp34 = $tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing REF($62:frost.io.MemoryOutputStream)
// line 16
frost$io$MemoryOutputStream* $tmp35 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$io$MemoryOutputStream** $tmp36 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$io$MemoryOutputStream** $tmp38 = &param0->bodyBuffer;
*$tmp38 = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($76:frost.io.MemoryOutputStream)
// line 18
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
// unreffing REF($90:frost.io.IndentedOutputStream)
// line 20
frost$collections$HashSet* $tmp45 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$collections$HashSet** $tmp46 = &param0->typeImports;
frost$collections$HashSet* $tmp47 = *$tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$collections$HashSet** $tmp48 = &param0->typeImports;
*$tmp48 = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing REF($107:frost.collections.HashSet<frost.core.String>)
// line 22
frost$collections$HashSet* $tmp49 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$HashSet** $tmp50 = &param0->bodyImports;
frost$collections$HashSet* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$HashSet** $tmp52 = &param0->bodyImports;
*$tmp52 = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($122:frost.collections.HashSet<frost.core.String>)
// line 24
frost$collections$HashSet** $tmp53 = &param0->typeImports;
frost$collections$HashSet* $tmp54 = *$tmp53;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$collections$HashSet** $tmp55 = &param0->imports;
frost$collections$HashSet* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$collections$HashSet** $tmp57 = &param0->imports;
*$tmp57 = $tmp54;
// line 26
frost$io$MemoryOutputStream** $tmp58 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp59 = *$tmp58;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$io$MemoryOutputStream** $tmp60 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp61 = *$tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$io$MemoryOutputStream** $tmp62 = &param0->importStream;
*$tmp62 = $tmp59;
// line 34
org$frostlang$frostc$LLVMCodeGenerator* $tmp63 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
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
// unreffing REF($160:frost.io.MemoryOutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing REF($159:org.frostlang.frostc.LLVMCodeGenerator)
// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp69 = &param0->outDir;
frost$io$File* $tmp70 = *$tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$io$File** $tmp71 = &param0->outDir;
*$tmp71 = param1;
// line 48
frost$io$IndentedOutputStream* $tmp72 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
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
// unreffing REF($189:frost.io.MemoryOutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($188:frost.io.IndentedOutputStream)
// line 49
frost$io$IndentedOutputStream* $tmp77 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
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
// unreffing REF($209:frost.io.MemoryOutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($208:frost.io.IndentedOutputStream)
// line 50
frost$core$Weak* $tmp82 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp82, ((frost$core$Object*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Weak** $tmp83 = &param0->cCodeGen;
frost$core$Weak* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Weak** $tmp85 = &param0->cCodeGen;
*$tmp85 = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($228:frost.core.Weak<org.frostlang.frostc.CCodeGenerator>)
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, frost$core$String* param1) {

// line 54
org$frostlang$frostc$LLVMCodeGenerator** $tmp86 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp87 = *$tmp86;
frost$core$String* $tmp88 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp87, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing REF($3:frost.core.String)
return $tmp88;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 58
org$frostlang$frostc$LLVMCodeGenerator** $tmp89 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp90 = *$tmp89;
frost$core$String* $tmp91 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp90, param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$String* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($3:frost.core.String)
// line 59
frost$core$String* $tmp93 = *(&local0);
frost$core$Bit $tmp94 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp93, &$s95);
bool $tmp96 = $tmp94.value;
if ($tmp96) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp97 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s98, $tmp97);
abort(); // unreachable
block1:;
// line 60
frost$core$String* $tmp99 = *(&local0);
frost$core$Int64 $tmp100 = (frost$core$Int64) {1};
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp102 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp100, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp101);
frost$core$String* $tmp103 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp99, $tmp102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($28:frost.core.String)
frost$core$String* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing llvmName
*(&local0) = ((frost$core$String*) NULL);
return $tmp103;

}
frost$core$Int64 org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 64
org$frostlang$frostc$LLVMCodeGenerator** $tmp105 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp106 = *$tmp105;
frost$core$Int64 $tmp107 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp106, param1);
return $tmp107;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 68
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
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($3:frost.core.String)
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
// line 73
*(&local0) = ((frost$core$Error*) NULL);
// line 74
org$frostlang$frostc$Type$Kind* $tmp129 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp130 = *$tmp129;
frost$core$Int64 $tmp131 = $tmp130.$rawValue;
frost$core$Int64 $tmp132 = (frost$core$Int64) {4};
frost$core$Bit $tmp133 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block4; else goto block5;
block4:;
// line 76
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s135));
frost$core$Error* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return &$s137;
block5:;
frost$core$Int64 $tmp138 = (frost$core$Int64) {2};
frost$core$Bit $tmp139 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block6; else goto block7;
block6:;
// line 79
frost$core$Int64 $tmp141 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp142 = (frost$core$Int64) {8};
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142.value;
int64_t $tmp145 = $tmp143 * $tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {$tmp145};
frost$core$Int64$wrapper* $tmp147;
$tmp147 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp147->value = $tmp146;
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s149, ((frost$core$Object*) $tmp147));
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s151);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($32:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($31:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($30:frost.core.Object)
frost$core$Error* $tmp152 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp150;
block7:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {3};
frost$core$Bit $tmp154 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block8; else goto block9;
block8:;
// line 82
frost$core$Int64 $tmp156 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp157 = (frost$core$Int64) {8};
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158 * $tmp159;
frost$core$Int64 $tmp161 = (frost$core$Int64) {$tmp160};
frost$core$Int64$wrapper* $tmp162;
$tmp162 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp162->value = $tmp161;
frost$core$String* $tmp163 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s164, ((frost$core$Object*) $tmp162));
frost$core$String* $tmp165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp163, &$s166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($61:frost.core.Object)
frost$core$Error* $tmp167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp165;
block9:;
frost$core$Int64 $tmp168 = (frost$core$Int64) {9};
frost$core$Bit $tmp169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block10; else goto block11;
block10:;
// line 85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s171));
frost$core$Error* $tmp172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return &$s173;
block11:;
frost$core$Int64 $tmp174 = (frost$core$Int64) {10};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block12; else goto block13;
block12:;
// line 88
frost$core$Int64 $tmp177 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp178 = (frost$core$Int64) {4};
frost$core$Bit $tmp179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp178);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block15; else goto block16;
block15:;
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s181));
frost$core$Error* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return &$s183;
block16:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {8};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block17; else goto block18;
block17:;
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s187));
frost$core$Error* $tmp188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return &$s189;
block18:;
// line 91
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit(false);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s193, $tmp192);
abort(); // unreachable
block19:;
goto block14;
block14:;
goto block3;
block13:;
frost$core$Int64 $tmp194 = (frost$core$Int64) {0};
frost$core$Bit $tmp195 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block21; else goto block22;
block21:;
// line 95
frost$core$String** $tmp197 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp198 = *$tmp197;
frost$core$String* $tmp199 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp198);
frost$core$String* $tmp200 = frost$core$String$get_asString$R$frost$core$String($tmp199);
frost$core$String* $tmp201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp200, &$s202);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$String* $tmp203 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local1) = $tmp201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($145:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// unreffing REF($144:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing REF($143:frost.core.String)
// line 96
frost$core$Weak** $tmp204 = &param0->compiler;
frost$core$Weak* $tmp205 = *$tmp204;
frost$core$Object* $tmp206 = frost$core$Weak$get$R$frost$core$Weak$T($tmp205);
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp206) != NULL);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s210, $tmp209, &$s211);
abort(); // unreachable
block23:;
org$frostlang$frostc$ClassDecl* $tmp212 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp206), param1);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
org$frostlang$frostc$ClassDecl* $tmp213 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local2) = $tmp212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing REF($176:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp206);
// unreffing REF($166:frost.core.Weak.T)
// line 97
org$frostlang$frostc$ClassDecl* $tmp214 = *(&local2);
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214 != NULL);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s218, $tmp217);
abort(); // unreachable
block25:;
// line 98
frost$core$Weak** $tmp219 = &param0->compiler;
frost$core$Weak* $tmp220 = *$tmp219;
frost$core$Object* $tmp221 = frost$core$Weak$get$R$frost$core$Weak$T($tmp220);
frost$core$Bit $tmp222 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp221) != NULL);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp224 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s225, $tmp224, &$s226);
abort(); // unreachable
block29:;
org$frostlang$frostc$ClassDecl* $tmp227 = *(&local2);
frost$core$Bit $tmp228 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp221), $tmp227);
frost$core$Bit $tmp229 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp228);
bool $tmp230 = $tmp229.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
// unreffing REF($203:frost.core.Weak.T)
if ($tmp230) goto block27; else goto block28;
block27:;
// line 99
frost$collections$HashSet** $tmp231 = &param0->imports;
frost$collections$HashSet* $tmp232 = *$tmp231;
frost$core$String* $tmp233 = *(&local1);
frost$core$Bit $tmp234 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp232, ((frost$collections$Key*) $tmp233));
frost$core$Bit $tmp235 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block31; else goto block32;
block31:;
// line 100
frost$io$MemoryOutputStream** $tmp237 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp238 = *$tmp237;
frost$core$String* $tmp239 = *(&local1);
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s241, $tmp239);
frost$core$String* $tmp242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp240, &$s243);
frost$core$String* $tmp244 = *(&local1);
frost$core$String* $tmp245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp242, $tmp244);
frost$core$String* $tmp246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp245, &$s247);
$fn249 $tmp248 = ($fn249) ((frost$io$OutputStream*) $tmp238)->$class->vtable[19];
frost$core$Error* $tmp250 = $tmp248(((frost$io$OutputStream*) $tmp238), $tmp246);
// try error check
if ($tmp250 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local0) = $tmp250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($242:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($240:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($239:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($237:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($236:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing cl
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp252 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($242:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($240:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($239:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($237:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($236:frost.core.String)
// line 101
frost$collections$HashSet** $tmp253 = &param0->imports;
frost$collections$HashSet* $tmp254 = *$tmp253;
frost$core$String* $tmp255 = *(&local1);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp254, ((frost$collections$Key*) $tmp255));
goto block32;
block32:;
// line 103
frost$core$String* $tmp256 = *(&local1);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($300:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing cl
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp257;
block28:;
// line 105
org$frostlang$frostc$ClassDecl* $tmp262 = *(&local2);
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit($tmp262 != NULL);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp265 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s266, $tmp265, &$s267);
abort(); // unreachable
block35:;
frost$core$String* $tmp268 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp262, &$s269);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$String* $tmp270 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local3) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($332:frost.core.String)
// line 106
frost$collections$HashSet** $tmp271 = &param0->imports;
frost$collections$HashSet* $tmp272 = *$tmp271;
frost$core$String* $tmp273 = *(&local3);
frost$core$Bit $tmp274 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp272, ((frost$collections$Key*) $tmp273));
frost$core$Bit $tmp275 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp274);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block37; else goto block38;
block37:;
// line 107
frost$io$MemoryOutputStream** $tmp277 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp278 = *$tmp277;
frost$core$String* $tmp279 = *(&local3);
frost$core$String* $tmp280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s281, $tmp279);
frost$core$String* $tmp282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp280, &$s283);
$fn285 $tmp284 = ($fn285) ((frost$io$OutputStream*) $tmp278)->$class->vtable[19];
frost$core$Error* $tmp286 = $tmp284(((frost$io$OutputStream*) $tmp278), $tmp282);
// try error check
if ($tmp286 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local0) = $tmp286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing REF($361:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing REF($359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($358:frost.core.String)
frost$core$String* $tmp287 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing includePath
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp288 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing cl
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing REF($361:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing REF($359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($358:frost.core.String)
// line 108
frost$collections$HashSet** $tmp290 = &param0->imports;
frost$collections$HashSet* $tmp291 = *$tmp290;
frost$core$String* $tmp292 = *(&local3);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp291, ((frost$collections$Key*) $tmp292));
goto block38;
block38:;
// line 110
frost$core$String* $tmp293 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$String* $tmp294 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// unreffing includePath
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp295 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing cl
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp296 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp293;
block22:;
frost$core$Int64 $tmp298 = (frost$core$Int64) {1};
frost$core$Bit $tmp299 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp298);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block41; else goto block42;
block41:;
// line 113
frost$core$Weak** $tmp301 = &param0->compiler;
frost$core$Weak* $tmp302 = *$tmp301;
frost$core$Object* $tmp303 = frost$core$Weak$get$R$frost$core$Weak$T($tmp302);
frost$core$Bit $tmp304 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp303) != NULL);
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp306 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s307, $tmp306, &$s308);
abort(); // unreachable
block43:;
org$frostlang$frostc$ClassDecl* $tmp309 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp303), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
org$frostlang$frostc$ClassDecl* $tmp310 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local4) = $tmp309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($453:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp303);
// unreffing REF($443:frost.core.Weak.T)
// line 114
org$frostlang$frostc$ClassDecl* $tmp311 = *(&local4);
frost$core$Bit $tmp312 = frost$core$Bit$init$builtin_bit($tmp311 != NULL);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp314 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s315, $tmp314);
abort(); // unreachable
block45:;
// line 115
frost$core$Weak** $tmp316 = &param0->compiler;
frost$core$Weak* $tmp317 = *$tmp316;
frost$core$Object* $tmp318 = frost$core$Weak$get$R$frost$core$Weak$T($tmp317);
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp318) != NULL);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp321 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s322, $tmp321, &$s323);
abort(); // unreachable
block49:;
org$frostlang$frostc$ClassDecl* $tmp324 = *(&local4);
frost$core$Bit $tmp325 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp318), $tmp324);
bool $tmp326 = $tmp325.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp318);
// unreffing REF($480:frost.core.Weak.T)
if ($tmp326) goto block47; else goto block48;
block47:;
// line 116
org$frostlang$frostc$FixedArray** $tmp327 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp328 = *$tmp327;
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit($tmp328 != NULL);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s332, $tmp331, &$s333);
abort(); // unreachable
block51:;
frost$core$Int64 $tmp334 = (frost$core$Int64) {0};
frost$core$Object* $tmp335 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp328, $tmp334);
frost$core$String* $tmp336 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp335));
frost$core$String* $tmp337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp336, &$s338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($513:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($512:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
// unreffing REF($510:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp339 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing cl
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp340 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp337;
block48:;
// line 118
org$frostlang$frostc$FixedArray** $tmp341 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp342 = *$tmp341;
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342 != NULL);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp345 = (frost$core$Int64) {118};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s346, $tmp345, &$s347);
abort(); // unreachable
block53:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {0};
frost$core$Object* $tmp349 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp342, $tmp348);
frost$core$String* $tmp350 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp349));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($551:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp349);
// unreffing REF($549:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp351 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing cl
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp352 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp350;
block42:;
frost$core$Int64 $tmp353 = (frost$core$Int64) {11};
frost$core$Bit $tmp354 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block55; else goto block56;
block55:;
// line 121
org$frostlang$frostc$FixedArray** $tmp356 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp357 = *$tmp356;
frost$core$Bit $tmp358 = frost$core$Bit$init$builtin_bit($tmp357 != NULL);
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp360 = (frost$core$Int64) {121};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s361, $tmp360, &$s362);
abort(); // unreachable
block59:;
frost$core$Int64 $tmp363 = (frost$core$Int64) {0};
frost$core$Object* $tmp364 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp357, $tmp363);
frost$core$String** $tmp365 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp364))->name;
frost$core$String* $tmp366 = *$tmp365;
frost$core$Bit $tmp367 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s368);
bool $tmp369 = $tmp367.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp364);
// unreffing REF($588:org.frostlang.frostc.FixedArray.T)
if ($tmp369) goto block57; else goto block58;
block57:;
// line 122
org$frostlang$frostc$FixedArray** $tmp370 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp371 = *$tmp370;
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit($tmp371 != NULL);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp374 = (frost$core$Int64) {122};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s375, $tmp374, &$s376);
abort(); // unreachable
block61:;
frost$core$Int64 $tmp377 = (frost$core$Int64) {1};
frost$core$Object* $tmp378 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp371, $tmp377);
frost$core$String* $tmp379 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp378));
frost$core$String* $tmp380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp379, &$s381);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing REF($615:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing REF($614:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp378);
// unreffing REF($612:org.frostlang.frostc.FixedArray.T)
frost$core$Error* $tmp382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp380;
block58:;
// line 124
frost$core$Weak** $tmp383 = &param0->compiler;
frost$core$Weak* $tmp384 = *$tmp383;
frost$core$Object* $tmp385 = frost$core$Weak$get$R$frost$core$Weak$T($tmp384);
frost$core$Bit $tmp386 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp385) != NULL);
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp388 = (frost$core$Int64) {124};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s389, $tmp388, &$s390);
abort(); // unreachable
block63:;
org$frostlang$frostc$ClassDecl* $tmp391 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp385), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
org$frostlang$frostc$ClassDecl* $tmp392 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local5) = $tmp391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// unreffing REF($647:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp385);
// unreffing REF($637:frost.core.Weak.T)
// line 125
org$frostlang$frostc$ClassDecl* $tmp393 = *(&local5);
frost$core$Bit $tmp394 = frost$core$Bit$init$builtin_bit($tmp393 != NULL);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp396 = (frost$core$Int64) {125};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s397, $tmp396, &$s398);
abort(); // unreachable
block67:;
frost$core$Bit $tmp399 = org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp393);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block65; else goto block66;
block65:;
// line 126
frost$core$String** $tmp401 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp402 = *$tmp401;
frost$core$String* $tmp403 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp402);
frost$core$String* $tmp404 = frost$core$String$get_asString$R$frost$core$String($tmp403);
frost$core$String* $tmp405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp404, &$s406);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$String* $tmp407 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local6) = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// unreffing REF($680:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing REF($679:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($678:frost.core.String)
// line 127
frost$core$Weak** $tmp408 = &param0->compiler;
frost$core$Weak* $tmp409 = *$tmp408;
frost$core$Object* $tmp410 = frost$core$Weak$get$R$frost$core$Weak$T($tmp409);
frost$core$Bit $tmp411 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp410) != NULL);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp413 = (frost$core$Int64) {127};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s414, $tmp413, &$s415);
abort(); // unreachable
block69:;
org$frostlang$frostc$ClassDecl* $tmp416 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp410), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
org$frostlang$frostc$ClassDecl* $tmp417 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local7) = $tmp416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// unreffing REF($711:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp410);
// unreffing REF($701:frost.core.Weak.T)
// line 128
org$frostlang$frostc$ClassDecl* $tmp418 = *(&local7);
frost$core$Bit $tmp419 = frost$core$Bit$init$builtin_bit($tmp418 != NULL);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp421 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s422, $tmp421);
abort(); // unreachable
block71:;
// line 129
frost$core$Weak** $tmp423 = &param0->compiler;
frost$core$Weak* $tmp424 = *$tmp423;
frost$core$Object* $tmp425 = frost$core$Weak$get$R$frost$core$Weak$T($tmp424);
frost$core$Bit $tmp426 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp425) != NULL);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {129};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s429, $tmp428, &$s430);
abort(); // unreachable
block75:;
org$frostlang$frostc$ClassDecl* $tmp431 = *(&local7);
frost$core$Bit $tmp432 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp425), $tmp431);
frost$core$Bit $tmp433 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp432);
bool $tmp434 = $tmp433.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp425);
// unreffing REF($738:frost.core.Weak.T)
if ($tmp434) goto block73; else goto block74;
block73:;
// line 130
frost$collections$HashSet** $tmp435 = &param0->imports;
frost$collections$HashSet* $tmp436 = *$tmp435;
frost$core$String* $tmp437 = *(&local6);
frost$core$Bit $tmp438 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp436, ((frost$collections$Key*) $tmp437));
frost$core$Bit $tmp439 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block77; else goto block78;
block77:;
// line 131
frost$io$MemoryOutputStream** $tmp441 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp442 = *$tmp441;
frost$core$String* $tmp443 = *(&local6);
frost$core$String* $tmp444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s445, $tmp443);
frost$core$String* $tmp446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp444, &$s447);
frost$core$String* $tmp448 = *(&local6);
frost$core$String* $tmp449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp446, $tmp448);
frost$core$String* $tmp450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp449, &$s451);
$fn453 $tmp452 = ($fn453) ((frost$io$OutputStream*) $tmp442)->$class->vtable[19];
frost$core$Error* $tmp454 = $tmp452(((frost$io$OutputStream*) $tmp442), $tmp450);
// try error check
if ($tmp454 == NULL) goto block79; else goto block80;
block80:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local0) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($777:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// unreffing REF($775:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing REF($774:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// unreffing REF($772:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing REF($771:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp455 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// unreffing cl
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp456 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing name
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp457 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing cl
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($777:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// unreffing REF($775:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing REF($774:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// unreffing REF($772:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing REF($771:frost.core.String)
// line 132
frost$collections$HashSet** $tmp458 = &param0->imports;
frost$collections$HashSet* $tmp459 = *$tmp458;
frost$core$String* $tmp460 = *(&local6);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp459, ((frost$collections$Key*) $tmp460));
goto block78;
block78:;
// line 134
frost$core$String* $tmp461 = *(&local6);
frost$core$String* $tmp462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp461, &$s463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing REF($840:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp464 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing cl
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp465 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// unreffing name
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp466 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing cl
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp467 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp462;
block74:;
// line 136
org$frostlang$frostc$ClassDecl* $tmp468 = *(&local7);
frost$core$Bit $tmp469 = frost$core$Bit$init$builtin_bit($tmp468 != NULL);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp471 = (frost$core$Int64) {136};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s472, $tmp471, &$s473);
abort(); // unreachable
block81:;
frost$core$String* $tmp474 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp468, &$s475);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$String* $tmp476 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local8) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($877:frost.core.String)
// line 137
frost$collections$HashSet** $tmp477 = &param0->imports;
frost$collections$HashSet* $tmp478 = *$tmp477;
frost$core$String* $tmp479 = *(&local8);
frost$core$Bit $tmp480 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp478, ((frost$collections$Key*) $tmp479));
frost$core$Bit $tmp481 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp480);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block83; else goto block84;
block83:;
// line 138
frost$io$MemoryOutputStream** $tmp483 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp484 = *$tmp483;
frost$core$String* $tmp485 = *(&local8);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s487, $tmp485);
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, &$s489);
$fn491 $tmp490 = ($fn491) ((frost$io$OutputStream*) $tmp484)->$class->vtable[19];
frost$core$Error* $tmp492 = $tmp490(((frost$io$OutputStream*) $tmp484), $tmp488);
// try error check
if ($tmp492 == NULL) goto block85; else goto block86;
block86:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local0) = $tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// unreffing REF($906:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing REF($904:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing REF($903:frost.core.String)
frost$core$String* $tmp493 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
// unreffing includePath
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp494 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
// unreffing cl
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp495 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// unreffing name
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp496 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing cl
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block85:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// unreffing REF($906:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing REF($904:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing REF($903:frost.core.String)
// line 139
frost$collections$HashSet** $tmp497 = &param0->imports;
frost$collections$HashSet* $tmp498 = *$tmp497;
frost$core$String* $tmp499 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp498, ((frost$collections$Key*) $tmp499));
goto block84;
block84:;
// line 141
frost$core$String* $tmp500 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$String* $tmp501 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing includePath
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp502 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// unreffing cl
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp503 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing name
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp504 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// unreffing cl
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp505 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp500;
block66:;
// line 143
org$frostlang$frostc$FixedArray** $tmp506 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp507 = *$tmp506;
frost$core$Bit $tmp508 = frost$core$Bit$init$builtin_bit($tmp507 != NULL);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp510 = (frost$core$Int64) {143};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s511, $tmp510, &$s512);
abort(); // unreachable
block87:;
frost$core$Int64 $tmp513 = (frost$core$Int64) {0};
frost$core$Object* $tmp514 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp507, $tmp513);
frost$core$String* $tmp515 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp514));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// unreffing REF($1005:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp514);
// unreffing REF($1003:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp516 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing cl
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp517 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp515;
block56:;
frost$core$Int64 $tmp518 = (frost$core$Int64) {12};
frost$core$Bit $tmp519 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp518);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block89; else goto block90;
block89:;
// line 146
frost$core$Weak** $tmp521 = &param1->genericClassParameter;
frost$core$Weak* $tmp522 = *$tmp521;
frost$core$Object* $tmp523 = frost$core$Weak$get$R$frost$core$Weak$T($tmp522);
frost$core$Bit $tmp524 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp523) != NULL);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block91; else goto block92;
block92:;
frost$core$Int64 $tmp526 = (frost$core$Int64) {146};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s527, $tmp526, &$s528);
abort(); // unreachable
block91:;
org$frostlang$frostc$Type** $tmp529 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp523)->bound;
org$frostlang$frostc$Type* $tmp530 = *$tmp529;
frost$core$String* $tmp531 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp530);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// unreffing REF($1045:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp523);
// unreffing REF($1033:frost.core.Weak.T)
frost$core$Error* $tmp532 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp531;
block90:;
frost$core$Int64 $tmp533 = (frost$core$Int64) {13};
frost$core$Bit $tmp534 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block93; else goto block94;
block93:;
// line 149
frost$core$Weak** $tmp536 = &param1->genericMethodParameter;
frost$core$Weak* $tmp537 = *$tmp536;
frost$core$Object* $tmp538 = frost$core$Weak$get$R$frost$core$Weak$T($tmp537);
frost$core$Bit $tmp539 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp538) != NULL);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp541 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s542, $tmp541, &$s543);
abort(); // unreachable
block95:;
org$frostlang$frostc$Type** $tmp544 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp538)->bound;
org$frostlang$frostc$Type* $tmp545 = *$tmp544;
frost$core$String* $tmp546 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp545);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing REF($1080:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp538);
// unreffing REF($1068:frost.core.Weak.T)
frost$core$Error* $tmp547 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp546;
block94:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {15};
frost$core$Bit $tmp549 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp551 = (frost$core$Int64) {16};
frost$core$Bit $tmp552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp551);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block97; else goto block99;
block97:;
// line 152
org$frostlang$frostc$Type* $tmp554 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp555 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing REF($1105:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// unreffing REF($1104:org.frostlang.frostc.Type)
frost$core$Error* $tmp556 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp555;
block99:;
frost$core$Int64 $tmp557 = (frost$core$Int64) {17};
frost$core$Bit $tmp558 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp560 = (frost$core$Int64) {18};
frost$core$Bit $tmp561 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp560);
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block100; else goto block102;
block100:;
// line 155
org$frostlang$frostc$Type* $tmp563 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp564 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp563);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing REF($1130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// unreffing REF($1129:org.frostlang.frostc.Type)
frost$core$Error* $tmp565 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp564;
block102:;
// line 158
frost$core$Bit $tmp566 = frost$core$Bit$init$builtin_bit(false);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block103; else goto block104;
block104:;
frost$core$Int64 $tmp568 = (frost$core$Int64) {158};
frost$core$String* $tmp569 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s570, ((frost$core$Object*) param1));
frost$core$String* $tmp571 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp569, &$s572);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s573, $tmp568, $tmp571);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// unreffing REF($1152:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing REF($1151:frost.core.String)
abort(); // unreachable
block103:;
goto block3;
block3:;
goto block2;
block1:;
// line 163
frost$core$Bit $tmp574 = frost$core$Bit$init$builtin_bit(false);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block105; else goto block106;
block106:;
frost$core$Int64 $tmp576 = (frost$core$Int64) {163};
frost$core$Error* $tmp577 = *(&local0);
$fn579 $tmp578 = ($fn579) ((frost$core$Object*) $tmp577)->$class->vtable[0];
frost$core$String* $tmp580 = $tmp578(((frost$core$Object*) $tmp577));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s581, $tmp576, $tmp580);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// unreffing REF($1171:frost.core.String)
abort(); // unreachable
block105:;
goto block2;
block2:;
frost$core$Error* $tmp582 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp583 = frost$core$Bit$init$builtin_bit(false);
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp585 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s586, $tmp585, &$s587);
abort(); // unreachable
block107:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// line 168
frost$core$String* $tmp588 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp589 = frost$core$String$get_asString$R$frost$core$String($tmp588);
frost$core$String* $tmp590 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp589, &$s591);
frost$core$String* $tmp592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp590, param2);
frost$core$String* $tmp593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp592, &$s594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// unreffing REF($1:frost.core.String)
return $tmp593;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 173
frost$core$Weak* $tmp595 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp595, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Weak** $tmp596 = &param0->compiler;
frost$core$Weak* $tmp597 = *$tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Weak** $tmp598 = &param0->compiler;
*$tmp598 = $tmp595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing REF($2:frost.core.Weak<org.frostlang.frostc.Compiler?>)
// line 174
org$frostlang$frostc$LLVMCodeGenerator** $tmp599 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp600 = *$tmp599;
org$frostlang$frostc$LLVMCodeGenerator$setCompiler$org$frostlang$frostc$Compiler($tmp600, param1);
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 178
frost$io$File** $tmp601 = &param0->outDir;
frost$io$File* $tmp602 = *$tmp601;
frost$core$String* $tmp603 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp604 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp602, $tmp603);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($4:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing REF($3:frost.core.String)
return $tmp604;

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
frost$io$MemoryOutputStream** $tmp605 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp606 = *$tmp605;
frost$io$MemoryOutputStream$clear($tmp606);
// line 185
frost$io$MemoryOutputStream** $tmp607 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp608 = *$tmp607;
frost$io$MemoryOutputStream$clear($tmp608);
// line 186
frost$io$MemoryOutputStream** $tmp609 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp610 = *$tmp609;
frost$io$MemoryOutputStream$clear($tmp610);
// line 187
frost$io$MemoryOutputStream** $tmp611 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp612 = *$tmp611;
frost$io$MemoryOutputStream$clear($tmp612);
// line 188
frost$collections$HashSet** $tmp613 = &param0->typeImports;
frost$collections$HashSet* $tmp614 = *$tmp613;
frost$collections$HashSet$clear($tmp614);
// line 189
frost$collections$HashSet** $tmp615 = &param0->bodyImports;
frost$collections$HashSet* $tmp616 = *$tmp615;
frost$collections$HashSet$clear($tmp616);
// line 190
frost$io$File* $tmp617 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s618);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$io$File* $tmp619 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local1) = $tmp617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing REF($29:frost.io.File)
// line 191
frost$io$File* $tmp620 = *(&local1);
frost$io$File* $tmp621 = frost$io$File$get_parent$R$frost$io$File$Q($tmp620);
frost$core$Bit $tmp622 = frost$core$Bit$init$builtin_bit($tmp621 != NULL);
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp624 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s625, $tmp624, &$s626);
abort(); // unreachable
block3:;
frost$core$Error* $tmp627 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp621);
// try error check
if ($tmp627 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local0) = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($51:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($42:frost.io.File?)
frost$io$File* $tmp628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($51:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($42:frost.io.File?)
// line 192
frost$io$IndentedOutputStream* $tmp629 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp630 = *(&local1);
frost$core$Maybe* $tmp631 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp630);
// try maybe check
frost$core$Int64* $tmp632 = &$tmp631->$rawValue;
frost$core$Int64 $tmp633 = *$tmp632;
int64_t $tmp634 = $tmp633.value;
bool $tmp635 = $tmp634 == 0;
if ($tmp635) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp636 = (frost$core$Error**) ($tmp631->$data + 0);
frost$core$Error* $tmp637 = *$tmp636;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local0) = $tmp637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($79:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($77:frost.io.IndentedOutputStream)
frost$io$File* $tmp638 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp639 = (frost$core$Object**) ($tmp631->$data + 0);
frost$core$Object* $tmp640 = *$tmp639;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp629, ((frost$io$OutputStream*) $tmp640));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$io$IndentedOutputStream** $tmp641 = &param0->out;
frost$io$IndentedOutputStream* $tmp642 = *$tmp641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$io$IndentedOutputStream** $tmp643 = &param0->out;
*$tmp643 = $tmp629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($79:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($77:frost.io.IndentedOutputStream)
// line 193
frost$io$File* $tmp644 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s645);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$io$File* $tmp646 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local2) = $tmp644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($123:frost.io.File)
// line 194
frost$io$IndentedOutputStream* $tmp647 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp648 = *(&local2);
frost$core$Maybe* $tmp649 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp648);
// try maybe check
frost$core$Int64* $tmp650 = &$tmp649->$rawValue;
frost$core$Int64 $tmp651 = *$tmp650;
int64_t $tmp652 = $tmp651.value;
bool $tmp653 = $tmp652 == 0;
if ($tmp653) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp654 = (frost$core$Error**) ($tmp649->$data + 0);
frost$core$Error* $tmp655 = *$tmp654;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local0) = $tmp655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing REF($137:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// unreffing REF($135:frost.io.IndentedOutputStream)
frost$io$File* $tmp656 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp657 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Object** $tmp658 = (frost$core$Object**) ($tmp649->$data + 0);
frost$core$Object* $tmp659 = *$tmp658;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp647, ((frost$io$OutputStream*) $tmp659));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$io$IndentedOutputStream** $tmp660 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp661 = *$tmp660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$io$IndentedOutputStream** $tmp662 = &param0->typesOut;
*$tmp662 = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing REF($137:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// unreffing REF($135:frost.io.IndentedOutputStream)
// line 195
frost$io$IndentedOutputStream** $tmp663 = &param0->out;
frost$io$IndentedOutputStream* $tmp664 = *$tmp663;
$fn666 $tmp665 = ($fn666) ((frost$io$OutputStream*) $tmp664)->$class->vtable[19];
frost$core$Error* $tmp667 = $tmp665(((frost$io$OutputStream*) $tmp664), &$s668);
// try error check
if ($tmp667 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local0) = $tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// unreffing REF($190:frost.core.Error?)
frost$io$File* $tmp669 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp670 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// unreffing REF($190:frost.core.Error?)
// line 196
frost$io$IndentedOutputStream** $tmp671 = &param0->out;
frost$io$IndentedOutputStream* $tmp672 = *$tmp671;
$fn674 $tmp673 = ($fn674) ((frost$io$OutputStream*) $tmp672)->$class->vtable[19];
frost$core$Error* $tmp675 = $tmp673(((frost$io$OutputStream*) $tmp672), &$s676);
// try error check
if ($tmp675 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local0) = $tmp675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($219:frost.core.Error?)
frost$io$File* $tmp677 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp678 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($219:frost.core.Error?)
// line 197
frost$io$IndentedOutputStream** $tmp679 = &param0->out;
frost$io$IndentedOutputStream* $tmp680 = *$tmp679;
frost$io$File* $tmp681 = *(&local2);
frost$core$String* $tmp682 = frost$io$File$get_name$R$frost$core$String($tmp681);
frost$core$String* $tmp683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s684, $tmp682);
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp683, &$s686);
$fn688 $tmp687 = ($fn688) ((frost$io$OutputStream*) $tmp680)->$class->vtable[19];
frost$core$Error* $tmp689 = $tmp687(((frost$io$OutputStream*) $tmp680), $tmp685);
// try error check
if ($tmp689 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local0) = $tmp689;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// unreffing REF($252:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// unreffing REF($250:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($249:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($248:frost.core.String)
frost$io$File* $tmp690 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp691 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// unreffing REF($252:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// unreffing REF($250:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($249:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($248:frost.core.String)
// line 198
frost$io$IndentedOutputStream** $tmp692 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp693 = *$tmp692;
$fn695 $tmp694 = ($fn695) ((frost$io$OutputStream*) $tmp693)->$class->vtable[19];
frost$core$Error* $tmp696 = $tmp694(((frost$io$OutputStream*) $tmp693), &$s697);
// try error check
if ($tmp696 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local0) = $tmp696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($299:frost.core.Error?)
frost$io$File* $tmp698 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp699 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($299:frost.core.Error?)
// line 199
frost$io$IndentedOutputStream** $tmp700 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp701 = *$tmp700;
$fn703 $tmp702 = ($fn703) ((frost$io$OutputStream*) $tmp701)->$class->vtable[19];
frost$core$Error* $tmp704 = $tmp702(((frost$io$OutputStream*) $tmp701), &$s705);
// try error check
if ($tmp704 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local0) = $tmp704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing REF($328:frost.core.Error?)
frost$io$File* $tmp706 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp707 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing REF($328:frost.core.Error?)
// line 200
frost$io$MemoryOutputStream** $tmp708 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp709 = *$tmp708;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$io$MemoryOutputStream** $tmp710 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp711 = *$tmp710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$io$MemoryOutputStream** $tmp712 = &param0->importStream;
*$tmp712 = $tmp709;
// line 201
frost$collections$HashSet** $tmp713 = &param0->typeImports;
frost$collections$HashSet* $tmp714 = *$tmp713;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$collections$HashSet** $tmp715 = &param0->imports;
frost$collections$HashSet* $tmp716 = *$tmp715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$collections$HashSet** $tmp717 = &param0->imports;
*$tmp717 = $tmp714;
// line 202
frost$io$IndentedOutputStream** $tmp718 = &param0->types;
frost$io$IndentedOutputStream* $tmp719 = *$tmp718;
frost$core$String** $tmp720 = &param1->name;
frost$core$String* $tmp721 = *$tmp720;
frost$core$String* $tmp722 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp721);
frost$core$String* $tmp723 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s724, $tmp722);
frost$core$String* $tmp725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp723, &$s726);
$fn728 $tmp727 = ($fn728) ((frost$io$OutputStream*) $tmp719)->$class->vtable[19];
frost$core$Error* $tmp729 = $tmp727(((frost$io$OutputStream*) $tmp719), $tmp725);
// try error check
if ($tmp729 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local0) = $tmp729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// unreffing REF($384:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing REF($382:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($381:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
// unreffing REF($380:frost.core.String)
frost$io$File* $tmp730 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp731 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// unreffing REF($384:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing REF($382:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($381:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
// unreffing REF($380:frost.core.String)
// line 203
frost$io$IndentedOutputStream** $tmp732 = &param0->types;
frost$io$IndentedOutputStream* $tmp733 = *$tmp732;
frost$core$Int64* $tmp734 = &$tmp733->level;
frost$core$Int64 $tmp735 = *$tmp734;
frost$core$Int64 $tmp736 = (frost$core$Int64) {1};
int64_t $tmp737 = $tmp735.value;
int64_t $tmp738 = $tmp736.value;
int64_t $tmp739 = $tmp737 + $tmp738;
frost$core$Int64 $tmp740 = (frost$core$Int64) {$tmp739};
frost$core$Int64* $tmp741 = &$tmp733->level;
*$tmp741 = $tmp740;
// line 204
frost$core$Weak** $tmp742 = &param0->compiler;
frost$core$Weak* $tmp743 = *$tmp742;
frost$core$Object* $tmp744 = frost$core$Weak$get$R$frost$core$Weak$T($tmp743);
frost$core$Bit $tmp745 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp744) != NULL);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp747 = (frost$core$Int64) {204};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s748, $tmp747, &$s749);
abort(); // unreachable
block23:;
frost$collections$ListView* $tmp750 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp744), param1);
ITable* $tmp751 = ((frost$collections$Iterable*) $tmp750)->$class->itable;
while ($tmp751->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp751 = $tmp751->next;
}
$fn753 $tmp752 = $tmp751->methods[0];
frost$collections$Iterator* $tmp754 = $tmp752(((frost$collections$Iterable*) $tmp750));
goto block25;
block25:;
ITable* $tmp755 = $tmp754->$class->itable;
while ($tmp755->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[0];
frost$core$Bit $tmp758 = $tmp756($tmp754);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block27; else goto block26;
block26:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp760 = $tmp754->$class->itable;
while ($tmp760->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp760 = $tmp760->next;
}
$fn762 $tmp761 = $tmp760->methods[1];
frost$core$Object* $tmp763 = $tmp761($tmp754);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp763)));
org$frostlang$frostc$FieldDecl* $tmp764 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp763);
// line 205
frost$core$Weak** $tmp765 = &param0->compiler;
frost$core$Weak* $tmp766 = *$tmp765;
frost$core$Object* $tmp767 = frost$core$Weak$get$R$frost$core$Weak$T($tmp766);
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp767) != NULL);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp770 = (frost$core$Int64) {205};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s771, $tmp770, &$s772);
abort(); // unreachable
block28:;
org$frostlang$frostc$FieldDecl* $tmp773 = *(&local3);
frost$core$Bit $tmp774 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp767), $tmp773);
frost$core$Frost$unref$frost$core$Object$Q($tmp767);
// unreffing REF($479:frost.core.Weak.T)
// line 206
org$frostlang$frostc$FieldDecl* $tmp775 = *(&local3);
org$frostlang$frostc$Type** $tmp776 = &$tmp775->type;
org$frostlang$frostc$Type* $tmp777 = *$tmp776;
org$frostlang$frostc$Type* $tmp778 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp779 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp777, $tmp778);
bool $tmp780 = $tmp779.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// unreffing REF($498:org.frostlang.frostc.Type)
if ($tmp780) goto block30; else goto block32;
block30:;
// line 207
frost$io$IndentedOutputStream** $tmp781 = &param0->types;
frost$io$IndentedOutputStream* $tmp782 = *$tmp781;
org$frostlang$frostc$FieldDecl* $tmp783 = *(&local3);
frost$core$String** $tmp784 = &((org$frostlang$frostc$Symbol*) $tmp783)->name;
frost$core$String* $tmp785 = *$tmp784;
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s787, $tmp785);
frost$core$String* $tmp788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp786, &$s789);
org$frostlang$frostc$LLVMCodeGenerator** $tmp790 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp791 = *$tmp790;
frost$core$Int64 $tmp792 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp791, param1);
frost$core$Int64$wrapper* $tmp793;
$tmp793 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp793->value = $tmp792;
frost$core$String* $tmp794 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp788, ((frost$core$Object*) $tmp793));
frost$core$String* $tmp795 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp794, &$s796);
$fn798 $tmp797 = ($fn798) ((frost$io$OutputStream*) $tmp782)->$class->vtable[19];
frost$core$Error* $tmp799 = $tmp797(((frost$io$OutputStream*) $tmp782), $tmp795);
// try error check
if ($tmp799 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local0) = $tmp799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing REF($522:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($520:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
// unreffing REF($519:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($518:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($514:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing REF($513:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp763);
// unreffing REF($467:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp800 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing REF($456:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// unreffing REF($452:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp744);
// unreffing REF($442:frost.core.Weak.T)
frost$io$File* $tmp801 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp802 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing REF($522:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($520:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
// unreffing REF($519:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($518:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($514:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing REF($513:frost.core.String)
goto block31;
block32:;
// line 1
// line 210
frost$io$IndentedOutputStream** $tmp803 = &param0->types;
frost$io$IndentedOutputStream* $tmp804 = *$tmp803;
org$frostlang$frostc$FieldDecl* $tmp805 = *(&local3);
org$frostlang$frostc$Type** $tmp806 = &$tmp805->type;
org$frostlang$frostc$Type* $tmp807 = *$tmp806;
frost$core$String* $tmp808 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp807);
frost$core$String* $tmp809 = frost$core$String$get_asString$R$frost$core$String($tmp808);
frost$core$String* $tmp810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp809, &$s811);
org$frostlang$frostc$FieldDecl* $tmp812 = *(&local3);
frost$core$String** $tmp813 = &((org$frostlang$frostc$Symbol*) $tmp812)->name;
frost$core$String* $tmp814 = *$tmp813;
frost$core$String* $tmp815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp810, $tmp814);
frost$core$String* $tmp816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp815, &$s817);
$fn819 $tmp818 = ($fn819) ((frost$io$OutputStream*) $tmp804)->$class->vtable[19];
frost$core$Error* $tmp820 = $tmp818(((frost$io$OutputStream*) $tmp804), $tmp816);
// try error check
if ($tmp820 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local0) = $tmp820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// unreffing REF($612:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// unreffing REF($610:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// unreffing REF($609:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// unreffing REF($604:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// unreffing REF($603:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// unreffing REF($602:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp763);
// unreffing REF($467:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp821 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing REF($456:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// unreffing REF($452:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp744);
// unreffing REF($442:frost.core.Weak.T)
frost$io$File* $tmp822 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp823 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// unreffing REF($612:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// unreffing REF($610:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// unreffing REF($609:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// unreffing REF($604:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// unreffing REF($603:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// unreffing REF($602:frost.core.String)
goto block31;
block31:;
frost$core$Frost$unref$frost$core$Object$Q($tmp763);
// unreffing REF($467:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp824 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing REF($456:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// unreffing REF($452:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp744);
// unreffing REF($442:frost.core.Weak.T)
// line 213
frost$core$String** $tmp825 = &param1->name;
frost$core$String* $tmp826 = *$tmp825;
frost$core$Bit $tmp827 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp826, &$s828);
bool $tmp829 = $tmp827.value;
if ($tmp829) goto block37; else goto block38;
block37:;
// line 214
frost$io$IndentedOutputStream** $tmp830 = &param0->types;
frost$io$IndentedOutputStream* $tmp831 = *$tmp830;
$fn833 $tmp832 = ($fn833) ((frost$io$OutputStream*) $tmp831)->$class->vtable[19];
frost$core$Error* $tmp834 = $tmp832(((frost$io$OutputStream*) $tmp831), &$s835);
// try error check
if ($tmp834 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local0) = $tmp834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing REF($713:frost.core.Error?)
frost$io$File* $tmp836 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp837 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing REF($713:frost.core.Error?)
// line 215
frost$io$IndentedOutputStream** $tmp838 = &param0->types;
frost$io$IndentedOutputStream* $tmp839 = *$tmp838;
$fn841 $tmp840 = ($fn841) ((frost$io$OutputStream*) $tmp839)->$class->vtable[19];
frost$core$Error* $tmp842 = $tmp840(((frost$io$OutputStream*) $tmp839), &$s843);
// try error check
if ($tmp842 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local0) = $tmp842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($742:frost.core.Error?)
frost$io$File* $tmp844 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp845 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($742:frost.core.Error?)
goto block38;
block38:;
// line 217
frost$io$IndentedOutputStream** $tmp846 = &param0->types;
frost$io$IndentedOutputStream* $tmp847 = *$tmp846;
frost$core$Int64* $tmp848 = &$tmp847->level;
frost$core$Int64 $tmp849 = *$tmp848;
frost$core$Int64 $tmp850 = (frost$core$Int64) {1};
int64_t $tmp851 = $tmp849.value;
int64_t $tmp852 = $tmp850.value;
int64_t $tmp853 = $tmp851 - $tmp852;
frost$core$Int64 $tmp854 = (frost$core$Int64) {$tmp853};
frost$core$Int64* $tmp855 = &$tmp847->level;
*$tmp855 = $tmp854;
// line 218
frost$io$IndentedOutputStream** $tmp856 = &param0->types;
frost$io$IndentedOutputStream* $tmp857 = *$tmp856;
frost$core$String** $tmp858 = &param1->name;
frost$core$String* $tmp859 = *$tmp858;
frost$core$String* $tmp860 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp859);
frost$core$String* $tmp861 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s862, $tmp860);
frost$core$String* $tmp863 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp861, &$s864);
$fn866 $tmp865 = ($fn866) ((frost$io$OutputStream*) $tmp857)->$class->vtable[19];
frost$core$Error* $tmp867 = $tmp865(((frost$io$OutputStream*) $tmp857), $tmp863);
// try error check
if ($tmp867 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local0) = $tmp867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing REF($789:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing REF($787:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing REF($786:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// unreffing REF($785:frost.core.String)
frost$io$File* $tmp868 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp869 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing REF($789:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing REF($787:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing REF($786:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// unreffing REF($785:frost.core.String)
// line 219
frost$io$IndentedOutputStream** $tmp870 = &param0->types;
frost$io$IndentedOutputStream* $tmp871 = *$tmp870;
$fn873 $tmp872 = ($fn873) ((frost$io$OutputStream*) $tmp871)->$class->vtable[19];
frost$core$Error* $tmp874 = $tmp872(((frost$io$OutputStream*) $tmp871), &$s875);
// try error check
if ($tmp874 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local0) = $tmp874;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// unreffing REF($836:frost.core.Error?)
frost$io$File* $tmp876 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp877 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// unreffing REF($836:frost.core.Error?)
// line 220
frost$io$IndentedOutputStream** $tmp878 = &param0->types;
frost$io$IndentedOutputStream* $tmp879 = *$tmp878;
org$frostlang$frostc$Type* $tmp880 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp881 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp880);
frost$core$String* $tmp882 = frost$core$String$get_asString$R$frost$core$String($tmp881);
frost$core$String* $tmp883 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp882, &$s884);
org$frostlang$frostc$Type* $tmp885 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp886 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp885);
frost$core$String* $tmp887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp883, $tmp886);
frost$core$String* $tmp888 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp887, &$s889);
frost$core$String* $tmp890 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s891, $tmp888);
frost$core$Weak** $tmp892 = &param0->compiler;
frost$core$Weak* $tmp893 = *$tmp892;
frost$core$Object* $tmp894 = frost$core$Weak$get$R$frost$core$Weak$T($tmp893);
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp894) != NULL);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp897 = (frost$core$Int64) {222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s898, $tmp897, &$s899);
abort(); // unreachable
block47:;
frost$collections$ListView* $tmp900 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp894), param1);
ITable* $tmp901 = ((frost$collections$CollectionView*) $tmp900)->$class->itable;
while ($tmp901->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp901 = $tmp901->next;
}
$fn903 $tmp902 = $tmp901->methods[0];
frost$core$Int64 $tmp904 = $tmp902(((frost$collections$CollectionView*) $tmp900));
frost$core$Int64$wrapper* $tmp905;
$tmp905 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp905->value = $tmp904;
frost$core$String* $tmp906 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s907, ((frost$core$Object*) $tmp905));
frost$core$String* $tmp908 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp906, &$s909);
frost$core$String* $tmp910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp890, $tmp908);
frost$core$String** $tmp911 = &param1->name;
frost$core$String* $tmp912 = *$tmp911;
frost$core$String* $tmp913 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp912);
frost$core$String* $tmp914 = frost$core$String$get_asString$R$frost$core$String($tmp913);
frost$core$String* $tmp915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp914, &$s916);
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp910, $tmp915);
$fn919 $tmp918 = ($fn919) ((frost$io$OutputStream*) $tmp879)->$class->vtable[19];
frost$core$Error* $tmp920 = $tmp918(((frost$io$OutputStream*) $tmp879), $tmp917);
// try error check
if ($tmp920 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local0) = $tmp920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing REF($901:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing REF($899:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing REF($898:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($897:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($896:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
// unreffing REF($893:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing REF($892:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// unreffing REF($891:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($890:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing REF($886:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp894);
// unreffing REF($876:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// unreffing REF($872:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing REF($871:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing REF($870:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing REF($869:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($868:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($867:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// unreffing REF($866:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($865:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing REF($864:org.frostlang.frostc.Type)
frost$io$File* $tmp921 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp922 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing REF($901:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing REF($899:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing REF($898:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($897:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($896:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
// unreffing REF($893:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing REF($892:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// unreffing REF($891:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($890:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing REF($886:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp894);
// unreffing REF($876:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// unreffing REF($872:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing REF($871:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing REF($870:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing REF($869:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($868:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($867:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// unreffing REF($866:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($865:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing REF($864:org.frostlang.frostc.Type)
// line 224
frost$io$IndentedOutputStream** $tmp923 = &param0->types;
frost$io$IndentedOutputStream* $tmp924 = *$tmp923;
frost$core$String** $tmp925 = &param1->name;
frost$core$String* $tmp926 = *$tmp925;
frost$core$String* $tmp927 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp926);
frost$core$String* $tmp928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s929, $tmp927);
frost$core$String* $tmp930 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp928, &$s931);
frost$core$String** $tmp932 = &param1->name;
frost$core$String* $tmp933 = *$tmp932;
frost$core$String* $tmp934 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp933);
frost$core$String* $tmp935 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp930, $tmp934);
frost$core$String* $tmp936 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp935, &$s937);
$fn939 $tmp938 = ($fn939) ((frost$io$OutputStream*) $tmp924)->$class->vtable[19];
frost$core$Error* $tmp940 = $tmp938(((frost$io$OutputStream*) $tmp924), $tmp936);
// try error check
if ($tmp940 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
*(&local0) = $tmp940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing REF($1054:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// unreffing REF($1052:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// unreffing REF($1051:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($1050:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing REF($1047:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing REF($1046:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing REF($1045:frost.core.String)
frost$io$File* $tmp941 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp942 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing REF($1054:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// unreffing REF($1052:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// unreffing REF($1051:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($1050:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing REF($1047:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing REF($1046:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing REF($1045:frost.core.String)
// line 225
frost$core$Weak** $tmp943 = &param0->compiler;
frost$core$Weak* $tmp944 = *$tmp943;
frost$core$Object* $tmp945 = frost$core$Weak$get$R$frost$core$Weak$T($tmp944);
frost$core$Bit $tmp946 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp945) != NULL);
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp948 = (frost$core$Int64) {225};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s949, $tmp948, &$s950);
abort(); // unreachable
block55:;
frost$core$Bit $tmp951 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp945), param1);
bool $tmp952 = $tmp951.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp945);
// unreffing REF($1118:frost.core.Weak.T)
if ($tmp952) goto block53; else goto block54;
block53:;
// line 226
frost$io$IndentedOutputStream** $tmp953 = &param0->types;
frost$io$IndentedOutputStream* $tmp954 = *$tmp953;
frost$core$String** $tmp955 = &param1->name;
frost$core$String* $tmp956 = *$tmp955;
frost$core$String* $tmp957 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp956);
frost$core$String* $tmp958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s959, $tmp957);
frost$core$String* $tmp960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp958, &$s961);
$fn963 $tmp962 = ($fn963) ((frost$io$OutputStream*) $tmp954)->$class->vtable[19];
frost$core$Error* $tmp964 = $tmp962(((frost$io$OutputStream*) $tmp954), $tmp960);
// try error check
if ($tmp964 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
*(&local0) = $tmp964;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// unreffing REF($1145:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// unreffing REF($1143:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($1142:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($1141:frost.core.String)
frost$io$File* $tmp965 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp966 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// unreffing REF($1145:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// unreffing REF($1143:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($1142:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($1141:frost.core.String)
// line 227
frost$io$IndentedOutputStream** $tmp967 = &param0->types;
frost$io$IndentedOutputStream* $tmp968 = *$tmp967;
frost$core$Int64* $tmp969 = &$tmp968->level;
frost$core$Int64 $tmp970 = *$tmp969;
frost$core$Int64 $tmp971 = (frost$core$Int64) {1};
int64_t $tmp972 = $tmp970.value;
int64_t $tmp973 = $tmp971.value;
int64_t $tmp974 = $tmp972 + $tmp973;
frost$core$Int64 $tmp975 = (frost$core$Int64) {$tmp974};
frost$core$Int64* $tmp976 = &$tmp968->level;
*$tmp976 = $tmp975;
// line 228
frost$io$IndentedOutputStream** $tmp977 = &param0->types;
frost$io$IndentedOutputStream* $tmp978 = *$tmp977;
$fn980 $tmp979 = ($fn980) ((frost$io$OutputStream*) $tmp978)->$class->vtable[19];
frost$core$Error* $tmp981 = $tmp979(((frost$io$OutputStream*) $tmp978), &$s982);
// try error check
if ($tmp981 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local0) = $tmp981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing REF($1204:frost.core.Error?)
frost$io$File* $tmp983 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp984 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing REF($1204:frost.core.Error?)
// line 229
frost$io$IndentedOutputStream** $tmp985 = &param0->types;
frost$io$IndentedOutputStream* $tmp986 = *$tmp985;
$fn988 $tmp987 = ($fn988) ((frost$io$OutputStream*) $tmp986)->$class->vtable[19];
frost$core$Error* $tmp989 = $tmp987(((frost$io$OutputStream*) $tmp986), &$s990);
// try error check
if ($tmp989 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local0) = $tmp989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// unreffing REF($1233:frost.core.Error?)
frost$io$File* $tmp991 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp992 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// unreffing REF($1233:frost.core.Error?)
// line 230
frost$io$IndentedOutputStream** $tmp993 = &param0->types;
frost$io$IndentedOutputStream* $tmp994 = *$tmp993;
org$frostlang$frostc$Type** $tmp995 = &param1->type;
org$frostlang$frostc$Type* $tmp996 = *$tmp995;
frost$core$String* $tmp997 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp996);
frost$core$String* $tmp998 = frost$core$String$get_asString$R$frost$core$String($tmp997);
frost$core$String* $tmp999 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp998, &$s1000);
$fn1002 $tmp1001 = ($fn1002) ((frost$io$OutputStream*) $tmp994)->$class->vtable[19];
frost$core$Error* $tmp1003 = $tmp1001(((frost$io$OutputStream*) $tmp994), $tmp999);
// try error check
if ($tmp1003 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local0) = $tmp1003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing REF($1267:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing REF($1265:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing REF($1264:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing REF($1263:frost.core.String)
frost$io$File* $tmp1004 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1005 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing REF($1267:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing REF($1265:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing REF($1264:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing REF($1263:frost.core.String)
// line 231
frost$io$IndentedOutputStream** $tmp1006 = &param0->types;
frost$io$IndentedOutputStream* $tmp1007 = *$tmp1006;
frost$core$Int64* $tmp1008 = &$tmp1007->level;
frost$core$Int64 $tmp1009 = *$tmp1008;
frost$core$Int64 $tmp1010 = (frost$core$Int64) {1};
int64_t $tmp1011 = $tmp1009.value;
int64_t $tmp1012 = $tmp1010.value;
int64_t $tmp1013 = $tmp1011 - $tmp1012;
frost$core$Int64 $tmp1014 = (frost$core$Int64) {$tmp1013};
frost$core$Int64* $tmp1015 = &$tmp1007->level;
*$tmp1015 = $tmp1014;
// line 232
frost$io$IndentedOutputStream** $tmp1016 = &param0->types;
frost$io$IndentedOutputStream* $tmp1017 = *$tmp1016;
frost$core$String** $tmp1018 = &param1->name;
frost$core$String* $tmp1019 = *$tmp1018;
frost$core$String* $tmp1020 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1019);
frost$core$String* $tmp1021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1022, $tmp1020);
frost$core$String* $tmp1023 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1021, &$s1024);
$fn1026 $tmp1025 = ($fn1026) ((frost$io$OutputStream*) $tmp1017)->$class->vtable[19];
frost$core$Error* $tmp1027 = $tmp1025(((frost$io$OutputStream*) $tmp1017), $tmp1023);
// try error check
if ($tmp1027 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local0) = $tmp1027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($1331:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// unreffing REF($1329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing REF($1328:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
// unreffing REF($1327:frost.core.String)
frost$io$File* $tmp1028 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1029 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($1331:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// unreffing REF($1329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing REF($1328:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
// unreffing REF($1327:frost.core.String)
// line 233
frost$io$IndentedOutputStream** $tmp1030 = &param0->types;
frost$io$IndentedOutputStream* $tmp1031 = *$tmp1030;
frost$core$String** $tmp1032 = &param1->name;
frost$core$String* $tmp1033 = *$tmp1032;
frost$core$String* $tmp1034 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1033);
frost$core$String* $tmp1035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1036, $tmp1034);
frost$core$String* $tmp1037 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1035, &$s1038);
$fn1040 $tmp1039 = ($fn1040) ((frost$io$OutputStream*) $tmp1031)->$class->vtable[19];
frost$core$Error* $tmp1041 = $tmp1039(((frost$io$OutputStream*) $tmp1031), $tmp1037);
// try error check
if ($tmp1041 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local0) = $tmp1041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing REF($1383:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// unreffing REF($1381:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing REF($1380:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing REF($1379:frost.core.String)
frost$io$File* $tmp1042 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1043 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing REF($1383:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// unreffing REF($1381:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing REF($1380:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing REF($1379:frost.core.String)
// line 234
frost$io$IndentedOutputStream** $tmp1044 = &param0->types;
frost$io$IndentedOutputStream* $tmp1045 = *$tmp1044;
frost$core$Int64* $tmp1046 = &$tmp1045->level;
frost$core$Int64 $tmp1047 = *$tmp1046;
frost$core$Int64 $tmp1048 = (frost$core$Int64) {1};
int64_t $tmp1049 = $tmp1047.value;
int64_t $tmp1050 = $tmp1048.value;
int64_t $tmp1051 = $tmp1049 + $tmp1050;
frost$core$Int64 $tmp1052 = (frost$core$Int64) {$tmp1051};
frost$core$Int64* $tmp1053 = &$tmp1045->level;
*$tmp1053 = $tmp1052;
// line 235
frost$io$IndentedOutputStream** $tmp1054 = &param0->types;
frost$io$IndentedOutputStream* $tmp1055 = *$tmp1054;
frost$core$String** $tmp1056 = &param1->name;
frost$core$String* $tmp1057 = *$tmp1056;
frost$core$String* $tmp1058 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1057);
frost$core$String* $tmp1059 = frost$core$String$get_asString$R$frost$core$String($tmp1058);
frost$core$String* $tmp1060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1059, &$s1061);
$fn1063 $tmp1062 = ($fn1063) ((frost$io$OutputStream*) $tmp1055)->$class->vtable[19];
frost$core$Error* $tmp1064 = $tmp1062(((frost$io$OutputStream*) $tmp1055), $tmp1060);
// try error check
if ($tmp1064 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local0) = $tmp1064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// unreffing REF($1447:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
// unreffing REF($1445:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
// unreffing REF($1444:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing REF($1443:frost.core.String)
frost$io$File* $tmp1065 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1066 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// unreffing REF($1447:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
// unreffing REF($1445:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
// unreffing REF($1444:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing REF($1443:frost.core.String)
// line 236
frost$io$IndentedOutputStream** $tmp1067 = &param0->types;
frost$io$IndentedOutputStream* $tmp1068 = *$tmp1067;
$fn1070 $tmp1069 = ($fn1070) ((frost$io$OutputStream*) $tmp1068)->$class->vtable[19];
frost$core$Error* $tmp1071 = $tmp1069(((frost$io$OutputStream*) $tmp1068), &$s1072);
// try error check
if ($tmp1071 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local0) = $tmp1071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// unreffing REF($1494:frost.core.Error?)
frost$io$File* $tmp1073 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1074 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// unreffing REF($1494:frost.core.Error?)
// line 237
frost$io$IndentedOutputStream** $tmp1075 = &param0->types;
frost$io$IndentedOutputStream* $tmp1076 = *$tmp1075;
frost$core$Int64* $tmp1077 = &$tmp1076->level;
frost$core$Int64 $tmp1078 = *$tmp1077;
frost$core$Int64 $tmp1079 = (frost$core$Int64) {1};
int64_t $tmp1080 = $tmp1078.value;
int64_t $tmp1081 = $tmp1079.value;
int64_t $tmp1082 = $tmp1080 - $tmp1081;
frost$core$Int64 $tmp1083 = (frost$core$Int64) {$tmp1082};
frost$core$Int64* $tmp1084 = &$tmp1076->level;
*$tmp1084 = $tmp1083;
// line 238
frost$io$IndentedOutputStream** $tmp1085 = &param0->types;
frost$io$IndentedOutputStream* $tmp1086 = *$tmp1085;
frost$core$String** $tmp1087 = &param1->name;
frost$core$String* $tmp1088 = *$tmp1087;
frost$core$String* $tmp1089 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1088);
frost$core$String* $tmp1090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1091, $tmp1089);
frost$core$String* $tmp1092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1090, &$s1093);
$fn1095 $tmp1094 = ($fn1095) ((frost$io$OutputStream*) $tmp1086)->$class->vtable[19];
frost$core$Error* $tmp1096 = $tmp1094(((frost$io$OutputStream*) $tmp1086), $tmp1092);
// try error check
if ($tmp1096 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local0) = $tmp1096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
// unreffing REF($1540:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing REF($1538:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
// unreffing REF($1537:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
// unreffing REF($1536:frost.core.String)
frost$io$File* $tmp1097 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1098 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
// unreffing REF($1540:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing REF($1538:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
// unreffing REF($1537:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
// unreffing REF($1536:frost.core.String)
// line 239
frost$core$Weak** $tmp1099 = &param0->compiler;
frost$core$Weak* $tmp1100 = *$tmp1099;
frost$core$Object* $tmp1101 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1100);
frost$core$Bit $tmp1102 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1101) != NULL);
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp1104 = (frost$core$Int64) {239};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1105, $tmp1104, &$s1106);
abort(); // unreachable
block75:;
org$frostlang$frostc$Type* $tmp1107 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp1108 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1101), $tmp1107);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
org$frostlang$frostc$ClassDecl* $tmp1109 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local4) = $tmp1108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// unreffing REF($1597:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
// unreffing REF($1596:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1101);
// unreffing REF($1586:frost.core.Weak.T)
// line 240
frost$core$Weak** $tmp1110 = &param0->compiler;
frost$core$Weak* $tmp1111 = *$tmp1110;
frost$core$Object* $tmp1112 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1111);
frost$core$Bit $tmp1113 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1112) != NULL);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1115 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1116, $tmp1115, &$s1117);
abort(); // unreachable
block77:;
org$frostlang$frostc$ClassDecl* $tmp1118 = *(&local4);
frost$core$Bit $tmp1119 = frost$core$Bit$init$builtin_bit($tmp1118 != NULL);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1122, $tmp1121, &$s1123);
abort(); // unreachable
block79:;
frost$collections$ListView* $tmp1124 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1112), $tmp1118);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$collections$ListView* $tmp1125 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
*(&local5) = $tmp1124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
// unreffing REF($1637:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1112);
// unreffing REF($1618:frost.core.Weak.T)
// line 241
frost$io$IndentedOutputStream** $tmp1126 = &param0->types;
frost$io$IndentedOutputStream* $tmp1127 = *$tmp1126;
frost$collections$ListView* $tmp1128 = *(&local5);
ITable* $tmp1129 = ((frost$collections$CollectionView*) $tmp1128)->$class->itable;
while ($tmp1129->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[0];
frost$core$Int64 $tmp1132 = $tmp1130(((frost$collections$CollectionView*) $tmp1128));
frost$core$Int64$wrapper* $tmp1133;
$tmp1133 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1133->value = $tmp1132;
frost$core$String* $tmp1134 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1135, ((frost$core$Object*) $tmp1133));
frost$core$String* $tmp1136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1134, &$s1137);
frost$core$String* $tmp1138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1139, $tmp1136);
frost$core$String** $tmp1140 = &param1->name;
frost$core$String* $tmp1141 = *$tmp1140;
frost$core$String* $tmp1142 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1141);
frost$core$String* $tmp1143 = frost$core$String$get_asString$R$frost$core$String($tmp1142);
frost$core$String* $tmp1144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1143, &$s1145);
frost$core$String* $tmp1146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1138, $tmp1144);
$fn1148 $tmp1147 = ($fn1148) ((frost$io$OutputStream*) $tmp1127)->$class->vtable[19];
frost$core$Error* $tmp1149 = $tmp1147(((frost$io$OutputStream*) $tmp1127), $tmp1146);
// try error check
if ($tmp1149 == NULL) goto block81; else goto block82;
block82:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local0) = $tmp1149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing REF($1670:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing REF($1668:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// unreffing REF($1667:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
// unreffing REF($1666:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
// unreffing REF($1665:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing REF($1662:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing REF($1661:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($1660:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
// unreffing REF($1659:frost.core.Object)
frost$collections$ListView* $tmp1150 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1151 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1152 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1153 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block81:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing REF($1670:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing REF($1668:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// unreffing REF($1667:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
// unreffing REF($1666:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
// unreffing REF($1665:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing REF($1662:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing REF($1661:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($1660:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
// unreffing REF($1659:frost.core.Object)
// line 245
frost$io$IndentedOutputStream** $tmp1154 = &param0->types;
frost$io$IndentedOutputStream* $tmp1155 = *$tmp1154;
frost$core$String** $tmp1156 = &param1->name;
frost$core$String* $tmp1157 = *$tmp1156;
frost$core$String* $tmp1158 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1157);
frost$core$String* $tmp1159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1160, $tmp1158);
frost$core$String* $tmp1161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1159, &$s1162);
frost$core$String** $tmp1163 = &param1->name;
frost$core$String* $tmp1164 = *$tmp1163;
frost$core$String* $tmp1165 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1164);
frost$core$String* $tmp1166 = frost$core$String$get_asString$R$frost$core$String($tmp1165);
frost$core$String* $tmp1167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1166, &$s1168);
frost$core$String* $tmp1169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1161, $tmp1167);
$fn1171 $tmp1170 = ($fn1171) ((frost$io$OutputStream*) $tmp1155)->$class->vtable[19];
frost$core$Error* $tmp1172 = $tmp1170(((frost$io$OutputStream*) $tmp1155), $tmp1169);
// try error check
if ($tmp1172 == NULL) goto block83; else goto block84;
block84:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local0) = $tmp1172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing REF($1768:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
// unreffing REF($1766:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// unreffing REF($1765:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
// unreffing REF($1764:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
// unreffing REF($1763:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// unreffing REF($1760:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing REF($1759:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// unreffing REF($1758:frost.core.String)
frost$collections$ListView* $tmp1173 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1174 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1175 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block83:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing REF($1768:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
// unreffing REF($1766:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// unreffing REF($1765:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
// unreffing REF($1764:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
// unreffing REF($1763:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// unreffing REF($1760:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing REF($1759:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// unreffing REF($1758:frost.core.String)
frost$collections$ListView* $tmp1177 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1178 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block54;
block54:;
frost$io$File* $tmp1179 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 250
frost$core$Weak** $tmp1181 = &param0->compiler;
frost$core$Weak* $tmp1182 = *$tmp1181;
frost$core$Object* $tmp1183 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1182);
frost$core$Bit $tmp1184 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1183) != NULL);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp1186 = (frost$core$Int64) {250};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1187, $tmp1186, &$s1188);
abort(); // unreachable
block85:;
org$frostlang$frostc$Position* $tmp1189 = &param1->position;
org$frostlang$frostc$Position $tmp1190 = *$tmp1189;
frost$core$Error* $tmp1191 = *(&local0);
frost$core$String** $tmp1192 = &$tmp1191->message;
frost$core$String* $tmp1193 = *$tmp1192;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1183), $tmp1190, $tmp1193);
frost$core$Frost$unref$frost$core$Object$Q($tmp1183);
// unreffing REF($1870:frost.core.Weak.T)
goto block2;
block2:;
frost$core$Error* $tmp1194 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
// line 255
frost$core$Weak** $tmp1195 = &param1->owner;
frost$core$Weak* $tmp1196 = *$tmp1195;
frost$core$Object* $tmp1197 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1196);
org$frostlang$frostc$Type** $tmp1198 = &((org$frostlang$frostc$ClassDecl*) $tmp1197)->type;
org$frostlang$frostc$Type* $tmp1199 = *$tmp1198;
frost$core$String* $tmp1200 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1199);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$String* $tmp1201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
*(&local0) = $tmp1200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1197);
// unreffing REF($4:frost.core.Weak.T)
// line 256
org$frostlang$frostc$MethodDecl$Kind* $tmp1202 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1203 = *$tmp1202;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1204;
$tmp1204 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1204->value = $tmp1203;
frost$core$Int64 $tmp1205 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1206 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1205);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1207;
$tmp1207 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1207->value = $tmp1206;
ITable* $tmp1208 = ((frost$core$Equatable*) $tmp1204)->$class->itable;
while ($tmp1208->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1208 = $tmp1208->next;
}
$fn1210 $tmp1209 = $tmp1208->methods[0];
frost$core$Bit $tmp1211 = $tmp1209(((frost$core$Equatable*) $tmp1204), ((frost$core$Equatable*) $tmp1207));
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block3; else goto block4;
block3:;
frost$core$String* $tmp1213 = *(&local0);
frost$core$Bit $tmp1214 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1213, &$s1215);
frost$core$Bit $tmp1216 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1214);
*(&local1) = $tmp1216;
goto block5;
block4:;
*(&local1) = $tmp1211;
goto block5;
block5:;
frost$core$Bit $tmp1217 = *(&local1);
bool $tmp1218 = $tmp1217.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1207)));
// unreffing REF($29:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1204)));
// unreffing REF($25:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1218) goto block1; else goto block2;
block1:;
// line 257
frost$core$String* $tmp1219 = *(&local0);
frost$core$String* $tmp1220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1219, &$s1221);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// unreffing REF($52:frost.core.String)
frost$core$String* $tmp1222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1220;
block2:;
// line 259
frost$core$String* $tmp1223 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$String* $tmp1224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1223;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 279
org$frostlang$frostc$Type** $tmp1225 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1226 = *$tmp1225;
frost$core$Bit $tmp1227 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1226);
frost$core$Bit $tmp1228 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1227);
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block1; else goto block2;
block1:;
// line 280
frost$core$Bit $tmp1230 = frost$core$Bit$init$builtin_bit(false);
return $tmp1230;
block2:;
// line 282
org$frostlang$frostc$Annotations** $tmp1231 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1232 = *$tmp1231;
frost$core$Bit $tmp1233 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1232);
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1235 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1236 = *$tmp1235;
frost$core$Bit $tmp1237 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1236);
*(&local1) = $tmp1237;
goto block5;
block4:;
*(&local1) = $tmp1233;
goto block5;
block5:;
frost$core$Bit $tmp1238 = *(&local1);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1240 = &param0->compiler;
frost$core$Weak* $tmp1241 = *$tmp1240;
frost$core$Object* $tmp1242 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1241);
frost$core$Bit $tmp1243 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1242) != NULL);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1245 = (frost$core$Int64) {283};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1246, $tmp1245, &$s1247);
abort(); // unreachable
block9:;
frost$core$Weak** $tmp1248 = &param0->compiler;
frost$core$Weak* $tmp1249 = *$tmp1248;
frost$core$Object* $tmp1250 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1249);
frost$core$Bit $tmp1251 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1250) != NULL);
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1253 = (frost$core$Int64) {283};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1254, $tmp1253, &$s1255);
abort(); // unreachable
block11:;
org$frostlang$frostc$Type** $tmp1256 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1257 = *$tmp1256;
org$frostlang$frostc$ClassDecl* $tmp1258 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1250), $tmp1257);
frost$core$Bit $tmp1259 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1242), $tmp1258);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
// unreffing REF($54:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1250);
// unreffing REF($42:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1242);
// unreffing REF($29:frost.core.Weak.T)
*(&local0) = $tmp1259;
goto block8;
block7:;
*(&local0) = $tmp1238;
goto block8;
block8:;
frost$core$Bit $tmp1260 = *(&local0);
*(&local2) = $tmp1260;
// line 288
frost$core$Bit $tmp1261 = *(&local2);
frost$core$Bit $tmp1262 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1261);
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block13; else goto block14;
block13:;
*(&local3) = $tmp1262;
goto block15;
block14:;
org$frostlang$frostc$Annotations** $tmp1264 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1265 = *$tmp1264;
frost$core$Bit $tmp1266 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1265);
frost$core$Bit $tmp1267 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1266);
bool $tmp1268 = $tmp1267.value;
if ($tmp1268) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1269 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1270 = *$tmp1269;
frost$core$Bit $tmp1271 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1270);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block19; else goto block20;
block19:;
*(&local5) = $tmp1271;
goto block21;
block20:;
org$frostlang$frostc$Annotations** $tmp1273 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1274 = *$tmp1273;
frost$core$Bit $tmp1275 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1274);
*(&local5) = $tmp1275;
goto block21;
block21:;
frost$core$Bit $tmp1276 = *(&local5);
*(&local4) = $tmp1276;
goto block18;
block17:;
*(&local4) = $tmp1267;
goto block18;
block18:;
frost$core$Bit $tmp1277 = *(&local4);
*(&local3) = $tmp1277;
goto block15;
block15:;
frost$core$Bit $tmp1278 = *(&local3);
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1280 = (frost$core$Int64) {288};
frost$core$String* $tmp1281 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1283, $tmp1281);
frost$core$String* $tmp1284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1282, &$s1285);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1286, $tmp1280, $tmp1284);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// unreffing REF($110:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
// unreffing REF($109:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
// unreffing REF($108:frost.core.String)
abort(); // unreachable
block22:;
// line 290
frost$core$Bit $tmp1287 = *(&local2);
return $tmp1287;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Bit local2;
org$frostlang$frostc$MethodDecl$Parameter* local3 = NULL;
frost$core$String* local4 = NULL;
// line 295
*(&local0) = ((frost$core$Error*) NULL);
// line 296
frost$io$MemoryOutputStream** $tmp1288 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1289 = *$tmp1288;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$io$MemoryOutputStream** $tmp1290 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1291 = *$tmp1290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
frost$io$MemoryOutputStream** $tmp1292 = &param0->importStream;
*$tmp1292 = $tmp1289;
// line 297
frost$collections$HashSet** $tmp1293 = &param0->bodyImports;
frost$collections$HashSet* $tmp1294 = *$tmp1293;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
frost$collections$HashSet** $tmp1295 = &param0->imports;
frost$collections$HashSet* $tmp1296 = *$tmp1295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
frost$collections$HashSet** $tmp1297 = &param0->imports;
*$tmp1297 = $tmp1294;
// line 298
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1298));
frost$core$String* $tmp1299 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local1) = &$s1300;
// line 299
frost$core$Bit $tmp1301 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block3; else goto block5;
block3:;
// line 300
frost$io$IndentedOutputStream** $tmp1303 = &param0->body;
frost$io$IndentedOutputStream* $tmp1304 = *$tmp1303;
frost$core$String* $tmp1305 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1307, $tmp1305);
frost$core$String* $tmp1308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1306, &$s1309);
org$frostlang$frostc$Type** $tmp1310 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1311 = *$tmp1310;
frost$core$String* $tmp1312 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1311);
frost$core$String* $tmp1313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1308, $tmp1312);
frost$core$String* $tmp1314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1313, &$s1315);
$fn1317 $tmp1316 = ($fn1317) ((frost$io$OutputStream*) $tmp1304)->$class->vtable[17];
frost$core$Error* $tmp1318 = $tmp1316(((frost$io$OutputStream*) $tmp1304), $tmp1314);
// try error check
if ($tmp1318 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local0) = $tmp1318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
// unreffing REF($49:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing REF($42:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
// unreffing REF($40:frost.core.String)
frost$core$String* $tmp1319 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
// unreffing REF($49:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing REF($42:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
// unreffing REF($40:frost.core.String)
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1320));
frost$core$String* $tmp1321 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local1) = &$s1322;
goto block4;
block5:;
// line 1
// line 304
frost$io$IndentedOutputStream** $tmp1323 = &param0->body;
frost$io$IndentedOutputStream* $tmp1324 = *$tmp1323;
org$frostlang$frostc$Type** $tmp1325 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1326 = *$tmp1325;
frost$core$String* $tmp1327 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1326);
frost$core$String* $tmp1328 = frost$core$String$get_asString$R$frost$core$String($tmp1327);
frost$core$String* $tmp1329 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1328, &$s1330);
frost$core$String* $tmp1331 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1329, $tmp1331);
frost$core$String* $tmp1333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1332, &$s1334);
$fn1336 $tmp1335 = ($fn1336) ((frost$io$OutputStream*) $tmp1324)->$class->vtable[17];
frost$core$Error* $tmp1337 = $tmp1335(((frost$io$OutputStream*) $tmp1324), $tmp1333);
// try error check
if ($tmp1337 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local0) = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
// unreffing REF($126:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
// unreffing REF($124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
// unreffing REF($123:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// unreffing REF($120:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// unreffing REF($119:frost.core.String)
frost$core$String* $tmp1338 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
// unreffing REF($126:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
// unreffing REF($124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
// unreffing REF($123:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// unreffing REF($120:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// unreffing REF($119:frost.core.String)
goto block4;
block4:;
// line 306
org$frostlang$frostc$Annotations** $tmp1339 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1340 = *$tmp1339;
frost$core$Bit $tmp1341 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1340);
frost$core$Bit $tmp1342 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1341);
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block12; else goto block13;
block12:;
frost$core$Weak** $tmp1344 = &param0->compiler;
frost$core$Weak* $tmp1345 = *$tmp1344;
frost$core$Object* $tmp1346 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1345);
frost$core$Bit $tmp1347 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1346) != NULL);
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1349 = (frost$core$Int64) {306};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1350, $tmp1349, &$s1351);
abort(); // unreachable
block15:;
frost$core$Bit $tmp1352 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1346), param1);
frost$core$Bit $tmp1353 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1352);
frost$core$Frost$unref$frost$core$Object$Q($tmp1346);
// unreffing REF($192:frost.core.Weak.T)
*(&local2) = $tmp1353;
goto block14;
block13:;
*(&local2) = $tmp1342;
goto block14;
block14:;
frost$core$Bit $tmp1354 = *(&local2);
bool $tmp1355 = $tmp1354.value;
if ($tmp1355) goto block10; else goto block11;
block10:;
// line 307
frost$io$IndentedOutputStream** $tmp1356 = &param0->body;
frost$io$IndentedOutputStream* $tmp1357 = *$tmp1356;
frost$core$String* $tmp1358 = *(&local1);
frost$core$String* $tmp1359 = frost$core$String$get_asString$R$frost$core$String($tmp1358);
frost$core$String* $tmp1360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1359, &$s1361);
frost$core$String* $tmp1362 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1360, $tmp1362);
frost$core$String* $tmp1364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1363, &$s1365);
$fn1367 $tmp1366 = ($fn1367) ((frost$io$OutputStream*) $tmp1357)->$class->vtable[17];
frost$core$Error* $tmp1368 = $tmp1366(((frost$io$OutputStream*) $tmp1357), $tmp1364);
// try error check
if ($tmp1368 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local0) = $tmp1368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
// unreffing REF($225:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
// unreffing REF($223:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
// unreffing REF($222:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
// unreffing REF($221:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing REF($220:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
// unreffing REF($219:frost.core.String)
frost$core$String* $tmp1369 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
// unreffing REF($225:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
// unreffing REF($223:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
// unreffing REF($222:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
// unreffing REF($221:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing REF($220:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
// unreffing REF($219:frost.core.String)
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1370));
frost$core$String* $tmp1371 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local1) = &$s1372;
goto block11;
block11:;
// line 310
frost$collections$Array** $tmp1373 = &param1->parameters;
frost$collections$Array* $tmp1374 = *$tmp1373;
ITable* $tmp1375 = ((frost$collections$Iterable*) $tmp1374)->$class->itable;
while ($tmp1375->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1375 = $tmp1375->next;
}
$fn1377 $tmp1376 = $tmp1375->methods[0];
frost$collections$Iterator* $tmp1378 = $tmp1376(((frost$collections$Iterable*) $tmp1374));
goto block19;
block19:;
ITable* $tmp1379 = $tmp1378->$class->itable;
while ($tmp1379->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1379 = $tmp1379->next;
}
$fn1381 $tmp1380 = $tmp1379->methods[0];
frost$core$Bit $tmp1382 = $tmp1380($tmp1378);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block21; else goto block20;
block20:;
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1384 = $tmp1378->$class->itable;
while ($tmp1384->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1384 = $tmp1384->next;
}
$fn1386 $tmp1385 = $tmp1384->methods[1];
frost$core$Object* $tmp1387 = $tmp1385($tmp1378);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1387)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1388 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1387);
// line 311
org$frostlang$frostc$MethodDecl$Parameter* $tmp1389 = *(&local3);
frost$core$String** $tmp1390 = &$tmp1389->name;
frost$core$String* $tmp1391 = *$tmp1390;
frost$core$String* $tmp1392 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1391);
frost$core$String* $tmp1393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1394, $tmp1392);
frost$core$String* $tmp1395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1393, &$s1396);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
frost$core$String* $tmp1397 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local4) = $tmp1395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
// unreffing REF($313:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
// unreffing REF($312:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
// unreffing REF($311:frost.core.String)
// line 312
frost$io$IndentedOutputStream** $tmp1398 = &param0->body;
frost$io$IndentedOutputStream* $tmp1399 = *$tmp1398;
frost$core$String* $tmp1400 = *(&local1);
frost$core$String* $tmp1401 = frost$core$String$get_asString$R$frost$core$String($tmp1400);
frost$core$String* $tmp1402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1401, &$s1403);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1404 = *(&local3);
org$frostlang$frostc$Type** $tmp1405 = &$tmp1404->type;
org$frostlang$frostc$Type* $tmp1406 = *$tmp1405;
frost$core$String* $tmp1407 = *(&local4);
frost$core$String* $tmp1408 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1406, $tmp1407);
frost$core$String* $tmp1409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1402, $tmp1408);
frost$core$String* $tmp1410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1409, &$s1411);
$fn1413 $tmp1412 = ($fn1413) ((frost$io$OutputStream*) $tmp1399)->$class->vtable[17];
frost$core$Error* $tmp1414 = $tmp1412(((frost$io$OutputStream*) $tmp1399), $tmp1410);
// try error check
if ($tmp1414 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local0) = $tmp1414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
// unreffing REF($345:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
// unreffing REF($343:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
// unreffing REF($342:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
// unreffing REF($341:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
// unreffing REF($336:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// unreffing REF($335:frost.core.String)
frost$core$String* $tmp1415 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// unreffing name
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1387);
// unreffing REF($299:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp1416 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// unreffing p
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// unreffing REF($288:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$String* $tmp1417 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
// unreffing REF($345:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
// unreffing REF($343:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
// unreffing REF($342:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
// unreffing REF($341:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
// unreffing REF($336:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// unreffing REF($335:frost.core.String)
// line 313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1418));
frost$core$String* $tmp1419 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local1) = &$s1420;
frost$core$String* $tmp1421 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
// unreffing name
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1387);
// unreffing REF($299:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp1422 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
// unreffing p
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// unreffing REF($288:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 315
frost$io$IndentedOutputStream** $tmp1423 = &param0->body;
frost$io$IndentedOutputStream* $tmp1424 = *$tmp1423;
$fn1426 $tmp1425 = ($fn1426) ((frost$io$OutputStream*) $tmp1424)->$class->vtable[19];
frost$core$Error* $tmp1427 = $tmp1425(((frost$io$OutputStream*) $tmp1424), &$s1428);
// try error check
if ($tmp1427 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local0) = $tmp1427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
// unreffing REF($439:frost.core.Error?)
frost$core$String* $tmp1429 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
// unreffing REF($439:frost.core.Error?)
frost$core$String* $tmp1430 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 318
frost$core$Bit $tmp1431 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1433 = (frost$core$Int64) {318};
frost$core$Error* $tmp1434 = *(&local0);
$fn1436 $tmp1435 = ($fn1436) ((frost$core$Object*) $tmp1434)->$class->vtable[0];
frost$core$String* $tmp1437 = $tmp1435(((frost$core$Object*) $tmp1434));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1438, $tmp1433, $tmp1437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
// unreffing REF($472:frost.core.String)
abort(); // unreachable
block26:;
goto block2;
block2:;
frost$core$Error* $tmp1439 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// unreffing error
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
frost$io$IndentedOutputStream** $tmp1440 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1441 = *$tmp1440;
frost$io$MemoryOutputStream** $tmp1442 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1443 = *$tmp1442;
$fn1445 $tmp1444 = ($fn1445) ((frost$io$OutputStream*) $tmp1441)->$class->vtable[20];
frost$core$Error* $tmp1446 = $tmp1444(((frost$io$OutputStream*) $tmp1441), ((frost$core$Object*) $tmp1443));
// try error check
if ($tmp1446 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local0) = $tmp1446;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
// unreffing REF($10:frost.core.Error?)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
// unreffing REF($10:frost.core.Error?)
// line 331
frost$io$IndentedOutputStream** $tmp1447 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1448 = *$tmp1447;
frost$io$MemoryOutputStream** $tmp1449 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1450 = *$tmp1449;
$fn1452 $tmp1451 = ($fn1452) ((frost$io$OutputStream*) $tmp1448)->$class->vtable[20];
frost$core$Error* $tmp1453 = $tmp1451(((frost$io$OutputStream*) $tmp1448), ((frost$core$Object*) $tmp1450));
// try error check
if ($tmp1453 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local0) = $tmp1453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// unreffing REF($32:frost.core.Error?)
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// unreffing REF($32:frost.core.Error?)
// line 332
frost$io$IndentedOutputStream** $tmp1454 = &param0->out;
frost$io$IndentedOutputStream* $tmp1455 = *$tmp1454;
frost$io$MemoryOutputStream** $tmp1456 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1457 = *$tmp1456;
$fn1459 $tmp1458 = ($fn1459) ((frost$io$OutputStream*) $tmp1455)->$class->vtable[20];
frost$core$Error* $tmp1460 = $tmp1458(((frost$io$OutputStream*) $tmp1455), ((frost$core$Object*) $tmp1457));
// try error check
if ($tmp1460 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local0) = $tmp1460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
// unreffing REF($54:frost.core.Error?)
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
// unreffing REF($54:frost.core.Error?)
// line 333
frost$io$IndentedOutputStream** $tmp1461 = &param0->out;
frost$io$IndentedOutputStream* $tmp1462 = *$tmp1461;
frost$io$MemoryOutputStream** $tmp1463 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1464 = *$tmp1463;
$fn1466 $tmp1465 = ($fn1466) ((frost$io$OutputStream*) $tmp1462)->$class->vtable[20];
frost$core$Error* $tmp1467 = $tmp1465(((frost$io$OutputStream*) $tmp1462), ((frost$core$Object*) $tmp1464));
// try error check
if ($tmp1467 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local0) = $tmp1467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
// unreffing REF($76:frost.core.Error?)
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
// unreffing REF($76:frost.core.Error?)
goto block2;
block1:;
// line 336
frost$core$Error* $tmp1468 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp1468));
// line 337
frost$core$Int64 $tmp1469 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp1469);
goto block2;
block2:;
frost$core$Error* $tmp1470 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1471 = &param0->compiler;
frost$core$Weak* $tmp1472 = *$tmp1471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$io$MemoryOutputStream** $tmp1473 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1474 = *$tmp1473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$io$MemoryOutputStream** $tmp1475 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1476 = *$tmp1475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$io$IndentedOutputStream** $tmp1477 = &param0->types;
frost$io$IndentedOutputStream* $tmp1478 = *$tmp1477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$io$MemoryOutputStream** $tmp1479 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1480 = *$tmp1479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$io$MemoryOutputStream** $tmp1481 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1482 = *$tmp1481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$io$IndentedOutputStream** $tmp1483 = &param0->body;
frost$io$IndentedOutputStream* $tmp1484 = *$tmp1483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$collections$HashSet** $tmp1485 = &param0->typeImports;
frost$collections$HashSet* $tmp1486 = *$tmp1485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
frost$collections$HashSet** $tmp1487 = &param0->bodyImports;
frost$collections$HashSet* $tmp1488 = *$tmp1487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
frost$collections$HashSet** $tmp1489 = &param0->imports;
frost$collections$HashSet* $tmp1490 = *$tmp1489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
frost$io$MemoryOutputStream** $tmp1491 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1492 = *$tmp1491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
frost$io$File** $tmp1493 = &param0->outDir;
frost$io$File* $tmp1494 = *$tmp1493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$io$IndentedOutputStream** $tmp1495 = &param0->out;
frost$io$IndentedOutputStream* $tmp1496 = *$tmp1495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$io$IndentedOutputStream** $tmp1497 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1498 = *$tmp1497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1499 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1500 = *$tmp1499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
frost$core$Weak** $tmp1501 = &param0->cCodeGen;
frost$core$Weak* $tmp1502 = *$tmp1501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
org$frostlang$frostc$CCodeGenerator** $tmp1503 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1504 = *$tmp1503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
return;

}

