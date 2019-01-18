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
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Key.h"
#include "frost/core/Error.h"
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


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$HCodeGenerator$class_type org$frostlang$frostc$HCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$cleanup, org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$finish} };

typedef frost$core$Error* (*$fn243)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn276)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn437)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn471)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn625)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn633)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn647)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn654)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn662)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn687)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn712)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn716)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn721)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn757)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn778)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn792)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn800)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn825)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn832)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn862)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn878)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn898)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn922)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn939)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn947)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn961)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn985)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn999)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1022)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1029)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1054)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1090)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1107)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1130)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1169)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1276)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1294)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1324)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1333)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1337)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1342)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1369)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1379)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1388)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1395)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1402)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1409)(frost$io$OutputStream*, frost$core$Object*);

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
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 133, -1550011923375769787, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, 8768873314443410019, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 119, 6369952431726339328, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s1031 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s1052 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };

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

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlang$frostc$ClassDecl* local6 = NULL;
frost$core$String* local7 = NULL;
// line 73
org$frostlang$frostc$Type$Kind* $tmp129 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp130 = *$tmp129;
frost$core$Int64 $tmp131 = $tmp130.$rawValue;
frost$core$Int64 $tmp132 = (frost$core$Int64) {4};
frost$core$Bit $tmp133 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block2; else goto block3;
block2:;
// line 75
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s135));
return &$s136;
block3:;
frost$core$Int64 $tmp137 = (frost$core$Int64) {2};
frost$core$Bit $tmp138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block4; else goto block5;
block4:;
// line 78
frost$core$Int64 $tmp140 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp141 = (frost$core$Int64) {8};
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142 * $tmp143;
frost$core$Int64 $tmp145 = (frost$core$Int64) {$tmp144};
frost$core$Int64$wrapper* $tmp146;
$tmp146 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp146->value = $tmp145;
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s148, ((frost$core$Object*) $tmp146));
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp147, &$s150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($24:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($23:frost.core.Object)
return $tmp149;
block5:;
frost$core$Int64 $tmp151 = (frost$core$Int64) {3};
frost$core$Bit $tmp152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp151);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block6; else goto block7;
block6:;
// line 81
frost$core$Int64 $tmp154 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp155 = (frost$core$Int64) {8};
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156 * $tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {$tmp158};
frost$core$Int64$wrapper* $tmp160;
$tmp160 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp160->value = $tmp159;
frost$core$String* $tmp161 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s162, ((frost$core$Object*) $tmp160));
frost$core$String* $tmp163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp161, &$s164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// unreffing REF($49:frost.core.Object)
return $tmp163;
block7:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {9};
frost$core$Bit $tmp166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block8; else goto block9;
block8:;
// line 84
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s168));
return &$s169;
block9:;
frost$core$Int64 $tmp170 = (frost$core$Int64) {10};
frost$core$Bit $tmp171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block10; else goto block11;
block10:;
// line 87
frost$core$Int64 $tmp173 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp174 = (frost$core$Int64) {4};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block13; else goto block14;
block13:;
// line 88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s177));
return &$s178;
block14:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {8};
frost$core$Bit $tmp180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block15; else goto block16;
block15:;
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s182));
return &$s183;
block16:;
// line 90
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit(false);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp186 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s187, $tmp186);
abort(); // unreachable
block17:;
goto block12;
block12:;
goto block1;
block11:;
frost$core$Int64 $tmp188 = (frost$core$Int64) {0};
frost$core$Bit $tmp189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block19; else goto block20;
block19:;
// line 94
frost$core$String** $tmp191 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp192 = *$tmp191;
frost$core$String* $tmp193 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp192);
frost$core$String* $tmp194 = frost$core$String$convert$R$frost$core$String($tmp193);
frost$core$String* $tmp195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp194, &$s196);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$String* $tmp197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local0) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($113:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing REF($112:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($111:frost.core.String)
// line 95
frost$core$Weak** $tmp198 = &param0->compiler;
frost$core$Weak* $tmp199 = *$tmp198;
frost$core$Object* $tmp200 = frost$core$Weak$get$R$frost$core$Weak$T($tmp199);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp200) != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp203 = (frost$core$Int64) {95};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s204, $tmp203, &$s205);
abort(); // unreachable
block21:;
org$frostlang$frostc$ClassDecl* $tmp206 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp200), param1);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local1) = $tmp206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($144:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp200);
// unreffing REF($134:frost.core.Weak.T)
// line 96
org$frostlang$frostc$ClassDecl* $tmp208 = *(&local1);
frost$core$Bit $tmp209 = frost$core$Bit$init$builtin_bit($tmp208 != NULL);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp211 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s212, $tmp211);
abort(); // unreachable
block23:;
// line 97
frost$core$Weak** $tmp213 = &param0->compiler;
frost$core$Weak* $tmp214 = *$tmp213;
frost$core$Object* $tmp215 = frost$core$Weak$get$R$frost$core$Weak$T($tmp214);
frost$core$Bit $tmp216 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp215) != NULL);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp218 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s219, $tmp218, &$s220);
abort(); // unreachable
block27:;
org$frostlang$frostc$ClassDecl* $tmp221 = *(&local1);
frost$core$Bit $tmp222 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp215), $tmp221);
frost$core$Bit $tmp223 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp222);
bool $tmp224 = $tmp223.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
// unreffing REF($171:frost.core.Weak.T)
if ($tmp224) goto block25; else goto block26;
block25:;
// line 98
frost$collections$HashSet** $tmp225 = &param0->imports;
frost$collections$HashSet* $tmp226 = *$tmp225;
frost$core$String* $tmp227 = *(&local0);
frost$core$Bit $tmp228 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp226, ((frost$collections$Key*) $tmp227));
frost$core$Bit $tmp229 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block29; else goto block30;
block29:;
// line 99
frost$io$MemoryOutputStream** $tmp231 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp232 = *$tmp231;
frost$core$String* $tmp233 = *(&local0);
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s235, $tmp233);
frost$core$String* $tmp236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp234, &$s237);
frost$core$String* $tmp238 = *(&local0);
frost$core$String* $tmp239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp236, $tmp238);
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp239, &$s241);
$fn243 $tmp242 = ($fn243) ((frost$io$OutputStream*) $tmp232)->$class->vtable[19];
frost$core$Error* $tmp244 = $tmp242(((frost$io$OutputStream*) $tmp232), $tmp240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($210:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($208:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($207:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($205:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($204:frost.core.String)
// line 100
frost$collections$HashSet** $tmp245 = &param0->imports;
frost$collections$HashSet* $tmp246 = *$tmp245;
frost$core$String* $tmp247 = *(&local0);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp246, ((frost$collections$Key*) $tmp247));
goto block30;
block30:;
// line 102
frost$core$String* $tmp248 = *(&local0);
frost$core$String* $tmp249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp248, &$s250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($236:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp249;
block26:;
// line 104
org$frostlang$frostc$ClassDecl* $tmp253 = *(&local1);
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit($tmp253 != NULL);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp256 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s257, $tmp256, &$s258);
abort(); // unreachable
block31:;
frost$core$String* $tmp259 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp253, &$s260);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$String* $tmp261 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local2) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($263:frost.core.String)
// line 105
frost$collections$HashSet** $tmp262 = &param0->imports;
frost$collections$HashSet* $tmp263 = *$tmp262;
frost$core$String* $tmp264 = *(&local2);
frost$core$Bit $tmp265 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp263, ((frost$collections$Key*) $tmp264));
frost$core$Bit $tmp266 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block33; else goto block34;
block33:;
// line 106
frost$io$MemoryOutputStream** $tmp268 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp269 = *$tmp268;
frost$core$String* $tmp270 = *(&local2);
frost$core$String* $tmp271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s272, $tmp270);
frost$core$String* $tmp273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp271, &$s274);
$fn276 $tmp275 = ($fn276) ((frost$io$OutputStream*) $tmp269)->$class->vtable[19];
frost$core$Error* $tmp277 = $tmp275(((frost$io$OutputStream*) $tmp269), $tmp273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing REF($292:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($290:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing REF($289:frost.core.String)
// line 107
frost$collections$HashSet** $tmp278 = &param0->imports;
frost$collections$HashSet* $tmp279 = *$tmp278;
frost$core$String* $tmp280 = *(&local2);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp279, ((frost$collections$Key*) $tmp280));
goto block34;
block34:;
// line 109
frost$core$String* $tmp281 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$String* $tmp282 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing includePath
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp283 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp284 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp281;
block20:;
frost$core$Int64 $tmp285 = (frost$core$Int64) {1};
frost$core$Bit $tmp286 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp285);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block35; else goto block36;
block35:;
// line 112
frost$core$Weak** $tmp288 = &param0->compiler;
frost$core$Weak* $tmp289 = *$tmp288;
frost$core$Object* $tmp290 = frost$core$Weak$get$R$frost$core$Weak$T($tmp289);
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp290) != NULL);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {112};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block37:;
org$frostlang$frostc$ClassDecl* $tmp296 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp290), param1);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
org$frostlang$frostc$ClassDecl* $tmp297 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local3) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($348:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp290);
// unreffing REF($338:frost.core.Weak.T)
// line 113
org$frostlang$frostc$ClassDecl* $tmp298 = *(&local3);
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit($tmp298 != NULL);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp301 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s302, $tmp301);
abort(); // unreachable
block39:;
// line 114
frost$core$Weak** $tmp303 = &param0->compiler;
frost$core$Weak* $tmp304 = *$tmp303;
frost$core$Object* $tmp305 = frost$core$Weak$get$R$frost$core$Weak$T($tmp304);
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp305) != NULL);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp308 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s309, $tmp308, &$s310);
abort(); // unreachable
block43:;
org$frostlang$frostc$ClassDecl* $tmp311 = *(&local3);
frost$core$Bit $tmp312 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp305), $tmp311);
bool $tmp313 = $tmp312.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp305);
// unreffing REF($375:frost.core.Weak.T)
if ($tmp313) goto block41; else goto block42;
block41:;
// line 115
org$frostlang$frostc$FixedArray** $tmp314 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp315 = *$tmp314;
frost$core$Bit $tmp316 = frost$core$Bit$init$builtin_bit($tmp315 != NULL);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp318 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s319, $tmp318, &$s320);
abort(); // unreachable
block45:;
frost$core$Int64 $tmp321 = (frost$core$Int64) {0};
frost$core$Object* $tmp322 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp315, $tmp321);
frost$core$String* $tmp323 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp322));
frost$core$String* $tmp324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp323, &$s325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing REF($408:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// unreffing REF($407:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp322);
// unreffing REF($405:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp326 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// unreffing cl
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp324;
block42:;
// line 117
org$frostlang$frostc$FixedArray** $tmp327 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp328 = *$tmp327;
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit($tmp328 != NULL);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {117};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s332, $tmp331, &$s333);
abort(); // unreachable
block47:;
frost$core$Int64 $tmp334 = (frost$core$Int64) {0};
frost$core$Object* $tmp335 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp328, $tmp334);
frost$core$String* $tmp336 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp335));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($441:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
// unreffing REF($439:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp337 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing cl
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp336;
block36:;
frost$core$Int64 $tmp338 = (frost$core$Int64) {11};
frost$core$Bit $tmp339 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp338);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block49; else goto block50;
block49:;
// line 120
org$frostlang$frostc$FixedArray** $tmp341 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp342 = *$tmp341;
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342 != NULL);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp345 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s346, $tmp345, &$s347);
abort(); // unreachable
block53:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {0};
frost$core$Object* $tmp349 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp342, $tmp348);
frost$core$String** $tmp350 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp349))->name;
frost$core$String* $tmp351 = *$tmp350;
frost$core$Bit $tmp352 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp351, &$s353);
bool $tmp354 = $tmp352.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp349);
// unreffing REF($473:org.frostlang.frostc.FixedArray.T)
if ($tmp354) goto block51; else goto block52;
block51:;
// line 121
org$frostlang$frostc$FixedArray** $tmp355 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp356 = *$tmp355;
frost$core$Bit $tmp357 = frost$core$Bit$init$builtin_bit($tmp356 != NULL);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {121};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable
block55:;
frost$core$Int64 $tmp362 = (frost$core$Int64) {1};
frost$core$Object* $tmp363 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp356, $tmp362);
frost$core$String* $tmp364 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp363));
frost$core$String* $tmp365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp364, &$s366);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// unreffing REF($500:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp363);
// unreffing REF($497:org.frostlang.frostc.FixedArray.T)
return $tmp365;
block52:;
// line 123
frost$core$Weak** $tmp367 = &param0->compiler;
frost$core$Weak* $tmp368 = *$tmp367;
frost$core$Object* $tmp369 = frost$core$Weak$get$R$frost$core$Weak$T($tmp368);
frost$core$Bit $tmp370 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp369) != NULL);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp372 = (frost$core$Int64) {123};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s373, $tmp372, &$s374);
abort(); // unreachable
block57:;
org$frostlang$frostc$ClassDecl* $tmp375 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp369), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
org$frostlang$frostc$ClassDecl* $tmp376 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local4) = $tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing REF($527:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp369);
// unreffing REF($517:frost.core.Weak.T)
// line 124
org$frostlang$frostc$ClassDecl* $tmp377 = *(&local4);
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377 != NULL);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {124};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block61:;
frost$core$Bit $tmp383 = org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp377);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block59; else goto block60;
block59:;
// line 125
frost$core$String** $tmp385 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp386 = *$tmp385;
frost$core$String* $tmp387 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp386);
frost$core$String* $tmp388 = frost$core$String$convert$R$frost$core$String($tmp387);
frost$core$String* $tmp389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp388, &$s390);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$String* $tmp391 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local5) = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
// unreffing REF($560:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// unreffing REF($559:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing REF($558:frost.core.String)
// line 126
frost$core$Weak** $tmp392 = &param0->compiler;
frost$core$Weak* $tmp393 = *$tmp392;
frost$core$Object* $tmp394 = frost$core$Weak$get$R$frost$core$Weak$T($tmp393);
frost$core$Bit $tmp395 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp394) != NULL);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp397 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s398, $tmp397, &$s399);
abort(); // unreachable
block63:;
org$frostlang$frostc$ClassDecl* $tmp400 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp394), param1);
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
org$frostlang$frostc$ClassDecl* $tmp401 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local6) = $tmp400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// unreffing REF($591:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp394);
// unreffing REF($581:frost.core.Weak.T)
// line 127
org$frostlang$frostc$ClassDecl* $tmp402 = *(&local6);
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit($tmp402 != NULL);
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp405 = (frost$core$Int64) {127};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s406, $tmp405);
abort(); // unreachable
block65:;
// line 128
frost$core$Weak** $tmp407 = &param0->compiler;
frost$core$Weak* $tmp408 = *$tmp407;
frost$core$Object* $tmp409 = frost$core$Weak$get$R$frost$core$Weak$T($tmp408);
frost$core$Bit $tmp410 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp409) != NULL);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp412 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s413, $tmp412, &$s414);
abort(); // unreachable
block69:;
org$frostlang$frostc$ClassDecl* $tmp415 = *(&local6);
frost$core$Bit $tmp416 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp409), $tmp415);
frost$core$Bit $tmp417 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp416);
bool $tmp418 = $tmp417.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp409);
// unreffing REF($618:frost.core.Weak.T)
if ($tmp418) goto block67; else goto block68;
block67:;
// line 129
frost$collections$HashSet** $tmp419 = &param0->imports;
frost$collections$HashSet* $tmp420 = *$tmp419;
frost$core$String* $tmp421 = *(&local5);
frost$core$Bit $tmp422 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp420, ((frost$collections$Key*) $tmp421));
frost$core$Bit $tmp423 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp422);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block71; else goto block72;
block71:;
// line 130
frost$io$MemoryOutputStream** $tmp425 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp426 = *$tmp425;
frost$core$String* $tmp427 = *(&local5);
frost$core$String* $tmp428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s429, $tmp427);
frost$core$String* $tmp430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp428, &$s431);
frost$core$String* $tmp432 = *(&local5);
frost$core$String* $tmp433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp430, $tmp432);
frost$core$String* $tmp434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp433, &$s435);
$fn437 $tmp436 = ($fn437) ((frost$io$OutputStream*) $tmp426)->$class->vtable[19];
frost$core$Error* $tmp438 = $tmp436(((frost$io$OutputStream*) $tmp426), $tmp434);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// unreffing REF($657:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// unreffing REF($655:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// unreffing REF($654:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing REF($652:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing REF($651:frost.core.String)
// line 131
frost$collections$HashSet** $tmp439 = &param0->imports;
frost$collections$HashSet* $tmp440 = *$tmp439;
frost$core$String* $tmp441 = *(&local5);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp440, ((frost$collections$Key*) $tmp441));
goto block72;
block72:;
// line 133
frost$core$String* $tmp442 = *(&local5);
frost$core$String* $tmp443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp442, &$s444);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing REF($683:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp445 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
// unreffing cl
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp446 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp447 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing cl
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp443;
block68:;
// line 135
org$frostlang$frostc$ClassDecl* $tmp448 = *(&local6);
frost$core$Bit $tmp449 = frost$core$Bit$init$builtin_bit($tmp448 != NULL);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp451 = (frost$core$Int64) {135};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s452, $tmp451, &$s453);
abort(); // unreachable
block73:;
frost$core$String* $tmp454 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp448, &$s455);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$String* $tmp456 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local7) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($715:frost.core.String)
// line 136
frost$collections$HashSet** $tmp457 = &param0->imports;
frost$collections$HashSet* $tmp458 = *$tmp457;
frost$core$String* $tmp459 = *(&local7);
frost$core$Bit $tmp460 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp458, ((frost$collections$Key*) $tmp459));
frost$core$Bit $tmp461 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp460);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block75; else goto block76;
block75:;
// line 137
frost$io$MemoryOutputStream** $tmp463 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp464 = *$tmp463;
frost$core$String* $tmp465 = *(&local7);
frost$core$String* $tmp466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s467, $tmp465);
frost$core$String* $tmp468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp466, &$s469);
$fn471 $tmp470 = ($fn471) ((frost$io$OutputStream*) $tmp464)->$class->vtable[19];
frost$core$Error* $tmp472 = $tmp470(((frost$io$OutputStream*) $tmp464), $tmp468);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// unreffing REF($744:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// unreffing REF($742:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing REF($741:frost.core.String)
// line 138
frost$collections$HashSet** $tmp473 = &param0->imports;
frost$collections$HashSet* $tmp474 = *$tmp473;
frost$core$String* $tmp475 = *(&local7);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp474, ((frost$collections$Key*) $tmp475));
goto block76;
block76:;
// line 140
frost$core$String* $tmp476 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$String* $tmp477 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// unreffing includePath
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp478 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing cl
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp479 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp480 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing cl
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp476;
block60:;
// line 142
org$frostlang$frostc$FixedArray** $tmp481 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp482 = *$tmp481;
frost$core$Bit $tmp483 = frost$core$Bit$init$builtin_bit($tmp482 != NULL);
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp485 = (frost$core$Int64) {142};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s486, $tmp485, &$s487);
abort(); // unreachable
block77:;
frost$core$Int64 $tmp488 = (frost$core$Int64) {0};
frost$core$Object* $tmp489 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp482, $tmp488);
frost$core$String* $tmp490 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp489));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// unreffing REF($802:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp489);
// unreffing REF($800:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp491 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
// unreffing cl
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp490;
block50:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {12};
frost$core$Bit $tmp493 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp492);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block79; else goto block80;
block79:;
// line 145
frost$core$Weak** $tmp495 = &param1->genericClassParameter;
frost$core$Weak* $tmp496 = *$tmp495;
frost$core$Object* $tmp497 = frost$core$Weak$get$R$frost$core$Weak$T($tmp496);
frost$core$Bit $tmp498 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp497) != NULL);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp500 = (frost$core$Int64) {145};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s501, $tmp500, &$s502);
abort(); // unreachable
block81:;
org$frostlang$frostc$Type** $tmp503 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp497)->bound;
org$frostlang$frostc$Type* $tmp504 = *$tmp503;
frost$core$String* $tmp505 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp504);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// unreffing REF($837:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp497);
// unreffing REF($825:frost.core.Weak.T)
return $tmp505;
block80:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {13};
frost$core$Bit $tmp507 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block83; else goto block84;
block83:;
// line 148
frost$core$Weak** $tmp509 = &param1->genericMethodParameter;
frost$core$Weak* $tmp510 = *$tmp509;
frost$core$Object* $tmp511 = frost$core$Weak$get$R$frost$core$Weak$T($tmp510);
frost$core$Bit $tmp512 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp511) != NULL);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp514 = (frost$core$Int64) {148};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s515, $tmp514, &$s516);
abort(); // unreachable
block85:;
org$frostlang$frostc$Type** $tmp517 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp511)->bound;
org$frostlang$frostc$Type* $tmp518 = *$tmp517;
frost$core$String* $tmp519 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing REF($867:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp511);
// unreffing REF($855:frost.core.Weak.T)
return $tmp519;
block84:;
frost$core$Int64 $tmp520 = (frost$core$Int64) {15};
frost$core$Bit $tmp521 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp520);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp523 = (frost$core$Int64) {16};
frost$core$Bit $tmp524 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp523);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block87; else goto block89;
block87:;
// line 151
org$frostlang$frostc$Type* $tmp526 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp527 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// unreffing REF($887:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing REF($886:org.frostlang.frostc.Type)
return $tmp527;
block89:;
frost$core$Int64 $tmp528 = (frost$core$Int64) {17};
frost$core$Bit $tmp529 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp528);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp531 = (frost$core$Int64) {18};
frost$core$Bit $tmp532 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block90; else goto block92;
block90:;
// line 154
org$frostlang$frostc$Type* $tmp534 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp535 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp534);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
// unreffing REF($907:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// unreffing REF($906:org.frostlang.frostc.Type)
return $tmp535;
block92:;
// line 157
frost$core$Bit $tmp536 = frost$core$Bit$init$builtin_bit(false);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block93; else goto block94;
block94:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {157};
frost$core$String* $tmp539 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s540, ((frost$core$Object*) param1));
frost$core$String* $tmp541 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp539, &$s542);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s543, $tmp538, $tmp541);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
// unreffing REF($924:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// unreffing REF($923:frost.core.String)
abort(); // unreachable
block93:;
goto block1;
block1:;
frost$core$Bit $tmp544 = frost$core$Bit$init$builtin_bit(false);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp546 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s547, $tmp546, &$s548);
abort(); // unreachable
block95:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// line 163
frost$core$String* $tmp549 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp550 = frost$core$String$convert$R$frost$core$String($tmp549);
frost$core$String* $tmp551 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp550, &$s552);
frost$core$String* $tmp553 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp551, param2);
frost$core$String* $tmp554 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp553, &$s555);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing REF($1:frost.core.String)
return $tmp554;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 168
frost$core$Weak* $tmp556 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp556, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Weak** $tmp557 = &param0->compiler;
frost$core$Weak* $tmp558 = *$tmp557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Weak** $tmp559 = &param0->compiler;
*$tmp559 = $tmp556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing REF($2:frost.core.Weak<org.frostlang.frostc.Compiler?>)
// line 169
org$frostlang$frostc$LLVMCodeGenerator** $tmp560 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp561 = *$tmp560;
org$frostlang$frostc$LLVMCodeGenerator$setCompiler$org$frostlang$frostc$Compiler($tmp561, param1);
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 173
frost$io$File** $tmp562 = &param0->outDir;
frost$io$File* $tmp563 = *$tmp562;
frost$core$String* $tmp564 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp565 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp563, $tmp564);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// unreffing REF($4:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing REF($3:frost.core.String)
return $tmp565;

}
void org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$io$File* local2 = NULL;
org$frostlang$frostc$FieldDecl* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// line 178
*(&local0) = ((frost$core$Error*) NULL);
// line 179
frost$io$MemoryOutputStream** $tmp566 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp567 = *$tmp566;
frost$io$MemoryOutputStream$clear($tmp567);
// line 180
frost$io$MemoryOutputStream** $tmp568 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp569 = *$tmp568;
frost$io$MemoryOutputStream$clear($tmp569);
// line 181
frost$io$MemoryOutputStream** $tmp570 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp571 = *$tmp570;
frost$io$MemoryOutputStream$clear($tmp571);
// line 182
frost$io$MemoryOutputStream** $tmp572 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp573 = *$tmp572;
frost$io$MemoryOutputStream$clear($tmp573);
// line 183
frost$collections$HashSet** $tmp574 = &param0->typeImports;
frost$collections$HashSet* $tmp575 = *$tmp574;
frost$collections$HashSet$clear($tmp575);
// line 184
frost$collections$HashSet** $tmp576 = &param0->bodyImports;
frost$collections$HashSet* $tmp577 = *$tmp576;
frost$collections$HashSet$clear($tmp577);
// line 185
frost$io$File* $tmp578 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s579);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$io$File* $tmp580 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local1) = $tmp578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($29:frost.io.File)
// line 186
frost$io$File* $tmp581 = *(&local1);
frost$io$File* $tmp582 = frost$io$File$get_parent$R$frost$io$File$Q($tmp581);
frost$core$Bit $tmp583 = frost$core$Bit$init$builtin_bit($tmp582 != NULL);
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp585 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s586, $tmp585, &$s587);
abort(); // unreachable
block3:;
frost$io$File$createDirectories($tmp582);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// unreffing REF($42:frost.io.File?)
// line 187
frost$io$IndentedOutputStream* $tmp588 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp589 = *(&local1);
frost$core$Maybe* $tmp590 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp589);
// try maybe check
frost$core$Int64* $tmp591 = &$tmp590->$rawValue;
frost$core$Int64 $tmp592 = *$tmp591;
int64_t $tmp593 = $tmp592.value;
bool $tmp594 = $tmp593 == 0;
if ($tmp594) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp595 = (frost$core$Error**) ($tmp590->$data + 0);
frost$core$Error* $tmp596 = *$tmp595;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local0) = $tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($58:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// unreffing REF($56:frost.io.IndentedOutputStream)
frost$io$File* $tmp597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Object** $tmp598 = (frost$core$Object**) ($tmp590->$data + 0);
frost$core$Object* $tmp599 = *$tmp598;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp588, ((frost$io$OutputStream*) $tmp599));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$io$IndentedOutputStream** $tmp600 = &param0->out;
frost$io$IndentedOutputStream* $tmp601 = *$tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$io$IndentedOutputStream** $tmp602 = &param0->out;
*$tmp602 = $tmp588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($58:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// unreffing REF($56:frost.io.IndentedOutputStream)
// line 188
frost$io$File* $tmp603 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s604);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$io$File* $tmp605 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local2) = $tmp603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing REF($102:frost.io.File)
// line 189
frost$io$IndentedOutputStream* $tmp606 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp607 = *(&local2);
frost$core$Maybe* $tmp608 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp607);
// try maybe check
frost$core$Int64* $tmp609 = &$tmp608->$rawValue;
frost$core$Int64 $tmp610 = *$tmp609;
int64_t $tmp611 = $tmp610.value;
bool $tmp612 = $tmp611 == 0;
if ($tmp612) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp613 = (frost$core$Error**) ($tmp608->$data + 0);
frost$core$Error* $tmp614 = *$tmp613;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local0) = $tmp614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($116:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($114:frost.io.IndentedOutputStream)
frost$io$File* $tmp615 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp616 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp617 = (frost$core$Object**) ($tmp608->$data + 0);
frost$core$Object* $tmp618 = *$tmp617;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp606, ((frost$io$OutputStream*) $tmp618));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$io$IndentedOutputStream** $tmp619 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp620 = *$tmp619;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$io$IndentedOutputStream** $tmp621 = &param0->typesOut;
*$tmp621 = $tmp606;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($116:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($114:frost.io.IndentedOutputStream)
// line 190
frost$io$IndentedOutputStream** $tmp622 = &param0->out;
frost$io$IndentedOutputStream* $tmp623 = *$tmp622;
$fn625 $tmp624 = ($fn625) ((frost$io$OutputStream*) $tmp623)->$class->vtable[19];
frost$core$Error* $tmp626 = $tmp624(((frost$io$OutputStream*) $tmp623), &$s627);
// try error check
if ($tmp626 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local0) = $tmp626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// unreffing REF($169:frost.core.Error?)
frost$io$File* $tmp628 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp629 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// unreffing REF($169:frost.core.Error?)
// line 191
frost$io$IndentedOutputStream** $tmp630 = &param0->out;
frost$io$IndentedOutputStream* $tmp631 = *$tmp630;
$fn633 $tmp632 = ($fn633) ((frost$io$OutputStream*) $tmp631)->$class->vtable[19];
frost$core$Error* $tmp634 = $tmp632(((frost$io$OutputStream*) $tmp631), &$s635);
// try error check
if ($tmp634 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local0) = $tmp634;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing REF($198:frost.core.Error?)
frost$io$File* $tmp636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing REF($198:frost.core.Error?)
// line 192
frost$io$IndentedOutputStream** $tmp638 = &param0->out;
frost$io$IndentedOutputStream* $tmp639 = *$tmp638;
frost$io$File* $tmp640 = *(&local2);
frost$core$String* $tmp641 = frost$io$File$get_name$R$frost$core$String($tmp640);
frost$core$String* $tmp642 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s643, $tmp641);
frost$core$String* $tmp644 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp642, &$s645);
$fn647 $tmp646 = ($fn647) ((frost$io$OutputStream*) $tmp639)->$class->vtable[19];
frost$core$Error* $tmp648 = $tmp646(((frost$io$OutputStream*) $tmp639), $tmp644);
// try error check
if ($tmp648 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local0) = $tmp648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing REF($231:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($229:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// unreffing REF($228:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
// unreffing REF($227:frost.core.String)
frost$io$File* $tmp649 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp650 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing REF($231:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($229:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// unreffing REF($228:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
// unreffing REF($227:frost.core.String)
// line 193
frost$io$IndentedOutputStream** $tmp651 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp652 = *$tmp651;
$fn654 $tmp653 = ($fn654) ((frost$io$OutputStream*) $tmp652)->$class->vtable[19];
frost$core$Error* $tmp655 = $tmp653(((frost$io$OutputStream*) $tmp652), &$s656);
// try error check
if ($tmp655 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local0) = $tmp655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing REF($278:frost.core.Error?)
frost$io$File* $tmp657 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp658 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing REF($278:frost.core.Error?)
// line 194
frost$io$IndentedOutputStream** $tmp659 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp660 = *$tmp659;
$fn662 $tmp661 = ($fn662) ((frost$io$OutputStream*) $tmp660)->$class->vtable[19];
frost$core$Error* $tmp663 = $tmp661(((frost$io$OutputStream*) $tmp660), &$s664);
// try error check
if ($tmp663 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local0) = $tmp663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing REF($307:frost.core.Error?)
frost$io$File* $tmp665 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp666 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing REF($307:frost.core.Error?)
// line 195
frost$io$MemoryOutputStream** $tmp667 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp668 = *$tmp667;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$io$MemoryOutputStream** $tmp669 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp670 = *$tmp669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$io$MemoryOutputStream** $tmp671 = &param0->importStream;
*$tmp671 = $tmp668;
// line 196
frost$collections$HashSet** $tmp672 = &param0->typeImports;
frost$collections$HashSet* $tmp673 = *$tmp672;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$collections$HashSet** $tmp674 = &param0->imports;
frost$collections$HashSet* $tmp675 = *$tmp674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$collections$HashSet** $tmp676 = &param0->imports;
*$tmp676 = $tmp673;
// line 197
frost$io$IndentedOutputStream** $tmp677 = &param0->types;
frost$io$IndentedOutputStream* $tmp678 = *$tmp677;
frost$core$String** $tmp679 = &param1->name;
frost$core$String* $tmp680 = *$tmp679;
frost$core$String* $tmp681 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp680);
frost$core$String* $tmp682 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s683, $tmp681);
frost$core$String* $tmp684 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp682, &$s685);
$fn687 $tmp686 = ($fn687) ((frost$io$OutputStream*) $tmp678)->$class->vtable[19];
frost$core$Error* $tmp688 = $tmp686(((frost$io$OutputStream*) $tmp678), $tmp684);
// try error check
if ($tmp688 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local0) = $tmp688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($363:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($361:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($359:frost.core.String)
frost$io$File* $tmp689 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp690 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($363:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($361:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($359:frost.core.String)
// line 198
frost$io$IndentedOutputStream** $tmp691 = &param0->types;
frost$io$IndentedOutputStream* $tmp692 = *$tmp691;
frost$core$Int64* $tmp693 = &$tmp692->level;
frost$core$Int64 $tmp694 = *$tmp693;
frost$core$Int64 $tmp695 = (frost$core$Int64) {1};
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695.value;
int64_t $tmp698 = $tmp696 + $tmp697;
frost$core$Int64 $tmp699 = (frost$core$Int64) {$tmp698};
frost$core$Int64* $tmp700 = &$tmp692->level;
*$tmp700 = $tmp699;
// line 199
frost$core$Weak** $tmp701 = &param0->compiler;
frost$core$Weak* $tmp702 = *$tmp701;
frost$core$Object* $tmp703 = frost$core$Weak$get$R$frost$core$Weak$T($tmp702);
frost$core$Bit $tmp704 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp703) != NULL);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp706 = (frost$core$Int64) {199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s707, $tmp706, &$s708);
abort(); // unreachable
block21:;
frost$collections$ListView* $tmp709 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp703), param1);
ITable* $tmp710 = ((frost$collections$Iterable*) $tmp709)->$class->itable;
while ($tmp710->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp710 = $tmp710->next;
}
$fn712 $tmp711 = $tmp710->methods[0];
frost$collections$Iterator* $tmp713 = $tmp711(((frost$collections$Iterable*) $tmp709));
goto block23;
block23:;
ITable* $tmp714 = $tmp713->$class->itable;
while ($tmp714->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp714 = $tmp714->next;
}
$fn716 $tmp715 = $tmp714->methods[0];
frost$core$Bit $tmp717 = $tmp715($tmp713);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block25; else goto block24;
block24:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp719 = $tmp713->$class->itable;
while ($tmp719->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp719 = $tmp719->next;
}
$fn721 $tmp720 = $tmp719->methods[1];
frost$core$Object* $tmp722 = $tmp720($tmp713);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp722)));
org$frostlang$frostc$FieldDecl* $tmp723 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp722);
// line 200
frost$core$Weak** $tmp724 = &param0->compiler;
frost$core$Weak* $tmp725 = *$tmp724;
frost$core$Object* $tmp726 = frost$core$Weak$get$R$frost$core$Weak$T($tmp725);
frost$core$Bit $tmp727 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp726) != NULL);
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp729 = (frost$core$Int64) {200};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s730, $tmp729, &$s731);
abort(); // unreachable
block26:;
org$frostlang$frostc$FieldDecl* $tmp732 = *(&local3);
frost$core$Bit $tmp733 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp726), $tmp732);
frost$core$Frost$unref$frost$core$Object$Q($tmp726);
// unreffing REF($458:frost.core.Weak.T)
// line 201
org$frostlang$frostc$FieldDecl* $tmp734 = *(&local3);
org$frostlang$frostc$Type** $tmp735 = &$tmp734->type;
org$frostlang$frostc$Type* $tmp736 = *$tmp735;
org$frostlang$frostc$Type* $tmp737 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp738 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp736, $tmp737);
bool $tmp739 = $tmp738.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// unreffing REF($477:org.frostlang.frostc.Type)
if ($tmp739) goto block28; else goto block30;
block28:;
// line 202
frost$io$IndentedOutputStream** $tmp740 = &param0->types;
frost$io$IndentedOutputStream* $tmp741 = *$tmp740;
org$frostlang$frostc$FieldDecl* $tmp742 = *(&local3);
frost$core$String** $tmp743 = &((org$frostlang$frostc$Symbol*) $tmp742)->name;
frost$core$String* $tmp744 = *$tmp743;
frost$core$String* $tmp745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s746, $tmp744);
frost$core$String* $tmp747 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp745, &$s748);
org$frostlang$frostc$LLVMCodeGenerator** $tmp749 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp750 = *$tmp749;
frost$core$Int64 $tmp751 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp750, param1);
frost$core$Int64$wrapper* $tmp752;
$tmp752 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp752->value = $tmp751;
frost$core$String* $tmp753 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp747, ((frost$core$Object*) $tmp752));
frost$core$String* $tmp754 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp753, &$s755);
$fn757 $tmp756 = ($fn757) ((frost$io$OutputStream*) $tmp741)->$class->vtable[19];
frost$core$Error* $tmp758 = $tmp756(((frost$io$OutputStream*) $tmp741), $tmp754);
// try error check
if ($tmp758 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local0) = $tmp758;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// unreffing REF($501:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// unreffing REF($498:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($497:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing REF($492:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp722);
// unreffing REF($446:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp759 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($435:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// unreffing REF($431:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp703);
// unreffing REF($421:frost.core.Weak.T)
frost$io$File* $tmp760 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp761 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// unreffing REF($501:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// unreffing REF($498:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($497:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing REF($492:frost.core.String)
goto block29;
block30:;
// line 1
// line 205
frost$io$IndentedOutputStream** $tmp762 = &param0->types;
frost$io$IndentedOutputStream* $tmp763 = *$tmp762;
org$frostlang$frostc$FieldDecl* $tmp764 = *(&local3);
org$frostlang$frostc$Type** $tmp765 = &$tmp764->type;
org$frostlang$frostc$Type* $tmp766 = *$tmp765;
frost$core$String* $tmp767 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp766);
frost$core$String* $tmp768 = frost$core$String$convert$R$frost$core$String($tmp767);
frost$core$String* $tmp769 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp768, &$s770);
org$frostlang$frostc$FieldDecl* $tmp771 = *(&local3);
frost$core$String** $tmp772 = &((org$frostlang$frostc$Symbol*) $tmp771)->name;
frost$core$String* $tmp773 = *$tmp772;
frost$core$String* $tmp774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp769, $tmp773);
frost$core$String* $tmp775 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp774, &$s776);
$fn778 $tmp777 = ($fn778) ((frost$io$OutputStream*) $tmp763)->$class->vtable[19];
frost$core$Error* $tmp779 = $tmp777(((frost$io$OutputStream*) $tmp763), $tmp775);
// try error check
if ($tmp779 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local0) = $tmp779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// unreffing REF($591:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing REF($589:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing REF($588:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing REF($583:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
// unreffing REF($582:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing REF($581:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp722);
// unreffing REF($446:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp780 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($435:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// unreffing REF($431:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp703);
// unreffing REF($421:frost.core.Weak.T)
frost$io$File* $tmp781 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp782 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// unreffing REF($591:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing REF($589:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing REF($588:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing REF($583:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
// unreffing REF($582:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing REF($581:frost.core.String)
goto block29;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp722);
// unreffing REF($446:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp783 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block23;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($435:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// unreffing REF($431:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp703);
// unreffing REF($421:frost.core.Weak.T)
// line 208
frost$core$String** $tmp784 = &param1->name;
frost$core$String* $tmp785 = *$tmp784;
frost$core$Bit $tmp786 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp785, &$s787);
bool $tmp788 = $tmp786.value;
if ($tmp788) goto block35; else goto block36;
block35:;
// line 209
frost$io$IndentedOutputStream** $tmp789 = &param0->types;
frost$io$IndentedOutputStream* $tmp790 = *$tmp789;
$fn792 $tmp791 = ($fn792) ((frost$io$OutputStream*) $tmp790)->$class->vtable[19];
frost$core$Error* $tmp793 = $tmp791(((frost$io$OutputStream*) $tmp790), &$s794);
// try error check
if ($tmp793 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local0) = $tmp793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($692:frost.core.Error?)
frost$io$File* $tmp795 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($692:frost.core.Error?)
// line 210
frost$io$IndentedOutputStream** $tmp797 = &param0->types;
frost$io$IndentedOutputStream* $tmp798 = *$tmp797;
$fn800 $tmp799 = ($fn800) ((frost$io$OutputStream*) $tmp798)->$class->vtable[19];
frost$core$Error* $tmp801 = $tmp799(((frost$io$OutputStream*) $tmp798), &$s802);
// try error check
if ($tmp801 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local0) = $tmp801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// unreffing REF($721:frost.core.Error?)
frost$io$File* $tmp803 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp804 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// unreffing REF($721:frost.core.Error?)
goto block36;
block36:;
// line 212
frost$io$IndentedOutputStream** $tmp805 = &param0->types;
frost$io$IndentedOutputStream* $tmp806 = *$tmp805;
frost$core$Int64* $tmp807 = &$tmp806->level;
frost$core$Int64 $tmp808 = *$tmp807;
frost$core$Int64 $tmp809 = (frost$core$Int64) {1};
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809.value;
int64_t $tmp812 = $tmp810 - $tmp811;
frost$core$Int64 $tmp813 = (frost$core$Int64) {$tmp812};
frost$core$Int64* $tmp814 = &$tmp806->level;
*$tmp814 = $tmp813;
// line 213
frost$io$IndentedOutputStream** $tmp815 = &param0->types;
frost$io$IndentedOutputStream* $tmp816 = *$tmp815;
frost$core$String** $tmp817 = &param1->name;
frost$core$String* $tmp818 = *$tmp817;
frost$core$String* $tmp819 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp818);
frost$core$String* $tmp820 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s821, $tmp819);
frost$core$String* $tmp822 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp820, &$s823);
$fn825 $tmp824 = ($fn825) ((frost$io$OutputStream*) $tmp816)->$class->vtable[19];
frost$core$Error* $tmp826 = $tmp824(((frost$io$OutputStream*) $tmp816), $tmp822);
// try error check
if ($tmp826 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local0) = $tmp826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing REF($768:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($766:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// unreffing REF($765:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing REF($764:frost.core.String)
frost$io$File* $tmp827 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp828 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing REF($768:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($766:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// unreffing REF($765:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing REF($764:frost.core.String)
// line 214
frost$io$IndentedOutputStream** $tmp829 = &param0->types;
frost$io$IndentedOutputStream* $tmp830 = *$tmp829;
$fn832 $tmp831 = ($fn832) ((frost$io$OutputStream*) $tmp830)->$class->vtable[19];
frost$core$Error* $tmp833 = $tmp831(((frost$io$OutputStream*) $tmp830), &$s834);
// try error check
if ($tmp833 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local0) = $tmp833;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing REF($815:frost.core.Error?)
frost$io$File* $tmp835 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp836 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing REF($815:frost.core.Error?)
// line 215
frost$io$IndentedOutputStream** $tmp837 = &param0->types;
frost$io$IndentedOutputStream* $tmp838 = *$tmp837;
org$frostlang$frostc$Type* $tmp839 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp840 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp839);
frost$core$String* $tmp841 = frost$core$String$convert$R$frost$core$String($tmp840);
frost$core$String* $tmp842 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp841, &$s843);
org$frostlang$frostc$Type* $tmp844 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp845 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp844);
frost$core$String* $tmp846 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp842, $tmp845);
frost$core$String* $tmp847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp846, &$s848);
frost$core$String* $tmp849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s850, $tmp847);
frost$core$Weak** $tmp851 = &param0->compiler;
frost$core$Weak* $tmp852 = *$tmp851;
frost$core$Object* $tmp853 = frost$core$Weak$get$R$frost$core$Weak$T($tmp852);
frost$core$Bit $tmp854 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp853) != NULL);
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp856 = (frost$core$Int64) {217};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s857, $tmp856, &$s858);
abort(); // unreachable
block45:;
frost$collections$ListView* $tmp859 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp853), param1);
ITable* $tmp860 = ((frost$collections$CollectionView*) $tmp859)->$class->itable;
while ($tmp860->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp860 = $tmp860->next;
}
$fn862 $tmp861 = $tmp860->methods[0];
frost$core$Int64 $tmp863 = $tmp861(((frost$collections$CollectionView*) $tmp859));
frost$core$Int64$wrapper* $tmp864;
$tmp864 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp864->value = $tmp863;
frost$core$String* $tmp865 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s866, ((frost$core$Object*) $tmp864));
frost$core$String* $tmp867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp865, &$s868);
frost$core$String* $tmp869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp849, $tmp867);
frost$core$String** $tmp870 = &param1->name;
frost$core$String* $tmp871 = *$tmp870;
frost$core$String* $tmp872 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp871);
frost$core$String* $tmp873 = frost$core$String$convert$R$frost$core$String($tmp872);
frost$core$String* $tmp874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp873, &$s875);
frost$core$String* $tmp876 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp869, $tmp874);
$fn878 $tmp877 = ($fn878) ((frost$io$OutputStream*) $tmp838)->$class->vtable[19];
frost$core$Error* $tmp879 = $tmp877(((frost$io$OutputStream*) $tmp838), $tmp876);
// try error check
if ($tmp879 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local0) = $tmp879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing REF($880:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// unreffing REF($878:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// unreffing REF($877:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
// unreffing REF($876:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($875:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing REF($872:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing REF($871:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// unreffing REF($870:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// unreffing REF($869:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($865:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp853);
// unreffing REF($855:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing REF($851:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing REF($850:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing REF($849:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing REF($848:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($847:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($846:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing REF($845:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing REF($844:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($843:org.frostlang.frostc.Type)
frost$io$File* $tmp880 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp881 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing REF($880:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// unreffing REF($878:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// unreffing REF($877:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
// unreffing REF($876:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($875:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing REF($872:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing REF($871:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// unreffing REF($870:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// unreffing REF($869:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($865:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp853);
// unreffing REF($855:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing REF($851:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing REF($850:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing REF($849:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing REF($848:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($847:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($846:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing REF($845:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing REF($844:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($843:org.frostlang.frostc.Type)
// line 219
frost$io$IndentedOutputStream** $tmp882 = &param0->types;
frost$io$IndentedOutputStream* $tmp883 = *$tmp882;
frost$core$String** $tmp884 = &param1->name;
frost$core$String* $tmp885 = *$tmp884;
frost$core$String* $tmp886 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp885);
frost$core$String* $tmp887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s888, $tmp886);
frost$core$String* $tmp889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp887, &$s890);
frost$core$String** $tmp891 = &param1->name;
frost$core$String* $tmp892 = *$tmp891;
frost$core$String* $tmp893 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp892);
frost$core$String* $tmp894 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp889, $tmp893);
frost$core$String* $tmp895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp894, &$s896);
$fn898 $tmp897 = ($fn898) ((frost$io$OutputStream*) $tmp883)->$class->vtable[19];
frost$core$Error* $tmp899 = $tmp897(((frost$io$OutputStream*) $tmp883), $tmp895);
// try error check
if ($tmp899 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local0) = $tmp899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing REF($1033:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing REF($1031:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// unreffing REF($1030:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing REF($1029:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing REF($1026:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing REF($1025:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing REF($1024:frost.core.String)
frost$io$File* $tmp900 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp901 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing REF($1033:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing REF($1031:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// unreffing REF($1030:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing REF($1029:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing REF($1026:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing REF($1025:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing REF($1024:frost.core.String)
// line 220
frost$core$Weak** $tmp902 = &param0->compiler;
frost$core$Weak* $tmp903 = *$tmp902;
frost$core$Object* $tmp904 = frost$core$Weak$get$R$frost$core$Weak$T($tmp903);
frost$core$Bit $tmp905 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp904) != NULL);
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp907 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s908, $tmp907, &$s909);
abort(); // unreachable
block53:;
frost$core$Bit $tmp910 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp904), param1);
bool $tmp911 = $tmp910.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp904);
// unreffing REF($1097:frost.core.Weak.T)
if ($tmp911) goto block51; else goto block52;
block51:;
// line 221
frost$io$IndentedOutputStream** $tmp912 = &param0->types;
frost$io$IndentedOutputStream* $tmp913 = *$tmp912;
frost$core$String** $tmp914 = &param1->name;
frost$core$String* $tmp915 = *$tmp914;
frost$core$String* $tmp916 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp915);
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s918, $tmp916);
frost$core$String* $tmp919 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp917, &$s920);
$fn922 $tmp921 = ($fn922) ((frost$io$OutputStream*) $tmp913)->$class->vtable[19];
frost$core$Error* $tmp923 = $tmp921(((frost$io$OutputStream*) $tmp913), $tmp919);
// try error check
if ($tmp923 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local0) = $tmp923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// unreffing REF($1124:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing REF($1122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing REF($1121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// unreffing REF($1120:frost.core.String)
frost$io$File* $tmp924 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp925 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// unreffing REF($1124:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing REF($1122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing REF($1121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// unreffing REF($1120:frost.core.String)
// line 222
frost$io$IndentedOutputStream** $tmp926 = &param0->types;
frost$io$IndentedOutputStream* $tmp927 = *$tmp926;
frost$core$Int64* $tmp928 = &$tmp927->level;
frost$core$Int64 $tmp929 = *$tmp928;
frost$core$Int64 $tmp930 = (frost$core$Int64) {1};
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930.value;
int64_t $tmp933 = $tmp931 + $tmp932;
frost$core$Int64 $tmp934 = (frost$core$Int64) {$tmp933};
frost$core$Int64* $tmp935 = &$tmp927->level;
*$tmp935 = $tmp934;
// line 223
frost$io$IndentedOutputStream** $tmp936 = &param0->types;
frost$io$IndentedOutputStream* $tmp937 = *$tmp936;
$fn939 $tmp938 = ($fn939) ((frost$io$OutputStream*) $tmp937)->$class->vtable[19];
frost$core$Error* $tmp940 = $tmp938(((frost$io$OutputStream*) $tmp937), &$s941);
// try error check
if ($tmp940 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
*(&local0) = $tmp940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing REF($1183:frost.core.Error?)
frost$io$File* $tmp942 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp943 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing REF($1183:frost.core.Error?)
// line 224
frost$io$IndentedOutputStream** $tmp944 = &param0->types;
frost$io$IndentedOutputStream* $tmp945 = *$tmp944;
$fn947 $tmp946 = ($fn947) ((frost$io$OutputStream*) $tmp945)->$class->vtable[19];
frost$core$Error* $tmp948 = $tmp946(((frost$io$OutputStream*) $tmp945), &$s949);
// try error check
if ($tmp948 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
*(&local0) = $tmp948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// unreffing REF($1212:frost.core.Error?)
frost$io$File* $tmp950 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp951 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// unreffing REF($1212:frost.core.Error?)
// line 225
frost$io$IndentedOutputStream** $tmp952 = &param0->types;
frost$io$IndentedOutputStream* $tmp953 = *$tmp952;
org$frostlang$frostc$Type** $tmp954 = &param1->type;
org$frostlang$frostc$Type* $tmp955 = *$tmp954;
frost$core$String* $tmp956 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp955);
frost$core$String* $tmp957 = frost$core$String$convert$R$frost$core$String($tmp956);
frost$core$String* $tmp958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp957, &$s959);
$fn961 $tmp960 = ($fn961) ((frost$io$OutputStream*) $tmp953)->$class->vtable[19];
frost$core$Error* $tmp962 = $tmp960(((frost$io$OutputStream*) $tmp953), $tmp958);
// try error check
if ($tmp962 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local0) = $tmp962;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
// unreffing REF($1246:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($1244:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($1243:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($1242:frost.core.String)
frost$io$File* $tmp963 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp964 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
// unreffing REF($1246:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($1244:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($1243:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($1242:frost.core.String)
// line 226
frost$io$IndentedOutputStream** $tmp965 = &param0->types;
frost$io$IndentedOutputStream* $tmp966 = *$tmp965;
frost$core$Int64* $tmp967 = &$tmp966->level;
frost$core$Int64 $tmp968 = *$tmp967;
frost$core$Int64 $tmp969 = (frost$core$Int64) {1};
int64_t $tmp970 = $tmp968.value;
int64_t $tmp971 = $tmp969.value;
int64_t $tmp972 = $tmp970 - $tmp971;
frost$core$Int64 $tmp973 = (frost$core$Int64) {$tmp972};
frost$core$Int64* $tmp974 = &$tmp966->level;
*$tmp974 = $tmp973;
// line 227
frost$io$IndentedOutputStream** $tmp975 = &param0->types;
frost$io$IndentedOutputStream* $tmp976 = *$tmp975;
frost$core$String** $tmp977 = &param1->name;
frost$core$String* $tmp978 = *$tmp977;
frost$core$String* $tmp979 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp978);
frost$core$String* $tmp980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s981, $tmp979);
frost$core$String* $tmp982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp980, &$s983);
$fn985 $tmp984 = ($fn985) ((frost$io$OutputStream*) $tmp976)->$class->vtable[19];
frost$core$Error* $tmp986 = $tmp984(((frost$io$OutputStream*) $tmp976), $tmp982);
// try error check
if ($tmp986 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local0) = $tmp986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing REF($1310:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing REF($1308:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// unreffing REF($1307:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// unreffing REF($1306:frost.core.String)
frost$io$File* $tmp987 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp988 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing REF($1310:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing REF($1308:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// unreffing REF($1307:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// unreffing REF($1306:frost.core.String)
// line 228
frost$io$IndentedOutputStream** $tmp989 = &param0->types;
frost$io$IndentedOutputStream* $tmp990 = *$tmp989;
frost$core$String** $tmp991 = &param1->name;
frost$core$String* $tmp992 = *$tmp991;
frost$core$String* $tmp993 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp992);
frost$core$String* $tmp994 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s995, $tmp993);
frost$core$String* $tmp996 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp994, &$s997);
$fn999 $tmp998 = ($fn999) ((frost$io$OutputStream*) $tmp990)->$class->vtable[19];
frost$core$Error* $tmp1000 = $tmp998(((frost$io$OutputStream*) $tmp990), $tmp996);
// try error check
if ($tmp1000 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local0) = $tmp1000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
// unreffing REF($1362:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing REF($1360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
// unreffing REF($1359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing REF($1358:frost.core.String)
frost$io$File* $tmp1001 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1002 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
// unreffing REF($1362:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing REF($1360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
// unreffing REF($1359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing REF($1358:frost.core.String)
// line 229
frost$io$IndentedOutputStream** $tmp1003 = &param0->types;
frost$io$IndentedOutputStream* $tmp1004 = *$tmp1003;
frost$core$Int64* $tmp1005 = &$tmp1004->level;
frost$core$Int64 $tmp1006 = *$tmp1005;
frost$core$Int64 $tmp1007 = (frost$core$Int64) {1};
int64_t $tmp1008 = $tmp1006.value;
int64_t $tmp1009 = $tmp1007.value;
int64_t $tmp1010 = $tmp1008 + $tmp1009;
frost$core$Int64 $tmp1011 = (frost$core$Int64) {$tmp1010};
frost$core$Int64* $tmp1012 = &$tmp1004->level;
*$tmp1012 = $tmp1011;
// line 230
frost$io$IndentedOutputStream** $tmp1013 = &param0->types;
frost$io$IndentedOutputStream* $tmp1014 = *$tmp1013;
frost$core$String** $tmp1015 = &param1->name;
frost$core$String* $tmp1016 = *$tmp1015;
frost$core$String* $tmp1017 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1016);
frost$core$String* $tmp1018 = frost$core$String$convert$R$frost$core$String($tmp1017);
frost$core$String* $tmp1019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1018, &$s1020);
$fn1022 $tmp1021 = ($fn1022) ((frost$io$OutputStream*) $tmp1014)->$class->vtable[19];
frost$core$Error* $tmp1023 = $tmp1021(((frost$io$OutputStream*) $tmp1014), $tmp1019);
// try error check
if ($tmp1023 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local0) = $tmp1023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// unreffing REF($1426:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing REF($1424:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($1423:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing REF($1422:frost.core.String)
frost$io$File* $tmp1024 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1025 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// unreffing REF($1426:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing REF($1424:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($1423:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing REF($1422:frost.core.String)
// line 231
frost$io$IndentedOutputStream** $tmp1026 = &param0->types;
frost$io$IndentedOutputStream* $tmp1027 = *$tmp1026;
$fn1029 $tmp1028 = ($fn1029) ((frost$io$OutputStream*) $tmp1027)->$class->vtable[19];
frost$core$Error* $tmp1030 = $tmp1028(((frost$io$OutputStream*) $tmp1027), &$s1031);
// try error check
if ($tmp1030 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local0) = $tmp1030;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing REF($1473:frost.core.Error?)
frost$io$File* $tmp1032 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1033 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing REF($1473:frost.core.Error?)
// line 232
frost$io$IndentedOutputStream** $tmp1034 = &param0->types;
frost$io$IndentedOutputStream* $tmp1035 = *$tmp1034;
frost$core$Int64* $tmp1036 = &$tmp1035->level;
frost$core$Int64 $tmp1037 = *$tmp1036;
frost$core$Int64 $tmp1038 = (frost$core$Int64) {1};
int64_t $tmp1039 = $tmp1037.value;
int64_t $tmp1040 = $tmp1038.value;
int64_t $tmp1041 = $tmp1039 - $tmp1040;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {$tmp1041};
frost$core$Int64* $tmp1043 = &$tmp1035->level;
*$tmp1043 = $tmp1042;
// line 233
frost$io$IndentedOutputStream** $tmp1044 = &param0->types;
frost$io$IndentedOutputStream* $tmp1045 = *$tmp1044;
frost$core$String** $tmp1046 = &param1->name;
frost$core$String* $tmp1047 = *$tmp1046;
frost$core$String* $tmp1048 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1047);
frost$core$String* $tmp1049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1050, $tmp1048);
frost$core$String* $tmp1051 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1049, &$s1052);
$fn1054 $tmp1053 = ($fn1054) ((frost$io$OutputStream*) $tmp1045)->$class->vtable[19];
frost$core$Error* $tmp1055 = $tmp1053(((frost$io$OutputStream*) $tmp1045), $tmp1051);
// try error check
if ($tmp1055 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local0) = $tmp1055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing REF($1519:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// unreffing REF($1517:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
// unreffing REF($1516:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
// unreffing REF($1515:frost.core.String)
frost$io$File* $tmp1056 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1057 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing REF($1519:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// unreffing REF($1517:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
// unreffing REF($1516:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
// unreffing REF($1515:frost.core.String)
// line 234
frost$core$Weak** $tmp1058 = &param0->compiler;
frost$core$Weak* $tmp1059 = *$tmp1058;
frost$core$Object* $tmp1060 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1059);
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1060) != NULL);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp1063 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1064, $tmp1063, &$s1065);
abort(); // unreachable
block73:;
org$frostlang$frostc$Type* $tmp1066 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp1067 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1060), $tmp1066);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
org$frostlang$frostc$ClassDecl* $tmp1068 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local4) = $tmp1067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
// unreffing REF($1576:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// unreffing REF($1575:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1060);
// unreffing REF($1565:frost.core.Weak.T)
// line 235
frost$core$Weak** $tmp1069 = &param0->compiler;
frost$core$Weak* $tmp1070 = *$tmp1069;
frost$core$Object* $tmp1071 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1070);
frost$core$Bit $tmp1072 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1071) != NULL);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp1074 = (frost$core$Int64) {235};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1075, $tmp1074, &$s1076);
abort(); // unreachable
block75:;
org$frostlang$frostc$ClassDecl* $tmp1077 = *(&local4);
frost$core$Bit $tmp1078 = frost$core$Bit$init$builtin_bit($tmp1077 != NULL);
bool $tmp1079 = $tmp1078.value;
if ($tmp1079) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1080 = (frost$core$Int64) {235};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1081, $tmp1080, &$s1082);
abort(); // unreachable
block77:;
frost$collections$ListView* $tmp1083 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1071), $tmp1077);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$collections$ListView* $tmp1084 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local5) = $tmp1083;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
// unreffing REF($1616:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
// unreffing REF($1597:frost.core.Weak.T)
// line 236
frost$io$IndentedOutputStream** $tmp1085 = &param0->types;
frost$io$IndentedOutputStream* $tmp1086 = *$tmp1085;
frost$collections$ListView* $tmp1087 = *(&local5);
ITable* $tmp1088 = ((frost$collections$CollectionView*) $tmp1087)->$class->itable;
while ($tmp1088->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1088 = $tmp1088->next;
}
$fn1090 $tmp1089 = $tmp1088->methods[0];
frost$core$Int64 $tmp1091 = $tmp1089(((frost$collections$CollectionView*) $tmp1087));
frost$core$Int64$wrapper* $tmp1092;
$tmp1092 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1092->value = $tmp1091;
frost$core$String* $tmp1093 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1094, ((frost$core$Object*) $tmp1092));
frost$core$String* $tmp1095 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1093, &$s1096);
frost$core$String* $tmp1097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1098, $tmp1095);
frost$core$String** $tmp1099 = &param1->name;
frost$core$String* $tmp1100 = *$tmp1099;
frost$core$String* $tmp1101 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1100);
frost$core$String* $tmp1102 = frost$core$String$convert$R$frost$core$String($tmp1101);
frost$core$String* $tmp1103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1102, &$s1104);
frost$core$String* $tmp1105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1097, $tmp1103);
$fn1107 $tmp1106 = ($fn1107) ((frost$io$OutputStream*) $tmp1086)->$class->vtable[19];
frost$core$Error* $tmp1108 = $tmp1106(((frost$io$OutputStream*) $tmp1086), $tmp1105);
// try error check
if ($tmp1108 == NULL) goto block79; else goto block80;
block80:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local0) = $tmp1108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// unreffing REF($1649:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
// unreffing REF($1647:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// unreffing REF($1646:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
// unreffing REF($1645:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($1644:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
// unreffing REF($1641:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
// unreffing REF($1640:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// unreffing REF($1639:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing REF($1638:frost.core.Object)
frost$collections$ListView* $tmp1109 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1110 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1111 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1112 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// unreffing REF($1649:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
// unreffing REF($1647:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// unreffing REF($1646:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
// unreffing REF($1645:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($1644:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
// unreffing REF($1641:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
// unreffing REF($1640:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// unreffing REF($1639:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing REF($1638:frost.core.Object)
// line 240
frost$io$IndentedOutputStream** $tmp1113 = &param0->types;
frost$io$IndentedOutputStream* $tmp1114 = *$tmp1113;
frost$core$String** $tmp1115 = &param1->name;
frost$core$String* $tmp1116 = *$tmp1115;
frost$core$String* $tmp1117 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1116);
frost$core$String* $tmp1118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1119, $tmp1117);
frost$core$String* $tmp1120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1118, &$s1121);
frost$core$String** $tmp1122 = &param1->name;
frost$core$String* $tmp1123 = *$tmp1122;
frost$core$String* $tmp1124 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1123);
frost$core$String* $tmp1125 = frost$core$String$convert$R$frost$core$String($tmp1124);
frost$core$String* $tmp1126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1125, &$s1127);
frost$core$String* $tmp1128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1120, $tmp1126);
$fn1130 $tmp1129 = ($fn1130) ((frost$io$OutputStream*) $tmp1114)->$class->vtable[19];
frost$core$Error* $tmp1131 = $tmp1129(((frost$io$OutputStream*) $tmp1114), $tmp1128);
// try error check
if ($tmp1131 == NULL) goto block81; else goto block82;
block82:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local0) = $tmp1131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// unreffing REF($1747:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
// unreffing REF($1745:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// unreffing REF($1744:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// unreffing REF($1743:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
// unreffing REF($1742:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
// unreffing REF($1739:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
// unreffing REF($1738:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
// unreffing REF($1737:frost.core.String)
frost$collections$ListView* $tmp1132 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1133 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1134 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1135 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block81:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// unreffing REF($1747:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
// unreffing REF($1745:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// unreffing REF($1744:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// unreffing REF($1743:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
// unreffing REF($1742:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
// unreffing REF($1739:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
// unreffing REF($1738:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
// unreffing REF($1737:frost.core.String)
frost$collections$ListView* $tmp1136 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1137 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block52;
block52:;
frost$io$File* $tmp1138 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 245
frost$core$Weak** $tmp1140 = &param0->compiler;
frost$core$Weak* $tmp1141 = *$tmp1140;
frost$core$Object* $tmp1142 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1141);
frost$core$Bit $tmp1143 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1142) != NULL);
bool $tmp1144 = $tmp1143.value;
if ($tmp1144) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp1145 = (frost$core$Int64) {245};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1146, $tmp1145, &$s1147);
abort(); // unreachable
block83:;
org$frostlang$frostc$Position* $tmp1148 = &param1->position;
org$frostlang$frostc$Position $tmp1149 = *$tmp1148;
frost$core$Error* $tmp1150 = *(&local0);
frost$core$String** $tmp1151 = &$tmp1150->message;
frost$core$String* $tmp1152 = *$tmp1151;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1142), $tmp1149, $tmp1152);
frost$core$Frost$unref$frost$core$Object$Q($tmp1142);
// unreffing REF($1849:frost.core.Weak.T)
goto block2;
block2:;
frost$core$Error* $tmp1153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
// line 250
frost$core$Weak** $tmp1154 = &param1->owner;
frost$core$Weak* $tmp1155 = *$tmp1154;
frost$core$Object* $tmp1156 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1155);
org$frostlang$frostc$Type** $tmp1157 = &((org$frostlang$frostc$ClassDecl*) $tmp1156)->type;
org$frostlang$frostc$Type* $tmp1158 = *$tmp1157;
frost$core$String* $tmp1159 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1158);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$String* $tmp1160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local0) = $tmp1159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1156);
// unreffing REF($4:frost.core.Weak.T)
// line 251
org$frostlang$frostc$MethodDecl$Kind* $tmp1161 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1162 = *$tmp1161;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1163;
$tmp1163 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1163->value = $tmp1162;
frost$core$Int64 $tmp1164 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1165 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1164);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1166;
$tmp1166 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1166->value = $tmp1165;
ITable* $tmp1167 = ((frost$core$Equatable*) $tmp1163)->$class->itable;
while ($tmp1167->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1167 = $tmp1167->next;
}
$fn1169 $tmp1168 = $tmp1167->methods[0];
frost$core$Bit $tmp1170 = $tmp1168(((frost$core$Equatable*) $tmp1163), ((frost$core$Equatable*) $tmp1166));
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block3; else goto block4;
block3:;
frost$core$String* $tmp1172 = *(&local0);
frost$core$Bit $tmp1173 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1172, &$s1174);
frost$core$Bit $tmp1175 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1173);
*(&local1) = $tmp1175;
goto block5;
block4:;
*(&local1) = $tmp1170;
goto block5;
block5:;
frost$core$Bit $tmp1176 = *(&local1);
bool $tmp1177 = $tmp1176.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1166)));
// unreffing REF($29:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1163)));
// unreffing REF($25:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1177) goto block1; else goto block2;
block1:;
// line 252
frost$core$String* $tmp1178 = *(&local0);
frost$core$String* $tmp1179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1178, &$s1180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
// unreffing REF($52:frost.core.String)
frost$core$String* $tmp1181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1179;
block2:;
// line 254
frost$core$String* $tmp1182 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$String* $tmp1183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1182;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 274
org$frostlang$frostc$Type** $tmp1184 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1185 = *$tmp1184;
frost$core$Bit $tmp1186 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1185);
frost$core$Bit $tmp1187 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1186);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block1; else goto block2;
block1:;
// line 275
frost$core$Bit $tmp1189 = frost$core$Bit$init$builtin_bit(false);
return $tmp1189;
block2:;
// line 277
org$frostlang$frostc$Annotations** $tmp1190 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1191 = *$tmp1190;
frost$core$Bit $tmp1192 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1191);
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1194 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1195 = *$tmp1194;
frost$core$Bit $tmp1196 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1195);
*(&local1) = $tmp1196;
goto block5;
block4:;
*(&local1) = $tmp1192;
goto block5;
block5:;
frost$core$Bit $tmp1197 = *(&local1);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1199 = &param0->compiler;
frost$core$Weak* $tmp1200 = *$tmp1199;
frost$core$Object* $tmp1201 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1200);
frost$core$Bit $tmp1202 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1201) != NULL);
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1204 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1205, $tmp1204, &$s1206);
abort(); // unreachable
block9:;
frost$core$Weak** $tmp1207 = &param0->compiler;
frost$core$Weak* $tmp1208 = *$tmp1207;
frost$core$Object* $tmp1209 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1208);
frost$core$Bit $tmp1210 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1209) != NULL);
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1212 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1213, $tmp1212, &$s1214);
abort(); // unreachable
block11:;
org$frostlang$frostc$Type** $tmp1215 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1216 = *$tmp1215;
org$frostlang$frostc$ClassDecl* $tmp1217 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1209), $tmp1216);
frost$core$Bit $tmp1218 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1201), $tmp1217);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
// unreffing REF($54:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1209);
// unreffing REF($42:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1201);
// unreffing REF($29:frost.core.Weak.T)
*(&local0) = $tmp1218;
goto block8;
block7:;
*(&local0) = $tmp1197;
goto block8;
block8:;
frost$core$Bit $tmp1219 = *(&local0);
*(&local2) = $tmp1219;
// line 283
frost$core$Bit $tmp1220 = *(&local2);
frost$core$Bit $tmp1221 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1220);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block13; else goto block14;
block13:;
*(&local3) = $tmp1221;
goto block15;
block14:;
org$frostlang$frostc$Annotations** $tmp1223 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1224 = *$tmp1223;
frost$core$Bit $tmp1225 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1224);
frost$core$Bit $tmp1226 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1225);
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1228 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1229 = *$tmp1228;
frost$core$Bit $tmp1230 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1229);
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block19; else goto block20;
block19:;
*(&local5) = $tmp1230;
goto block21;
block20:;
org$frostlang$frostc$Annotations** $tmp1232 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1233 = *$tmp1232;
frost$core$Bit $tmp1234 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1233);
*(&local5) = $tmp1234;
goto block21;
block21:;
frost$core$Bit $tmp1235 = *(&local5);
*(&local4) = $tmp1235;
goto block18;
block17:;
*(&local4) = $tmp1226;
goto block18;
block18:;
frost$core$Bit $tmp1236 = *(&local4);
*(&local3) = $tmp1236;
goto block15;
block15:;
frost$core$Bit $tmp1237 = *(&local3);
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1239 = (frost$core$Int64) {283};
frost$core$String* $tmp1240 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1241 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1242, $tmp1240);
frost$core$String* $tmp1243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1241, &$s1244);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1245, $tmp1239, $tmp1243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing REF($110:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
// unreffing REF($109:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
// unreffing REF($108:frost.core.String)
abort(); // unreachable
block22:;
// line 285
frost$core$Bit $tmp1246 = *(&local2);
return $tmp1246;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
frost$core$String* local3 = NULL;
// line 290
frost$io$MemoryOutputStream** $tmp1247 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1248 = *$tmp1247;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
frost$io$MemoryOutputStream** $tmp1249 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1250 = *$tmp1249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
frost$io$MemoryOutputStream** $tmp1251 = &param0->importStream;
*$tmp1251 = $tmp1248;
// line 291
frost$collections$HashSet** $tmp1252 = &param0->bodyImports;
frost$collections$HashSet* $tmp1253 = *$tmp1252;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$collections$HashSet** $tmp1254 = &param0->imports;
frost$collections$HashSet* $tmp1255 = *$tmp1254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$collections$HashSet** $tmp1256 = &param0->imports;
*$tmp1256 = $tmp1253;
// line 292
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1257));
frost$core$String* $tmp1258 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local0) = &$s1259;
// line 293
frost$core$Bit $tmp1260 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block1; else goto block3;
block1:;
// line 294
frost$io$IndentedOutputStream** $tmp1262 = &param0->body;
frost$io$IndentedOutputStream* $tmp1263 = *$tmp1262;
frost$core$String* $tmp1264 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1266, $tmp1264);
frost$core$String* $tmp1267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1265, &$s1268);
org$frostlang$frostc$Type** $tmp1269 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1270 = *$tmp1269;
frost$core$String* $tmp1271 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1270);
frost$core$String* $tmp1272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1267, $tmp1271);
frost$core$String* $tmp1273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1272, &$s1274);
$fn1276 $tmp1275 = ($fn1276) ((frost$io$OutputStream*) $tmp1263)->$class->vtable[17];
frost$core$Error* $tmp1277 = $tmp1275(((frost$io$OutputStream*) $tmp1263), $tmp1273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// unreffing REF($47:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
// unreffing REF($43:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
// unreffing REF($38:frost.core.String)
// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1278));
frost$core$String* $tmp1279 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local0) = &$s1280;
goto block2;
block3:;
// line 1
// line 298
frost$io$IndentedOutputStream** $tmp1281 = &param0->body;
frost$io$IndentedOutputStream* $tmp1282 = *$tmp1281;
org$frostlang$frostc$Type** $tmp1283 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1284 = *$tmp1283;
frost$core$String* $tmp1285 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1284);
frost$core$String* $tmp1286 = frost$core$String$convert$R$frost$core$String($tmp1285);
frost$core$String* $tmp1287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1286, &$s1288);
frost$core$String* $tmp1289 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1290 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1287, $tmp1289);
frost$core$String* $tmp1291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1290, &$s1292);
$fn1294 $tmp1293 = ($fn1294) ((frost$io$OutputStream*) $tmp1282)->$class->vtable[17];
frost$core$Error* $tmp1295 = $tmp1293(((frost$io$OutputStream*) $tmp1282), $tmp1291);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// unreffing REF($91:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
// unreffing REF($89:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// unreffing REF($88:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// unreffing REF($87:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// unreffing REF($86:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing REF($85:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
// unreffing REF($84:frost.core.String)
goto block2;
block2:;
// line 300
org$frostlang$frostc$Annotations** $tmp1296 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1297 = *$tmp1296;
frost$core$Bit $tmp1298 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1297);
frost$core$Bit $tmp1299 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1298);
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1301 = &param0->compiler;
frost$core$Weak* $tmp1302 = *$tmp1301;
frost$core$Object* $tmp1303 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1302);
frost$core$Bit $tmp1304 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1303) != NULL);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1306 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1307, $tmp1306, &$s1308);
abort(); // unreachable
block9:;
frost$core$Bit $tmp1309 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1303), param1);
frost$core$Bit $tmp1310 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1309);
frost$core$Frost$unref$frost$core$Object$Q($tmp1303);
// unreffing REF($124:frost.core.Weak.T)
*(&local1) = $tmp1310;
goto block8;
block7:;
*(&local1) = $tmp1299;
goto block8;
block8:;
frost$core$Bit $tmp1311 = *(&local1);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block4; else goto block5;
block4:;
// line 301
frost$io$IndentedOutputStream** $tmp1313 = &param0->body;
frost$io$IndentedOutputStream* $tmp1314 = *$tmp1313;
frost$core$String* $tmp1315 = *(&local0);
frost$core$String* $tmp1316 = frost$core$String$convert$R$frost$core$String($tmp1315);
frost$core$String* $tmp1317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1316, &$s1318);
frost$core$String* $tmp1319 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1317, $tmp1319);
frost$core$String* $tmp1321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1320, &$s1322);
$fn1324 $tmp1323 = ($fn1324) ((frost$io$OutputStream*) $tmp1314)->$class->vtable[17];
frost$core$Error* $tmp1325 = $tmp1323(((frost$io$OutputStream*) $tmp1314), $tmp1321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// unreffing REF($157:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// unreffing REF($154:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
// unreffing REF($153:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
// unreffing REF($152:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
// unreffing REF($151:frost.core.String)
// line 302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1326));
frost$core$String* $tmp1327 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local0) = &$s1328;
goto block5;
block5:;
// line 304
frost$collections$Array** $tmp1329 = &param1->parameters;
frost$collections$Array* $tmp1330 = *$tmp1329;
ITable* $tmp1331 = ((frost$collections$Iterable*) $tmp1330)->$class->itable;
while ($tmp1331->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1331 = $tmp1331->next;
}
$fn1333 $tmp1332 = $tmp1331->methods[0];
frost$collections$Iterator* $tmp1334 = $tmp1332(((frost$collections$Iterable*) $tmp1330));
goto block11;
block11:;
ITable* $tmp1335 = $tmp1334->$class->itable;
while ($tmp1335->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1335 = $tmp1335->next;
}
$fn1337 $tmp1336 = $tmp1335->methods[0];
frost$core$Bit $tmp1338 = $tmp1336($tmp1334);
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1340 = $tmp1334->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[1];
frost$core$Object* $tmp1343 = $tmp1341($tmp1334);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1343)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1343);
// line 305
org$frostlang$frostc$MethodDecl$Parameter* $tmp1345 = *(&local2);
frost$core$String** $tmp1346 = &$tmp1345->name;
frost$core$String* $tmp1347 = *$tmp1346;
frost$core$String* $tmp1348 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1347);
frost$core$String* $tmp1349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1350, $tmp1348);
frost$core$String* $tmp1351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1349, &$s1352);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$String* $tmp1353 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local3) = $tmp1351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
// unreffing REF($215:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
// unreffing REF($214:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
// unreffing REF($213:frost.core.String)
// line 306
frost$io$IndentedOutputStream** $tmp1354 = &param0->body;
frost$io$IndentedOutputStream* $tmp1355 = *$tmp1354;
frost$core$String* $tmp1356 = *(&local0);
frost$core$String* $tmp1357 = frost$core$String$convert$R$frost$core$String($tmp1356);
frost$core$String* $tmp1358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1357, &$s1359);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1360 = *(&local2);
org$frostlang$frostc$Type** $tmp1361 = &$tmp1360->type;
org$frostlang$frostc$Type* $tmp1362 = *$tmp1361;
frost$core$String* $tmp1363 = *(&local3);
frost$core$String* $tmp1364 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1362, $tmp1363);
frost$core$String* $tmp1365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1358, $tmp1364);
frost$core$String* $tmp1366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1365, &$s1367);
$fn1369 $tmp1368 = ($fn1369) ((frost$io$OutputStream*) $tmp1355)->$class->vtable[17];
frost$core$Error* $tmp1370 = $tmp1368(((frost$io$OutputStream*) $tmp1355), $tmp1366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// unreffing REF($247:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
// unreffing REF($245:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
// unreffing REF($244:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
// unreffing REF($243:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// unreffing REF($238:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
// unreffing REF($237:frost.core.String)
// line 307
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1371));
frost$core$String* $tmp1372 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local0) = &$s1373;
frost$core$String* $tmp1374 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1343);
// unreffing REF($201:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp1375 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
// unreffing p
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// unreffing REF($190:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 309
frost$io$IndentedOutputStream** $tmp1376 = &param0->body;
frost$io$IndentedOutputStream* $tmp1377 = *$tmp1376;
$fn1379 $tmp1378 = ($fn1379) ((frost$io$OutputStream*) $tmp1377)->$class->vtable[19];
frost$core$Error* $tmp1380 = $tmp1378(((frost$io$OutputStream*) $tmp1377), &$s1381);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
// unreffing REF($295:frost.core.Error?)
frost$core$String* $tmp1382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
// unreffing separator
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

