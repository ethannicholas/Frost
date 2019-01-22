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

typedef frost$core$Error* (*$fn234)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn265)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn383)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn416)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn489)(frost$core$Object*);
typedef frost$core$Error* (*$fn566)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn574)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn588)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn595)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn603)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn628)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn648)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn652)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn657)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn688)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn709)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn723)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn731)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn756)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn763)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn788)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn804)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn824)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn843)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn860)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn868)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn882)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn906)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn920)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn943)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn950)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn975)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn996)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1013)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1036)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1070)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1167)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1186)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1212)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1222)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1226)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1231)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1258)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1271)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1281)(frost$core$Object*);
typedef frost$core$Error* (*$fn1290)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1297)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1304)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1311)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, 945681673046986118, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40", 1, 165, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s1002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1004 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s1010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };

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
// line 43
org$frostlang$frostc$CCodeGenerator** $tmp6 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp7 = *$tmp6;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator(org$frostlang$frostc$HCodeGenerator* param0, frost$io$File* param1, org$frostlang$frostc$CCodeGenerator* param2) {

// line 6
frost$core$Weak* $tmp8 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp8, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Weak** $tmp9 = &param0->compiler;
frost$core$Weak* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 8
frost$io$MemoryOutputStream* $tmp12 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$io$MemoryOutputStream** $tmp13 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$io$MemoryOutputStream** $tmp15 = &param0->typeImportStream;
*$tmp15 = $tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// line 10
frost$io$MemoryOutputStream* $tmp16 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$io$MemoryOutputStream** $tmp17 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp18 = *$tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$io$MemoryOutputStream** $tmp19 = &param0->typesBuffer;
*$tmp19 = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// line 12
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
// line 14
frost$io$MemoryOutputStream* $tmp26 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$io$MemoryOutputStream** $tmp27 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$io$MemoryOutputStream** $tmp29 = &param0->bodyImportStream;
*$tmp29 = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// line 16
frost$io$MemoryOutputStream* $tmp30 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$io$MemoryOutputStream** $tmp31 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp32 = *$tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$io$MemoryOutputStream** $tmp33 = &param0->bodyBuffer;
*$tmp33 = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// line 18
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
// line 20
frost$collections$HashSet* $tmp40 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$collections$HashSet** $tmp41 = &param0->typeImports;
frost$collections$HashSet* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$collections$HashSet** $tmp43 = &param0->typeImports;
*$tmp43 = $tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// line 22
frost$collections$HashSet* $tmp44 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$collections$HashSet** $tmp45 = &param0->bodyImports;
frost$collections$HashSet* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$collections$HashSet** $tmp47 = &param0->bodyImports;
*$tmp47 = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// line 24
frost$collections$HashSet** $tmp48 = &param0->typeImports;
frost$collections$HashSet* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$HashSet** $tmp50 = &param0->imports;
frost$collections$HashSet* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$HashSet** $tmp52 = &param0->imports;
*$tmp52 = $tmp49;
// line 26
frost$io$MemoryOutputStream** $tmp53 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp54 = *$tmp53;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$io$MemoryOutputStream** $tmp55 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$io$MemoryOutputStream** $tmp57 = &param0->importStream;
*$tmp57 = $tmp54;
// line 34
org$frostlang$frostc$LLVMCodeGenerator* $tmp58 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
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
// line 47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp64 = &param0->outDir;
frost$io$File* $tmp65 = *$tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$io$File** $tmp66 = &param0->outDir;
*$tmp66 = param1;
// line 48
frost$io$IndentedOutputStream* $tmp67 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
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
// line 49
frost$io$IndentedOutputStream* $tmp72 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
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
// line 50
frost$core$Weak* $tmp77 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp77, ((frost$core$Object*) param2));
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

// line 54
org$frostlang$frostc$LLVMCodeGenerator** $tmp81 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp82 = *$tmp81;
frost$core$String* $tmp83 = org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp82, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return $tmp83;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 58
org$frostlang$frostc$LLVMCodeGenerator** $tmp84 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp85 = *$tmp84;
frost$core$String* $tmp86 = org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String($tmp85, param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$String* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// line 59
frost$core$String* $tmp88 = *(&local0);
frost$core$Bit $tmp89 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp88, &$s90);
bool $tmp91 = $tmp89.value;
if ($tmp91) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s93, $tmp92);
abort(); // unreachable
block1:;
// line 60
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

