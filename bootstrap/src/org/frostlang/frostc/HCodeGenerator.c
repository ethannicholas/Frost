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
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$HCodeGenerator$class_type org$frostlang$frostc$HCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$cleanup, org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$finish} };

typedef void (*$fn243)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn275)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn435)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn468)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn602)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn607)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn618)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn622)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn627)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn649)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn671)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn675)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn680)(frost$collections$Iterator*);
typedef void (*$fn716)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn733)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn743)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn748)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn770)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn774)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn801)(frost$collections$CollectionView*);
typedef void (*$fn817)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn834)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn855)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn869)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn874)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn885)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn906)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn917)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn937)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn941)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn963)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn996)(frost$collections$CollectionView*);
typedef void (*$fn1013)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1031)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1051)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn1158)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1175)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1204)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1212)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1216)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1221)(frost$collections$Iterator*);
typedef void (*$fn1248)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1257)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1265)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1271)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1277)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1283)(frost$io$OutputStream*, frost$core$Object*);

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
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 133, -1550011923375769787, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, 8768873314443410019, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 119, 6369952431726339328, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s1002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1004 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s1010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1028 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };

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
$tmp242(((frost$io$OutputStream*) $tmp232), $tmp240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($208:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($207:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($205:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($204:frost.core.String)
// line 100
frost$collections$HashSet** $tmp244 = &param0->imports;
frost$collections$HashSet* $tmp245 = *$tmp244;
frost$core$String* $tmp246 = *(&local0);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp245, ((frost$collections$Key*) $tmp246));
goto block30;
block30:;
// line 102
frost$core$String* $tmp247 = *(&local0);
frost$core$String* $tmp248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp247, &$s249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($233:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp250 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp251 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp248;
block26:;
// line 104
org$frostlang$frostc$ClassDecl* $tmp252 = *(&local1);
frost$core$Bit $tmp253 = frost$core$Bit$init$builtin_bit($tmp252 != NULL);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp255 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block31:;
frost$core$String* $tmp258 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp252, &$s259);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$String* $tmp260 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local2) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($260:frost.core.String)
// line 105
frost$collections$HashSet** $tmp261 = &param0->imports;
frost$collections$HashSet* $tmp262 = *$tmp261;
frost$core$String* $tmp263 = *(&local2);
frost$core$Bit $tmp264 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp262, ((frost$collections$Key*) $tmp263));
frost$core$Bit $tmp265 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block33; else goto block34;
block33:;
// line 106
frost$io$MemoryOutputStream** $tmp267 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp268 = *$tmp267;
frost$core$String* $tmp269 = *(&local2);
frost$core$String* $tmp270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s271, $tmp269);
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp270, &$s273);
$fn275 $tmp274 = ($fn275) ((frost$io$OutputStream*) $tmp268)->$class->vtable[19];
$tmp274(((frost$io$OutputStream*) $tmp268), $tmp272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing REF($287:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($286:frost.core.String)
// line 107
frost$collections$HashSet** $tmp276 = &param0->imports;
frost$collections$HashSet* $tmp277 = *$tmp276;
frost$core$String* $tmp278 = *(&local2);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp277, ((frost$collections$Key*) $tmp278));
goto block34;
block34:;
// line 109
frost$core$String* $tmp279 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$String* $tmp280 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing includePath
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp281 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing cl
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp279;
block20:;
frost$core$Int64 $tmp283 = (frost$core$Int64) {1};
frost$core$Bit $tmp284 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block35; else goto block36;
block35:;
// line 112
frost$core$Weak** $tmp286 = &param0->compiler;
frost$core$Weak* $tmp287 = *$tmp286;
frost$core$Object* $tmp288 = frost$core$Weak$get$R$frost$core$Weak$T($tmp287);
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp288) != NULL);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp291 = (frost$core$Int64) {112};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s292, $tmp291, &$s293);
abort(); // unreachable
block37:;
org$frostlang$frostc$ClassDecl* $tmp294 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp288), param1);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
org$frostlang$frostc$ClassDecl* $tmp295 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local3) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// unreffing REF($342:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp288);
// unreffing REF($332:frost.core.Weak.T)
// line 113
org$frostlang$frostc$ClassDecl* $tmp296 = *(&local3);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s300, $tmp299);
abort(); // unreachable
block39:;
// line 114
frost$core$Weak** $tmp301 = &param0->compiler;
frost$core$Weak* $tmp302 = *$tmp301;
frost$core$Object* $tmp303 = frost$core$Weak$get$R$frost$core$Weak$T($tmp302);
frost$core$Bit $tmp304 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp303) != NULL);
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp306 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s307, $tmp306, &$s308);
abort(); // unreachable
block43:;
org$frostlang$frostc$ClassDecl* $tmp309 = *(&local3);
frost$core$Bit $tmp310 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp303), $tmp309);
bool $tmp311 = $tmp310.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp303);
// unreffing REF($369:frost.core.Weak.T)
if ($tmp311) goto block41; else goto block42;
block41:;
// line 115
org$frostlang$frostc$FixedArray** $tmp312 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp313 = *$tmp312;
frost$core$Bit $tmp314 = frost$core$Bit$init$builtin_bit($tmp313 != NULL);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp316 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s317, $tmp316, &$s318);
abort(); // unreachable
block45:;
frost$core$Int64 $tmp319 = (frost$core$Int64) {0};
frost$core$Object* $tmp320 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp313, $tmp319);
frost$core$String* $tmp321 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp320));
frost$core$String* $tmp322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp321, &$s323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($402:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing REF($401:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
// unreffing REF($399:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp324 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing cl
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp322;
block42:;
// line 117
org$frostlang$frostc$FixedArray** $tmp325 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp326 = *$tmp325;
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit($tmp326 != NULL);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp329 = (frost$core$Int64) {117};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block47:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {0};
frost$core$Object* $tmp333 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp326, $tmp332);
frost$core$String* $tmp334 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp333));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($435:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp333);
// unreffing REF($433:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp335 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// unreffing cl
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp334;
block36:;
frost$core$Int64 $tmp336 = (frost$core$Int64) {11};
frost$core$Bit $tmp337 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp336);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block49; else goto block50;
block49:;
// line 120
org$frostlang$frostc$FixedArray** $tmp339 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp340 = *$tmp339;
frost$core$Bit $tmp341 = frost$core$Bit$init$builtin_bit($tmp340 != NULL);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp343 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s344, $tmp343, &$s345);
abort(); // unreachable
block53:;
frost$core$Int64 $tmp346 = (frost$core$Int64) {0};
frost$core$Object* $tmp347 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp340, $tmp346);
frost$core$String** $tmp348 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp347))->name;
frost$core$String* $tmp349 = *$tmp348;
frost$core$Bit $tmp350 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp349, &$s351);
bool $tmp352 = $tmp350.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp347);
// unreffing REF($467:org.frostlang.frostc.FixedArray.T)
if ($tmp352) goto block51; else goto block52;
block51:;
// line 121
org$frostlang$frostc$FixedArray** $tmp353 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp354 = *$tmp353;
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354 != NULL);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp357 = (frost$core$Int64) {121};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s358, $tmp357, &$s359);
abort(); // unreachable
block55:;
frost$core$Int64 $tmp360 = (frost$core$Int64) {1};
frost$core$Object* $tmp361 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp354, $tmp360);
frost$core$String* $tmp362 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp361));
frost$core$String* $tmp363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp362, &$s364);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing REF($494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp361);
// unreffing REF($491:org.frostlang.frostc.FixedArray.T)
return $tmp363;
block52:;
// line 123
frost$core$Weak** $tmp365 = &param0->compiler;
frost$core$Weak* $tmp366 = *$tmp365;
frost$core$Object* $tmp367 = frost$core$Weak$get$R$frost$core$Weak$T($tmp366);
frost$core$Bit $tmp368 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp367) != NULL);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp370 = (frost$core$Int64) {123};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s371, $tmp370, &$s372);
abort(); // unreachable
block57:;
org$frostlang$frostc$ClassDecl* $tmp373 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp367), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$ClassDecl* $tmp374 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local4) = $tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing REF($521:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp367);
// unreffing REF($511:frost.core.Weak.T)
// line 124
org$frostlang$frostc$ClassDecl* $tmp375 = *(&local4);
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit($tmp375 != NULL);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp378 = (frost$core$Int64) {124};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block61:;
frost$core$Bit $tmp381 = org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp375);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block59; else goto block60;
block59:;
// line 125
frost$core$String** $tmp383 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp384 = *$tmp383;
frost$core$String* $tmp385 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp384);
frost$core$String* $tmp386 = frost$core$String$convert$R$frost$core$String($tmp385);
frost$core$String* $tmp387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp386, &$s388);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$String* $tmp389 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local5) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing REF($554:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing REF($553:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing REF($552:frost.core.String)
// line 126
frost$core$Weak** $tmp390 = &param0->compiler;
frost$core$Weak* $tmp391 = *$tmp390;
frost$core$Object* $tmp392 = frost$core$Weak$get$R$frost$core$Weak$T($tmp391);
frost$core$Bit $tmp393 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp392) != NULL);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp395 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s396, $tmp395, &$s397);
abort(); // unreachable
block63:;
org$frostlang$frostc$ClassDecl* $tmp398 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp392), param1);
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
org$frostlang$frostc$ClassDecl* $tmp399 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local6) = $tmp398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// unreffing REF($585:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp392);
// unreffing REF($575:frost.core.Weak.T)
// line 127
org$frostlang$frostc$ClassDecl* $tmp400 = *(&local6);
frost$core$Bit $tmp401 = frost$core$Bit$init$builtin_bit($tmp400 != NULL);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp403 = (frost$core$Int64) {127};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s404, $tmp403);
abort(); // unreachable
block65:;
// line 128
frost$core$Weak** $tmp405 = &param0->compiler;
frost$core$Weak* $tmp406 = *$tmp405;
frost$core$Object* $tmp407 = frost$core$Weak$get$R$frost$core$Weak$T($tmp406);
frost$core$Bit $tmp408 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp407) != NULL);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp410 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s411, $tmp410, &$s412);
abort(); // unreachable
block69:;
org$frostlang$frostc$ClassDecl* $tmp413 = *(&local6);
frost$core$Bit $tmp414 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp407), $tmp413);
frost$core$Bit $tmp415 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp414);
bool $tmp416 = $tmp415.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp407);
// unreffing REF($612:frost.core.Weak.T)
if ($tmp416) goto block67; else goto block68;
block67:;
// line 129
frost$collections$HashSet** $tmp417 = &param0->imports;
frost$collections$HashSet* $tmp418 = *$tmp417;
frost$core$String* $tmp419 = *(&local5);
frost$core$Bit $tmp420 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp418, ((frost$collections$Key*) $tmp419));
frost$core$Bit $tmp421 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block71; else goto block72;
block71:;
// line 130
frost$io$MemoryOutputStream** $tmp423 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp424 = *$tmp423;
frost$core$String* $tmp425 = *(&local5);
frost$core$String* $tmp426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s427, $tmp425);
frost$core$String* $tmp428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp426, &$s429);
frost$core$String* $tmp430 = *(&local5);
frost$core$String* $tmp431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp428, $tmp430);
frost$core$String* $tmp432 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp431, &$s433);
$fn435 $tmp434 = ($fn435) ((frost$io$OutputStream*) $tmp424)->$class->vtable[19];
$tmp434(((frost$io$OutputStream*) $tmp424), $tmp432);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing REF($649:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// unreffing REF($648:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing REF($646:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing REF($645:frost.core.String)
// line 131
frost$collections$HashSet** $tmp436 = &param0->imports;
frost$collections$HashSet* $tmp437 = *$tmp436;
frost$core$String* $tmp438 = *(&local5);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp437, ((frost$collections$Key*) $tmp438));
goto block72;
block72:;
// line 133
frost$core$String* $tmp439 = *(&local5);
frost$core$String* $tmp440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp439, &$s441);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// unreffing REF($674:frost.core.String)
org$frostlang$frostc$ClassDecl* $tmp442 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
// unreffing cl
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp443 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp444 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing cl
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp440;
block68:;
// line 135
org$frostlang$frostc$ClassDecl* $tmp445 = *(&local6);
frost$core$Bit $tmp446 = frost$core$Bit$init$builtin_bit($tmp445 != NULL);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp448 = (frost$core$Int64) {135};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s449, $tmp448, &$s450);
abort(); // unreachable
block73:;
frost$core$String* $tmp451 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp445, &$s452);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$String* $tmp453 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local7) = $tmp451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing REF($706:frost.core.String)
// line 136
frost$collections$HashSet** $tmp454 = &param0->imports;
frost$collections$HashSet* $tmp455 = *$tmp454;
frost$core$String* $tmp456 = *(&local7);
frost$core$Bit $tmp457 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp455, ((frost$collections$Key*) $tmp456));
frost$core$Bit $tmp458 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp457);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block75; else goto block76;
block75:;
// line 137
frost$io$MemoryOutputStream** $tmp460 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp461 = *$tmp460;
frost$core$String* $tmp462 = *(&local7);
frost$core$String* $tmp463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s464, $tmp462);
frost$core$String* $tmp465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp463, &$s466);
$fn468 $tmp467 = ($fn468) ((frost$io$OutputStream*) $tmp461)->$class->vtable[19];
$tmp467(((frost$io$OutputStream*) $tmp461), $tmp465);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// unreffing REF($733:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing REF($732:frost.core.String)
// line 138
frost$collections$HashSet** $tmp469 = &param0->imports;
frost$collections$HashSet* $tmp470 = *$tmp469;
frost$core$String* $tmp471 = *(&local7);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp470, ((frost$collections$Key*) $tmp471));
goto block76;
block76:;
// line 140
frost$core$String* $tmp472 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$String* $tmp473 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// unreffing includePath
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp474 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing cl
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp475 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp476 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing cl
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp472;
block60:;
// line 142
org$frostlang$frostc$FixedArray** $tmp477 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp478 = *$tmp477;
frost$core$Bit $tmp479 = frost$core$Bit$init$builtin_bit($tmp478 != NULL);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp481 = (frost$core$Int64) {142};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s482, $tmp481, &$s483);
abort(); // unreachable
block77:;
frost$core$Int64 $tmp484 = (frost$core$Int64) {0};
frost$core$Object* $tmp485 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp478, $tmp484);
frost$core$String* $tmp486 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp485));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing REF($790:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp485);
// unreffing REF($788:org.frostlang.frostc.FixedArray.T)
org$frostlang$frostc$ClassDecl* $tmp487 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing cl
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp486;
block50:;
frost$core$Int64 $tmp488 = (frost$core$Int64) {12};
frost$core$Bit $tmp489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp488);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block79; else goto block80;
block79:;
// line 145
frost$core$Weak** $tmp491 = &param1->genericClassParameter;
frost$core$Weak* $tmp492 = *$tmp491;
frost$core$Object* $tmp493 = frost$core$Weak$get$R$frost$core$Weak$T($tmp492);
frost$core$Bit $tmp494 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp493) != NULL);
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {145};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s497, $tmp496, &$s498);
abort(); // unreachable
block81:;
org$frostlang$frostc$Type** $tmp499 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp493)->bound;
org$frostlang$frostc$Type* $tmp500 = *$tmp499;
frost$core$String* $tmp501 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing REF($825:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp493);
// unreffing REF($813:frost.core.Weak.T)
return $tmp501;
block80:;
frost$core$Int64 $tmp502 = (frost$core$Int64) {13};
frost$core$Bit $tmp503 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp502);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block83; else goto block84;
block83:;
// line 148
frost$core$Weak** $tmp505 = &param1->genericMethodParameter;
frost$core$Weak* $tmp506 = *$tmp505;
frost$core$Object* $tmp507 = frost$core$Weak$get$R$frost$core$Weak$T($tmp506);
frost$core$Bit $tmp508 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp507) != NULL);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp510 = (frost$core$Int64) {148};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s511, $tmp510, &$s512);
abort(); // unreachable
block85:;
org$frostlang$frostc$Type** $tmp513 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp507)->bound;
org$frostlang$frostc$Type* $tmp514 = *$tmp513;
frost$core$String* $tmp515 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp514);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// unreffing REF($855:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp507);
// unreffing REF($843:frost.core.Weak.T)
return $tmp515;
block84:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {15};
frost$core$Bit $tmp517 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp519 = (frost$core$Int64) {16};
frost$core$Bit $tmp520 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp519);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block87; else goto block89;
block87:;
// line 151
org$frostlang$frostc$Type* $tmp522 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp523 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp522);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// unreffing REF($875:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($874:org.frostlang.frostc.Type)
return $tmp523;
block89:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {17};
frost$core$Bit $tmp525 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp524);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp527 = (frost$core$Int64) {18};
frost$core$Bit $tmp528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp131, $tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block90; else goto block92;
block90:;
// line 154
org$frostlang$frostc$Type* $tmp530 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp531 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp530);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// unreffing REF($895:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// unreffing REF($894:org.frostlang.frostc.Type)
return $tmp531;
block92:;
// line 157
frost$core$Bit $tmp532 = frost$core$Bit$init$builtin_bit(false);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block93; else goto block94;
block94:;
frost$core$Int64 $tmp534 = (frost$core$Int64) {157};
frost$core$String* $tmp535 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s536, ((frost$core$Object*) param1));
frost$core$String* $tmp537 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp535, &$s538);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s539, $tmp534, $tmp537);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// unreffing REF($912:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
// unreffing REF($911:frost.core.String)
abort(); // unreachable
block93:;
goto block1;
block1:;
frost$core$Bit $tmp540 = frost$core$Bit$init$builtin_bit(false);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp542 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s543, $tmp542, &$s544);
abort(); // unreachable
block95:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// line 163
frost$core$String* $tmp545 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp546 = frost$core$String$convert$R$frost$core$String($tmp545);
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp546, &$s548);
frost$core$String* $tmp549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp547, param2);
frost$core$String* $tmp550 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp549, &$s551);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// unreffing REF($1:frost.core.String)
return $tmp550;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 168
frost$core$Weak* $tmp552 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp552, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Weak** $tmp553 = &param0->compiler;
frost$core$Weak* $tmp554 = *$tmp553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Weak** $tmp555 = &param0->compiler;
*$tmp555 = $tmp552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// unreffing REF($2:frost.core.Weak<org.frostlang.frostc.Compiler?>)
// line 169
org$frostlang$frostc$LLVMCodeGenerator** $tmp556 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp557 = *$tmp556;
org$frostlang$frostc$LLVMCodeGenerator$setCompiler$org$frostlang$frostc$Compiler($tmp557, param1);
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 173
frost$io$File** $tmp558 = &param0->outDir;
frost$io$File* $tmp559 = *$tmp558;
frost$core$String* $tmp560 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp561 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp559, $tmp560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// unreffing REF($4:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// unreffing REF($3:frost.core.String)
return $tmp561;

}
void org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$io$File* local0 = NULL;
frost$io$File* local1 = NULL;
org$frostlang$frostc$FieldDecl* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
frost$collections$ListView* local4 = NULL;
// line 178
frost$io$MemoryOutputStream** $tmp562 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp563 = *$tmp562;
frost$io$MemoryOutputStream$clear($tmp563);
// line 179
frost$io$MemoryOutputStream** $tmp564 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp565 = *$tmp564;
frost$io$MemoryOutputStream$clear($tmp565);
// line 180
frost$io$MemoryOutputStream** $tmp566 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp567 = *$tmp566;
frost$io$MemoryOutputStream$clear($tmp567);
// line 181
frost$io$MemoryOutputStream** $tmp568 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp569 = *$tmp568;
frost$io$MemoryOutputStream$clear($tmp569);
// line 182
frost$collections$HashSet** $tmp570 = &param0->typeImports;
frost$collections$HashSet* $tmp571 = *$tmp570;
frost$collections$HashSet$clear($tmp571);
// line 183
frost$collections$HashSet** $tmp572 = &param0->bodyImports;
frost$collections$HashSet* $tmp573 = *$tmp572;
frost$collections$HashSet$clear($tmp573);
// line 184
frost$io$File* $tmp574 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s575);
*(&local0) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$io$File* $tmp576 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local0) = $tmp574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// unreffing REF($27:frost.io.File)
// line 185
frost$io$File* $tmp577 = *(&local0);
frost$io$File* $tmp578 = frost$io$File$get_parent$R$frost$io$File$Q($tmp577);
frost$core$Bit $tmp579 = frost$core$Bit$init$builtin_bit($tmp578 != NULL);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {185};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block1:;
frost$io$File$createDirectories($tmp578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($40:frost.io.File?)
// line 186
frost$io$IndentedOutputStream* $tmp584 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp585 = *(&local0);
frost$io$OutputStream* $tmp586 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp585);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp584, $tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$io$IndentedOutputStream** $tmp587 = &param0->out;
frost$io$IndentedOutputStream* $tmp588 = *$tmp587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$io$IndentedOutputStream** $tmp589 = &param0->out;
*$tmp589 = $tmp584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing REF($56:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($54:frost.io.IndentedOutputStream)
// line 187
frost$io$File* $tmp590 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s591);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$io$File* $tmp592 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local1) = $tmp590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($73:frost.io.File)
// line 188
frost$io$IndentedOutputStream* $tmp593 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp594 = *(&local1);
frost$io$OutputStream* $tmp595 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp594);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp593, $tmp595);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$io$IndentedOutputStream** $tmp596 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp597 = *$tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$io$IndentedOutputStream** $tmp598 = &param0->typesOut;
*$tmp598 = $tmp593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing REF($87:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// unreffing REF($85:frost.io.IndentedOutputStream)
// line 189
frost$io$IndentedOutputStream** $tmp599 = &param0->out;
frost$io$IndentedOutputStream* $tmp600 = *$tmp599;
$fn602 $tmp601 = ($fn602) ((frost$io$OutputStream*) $tmp600)->$class->vtable[19];
$tmp601(((frost$io$OutputStream*) $tmp600), &$s603);
// line 190
frost$io$IndentedOutputStream** $tmp604 = &param0->out;
frost$io$IndentedOutputStream* $tmp605 = *$tmp604;
$fn607 $tmp606 = ($fn607) ((frost$io$OutputStream*) $tmp605)->$class->vtable[19];
$tmp606(((frost$io$OutputStream*) $tmp605), &$s608);
// line 191
frost$io$IndentedOutputStream** $tmp609 = &param0->out;
frost$io$IndentedOutputStream* $tmp610 = *$tmp609;
frost$io$File* $tmp611 = *(&local1);
frost$core$String* $tmp612 = frost$io$File$get_name$R$frost$core$String($tmp611);
frost$core$String* $tmp613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s614, $tmp612);
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp613, &$s616);
$fn618 $tmp617 = ($fn618) ((frost$io$OutputStream*) $tmp610)->$class->vtable[19];
$tmp617(((frost$io$OutputStream*) $tmp610), $tmp615);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// unreffing REF($120:frost.core.String)
// line 192
frost$io$IndentedOutputStream** $tmp619 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp620 = *$tmp619;
$fn622 $tmp621 = ($fn622) ((frost$io$OutputStream*) $tmp620)->$class->vtable[19];
$tmp621(((frost$io$OutputStream*) $tmp620), &$s623);
// line 193
frost$io$IndentedOutputStream** $tmp624 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp625 = *$tmp624;
$fn627 $tmp626 = ($fn627) ((frost$io$OutputStream*) $tmp625)->$class->vtable[19];
$tmp626(((frost$io$OutputStream*) $tmp625), &$s628);
// line 194
frost$io$MemoryOutputStream** $tmp629 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp630 = *$tmp629;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$io$MemoryOutputStream** $tmp631 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp632 = *$tmp631;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$io$MemoryOutputStream** $tmp633 = &param0->importStream;
*$tmp633 = $tmp630;
// line 195
frost$collections$HashSet** $tmp634 = &param0->typeImports;
frost$collections$HashSet* $tmp635 = *$tmp634;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$collections$HashSet** $tmp636 = &param0->imports;
frost$collections$HashSet* $tmp637 = *$tmp636;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$collections$HashSet** $tmp638 = &param0->imports;
*$tmp638 = $tmp635;
// line 196
frost$io$IndentedOutputStream** $tmp639 = &param0->types;
frost$io$IndentedOutputStream* $tmp640 = *$tmp639;
frost$core$String** $tmp641 = &param1->name;
frost$core$String* $tmp642 = *$tmp641;
frost$core$String* $tmp643 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp642);
frost$core$String* $tmp644 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s645, $tmp643);
frost$core$String* $tmp646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp644, &$s647);
$fn649 $tmp648 = ($fn649) ((frost$io$OutputStream*) $tmp640)->$class->vtable[19];
$tmp648(((frost$io$OutputStream*) $tmp640), $tmp646);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
// unreffing REF($176:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($175:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
// unreffing REF($174:frost.core.String)
// line 197
frost$io$IndentedOutputStream** $tmp650 = &param0->types;
frost$io$IndentedOutputStream* $tmp651 = *$tmp650;
frost$core$Int64* $tmp652 = &$tmp651->level;
frost$core$Int64 $tmp653 = *$tmp652;
frost$core$Int64 $tmp654 = (frost$core$Int64) {1};
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655 + $tmp656;
frost$core$Int64 $tmp658 = (frost$core$Int64) {$tmp657};
frost$core$Int64* $tmp659 = &$tmp651->level;
*$tmp659 = $tmp658;
// line 198
frost$core$Weak** $tmp660 = &param0->compiler;
frost$core$Weak* $tmp661 = *$tmp660;
frost$core$Object* $tmp662 = frost$core$Weak$get$R$frost$core$Weak$T($tmp661);
frost$core$Bit $tmp663 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp662) != NULL);
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp665 = (frost$core$Int64) {198};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s666, $tmp665, &$s667);
abort(); // unreachable
block3:;
frost$collections$ListView* $tmp668 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp662), param1);
ITable* $tmp669 = ((frost$collections$Iterable*) $tmp668)->$class->itable;
while ($tmp669->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp669 = $tmp669->next;
}
$fn671 $tmp670 = $tmp669->methods[0];
frost$collections$Iterator* $tmp672 = $tmp670(((frost$collections$Iterable*) $tmp668));
goto block5;
block5:;
ITable* $tmp673 = $tmp672->$class->itable;
while ($tmp673->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp673 = $tmp673->next;
}
$fn675 $tmp674 = $tmp673->methods[0];
frost$core$Bit $tmp676 = $tmp674($tmp672);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp678 = $tmp672->$class->itable;
while ($tmp678->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp678 = $tmp678->next;
}
$fn680 $tmp679 = $tmp678->methods[1];
frost$core$Object* $tmp681 = $tmp679($tmp672);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp681)));
org$frostlang$frostc$FieldDecl* $tmp682 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) $tmp681);
// line 199
frost$core$Weak** $tmp683 = &param0->compiler;
frost$core$Weak* $tmp684 = *$tmp683;
frost$core$Object* $tmp685 = frost$core$Weak$get$R$frost$core$Weak$T($tmp684);
frost$core$Bit $tmp686 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp685) != NULL);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp688 = (frost$core$Int64) {199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s689, $tmp688, &$s690);
abort(); // unreachable
block8:;
org$frostlang$frostc$FieldDecl* $tmp691 = *(&local2);
frost$core$Bit $tmp692 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp685), $tmp691);
frost$core$Frost$unref$frost$core$Object$Q($tmp685);
// unreffing REF($241:frost.core.Weak.T)
// line 200
org$frostlang$frostc$FieldDecl* $tmp693 = *(&local2);
org$frostlang$frostc$Type** $tmp694 = &$tmp693->type;
org$frostlang$frostc$Type* $tmp695 = *$tmp694;
org$frostlang$frostc$Type* $tmp696 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp697 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp695, $tmp696);
bool $tmp698 = $tmp697.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($260:org.frostlang.frostc.Type)
if ($tmp698) goto block10; else goto block12;
block10:;
// line 201
frost$io$IndentedOutputStream** $tmp699 = &param0->types;
frost$io$IndentedOutputStream* $tmp700 = *$tmp699;
org$frostlang$frostc$FieldDecl* $tmp701 = *(&local2);
frost$core$String** $tmp702 = &((org$frostlang$frostc$Symbol*) $tmp701)->name;
frost$core$String* $tmp703 = *$tmp702;
frost$core$String* $tmp704 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s705, $tmp703);
frost$core$String* $tmp706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp704, &$s707);
org$frostlang$frostc$LLVMCodeGenerator** $tmp708 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp709 = *$tmp708;
frost$core$Int64 $tmp710 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp709, param1);
frost$core$Int64$wrapper* $tmp711;
$tmp711 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp711->value = $tmp710;
frost$core$String* $tmp712 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp706, ((frost$core$Object*) $tmp711));
frost$core$String* $tmp713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp712, &$s714);
$fn716 $tmp715 = ($fn716) ((frost$io$OutputStream*) $tmp700)->$class->vtable[19];
$tmp715(((frost$io$OutputStream*) $tmp700), $tmp713);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($282:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
// unreffing REF($281:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing REF($280:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing REF($276:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing REF($275:frost.core.String)
goto block11;
block12:;
// line 1
// line 204
frost$io$IndentedOutputStream** $tmp717 = &param0->types;
frost$io$IndentedOutputStream* $tmp718 = *$tmp717;
org$frostlang$frostc$FieldDecl* $tmp719 = *(&local2);
org$frostlang$frostc$Type** $tmp720 = &$tmp719->type;
org$frostlang$frostc$Type* $tmp721 = *$tmp720;
frost$core$String* $tmp722 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp721);
frost$core$String* $tmp723 = frost$core$String$convert$R$frost$core$String($tmp722);
frost$core$String* $tmp724 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp723, &$s725);
org$frostlang$frostc$FieldDecl* $tmp726 = *(&local2);
frost$core$String** $tmp727 = &((org$frostlang$frostc$Symbol*) $tmp726)->name;
frost$core$String* $tmp728 = *$tmp727;
frost$core$String* $tmp729 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp724, $tmp728);
frost$core$String* $tmp730 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp729, &$s731);
$fn733 $tmp732 = ($fn733) ((frost$io$OutputStream*) $tmp718)->$class->vtable[19];
$tmp732(((frost$io$OutputStream*) $tmp718), $tmp730);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing REF($317:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// unreffing REF($316:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// unreffing REF($311:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($310:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
// unreffing REF($309:frost.core.String)
goto block11;
block11:;
frost$core$Frost$unref$frost$core$Object$Q($tmp681);
// unreffing REF($229:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp734 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing f
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($218:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing REF($214:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp662);
// unreffing REF($204:frost.core.Weak.T)
// line 207
frost$core$String** $tmp735 = &param1->name;
frost$core$String* $tmp736 = *$tmp735;
frost$core$Bit $tmp737 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp736, &$s738);
bool $tmp739 = $tmp737.value;
if ($tmp739) goto block13; else goto block14;
block13:;
// line 208
frost$io$IndentedOutputStream** $tmp740 = &param0->types;
frost$io$IndentedOutputStream* $tmp741 = *$tmp740;
$fn743 $tmp742 = ($fn743) ((frost$io$OutputStream*) $tmp741)->$class->vtable[19];
$tmp742(((frost$io$OutputStream*) $tmp741), &$s744);
// line 209
frost$io$IndentedOutputStream** $tmp745 = &param0->types;
frost$io$IndentedOutputStream* $tmp746 = *$tmp745;
$fn748 $tmp747 = ($fn748) ((frost$io$OutputStream*) $tmp746)->$class->vtable[19];
$tmp747(((frost$io$OutputStream*) $tmp746), &$s749);
goto block14;
block14:;
// line 211
frost$io$IndentedOutputStream** $tmp750 = &param0->types;
frost$io$IndentedOutputStream* $tmp751 = *$tmp750;
frost$core$Int64* $tmp752 = &$tmp751->level;
frost$core$Int64 $tmp753 = *$tmp752;
frost$core$Int64 $tmp754 = (frost$core$Int64) {1};
int64_t $tmp755 = $tmp753.value;
int64_t $tmp756 = $tmp754.value;
int64_t $tmp757 = $tmp755 - $tmp756;
frost$core$Int64 $tmp758 = (frost$core$Int64) {$tmp757};
frost$core$Int64* $tmp759 = &$tmp751->level;
*$tmp759 = $tmp758;
// line 212
frost$io$IndentedOutputStream** $tmp760 = &param0->types;
frost$io$IndentedOutputStream* $tmp761 = *$tmp760;
frost$core$String** $tmp762 = &param1->name;
frost$core$String* $tmp763 = *$tmp762;
frost$core$String* $tmp764 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp763);
frost$core$String* $tmp765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s766, $tmp764);
frost$core$String* $tmp767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp765, &$s768);
$fn770 $tmp769 = ($fn770) ((frost$io$OutputStream*) $tmp761)->$class->vtable[19];
$tmp769(((frost$io$OutputStream*) $tmp761), $tmp767);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing REF($393:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// unreffing REF($392:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// unreffing REF($391:frost.core.String)
// line 213
frost$io$IndentedOutputStream** $tmp771 = &param0->types;
frost$io$IndentedOutputStream* $tmp772 = *$tmp771;
$fn774 $tmp773 = ($fn774) ((frost$io$OutputStream*) $tmp772)->$class->vtable[19];
$tmp773(((frost$io$OutputStream*) $tmp772), &$s775);
// line 214
frost$io$IndentedOutputStream** $tmp776 = &param0->types;
frost$io$IndentedOutputStream* $tmp777 = *$tmp776;
org$frostlang$frostc$Type* $tmp778 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp779 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp778);
frost$core$String* $tmp780 = frost$core$String$convert$R$frost$core$String($tmp779);
frost$core$String* $tmp781 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp780, &$s782);
org$frostlang$frostc$Type* $tmp783 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp784 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp783);
frost$core$String* $tmp785 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp781, $tmp784);
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp785, &$s787);
frost$core$String* $tmp788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s789, $tmp786);
frost$core$Weak** $tmp790 = &param0->compiler;
frost$core$Weak* $tmp791 = *$tmp790;
frost$core$Object* $tmp792 = frost$core$Weak$get$R$frost$core$Weak$T($tmp791);
frost$core$Bit $tmp793 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp792) != NULL);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp795 = (frost$core$Int64) {216};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s796, $tmp795, &$s797);
abort(); // unreachable
block15:;
frost$collections$ListView* $tmp798 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp792), param1);
ITable* $tmp799 = ((frost$collections$CollectionView*) $tmp798)->$class->itable;
while ($tmp799->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp799 = $tmp799->next;
}
$fn801 $tmp800 = $tmp799->methods[0];
frost$core$Int64 $tmp802 = $tmp800(((frost$collections$CollectionView*) $tmp798));
frost$core$Int64$wrapper* $tmp803;
$tmp803 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp803->value = $tmp802;
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s805, ((frost$core$Object*) $tmp803));
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, &$s807);
frost$core$String* $tmp808 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp788, $tmp806);
frost$core$String** $tmp809 = &param1->name;
frost$core$String* $tmp810 = *$tmp809;
frost$core$String* $tmp811 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp810);
frost$core$String* $tmp812 = frost$core$String$convert$R$frost$core$String($tmp811);
frost$core$String* $tmp813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp812, &$s814);
frost$core$String* $tmp815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp808, $tmp813);
$fn817 $tmp816 = ($fn817) ((frost$io$OutputStream*) $tmp777)->$class->vtable[19];
$tmp816(((frost$io$OutputStream*) $tmp777), $tmp815);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// unreffing REF($450:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// unreffing REF($449:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing REF($448:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($447:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// unreffing REF($444:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
// unreffing REF($443:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing REF($442:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing REF($441:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// unreffing REF($437:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp792);
// unreffing REF($427:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($423:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing REF($422:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing REF($421:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing REF($420:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// unreffing REF($419:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// unreffing REF($418:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// unreffing REF($417:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// unreffing REF($416:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// unreffing REF($415:org.frostlang.frostc.Type)
// line 218
frost$io$IndentedOutputStream** $tmp818 = &param0->types;
frost$io$IndentedOutputStream* $tmp819 = *$tmp818;
frost$core$String** $tmp820 = &param1->name;
frost$core$String* $tmp821 = *$tmp820;
frost$core$String* $tmp822 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp821);
frost$core$String* $tmp823 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s824, $tmp822);
frost$core$String* $tmp825 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp823, &$s826);
frost$core$String** $tmp827 = &param1->name;
frost$core$String* $tmp828 = *$tmp827;
frost$core$String* $tmp829 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp828);
frost$core$String* $tmp830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp825, $tmp829);
frost$core$String* $tmp831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp830, &$s832);
$fn834 $tmp833 = ($fn834) ((frost$io$OutputStream*) $tmp819)->$class->vtable[19];
$tmp833(((frost$io$OutputStream*) $tmp819), $tmp831);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($523:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing REF($522:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing REF($521:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing REF($518:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($517:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($516:frost.core.String)
// line 219
frost$core$Weak** $tmp835 = &param0->compiler;
frost$core$Weak* $tmp836 = *$tmp835;
frost$core$Object* $tmp837 = frost$core$Weak$get$R$frost$core$Weak$T($tmp836);
frost$core$Bit $tmp838 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp837) != NULL);
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp840 = (frost$core$Int64) {219};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s841, $tmp840, &$s842);
abort(); // unreachable
block19:;
frost$core$Bit $tmp843 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp837), param1);
bool $tmp844 = $tmp843.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp837);
// unreffing REF($548:frost.core.Weak.T)
if ($tmp844) goto block17; else goto block18;
block17:;
// line 220
frost$io$IndentedOutputStream** $tmp845 = &param0->types;
frost$io$IndentedOutputStream* $tmp846 = *$tmp845;
frost$core$String** $tmp847 = &param1->name;
frost$core$String* $tmp848 = *$tmp847;
frost$core$String* $tmp849 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp848);
frost$core$String* $tmp850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s851, $tmp849);
frost$core$String* $tmp852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp850, &$s853);
$fn855 $tmp854 = ($fn855) ((frost$io$OutputStream*) $tmp846)->$class->vtable[19];
$tmp854(((frost$io$OutputStream*) $tmp846), $tmp852);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($573:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing REF($572:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing REF($571:frost.core.String)
// line 221
frost$io$IndentedOutputStream** $tmp856 = &param0->types;
frost$io$IndentedOutputStream* $tmp857 = *$tmp856;
frost$core$Int64* $tmp858 = &$tmp857->level;
frost$core$Int64 $tmp859 = *$tmp858;
frost$core$Int64 $tmp860 = (frost$core$Int64) {1};
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860.value;
int64_t $tmp863 = $tmp861 + $tmp862;
frost$core$Int64 $tmp864 = (frost$core$Int64) {$tmp863};
frost$core$Int64* $tmp865 = &$tmp857->level;
*$tmp865 = $tmp864;
// line 222
frost$io$IndentedOutputStream** $tmp866 = &param0->types;
frost$io$IndentedOutputStream* $tmp867 = *$tmp866;
$fn869 $tmp868 = ($fn869) ((frost$io$OutputStream*) $tmp867)->$class->vtable[19];
$tmp868(((frost$io$OutputStream*) $tmp867), &$s870);
// line 223
frost$io$IndentedOutputStream** $tmp871 = &param0->types;
frost$io$IndentedOutputStream* $tmp872 = *$tmp871;
$fn874 $tmp873 = ($fn874) ((frost$io$OutputStream*) $tmp872)->$class->vtable[19];
$tmp873(((frost$io$OutputStream*) $tmp872), &$s875);
// line 224
frost$io$IndentedOutputStream** $tmp876 = &param0->types;
frost$io$IndentedOutputStream* $tmp877 = *$tmp876;
org$frostlang$frostc$Type** $tmp878 = &param1->type;
org$frostlang$frostc$Type* $tmp879 = *$tmp878;
frost$core$String* $tmp880 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp879);
frost$core$String* $tmp881 = frost$core$String$convert$R$frost$core$String($tmp880);
frost$core$String* $tmp882 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp881, &$s883);
$fn885 $tmp884 = ($fn885) ((frost$io$OutputStream*) $tmp877)->$class->vtable[19];
$tmp884(((frost$io$OutputStream*) $tmp877), $tmp882);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// unreffing REF($617:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($616:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing REF($615:frost.core.String)
// line 225
frost$io$IndentedOutputStream** $tmp886 = &param0->types;
frost$io$IndentedOutputStream* $tmp887 = *$tmp886;
frost$core$Int64* $tmp888 = &$tmp887->level;
frost$core$Int64 $tmp889 = *$tmp888;
frost$core$Int64 $tmp890 = (frost$core$Int64) {1};
int64_t $tmp891 = $tmp889.value;
int64_t $tmp892 = $tmp890.value;
int64_t $tmp893 = $tmp891 - $tmp892;
frost$core$Int64 $tmp894 = (frost$core$Int64) {$tmp893};
frost$core$Int64* $tmp895 = &$tmp887->level;
*$tmp895 = $tmp894;
// line 226
frost$io$IndentedOutputStream** $tmp896 = &param0->types;
frost$io$IndentedOutputStream* $tmp897 = *$tmp896;
frost$core$String** $tmp898 = &param1->name;
frost$core$String* $tmp899 = *$tmp898;
frost$core$String* $tmp900 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp899);
frost$core$String* $tmp901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s902, $tmp900);
frost$core$String* $tmp903 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp901, &$s904);
$fn906 $tmp905 = ($fn906) ((frost$io$OutputStream*) $tmp897)->$class->vtable[19];
$tmp905(((frost$io$OutputStream*) $tmp897), $tmp903);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing REF($649:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing REF($648:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing REF($647:frost.core.String)
// line 227
frost$io$IndentedOutputStream** $tmp907 = &param0->types;
frost$io$IndentedOutputStream* $tmp908 = *$tmp907;
frost$core$String** $tmp909 = &param1->name;
frost$core$String* $tmp910 = *$tmp909;
frost$core$String* $tmp911 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp910);
frost$core$String* $tmp912 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s913, $tmp911);
frost$core$String* $tmp914 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp912, &$s915);
$fn917 $tmp916 = ($fn917) ((frost$io$OutputStream*) $tmp908)->$class->vtable[19];
$tmp916(((frost$io$OutputStream*) $tmp908), $tmp914);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($669:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($668:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// unreffing REF($667:frost.core.String)
// line 228
frost$io$IndentedOutputStream** $tmp918 = &param0->types;
frost$io$IndentedOutputStream* $tmp919 = *$tmp918;
frost$core$Int64* $tmp920 = &$tmp919->level;
frost$core$Int64 $tmp921 = *$tmp920;
frost$core$Int64 $tmp922 = (frost$core$Int64) {1};
int64_t $tmp923 = $tmp921.value;
int64_t $tmp924 = $tmp922.value;
int64_t $tmp925 = $tmp923 + $tmp924;
frost$core$Int64 $tmp926 = (frost$core$Int64) {$tmp925};
frost$core$Int64* $tmp927 = &$tmp919->level;
*$tmp927 = $tmp926;
// line 229
frost$io$IndentedOutputStream** $tmp928 = &param0->types;
frost$io$IndentedOutputStream* $tmp929 = *$tmp928;
frost$core$String** $tmp930 = &param1->name;
frost$core$String* $tmp931 = *$tmp930;
frost$core$String* $tmp932 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp931);
frost$core$String* $tmp933 = frost$core$String$convert$R$frost$core$String($tmp932);
frost$core$String* $tmp934 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp933, &$s935);
$fn937 $tmp936 = ($fn937) ((frost$io$OutputStream*) $tmp929)->$class->vtable[19];
$tmp936(((frost$io$OutputStream*) $tmp929), $tmp934);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($701:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing REF($700:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($699:frost.core.String)
// line 230
frost$io$IndentedOutputStream** $tmp938 = &param0->types;
frost$io$IndentedOutputStream* $tmp939 = *$tmp938;
$fn941 $tmp940 = ($fn941) ((frost$io$OutputStream*) $tmp939)->$class->vtable[19];
$tmp940(((frost$io$OutputStream*) $tmp939), &$s942);
// line 231
frost$io$IndentedOutputStream** $tmp943 = &param0->types;
frost$io$IndentedOutputStream* $tmp944 = *$tmp943;
frost$core$Int64* $tmp945 = &$tmp944->level;
frost$core$Int64 $tmp946 = *$tmp945;
frost$core$Int64 $tmp947 = (frost$core$Int64) {1};
int64_t $tmp948 = $tmp946.value;
int64_t $tmp949 = $tmp947.value;
int64_t $tmp950 = $tmp948 - $tmp949;
frost$core$Int64 $tmp951 = (frost$core$Int64) {$tmp950};
frost$core$Int64* $tmp952 = &$tmp944->level;
*$tmp952 = $tmp951;
// line 232
frost$io$IndentedOutputStream** $tmp953 = &param0->types;
frost$io$IndentedOutputStream* $tmp954 = *$tmp953;
frost$core$String** $tmp955 = &param1->name;
frost$core$String* $tmp956 = *$tmp955;
frost$core$String* $tmp957 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp956);
frost$core$String* $tmp958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s959, $tmp957);
frost$core$String* $tmp960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp958, &$s961);
$fn963 $tmp962 = ($fn963) ((frost$io$OutputStream*) $tmp954)->$class->vtable[19];
$tmp962(((frost$io$OutputStream*) $tmp954), $tmp960);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// unreffing REF($739:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($738:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($737:frost.core.String)
// line 233
frost$core$Weak** $tmp964 = &param0->compiler;
frost$core$Weak* $tmp965 = *$tmp964;
frost$core$Object* $tmp966 = frost$core$Weak$get$R$frost$core$Weak$T($tmp965);
frost$core$Bit $tmp967 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp966) != NULL);
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp969 = (frost$core$Int64) {233};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s970, $tmp969, &$s971);
abort(); // unreachable
block21:;
org$frostlang$frostc$Type* $tmp972 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp973 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp966), $tmp972);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
org$frostlang$frostc$ClassDecl* $tmp974 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local3) = $tmp973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// unreffing REF($766:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// unreffing REF($765:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp966);
// unreffing REF($755:frost.core.Weak.T)
// line 234
frost$core$Weak** $tmp975 = &param0->compiler;
frost$core$Weak* $tmp976 = *$tmp975;
frost$core$Object* $tmp977 = frost$core$Weak$get$R$frost$core$Weak$T($tmp976);
frost$core$Bit $tmp978 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp977) != NULL);
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp980 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s981, $tmp980, &$s982);
abort(); // unreachable
block23:;
org$frostlang$frostc$ClassDecl* $tmp983 = *(&local3);
frost$core$Bit $tmp984 = frost$core$Bit$init$builtin_bit($tmp983 != NULL);
bool $tmp985 = $tmp984.value;
if ($tmp985) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp986 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s987, $tmp986, &$s988);
abort(); // unreachable
block25:;
frost$collections$ListView* $tmp989 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp977), $tmp983);
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$collections$ListView* $tmp990 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local4) = $tmp989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// unreffing REF($806:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp977);
// unreffing REF($787:frost.core.Weak.T)
// line 235
frost$io$IndentedOutputStream** $tmp991 = &param0->types;
frost$io$IndentedOutputStream* $tmp992 = *$tmp991;
frost$collections$ListView* $tmp993 = *(&local4);
ITable* $tmp994 = ((frost$collections$CollectionView*) $tmp993)->$class->itable;
while ($tmp994->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp994 = $tmp994->next;
}
$fn996 $tmp995 = $tmp994->methods[0];
frost$core$Int64 $tmp997 = $tmp995(((frost$collections$CollectionView*) $tmp993));
frost$core$Int64$wrapper* $tmp998;
$tmp998 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp998->value = $tmp997;
frost$core$String* $tmp999 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1000, ((frost$core$Object*) $tmp998));
frost$core$String* $tmp1001 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp999, &$s1002);
frost$core$String* $tmp1003 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1004, $tmp1001);
frost$core$String** $tmp1005 = &param1->name;
frost$core$String* $tmp1006 = *$tmp1005;
frost$core$String* $tmp1007 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1006);
frost$core$String* $tmp1008 = frost$core$String$convert$R$frost$core$String($tmp1007);
frost$core$String* $tmp1009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1008, &$s1010);
frost$core$String* $tmp1011 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1003, $tmp1009);
$fn1013 $tmp1012 = ($fn1013) ((frost$io$OutputStream*) $tmp992)->$class->vtable[19];
$tmp1012(((frost$io$OutputStream*) $tmp992), $tmp1011);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// unreffing REF($837:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing REF($836:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
// unreffing REF($835:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing REF($834:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing REF($831:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing REF($830:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing REF($829:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing REF($828:frost.core.Object)
// line 239
frost$io$IndentedOutputStream** $tmp1014 = &param0->types;
frost$io$IndentedOutputStream* $tmp1015 = *$tmp1014;
frost$core$String** $tmp1016 = &param1->name;
frost$core$String* $tmp1017 = *$tmp1016;
frost$core$String* $tmp1018 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1017);
frost$core$String* $tmp1019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1020, $tmp1018);
frost$core$String* $tmp1021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1019, &$s1022);
frost$core$String** $tmp1023 = &param1->name;
frost$core$String* $tmp1024 = *$tmp1023;
frost$core$String* $tmp1025 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1024);
frost$core$String* $tmp1026 = frost$core$String$convert$R$frost$core$String($tmp1025);
frost$core$String* $tmp1027 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1026, &$s1028);
frost$core$String* $tmp1029 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1021, $tmp1027);
$fn1031 $tmp1030 = ($fn1031) ((frost$io$OutputStream*) $tmp1015)->$class->vtable[19];
$tmp1030(((frost$io$OutputStream*) $tmp1015), $tmp1029);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
// unreffing REF($878:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($877:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing REF($876:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing REF($875:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing REF($872:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing REF($871:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($870:frost.core.String)
frost$collections$ListView* $tmp1032 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing valueVTable
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1033 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing value
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block18;
block18:;
frost$io$File* $tmp1034 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing typesPath
*(&local1) = ((frost$io$File*) NULL);
frost$io$File* $tmp1035 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing path
*(&local0) = ((frost$io$File*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
// line 245
frost$core$Weak** $tmp1036 = &param1->owner;
frost$core$Weak* $tmp1037 = *$tmp1036;
frost$core$Object* $tmp1038 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1037);
org$frostlang$frostc$Type** $tmp1039 = &((org$frostlang$frostc$ClassDecl*) $tmp1038)->type;
org$frostlang$frostc$Type* $tmp1040 = *$tmp1039;
frost$core$String* $tmp1041 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1040);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$String* $tmp1042 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local0) = $tmp1041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1038);
// unreffing REF($4:frost.core.Weak.T)
// line 246
org$frostlang$frostc$MethodDecl$Kind* $tmp1043 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1044 = *$tmp1043;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1045;
$tmp1045 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1045->value = $tmp1044;
frost$core$Int64 $tmp1046 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1047 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1046);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1048;
$tmp1048 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1048->value = $tmp1047;
ITable* $tmp1049 = ((frost$core$Equatable*) $tmp1045)->$class->itable;
while ($tmp1049->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1049 = $tmp1049->next;
}
$fn1051 $tmp1050 = $tmp1049->methods[0];
frost$core$Bit $tmp1052 = $tmp1050(((frost$core$Equatable*) $tmp1045), ((frost$core$Equatable*) $tmp1048));
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block3; else goto block4;
block3:;
frost$core$String* $tmp1054 = *(&local0);
frost$core$Bit $tmp1055 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1054, &$s1056);
frost$core$Bit $tmp1057 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1055);
*(&local1) = $tmp1057;
goto block5;
block4:;
*(&local1) = $tmp1052;
goto block5;
block5:;
frost$core$Bit $tmp1058 = *(&local1);
bool $tmp1059 = $tmp1058.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1048)));
// unreffing REF($29:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1045)));
// unreffing REF($25:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1059) goto block1; else goto block2;
block1:;
// line 247
frost$core$String* $tmp1060 = *(&local0);
frost$core$String* $tmp1061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1060, &$s1062);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
// unreffing REF($52:frost.core.String)
frost$core$String* $tmp1063 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1061;
block2:;
// line 249
frost$core$String* $tmp1064 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$String* $tmp1065 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1064;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 269
org$frostlang$frostc$Type** $tmp1066 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1067 = *$tmp1066;
frost$core$Bit $tmp1068 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1067);
frost$core$Bit $tmp1069 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1068);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block1; else goto block2;
block1:;
// line 270
frost$core$Bit $tmp1071 = frost$core$Bit$init$builtin_bit(false);
return $tmp1071;
block2:;
// line 272
org$frostlang$frostc$Annotations** $tmp1072 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1073 = *$tmp1072;
frost$core$Bit $tmp1074 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1073);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1076 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1077 = *$tmp1076;
frost$core$Bit $tmp1078 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1077);
*(&local1) = $tmp1078;
goto block5;
block4:;
*(&local1) = $tmp1074;
goto block5;
block5:;
frost$core$Bit $tmp1079 = *(&local1);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1081 = &param0->compiler;
frost$core$Weak* $tmp1082 = *$tmp1081;
frost$core$Object* $tmp1083 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1082);
frost$core$Bit $tmp1084 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1083) != NULL);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1086 = (frost$core$Int64) {273};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1087, $tmp1086, &$s1088);
abort(); // unreachable
block9:;
frost$core$Weak** $tmp1089 = &param0->compiler;
frost$core$Weak* $tmp1090 = *$tmp1089;
frost$core$Object* $tmp1091 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1090);
frost$core$Bit $tmp1092 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1091) != NULL);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1094 = (frost$core$Int64) {273};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1095, $tmp1094, &$s1096);
abort(); // unreachable
block11:;
org$frostlang$frostc$Type** $tmp1097 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1098 = *$tmp1097;
org$frostlang$frostc$ClassDecl* $tmp1099 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1091), $tmp1098);
frost$core$Bit $tmp1100 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1083), $tmp1099);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// unreffing REF($54:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1091);
// unreffing REF($42:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1083);
// unreffing REF($29:frost.core.Weak.T)
*(&local0) = $tmp1100;
goto block8;
block7:;
*(&local0) = $tmp1079;
goto block8;
block8:;
frost$core$Bit $tmp1101 = *(&local0);
*(&local2) = $tmp1101;
// line 278
frost$core$Bit $tmp1102 = *(&local2);
frost$core$Bit $tmp1103 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1102);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block13; else goto block14;
block13:;
*(&local3) = $tmp1103;
goto block15;
block14:;
org$frostlang$frostc$Annotations** $tmp1105 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1106 = *$tmp1105;
frost$core$Bit $tmp1107 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1106);
frost$core$Bit $tmp1108 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1107);
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1110 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1111 = *$tmp1110;
frost$core$Bit $tmp1112 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1111);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block19; else goto block20;
block19:;
*(&local5) = $tmp1112;
goto block21;
block20:;
org$frostlang$frostc$Annotations** $tmp1114 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1115 = *$tmp1114;
frost$core$Bit $tmp1116 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1115);
*(&local5) = $tmp1116;
goto block21;
block21:;
frost$core$Bit $tmp1117 = *(&local5);
*(&local4) = $tmp1117;
goto block18;
block17:;
*(&local4) = $tmp1108;
goto block18;
block18:;
frost$core$Bit $tmp1118 = *(&local4);
*(&local3) = $tmp1118;
goto block15;
block15:;
frost$core$Bit $tmp1119 = *(&local3);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {278};
frost$core$String* $tmp1122 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1124, $tmp1122);
frost$core$String* $tmp1125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1123, &$s1126);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1127, $tmp1121, $tmp1125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// unreffing REF($110:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
// unreffing REF($109:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// unreffing REF($108:frost.core.String)
abort(); // unreachable
block22:;
// line 280
frost$core$Bit $tmp1128 = *(&local2);
return $tmp1128;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
frost$core$String* local3 = NULL;
// line 285
frost$io$MemoryOutputStream** $tmp1129 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1130 = *$tmp1129;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$io$MemoryOutputStream** $tmp1131 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1132 = *$tmp1131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$io$MemoryOutputStream** $tmp1133 = &param0->importStream;
*$tmp1133 = $tmp1130;
// line 286
frost$collections$HashSet** $tmp1134 = &param0->bodyImports;
frost$collections$HashSet* $tmp1135 = *$tmp1134;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$collections$HashSet** $tmp1136 = &param0->imports;
frost$collections$HashSet* $tmp1137 = *$tmp1136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$collections$HashSet** $tmp1138 = &param0->imports;
*$tmp1138 = $tmp1135;
// line 287
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1139));
frost$core$String* $tmp1140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local0) = &$s1141;
// line 288
frost$core$Bit $tmp1142 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block1; else goto block3;
block1:;
// line 289
frost$io$IndentedOutputStream** $tmp1144 = &param0->body;
frost$io$IndentedOutputStream* $tmp1145 = *$tmp1144;
frost$core$String* $tmp1146 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1148, $tmp1146);
frost$core$String* $tmp1149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1147, &$s1150);
org$frostlang$frostc$Type** $tmp1151 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1152 = *$tmp1151;
frost$core$String* $tmp1153 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1152);
frost$core$String* $tmp1154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1149, $tmp1153);
frost$core$String* $tmp1155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1154, &$s1156);
$fn1158 $tmp1157 = ($fn1158) ((frost$io$OutputStream*) $tmp1145)->$class->vtable[17];
$tmp1157(((frost$io$OutputStream*) $tmp1145), $tmp1155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
// unreffing REF($43:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing REF($38:frost.core.String)
// line 290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1159));
frost$core$String* $tmp1160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local0) = &$s1161;
goto block2;
block3:;
// line 1
// line 293
frost$io$IndentedOutputStream** $tmp1162 = &param0->body;
frost$io$IndentedOutputStream* $tmp1163 = *$tmp1162;
org$frostlang$frostc$Type** $tmp1164 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1165 = *$tmp1164;
frost$core$String* $tmp1166 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1165);
frost$core$String* $tmp1167 = frost$core$String$convert$R$frost$core$String($tmp1166);
frost$core$String* $tmp1168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1167, &$s1169);
frost$core$String* $tmp1170 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1168, $tmp1170);
frost$core$String* $tmp1172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1171, &$s1173);
$fn1175 $tmp1174 = ($fn1175) ((frost$io$OutputStream*) $tmp1163)->$class->vtable[17];
$tmp1174(((frost$io$OutputStream*) $tmp1163), $tmp1172);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing REF($86:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
// unreffing REF($85:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
// unreffing REF($83:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
// unreffing REF($81:frost.core.String)
goto block2;
block2:;
// line 295
org$frostlang$frostc$Annotations** $tmp1176 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1177 = *$tmp1176;
frost$core$Bit $tmp1178 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1177);
frost$core$Bit $tmp1179 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1178);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1181 = &param0->compiler;
frost$core$Weak* $tmp1182 = *$tmp1181;
frost$core$Object* $tmp1183 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1182);
frost$core$Bit $tmp1184 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1183) != NULL);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1186 = (frost$core$Int64) {295};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1187, $tmp1186, &$s1188);
abort(); // unreachable
block9:;
frost$core$Bit $tmp1189 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1183), param1);
frost$core$Bit $tmp1190 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1189);
frost$core$Frost$unref$frost$core$Object$Q($tmp1183);
// unreffing REF($118:frost.core.Weak.T)
*(&local1) = $tmp1190;
goto block8;
block7:;
*(&local1) = $tmp1179;
goto block8;
block8:;
frost$core$Bit $tmp1191 = *(&local1);
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block4; else goto block5;
block4:;
// line 296
frost$io$IndentedOutputStream** $tmp1193 = &param0->body;
frost$io$IndentedOutputStream* $tmp1194 = *$tmp1193;
frost$core$String* $tmp1195 = *(&local0);
frost$core$String* $tmp1196 = frost$core$String$convert$R$frost$core$String($tmp1195);
frost$core$String* $tmp1197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1196, &$s1198);
frost$core$String* $tmp1199 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1197, $tmp1199);
frost$core$String* $tmp1201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1200, &$s1202);
$fn1204 $tmp1203 = ($fn1204) ((frost$io$OutputStream*) $tmp1194)->$class->vtable[17];
$tmp1203(((frost$io$OutputStream*) $tmp1194), $tmp1201);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
// unreffing REF($149:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
// unreffing REF($148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
// unreffing REF($147:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
// unreffing REF($146:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// unreffing REF($145:frost.core.String)
// line 297
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1205));
frost$core$String* $tmp1206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local0) = &$s1207;
goto block5;
block5:;
// line 299
frost$collections$Array** $tmp1208 = &param1->parameters;
frost$collections$Array* $tmp1209 = *$tmp1208;
ITable* $tmp1210 = ((frost$collections$Iterable*) $tmp1209)->$class->itable;
while ($tmp1210->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1210 = $tmp1210->next;
}
$fn1212 $tmp1211 = $tmp1210->methods[0];
frost$collections$Iterator* $tmp1213 = $tmp1211(((frost$collections$Iterable*) $tmp1209));
goto block11;
block11:;
ITable* $tmp1214 = $tmp1213->$class->itable;
while ($tmp1214->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1214 = $tmp1214->next;
}
$fn1216 $tmp1215 = $tmp1214->methods[0];
frost$core$Bit $tmp1217 = $tmp1215($tmp1213);
bool $tmp1218 = $tmp1217.value;
if ($tmp1218) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1219 = $tmp1213->$class->itable;
while ($tmp1219->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1219 = $tmp1219->next;
}
$fn1221 $tmp1220 = $tmp1219->methods[1];
frost$core$Object* $tmp1222 = $tmp1220($tmp1213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1222)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1223 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1222);
// line 300
org$frostlang$frostc$MethodDecl$Parameter* $tmp1224 = *(&local2);
frost$core$String** $tmp1225 = &$tmp1224->name;
frost$core$String* $tmp1226 = *$tmp1225;
frost$core$String* $tmp1227 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1226);
frost$core$String* $tmp1228 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1229, $tmp1227);
frost$core$String* $tmp1230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1228, &$s1231);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$String* $tmp1232 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local3) = $tmp1230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// unreffing REF($206:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
// unreffing REF($205:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
// unreffing REF($204:frost.core.String)
// line 301
frost$io$IndentedOutputStream** $tmp1233 = &param0->body;
frost$io$IndentedOutputStream* $tmp1234 = *$tmp1233;
frost$core$String* $tmp1235 = *(&local0);
frost$core$String* $tmp1236 = frost$core$String$convert$R$frost$core$String($tmp1235);
frost$core$String* $tmp1237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1236, &$s1238);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1239 = *(&local2);
org$frostlang$frostc$Type** $tmp1240 = &$tmp1239->type;
org$frostlang$frostc$Type* $tmp1241 = *$tmp1240;
frost$core$String* $tmp1242 = *(&local3);
frost$core$String* $tmp1243 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1241, $tmp1242);
frost$core$String* $tmp1244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1237, $tmp1243);
frost$core$String* $tmp1245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1244, &$s1246);
$fn1248 $tmp1247 = ($fn1248) ((frost$io$OutputStream*) $tmp1234)->$class->vtable[17];
$tmp1247(((frost$io$OutputStream*) $tmp1234), $tmp1245);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
// unreffing REF($236:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
// unreffing REF($235:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing REF($234:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
// unreffing REF($229:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// unreffing REF($228:frost.core.String)
// line 302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1249));
frost$core$String* $tmp1250 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local0) = &$s1251;
frost$core$String* $tmp1252 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1222);
// unreffing REF($192:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp1253 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing p
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
// unreffing REF($181:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 304
frost$io$IndentedOutputStream** $tmp1254 = &param0->body;
frost$io$IndentedOutputStream* $tmp1255 = *$tmp1254;
$fn1257 $tmp1256 = ($fn1257) ((frost$io$OutputStream*) $tmp1255)->$class->vtable[19];
$tmp1256(((frost$io$OutputStream*) $tmp1255), &$s1258);
frost$core$String* $tmp1259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
// unreffing separator
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