// line 314
org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 319
frost$io$IndentedOutputStream** $tmp1383 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1384 = *$tmp1383;
frost$io$MemoryOutputStream** $tmp1385 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1386 = *$tmp1385;
$fn1388 $tmp1387 = ($fn1388) ((frost$io$OutputStream*) $tmp1384)->$class->vtable[20];
frost$core$Error* $tmp1389 = $tmp1387(((frost$io$OutputStream*) $tmp1384), ((frost$core$Object*) $tmp1386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
// unreffing REF($8:frost.core.Error?)
// line 320
frost$io$IndentedOutputStream** $tmp1390 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1391 = *$tmp1390;
frost$io$MemoryOutputStream** $tmp1392 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1393 = *$tmp1392;
$fn1395 $tmp1394 = ($fn1395) ((frost$io$OutputStream*) $tmp1391)->$class->vtable[20];
frost$core$Error* $tmp1396 = $tmp1394(((frost$io$OutputStream*) $tmp1391), ((frost$core$Object*) $tmp1393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// unreffing REF($20:frost.core.Error?)
// line 321
frost$io$IndentedOutputStream** $tmp1397 = &param0->out;
frost$io$IndentedOutputStream* $tmp1398 = *$tmp1397;
frost$io$MemoryOutputStream** $tmp1399 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1400 = *$tmp1399;
$fn1402 $tmp1401 = ($fn1402) ((frost$io$OutputStream*) $tmp1398)->$class->vtable[20];
frost$core$Error* $tmp1403 = $tmp1401(((frost$io$OutputStream*) $tmp1398), ((frost$core$Object*) $tmp1400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
// unreffing REF($32:frost.core.Error?)
// line 322
frost$io$IndentedOutputStream** $tmp1404 = &param0->out;
frost$io$IndentedOutputStream* $tmp1405 = *$tmp1404;
frost$io$MemoryOutputStream** $tmp1406 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1407 = *$tmp1406;
$fn1409 $tmp1408 = ($fn1409) ((frost$io$OutputStream*) $tmp1405)->$class->vtable[20];
frost$core$Error* $tmp1410 = $tmp1408(((frost$io$OutputStream*) $tmp1405), ((frost$core$Object*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
// unreffing REF($44:frost.core.Error?)
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1411 = &param0->compiler;
frost$core$Weak* $tmp1412 = *$tmp1411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$io$MemoryOutputStream** $tmp1413 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1414 = *$tmp1413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$io$MemoryOutputStream** $tmp1415 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1416 = *$tmp1415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$io$IndentedOutputStream** $tmp1417 = &param0->types;
frost$io$IndentedOutputStream* $tmp1418 = *$tmp1417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
frost$io$MemoryOutputStream** $tmp1419 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1420 = *$tmp1419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$io$MemoryOutputStream** $tmp1421 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1422 = *$tmp1421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$io$IndentedOutputStream** $tmp1423 = &param0->body;
frost$io$IndentedOutputStream* $tmp1424 = *$tmp1423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
frost$collections$HashSet** $tmp1425 = &param0->typeImports;
frost$collections$HashSet* $tmp1426 = *$tmp1425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$collections$HashSet** $tmp1427 = &param0->bodyImports;
frost$collections$HashSet* $tmp1428 = *$tmp1427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$collections$HashSet** $tmp1429 = &param0->imports;
frost$collections$HashSet* $tmp1430 = *$tmp1429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$io$MemoryOutputStream** $tmp1431 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1432 = *$tmp1431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$io$File** $tmp1433 = &param0->outDir;
frost$io$File* $tmp1434 = *$tmp1433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$io$IndentedOutputStream** $tmp1435 = &param0->out;
frost$io$IndentedOutputStream* $tmp1436 = *$tmp1435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$io$IndentedOutputStream** $tmp1437 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1438 = *$tmp1437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1439 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1440 = *$tmp1439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$Weak** $tmp1441 = &param0->cCodeGen;
frost$core$Weak* $tmp1442 = *$tmp1441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
org$frostlang$frostc$CCodeGenerator** $tmp1443 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1444 = *$tmp1443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
return;

}