// line 64
org$frostlang$frostc$LLVMCodeGenerator** $tmp100 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp101 = *$tmp100;
frost$core$Int64 $tmp102 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64($tmp101, param1);
return $tmp102;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 68
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
// line 73
*(&local0) = ((frost$core$Error*) NULL);
// line 74
org$frostlang$frostc$Type$Kind* $tmp124 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = $tmp125.$rawValue;
frost$core$Int64 $tmp127 = (frost$core$Int64) {4};
frost$core$Bit $tmp128 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block4; else goto block5;
block4:;
// line 76
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s130));
frost$core$Error* $tmp131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local0) = ((frost$core$Error*) NULL);
return &$s132;
block5:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {2};
frost$core$Bit $tmp134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block6; else goto block7;
block6:;
// line 79
frost$core$Int64 $tmp136 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp137 = (frost$core$Int64) {8};
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 * $tmp139;
frost$core$Int64 $tmp141 = (frost$core$Int64) {$tmp140};
frost$core$Int64$wrapper* $tmp142;
$tmp142 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp142->value = $tmp141;
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s144, ((frost$core$Object*) $tmp142));
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, &$s146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Error* $tmp147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp145;
block7:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {3};
frost$core$Bit $tmp149 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp148);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block8; else goto block9;
block8:;
// line 82
frost$core$Int64 $tmp151 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp152 = (frost$core$Int64) {8};
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153 * $tmp154;
frost$core$Int64 $tmp156 = (frost$core$Int64) {$tmp155};
frost$core$Int64$wrapper* $tmp157;
$tmp157 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp157->value = $tmp156;
frost$core$String* $tmp158 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s159, ((frost$core$Object*) $tmp157));
frost$core$String* $tmp160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp158, &$s161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Error* $tmp162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp160;
block9:;
frost$core$Int64 $tmp163 = (frost$core$Int64) {8};
frost$core$Bit $tmp164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block10; else goto block11;
block10:;
// line 85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s166));
frost$core$Error* $tmp167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local0) = ((frost$core$Error*) NULL);
return &$s168;
block11:;
frost$core$Int64 $tmp169 = (frost$core$Int64) {9};
frost$core$Bit $tmp170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block12; else goto block13;
block12:;
// line 88
frost$core$Int64 $tmp172 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp173 = (frost$core$Int64) {4};
frost$core$Bit $tmp174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block15; else goto block16;
block15:;
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s176));
frost$core$Error* $tmp177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local0) = ((frost$core$Error*) NULL);
return &$s178;
block16:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {8};
frost$core$Bit $tmp180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block17; else goto block18;
block17:;
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s182));
frost$core$Error* $tmp183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local0) = ((frost$core$Error*) NULL);
return &$s184;
block18:;
// line 91
frost$core$Bit $tmp185 = frost$core$Bit$init$builtin_bit(false);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s188, $tmp187);
abort(); // unreachable
block19:;
goto block14;
block14:;
goto block3;
block13:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {0};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block21; else goto block22;
block21:;
// line 95
frost$core$String** $tmp192 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp193 = *$tmp192;
frost$core$String* $tmp194 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp193);
frost$core$String* $tmp195 = frost$core$String$get_asString$R$frost$core$String($tmp194);
frost$core$String* $tmp196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp195, &$s197);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$String* $tmp198 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local1) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// line 96
frost$core$Weak** $tmp199 = &param0->compiler;
frost$core$Weak* $tmp200 = *$tmp199;
frost$core$Object* $tmp201 = frost$core$Weak$get$R$frost$core$Weak$T($tmp200);
org$frostlang$frostc$ClassDecl* $tmp202 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp201), param1);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
org$frostlang$frostc$ClassDecl* $tmp203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local2) = $tmp202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q($tmp201);
// line 97
org$frostlang$frostc$ClassDecl* $tmp204 = *(&local2);
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit($tmp204 != NULL);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp207 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s208, $tmp207);
abort(); // unreachable
block23:;
// line 98
frost$core$Weak** $tmp209 = &param0->compiler;
frost$core$Weak* $tmp210 = *$tmp209;
frost$core$Object* $tmp211 = frost$core$Weak$get$R$frost$core$Weak$T($tmp210);
org$frostlang$frostc$ClassDecl* $tmp212 = *(&local2);
frost$core$Bit $tmp213 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp211), $tmp212);
frost$core$Bit $tmp214 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp213);
bool $tmp215 = $tmp214.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
if ($tmp215) goto block25; else goto block26;
block25:;
// line 99
frost$collections$HashSet** $tmp216 = &param0->imports;
frost$collections$HashSet* $tmp217 = *$tmp216;
frost$core$String* $tmp218 = *(&local1);
frost$core$Bit $tmp219 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp217, ((frost$collections$Key*) $tmp218));
frost$core$Bit $tmp220 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block27; else goto block28;
block27:;
// line 100
frost$io$MemoryOutputStream** $tmp222 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp223 = *$tmp222;
frost$core$String* $tmp224 = *(&local1);
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s226, $tmp224);
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, &$s228);
frost$core$String* $tmp229 = *(&local1);
frost$core$String* $tmp230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp227, $tmp229);
frost$core$String* $tmp231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp230, &$s232);
$fn234 $tmp233 = ($fn234) ((frost$io$OutputStream*) $tmp223)->$class->vtable[19];
frost$core$Error* $tmp235 = $tmp233(((frost$io$OutputStream*) $tmp223), $tmp231);
if ($tmp235 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local0) = $tmp235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
org$frostlang$frostc$ClassDecl* $tmp236 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp237 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// line 101
frost$collections$HashSet** $tmp238 = &param0->imports;
frost$collections$HashSet* $tmp239 = *$tmp238;
frost$core$String* $tmp240 = *(&local1);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp239, ((frost$collections$Key*) $tmp240));
goto block28;
block28:;
// line 103
frost$core$String* $tmp241 = *(&local1);
frost$core$String* $tmp242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp241, &$s243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
org$frostlang$frostc$ClassDecl* $tmp244 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp246 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp242;
block26:;
// line 105
org$frostlang$frostc$ClassDecl* $tmp247 = *(&local2);
frost$core$String* $tmp248 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp247, &$s249);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$String* $tmp250 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local3) = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// line 106
frost$collections$HashSet** $tmp251 = &param0->imports;
frost$collections$HashSet* $tmp252 = *$tmp251;
frost$core$String* $tmp253 = *(&local3);
frost$core$Bit $tmp254 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp252, ((frost$collections$Key*) $tmp253));
frost$core$Bit $tmp255 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block31; else goto block32;
block31:;
// line 107
frost$io$MemoryOutputStream** $tmp257 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp258 = *$tmp257;
frost$core$String* $tmp259 = *(&local3);
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s261, $tmp259);
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp260, &$s263);
$fn265 $tmp264 = ($fn265) ((frost$io$OutputStream*) $tmp258)->$class->vtable[19];
frost$core$Error* $tmp266 = $tmp264(((frost$io$OutputStream*) $tmp258), $tmp262);
if ($tmp266 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local0) = $tmp266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$String* $tmp267 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp268 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// line 108
frost$collections$HashSet** $tmp270 = &param0->imports;
frost$collections$HashSet* $tmp271 = *$tmp270;
frost$core$String* $tmp272 = *(&local3);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp271, ((frost$collections$Key*) $tmp272));
goto block32;
block32:;
// line 110
frost$core$String* $tmp273 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$String* $tmp274 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp275 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp273;
block22:;
frost$core$Int64 $tmp278 = (frost$core$Int64) {1};
frost$core$Bit $tmp279 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp278);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block35; else goto block36;
block35:;
// line 113
frost$core$Weak** $tmp281 = &param0->compiler;
frost$core$Weak* $tmp282 = *$tmp281;
frost$core$Object* $tmp283 = frost$core$Weak$get$R$frost$core$Weak$T($tmp282);
org$frostlang$frostc$ClassDecl* $tmp284 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp283), param1);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
org$frostlang$frostc$ClassDecl* $tmp285 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local4) = $tmp284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q($tmp283);
// line 114
org$frostlang$frostc$ClassDecl* $tmp286 = *(&local4);
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit($tmp286 != NULL);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp289 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s290, $tmp289);
abort(); // unreachable
block37:;
// line 115
frost$core$Weak** $tmp291 = &param0->compiler;
frost$core$Weak* $tmp292 = *$tmp291;
frost$core$Object* $tmp293 = frost$core$Weak$get$R$frost$core$Weak$T($tmp292);
org$frostlang$frostc$ClassDecl* $tmp294 = *(&local4);
frost$core$Bit $tmp295 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp293), $tmp294);
bool $tmp296 = $tmp295.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp293);
if ($tmp296) goto block39; else goto block40;
block39:;
// line 116
org$frostlang$frostc$FixedArray** $tmp297 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp298 = *$tmp297;
frost$core$Int64 $tmp299 = (frost$core$Int64) {0};
frost$core$Object* $tmp300 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp298, $tmp299);
frost$core$String* $tmp301 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp300));
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp301, &$s303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q($tmp300);
org$frostlang$frostc$ClassDecl* $tmp304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp305 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp302;
block40:;
// line 118
org$frostlang$frostc$FixedArray** $tmp306 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp307 = *$tmp306;
frost$core$Int64 $tmp308 = (frost$core$Int64) {0};
frost$core$Object* $tmp309 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp307, $tmp308);
frost$core$String* $tmp310 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp309));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q($tmp309);
org$frostlang$frostc$ClassDecl* $tmp311 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp310;
block36:;
frost$core$Int64 $tmp313 = (frost$core$Int64) {10};
frost$core$Bit $tmp314 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp313);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block41; else goto block42;
block41:;
// line 121
org$frostlang$frostc$FixedArray** $tmp316 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp317 = *$tmp316;
frost$core$Int64 $tmp318 = (frost$core$Int64) {0};
frost$core$Object* $tmp319 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp317, $tmp318);
frost$core$String** $tmp320 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp319))->name;
frost$core$String* $tmp321 = *$tmp320;
frost$core$Bit $tmp322 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp321, &$s323);
bool $tmp324 = $tmp322.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp319);
if ($tmp324) goto block43; else goto block44;
block43:;
// line 122
org$frostlang$frostc$FixedArray** $tmp325 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp326 = *$tmp325;
frost$core$Int64 $tmp327 = (frost$core$Int64) {1};
frost$core$Object* $tmp328 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp326, $tmp327);
frost$core$String* $tmp329 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp328));
frost$core$String* $tmp330 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp329, &$s331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q($tmp328);
frost$core$Error* $tmp332 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp330;
block44:;
// line 124
frost$core$Weak** $tmp333 = &param0->compiler;
frost$core$Weak* $tmp334 = *$tmp333;
frost$core$Object* $tmp335 = frost$core$Weak$get$R$frost$core$Weak$T($tmp334);
org$frostlang$frostc$ClassDecl* $tmp336 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp335), param1);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
org$frostlang$frostc$ClassDecl* $tmp337 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local5) = $tmp336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
// line 125
org$frostlang$frostc$ClassDecl* $tmp338 = *(&local5);
frost$core$Bit $tmp339 = org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp338);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block45; else goto block46;
block45:;
// line 126
frost$core$String** $tmp341 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp342 = *$tmp341;
frost$core$String* $tmp343 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp342);
frost$core$String* $tmp344 = frost$core$String$get_asString$R$frost$core$String($tmp343);
frost$core$String* $tmp345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp344, &$s346);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp347 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local6) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// line 127
frost$core$Weak** $tmp348 = &param0->compiler;
frost$core$Weak* $tmp349 = *$tmp348;
frost$core$Object* $tmp350 = frost$core$Weak$get$R$frost$core$Weak$T($tmp349);
org$frostlang$frostc$ClassDecl* $tmp351 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp350), param1);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
org$frostlang$frostc$ClassDecl* $tmp352 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local7) = $tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q($tmp350);
// line 128
org$frostlang$frostc$ClassDecl* $tmp353 = *(&local7);
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit($tmp353 != NULL);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s357, $tmp356);
abort(); // unreachable
block47:;
// line 129
frost$core$Weak** $tmp358 = &param0->compiler;
frost$core$Weak* $tmp359 = *$tmp358;
frost$core$Object* $tmp360 = frost$core$Weak$get$R$frost$core$Weak$T($tmp359);
org$frostlang$frostc$ClassDecl* $tmp361 = *(&local7);
frost$core$Bit $tmp362 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp360), $tmp361);
frost$core$Bit $tmp363 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp362);
bool $tmp364 = $tmp363.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp360);
if ($tmp364) goto block49; else goto block50;
block49:;
// line 130
frost$collections$HashSet** $tmp365 = &param0->imports;
frost$collections$HashSet* $tmp366 = *$tmp365;
frost$core$String* $tmp367 = *(&local6);
frost$core$Bit $tmp368 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp366, ((frost$collections$Key*) $tmp367));
frost$core$Bit $tmp369 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp368);
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block51; else goto block52;
block51:;
// line 131
frost$io$MemoryOutputStream** $tmp371 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp372 = *$tmp371;
frost$core$String* $tmp373 = *(&local6);
frost$core$String* $tmp374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s375, $tmp373);
frost$core$String* $tmp376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp374, &$s377);
frost$core$String* $tmp378 = *(&local6);
frost$core$String* $tmp379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp376, $tmp378);
frost$core$String* $tmp380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp379, &$s381);
$fn383 $tmp382 = ($fn383) ((frost$io$OutputStream*) $tmp372)->$class->vtable[19];
frost$core$Error* $tmp384 = $tmp382(((frost$io$OutputStream*) $tmp372), $tmp380);
if ($tmp384 == NULL) goto block53; else goto block54;
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local0) = $tmp384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
org$frostlang$frostc$ClassDecl* $tmp385 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp386 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp387 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// line 132
frost$collections$HashSet** $tmp388 = &param0->imports;
frost$collections$HashSet* $tmp389 = *$tmp388;
frost$core$String* $tmp390 = *(&local6);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp389, ((frost$collections$Key*) $tmp390));
goto block52;
block52:;
// line 134
frost$core$String* $tmp391 = *(&local6);
frost$core$String* $tmp392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp391, &$s393);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
org$frostlang$frostc$ClassDecl* $tmp394 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp395 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp396 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp397 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp392;
block50:;
// line 136
org$frostlang$frostc$ClassDecl* $tmp398 = *(&local7);
frost$core$String* $tmp399 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp398, &$s400);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$String* $tmp401 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local8) = $tmp399;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// line 137
frost$collections$HashSet** $tmp402 = &param0->imports;
frost$collections$HashSet* $tmp403 = *$tmp402;
frost$core$String* $tmp404 = *(&local8);
frost$core$Bit $tmp405 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp403, ((frost$collections$Key*) $tmp404));
frost$core$Bit $tmp406 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp405);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block55; else goto block56;
block55:;
// line 138
frost$io$MemoryOutputStream** $tmp408 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp409 = *$tmp408;
frost$core$String* $tmp410 = *(&local8);
frost$core$String* $tmp411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s412, $tmp410);
frost$core$String* $tmp413 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp411, &$s414);
$fn416 $tmp415 = ($fn416) ((frost$io$OutputStream*) $tmp409)->$class->vtable[19];
frost$core$Error* $tmp417 = $tmp415(((frost$io$OutputStream*) $tmp409), $tmp413);
if ($tmp417 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local0) = $tmp417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$String* $tmp418 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp419 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp420 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp421 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// line 139
frost$collections$HashSet** $tmp422 = &param0->imports;
frost$collections$HashSet* $tmp423 = *$tmp422;
frost$core$String* $tmp424 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp423, ((frost$collections$Key*) $tmp424));
goto block56;
block56:;
// line 141
frost$core$String* $tmp425 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$String* $tmp426 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp427 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp428 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp429 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp430 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp425;
block46:;
// line 143
org$frostlang$frostc$FixedArray** $tmp431 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp432 = *$tmp431;
frost$core$Int64 $tmp433 = (frost$core$Int64) {0};
frost$core$Object* $tmp434 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp432, $tmp433);
frost$core$String* $tmp435 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp434));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q($tmp434);
org$frostlang$frostc$ClassDecl* $tmp436 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Error* $tmp437 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp435;
block42:;
frost$core$Int64 $tmp438 = (frost$core$Int64) {11};
frost$core$Bit $tmp439 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block59; else goto block60;
block59:;
// line 146
frost$core$Weak** $tmp441 = &param1->genericClassParameter;
frost$core$Weak* $tmp442 = *$tmp441;
frost$core$Object* $tmp443 = frost$core$Weak$get$R$frost$core$Weak$T($tmp442);
org$frostlang$frostc$Type** $tmp444 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp443)->bound;
org$frostlang$frostc$Type* $tmp445 = *$tmp444;
frost$core$String* $tmp446 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp445);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
frost$core$Error* $tmp447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp446;
block60:;
frost$core$Int64 $tmp448 = (frost$core$Int64) {12};
frost$core$Bit $tmp449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block61; else goto block62;
block61:;
// line 149
frost$core$Weak** $tmp451 = &param1->genericMethodParameter;
frost$core$Weak* $tmp452 = *$tmp451;
frost$core$Object* $tmp453 = frost$core$Weak$get$R$frost$core$Weak$T($tmp452);
org$frostlang$frostc$Type** $tmp454 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp453)->bound;
org$frostlang$frostc$Type* $tmp455 = *$tmp454;
frost$core$String* $tmp456 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp455);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q($tmp453);
frost$core$Error* $tmp457 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp456;
block62:;
frost$core$Int64 $tmp458 = (frost$core$Int64) {14};
frost$core$Bit $tmp459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp461 = (frost$core$Int64) {15};
frost$core$Bit $tmp462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp461);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block63; else goto block65;
block63:;
// line 152
org$frostlang$frostc$Type* $tmp464 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp465 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp464);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Error* $tmp466 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp465;
block65:;
frost$core$Int64 $tmp467 = (frost$core$Int64) {16};
frost$core$Bit $tmp468 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp470 = (frost$core$Int64) {17};
frost$core$Bit $tmp471 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp470);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block66; else goto block68;
block66:;
// line 155
org$frostlang$frostc$Type* $tmp473 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp474 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Error* $tmp475 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp474;
block68:;
// line 158
frost$core$Bit $tmp476 = frost$core$Bit$init$builtin_bit(false);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp478 = (frost$core$Int64) {158};
frost$core$String* $tmp479 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s480, ((frost$core$Object*) param1));
frost$core$String* $tmp481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp479, &$s482);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s483, $tmp478, $tmp481);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
abort(); // unreachable
block69:;
goto block3;
block3:;
goto block2;
block1:;
// line 163
frost$core$Bit $tmp484 = frost$core$Bit$init$builtin_bit(false);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp486 = (frost$core$Int64) {163};
frost$core$Error* $tmp487 = *(&local0);
$fn489 $tmp488 = ($fn489) ((frost$core$Object*) $tmp487)->$class->vtable[0];
frost$core$String* $tmp490 = $tmp488(((frost$core$Object*) $tmp487));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s491, $tmp486, $tmp490);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
abort(); // unreachable
block71:;
goto block2;
block2:;
frost$core$Error* $tmp492 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local0) = ((frost$core$Error*) NULL);
// line 165
goto block73;
block73:;
goto block73;
block74:;
goto block75;
block75:;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2) {

// line 169
frost$core$String* $tmp493 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp494 = frost$core$String$get_asString$R$frost$core$String($tmp493);
frost$core$String* $tmp495 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp494, &$s496);
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp495, param2);
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
return $tmp498;

}
void org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 174
frost$core$Weak* $tmp500 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp500, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$Weak** $tmp501 = &param0->compiler;
frost$core$Weak* $tmp502 = *$tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Weak** $tmp503 = &param0->compiler;
*$tmp503 = $tmp500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// line 175
org$frostlang$frostc$LLVMCodeGenerator** $tmp504 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp505 = *$tmp504;
org$frostlang$frostc$LLVMCodeGenerator$setCompiler$org$frostlang$frostc$Compiler($tmp505, param1);
return;

}
frost$io$File* org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 179
frost$io$File** $tmp506 = &param0->outDir;
frost$io$File* $tmp507 = *$tmp506;
frost$core$String* $tmp508 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp509 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp507, $tmp508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
return $tmp509;

}
void org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$io$File* local2 = NULL;
org$frostlang$frostc$FieldDecl* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// line 184
*(&local0) = ((frost$core$Error*) NULL);
// line 185
frost$io$MemoryOutputStream** $tmp510 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp511 = *$tmp510;
frost$io$MemoryOutputStream$clear($tmp511);
// line 186
frost$io$MemoryOutputStream** $tmp512 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp513 = *$tmp512;
frost$io$MemoryOutputStream$clear($tmp513);
// line 187
frost$io$MemoryOutputStream** $tmp514 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp515 = *$tmp514;
frost$io$MemoryOutputStream$clear($tmp515);
// line 188
frost$io$MemoryOutputStream** $tmp516 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp517 = *$tmp516;
frost$io$MemoryOutputStream$clear($tmp517);
// line 189
frost$collections$HashSet** $tmp518 = &param0->typeImports;
frost$collections$HashSet* $tmp519 = *$tmp518;
frost$collections$HashSet$clear($tmp519);
// line 190
frost$collections$HashSet** $tmp520 = &param0->bodyImports;
frost$collections$HashSet* $tmp521 = *$tmp520;
frost$collections$HashSet$clear($tmp521);
// line 191
frost$io$File* $tmp522 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s523);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$io$File* $tmp524 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local1) = $tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// line 192
frost$io$File* $tmp525 = *(&local1);
frost$io$File* $tmp526 = frost$io$File$get_parent$R$frost$io$File$Q($tmp525);
frost$core$Error* $tmp527 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp526);
if ($tmp527 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local0) = $tmp527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$io$File* $tmp528 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// line 193
frost$io$IndentedOutputStream* $tmp529 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp530 = *(&local1);
frost$core$Maybe* $tmp531 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp530);
frost$core$Int64* $tmp532 = &$tmp531->$rawValue;
frost$core$Int64 $tmp533 = *$tmp532;
int64_t $tmp534 = $tmp533.value;
bool $tmp535 = $tmp534 == 0;
if ($tmp535) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp536 = (frost$core$Error**) ($tmp531->$data + 0);
frost$core$Error* $tmp537 = *$tmp536;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local0) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$io$File* $tmp538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Object** $tmp539 = (frost$core$Object**) ($tmp531->$data + 0);
frost$core$Object* $tmp540 = *$tmp539;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp529, ((frost$io$OutputStream*) $tmp540));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$io$IndentedOutputStream** $tmp541 = &param0->out;
frost$io$IndentedOutputStream* $tmp542 = *$tmp541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$io$IndentedOutputStream** $tmp543 = &param0->out;
*$tmp543 = $tmp529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// line 194
frost$io$File* $tmp544 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s545);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$io$File* $tmp546 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local2) = $tmp544;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// line 195
frost$io$IndentedOutputStream* $tmp547 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp548 = *(&local2);
frost$core$Maybe* $tmp549 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp548);
frost$core$Int64* $tmp550 = &$tmp549->$rawValue;
frost$core$Int64 $tmp551 = *$tmp550;
int64_t $tmp552 = $tmp551.value;
bool $tmp553 = $tmp552 == 0;
if ($tmp553) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp554 = (frost$core$Error**) ($tmp549->$data + 0);
frost$core$Error* $tmp555 = *$tmp554;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local0) = $tmp555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$io$File* $tmp556 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp557 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp558 = (frost$core$Object**) ($tmp549->$data + 0);
frost$core$Object* $tmp559 = *$tmp558;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp547, ((frost$io$OutputStream*) $tmp559));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$io$IndentedOutputStream** $tmp560 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp561 = *$tmp560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
frost$io$IndentedOutputStream** $tmp562 = &param0->typesOut;
*$tmp562 = $tmp547;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// line 196
frost$io$IndentedOutputStream** $tmp563 = &param0->out;
frost$io$IndentedOutputStream* $tmp564 = *$tmp563;
$fn566 $tmp565 = ($fn566) ((frost$io$OutputStream*) $tmp564)->$class->vtable[19];
frost$core$Error* $tmp567 = $tmp565(((frost$io$OutputStream*) $tmp564), &$s568);
if ($tmp567 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local0) = $tmp567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$io$File* $tmp569 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp570 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// line 197
frost$io$IndentedOutputStream** $tmp571 = &param0->out;
frost$io$IndentedOutputStream* $tmp572 = *$tmp571;
$fn574 $tmp573 = ($fn574) ((frost$io$OutputStream*) $tmp572)->$class->vtable[19];
frost$core$Error* $tmp575 = $tmp573(((frost$io$OutputStream*) $tmp572), &$s576);
if ($tmp575 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local0) = $tmp575;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$io$File* $tmp577 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp578 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// line 198
frost$io$IndentedOutputStream** $tmp579 = &param0->out;
frost$io$IndentedOutputStream* $tmp580 = *$tmp579;
frost$io$File* $tmp581 = *(&local2);
frost$core$String* $tmp582 = frost$io$File$get_name$R$frost$core$String($tmp581);
frost$core$String* $tmp583 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s584, $tmp582);
frost$core$String* $tmp585 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp583, &$s586);
$fn588 $tmp587 = ($fn588) ((frost$io$OutputStream*) $tmp580)->$class->vtable[19];
frost$core$Error* $tmp589 = $tmp587(((frost$io$OutputStream*) $tmp580), $tmp585);
if ($tmp589 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local0) = $tmp589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$io$File* $tmp590 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp591 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// line 199
frost$io$IndentedOutputStream** $tmp592 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp593 = *$tmp592;
$fn595 $tmp594 = ($fn595) ((frost$io$OutputStream*) $tmp593)->$class->vtable[19];
frost$core$Error* $tmp596 = $tmp594(((frost$io$OutputStream*) $tmp593), &$s597);
if ($tmp596 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local0) = $tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$io$File* $tmp598 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp599 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// line 200
frost$io$IndentedOutputStream** $tmp600 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp601 = *$tmp600;
$fn603 $tmp602 = ($fn603) ((frost$io$OutputStream*) $tmp601)->$class->vtable[19];
frost$core$Error* $tmp604 = $tmp602(((frost$io$OutputStream*) $tmp601), &$s605);
if ($tmp604 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local0) = $tmp604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$io$File* $tmp606 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// line 201
frost$io$MemoryOutputStream** $tmp608 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp609 = *$tmp608;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$io$MemoryOutputStream** $tmp610 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp611 = *$tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$io$MemoryOutputStream** $tmp612 = &param0->importStream;
*$tmp612 = $tmp609;
// line 202
frost$collections$HashSet** $tmp613 = &param0->typeImports;
frost$collections$HashSet* $tmp614 = *$tmp613;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$collections$HashSet** $tmp615 = &param0->imports;
frost$collections$HashSet* $tmp616 = *$tmp615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$collections$HashSet** $tmp617 = &param0->imports;
*$tmp617 = $tmp614;
// line 203
frost$io$IndentedOutputStream** $tmp618 = &param0->types;
frost$io$IndentedOutputStream* $tmp619 = *$tmp618;
frost$core$String** $tmp620 = &param1->name;
frost$core$String* $tmp621 = *$tmp620;
frost$core$String* $tmp622 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp621);
frost$core$String* $tmp623 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s624, $tmp622);
frost$core$String* $tmp625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp623, &$s626);
$fn628 $tmp627 = ($fn628) ((frost$io$OutputStream*) $tmp619)->$class->vtable[19];
frost$core$Error* $tmp629 = $tmp627(((frost$io$OutputStream*) $tmp619), $tmp625);
if ($tmp629 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local0) = $tmp629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$io$File* $tmp630 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// line 204
frost$io$IndentedOutputStream** $tmp632 = &param0->types;
frost$io$IndentedOutputStream* $tmp633 = *$tmp632;
frost$core$Int64* $tmp634 = &$tmp633->level;
frost$core$Int64 $tmp635 = *$tmp634;
frost$core$Int64 $tmp636 = (frost$core$Int64) {1};
int64_t $tmp637 = $tmp635.value;
int64_t $tmp638 = $tmp636.value;
int64_t $tmp639 = $tmp637 + $tmp638;
frost$core$Int64 $tmp640 = (frost$core$Int64) {$tmp639};
frost$core$Int64* $tmp641 = &$tmp633->level;
*$tmp641 = $tmp640;
// line 205
frost$core$Weak** $tmp642 = &param0->compiler;
frost$core$Weak* $tmp643 = *$tmp642;
frost$core$Object* $tmp644 = frost$core$Weak$get$R$frost$core$Weak$T($tmp643);
frost$collections$ListView* $tmp645 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp644), param1);
ITable* $tmp646 = ((frost$collections$Iterable*) $tmp645)->$class->itable;
while ($tmp646->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[0];
frost$collections$Iterator* $tmp649 = $tmp647(((frost$collections$Iterable*) $tmp645));
goto block21;
block21:;
ITable* $tmp650 = $tmp649->$class->itable;
while ($tmp650->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp650 = $tmp650->next;
}
$fn652 $tmp651 = $tmp650->methods[0];
frost$core$Bit $tmp653 = $tmp651($tmp649);
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block23; else goto block22;
block22:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp655 = $tmp649->$class->itable;
while ($tmp655->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp655 = $tmp655->next;
}
$fn657 $tmp656 = $tmp655->methods[1];
frost$core$Object* $tmp658 = $tmp656($tmp649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp658)));
org$frostlang$frostc$FieldDecl* $tmp659 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp658);
// line 206
frost$core$Weak** $tmp660 = &param0->compiler;
frost$core$Weak* $tmp661 = *$tmp660;
frost$core$Object* $tmp662 = frost$core$Weak$get$R$frost$core$Weak$T($tmp661);
org$frostlang$frostc$FieldDecl* $tmp663 = *(&local3);
frost$core$Bit $tmp664 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp662), $tmp663);
frost$core$Frost$unref$frost$core$Object$Q($tmp662);
// line 207
org$frostlang$frostc$FieldDecl* $tmp665 = *(&local3);
org$frostlang$frostc$Type** $tmp666 = &$tmp665->type;
org$frostlang$frostc$Type* $tmp667 = *$tmp666;
org$frostlang$frostc$Type* $tmp668 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp669 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp667, $tmp668);
bool $tmp670 = $tmp669.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
if ($tmp670) goto block24; else goto block26;
block24:;
// line 208
frost$io$IndentedOutputStream** $tmp671 = &param0->types;
frost$io$IndentedOutputStream* $tmp672 = *$tmp671;
org$frostlang$frostc$FieldDecl* $tmp673 = *(&local3);
frost$core$String** $tmp674 = &((org$frostlang$frostc$Symbol*) $tmp673)->name;
frost$core$String* $tmp675 = *$tmp674;
frost$core$String* $tmp676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s677, $tmp675);
frost$core$String* $tmp678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp676, &$s679);
org$frostlang$frostc$LLVMCodeGenerator** $tmp680 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp681 = *$tmp680;
frost$core$Int64 $tmp682 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp681, param1);
frost$core$Int64$wrapper* $tmp683;
$tmp683 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp683->value = $tmp682;
frost$core$String* $tmp684 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp678, ((frost$core$Object*) $tmp683));
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp684, &$s686);
$fn688 $tmp687 = ($fn688) ((frost$io$OutputStream*) $tmp672)->$class->vtable[19];
frost$core$Error* $tmp689 = $tmp687(((frost$io$OutputStream*) $tmp672), $tmp685);
if ($tmp689 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local0) = $tmp689;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$core$Frost$unref$frost$core$Object$Q($tmp658);
org$frostlang$frostc$FieldDecl* $tmp690 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q($tmp644);
frost$io$File* $tmp691 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp692 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
goto block25;
block26:;
// line 1
// line 211
frost$io$IndentedOutputStream** $tmp693 = &param0->types;
frost$io$IndentedOutputStream* $tmp694 = *$tmp693;
org$frostlang$frostc$FieldDecl* $tmp695 = *(&local3);
org$frostlang$frostc$Type** $tmp696 = &$tmp695->type;
org$frostlang$frostc$Type* $tmp697 = *$tmp696;
frost$core$String* $tmp698 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp697);
frost$core$String* $tmp699 = frost$core$String$get_asString$R$frost$core$String($tmp698);
frost$core$String* $tmp700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp699, &$s701);
org$frostlang$frostc$FieldDecl* $tmp702 = *(&local3);
frost$core$String** $tmp703 = &((org$frostlang$frostc$Symbol*) $tmp702)->name;
frost$core$String* $tmp704 = *$tmp703;
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp700, $tmp704);
frost$core$String* $tmp706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp705, &$s707);
$fn709 $tmp708 = ($fn709) ((frost$io$OutputStream*) $tmp694)->$class->vtable[19];
frost$core$Error* $tmp710 = $tmp708(((frost$io$OutputStream*) $tmp694), $tmp706);
if ($tmp710 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local0) = $tmp710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q($tmp658);
org$frostlang$frostc$FieldDecl* $tmp711 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q($tmp644);
frost$io$File* $tmp712 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp713 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp658);
org$frostlang$frostc$FieldDecl* $tmp714 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q($tmp644);
// line 214
frost$core$String** $tmp715 = &param1->name;
frost$core$String* $tmp716 = *$tmp715;
frost$core$Bit $tmp717 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp716, &$s718);
bool $tmp719 = $tmp717.value;
if ($tmp719) goto block31; else goto block32;
block31:;
// line 215
frost$io$IndentedOutputStream** $tmp720 = &param0->types;
frost$io$IndentedOutputStream* $tmp721 = *$tmp720;
$fn723 $tmp722 = ($fn723) ((frost$io$OutputStream*) $tmp721)->$class->vtable[19];
frost$core$Error* $tmp724 = $tmp722(((frost$io$OutputStream*) $tmp721), &$s725);
if ($tmp724 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local0) = $tmp724;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$io$File* $tmp726 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp727 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// line 216
frost$io$IndentedOutputStream** $tmp728 = &param0->types;
frost$io$IndentedOutputStream* $tmp729 = *$tmp728;
$fn731 $tmp730 = ($fn731) ((frost$io$OutputStream*) $tmp729)->$class->vtable[19];
frost$core$Error* $tmp732 = $tmp730(((frost$io$OutputStream*) $tmp729), &$s733);
if ($tmp732 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local0) = $tmp732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$io$File* $tmp734 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp735 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
goto block32;
block32:;
// line 218
frost$io$IndentedOutputStream** $tmp736 = &param0->types;
frost$io$IndentedOutputStream* $tmp737 = *$tmp736;
frost$core$Int64* $tmp738 = &$tmp737->level;
frost$core$Int64 $tmp739 = *$tmp738;
frost$core$Int64 $tmp740 = (frost$core$Int64) {1};
int64_t $tmp741 = $tmp739.value;
int64_t $tmp742 = $tmp740.value;
int64_t $tmp743 = $tmp741 - $tmp742;
frost$core$Int64 $tmp744 = (frost$core$Int64) {$tmp743};
frost$core$Int64* $tmp745 = &$tmp737->level;
*$tmp745 = $tmp744;
// line 219
frost$io$IndentedOutputStream** $tmp746 = &param0->types;
frost$io$IndentedOutputStream* $tmp747 = *$tmp746;
frost$core$String** $tmp748 = &param1->name;
frost$core$String* $tmp749 = *$tmp748;
frost$core$String* $tmp750 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp749);
frost$core$String* $tmp751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s752, $tmp750);
frost$core$String* $tmp753 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp751, &$s754);
$fn756 $tmp755 = ($fn756) ((frost$io$OutputStream*) $tmp747)->$class->vtable[19];
frost$core$Error* $tmp757 = $tmp755(((frost$io$OutputStream*) $tmp747), $tmp753);
if ($tmp757 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local0) = $tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$io$File* $tmp758 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp759 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// line 220
frost$io$IndentedOutputStream** $tmp760 = &param0->types;
frost$io$IndentedOutputStream* $tmp761 = *$tmp760;
$fn763 $tmp762 = ($fn763) ((frost$io$OutputStream*) $tmp761)->$class->vtable[19];
frost$core$Error* $tmp764 = $tmp762(((frost$io$OutputStream*) $tmp761), &$s765);
if ($tmp764 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local0) = $tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$io$File* $tmp766 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp767 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// line 221
frost$io$IndentedOutputStream** $tmp768 = &param0->types;
frost$io$IndentedOutputStream* $tmp769 = *$tmp768;
org$frostlang$frostc$Type* $tmp770 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp771 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp770);
frost$core$String* $tmp772 = frost$core$String$get_asString$R$frost$core$String($tmp771);
frost$core$String* $tmp773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp772, &$s774);
org$frostlang$frostc$Type* $tmp775 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp776 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp775);
frost$core$String* $tmp777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp773, $tmp776);
frost$core$String* $tmp778 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp777, &$s779);
frost$core$String* $tmp780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s781, $tmp778);
frost$core$Weak** $tmp782 = &param0->compiler;
frost$core$Weak* $tmp783 = *$tmp782;
frost$core$Object* $tmp784 = frost$core$Weak$get$R$frost$core$Weak$T($tmp783);
frost$collections$ListView* $tmp785 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp784), param1);
ITable* $tmp786 = ((frost$collections$CollectionView*) $tmp785)->$class->itable;
while ($tmp786->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp786 = $tmp786->next;
}
$fn788 $tmp787 = $tmp786->methods[0];
frost$core$Int64 $tmp789 = $tmp787(((frost$collections$CollectionView*) $tmp785));
frost$core$Int64$wrapper* $tmp790;
$tmp790 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp790->value = $tmp789;
frost$core$String* $tmp791 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s792, ((frost$core$Object*) $tmp790));
frost$core$String* $tmp793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp791, &$s794);
frost$core$String* $tmp795 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp780, $tmp793);
frost$core$String** $tmp796 = &param1->name;
frost$core$String* $tmp797 = *$tmp796;
frost$core$String* $tmp798 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp797);
frost$core$String* $tmp799 = frost$core$String$get_asString$R$frost$core$String($tmp798);
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp799, &$s801);
frost$core$String* $tmp802 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp795, $tmp800);
$fn804 $tmp803 = ($fn804) ((frost$io$OutputStream*) $tmp769)->$class->vtable[19];
frost$core$Error* $tmp805 = $tmp803(((frost$io$OutputStream*) $tmp769), $tmp802);
if ($tmp805 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local0) = $tmp805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q($tmp784);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$io$File* $tmp806 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp807 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q($tmp784);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// line 225
frost$io$IndentedOutputStream** $tmp808 = &param0->types;
frost$io$IndentedOutputStream* $tmp809 = *$tmp808;
frost$core$String** $tmp810 = &param1->name;
frost$core$String* $tmp811 = *$tmp810;
frost$core$String* $tmp812 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp811);
frost$core$String* $tmp813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s814, $tmp812);
frost$core$String* $tmp815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp813, &$s816);
frost$core$String** $tmp817 = &param1->name;
frost$core$String* $tmp818 = *$tmp817;
frost$core$String* $tmp819 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp818);
frost$core$String* $tmp820 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp815, $tmp819);
frost$core$String* $tmp821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp820, &$s822);
$fn824 $tmp823 = ($fn824) ((frost$io$OutputStream*) $tmp809)->$class->vtable[19];
frost$core$Error* $tmp825 = $tmp823(((frost$io$OutputStream*) $tmp809), $tmp821);
if ($tmp825 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local0) = $tmp825;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$io$File* $tmp826 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp827 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// line 226
frost$core$Weak** $tmp828 = &param0->compiler;
frost$core$Weak* $tmp829 = *$tmp828;
frost$core$Object* $tmp830 = frost$core$Weak$get$R$frost$core$Weak$T($tmp829);
frost$core$Bit $tmp831 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp830), param1);
bool $tmp832 = $tmp831.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp830);
if ($tmp832) goto block45; else goto block46;
block45:;
// line 227
frost$io$IndentedOutputStream** $tmp833 = &param0->types;
frost$io$IndentedOutputStream* $tmp834 = *$tmp833;
frost$core$String** $tmp835 = &param1->name;
frost$core$String* $tmp836 = *$tmp835;
frost$core$String* $tmp837 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp836);
frost$core$String* $tmp838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s839, $tmp837);
frost$core$String* $tmp840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp838, &$s841);
$fn843 $tmp842 = ($fn843) ((frost$io$OutputStream*) $tmp834)->$class->vtable[19];
frost$core$Error* $tmp844 = $tmp842(((frost$io$OutputStream*) $tmp834), $tmp840);
if ($tmp844 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local0) = $tmp844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$io$File* $tmp845 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp846 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// line 228
frost$io$IndentedOutputStream** $tmp847 = &param0->types;
frost$io$IndentedOutputStream* $tmp848 = *$tmp847;
frost$core$Int64* $tmp849 = &$tmp848->level;
frost$core$Int64 $tmp850 = *$tmp849;
frost$core$Int64 $tmp851 = (frost$core$Int64) {1};
int64_t $tmp852 = $tmp850.value;
int64_t $tmp853 = $tmp851.value;
int64_t $tmp854 = $tmp852 + $tmp853;
frost$core$Int64 $tmp855 = (frost$core$Int64) {$tmp854};
frost$core$Int64* $tmp856 = &$tmp848->level;
*$tmp856 = $tmp855;
// line 229
frost$io$IndentedOutputStream** $tmp857 = &param0->types;
frost$io$IndentedOutputStream* $tmp858 = *$tmp857;
$fn860 $tmp859 = ($fn860) ((frost$io$OutputStream*) $tmp858)->$class->vtable[19];
frost$core$Error* $tmp861 = $tmp859(((frost$io$OutputStream*) $tmp858), &$s862);
if ($tmp861 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local0) = $tmp861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$io$File* $tmp863 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp864 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// line 230
frost$io$IndentedOutputStream** $tmp865 = &param0->types;
frost$io$IndentedOutputStream* $tmp866 = *$tmp865;
$fn868 $tmp867 = ($fn868) ((frost$io$OutputStream*) $tmp866)->$class->vtable[19];
frost$core$Error* $tmp869 = $tmp867(((frost$io$OutputStream*) $tmp866), &$s870);
if ($tmp869 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local0) = $tmp869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$io$File* $tmp871 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp872 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// line 231
frost$io$IndentedOutputStream** $tmp873 = &param0->types;
frost$io$IndentedOutputStream* $tmp874 = *$tmp873;
org$frostlang$frostc$Type** $tmp875 = &param1->type;
org$frostlang$frostc$Type* $tmp876 = *$tmp875;
frost$core$String* $tmp877 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp876);
frost$core$String* $tmp878 = frost$core$String$get_asString$R$frost$core$String($tmp877);
frost$core$String* $tmp879 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp878, &$s880);
$fn882 $tmp881 = ($fn882) ((frost$io$OutputStream*) $tmp874)->$class->vtable[19];
frost$core$Error* $tmp883 = $tmp881(((frost$io$OutputStream*) $tmp874), $tmp879);
if ($tmp883 == NULL) goto block53; else goto block54;
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local0) = $tmp883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$io$File* $tmp884 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp885 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// line 232
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
// line 233
frost$io$IndentedOutputStream** $tmp896 = &param0->types;
frost$io$IndentedOutputStream* $tmp897 = *$tmp896;
frost$core$String** $tmp898 = &param1->name;
frost$core$String* $tmp899 = *$tmp898;
frost$core$String* $tmp900 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp899);
frost$core$String* $tmp901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s902, $tmp900);
frost$core$String* $tmp903 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp901, &$s904);
$fn906 $tmp905 = ($fn906) ((frost$io$OutputStream*) $tmp897)->$class->vtable[19];
frost$core$Error* $tmp907 = $tmp905(((frost$io$OutputStream*) $tmp897), $tmp903);
if ($tmp907 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local0) = $tmp907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$io$File* $tmp908 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp909 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// line 234
frost$io$IndentedOutputStream** $tmp910 = &param0->types;
frost$io$IndentedOutputStream* $tmp911 = *$tmp910;
frost$core$String** $tmp912 = &param1->name;
frost$core$String* $tmp913 = *$tmp912;
frost$core$String* $tmp914 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp913);
frost$core$String* $tmp915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s916, $tmp914);
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp915, &$s918);
$fn920 $tmp919 = ($fn920) ((frost$io$OutputStream*) $tmp911)->$class->vtable[19];
frost$core$Error* $tmp921 = $tmp919(((frost$io$OutputStream*) $tmp911), $tmp917);
if ($tmp921 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local0) = $tmp921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$io$File* $tmp922 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp923 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// line 235
frost$io$IndentedOutputStream** $tmp924 = &param0->types;
frost$io$IndentedOutputStream* $tmp925 = *$tmp924;
frost$core$Int64* $tmp926 = &$tmp925->level;
frost$core$Int64 $tmp927 = *$tmp926;
frost$core$Int64 $tmp928 = (frost$core$Int64) {1};
int64_t $tmp929 = $tmp927.value;
int64_t $tmp930 = $tmp928.value;
int64_t $tmp931 = $tmp929 + $tmp930;
frost$core$Int64 $tmp932 = (frost$core$Int64) {$tmp931};
frost$core$Int64* $tmp933 = &$tmp925->level;
*$tmp933 = $tmp932;
// line 236
frost$io$IndentedOutputStream** $tmp934 = &param0->types;
frost$io$IndentedOutputStream* $tmp935 = *$tmp934;
frost$core$String** $tmp936 = &param1->name;
frost$core$String* $tmp937 = *$tmp936;
frost$core$String* $tmp938 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp937);
frost$core$String* $tmp939 = frost$core$String$get_asString$R$frost$core$String($tmp938);
frost$core$String* $tmp940 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp939, &$s941);
$fn943 $tmp942 = ($fn943) ((frost$io$OutputStream*) $tmp935)->$class->vtable[19];
frost$core$Error* $tmp944 = $tmp942(((frost$io$OutputStream*) $tmp935), $tmp940);
if ($tmp944 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local0) = $tmp944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$io$File* $tmp945 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp946 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// line 237
frost$io$IndentedOutputStream** $tmp947 = &param0->types;
frost$io$IndentedOutputStream* $tmp948 = *$tmp947;
$fn950 $tmp949 = ($fn950) ((frost$io$OutputStream*) $tmp948)->$class->vtable[19];
frost$core$Error* $tmp951 = $tmp949(((frost$io$OutputStream*) $tmp948), &$s952);
if ($tmp951 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
*(&local0) = $tmp951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$io$File* $tmp953 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp954 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// line 238
frost$io$IndentedOutputStream** $tmp955 = &param0->types;
frost$io$IndentedOutputStream* $tmp956 = *$tmp955;
frost$core$Int64* $tmp957 = &$tmp956->level;
frost$core$Int64 $tmp958 = *$tmp957;
frost$core$Int64 $tmp959 = (frost$core$Int64) {1};
int64_t $tmp960 = $tmp958.value;
int64_t $tmp961 = $tmp959.value;
int64_t $tmp962 = $tmp960 - $tmp961;
frost$core$Int64 $tmp963 = (frost$core$Int64) {$tmp962};
frost$core$Int64* $tmp964 = &$tmp956->level;
*$tmp964 = $tmp963;
// line 239
frost$io$IndentedOutputStream** $tmp965 = &param0->types;
frost$io$IndentedOutputStream* $tmp966 = *$tmp965;
frost$core$String** $tmp967 = &param1->name;
frost$core$String* $tmp968 = *$tmp967;
frost$core$String* $tmp969 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp968);
frost$core$String* $tmp970 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s971, $tmp969);
frost$core$String* $tmp972 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp970, &$s973);
$fn975 $tmp974 = ($fn975) ((frost$io$OutputStream*) $tmp966)->$class->vtable[19];
frost$core$Error* $tmp976 = $tmp974(((frost$io$OutputStream*) $tmp966), $tmp972);
if ($tmp976 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local0) = $tmp976;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$io$File* $tmp977 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp978 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// line 240
frost$core$Weak** $tmp979 = &param0->compiler;
frost$core$Weak* $tmp980 = *$tmp979;
frost$core$Object* $tmp981 = frost$core$Weak$get$R$frost$core$Weak$T($tmp980);
org$frostlang$frostc$Type* $tmp982 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp983 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp981), $tmp982);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
org$frostlang$frostc$ClassDecl* $tmp984 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local4) = $tmp983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q($tmp981);
// line 241
frost$core$Weak** $tmp985 = &param0->compiler;
frost$core$Weak* $tmp986 = *$tmp985;
frost$core$Object* $tmp987 = frost$core$Weak$get$R$frost$core$Weak$T($tmp986);
org$frostlang$frostc$ClassDecl* $tmp988 = *(&local4);
frost$collections$ListView* $tmp989 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp987), $tmp988);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$collections$ListView* $tmp990 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local5) = $tmp989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q($tmp987);
// line 242
frost$io$IndentedOutputStream** $tmp991 = &param0->types;
frost$io$IndentedOutputStream* $tmp992 = *$tmp991;
frost$collections$ListView* $tmp993 = *(&local5);
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
frost$core$String* $tmp1008 = frost$core$String$get_asString$R$frost$core$String($tmp1007);
frost$core$String* $tmp1009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1008, &$s1010);
frost$core$String* $tmp1011 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1003, $tmp1009);
$fn1013 $tmp1012 = ($fn1013) ((frost$io$OutputStream*) $tmp992)->$class->vtable[19];
frost$core$Error* $tmp1014 = $tmp1012(((frost$io$OutputStream*) $tmp992), $tmp1011);
if ($tmp1014 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local0) = $tmp1014;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$collections$ListView* $tmp1015 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1016 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1017 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1018 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// line 246
frost$io$IndentedOutputStream** $tmp1019 = &param0->types;
frost$io$IndentedOutputStream* $tmp1020 = *$tmp1019;
frost$core$String** $tmp1021 = &param1->name;
frost$core$String* $tmp1022 = *$tmp1021;
frost$core$String* $tmp1023 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1022);
frost$core$String* $tmp1024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1025, $tmp1023);
frost$core$String* $tmp1026 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1024, &$s1027);
frost$core$String** $tmp1028 = &param1->name;
frost$core$String* $tmp1029 = *$tmp1028;
frost$core$String* $tmp1030 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1029);
frost$core$String* $tmp1031 = frost$core$String$get_asString$R$frost$core$String($tmp1030);
frost$core$String* $tmp1032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1031, &$s1033);
frost$core$String* $tmp1034 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1026, $tmp1032);
$fn1036 $tmp1035 = ($fn1036) ((frost$io$OutputStream*) $tmp1020)->$class->vtable[19];
frost$core$Error* $tmp1037 = $tmp1035(((frost$io$OutputStream*) $tmp1020), $tmp1034);
if ($tmp1037 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local0) = $tmp1037;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$collections$ListView* $tmp1038 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1039 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1040 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1041 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$collections$ListView* $tmp1042 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1043 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block46;
block46:;
frost$io$File* $tmp1044 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1045 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 251
frost$core$Weak** $tmp1046 = &param0->compiler;
frost$core$Weak* $tmp1047 = *$tmp1046;
frost$core$Object* $tmp1048 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1047);
org$frostlang$frostc$Position* $tmp1049 = &param1->position;
org$frostlang$frostc$Position $tmp1050 = *$tmp1049;
frost$core$Error* $tmp1051 = *(&local0);
frost$core$String** $tmp1052 = &$tmp1051->message;
frost$core$String* $tmp1053 = *$tmp1052;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1048), $tmp1050, $tmp1053);
frost$core$Frost$unref$frost$core$Object$Q($tmp1048);
goto block2;
block2:;
frost$core$Error* $tmp1054 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
// line 256
frost$core$Weak** $tmp1055 = &param1->owner;
frost$core$Weak* $tmp1056 = *$tmp1055;
frost$core$Object* $tmp1057 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1056);
org$frostlang$frostc$Type** $tmp1058 = &((org$frostlang$frostc$ClassDecl*) $tmp1057)->type;
org$frostlang$frostc$Type* $tmp1059 = *$tmp1058;
frost$core$String* $tmp1060 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1059);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$String* $tmp1061 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local0) = $tmp1060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q($tmp1057);
// line 257
org$frostlang$frostc$MethodDecl$Kind* $tmp1062 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1063 = *$tmp1062;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1064;
$tmp1064 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1064->value = $tmp1063;
frost$core$Int64 $tmp1065 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1066 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1065);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1067;
$tmp1067 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1067->value = $tmp1066;
ITable* $tmp1068 = ((frost$core$Equatable*) $tmp1064)->$class->itable;
while ($tmp1068->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1068 = $tmp1068->next;
}
$fn1070 $tmp1069 = $tmp1068->methods[0];
frost$core$Bit $tmp1071 = $tmp1069(((frost$core$Equatable*) $tmp1064), ((frost$core$Equatable*) $tmp1067));
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block3; else goto block4;
block3:;
frost$core$String* $tmp1073 = *(&local0);
frost$core$Bit $tmp1074 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1073, &$s1075);
frost$core$Bit $tmp1076 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1074);
*(&local1) = $tmp1076;
goto block5;
block4:;
*(&local1) = $tmp1071;
goto block5;
block5:;
frost$core$Bit $tmp1077 = *(&local1);
bool $tmp1078 = $tmp1077.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1067)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1064)));
if ($tmp1078) goto block1; else goto block2;
block1:;
// line 258
frost$core$String* $tmp1079 = *(&local0);
frost$core$String* $tmp1080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1079, &$s1081);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$String* $tmp1082 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1080;
block2:;
// line 260
frost$core$String* $tmp1083 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$String* $tmp1084 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1083;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 280
org$frostlang$frostc$Type** $tmp1085 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1086 = *$tmp1085;
frost$core$Bit $tmp1087 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1086);
frost$core$Bit $tmp1088 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1087);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block1; else goto block2;
block1:;
// line 281
frost$core$Bit $tmp1090 = frost$core$Bit$init$builtin_bit(false);
return $tmp1090;
block2:;
// line 283
org$frostlang$frostc$Annotations** $tmp1091 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1092 = *$tmp1091;
frost$core$Bit $tmp1093 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1092);
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1095 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1096 = *$tmp1095;
frost$core$Bit $tmp1097 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1096);
*(&local1) = $tmp1097;
goto block5;
block4:;
*(&local1) = $tmp1093;
goto block5;
block5:;
frost$core$Bit $tmp1098 = *(&local1);
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1100 = &param0->compiler;
frost$core$Weak* $tmp1101 = *$tmp1100;
frost$core$Object* $tmp1102 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1101);
frost$core$Weak** $tmp1103 = &param0->compiler;
frost$core$Weak* $tmp1104 = *$tmp1103;
frost$core$Object* $tmp1105 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1104);
org$frostlang$frostc$Type** $tmp1106 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1107 = *$tmp1106;
org$frostlang$frostc$ClassDecl* $tmp1108 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1105), $tmp1107);
frost$core$Bit $tmp1109 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1102), $tmp1108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$core$Frost$unref$frost$core$Object$Q($tmp1105);
frost$core$Frost$unref$frost$core$Object$Q($tmp1102);
*(&local0) = $tmp1109;
goto block8;
block7:;
*(&local0) = $tmp1098;
goto block8;
block8:;
frost$core$Bit $tmp1110 = *(&local0);
*(&local2) = $tmp1110;
// line 289
frost$core$Bit $tmp1111 = *(&local2);
frost$core$Bit $tmp1112 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1111);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block9; else goto block10;
block9:;
*(&local3) = $tmp1112;
goto block11;
block10:;
org$frostlang$frostc$Annotations** $tmp1114 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1115 = *$tmp1114;
frost$core$Bit $tmp1116 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1115);
frost$core$Bit $tmp1117 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1116);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Annotations** $tmp1119 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1120 = *$tmp1119;
frost$core$Bit $tmp1121 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1120);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block15; else goto block16;
block15:;
*(&local5) = $tmp1121;
goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1123 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1124 = *$tmp1123;
frost$core$Bit $tmp1125 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1124);
*(&local5) = $tmp1125;
goto block17;
block17:;
frost$core$Bit $tmp1126 = *(&local5);
*(&local4) = $tmp1126;
goto block14;
block13:;
*(&local4) = $tmp1117;
goto block14;
block14:;
frost$core$Bit $tmp1127 = *(&local4);
*(&local3) = $tmp1127;
goto block11;
block11:;
frost$core$Bit $tmp1128 = *(&local3);
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1130 = (frost$core$Int64) {289};
frost$core$String* $tmp1131 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1133, $tmp1131);
frost$core$String* $tmp1134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1132, &$s1135);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1136, $tmp1130, $tmp1134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
abort(); // unreachable
block18:;
// line 291
frost$core$Bit $tmp1137 = *(&local2);
return $tmp1137;

}
void org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Bit local2;
org$frostlang$frostc$MethodDecl$Parameter* local3 = NULL;
frost$core$String* local4 = NULL;
// line 296
*(&local0) = ((frost$core$Error*) NULL);
// line 297
frost$io$MemoryOutputStream** $tmp1138 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1139 = *$tmp1138;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$io$MemoryOutputStream** $tmp1140 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1141 = *$tmp1140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$io$MemoryOutputStream** $tmp1142 = &param0->importStream;
*$tmp1142 = $tmp1139;
// line 298
frost$collections$HashSet** $tmp1143 = &param0->bodyImports;
frost$collections$HashSet* $tmp1144 = *$tmp1143;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$collections$HashSet** $tmp1145 = &param0->imports;
frost$collections$HashSet* $tmp1146 = *$tmp1145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$collections$HashSet** $tmp1147 = &param0->imports;
*$tmp1147 = $tmp1144;
// line 299
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1148));
frost$core$String* $tmp1149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local1) = &$s1150;
// line 300
frost$core$Bit $tmp1151 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block3; else goto block5;
block3:;
// line 301
frost$io$IndentedOutputStream** $tmp1153 = &param0->body;
frost$io$IndentedOutputStream* $tmp1154 = *$tmp1153;
frost$core$String* $tmp1155 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1157, $tmp1155);
frost$core$String* $tmp1158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1156, &$s1159);
org$frostlang$frostc$Type** $tmp1160 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1161 = *$tmp1160;
frost$core$String* $tmp1162 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1161);
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1158, $tmp1162);
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1163, &$s1165);
$fn1167 $tmp1166 = ($fn1167) ((frost$io$OutputStream*) $tmp1154)->$class->vtable[17];
frost$core$Error* $tmp1168 = $tmp1166(((frost$io$OutputStream*) $tmp1154), $tmp1164);
if ($tmp1168 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local0) = $tmp1168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
frost$core$String* $tmp1169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// line 302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1170));
frost$core$String* $tmp1171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local1) = &$s1172;
goto block4;
block5:;
// line 1
// line 305
frost$io$IndentedOutputStream** $tmp1173 = &param0->body;
frost$io$IndentedOutputStream* $tmp1174 = *$tmp1173;
org$frostlang$frostc$Type** $tmp1175 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1176 = *$tmp1175;
frost$core$String* $tmp1177 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1176);
frost$core$String* $tmp1178 = frost$core$String$get_asString$R$frost$core$String($tmp1177);
frost$core$String* $tmp1179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1178, &$s1180);
frost$core$String* $tmp1181 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1179, $tmp1181);
frost$core$String* $tmp1183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1182, &$s1184);
$fn1186 $tmp1185 = ($fn1186) ((frost$io$OutputStream*) $tmp1174)->$class->vtable[17];
frost$core$Error* $tmp1187 = $tmp1185(((frost$io$OutputStream*) $tmp1174), $tmp1183);
if ($tmp1187 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
*(&local0) = $tmp1187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$String* $tmp1188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
goto block4;
block4:;
// line 307
org$frostlang$frostc$Annotations** $tmp1189 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1190 = *$tmp1189;
frost$core$Bit $tmp1191 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1190);
frost$core$Bit $tmp1192 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1191);
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block12; else goto block13;
block12:;
frost$core$Weak** $tmp1194 = &param0->compiler;
frost$core$Weak* $tmp1195 = *$tmp1194;
frost$core$Object* $tmp1196 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1195);
frost$core$Bit $tmp1197 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1196), param1);
frost$core$Bit $tmp1198 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1197);
frost$core$Frost$unref$frost$core$Object$Q($tmp1196);
*(&local2) = $tmp1198;
goto block14;
block13:;
*(&local2) = $tmp1192;
goto block14;
block14:;
frost$core$Bit $tmp1199 = *(&local2);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block10; else goto block11;
block10:;
// line 308
frost$io$IndentedOutputStream** $tmp1201 = &param0->body;
frost$io$IndentedOutputStream* $tmp1202 = *$tmp1201;
frost$core$String* $tmp1203 = *(&local1);
frost$core$String* $tmp1204 = frost$core$String$get_asString$R$frost$core$String($tmp1203);
frost$core$String* $tmp1205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1204, &$s1206);
frost$core$String* $tmp1207 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1205, $tmp1207);
frost$core$String* $tmp1209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1208, &$s1210);
$fn1212 $tmp1211 = ($fn1212) ((frost$io$OutputStream*) $tmp1202)->$class->vtable[17];
frost$core$Error* $tmp1213 = $tmp1211(((frost$io$OutputStream*) $tmp1202), $tmp1209);
if ($tmp1213 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
*(&local0) = $tmp1213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$String* $tmp1214 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// line 309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1215));
frost$core$String* $tmp1216 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local1) = &$s1217;
goto block11;
block11:;
// line 311
frost$collections$Array** $tmp1218 = &param1->parameters;
frost$collections$Array* $tmp1219 = *$tmp1218;
ITable* $tmp1220 = ((frost$collections$Iterable*) $tmp1219)->$class->itable;
while ($tmp1220->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[0];
frost$collections$Iterator* $tmp1223 = $tmp1221(((frost$collections$Iterable*) $tmp1219));
goto block17;
block17:;
ITable* $tmp1224 = $tmp1223->$class->itable;
while ($tmp1224->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1224 = $tmp1224->next;
}
$fn1226 $tmp1225 = $tmp1224->methods[0];
frost$core$Bit $tmp1227 = $tmp1225($tmp1223);
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block19; else goto block18;
block18:;
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1229 = $tmp1223->$class->itable;
while ($tmp1229->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1229 = $tmp1229->next;
}
$fn1231 $tmp1230 = $tmp1229->methods[1];
frost$core$Object* $tmp1232 = $tmp1230($tmp1223);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1232)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1233 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1232);
// line 312
org$frostlang$frostc$MethodDecl$Parameter* $tmp1234 = *(&local3);
frost$core$String** $tmp1235 = &$tmp1234->name;
frost$core$String* $tmp1236 = *$tmp1235;
frost$core$String* $tmp1237 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1236);
frost$core$String* $tmp1238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1239, $tmp1237);
frost$core$String* $tmp1240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1238, &$s1241);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
frost$core$String* $tmp1242 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local4) = $tmp1240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
// line 313
frost$io$IndentedOutputStream** $tmp1243 = &param0->body;
frost$io$IndentedOutputStream* $tmp1244 = *$tmp1243;
frost$core$String* $tmp1245 = *(&local1);
frost$core$String* $tmp1246 = frost$core$String$get_asString$R$frost$core$String($tmp1245);
frost$core$String* $tmp1247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1246, &$s1248);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1249 = *(&local3);
org$frostlang$frostc$Type** $tmp1250 = &$tmp1249->type;
org$frostlang$frostc$Type* $tmp1251 = *$tmp1250;
frost$core$String* $tmp1252 = *(&local4);
frost$core$String* $tmp1253 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1251, $tmp1252);
frost$core$String* $tmp1254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1247, $tmp1253);
frost$core$String* $tmp1255 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1254, &$s1256);
$fn1258 $tmp1257 = ($fn1258) ((frost$io$OutputStream*) $tmp1244)->$class->vtable[17];
frost$core$Error* $tmp1259 = $tmp1257(((frost$io$OutputStream*) $tmp1244), $tmp1255);
if ($tmp1259 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local0) = $tmp1259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$String* $tmp1260 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1232);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1261 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$String* $tmp1262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// line 314
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1263));
frost$core$String* $tmp1264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local1) = &$s1265;
frost$core$String* $tmp1266 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1232);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1267 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
// line 316
frost$io$IndentedOutputStream** $tmp1268 = &param0->body;
frost$io$IndentedOutputStream* $tmp1269 = *$tmp1268;
$fn1271 $tmp1270 = ($fn1271) ((frost$io$OutputStream*) $tmp1269)->$class->vtable[19];
frost$core$Error* $tmp1272 = $tmp1270(((frost$io$OutputStream*) $tmp1269), &$s1273);
if ($tmp1272 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local0) = $tmp1272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$String* $tmp1274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$String* $tmp1275 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 319
frost$core$Bit $tmp1276 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp1278 = (frost$core$Int64) {319};
frost$core$Error* $tmp1279 = *(&local0);
$fn1281 $tmp1280 = ($fn1281) ((frost$core$Object*) $tmp1279)->$class->vtable[0];
frost$core$String* $tmp1282 = $tmp1280(((frost$core$Object*) $tmp1279));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1283, $tmp1278, $tmp1282);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
abort(); // unreachable
block24:;
goto block2;
block2:;
frost$core$Error* $tmp1284 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