// line 309
org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 314
frost$io$IndentedOutputStream** $tmp1260 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1261 = *$tmp1260;
frost$io$MemoryOutputStream** $tmp1262 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1263 = *$tmp1262;
$fn1265 $tmp1264 = ($fn1265) ((frost$io$OutputStream*) $tmp1261)->$class->vtable[20];
$tmp1264(((frost$io$OutputStream*) $tmp1261), ((frost$core$Object*) $tmp1263));
// line 315
frost$io$IndentedOutputStream** $tmp1266 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1267 = *$tmp1266;
frost$io$MemoryOutputStream** $tmp1268 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1269 = *$tmp1268;
$fn1271 $tmp1270 = ($fn1271) ((frost$io$OutputStream*) $tmp1267)->$class->vtable[20];
$tmp1270(((frost$io$OutputStream*) $tmp1267), ((frost$core$Object*) $tmp1269));
// line 316
frost$io$IndentedOutputStream** $tmp1272 = &param0->out;
frost$io$IndentedOutputStream* $tmp1273 = *$tmp1272;
frost$io$MemoryOutputStream** $tmp1274 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1275 = *$tmp1274;
$fn1277 $tmp1276 = ($fn1277) ((frost$io$OutputStream*) $tmp1273)->$class->vtable[20];
$tmp1276(((frost$io$OutputStream*) $tmp1273), ((frost$core$Object*) $tmp1275));
// line 317
frost$io$IndentedOutputStream** $tmp1278 = &param0->out;
frost$io$IndentedOutputStream* $tmp1279 = *$tmp1278;
frost$io$MemoryOutputStream** $tmp1280 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1281 = *$tmp1280;
$fn1283 $tmp1282 = ($fn1283) ((frost$io$OutputStream*) $tmp1279)->$class->vtable[20];
$tmp1282(((frost$io$OutputStream*) $tmp1279), ((frost$core$Object*) $tmp1281));
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1284 = &param0->compiler;
frost$core$Weak* $tmp1285 = *$tmp1284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$io$MemoryOutputStream** $tmp1286 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1287 = *$tmp1286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$io$MemoryOutputStream** $tmp1288 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1289 = *$tmp1288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$io$IndentedOutputStream** $tmp1290 = &param0->types;
frost$io$IndentedOutputStream* $tmp1291 = *$tmp1290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
frost$io$MemoryOutputStream** $tmp1292 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1293 = *$tmp1292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$io$MemoryOutputStream** $tmp1294 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1295 = *$tmp1294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$io$IndentedOutputStream** $tmp1296 = &param0->body;
frost$io$IndentedOutputStream* $tmp1297 = *$tmp1296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$collections$HashSet** $tmp1298 = &param0->typeImports;
frost$collections$HashSet* $tmp1299 = *$tmp1298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$collections$HashSet** $tmp1300 = &param0->bodyImports;
frost$collections$HashSet* $tmp1301 = *$tmp1300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$collections$HashSet** $tmp1302 = &param0->imports;
frost$collections$HashSet* $tmp1303 = *$tmp1302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$io$MemoryOutputStream** $tmp1304 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1305 = *$tmp1304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$io$File** $tmp1306 = &param0->outDir;
frost$io$File* $tmp1307 = *$tmp1306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$io$IndentedOutputStream** $tmp1308 = &param0->out;
frost$io$IndentedOutputStream* $tmp1309 = *$tmp1308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$io$IndentedOutputStream** $tmp1310 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1311 = *$tmp1310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1312 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1313 = *$tmp1312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Weak** $tmp1314 = &param0->cCodeGen;
frost$core$Weak* $tmp1315 = *$tmp1314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
org$frostlang$frostc$CCodeGenerator** $tmp1316 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1317 = *$tmp1316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
return;

}

