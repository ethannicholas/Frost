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
#include "frost/core/Error.h"
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

typedef void (*$fn243)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn275)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn435)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn468)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn621)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn626)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn637)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn641)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn646)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn668)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn690)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn694)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn699)(frost$collections$Iterator*);
typedef void (*$fn735)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn752)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn762)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn767)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn789)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn793)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn820)(frost$collections$CollectionView*);
typedef void (*$fn836)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn853)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn874)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn888)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn893)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn904)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn925)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn936)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn956)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn960)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn982)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1015)(frost$collections$CollectionView*);
typedef void (*$fn1032)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1050)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1084)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn1191)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1208)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1237)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1245)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1249)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1254)(frost$collections$Iterator*);
typedef void (*$fn1281)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1290)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1298)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1304)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1310)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1316)(frost$io$OutputStream*, frost$core$Object*);

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
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s1021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s1029 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };

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

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$io$File* local2 = NULL;
org$frostlang$frostc$FieldDecl* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// line 178
*(&local0) = ((frost$core$Error*) NULL);
// line 179
frost$io$MemoryOutputStream** $tmp562 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp563 = *$tmp562;
frost$io$MemoryOutputStream$clear($tmp563);
// line 180
frost$io$MemoryOutputStream** $tmp564 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp565 = *$tmp564;
frost$io$MemoryOutputStream$clear($tmp565);
// line 181
frost$io$MemoryOutputStream** $tmp566 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp567 = *$tmp566;
frost$io$MemoryOutputStream$clear($tmp567);
// line 182
frost$io$MemoryOutputStream** $tmp568 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp569 = *$tmp568;
frost$io$MemoryOutputStream$clear($tmp569);
// line 183
frost$collections$HashSet** $tmp570 = &param0->typeImports;
frost$collections$HashSet* $tmp571 = *$tmp570;
frost$collections$HashSet$clear($tmp571);
// line 184
frost$collections$HashSet** $tmp572 = &param0->bodyImports;
frost$collections$HashSet* $tmp573 = *$tmp572;
frost$collections$HashSet$clear($tmp573);
// line 185
frost$io$File* $tmp574 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s575);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$io$File* $tmp576 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local1) = $tmp574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// unreffing REF($29:frost.io.File)
// line 186
frost$io$File* $tmp577 = *(&local1);
frost$io$File* $tmp578 = frost$io$File$get_parent$R$frost$io$File$Q($tmp577);
frost$core$Bit $tmp579 = frost$core$Bit$init$builtin_bit($tmp578 != NULL);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block3:;
frost$io$File$createDirectories($tmp578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($42:frost.io.File?)
// line 187
frost$io$IndentedOutputStream* $tmp584 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp585 = *(&local1);
frost$core$Maybe* $tmp586 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp585);
// try maybe check
frost$core$Int64* $tmp587 = &$tmp586->$rawValue;
frost$core$Int64 $tmp588 = *$tmp587;
int64_t $tmp589 = $tmp588.value;
bool $tmp590 = $tmp589 == 0;
if ($tmp590) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp591 = (frost$core$Error**) ($tmp586->$data + 0);
frost$core$Error* $tmp592 = *$tmp591;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local0) = $tmp592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing REF($58:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($56:frost.io.IndentedOutputStream)
frost$io$File* $tmp593 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Object** $tmp594 = (frost$core$Object**) ($tmp586->$data + 0);
frost$core$Object* $tmp595 = *$tmp594;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp584, ((frost$io$OutputStream*) $tmp595));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$io$IndentedOutputStream** $tmp596 = &param0->out;
frost$io$IndentedOutputStream* $tmp597 = *$tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$io$IndentedOutputStream** $tmp598 = &param0->out;
*$tmp598 = $tmp584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing REF($58:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($56:frost.io.IndentedOutputStream)
// line 188
frost$io$File* $tmp599 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s600);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$io$File* $tmp601 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local2) = $tmp599;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// unreffing REF($102:frost.io.File)
// line 189
frost$io$IndentedOutputStream* $tmp602 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp603 = *(&local2);
frost$core$Maybe* $tmp604 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp603);
// try maybe check
frost$core$Int64* $tmp605 = &$tmp604->$rawValue;
frost$core$Int64 $tmp606 = *$tmp605;
int64_t $tmp607 = $tmp606.value;
bool $tmp608 = $tmp607 == 0;
if ($tmp608) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp609 = (frost$core$Error**) ($tmp604->$data + 0);
frost$core$Error* $tmp610 = *$tmp609;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local0) = $tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($116:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
// unreffing REF($114:frost.io.IndentedOutputStream)
frost$io$File* $tmp611 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp612 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp613 = (frost$core$Object**) ($tmp604->$data + 0);
frost$core$Object* $tmp614 = *$tmp613;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp602, ((frost$io$OutputStream*) $tmp614));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$io$IndentedOutputStream** $tmp615 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp616 = *$tmp615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$io$IndentedOutputStream** $tmp617 = &param0->typesOut;
*$tmp617 = $tmp602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($116:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
// unreffing REF($114:frost.io.IndentedOutputStream)
// line 190
frost$io$IndentedOutputStream** $tmp618 = &param0->out;
frost$io$IndentedOutputStream* $tmp619 = *$tmp618;
$fn621 $tmp620 = ($fn621) ((frost$io$OutputStream*) $tmp619)->$class->vtable[19];
$tmp620(((frost$io$OutputStream*) $tmp619), &$s622);
// line 191
frost$io$IndentedOutputStream** $tmp623 = &param0->out;
frost$io$IndentedOutputStream* $tmp624 = *$tmp623;
$fn626 $tmp625 = ($fn626) ((frost$io$OutputStream*) $tmp624)->$class->vtable[19];
$tmp625(((frost$io$OutputStream*) $tmp624), &$s627);
// line 192
frost$io$IndentedOutputStream** $tmp628 = &param0->out;
frost$io$IndentedOutputStream* $tmp629 = *$tmp628;
frost$io$File* $tmp630 = *(&local2);
frost$core$String* $tmp631 = frost$io$File$get_name$R$frost$core$String($tmp630);
frost$core$String* $tmp632 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s633, $tmp631);
frost$core$String* $tmp634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp632, &$s635);
$fn637 $tmp636 = ($fn637) ((frost$io$OutputStream*) $tmp629)->$class->vtable[19];
$tmp636(((frost$io$OutputStream*) $tmp629), $tmp634);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing REF($183:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing REF($182:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($181:frost.core.String)
// line 193
frost$io$IndentedOutputStream** $tmp638 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp639 = *$tmp638;
$fn641 $tmp640 = ($fn641) ((frost$io$OutputStream*) $tmp639)->$class->vtable[19];
$tmp640(((frost$io$OutputStream*) $tmp639), &$s642);
// line 194
frost$io$IndentedOutputStream** $tmp643 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp644 = *$tmp643;
$fn646 $tmp645 = ($fn646) ((frost$io$OutputStream*) $tmp644)->$class->vtable[19];
$tmp645(((frost$io$OutputStream*) $tmp644), &$s647);
// line 195
frost$io$MemoryOutputStream** $tmp648 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp649 = *$tmp648;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$io$MemoryOutputStream** $tmp650 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp651 = *$tmp650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$io$MemoryOutputStream** $tmp652 = &param0->importStream;
*$tmp652 = $tmp649;
// line 196
frost$collections$HashSet** $tmp653 = &param0->typeImports;
frost$collections$HashSet* $tmp654 = *$tmp653;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$collections$HashSet** $tmp655 = &param0->imports;
frost$collections$HashSet* $tmp656 = *$tmp655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$collections$HashSet** $tmp657 = &param0->imports;
*$tmp657 = $tmp654;
// line 197
frost$io$IndentedOutputStream** $tmp658 = &param0->types;
frost$io$IndentedOutputStream* $tmp659 = *$tmp658;
frost$core$String** $tmp660 = &param1->name;
frost$core$String* $tmp661 = *$tmp660;
frost$core$String* $tmp662 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp661);
frost$core$String* $tmp663 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s664, $tmp662);
frost$core$String* $tmp665 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp663, &$s666);
$fn668 $tmp667 = ($fn668) ((frost$io$OutputStream*) $tmp659)->$class->vtable[19];
$tmp667(((frost$io$OutputStream*) $tmp659), $tmp665);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing REF($237:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing REF($236:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($235:frost.core.String)
// line 198
frost$io$IndentedOutputStream** $tmp669 = &param0->types;
frost$io$IndentedOutputStream* $tmp670 = *$tmp669;
frost$core$Int64* $tmp671 = &$tmp670->level;
frost$core$Int64 $tmp672 = *$tmp671;
frost$core$Int64 $tmp673 = (frost$core$Int64) {1};
int64_t $tmp674 = $tmp672.value;
int64_t $tmp675 = $tmp673.value;
int64_t $tmp676 = $tmp674 + $tmp675;
frost$core$Int64 $tmp677 = (frost$core$Int64) {$tmp676};
frost$core$Int64* $tmp678 = &$tmp670->level;
*$tmp678 = $tmp677;
// line 199
frost$core$Weak** $tmp679 = &param0->compiler;
frost$core$Weak* $tmp680 = *$tmp679;
frost$core$Object* $tmp681 = frost$core$Weak$get$R$frost$core$Weak$T($tmp680);
frost$core$Bit $tmp682 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp681) != NULL);
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp684 = (frost$core$Int64) {199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s685, $tmp684, &$s686);
abort(); // unreachable
block9:;
frost$collections$ListView* $tmp687 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp681), param1);
ITable* $tmp688 = ((frost$collections$Iterable*) $tmp687)->$class->itable;
while ($tmp688->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp688 = $tmp688->next;
}
$fn690 $tmp689 = $tmp688->methods[0];
frost$collections$Iterator* $tmp691 = $tmp689(((frost$collections$Iterable*) $tmp687));
goto block11;
block11:;
ITable* $tmp692 = $tmp691->$class->itable;
while ($tmp692->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[0];
frost$core$Bit $tmp695 = $tmp693($tmp691);
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block13; else goto block12;
block12:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp697 = $tmp691->$class->itable;
while ($tmp697->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp697 = $tmp697->next;
}
$fn699 $tmp698 = $tmp697->methods[1];
frost$core$Object* $tmp700 = $tmp698($tmp691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp700)));
org$frostlang$frostc$FieldDecl* $tmp701 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp700);
// line 200
frost$core$Weak** $tmp702 = &param0->compiler;
frost$core$Weak* $tmp703 = *$tmp702;
frost$core$Object* $tmp704 = frost$core$Weak$get$R$frost$core$Weak$T($tmp703);
frost$core$Bit $tmp705 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp704) != NULL);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp707 = (frost$core$Int64) {200};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s708, $tmp707, &$s709);
abort(); // unreachable
block14:;
org$frostlang$frostc$FieldDecl* $tmp710 = *(&local3);
frost$core$Bit $tmp711 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp704), $tmp710);
frost$core$Frost$unref$frost$core$Object$Q($tmp704);
// unreffing REF($302:frost.core.Weak.T)
// line 201
org$frostlang$frostc$FieldDecl* $tmp712 = *(&local3);
org$frostlang$frostc$Type** $tmp713 = &$tmp712->type;
org$frostlang$frostc$Type* $tmp714 = *$tmp713;
org$frostlang$frostc$Type* $tmp715 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp716 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp714, $tmp715);
bool $tmp717 = $tmp716.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing REF($321:org.frostlang.frostc.Type)
if ($tmp717) goto block16; else goto block18;
block16:;
// line 202
frost$io$IndentedOutputStream** $tmp718 = &param0->types;
frost$io$IndentedOutputStream* $tmp719 = *$tmp718;
org$frostlang$frostc$FieldDecl* $tmp720 = *(&local3);
frost$core$String** $tmp721 = &((org$frostlang$frostc$Symbol*) $tmp720)->name;
frost$core$String* $tmp722 = *$tmp721;
frost$core$String* $tmp723 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s724, $tmp722);
frost$core$String* $tmp725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp723, &$s726);
org$frostlang$frostc$LLVMCodeGenerator** $tmp727 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp728 = *$tmp727;
frost$core$Int64 $tmp729 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp728, param1);
frost$core$Int64$wrapper* $tmp730;
$tmp730 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp730->value = $tmp729;
frost$core$String* $tmp731 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp725, ((frost$core$Object*) $tmp730));
frost$core$String* $tmp732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp731, &$s733);
$fn735 $tmp734 = ($fn735) ((frost$io$OutputStream*) $tmp719)->$class->vtable[19];
$tmp734(((frost$io$OutputStream*) $tmp719), $tmp732);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
// unreffing REF($343:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// unreffing REF($342:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing REF($341:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing REF($337:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($336:frost.core.String)
goto block17;
block18:;
// line 1
// line 205
frost$io$IndentedOutputStream** $tmp736 = &param0->types;
frost$io$IndentedOutputStream* $tmp737 = *$tmp736;
org$frostlang$frostc$FieldDecl* $tmp738 = *(&local3);
org$frostlang$frostc$Type** $tmp739 = &$tmp738->type;
org$frostlang$frostc$Type* $tmp740 = *$tmp739;
frost$core$String* $tmp741 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp740);
frost$core$String* $tmp742 = frost$core$String$convert$R$frost$core$String($tmp741);
frost$core$String* $tmp743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp742, &$s744);
org$frostlang$frostc$FieldDecl* $tmp745 = *(&local3);
frost$core$String** $tmp746 = &((org$frostlang$frostc$Symbol*) $tmp745)->name;
frost$core$String* $tmp747 = *$tmp746;
frost$core$String* $tmp748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp743, $tmp747);
frost$core$String* $tmp749 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp748, &$s750);
$fn752 $tmp751 = ($fn752) ((frost$io$OutputStream*) $tmp737)->$class->vtable[19];
$tmp751(((frost$io$OutputStream*) $tmp737), $tmp749);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// unreffing REF($378:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing REF($377:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// unreffing REF($372:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
// unreffing REF($371:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
// unreffing REF($370:frost.core.String)
goto block17;
block17:;
frost$core$Frost$unref$frost$core$Object$Q($tmp700);
// unreffing REF($290:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp753 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// unreffing REF($279:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// unreffing REF($275:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp681);
// unreffing REF($265:frost.core.Weak.T)
// line 208
frost$core$String** $tmp754 = &param1->name;
frost$core$String* $tmp755 = *$tmp754;
frost$core$Bit $tmp756 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp755, &$s757);
bool $tmp758 = $tmp756.value;
if ($tmp758) goto block19; else goto block20;
block19:;
// line 209
frost$io$IndentedOutputStream** $tmp759 = &param0->types;
frost$io$IndentedOutputStream* $tmp760 = *$tmp759;
$fn762 $tmp761 = ($fn762) ((frost$io$OutputStream*) $tmp760)->$class->vtable[19];
$tmp761(((frost$io$OutputStream*) $tmp760), &$s763);
// line 210
frost$io$IndentedOutputStream** $tmp764 = &param0->types;
frost$io$IndentedOutputStream* $tmp765 = *$tmp764;
$fn767 $tmp766 = ($fn767) ((frost$io$OutputStream*) $tmp765)->$class->vtable[19];
$tmp766(((frost$io$OutputStream*) $tmp765), &$s768);
goto block20;
block20:;
// line 212
frost$io$IndentedOutputStream** $tmp769 = &param0->types;
frost$io$IndentedOutputStream* $tmp770 = *$tmp769;
frost$core$Int64* $tmp771 = &$tmp770->level;
frost$core$Int64 $tmp772 = *$tmp771;
frost$core$Int64 $tmp773 = (frost$core$Int64) {1};
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774 - $tmp775;
frost$core$Int64 $tmp777 = (frost$core$Int64) {$tmp776};
frost$core$Int64* $tmp778 = &$tmp770->level;
*$tmp778 = $tmp777;
// line 213
frost$io$IndentedOutputStream** $tmp779 = &param0->types;
frost$io$IndentedOutputStream* $tmp780 = *$tmp779;
frost$core$String** $tmp781 = &param1->name;
frost$core$String* $tmp782 = *$tmp781;
frost$core$String* $tmp783 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp782);
frost$core$String* $tmp784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s785, $tmp783);
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp784, &$s787);
$fn789 $tmp788 = ($fn789) ((frost$io$OutputStream*) $tmp780)->$class->vtable[19];
$tmp788(((frost$io$OutputStream*) $tmp780), $tmp786);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing REF($454:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing REF($453:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// unreffing REF($452:frost.core.String)
// line 214
frost$io$IndentedOutputStream** $tmp790 = &param0->types;
frost$io$IndentedOutputStream* $tmp791 = *$tmp790;
$fn793 $tmp792 = ($fn793) ((frost$io$OutputStream*) $tmp791)->$class->vtable[19];
$tmp792(((frost$io$OutputStream*) $tmp791), &$s794);
// line 215
frost$io$IndentedOutputStream** $tmp795 = &param0->types;
frost$io$IndentedOutputStream* $tmp796 = *$tmp795;
org$frostlang$frostc$Type* $tmp797 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp798 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp797);
frost$core$String* $tmp799 = frost$core$String$convert$R$frost$core$String($tmp798);
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp799, &$s801);
org$frostlang$frostc$Type* $tmp802 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp803 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp802);
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp800, $tmp803);
frost$core$String* $tmp805 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, &$s806);
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s808, $tmp805);
frost$core$Weak** $tmp809 = &param0->compiler;
frost$core$Weak* $tmp810 = *$tmp809;
frost$core$Object* $tmp811 = frost$core$Weak$get$R$frost$core$Weak$T($tmp810);
frost$core$Bit $tmp812 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp811) != NULL);
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp814 = (frost$core$Int64) {217};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s815, $tmp814, &$s816);
abort(); // unreachable
block21:;
frost$collections$ListView* $tmp817 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp811), param1);
ITable* $tmp818 = ((frost$collections$CollectionView*) $tmp817)->$class->itable;
while ($tmp818->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp818 = $tmp818->next;
}
$fn820 $tmp819 = $tmp818->methods[0];
frost$core$Int64 $tmp821 = $tmp819(((frost$collections$CollectionView*) $tmp817));
frost$core$Int64$wrapper* $tmp822;
$tmp822 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp822->value = $tmp821;
frost$core$String* $tmp823 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s824, ((frost$core$Object*) $tmp822));
frost$core$String* $tmp825 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp823, &$s826);
frost$core$String* $tmp827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp807, $tmp825);
frost$core$String** $tmp828 = &param1->name;
frost$core$String* $tmp829 = *$tmp828;
frost$core$String* $tmp830 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp829);
frost$core$String* $tmp831 = frost$core$String$convert$R$frost$core$String($tmp830);
frost$core$String* $tmp832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp831, &$s833);
frost$core$String* $tmp834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp827, $tmp832);
$fn836 $tmp835 = ($fn836) ((frost$io$OutputStream*) $tmp796)->$class->vtable[19];
$tmp835(((frost$io$OutputStream*) $tmp796), $tmp834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing REF($511:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing REF($510:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($509:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing REF($508:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// unreffing REF($505:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing REF($504:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($503:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($502:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing REF($498:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp811);
// unreffing REF($488:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing REF($484:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// unreffing REF($483:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing REF($482:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing REF($481:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// unreffing REF($480:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing REF($479:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing REF($478:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// unreffing REF($477:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($476:org.frostlang.frostc.Type)
// line 219
frost$io$IndentedOutputStream** $tmp837 = &param0->types;
frost$io$IndentedOutputStream* $tmp838 = *$tmp837;
frost$core$String** $tmp839 = &param1->name;
frost$core$String* $tmp840 = *$tmp839;
frost$core$String* $tmp841 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp840);
frost$core$String* $tmp842 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s843, $tmp841);
frost$core$String* $tmp844 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp842, &$s845);
frost$core$String** $tmp846 = &param1->name;
frost$core$String* $tmp847 = *$tmp846;
frost$core$String* $tmp848 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp847);
frost$core$String* $tmp849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp844, $tmp848);
frost$core$String* $tmp850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp849, &$s851);
$fn853 $tmp852 = ($fn853) ((frost$io$OutputStream*) $tmp838)->$class->vtable[19];
$tmp852(((frost$io$OutputStream*) $tmp838), $tmp850);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing REF($584:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing REF($583:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
// unreffing REF($582:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($579:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($578:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing REF($577:frost.core.String)
// line 220
frost$core$Weak** $tmp854 = &param0->compiler;
frost$core$Weak* $tmp855 = *$tmp854;
frost$core$Object* $tmp856 = frost$core$Weak$get$R$frost$core$Weak$T($tmp855);
frost$core$Bit $tmp857 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp856) != NULL);
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp859 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s860, $tmp859, &$s861);
abort(); // unreachable
block25:;
frost$core$Bit $tmp862 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp856), param1);
bool $tmp863 = $tmp862.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp856);
// unreffing REF($609:frost.core.Weak.T)
if ($tmp863) goto block23; else goto block24;
block23:;
// line 221
frost$io$IndentedOutputStream** $tmp864 = &param0->types;
frost$io$IndentedOutputStream* $tmp865 = *$tmp864;
frost$core$String** $tmp866 = &param1->name;
frost$core$String* $tmp867 = *$tmp866;
frost$core$String* $tmp868 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp867);
frost$core$String* $tmp869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s870, $tmp868);
frost$core$String* $tmp871 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp869, &$s872);
$fn874 $tmp873 = ($fn874) ((frost$io$OutputStream*) $tmp865)->$class->vtable[19];
$tmp873(((frost$io$OutputStream*) $tmp865), $tmp871);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
// unreffing REF($634:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing REF($633:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing REF($632:frost.core.String)
// line 222
frost$io$IndentedOutputStream** $tmp875 = &param0->types;
frost$io$IndentedOutputStream* $tmp876 = *$tmp875;
frost$core$Int64* $tmp877 = &$tmp876->level;
frost$core$Int64 $tmp878 = *$tmp877;
frost$core$Int64 $tmp879 = (frost$core$Int64) {1};
int64_t $tmp880 = $tmp878.value;
int64_t $tmp881 = $tmp879.value;
int64_t $tmp882 = $tmp880 + $tmp881;
frost$core$Int64 $tmp883 = (frost$core$Int64) {$tmp882};
frost$core$Int64* $tmp884 = &$tmp876->level;
*$tmp884 = $tmp883;
// line 223
frost$io$IndentedOutputStream** $tmp885 = &param0->types;
frost$io$IndentedOutputStream* $tmp886 = *$tmp885;
$fn888 $tmp887 = ($fn888) ((frost$io$OutputStream*) $tmp886)->$class->vtable[19];
$tmp887(((frost$io$OutputStream*) $tmp886), &$s889);
// line 224
frost$io$IndentedOutputStream** $tmp890 = &param0->types;
frost$io$IndentedOutputStream* $tmp891 = *$tmp890;
$fn893 $tmp892 = ($fn893) ((frost$io$OutputStream*) $tmp891)->$class->vtable[19];
$tmp892(((frost$io$OutputStream*) $tmp891), &$s894);
// line 225
frost$io$IndentedOutputStream** $tmp895 = &param0->types;
frost$io$IndentedOutputStream* $tmp896 = *$tmp895;
org$frostlang$frostc$Type** $tmp897 = &param1->type;
org$frostlang$frostc$Type* $tmp898 = *$tmp897;
frost$core$String* $tmp899 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp898);
frost$core$String* $tmp900 = frost$core$String$convert$R$frost$core$String($tmp899);
frost$core$String* $tmp901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp900, &$s902);
$fn904 $tmp903 = ($fn904) ((frost$io$OutputStream*) $tmp896)->$class->vtable[19];
$tmp903(((frost$io$OutputStream*) $tmp896), $tmp901);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing REF($678:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing REF($677:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing REF($676:frost.core.String)
// line 226
frost$io$IndentedOutputStream** $tmp905 = &param0->types;
frost$io$IndentedOutputStream* $tmp906 = *$tmp905;
frost$core$Int64* $tmp907 = &$tmp906->level;
frost$core$Int64 $tmp908 = *$tmp907;
frost$core$Int64 $tmp909 = (frost$core$Int64) {1};
int64_t $tmp910 = $tmp908.value;
int64_t $tmp911 = $tmp909.value;
int64_t $tmp912 = $tmp910 - $tmp911;
frost$core$Int64 $tmp913 = (frost$core$Int64) {$tmp912};
frost$core$Int64* $tmp914 = &$tmp906->level;
*$tmp914 = $tmp913;
// line 227
frost$io$IndentedOutputStream** $tmp915 = &param0->types;
frost$io$IndentedOutputStream* $tmp916 = *$tmp915;
frost$core$String** $tmp917 = &param1->name;
frost$core$String* $tmp918 = *$tmp917;
frost$core$String* $tmp919 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp918);
frost$core$String* $tmp920 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s921, $tmp919);
frost$core$String* $tmp922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp920, &$s923);
$fn925 $tmp924 = ($fn925) ((frost$io$OutputStream*) $tmp916)->$class->vtable[19];
$tmp924(((frost$io$OutputStream*) $tmp916), $tmp922);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing REF($710:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing REF($709:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing REF($708:frost.core.String)
// line 228
frost$io$IndentedOutputStream** $tmp926 = &param0->types;
frost$io$IndentedOutputStream* $tmp927 = *$tmp926;
frost$core$String** $tmp928 = &param1->name;
frost$core$String* $tmp929 = *$tmp928;
frost$core$String* $tmp930 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp929);
frost$core$String* $tmp931 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s932, $tmp930);
frost$core$String* $tmp933 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp931, &$s934);
$fn936 $tmp935 = ($fn936) ((frost$io$OutputStream*) $tmp927)->$class->vtable[19];
$tmp935(((frost$io$OutputStream*) $tmp927), $tmp933);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing REF($730:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// unreffing REF($729:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing REF($728:frost.core.String)
// line 229
frost$io$IndentedOutputStream** $tmp937 = &param0->types;
frost$io$IndentedOutputStream* $tmp938 = *$tmp937;
frost$core$Int64* $tmp939 = &$tmp938->level;
frost$core$Int64 $tmp940 = *$tmp939;
frost$core$Int64 $tmp941 = (frost$core$Int64) {1};
int64_t $tmp942 = $tmp940.value;
int64_t $tmp943 = $tmp941.value;
int64_t $tmp944 = $tmp942 + $tmp943;
frost$core$Int64 $tmp945 = (frost$core$Int64) {$tmp944};
frost$core$Int64* $tmp946 = &$tmp938->level;
*$tmp946 = $tmp945;
// line 230
frost$io$IndentedOutputStream** $tmp947 = &param0->types;
frost$io$IndentedOutputStream* $tmp948 = *$tmp947;
frost$core$String** $tmp949 = &param1->name;
frost$core$String* $tmp950 = *$tmp949;
frost$core$String* $tmp951 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp950);
frost$core$String* $tmp952 = frost$core$String$convert$R$frost$core$String($tmp951);
frost$core$String* $tmp953 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp952, &$s954);
$fn956 $tmp955 = ($fn956) ((frost$io$OutputStream*) $tmp948)->$class->vtable[19];
$tmp955(((frost$io$OutputStream*) $tmp948), $tmp953);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing REF($762:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// unreffing REF($761:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing REF($760:frost.core.String)
// line 231
frost$io$IndentedOutputStream** $tmp957 = &param0->types;
frost$io$IndentedOutputStream* $tmp958 = *$tmp957;
$fn960 $tmp959 = ($fn960) ((frost$io$OutputStream*) $tmp958)->$class->vtable[19];
$tmp959(((frost$io$OutputStream*) $tmp958), &$s961);
// line 232
frost$io$IndentedOutputStream** $tmp962 = &param0->types;
frost$io$IndentedOutputStream* $tmp963 = *$tmp962;
frost$core$Int64* $tmp964 = &$tmp963->level;
frost$core$Int64 $tmp965 = *$tmp964;
frost$core$Int64 $tmp966 = (frost$core$Int64) {1};
int64_t $tmp967 = $tmp965.value;
int64_t $tmp968 = $tmp966.value;
int64_t $tmp969 = $tmp967 - $tmp968;
frost$core$Int64 $tmp970 = (frost$core$Int64) {$tmp969};
frost$core$Int64* $tmp971 = &$tmp963->level;
*$tmp971 = $tmp970;
// line 233
frost$io$IndentedOutputStream** $tmp972 = &param0->types;
frost$io$IndentedOutputStream* $tmp973 = *$tmp972;
frost$core$String** $tmp974 = &param1->name;
frost$core$String* $tmp975 = *$tmp974;
frost$core$String* $tmp976 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp975);
frost$core$String* $tmp977 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s978, $tmp976);
frost$core$String* $tmp979 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp977, &$s980);
$fn982 $tmp981 = ($fn982) ((frost$io$OutputStream*) $tmp973)->$class->vtable[19];
$tmp981(((frost$io$OutputStream*) $tmp973), $tmp979);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// unreffing REF($800:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($799:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// unreffing REF($798:frost.core.String)
// line 234
frost$core$Weak** $tmp983 = &param0->compiler;
frost$core$Weak* $tmp984 = *$tmp983;
frost$core$Object* $tmp985 = frost$core$Weak$get$R$frost$core$Weak$T($tmp984);
frost$core$Bit $tmp986 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp985) != NULL);
bool $tmp987 = $tmp986.value;
if ($tmp987) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp988 = (frost$core$Int64) {234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s989, $tmp988, &$s990);
abort(); // unreachable
block27:;
org$frostlang$frostc$Type* $tmp991 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp992 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp985), $tmp991);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
org$frostlang$frostc$ClassDecl* $tmp993 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local4) = $tmp992;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// unreffing REF($827:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
// unreffing REF($826:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp985);
// unreffing REF($816:frost.core.Weak.T)
// line 235
frost$core$Weak** $tmp994 = &param0->compiler;
frost$core$Weak* $tmp995 = *$tmp994;
frost$core$Object* $tmp996 = frost$core$Weak$get$R$frost$core$Weak$T($tmp995);
frost$core$Bit $tmp997 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp996) != NULL);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp999 = (frost$core$Int64) {235};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1000, $tmp999, &$s1001);
abort(); // unreachable
block29:;
org$frostlang$frostc$ClassDecl* $tmp1002 = *(&local4);
frost$core$Bit $tmp1003 = frost$core$Bit$init$builtin_bit($tmp1002 != NULL);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1005 = (frost$core$Int64) {235};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1006, $tmp1005, &$s1007);
abort(); // unreachable
block31:;
frost$collections$ListView* $tmp1008 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp996), $tmp1002);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$collections$ListView* $tmp1009 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local5) = $tmp1008;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
// unreffing REF($867:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp996);
// unreffing REF($848:frost.core.Weak.T)
// line 236
frost$io$IndentedOutputStream** $tmp1010 = &param0->types;
frost$io$IndentedOutputStream* $tmp1011 = *$tmp1010;
frost$collections$ListView* $tmp1012 = *(&local5);
ITable* $tmp1013 = ((frost$collections$CollectionView*) $tmp1012)->$class->itable;
while ($tmp1013->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1013 = $tmp1013->next;
}
$fn1015 $tmp1014 = $tmp1013->methods[0];
frost$core$Int64 $tmp1016 = $tmp1014(((frost$collections$CollectionView*) $tmp1012));
frost$core$Int64$wrapper* $tmp1017;
$tmp1017 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1017->value = $tmp1016;
frost$core$String* $tmp1018 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1019, ((frost$core$Object*) $tmp1017));
frost$core$String* $tmp1020 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1018, &$s1021);
frost$core$String* $tmp1022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1023, $tmp1020);
frost$core$String** $tmp1024 = &param1->name;
frost$core$String* $tmp1025 = *$tmp1024;
frost$core$String* $tmp1026 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1025);
frost$core$String* $tmp1027 = frost$core$String$convert$R$frost$core$String($tmp1026);
frost$core$String* $tmp1028 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1027, &$s1029);
frost$core$String* $tmp1030 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1022, $tmp1028);
$fn1032 $tmp1031 = ($fn1032) ((frost$io$OutputStream*) $tmp1011)->$class->vtable[19];
$tmp1031(((frost$io$OutputStream*) $tmp1011), $tmp1030);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing REF($898:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing REF($897:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($896:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing REF($895:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
// unreffing REF($892:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
// unreffing REF($891:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($890:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing REF($889:frost.core.Object)
// line 240
frost$io$IndentedOutputStream** $tmp1033 = &param0->types;
frost$io$IndentedOutputStream* $tmp1034 = *$tmp1033;
frost$core$String** $tmp1035 = &param1->name;
frost$core$String* $tmp1036 = *$tmp1035;
frost$core$String* $tmp1037 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1036);
frost$core$String* $tmp1038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1039, $tmp1037);
frost$core$String* $tmp1040 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1038, &$s1041);
frost$core$String** $tmp1042 = &param1->name;
frost$core$String* $tmp1043 = *$tmp1042;
frost$core$String* $tmp1044 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1043);
frost$core$String* $tmp1045 = frost$core$String$convert$R$frost$core$String($tmp1044);
frost$core$String* $tmp1046 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1045, &$s1047);
frost$core$String* $tmp1048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1040, $tmp1046);
$fn1050 $tmp1049 = ($fn1050) ((frost$io$OutputStream*) $tmp1034)->$class->vtable[19];
$tmp1049(((frost$io$OutputStream*) $tmp1034), $tmp1048);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
// unreffing REF($939:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
// unreffing REF($938:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
// unreffing REF($937:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// unreffing REF($936:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
// unreffing REF($933:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
// unreffing REF($932:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// unreffing REF($931:frost.core.String)
frost$collections$ListView* $tmp1051 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1052 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block24;
block24:;
frost$io$File* $tmp1053 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1054 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 245
frost$core$Weak** $tmp1055 = &param0->compiler;
frost$core$Weak* $tmp1056 = *$tmp1055;
frost$core$Object* $tmp1057 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1056);
frost$core$Bit $tmp1058 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1057) != NULL);
bool $tmp1059 = $tmp1058.value;
if ($tmp1059) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {245};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1061, $tmp1060, &$s1062);
abort(); // unreachable
block33:;
org$frostlang$frostc$Position* $tmp1063 = &param1->position;
org$frostlang$frostc$Position $tmp1064 = *$tmp1063;
frost$core$Error* $tmp1065 = *(&local0);
frost$core$String** $tmp1066 = &$tmp1065->message;
frost$core$String* $tmp1067 = *$tmp1066;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1057), $tmp1064, $tmp1067);
frost$core$Frost$unref$frost$core$Object$Q($tmp1057);
// unreffing REF($989:frost.core.Weak.T)
goto block2;
block2:;
frost$core$Error* $tmp1068 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
// line 250
frost$core$Weak** $tmp1069 = &param1->owner;
frost$core$Weak* $tmp1070 = *$tmp1069;
frost$core$Object* $tmp1071 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1070);
org$frostlang$frostc$Type** $tmp1072 = &((org$frostlang$frostc$ClassDecl*) $tmp1071)->type;
org$frostlang$frostc$Type* $tmp1073 = *$tmp1072;
frost$core$String* $tmp1074 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1073);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$String* $tmp1075 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local0) = $tmp1074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
// unreffing REF($4:frost.core.Weak.T)
// line 251
org$frostlang$frostc$MethodDecl$Kind* $tmp1076 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1077 = *$tmp1076;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1078;
$tmp1078 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1078->value = $tmp1077;
frost$core$Int64 $tmp1079 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1080 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1079);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1081;
$tmp1081 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1081->value = $tmp1080;
ITable* $tmp1082 = ((frost$core$Equatable*) $tmp1078)->$class->itable;
while ($tmp1082->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1082 = $tmp1082->next;
}
$fn1084 $tmp1083 = $tmp1082->methods[0];
frost$core$Bit $tmp1085 = $tmp1083(((frost$core$Equatable*) $tmp1078), ((frost$core$Equatable*) $tmp1081));
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block3; else goto block4;
block3:;
frost$core$String* $tmp1087 = *(&local0);
frost$core$Bit $tmp1088 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1087, &$s1089);
frost$core$Bit $tmp1090 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1088);
*(&local1) = $tmp1090;
goto block5;
block4:;
*(&local1) = $tmp1085;
goto block5;
block5:;
frost$core$Bit $tmp1091 = *(&local1);
bool $tmp1092 = $tmp1091.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1081)));
// unreffing REF($29:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1078)));
// unreffing REF($25:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1092) goto block1; else goto block2;
block1:;
// line 252
frost$core$String* $tmp1093 = *(&local0);
frost$core$String* $tmp1094 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1093, &$s1095);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
// unreffing REF($52:frost.core.String)
frost$core$String* $tmp1096 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1094;
block2:;
// line 254
frost$core$String* $tmp1097 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$String* $tmp1098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1097;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 274
org$frostlang$frostc$Type** $tmp1099 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1100 = *$tmp1099;
frost$core$Bit $tmp1101 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1100);
frost$core$Bit $tmp1102 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1101);
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block1; else goto block2;
block1:;
// line 275
frost$core$Bit $tmp1104 = frost$core$Bit$init$builtin_bit(false);
return $tmp1104;
block2:;
// line 277
org$frostlang$frostc$Annotations** $tmp1105 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1106 = *$tmp1105;
frost$core$Bit $tmp1107 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1106);
bool $tmp1108 = $tmp1107.value;
if ($tmp1108) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1109 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1110 = *$tmp1109;
frost$core$Bit $tmp1111 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1110);
*(&local1) = $tmp1111;
goto block5;
block4:;
*(&local1) = $tmp1107;
goto block5;
block5:;
frost$core$Bit $tmp1112 = *(&local1);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1114 = &param0->compiler;
frost$core$Weak* $tmp1115 = *$tmp1114;
frost$core$Object* $tmp1116 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1115);
frost$core$Bit $tmp1117 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1116) != NULL);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1120, $tmp1119, &$s1121);
abort(); // unreachable
block9:;
frost$core$Weak** $tmp1122 = &param0->compiler;
frost$core$Weak* $tmp1123 = *$tmp1122;
frost$core$Object* $tmp1124 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1123);
frost$core$Bit $tmp1125 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1124) != NULL);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1127 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1128, $tmp1127, &$s1129);
abort(); // unreachable
block11:;
org$frostlang$frostc$Type** $tmp1130 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1131 = *$tmp1130;
org$frostlang$frostc$ClassDecl* $tmp1132 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1124), $tmp1131);
frost$core$Bit $tmp1133 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1116), $tmp1132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($54:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1124);
// unreffing REF($42:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1116);
// unreffing REF($29:frost.core.Weak.T)
*(&local0) = $tmp1133;
goto block8;
block7:;
*(&local0) = $tmp1112;
goto block8;
block8:;
frost$core$Bit $tmp1134 = *(&local0);
*(&local2) = $tmp1134;
// line 283
frost$core$Bit $tmp1135 = *(&local2);
frost$core$Bit $tmp1136 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1135);
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block13; else goto block14;
block13:;
*(&local3) = $tmp1136;
goto block15;
block14:;
org$frostlang$frostc$Annotations** $tmp1138 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1139 = *$tmp1138;
frost$core$Bit $tmp1140 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1139);
frost$core$Bit $tmp1141 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1140);
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1143 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1144 = *$tmp1143;
frost$core$Bit $tmp1145 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1144);
bool $tmp1146 = $tmp1145.value;
if ($tmp1146) goto block19; else goto block20;
block19:;
*(&local5) = $tmp1145;
goto block21;
block20:;
org$frostlang$frostc$Annotations** $tmp1147 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1148 = *$tmp1147;
frost$core$Bit $tmp1149 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1148);
*(&local5) = $tmp1149;
goto block21;
block21:;
frost$core$Bit $tmp1150 = *(&local5);
*(&local4) = $tmp1150;
goto block18;
block17:;
*(&local4) = $tmp1141;
goto block18;
block18:;
frost$core$Bit $tmp1151 = *(&local4);
*(&local3) = $tmp1151;
goto block15;
block15:;
frost$core$Bit $tmp1152 = *(&local3);
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1154 = (frost$core$Int64) {283};
frost$core$String* $tmp1155 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1157, $tmp1155);
frost$core$String* $tmp1158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1156, &$s1159);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1160, $tmp1154, $tmp1158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// unreffing REF($110:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// unreffing REF($109:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// unreffing REF($108:frost.core.String)
abort(); // unreachable
block22:;
// line 285
frost$core$Bit $tmp1161 = *(&local2);
return $tmp1161;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
frost$core$String* local3 = NULL;
// line 290
frost$io$MemoryOutputStream** $tmp1162 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1163 = *$tmp1162;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$io$MemoryOutputStream** $tmp1164 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1165 = *$tmp1164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$io$MemoryOutputStream** $tmp1166 = &param0->importStream;
*$tmp1166 = $tmp1163;
// line 291
frost$collections$HashSet** $tmp1167 = &param0->bodyImports;
frost$collections$HashSet* $tmp1168 = *$tmp1167;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$collections$HashSet** $tmp1169 = &param0->imports;
frost$collections$HashSet* $tmp1170 = *$tmp1169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$collections$HashSet** $tmp1171 = &param0->imports;
*$tmp1171 = $tmp1168;
// line 292
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1172));
frost$core$String* $tmp1173 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local0) = &$s1174;
// line 293
frost$core$Bit $tmp1175 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1176 = $tmp1175.value;
if ($tmp1176) goto block1; else goto block3;
block1:;
// line 294
frost$io$IndentedOutputStream** $tmp1177 = &param0->body;
frost$io$IndentedOutputStream* $tmp1178 = *$tmp1177;
frost$core$String* $tmp1179 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1181, $tmp1179);
frost$core$String* $tmp1182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1180, &$s1183);
org$frostlang$frostc$Type** $tmp1184 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1185 = *$tmp1184;
frost$core$String* $tmp1186 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1185);
frost$core$String* $tmp1187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1182, $tmp1186);
frost$core$String* $tmp1188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1187, &$s1189);
$fn1191 $tmp1190 = ($fn1191) ((frost$io$OutputStream*) $tmp1178)->$class->vtable[17];
$tmp1190(((frost$io$OutputStream*) $tmp1178), $tmp1188);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
// unreffing REF($43:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
// unreffing REF($38:frost.core.String)
// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1192));
frost$core$String* $tmp1193 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
*(&local0) = &$s1194;
goto block2;
block3:;
// line 1
// line 298
frost$io$IndentedOutputStream** $tmp1195 = &param0->body;
frost$io$IndentedOutputStream* $tmp1196 = *$tmp1195;
org$frostlang$frostc$Type** $tmp1197 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1198 = *$tmp1197;
frost$core$String* $tmp1199 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1198);
frost$core$String* $tmp1200 = frost$core$String$convert$R$frost$core$String($tmp1199);
frost$core$String* $tmp1201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1200, &$s1202);
frost$core$String* $tmp1203 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1201, $tmp1203);
frost$core$String* $tmp1205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1204, &$s1206);
$fn1208 $tmp1207 = ($fn1208) ((frost$io$OutputStream*) $tmp1196)->$class->vtable[17];
$tmp1207(((frost$io$OutputStream*) $tmp1196), $tmp1205);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
// unreffing REF($86:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// unreffing REF($85:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
// unreffing REF($83:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
// unreffing REF($81:frost.core.String)
goto block2;
block2:;
// line 300
org$frostlang$frostc$Annotations** $tmp1209 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1210 = *$tmp1209;
frost$core$Bit $tmp1211 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1210);
frost$core$Bit $tmp1212 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1211);
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1214 = &param0->compiler;
frost$core$Weak* $tmp1215 = *$tmp1214;
frost$core$Object* $tmp1216 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1215);
frost$core$Bit $tmp1217 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1216) != NULL);
bool $tmp1218 = $tmp1217.value;
if ($tmp1218) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1219 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1220, $tmp1219, &$s1221);
abort(); // unreachable
block9:;
frost$core$Bit $tmp1222 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1216), param1);
frost$core$Bit $tmp1223 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1222);
frost$core$Frost$unref$frost$core$Object$Q($tmp1216);
// unreffing REF($118:frost.core.Weak.T)
*(&local1) = $tmp1223;
goto block8;
block7:;
*(&local1) = $tmp1212;
goto block8;
block8:;
frost$core$Bit $tmp1224 = *(&local1);
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block4; else goto block5;
block4:;
// line 301
frost$io$IndentedOutputStream** $tmp1226 = &param0->body;
frost$io$IndentedOutputStream* $tmp1227 = *$tmp1226;
frost$core$String* $tmp1228 = *(&local0);
frost$core$String* $tmp1229 = frost$core$String$convert$R$frost$core$String($tmp1228);
frost$core$String* $tmp1230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1229, &$s1231);
frost$core$String* $tmp1232 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1230, $tmp1232);
frost$core$String* $tmp1234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1233, &$s1235);
$fn1237 $tmp1236 = ($fn1237) ((frost$io$OutputStream*) $tmp1227)->$class->vtable[17];
$tmp1236(((frost$io$OutputStream*) $tmp1227), $tmp1234);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// unreffing REF($149:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
// unreffing REF($148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// unreffing REF($147:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// unreffing REF($146:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// unreffing REF($145:frost.core.String)
// line 302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1238));
frost$core$String* $tmp1239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local0) = &$s1240;
goto block5;
block5:;
// line 304
frost$collections$Array** $tmp1241 = &param1->parameters;
frost$collections$Array* $tmp1242 = *$tmp1241;
ITable* $tmp1243 = ((frost$collections$Iterable*) $tmp1242)->$class->itable;
while ($tmp1243->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1243 = $tmp1243->next;
}
$fn1245 $tmp1244 = $tmp1243->methods[0];
frost$collections$Iterator* $tmp1246 = $tmp1244(((frost$collections$Iterable*) $tmp1242));
goto block11;
block11:;
ITable* $tmp1247 = $tmp1246->$class->itable;
while ($tmp1247->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1247 = $tmp1247->next;
}
$fn1249 $tmp1248 = $tmp1247->methods[0];
frost$core$Bit $tmp1250 = $tmp1248($tmp1246);
bool $tmp1251 = $tmp1250.value;
if ($tmp1251) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1252 = $tmp1246->$class->itable;
while ($tmp1252->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1252 = $tmp1252->next;
}
$fn1254 $tmp1253 = $tmp1252->methods[1];
frost$core$Object* $tmp1255 = $tmp1253($tmp1246);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1255)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1256 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1255);
// line 305
org$frostlang$frostc$MethodDecl$Parameter* $tmp1257 = *(&local2);
frost$core$String** $tmp1258 = &$tmp1257->name;
frost$core$String* $tmp1259 = *$tmp1258;
frost$core$String* $tmp1260 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1259);
frost$core$String* $tmp1261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1262, $tmp1260);
frost$core$String* $tmp1263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1261, &$s1264);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
frost$core$String* $tmp1265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local3) = $tmp1263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
// unreffing REF($206:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// unreffing REF($205:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
// unreffing REF($204:frost.core.String)
// line 306
frost$io$IndentedOutputStream** $tmp1266 = &param0->body;
frost$io$IndentedOutputStream* $tmp1267 = *$tmp1266;
frost$core$String* $tmp1268 = *(&local0);
frost$core$String* $tmp1269 = frost$core$String$convert$R$frost$core$String($tmp1268);
frost$core$String* $tmp1270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1269, &$s1271);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1272 = *(&local2);
org$frostlang$frostc$Type** $tmp1273 = &$tmp1272->type;
org$frostlang$frostc$Type* $tmp1274 = *$tmp1273;
frost$core$String* $tmp1275 = *(&local3);
frost$core$String* $tmp1276 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1274, $tmp1275);
frost$core$String* $tmp1277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1270, $tmp1276);
frost$core$String* $tmp1278 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1277, &$s1279);
$fn1281 $tmp1280 = ($fn1281) ((frost$io$OutputStream*) $tmp1267)->$class->vtable[17];
$tmp1280(((frost$io$OutputStream*) $tmp1267), $tmp1278);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// unreffing REF($236:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// unreffing REF($235:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// unreffing REF($234:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
// unreffing REF($229:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// unreffing REF($228:frost.core.String)
// line 307
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1282));
frost$core$String* $tmp1283 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local0) = &$s1284;
frost$core$String* $tmp1285 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1255);
// unreffing REF($192:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp1286 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing p
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// unreffing REF($181:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 309
frost$io$IndentedOutputStream** $tmp1287 = &param0->body;
frost$io$IndentedOutputStream* $tmp1288 = *$tmp1287;
$fn1290 $tmp1289 = ($fn1290) ((frost$io$OutputStream*) $tmp1288)->$class->vtable[19];
$tmp1289(((frost$io$OutputStream*) $tmp1288), &$s1291);
frost$core$String* $tmp1292 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
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
frost$io$IndentedOutputStream** $tmp1293 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1294 = *$tmp1293;
frost$io$MemoryOutputStream** $tmp1295 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1296 = *$tmp1295;
$fn1298 $tmp1297 = ($fn1298) ((frost$io$OutputStream*) $tmp1294)->$class->vtable[20];
$tmp1297(((frost$io$OutputStream*) $tmp1294), ((frost$core$Object*) $tmp1296));
// line 320
frost$io$IndentedOutputStream** $tmp1299 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1300 = *$tmp1299;
frost$io$MemoryOutputStream** $tmp1301 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1302 = *$tmp1301;
$fn1304 $tmp1303 = ($fn1304) ((frost$io$OutputStream*) $tmp1300)->$class->vtable[20];
$tmp1303(((frost$io$OutputStream*) $tmp1300), ((frost$core$Object*) $tmp1302));
// line 321
frost$io$IndentedOutputStream** $tmp1305 = &param0->out;
frost$io$IndentedOutputStream* $tmp1306 = *$tmp1305;
frost$io$MemoryOutputStream** $tmp1307 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1308 = *$tmp1307;
$fn1310 $tmp1309 = ($fn1310) ((frost$io$OutputStream*) $tmp1306)->$class->vtable[20];
$tmp1309(((frost$io$OutputStream*) $tmp1306), ((frost$core$Object*) $tmp1308));
// line 322
frost$io$IndentedOutputStream** $tmp1311 = &param0->out;
frost$io$IndentedOutputStream* $tmp1312 = *$tmp1311;
frost$io$MemoryOutputStream** $tmp1313 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1314 = *$tmp1313;
$fn1316 $tmp1315 = ($fn1316) ((frost$io$OutputStream*) $tmp1312)->$class->vtable[20];
$tmp1315(((frost$io$OutputStream*) $tmp1312), ((frost$core$Object*) $tmp1314));
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1317 = &param0->compiler;
frost$core$Weak* $tmp1318 = *$tmp1317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$io$MemoryOutputStream** $tmp1319 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1320 = *$tmp1319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$io$MemoryOutputStream** $tmp1321 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1322 = *$tmp1321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$io$IndentedOutputStream** $tmp1323 = &param0->types;
frost$io$IndentedOutputStream* $tmp1324 = *$tmp1323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
frost$io$MemoryOutputStream** $tmp1325 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1326 = *$tmp1325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$io$MemoryOutputStream** $tmp1327 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1328 = *$tmp1327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$io$IndentedOutputStream** $tmp1329 = &param0->body;
frost$io$IndentedOutputStream* $tmp1330 = *$tmp1329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
frost$collections$HashSet** $tmp1331 = &param0->typeImports;
frost$collections$HashSet* $tmp1332 = *$tmp1331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$collections$HashSet** $tmp1333 = &param0->bodyImports;
frost$collections$HashSet* $tmp1334 = *$tmp1333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$collections$HashSet** $tmp1335 = &param0->imports;
frost$collections$HashSet* $tmp1336 = *$tmp1335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$io$MemoryOutputStream** $tmp1337 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1338 = *$tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$io$File** $tmp1339 = &param0->outDir;
frost$io$File* $tmp1340 = *$tmp1339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$io$IndentedOutputStream** $tmp1341 = &param0->out;
frost$io$IndentedOutputStream* $tmp1342 = *$tmp1341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
frost$io$IndentedOutputStream** $tmp1343 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1344 = *$tmp1343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1345 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1346 = *$tmp1345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Weak** $tmp1347 = &param0->cCodeGen;
frost$core$Weak* $tmp1348 = *$tmp1347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
org$frostlang$frostc$CCodeGenerator** $tmp1349 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1350 = *$tmp1349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
return;

}