// line 325
org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
// line 330
*(&local0) = ((frost$core$Error*) NULL);
// line 331
frost$io$IndentedOutputStream** $tmp1285 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1286 = *$tmp1285;
frost$io$MemoryOutputStream** $tmp1287 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1288 = *$tmp1287;
$fn1290 $tmp1289 = ($fn1290) ((frost$io$OutputStream*) $tmp1286)->$class->vtable[20];
frost$core$Error* $tmp1291 = $tmp1289(((frost$io$OutputStream*) $tmp1286), ((frost$core$Object*) $tmp1288));
if ($tmp1291 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local0) = $tmp1291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
// line 332
frost$io$IndentedOutputStream** $tmp1292 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1293 = *$tmp1292;
frost$io$MemoryOutputStream** $tmp1294 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1295 = *$tmp1294;
$fn1297 $tmp1296 = ($fn1297) ((frost$io$OutputStream*) $tmp1293)->$class->vtable[20];
frost$core$Error* $tmp1298 = $tmp1296(((frost$io$OutputStream*) $tmp1293), ((frost$core$Object*) $tmp1295));
if ($tmp1298 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local0) = $tmp1298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// line 333
frost$io$IndentedOutputStream** $tmp1299 = &param0->out;
frost$io$IndentedOutputStream* $tmp1300 = *$tmp1299;
frost$io$MemoryOutputStream** $tmp1301 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1302 = *$tmp1301;
$fn1304 $tmp1303 = ($fn1304) ((frost$io$OutputStream*) $tmp1300)->$class->vtable[20];
frost$core$Error* $tmp1305 = $tmp1303(((frost$io$OutputStream*) $tmp1300), ((frost$core$Object*) $tmp1302));
if ($tmp1305 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local0) = $tmp1305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
// line 334
frost$io$IndentedOutputStream** $tmp1306 = &param0->out;
frost$io$IndentedOutputStream* $tmp1307 = *$tmp1306;
frost$io$MemoryOutputStream** $tmp1308 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1309 = *$tmp1308;
$fn1311 $tmp1310 = ($fn1311) ((frost$io$OutputStream*) $tmp1307)->$class->vtable[20];
frost$core$Error* $tmp1312 = $tmp1310(((frost$io$OutputStream*) $tmp1307), ((frost$core$Object*) $tmp1309));
if ($tmp1312 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local0) = $tmp1312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
goto block2;
block1:;
// line 337
frost$core$Error* $tmp1313 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp1313));
// line 338
frost$core$Int64 $tmp1314 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp1314);
goto block2;
block2:;
frost$core$Error* $tmp1315 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HCodeGenerator$finish(org$frostlang$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$HCodeGenerator$cleanup(org$frostlang$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1316 = &param0->compiler;
frost$core$Weak* $tmp1317 = *$tmp1316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$io$MemoryOutputStream** $tmp1318 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1319 = *$tmp1318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$io$MemoryOutputStream** $tmp1320 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1321 = *$tmp1320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$io$IndentedOutputStream** $tmp1322 = &param0->types;
frost$io$IndentedOutputStream* $tmp1323 = *$tmp1322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$io$MemoryOutputStream** $tmp1324 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1325 = *$tmp1324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$io$MemoryOutputStream** $tmp1326 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1327 = *$tmp1326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$io$IndentedOutputStream** $tmp1328 = &param0->body;
frost$io$IndentedOutputStream* $tmp1329 = *$tmp1328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$collections$HashSet** $tmp1330 = &param0->typeImports;
frost$collections$HashSet* $tmp1331 = *$tmp1330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$collections$HashSet** $tmp1332 = &param0->bodyImports;
frost$collections$HashSet* $tmp1333 = *$tmp1332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$collections$HashSet** $tmp1334 = &param0->imports;
frost$collections$HashSet* $tmp1335 = *$tmp1334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$io$MemoryOutputStream** $tmp1336 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1337 = *$tmp1336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$io$File** $tmp1338 = &param0->outDir;
frost$io$File* $tmp1339 = *$tmp1338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
frost$io$IndentedOutputStream** $tmp1340 = &param0->out;
frost$io$IndentedOutputStream* $tmp1341 = *$tmp1340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$io$IndentedOutputStream** $tmp1342 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1343 = *$tmp1342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1344 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1345 = *$tmp1344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
frost$core$Weak** $tmp1346 = &param0->cCodeGen;
frost$core$Weak* $tmp1347 = *$tmp1346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
org$frostlang$frostc$CCodeGenerator** $tmp1348 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1349 = *$tmp1348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
return;

}

