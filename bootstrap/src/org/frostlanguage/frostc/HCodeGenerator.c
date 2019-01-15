#include "org/frostlanguage/frostc/HCodeGenerator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/CodeGenerator.h"
#include "frost/io/File.h"
#include "org/frostlanguage/frostc/CCodeGenerator.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "frost/io/MemoryOutputStream.h"
#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/collections/HashSet.h"
#include "org/frostlanguage/frostc/LLVMCodeGenerator.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/Type/Kind.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/collections/Key.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlanguage/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlanguage/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlanguage/frostc/Annotations.h"
#include "org/frostlanguage/frostc/MethodDecl/Parameter.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/IR.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlanguage$frostc$HCodeGenerator$_org$frostlanguage$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlanguage$frostc$CodeGenerator$class, NULL, { org$frostlanguage$frostc$HCodeGenerator$setCompiler$org$frostlanguage$frostc$Compiler, org$frostlanguage$frostc$HCodeGenerator$start$org$frostlanguage$frostc$ClassDecl, org$frostlanguage$frostc$HCodeGenerator$end$org$frostlanguage$frostc$ClassDecl, org$frostlanguage$frostc$HCodeGenerator$writeDeclaration$org$frostlanguage$frostc$MethodDecl, org$frostlanguage$frostc$HCodeGenerator$write$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$IR, org$frostlanguage$frostc$HCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlanguage$frostc$HCodeGenerator$class_type org$frostlanguage$frostc$HCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlanguage$frostc$HCodeGenerator$_org$frostlanguage$frostc$CodeGenerator, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$HCodeGenerator$cleanup, org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlanguage$frostc$HCodeGenerator$getName$org$frostlanguage$frostc$MethodDecl$R$frost$core$String, org$frostlanguage$frostc$HCodeGenerator$sizeOf$org$frostlanguage$frostc$Type$R$frost$core$Int64, org$frostlanguage$frostc$HCodeGenerator$getRelativePath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$core$String, org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String, org$frostlanguage$frostc$HCodeGenerator$declaration$org$frostlanguage$frostc$Type$frost$core$String$R$frost$core$String, org$frostlanguage$frostc$HCodeGenerator$setCompiler$org$frostlanguage$frostc$Compiler, org$frostlanguage$frostc$HCodeGenerator$getPath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$io$File, org$frostlanguage$frostc$HCodeGenerator$start$org$frostlanguage$frostc$ClassDecl, org$frostlanguage$frostc$HCodeGenerator$selfType$org$frostlanguage$frostc$MethodDecl$R$frost$core$String, org$frostlanguage$frostc$HCodeGenerator$needsStructIndirection$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit, org$frostlanguage$frostc$HCodeGenerator$writeDeclaration$org$frostlanguage$frostc$MethodDecl, org$frostlanguage$frostc$HCodeGenerator$write$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$IR, org$frostlanguage$frostc$HCodeGenerator$end$org$frostlanguage$frostc$ClassDecl, org$frostlanguage$frostc$HCodeGenerator$finish} };

typedef void (*$fn228)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn255)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn365)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn393)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn507)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn512)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn523)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn527)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn532)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn554)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn571)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn575)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn580)(frost$collections$Iterator*);
typedef void (*$fn611)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn628)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn638)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn643)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn665)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn669)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn691)(frost$collections$CollectionView*);
typedef void (*$fn707)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn724)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn740)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn754)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn759)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn770)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn791)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn802)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn822)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn826)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn848)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn866)(frost$collections$CollectionView*);
typedef void (*$fn883)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn901)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn921)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn1018)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1035)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1059)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1067)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1071)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1076)(frost$collections$Iterator*);
typedef void (*$fn1103)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1112)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn1120)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1126)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1132)(frost$io$OutputStream*, frost$core$Object*);
typedef void (*$fn1138)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, -7862428579524789976, NULL };
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
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 3662343593517254572, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1029 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };

void org$frostlanguage$frostc$HCodeGenerator$init$frost$io$File(org$frostlanguage$frostc$HCodeGenerator* param0, frost$io$File* param1) {

// line 42
org$frostlanguage$frostc$CCodeGenerator* $tmp2 = (org$frostlanguage$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlanguage$frostc$CCodeGenerator$class);
org$frostlanguage$frostc$CCodeGenerator$init$frost$io$File$org$frostlanguage$frostc$HCodeGenerator($tmp2, param1, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlanguage$frostc$CCodeGenerator** $tmp3 = &param0->cCodeGenRetain;
org$frostlanguage$frostc$CCodeGenerator* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlanguage$frostc$CCodeGenerator** $tmp5 = &param0->cCodeGenRetain;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:org.frostlanguage.frostc.CCodeGenerator)
// line 43
org$frostlanguage$frostc$CCodeGenerator** $tmp6 = &param0->cCodeGenRetain;
org$frostlanguage$frostc$CCodeGenerator* $tmp7 = *$tmp6;
org$frostlanguage$frostc$HCodeGenerator$init$frost$io$File$org$frostlanguage$frostc$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlanguage$frostc$HCodeGenerator$init$frost$io$File$org$frostlanguage$frostc$CCodeGenerator(org$frostlanguage$frostc$HCodeGenerator* param0, frost$io$File* param1, org$frostlanguage$frostc$CCodeGenerator* param2) {

// line 6
frost$core$Weak* $tmp8 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp8, ((frost$core$Object*) ((org$frostlanguage$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Weak** $tmp9 = &param0->compiler;
frost$core$Weak* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($1:frost.core.Weak<org.frostlanguage.frostc.Compiler?>)
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
// unreffing REF($17:frost.io.MemoryOutputStream)
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
// unreffing REF($31:frost.io.MemoryOutputStream)
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
// unreffing REF($45:frost.io.IndentedOutputStream)
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
// unreffing REF($62:frost.io.MemoryOutputStream)
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
// unreffing REF($76:frost.io.MemoryOutputStream)
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
// unreffing REF($90:frost.io.IndentedOutputStream)
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
// unreffing REF($107:frost.collections.HashSet<frost.core.String>)
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
// unreffing REF($122:frost.collections.HashSet<frost.core.String>)
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
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp58 = (org$frostlanguage$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlanguage$frostc$LLVMCodeGenerator$class);
frost$io$MemoryOutputStream* $tmp59 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp59);
org$frostlanguage$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp58, &$s60, ((frost$io$OutputStream*) $tmp59));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
org$frostlanguage$frostc$LLVMCodeGenerator** $tmp61 = &param0->llvmCodeGen;
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp62 = *$tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlanguage$frostc$LLVMCodeGenerator** $tmp63 = &param0->llvmCodeGen;
*$tmp63 = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($160:frost.io.MemoryOutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing REF($159:org.frostlanguage.frostc.LLVMCodeGenerator)
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
// unreffing REF($189:frost.io.MemoryOutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($188:frost.io.IndentedOutputStream)
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
// unreffing REF($209:frost.io.MemoryOutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($208:frost.io.IndentedOutputStream)
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
// unreffing REF($228:frost.core.Weak<org.frostlanguage.frostc.CCodeGenerator>)
return;

}
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* param0, frost$core$String* param1) {

// line 54
org$frostlanguage$frostc$LLVMCodeGenerator** $tmp81 = &param0->llvmCodeGen;
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp82 = *$tmp81;
frost$core$String* $tmp83 = org$frostlanguage$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String($tmp82, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($3:frost.core.String)
return $tmp83;

}
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$getName$org$frostlanguage$frostc$MethodDecl$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 58
org$frostlanguage$frostc$LLVMCodeGenerator** $tmp84 = &param0->llvmCodeGen;
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp85 = *$tmp84;
frost$core$String* $tmp86 = org$frostlanguage$frostc$LLVMCodeGenerator$getName$org$frostlanguage$frostc$MethodDecl$R$frost$core$String($tmp85, param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$String* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing REF($3:frost.core.String)
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
// unreffing REF($28:frost.core.String)
frost$core$String* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing llvmName
*(&local0) = ((frost$core$String*) NULL);
return $tmp98;

}
frost$core$Int64 org$frostlanguage$frostc$HCodeGenerator$sizeOf$org$frostlanguage$frostc$Type$R$frost$core$Int64(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$Type* param1) {

// line 64
org$frostlanguage$frostc$LLVMCodeGenerator** $tmp100 = &param0->llvmCodeGen;
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp101 = *$tmp100;
frost$core$Int64 $tmp102 = org$frostlanguage$frostc$LLVMCodeGenerator$sizeOf$org$frostlanguage$frostc$Type$R$frost$core$Int64($tmp101, param1);
return $tmp102;

}
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$getRelativePath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$ClassDecl* param1, frost$core$String* param2) {

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
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing REF($3:frost.core.String)
return $tmp123;

}
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$Type* param1) {

frost$core$String* local0 = NULL;
org$frostlanguage$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlanguage$frostc$ClassDecl* local3 = NULL;
org$frostlanguage$frostc$ClassDecl* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlanguage$frostc$ClassDecl* local6 = NULL;
frost$core$String* local7 = NULL;
// line 73
org$frostlanguage$frostc$Type$Kind* $tmp124 = &param1->typeKind;
org$frostlanguage$frostc$Type$Kind $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = $tmp125.$rawValue;
frost$core$Int64 $tmp127 = (frost$core$Int64) {4};
frost$core$Bit $tmp128 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block2; else goto block3;
block2:;
// line 75
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s130));
return &$s131;
block3:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {2};
frost$core$Bit $tmp133 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block4; else goto block5;
block4:;
// line 78
frost$core$Int64 $tmp135 = org$frostlanguage$frostc$HCodeGenerator$sizeOf$org$frostlanguage$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp136 = (frost$core$Int64) {8};
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137 * $tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {$tmp139};
frost$core$Int64$wrapper* $tmp141;
$tmp141 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp141->value = $tmp140;
frost$core$String* $tmp142 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s143, ((frost$core$Object*) $tmp141));
frost$core$String* $tmp144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp142, &$s145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($24:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($23:frost.core.Object)
return $tmp144;
block5:;
frost$core$Int64 $tmp146 = (frost$core$Int64) {3};
frost$core$Bit $tmp147 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block6; else goto block7;
block6:;
// line 81
frost$core$Int64 $tmp149 = org$frostlanguage$frostc$HCodeGenerator$sizeOf$org$frostlanguage$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp150 = (frost$core$Int64) {8};
int64_t $tmp151 = $tmp149.value;
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151 * $tmp152;
frost$core$Int64 $tmp154 = (frost$core$Int64) {$tmp153};
frost$core$Int64$wrapper* $tmp155;
$tmp155 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp155->value = $tmp154;
frost$core$String* $tmp156 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s157, ((frost$core$Object*) $tmp155));
frost$core$String* $tmp158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp156, &$s159);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing REF($51:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing REF($49:frost.core.Object)
return $tmp158;
block7:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {9};
frost$core$Bit $tmp161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block8; else goto block9;
block8:;
// line 84
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s163));
return &$s164;
block9:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {10};
frost$core$Bit $tmp166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block10; else goto block11;
block10:;
// line 87
frost$core$Int64 $tmp168 = org$frostlanguage$frostc$HCodeGenerator$sizeOf$org$frostlanguage$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp169 = (frost$core$Int64) {4};
frost$core$Bit $tmp170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp168, $tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block13; else goto block14;
block13:;
// line 88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s172));
return &$s173;
block14:;
frost$core$Int64 $tmp174 = (frost$core$Int64) {8};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp168, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block15; else goto block16;
block15:;
// line 89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s177));
return &$s178;
block16:;
// line 90
frost$core$Bit $tmp179 = frost$core$Bit$init$builtin_bit(false);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp181 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s182, $tmp181);
abort(); // unreachable
block17:;
goto block12;
block12:;
goto block1;
block11:;
frost$core$Int64 $tmp183 = (frost$core$Int64) {0};
frost$core$Bit $tmp184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block19; else goto block20;
block19:;
// line 94
frost$core$String** $tmp186 = &((org$frostlanguage$frostc$Symbol*) param1)->name;
frost$core$String* $tmp187 = *$tmp186;
frost$core$String* $tmp188 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp187);
frost$core$String* $tmp189 = frost$core$String$convert$R$frost$core$String($tmp188);
frost$core$String* $tmp190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp189, &$s191);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$String* $tmp192 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local0) = $tmp190;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($113:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing REF($112:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing REF($111:frost.core.String)
// line 95
frost$core$Weak** $tmp193 = &param0->compiler;
frost$core$Weak* $tmp194 = *$tmp193;
frost$core$Object* $tmp195 = frost$core$Weak$get$R$frost$core$Weak$T($tmp194);
org$frostlanguage$frostc$ClassDecl* $tmp196 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(((org$frostlanguage$frostc$Compiler*) $tmp195), param1);
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
org$frostlanguage$frostc$ClassDecl* $tmp197 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local1) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($137:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp195);
// unreffing REF($134:frost.core.Weak.T)
// line 96
org$frostlanguage$frostc$ClassDecl* $tmp198 = *(&local1);
frost$core$Bit $tmp199 = frost$core$Bit$init$builtin_bit($tmp198 != NULL);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s202, $tmp201);
abort(); // unreachable
block21:;
// line 97
frost$core$Weak** $tmp203 = &param0->compiler;
frost$core$Weak* $tmp204 = *$tmp203;
frost$core$Object* $tmp205 = frost$core$Weak$get$R$frost$core$Weak$T($tmp204);
org$frostlanguage$frostc$ClassDecl* $tmp206 = *(&local1);
frost$core$Bit $tmp207 = org$frostlanguage$frostc$Compiler$isValue$org$frostlanguage$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlanguage$frostc$Compiler*) $tmp205), $tmp206);
frost$core$Bit $tmp208 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp207);
bool $tmp209 = $tmp208.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
// unreffing REF($164:frost.core.Weak.T)
if ($tmp209) goto block23; else goto block24;
block23:;
// line 98
frost$collections$HashSet** $tmp210 = &param0->imports;
frost$collections$HashSet* $tmp211 = *$tmp210;
frost$core$String* $tmp212 = *(&local0);
frost$core$Bit $tmp213 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp211, ((frost$collections$Key*) $tmp212));
frost$core$Bit $tmp214 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp213);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block25; else goto block26;
block25:;
// line 99
frost$io$MemoryOutputStream** $tmp216 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp217 = *$tmp216;
frost$core$String* $tmp218 = *(&local0);
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s220, $tmp218);
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp219, &$s222);
frost$core$String* $tmp223 = *(&local0);
frost$core$String* $tmp224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp221, $tmp223);
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp224, &$s226);
$fn228 $tmp227 = ($fn228) ((frost$io$OutputStream*) $tmp217)->$class->vtable[19];
$tmp227(((frost$io$OutputStream*) $tmp217), $tmp225);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($194:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($193:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($191:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($190:frost.core.String)
// line 100
frost$collections$HashSet** $tmp229 = &param0->imports;
frost$collections$HashSet* $tmp230 = *$tmp229;
frost$core$String* $tmp231 = *(&local0);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp230, ((frost$collections$Key*) $tmp231));
goto block26;
block26:;
// line 102
frost$core$String* $tmp232 = *(&local0);
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s234);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing REF($219:frost.core.String)
org$frostlanguage$frostc$ClassDecl* $tmp235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$String* $tmp236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp233;
block24:;
// line 104
org$frostlanguage$frostc$ClassDecl* $tmp237 = *(&local1);
frost$core$String* $tmp238 = org$frostlanguage$frostc$HCodeGenerator$getRelativePath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp237, &$s239);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$String* $tmp240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local2) = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing REF($239:frost.core.String)
// line 105
frost$collections$HashSet** $tmp241 = &param0->imports;
frost$collections$HashSet* $tmp242 = *$tmp241;
frost$core$String* $tmp243 = *(&local2);
frost$core$Bit $tmp244 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp242, ((frost$collections$Key*) $tmp243));
frost$core$Bit $tmp245 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block27; else goto block28;
block27:;
// line 106
frost$io$MemoryOutputStream** $tmp247 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp248 = *$tmp247;
frost$core$String* $tmp249 = *(&local2);
frost$core$String* $tmp250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s251, $tmp249);
frost$core$String* $tmp252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp250, &$s253);
$fn255 $tmp254 = ($fn255) ((frost$io$OutputStream*) $tmp248)->$class->vtable[19];
$tmp254(((frost$io$OutputStream*) $tmp248), $tmp252);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($266:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($265:frost.core.String)
// line 107
frost$collections$HashSet** $tmp256 = &param0->imports;
frost$collections$HashSet* $tmp257 = *$tmp256;
frost$core$String* $tmp258 = *(&local2);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp257, ((frost$collections$Key*) $tmp258));
goto block28;
block28:;
// line 109
frost$core$String* $tmp259 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$String* $tmp260 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing includePath
*(&local2) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$String* $tmp262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp259;
block20:;
frost$core$Int64 $tmp263 = (frost$core$Int64) {1};
frost$core$Bit $tmp264 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp263);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block29; else goto block30;
block29:;
// line 112
frost$core$Weak** $tmp266 = &param0->compiler;
frost$core$Weak* $tmp267 = *$tmp266;
frost$core$Object* $tmp268 = frost$core$Weak$get$R$frost$core$Weak$T($tmp267);
org$frostlanguage$frostc$ClassDecl* $tmp269 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(((org$frostlanguage$frostc$Compiler*) $tmp268), param1);
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
org$frostlanguage$frostc$ClassDecl* $tmp270 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local3) = $tmp269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($314:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp268);
// unreffing REF($311:frost.core.Weak.T)
// line 113
org$frostlanguage$frostc$ClassDecl* $tmp271 = *(&local3);
frost$core$Bit $tmp272 = frost$core$Bit$init$builtin_bit($tmp271 != NULL);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp274 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s275, $tmp274);
abort(); // unreachable
block31:;
// line 114
frost$core$Weak** $tmp276 = &param0->compiler;
frost$core$Weak* $tmp277 = *$tmp276;
frost$core$Object* $tmp278 = frost$core$Weak$get$R$frost$core$Weak$T($tmp277);
org$frostlanguage$frostc$ClassDecl* $tmp279 = *(&local3);
frost$core$Bit $tmp280 = org$frostlanguage$frostc$Compiler$isValue$org$frostlanguage$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlanguage$frostc$Compiler*) $tmp278), $tmp279);
bool $tmp281 = $tmp280.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp278);
// unreffing REF($341:frost.core.Weak.T)
if ($tmp281) goto block33; else goto block34;
block33:;
// line 115
org$frostlanguage$frostc$FixedArray** $tmp282 = &param1->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp283 = *$tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {0};
frost$core$Object* $tmp285 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp283, $tmp284);
frost$core$String* $tmp286 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, ((org$frostlanguage$frostc$Type*) $tmp285));
frost$core$String* $tmp287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp286, &$s288);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing REF($360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing REF($359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp285);
// unreffing REF($357:org.frostlanguage.frostc.FixedArray.T)
org$frostlanguage$frostc$ClassDecl* $tmp289 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing cl
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp287;
block34:;
// line 117
org$frostlanguage$frostc$FixedArray** $tmp290 = &param1->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp291 = *$tmp290;
frost$core$Int64 $tmp292 = (frost$core$Int64) {0};
frost$core$Object* $tmp293 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp291, $tmp292);
frost$core$String* $tmp294 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, ((org$frostlanguage$frostc$Type*) $tmp293));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// unreffing REF($386:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp293);
// unreffing REF($384:org.frostlanguage.frostc.FixedArray.T)
org$frostlanguage$frostc$ClassDecl* $tmp295 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing cl
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp294;
block30:;
frost$core$Int64 $tmp296 = (frost$core$Int64) {11};
frost$core$Bit $tmp297 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp296);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block35; else goto block36;
block35:;
// line 120
org$frostlanguage$frostc$FixedArray** $tmp299 = &param1->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {0};
frost$core$Object* $tmp302 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp300, $tmp301);
frost$core$String** $tmp303 = &((org$frostlanguage$frostc$Symbol*) ((org$frostlanguage$frostc$Type*) $tmp302))->name;
frost$core$String* $tmp304 = *$tmp303;
frost$core$Bit $tmp305 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp304, &$s306);
bool $tmp307 = $tmp305.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp302);
// unreffing REF($411:org.frostlanguage.frostc.FixedArray.T)
if ($tmp307) goto block37; else goto block38;
block37:;
// line 121
org$frostlanguage$frostc$FixedArray** $tmp308 = &param1->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp309 = *$tmp308;
frost$core$Int64 $tmp310 = (frost$core$Int64) {1};
frost$core$Object* $tmp311 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp309, $tmp310);
frost$core$String* $tmp312 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, ((org$frostlanguage$frostc$Type*) $tmp311));
frost$core$String* $tmp313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp312, &$s314);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($431:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($430:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp311);
// unreffing REF($428:org.frostlanguage.frostc.FixedArray.T)
return $tmp313;
block38:;
// line 123
frost$core$Weak** $tmp315 = &param0->compiler;
frost$core$Weak* $tmp316 = *$tmp315;
frost$core$Object* $tmp317 = frost$core$Weak$get$R$frost$core$Weak$T($tmp316);
org$frostlanguage$frostc$ClassDecl* $tmp318 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(((org$frostlanguage$frostc$Compiler*) $tmp317), param1);
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
org$frostlanguage$frostc$ClassDecl* $tmp319 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local4) = $tmp318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($451:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp317);
// unreffing REF($448:frost.core.Weak.T)
// line 124
org$frostlanguage$frostc$ClassDecl* $tmp320 = *(&local4);
frost$core$Bit $tmp321 = org$frostlanguage$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block39; else goto block40;
block39:;
// line 125
frost$core$String** $tmp323 = &((org$frostlanguage$frostc$Symbol*) param1)->name;
frost$core$String* $tmp324 = *$tmp323;
frost$core$String* $tmp325 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp324);
frost$core$String* $tmp326 = frost$core$String$convert$R$frost$core$String($tmp325);
frost$core$String* $tmp327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp326, &$s328);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$String* $tmp329 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local5) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing REF($477:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// unreffing REF($476:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// unreffing REF($475:frost.core.String)
// line 126
frost$core$Weak** $tmp330 = &param0->compiler;
frost$core$Weak* $tmp331 = *$tmp330;
frost$core$Object* $tmp332 = frost$core$Weak$get$R$frost$core$Weak$T($tmp331);
org$frostlanguage$frostc$ClassDecl* $tmp333 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(((org$frostlanguage$frostc$Compiler*) $tmp332), param1);
*(&local6) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
org$frostlanguage$frostc$ClassDecl* $tmp334 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local6) = $tmp333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing REF($501:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp332);
// unreffing REF($498:frost.core.Weak.T)
// line 127
org$frostlanguage$frostc$ClassDecl* $tmp335 = *(&local6);
frost$core$Bit $tmp336 = frost$core$Bit$init$builtin_bit($tmp335 != NULL);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp338 = (frost$core$Int64) {127};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s339, $tmp338);
abort(); // unreachable
block41:;
// line 128
frost$core$Weak** $tmp340 = &param0->compiler;
frost$core$Weak* $tmp341 = *$tmp340;
frost$core$Object* $tmp342 = frost$core$Weak$get$R$frost$core$Weak$T($tmp341);
org$frostlanguage$frostc$ClassDecl* $tmp343 = *(&local6);
frost$core$Bit $tmp344 = org$frostlanguage$frostc$Compiler$isValue$org$frostlanguage$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlanguage$frostc$Compiler*) $tmp342), $tmp343);
frost$core$Bit $tmp345 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp344);
bool $tmp346 = $tmp345.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp342);
// unreffing REF($528:frost.core.Weak.T)
if ($tmp346) goto block43; else goto block44;
block43:;
// line 129
frost$collections$HashSet** $tmp347 = &param0->imports;
frost$collections$HashSet* $tmp348 = *$tmp347;
frost$core$String* $tmp349 = *(&local5);
frost$core$Bit $tmp350 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp348, ((frost$collections$Key*) $tmp349));
frost$core$Bit $tmp351 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block45; else goto block46;
block45:;
// line 130
frost$io$MemoryOutputStream** $tmp353 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp354 = *$tmp353;
frost$core$String* $tmp355 = *(&local5);
frost$core$String* $tmp356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s357, $tmp355);
frost$core$String* $tmp358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp356, &$s359);
frost$core$String* $tmp360 = *(&local5);
frost$core$String* $tmp361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp358, $tmp360);
frost$core$String* $tmp362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp361, &$s363);
$fn365 $tmp364 = ($fn365) ((frost$io$OutputStream*) $tmp354)->$class->vtable[19];
$tmp364(((frost$io$OutputStream*) $tmp354), $tmp362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing REF($558:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing REF($557:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing REF($555:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($554:frost.core.String)
// line 131
frost$collections$HashSet** $tmp366 = &param0->imports;
frost$collections$HashSet* $tmp367 = *$tmp366;
frost$core$String* $tmp368 = *(&local5);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp367, ((frost$collections$Key*) $tmp368));
goto block46;
block46:;
// line 133
frost$core$String* $tmp369 = *(&local5);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp369, &$s371);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing REF($583:frost.core.String)
org$frostlanguage$frostc$ClassDecl* $tmp372 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// unreffing cl
*(&local6) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$String* $tmp373 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp374 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing cl
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp370;
block44:;
// line 135
org$frostlanguage$frostc$ClassDecl* $tmp375 = *(&local6);
frost$core$String* $tmp376 = org$frostlanguage$frostc$HCodeGenerator$getRelativePath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, $tmp375, &$s377);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$String* $tmp378 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local7) = $tmp376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing REF($608:frost.core.String)
// line 136
frost$collections$HashSet** $tmp379 = &param0->imports;
frost$collections$HashSet* $tmp380 = *$tmp379;
frost$core$String* $tmp381 = *(&local7);
frost$core$Bit $tmp382 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp380, ((frost$collections$Key*) $tmp381));
frost$core$Bit $tmp383 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp382);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block47; else goto block48;
block47:;
// line 137
frost$io$MemoryOutputStream** $tmp385 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp386 = *$tmp385;
frost$core$String* $tmp387 = *(&local7);
frost$core$String* $tmp388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s389, $tmp387);
frost$core$String* $tmp390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp388, &$s391);
$fn393 $tmp392 = ($fn393) ((frost$io$OutputStream*) $tmp386)->$class->vtable[19];
$tmp392(((frost$io$OutputStream*) $tmp386), $tmp390);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($635:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// unreffing REF($634:frost.core.String)
// line 138
frost$collections$HashSet** $tmp394 = &param0->imports;
frost$collections$HashSet* $tmp395 = *$tmp394;
frost$core$String* $tmp396 = *(&local7);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp395, ((frost$collections$Key*) $tmp396));
goto block48;
block48:;
// line 140
frost$core$String* $tmp397 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$String* $tmp398 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// unreffing includePath
*(&local7) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp399 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing cl
*(&local6) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$String* $tmp400 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp401 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing cl
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp397;
block40:;
// line 142
org$frostlanguage$frostc$FixedArray** $tmp402 = &param1->subtypes;
org$frostlanguage$frostc$FixedArray* $tmp403 = *$tmp402;
frost$core$Int64 $tmp404 = (frost$core$Int64) {0};
frost$core$Object* $tmp405 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp403, $tmp404);
frost$core$String* $tmp406 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, ((org$frostlanguage$frostc$Type*) $tmp405));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($685:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp405);
// unreffing REF($683:org.frostlanguage.frostc.FixedArray.T)
org$frostlanguage$frostc$ClassDecl* $tmp407 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing cl
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp406;
block36:;
frost$core$Int64 $tmp408 = (frost$core$Int64) {12};
frost$core$Bit $tmp409 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp408);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block49; else goto block50;
block49:;
// line 145
frost$core$Weak** $tmp411 = &param1->genericClassParameter;
frost$core$Weak* $tmp412 = *$tmp411;
frost$core$Object* $tmp413 = frost$core$Weak$get$R$frost$core$Weak$T($tmp412);
org$frostlanguage$frostc$Type** $tmp414 = &((org$frostlanguage$frostc$ClassDecl$GenericParameter*) $tmp413)->bound;
org$frostlanguage$frostc$Type* $tmp415 = *$tmp414;
frost$core$String* $tmp416 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// unreffing REF($713:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp413);
// unreffing REF($708:frost.core.Weak.T)
return $tmp416;
block50:;
frost$core$Int64 $tmp417 = (frost$core$Int64) {13};
frost$core$Bit $tmp418 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp417);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block51; else goto block52;
block51:;
// line 148
frost$core$Weak** $tmp420 = &param1->genericMethodParameter;
frost$core$Weak* $tmp421 = *$tmp420;
frost$core$Object* $tmp422 = frost$core$Weak$get$R$frost$core$Weak$T($tmp421);
org$frostlanguage$frostc$Type** $tmp423 = &((org$frostlanguage$frostc$MethodDecl$GenericParameter*) $tmp422)->bound;
org$frostlanguage$frostc$Type* $tmp424 = *$tmp423;
frost$core$String* $tmp425 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// unreffing REF($736:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp422);
// unreffing REF($731:frost.core.Weak.T)
return $tmp425;
block52:;
frost$core$Int64 $tmp426 = (frost$core$Int64) {15};
frost$core$Bit $tmp427 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp426);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp429 = (frost$core$Int64) {16};
frost$core$Bit $tmp430 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block53; else goto block55;
block53:;
// line 151
org$frostlanguage$frostc$Type* $tmp432 = org$frostlanguage$frostc$Type$MutableMethod$R$org$frostlanguage$frostc$Type();
frost$core$String* $tmp433 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// unreffing REF($756:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing REF($755:org.frostlanguage.frostc.Type)
return $tmp433;
block55:;
frost$core$Int64 $tmp434 = (frost$core$Int64) {17};
frost$core$Bit $tmp435 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp437 = (frost$core$Int64) {18};
frost$core$Bit $tmp438 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp126, $tmp437);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block56; else goto block58;
block56:;
// line 154
org$frostlanguage$frostc$Type* $tmp440 = org$frostlanguage$frostc$Type$Method$R$org$frostlanguage$frostc$Type();
frost$core$String* $tmp441 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing REF($776:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// unreffing REF($775:org.frostlanguage.frostc.Type)
return $tmp441;
block58:;
// line 157
frost$core$Bit $tmp442 = frost$core$Bit$init$builtin_bit(false);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp444 = (frost$core$Int64) {157};
frost$core$String* $tmp445 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s446, ((frost$core$Object*) param1));
frost$core$String* $tmp447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp445, &$s448);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s449, $tmp444, $tmp447);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing REF($793:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
// unreffing REF($792:frost.core.String)
abort(); // unreachable
block59:;
goto block1;
block1:;
frost$core$Bit $tmp450 = frost$core$Bit$init$builtin_bit(false);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp452 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s453, $tmp452, &$s454);
abort(); // unreachable
block61:;
abort(); // unreachable

}
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$declaration$org$frostlanguage$frostc$Type$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$Type* param1, frost$core$String* param2) {

// line 163
frost$core$String* $tmp455 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp456 = frost$core$String$convert$R$frost$core$String($tmp455);
frost$core$String* $tmp457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp456, &$s458);
frost$core$String* $tmp459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp457, param2);
frost$core$String* $tmp460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp459, &$s461);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// unreffing REF($1:frost.core.String)
return $tmp460;

}
void org$frostlanguage$frostc$HCodeGenerator$setCompiler$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$Compiler* param1) {

// line 168
frost$core$Weak* $tmp462 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp462, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Weak** $tmp463 = &param0->compiler;
frost$core$Weak* $tmp464 = *$tmp463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Weak** $tmp465 = &param0->compiler;
*$tmp465 = $tmp462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing REF($2:frost.core.Weak<org.frostlanguage.frostc.Compiler?>)
// line 169
org$frostlanguage$frostc$LLVMCodeGenerator** $tmp466 = &param0->llvmCodeGen;
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp467 = *$tmp466;
org$frostlanguage$frostc$LLVMCodeGenerator$setCompiler$org$frostlanguage$frostc$Compiler($tmp467, param1);
return;

}
frost$io$File* org$frostlanguage$frostc$HCodeGenerator$getPath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$io$File(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$ClassDecl* param1, frost$core$String* param2) {

// line 173
frost$io$File** $tmp468 = &param0->outDir;
frost$io$File* $tmp469 = *$tmp468;
frost$core$String* $tmp470 = org$frostlanguage$frostc$HCodeGenerator$getRelativePath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$core$String(param0, param1, param2);
frost$io$File* $tmp471 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp469, $tmp470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// unreffing REF($4:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// unreffing REF($3:frost.core.String)
return $tmp471;

}
void org$frostlanguage$frostc$HCodeGenerator$start$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$ClassDecl* param1) {

frost$io$File* local0 = NULL;
frost$io$File* local1 = NULL;
org$frostlanguage$frostc$FieldDecl* local2 = NULL;
org$frostlanguage$frostc$ClassDecl* local3 = NULL;
frost$collections$ListView* local4 = NULL;
// line 178
frost$io$MemoryOutputStream** $tmp472 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp473 = *$tmp472;
frost$io$MemoryOutputStream$clear($tmp473);
// line 179
frost$io$MemoryOutputStream** $tmp474 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp475 = *$tmp474;
frost$io$MemoryOutputStream$clear($tmp475);
// line 180
frost$io$MemoryOutputStream** $tmp476 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp477 = *$tmp476;
frost$io$MemoryOutputStream$clear($tmp477);
// line 181
frost$io$MemoryOutputStream** $tmp478 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp479 = *$tmp478;
frost$io$MemoryOutputStream$clear($tmp479);
// line 182
frost$collections$HashSet** $tmp480 = &param0->typeImports;
frost$collections$HashSet* $tmp481 = *$tmp480;
frost$collections$HashSet$clear($tmp481);
// line 183
frost$collections$HashSet** $tmp482 = &param0->bodyImports;
frost$collections$HashSet* $tmp483 = *$tmp482;
frost$collections$HashSet$clear($tmp483);
// line 184
frost$io$File* $tmp484 = org$frostlanguage$frostc$HCodeGenerator$getPath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s485);
*(&local0) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$io$File* $tmp486 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local0) = $tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing REF($27:frost.io.File)
// line 185
frost$io$File* $tmp487 = *(&local0);
frost$io$File* $tmp488 = frost$io$File$get_parent$R$frost$io$File$Q($tmp487);
frost$io$File$createDirectories($tmp488);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing REF($40:frost.io.File?)
// line 186
frost$io$IndentedOutputStream* $tmp489 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp490 = *(&local0);
frost$io$OutputStream* $tmp491 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp490);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp489, $tmp491);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$io$IndentedOutputStream** $tmp492 = &param0->out;
frost$io$IndentedOutputStream* $tmp493 = *$tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$io$IndentedOutputStream** $tmp494 = &param0->out;
*$tmp494 = $tmp489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
// unreffing REF($49:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// unreffing REF($47:frost.io.IndentedOutputStream)
// line 187
frost$io$File* $tmp495 = org$frostlanguage$frostc$HCodeGenerator$getPath$org$frostlanguage$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s496);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$io$File* $tmp497 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local1) = $tmp495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// unreffing REF($66:frost.io.File)
// line 188
frost$io$IndentedOutputStream* $tmp498 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp499 = *(&local1);
frost$io$OutputStream* $tmp500 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp499);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp498, $tmp500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$io$IndentedOutputStream** $tmp501 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp502 = *$tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$io$IndentedOutputStream** $tmp503 = &param0->typesOut;
*$tmp503 = $tmp498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// unreffing REF($80:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($78:frost.io.IndentedOutputStream)
// line 189
frost$io$IndentedOutputStream** $tmp504 = &param0->out;
frost$io$IndentedOutputStream* $tmp505 = *$tmp504;
$fn507 $tmp506 = ($fn507) ((frost$io$OutputStream*) $tmp505)->$class->vtable[19];
$tmp506(((frost$io$OutputStream*) $tmp505), &$s508);
// line 190
frost$io$IndentedOutputStream** $tmp509 = &param0->out;
frost$io$IndentedOutputStream* $tmp510 = *$tmp509;
$fn512 $tmp511 = ($fn512) ((frost$io$OutputStream*) $tmp510)->$class->vtable[19];
$tmp511(((frost$io$OutputStream*) $tmp510), &$s513);
// line 191
frost$io$IndentedOutputStream** $tmp514 = &param0->out;
frost$io$IndentedOutputStream* $tmp515 = *$tmp514;
frost$io$File* $tmp516 = *(&local1);
frost$core$String* $tmp517 = frost$io$File$get_name$R$frost$core$String($tmp516);
frost$core$String* $tmp518 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s519, $tmp517);
frost$core$String* $tmp520 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp518, &$s521);
$fn523 $tmp522 = ($fn523) ((frost$io$OutputStream*) $tmp515)->$class->vtable[19];
$tmp522(((frost$io$OutputStream*) $tmp515), $tmp520);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// unreffing REF($115:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing REF($114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing REF($113:frost.core.String)
// line 192
frost$io$IndentedOutputStream** $tmp524 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp525 = *$tmp524;
$fn527 $tmp526 = ($fn527) ((frost$io$OutputStream*) $tmp525)->$class->vtable[19];
$tmp526(((frost$io$OutputStream*) $tmp525), &$s528);
// line 193
frost$io$IndentedOutputStream** $tmp529 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp530 = *$tmp529;
$fn532 $tmp531 = ($fn532) ((frost$io$OutputStream*) $tmp530)->$class->vtable[19];
$tmp531(((frost$io$OutputStream*) $tmp530), &$s533);
// line 194
frost$io$MemoryOutputStream** $tmp534 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp535 = *$tmp534;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$io$MemoryOutputStream** $tmp536 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp537 = *$tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$io$MemoryOutputStream** $tmp538 = &param0->importStream;
*$tmp538 = $tmp535;
// line 195
frost$collections$HashSet** $tmp539 = &param0->typeImports;
frost$collections$HashSet* $tmp540 = *$tmp539;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
frost$collections$HashSet** $tmp541 = &param0->imports;
frost$collections$HashSet* $tmp542 = *$tmp541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$collections$HashSet** $tmp543 = &param0->imports;
*$tmp543 = $tmp540;
// line 196
frost$io$IndentedOutputStream** $tmp544 = &param0->types;
frost$io$IndentedOutputStream* $tmp545 = *$tmp544;
frost$core$String** $tmp546 = &param1->name;
frost$core$String* $tmp547 = *$tmp546;
frost$core$String* $tmp548 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp547);
frost$core$String* $tmp549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s550, $tmp548);
frost$core$String* $tmp551 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp549, &$s552);
$fn554 $tmp553 = ($fn554) ((frost$io$OutputStream*) $tmp545)->$class->vtable[19];
$tmp553(((frost$io$OutputStream*) $tmp545), $tmp551);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// unreffing REF($169:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing REF($168:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing REF($167:frost.core.String)
// line 197
frost$io$IndentedOutputStream** $tmp555 = &param0->types;
frost$io$IndentedOutputStream* $tmp556 = *$tmp555;
frost$core$Int64* $tmp557 = &$tmp556->level;
frost$core$Int64 $tmp558 = *$tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {1};
int64_t $tmp560 = $tmp558.value;
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560 + $tmp561;
frost$core$Int64 $tmp563 = (frost$core$Int64) {$tmp562};
frost$core$Int64* $tmp564 = &$tmp556->level;
*$tmp564 = $tmp563;
// line 198
frost$core$Weak** $tmp565 = &param0->compiler;
frost$core$Weak* $tmp566 = *$tmp565;
frost$core$Object* $tmp567 = frost$core$Weak$get$R$frost$core$Weak$T($tmp566);
frost$collections$ListView* $tmp568 = org$frostlanguage$frostc$Compiler$instanceFields$org$frostlanguage$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlanguage$frostc$FieldDecl$GT(((org$frostlanguage$frostc$Compiler*) $tmp567), param1);
ITable* $tmp569 = ((frost$collections$Iterable*) $tmp568)->$class->itable;
while ($tmp569->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp569 = $tmp569->next;
}
$fn571 $tmp570 = $tmp569->methods[0];
frost$collections$Iterator* $tmp572 = $tmp570(((frost$collections$Iterable*) $tmp568));
goto block1;
block1:;
ITable* $tmp573 = $tmp572->$class->itable;
while ($tmp573->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp573 = $tmp573->next;
}
$fn575 $tmp574 = $tmp573->methods[0];
frost$core$Bit $tmp576 = $tmp574($tmp572);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
ITable* $tmp578 = $tmp572->$class->itable;
while ($tmp578->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[1];
frost$core$Object* $tmp581 = $tmp579($tmp572);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FieldDecl*) $tmp581)));
org$frostlanguage$frostc$FieldDecl* $tmp582 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local2) = ((org$frostlanguage$frostc$FieldDecl*) $tmp581);
// line 199
frost$core$Weak** $tmp583 = &param0->compiler;
frost$core$Weak* $tmp584 = *$tmp583;
frost$core$Object* $tmp585 = frost$core$Weak$get$R$frost$core$Weak$T($tmp584);
org$frostlanguage$frostc$FieldDecl* $tmp586 = *(&local2);
frost$core$Bit $tmp587 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$FieldDecl$R$frost$core$Bit(((org$frostlanguage$frostc$Compiler*) $tmp585), $tmp586);
frost$core$Frost$unref$frost$core$Object$Q($tmp585);
// unreffing REF($227:frost.core.Weak.T)
// line 200
org$frostlanguage$frostc$FieldDecl* $tmp588 = *(&local2);
org$frostlanguage$frostc$Type** $tmp589 = &$tmp588->type;
org$frostlanguage$frostc$Type* $tmp590 = *$tmp589;
org$frostlanguage$frostc$Type* $tmp591 = org$frostlanguage$frostc$Type$ChoiceData$R$org$frostlanguage$frostc$Type();
frost$core$Bit $tmp592 = org$frostlanguage$frostc$Type$$EQ$org$frostlanguage$frostc$Type$R$frost$core$Bit($tmp590, $tmp591);
bool $tmp593 = $tmp592.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// unreffing REF($239:org.frostlanguage.frostc.Type)
if ($tmp593) goto block4; else goto block6;
block4:;
// line 201
frost$io$IndentedOutputStream** $tmp594 = &param0->types;
frost$io$IndentedOutputStream* $tmp595 = *$tmp594;
org$frostlanguage$frostc$FieldDecl* $tmp596 = *(&local2);
frost$core$String** $tmp597 = &((org$frostlanguage$frostc$Symbol*) $tmp596)->name;
frost$core$String* $tmp598 = *$tmp597;
frost$core$String* $tmp599 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s600, $tmp598);
frost$core$String* $tmp601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp599, &$s602);
org$frostlanguage$frostc$LLVMCodeGenerator** $tmp603 = &param0->llvmCodeGen;
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp604 = *$tmp603;
frost$core$Int64 $tmp605 = org$frostlanguage$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlanguage$frostc$ClassDecl$R$frost$core$Int64($tmp604, param1);
frost$core$Int64$wrapper* $tmp606;
$tmp606 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp606->value = $tmp605;
frost$core$String* $tmp607 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp601, ((frost$core$Object*) $tmp606));
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp607, &$s609);
$fn611 $tmp610 = ($fn611) ((frost$io$OutputStream*) $tmp595)->$class->vtable[19];
$tmp610(((frost$io$OutputStream*) $tmp595), $tmp608);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($261:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing REF($260:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($259:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
// unreffing REF($255:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// unreffing REF($254:frost.core.String)
goto block5;
block6:;
// line 1
// line 204
frost$io$IndentedOutputStream** $tmp612 = &param0->types;
frost$io$IndentedOutputStream* $tmp613 = *$tmp612;
org$frostlanguage$frostc$FieldDecl* $tmp614 = *(&local2);
org$frostlanguage$frostc$Type** $tmp615 = &$tmp614->type;
org$frostlanguage$frostc$Type* $tmp616 = *$tmp615;
frost$core$String* $tmp617 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp616);
frost$core$String* $tmp618 = frost$core$String$convert$R$frost$core$String($tmp617);
frost$core$String* $tmp619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp618, &$s620);
org$frostlanguage$frostc$FieldDecl* $tmp621 = *(&local2);
frost$core$String** $tmp622 = &((org$frostlanguage$frostc$Symbol*) $tmp621)->name;
frost$core$String* $tmp623 = *$tmp622;
frost$core$String* $tmp624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp619, $tmp623);
frost$core$String* $tmp625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp624, &$s626);
$fn628 $tmp627 = ($fn628) ((frost$io$OutputStream*) $tmp613)->$class->vtable[19];
$tmp627(((frost$io$OutputStream*) $tmp613), $tmp625);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing REF($296:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing REF($295:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing REF($290:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing REF($289:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing REF($288:frost.core.String)
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp581);
// unreffing REF($215:frost.collections.Iterator.T)
org$frostlanguage$frostc$FieldDecl* $tmp629 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing f
*(&local2) = ((org$frostlanguage$frostc$FieldDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// unreffing REF($204:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing REF($200:frost.collections.ListView<org.frostlanguage.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp567);
// unreffing REF($197:frost.core.Weak.T)
// line 207
frost$core$String** $tmp630 = &param1->name;
frost$core$String* $tmp631 = *$tmp630;
frost$core$Bit $tmp632 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp631, &$s633);
bool $tmp634 = $tmp632.value;
if ($tmp634) goto block7; else goto block8;
block7:;
// line 208
frost$io$IndentedOutputStream** $tmp635 = &param0->types;
frost$io$IndentedOutputStream* $tmp636 = *$tmp635;
$fn638 $tmp637 = ($fn638) ((frost$io$OutputStream*) $tmp636)->$class->vtable[19];
$tmp637(((frost$io$OutputStream*) $tmp636), &$s639);
// line 209
frost$io$IndentedOutputStream** $tmp640 = &param0->types;
frost$io$IndentedOutputStream* $tmp641 = *$tmp640;
$fn643 $tmp642 = ($fn643) ((frost$io$OutputStream*) $tmp641)->$class->vtable[19];
$tmp642(((frost$io$OutputStream*) $tmp641), &$s644);
goto block8;
block8:;
// line 211
frost$io$IndentedOutputStream** $tmp645 = &param0->types;
frost$io$IndentedOutputStream* $tmp646 = *$tmp645;
frost$core$Int64* $tmp647 = &$tmp646->level;
frost$core$Int64 $tmp648 = *$tmp647;
frost$core$Int64 $tmp649 = (frost$core$Int64) {1};
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650 - $tmp651;
frost$core$Int64 $tmp653 = (frost$core$Int64) {$tmp652};
frost$core$Int64* $tmp654 = &$tmp646->level;
*$tmp654 = $tmp653;
// line 212
frost$io$IndentedOutputStream** $tmp655 = &param0->types;
frost$io$IndentedOutputStream* $tmp656 = *$tmp655;
frost$core$String** $tmp657 = &param1->name;
frost$core$String* $tmp658 = *$tmp657;
frost$core$String* $tmp659 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp658);
frost$core$String* $tmp660 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s661, $tmp659);
frost$core$String* $tmp662 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp660, &$s663);
$fn665 $tmp664 = ($fn665) ((frost$io$OutputStream*) $tmp656)->$class->vtable[19];
$tmp664(((frost$io$OutputStream*) $tmp656), $tmp662);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($372:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// unreffing REF($371:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing REF($370:frost.core.String)
// line 213
frost$io$IndentedOutputStream** $tmp666 = &param0->types;
frost$io$IndentedOutputStream* $tmp667 = *$tmp666;
$fn669 $tmp668 = ($fn669) ((frost$io$OutputStream*) $tmp667)->$class->vtable[19];
$tmp668(((frost$io$OutputStream*) $tmp667), &$s670);
// line 214
frost$io$IndentedOutputStream** $tmp671 = &param0->types;
frost$io$IndentedOutputStream* $tmp672 = *$tmp671;
org$frostlanguage$frostc$Type* $tmp673 = org$frostlanguage$frostc$Type$StringType$R$org$frostlanguage$frostc$Type();
frost$core$String* $tmp674 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp673);
frost$core$String* $tmp675 = frost$core$String$convert$R$frost$core$String($tmp674);
frost$core$String* $tmp676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp675, &$s677);
org$frostlanguage$frostc$Type* $tmp678 = org$frostlanguage$frostc$Type$Class$R$org$frostlanguage$frostc$Type();
frost$core$String* $tmp679 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp678);
frost$core$String* $tmp680 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp676, $tmp679);
frost$core$String* $tmp681 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp680, &$s682);
frost$core$String* $tmp683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s684, $tmp681);
frost$core$Weak** $tmp685 = &param0->compiler;
frost$core$Weak* $tmp686 = *$tmp685;
frost$core$Object* $tmp687 = frost$core$Weak$get$R$frost$core$Weak$T($tmp686);
frost$collections$ListView* $tmp688 = org$frostlanguage$frostc$Compiler$getVTable$org$frostlanguage$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT(((org$frostlanguage$frostc$Compiler*) $tmp687), param1);
ITable* $tmp689 = ((frost$collections$CollectionView*) $tmp688)->$class->itable;
while ($tmp689->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp689 = $tmp689->next;
}
$fn691 $tmp690 = $tmp689->methods[0];
frost$core$Int64 $tmp692 = $tmp690(((frost$collections$CollectionView*) $tmp688));
frost$core$Int64$wrapper* $tmp693;
$tmp693 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp693->value = $tmp692;
frost$core$String* $tmp694 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s695, ((frost$core$Object*) $tmp693));
frost$core$String* $tmp696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp694, &$s697);
frost$core$String* $tmp698 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp683, $tmp696);
frost$core$String** $tmp699 = &param1->name;
frost$core$String* $tmp700 = *$tmp699;
frost$core$String* $tmp701 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp700);
frost$core$String* $tmp702 = frost$core$String$convert$R$frost$core$String($tmp701);
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp702, &$s704);
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp698, $tmp703);
$fn707 $tmp706 = ($fn707) ((frost$io$OutputStream*) $tmp672)->$class->vtable[19];
$tmp706(((frost$io$OutputStream*) $tmp672), $tmp705);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing REF($422:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing REF($421:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($420:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($419:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// unreffing REF($416:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($415:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// unreffing REF($414:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
// unreffing REF($413:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($409:frost.collections.ListView<org.frostlanguage.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp687);
// unreffing REF($406:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($402:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($401:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing REF($400:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// unreffing REF($399:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing REF($398:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing REF($397:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($396:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing REF($395:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// unreffing REF($394:org.frostlanguage.frostc.Type)
// line 218
frost$io$IndentedOutputStream** $tmp708 = &param0->types;
frost$io$IndentedOutputStream* $tmp709 = *$tmp708;
frost$core$String** $tmp710 = &param1->name;
frost$core$String* $tmp711 = *$tmp710;
frost$core$String* $tmp712 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp711);
frost$core$String* $tmp713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s714, $tmp712);
frost$core$String* $tmp715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp713, &$s716);
frost$core$String** $tmp717 = &param1->name;
frost$core$String* $tmp718 = *$tmp717;
frost$core$String* $tmp719 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp718);
frost$core$String* $tmp720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp715, $tmp719);
frost$core$String* $tmp721 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp720, &$s722);
$fn724 $tmp723 = ($fn724) ((frost$io$OutputStream*) $tmp709)->$class->vtable[19];
$tmp723(((frost$io$OutputStream*) $tmp709), $tmp721);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// unreffing REF($495:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing REF($494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing REF($490:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($489:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
// unreffing REF($488:frost.core.String)
// line 219
frost$core$Weak** $tmp725 = &param0->compiler;
frost$core$Weak* $tmp726 = *$tmp725;
frost$core$Object* $tmp727 = frost$core$Weak$get$R$frost$core$Weak$T($tmp726);
frost$core$Bit $tmp728 = org$frostlanguage$frostc$Compiler$isValue$org$frostlanguage$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlanguage$frostc$Compiler*) $tmp727), param1);
bool $tmp729 = $tmp728.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp727);
// unreffing REF($520:frost.core.Weak.T)
if ($tmp729) goto block9; else goto block10;
block9:;
// line 220
frost$io$IndentedOutputStream** $tmp730 = &param0->types;
frost$io$IndentedOutputStream* $tmp731 = *$tmp730;
frost$core$String** $tmp732 = &param1->name;
frost$core$String* $tmp733 = *$tmp732;
frost$core$String* $tmp734 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp733);
frost$core$String* $tmp735 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s736, $tmp734);
frost$core$String* $tmp737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp735, &$s738);
$fn740 $tmp739 = ($fn740) ((frost$io$OutputStream*) $tmp731)->$class->vtable[19];
$tmp739(((frost$io$OutputStream*) $tmp731), $tmp737);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// unreffing REF($538:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($537:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing REF($536:frost.core.String)
// line 221
frost$io$IndentedOutputStream** $tmp741 = &param0->types;
frost$io$IndentedOutputStream* $tmp742 = *$tmp741;
frost$core$Int64* $tmp743 = &$tmp742->level;
frost$core$Int64 $tmp744 = *$tmp743;
frost$core$Int64 $tmp745 = (frost$core$Int64) {1};
int64_t $tmp746 = $tmp744.value;
int64_t $tmp747 = $tmp745.value;
int64_t $tmp748 = $tmp746 + $tmp747;
frost$core$Int64 $tmp749 = (frost$core$Int64) {$tmp748};
frost$core$Int64* $tmp750 = &$tmp742->level;
*$tmp750 = $tmp749;
// line 222
frost$io$IndentedOutputStream** $tmp751 = &param0->types;
frost$io$IndentedOutputStream* $tmp752 = *$tmp751;
$fn754 $tmp753 = ($fn754) ((frost$io$OutputStream*) $tmp752)->$class->vtable[19];
$tmp753(((frost$io$OutputStream*) $tmp752), &$s755);
// line 223
frost$io$IndentedOutputStream** $tmp756 = &param0->types;
frost$io$IndentedOutputStream* $tmp757 = *$tmp756;
$fn759 $tmp758 = ($fn759) ((frost$io$OutputStream*) $tmp757)->$class->vtable[19];
$tmp758(((frost$io$OutputStream*) $tmp757), &$s760);
// line 224
frost$io$IndentedOutputStream** $tmp761 = &param0->types;
frost$io$IndentedOutputStream* $tmp762 = *$tmp761;
org$frostlanguage$frostc$Type** $tmp763 = &param1->type;
org$frostlanguage$frostc$Type* $tmp764 = *$tmp763;
frost$core$String* $tmp765 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp764);
frost$core$String* $tmp766 = frost$core$String$convert$R$frost$core$String($tmp765);
frost$core$String* $tmp767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp766, &$s768);
$fn770 $tmp769 = ($fn770) ((frost$io$OutputStream*) $tmp762)->$class->vtable[19];
$tmp769(((frost$io$OutputStream*) $tmp762), $tmp767);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing REF($582:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// unreffing REF($581:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// unreffing REF($580:frost.core.String)
// line 225
frost$io$IndentedOutputStream** $tmp771 = &param0->types;
frost$io$IndentedOutputStream* $tmp772 = *$tmp771;
frost$core$Int64* $tmp773 = &$tmp772->level;
frost$core$Int64 $tmp774 = *$tmp773;
frost$core$Int64 $tmp775 = (frost$core$Int64) {1};
int64_t $tmp776 = $tmp774.value;
int64_t $tmp777 = $tmp775.value;
int64_t $tmp778 = $tmp776 - $tmp777;
frost$core$Int64 $tmp779 = (frost$core$Int64) {$tmp778};
frost$core$Int64* $tmp780 = &$tmp772->level;
*$tmp780 = $tmp779;
// line 226
frost$io$IndentedOutputStream** $tmp781 = &param0->types;
frost$io$IndentedOutputStream* $tmp782 = *$tmp781;
frost$core$String** $tmp783 = &param1->name;
frost$core$String* $tmp784 = *$tmp783;
frost$core$String* $tmp785 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp784);
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s787, $tmp785);
frost$core$String* $tmp788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp786, &$s789);
$fn791 $tmp790 = ($fn791) ((frost$io$OutputStream*) $tmp782)->$class->vtable[19];
$tmp790(((frost$io$OutputStream*) $tmp782), $tmp788);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($614:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing REF($613:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing REF($612:frost.core.String)
// line 227
frost$io$IndentedOutputStream** $tmp792 = &param0->types;
frost$io$IndentedOutputStream* $tmp793 = *$tmp792;
frost$core$String** $tmp794 = &param1->name;
frost$core$String* $tmp795 = *$tmp794;
frost$core$String* $tmp796 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp795);
frost$core$String* $tmp797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s798, $tmp796);
frost$core$String* $tmp799 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp797, &$s800);
$fn802 $tmp801 = ($fn802) ((frost$io$OutputStream*) $tmp793)->$class->vtable[19];
$tmp801(((frost$io$OutputStream*) $tmp793), $tmp799);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing REF($634:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($633:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing REF($632:frost.core.String)
// line 228
frost$io$IndentedOutputStream** $tmp803 = &param0->types;
frost$io$IndentedOutputStream* $tmp804 = *$tmp803;
frost$core$Int64* $tmp805 = &$tmp804->level;
frost$core$Int64 $tmp806 = *$tmp805;
frost$core$Int64 $tmp807 = (frost$core$Int64) {1};
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 + $tmp809;
frost$core$Int64 $tmp811 = (frost$core$Int64) {$tmp810};
frost$core$Int64* $tmp812 = &$tmp804->level;
*$tmp812 = $tmp811;
// line 229
frost$io$IndentedOutputStream** $tmp813 = &param0->types;
frost$io$IndentedOutputStream* $tmp814 = *$tmp813;
frost$core$String** $tmp815 = &param1->name;
frost$core$String* $tmp816 = *$tmp815;
frost$core$String* $tmp817 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp816);
frost$core$String* $tmp818 = frost$core$String$convert$R$frost$core$String($tmp817);
frost$core$String* $tmp819 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp818, &$s820);
$fn822 $tmp821 = ($fn822) ((frost$io$OutputStream*) $tmp814)->$class->vtable[19];
$tmp821(((frost$io$OutputStream*) $tmp814), $tmp819);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing REF($666:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing REF($665:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing REF($664:frost.core.String)
// line 230
frost$io$IndentedOutputStream** $tmp823 = &param0->types;
frost$io$IndentedOutputStream* $tmp824 = *$tmp823;
$fn826 $tmp825 = ($fn826) ((frost$io$OutputStream*) $tmp824)->$class->vtable[19];
$tmp825(((frost$io$OutputStream*) $tmp824), &$s827);
// line 231
frost$io$IndentedOutputStream** $tmp828 = &param0->types;
frost$io$IndentedOutputStream* $tmp829 = *$tmp828;
frost$core$Int64* $tmp830 = &$tmp829->level;
frost$core$Int64 $tmp831 = *$tmp830;
frost$core$Int64 $tmp832 = (frost$core$Int64) {1};
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832.value;
int64_t $tmp835 = $tmp833 - $tmp834;
frost$core$Int64 $tmp836 = (frost$core$Int64) {$tmp835};
frost$core$Int64* $tmp837 = &$tmp829->level;
*$tmp837 = $tmp836;
// line 232
frost$io$IndentedOutputStream** $tmp838 = &param0->types;
frost$io$IndentedOutputStream* $tmp839 = *$tmp838;
frost$core$String** $tmp840 = &param1->name;
frost$core$String* $tmp841 = *$tmp840;
frost$core$String* $tmp842 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp841);
frost$core$String* $tmp843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s844, $tmp842);
frost$core$String* $tmp845 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp843, &$s846);
$fn848 $tmp847 = ($fn848) ((frost$io$OutputStream*) $tmp839)->$class->vtable[19];
$tmp847(((frost$io$OutputStream*) $tmp839), $tmp845);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing REF($704:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// unreffing REF($703:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($702:frost.core.String)
// line 233
frost$core$Weak** $tmp849 = &param0->compiler;
frost$core$Weak* $tmp850 = *$tmp849;
frost$core$Object* $tmp851 = frost$core$Weak$get$R$frost$core$Weak$T($tmp850);
org$frostlanguage$frostc$Type* $tmp852 = org$frostlanguage$frostc$Type$Value$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$ClassDecl* $tmp853 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(((org$frostlanguage$frostc$Compiler*) $tmp851), $tmp852);
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
org$frostlanguage$frostc$ClassDecl* $tmp854 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local3) = $tmp853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($724:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($723:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp851);
// unreffing REF($720:frost.core.Weak.T)
// line 234
frost$core$Weak** $tmp855 = &param0->compiler;
frost$core$Weak* $tmp856 = *$tmp855;
frost$core$Object* $tmp857 = frost$core$Weak$get$R$frost$core$Weak$T($tmp856);
org$frostlanguage$frostc$ClassDecl* $tmp858 = *(&local3);
frost$collections$ListView* $tmp859 = org$frostlanguage$frostc$Compiler$getVTable$org$frostlanguage$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT(((org$frostlanguage$frostc$Compiler*) $tmp857), $tmp858);
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$collections$ListView* $tmp860 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local4) = $tmp859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($750:frost.collections.ListView<org.frostlanguage.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp857);
// unreffing REF($745:frost.core.Weak.T)
// line 235
frost$io$IndentedOutputStream** $tmp861 = &param0->types;
frost$io$IndentedOutputStream* $tmp862 = *$tmp861;
frost$collections$ListView* $tmp863 = *(&local4);
ITable* $tmp864 = ((frost$collections$CollectionView*) $tmp863)->$class->itable;
while ($tmp864->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp864 = $tmp864->next;
}
$fn866 $tmp865 = $tmp864->methods[0];
frost$core$Int64 $tmp867 = $tmp865(((frost$collections$CollectionView*) $tmp863));
frost$core$Int64$wrapper* $tmp868;
$tmp868 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp868->value = $tmp867;
frost$core$String* $tmp869 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s870, ((frost$core$Object*) $tmp868));
frost$core$String* $tmp871 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp869, &$s872);
frost$core$String* $tmp873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s874, $tmp871);
frost$core$String** $tmp875 = &param1->name;
frost$core$String* $tmp876 = *$tmp875;
frost$core$String* $tmp877 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp876);
frost$core$String* $tmp878 = frost$core$String$convert$R$frost$core$String($tmp877);
frost$core$String* $tmp879 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp878, &$s880);
frost$core$String* $tmp881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp873, $tmp879);
$fn883 $tmp882 = ($fn883) ((frost$io$OutputStream*) $tmp862)->$class->vtable[19];
$tmp882(((frost$io$OutputStream*) $tmp862), $tmp881);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($781:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing REF($780:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// unreffing REF($779:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// unreffing REF($778:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
// unreffing REF($775:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
// unreffing REF($774:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing REF($773:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing REF($772:frost.core.Object)
// line 239
frost$io$IndentedOutputStream** $tmp884 = &param0->types;
frost$io$IndentedOutputStream* $tmp885 = *$tmp884;
frost$core$String** $tmp886 = &param1->name;
frost$core$String* $tmp887 = *$tmp886;
frost$core$String* $tmp888 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp887);
frost$core$String* $tmp889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s890, $tmp888);
frost$core$String* $tmp891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp889, &$s892);
frost$core$String** $tmp893 = &param1->name;
frost$core$String* $tmp894 = *$tmp893;
frost$core$String* $tmp895 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp894);
frost$core$String* $tmp896 = frost$core$String$convert$R$frost$core$String($tmp895);
frost$core$String* $tmp897 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp896, &$s898);
frost$core$String* $tmp899 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp891, $tmp897);
$fn901 $tmp900 = ($fn901) ((frost$io$OutputStream*) $tmp885)->$class->vtable[19];
$tmp900(((frost$io$OutputStream*) $tmp885), $tmp899);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing REF($822:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// unreffing REF($821:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// unreffing REF($820:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing REF($819:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing REF($816:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing REF($815:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing REF($814:frost.core.String)
frost$collections$ListView* $tmp902 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
// unreffing valueVTable
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp903 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing value
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
goto block10;
block10:;
frost$io$File* $tmp904 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// unreffing typesPath
*(&local1) = ((frost$io$File*) NULL);
frost$io$File* $tmp905 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing path
*(&local0) = ((frost$io$File*) NULL);
return;

}
frost$core$String* org$frostlanguage$frostc$HCodeGenerator$selfType$org$frostlanguage$frostc$MethodDecl$R$frost$core$String(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
// line 245
frost$core$Weak** $tmp906 = &param1->owner;
frost$core$Weak* $tmp907 = *$tmp906;
frost$core$Object* $tmp908 = frost$core$Weak$get$R$frost$core$Weak$T($tmp907);
org$frostlanguage$frostc$Type** $tmp909 = &((org$frostlanguage$frostc$ClassDecl*) $tmp908)->type;
org$frostlanguage$frostc$Type* $tmp910 = *$tmp909;
frost$core$String* $tmp911 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp910);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$String* $tmp912 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local0) = $tmp911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp908);
// unreffing REF($4:frost.core.Weak.T)
// line 246
org$frostlanguage$frostc$MethodDecl$Kind* $tmp913 = &param1->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp914 = *$tmp913;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp915;
$tmp915 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp915->value = $tmp914;
frost$core$Int64 $tmp916 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp917 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp916);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp918;
$tmp918 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp918->value = $tmp917;
ITable* $tmp919 = ((frost$core$Equatable*) $tmp915)->$class->itable;
while ($tmp919->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp919 = $tmp919->next;
}
$fn921 $tmp920 = $tmp919->methods[0];
frost$core$Bit $tmp922 = $tmp920(((frost$core$Equatable*) $tmp915), ((frost$core$Equatable*) $tmp918));
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block3; else goto block4;
block3:;
frost$core$String* $tmp924 = *(&local0);
frost$core$Bit $tmp925 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp924, &$s926);
frost$core$Bit $tmp927 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp925);
*(&local1) = $tmp927;
goto block5;
block4:;
*(&local1) = $tmp922;
goto block5;
block5:;
frost$core$Bit $tmp928 = *(&local1);
bool $tmp929 = $tmp928.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp918)));
// unreffing REF($29:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp915)));
// unreffing REF($25:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp929) goto block1; else goto block2;
block1:;
// line 247
frost$core$String* $tmp930 = *(&local0);
frost$core$String* $tmp931 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp930, &$s932);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// unreffing REF($52:frost.core.String)
frost$core$String* $tmp933 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp931;
block2:;
// line 249
frost$core$String* $tmp934 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$String* $tmp935 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp934;

}
frost$core$Bit org$frostlanguage$frostc$HCodeGenerator$needsStructIndirection$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 269
org$frostlanguage$frostc$Type** $tmp936 = &param1->returnType;
org$frostlanguage$frostc$Type* $tmp937 = *$tmp936;
frost$core$Bit $tmp938 = org$frostlanguage$frostc$Type$get_isClass$R$frost$core$Bit($tmp937);
frost$core$Bit $tmp939 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp938);
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block1; else goto block2;
block1:;
// line 270
frost$core$Bit $tmp941 = frost$core$Bit$init$builtin_bit(false);
return $tmp941;
block2:;
// line 272
org$frostlanguage$frostc$Annotations** $tmp942 = &param1->annotations;
org$frostlanguage$frostc$Annotations* $tmp943 = *$tmp942;
frost$core$Bit $tmp944 = org$frostlanguage$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp943);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block3; else goto block4;
block3:;
org$frostlanguage$frostc$Type** $tmp946 = &param1->returnType;
org$frostlanguage$frostc$Type* $tmp947 = *$tmp946;
frost$core$Bit $tmp948 = org$frostlanguage$frostc$Type$get_isClass$R$frost$core$Bit($tmp947);
*(&local1) = $tmp948;
goto block5;
block4:;
*(&local1) = $tmp944;
goto block5;
block5:;
frost$core$Bit $tmp949 = *(&local1);
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp951 = &param0->compiler;
frost$core$Weak* $tmp952 = *$tmp951;
frost$core$Object* $tmp953 = frost$core$Weak$get$R$frost$core$Weak$T($tmp952);
frost$core$Weak** $tmp954 = &param0->compiler;
frost$core$Weak* $tmp955 = *$tmp954;
frost$core$Object* $tmp956 = frost$core$Weak$get$R$frost$core$Weak$T($tmp955);
org$frostlanguage$frostc$Type** $tmp957 = &param1->returnType;
org$frostlanguage$frostc$Type* $tmp958 = *$tmp957;
org$frostlanguage$frostc$ClassDecl* $tmp959 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(((org$frostlanguage$frostc$Compiler*) $tmp956), $tmp958);
frost$core$Bit $tmp960 = org$frostlanguage$frostc$Compiler$isValue$org$frostlanguage$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlanguage$frostc$Compiler*) $tmp953), $tmp959);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing REF($40:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp956);
// unreffing REF($35:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp953);
// unreffing REF($29:frost.core.Weak.T)
*(&local0) = $tmp960;
goto block8;
block7:;
*(&local0) = $tmp949;
goto block8;
block8:;
frost$core$Bit $tmp961 = *(&local0);
*(&local2) = $tmp961;
// line 278
frost$core$Bit $tmp962 = *(&local2);
frost$core$Bit $tmp963 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp962);
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block9; else goto block10;
block9:;
*(&local3) = $tmp963;
goto block11;
block10:;
org$frostlanguage$frostc$Annotations** $tmp965 = &param1->annotations;
org$frostlanguage$frostc$Annotations* $tmp966 = *$tmp965;
frost$core$Bit $tmp967 = org$frostlanguage$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp966);
frost$core$Bit $tmp968 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp967);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block12; else goto block13;
block12:;
org$frostlanguage$frostc$Annotations** $tmp970 = &param1->annotations;
org$frostlanguage$frostc$Annotations* $tmp971 = *$tmp970;
frost$core$Bit $tmp972 = org$frostlanguage$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp971);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block15; else goto block16;
block15:;
*(&local5) = $tmp972;
goto block17;
block16:;
org$frostlanguage$frostc$Annotations** $tmp974 = &param1->annotations;
org$frostlanguage$frostc$Annotations* $tmp975 = *$tmp974;
frost$core$Bit $tmp976 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp975);
*(&local5) = $tmp976;
goto block17;
block17:;
frost$core$Bit $tmp977 = *(&local5);
*(&local4) = $tmp977;
goto block14;
block13:;
*(&local4) = $tmp968;
goto block14;
block14:;
frost$core$Bit $tmp978 = *(&local4);
*(&local3) = $tmp978;
goto block11;
block11:;
frost$core$Bit $tmp979 = *(&local3);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp981 = (frost$core$Int64) {278};
frost$core$String* $tmp982 = org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp983 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s984, $tmp982);
frost$core$String* $tmp985 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp983, &$s986);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s987, $tmp981, $tmp985);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// unreffing REF($96:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing REF($94:frost.core.String)
abort(); // unreachable
block18:;
// line 280
frost$core$Bit $tmp988 = *(&local2);
return $tmp988;

}
void org$frostlanguage$frostc$HCodeGenerator$writeDeclaration$org$frostlanguage$frostc$MethodDecl(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
org$frostlanguage$frostc$MethodDecl$Parameter* local2 = NULL;
frost$core$String* local3 = NULL;
// line 285
frost$io$MemoryOutputStream** $tmp989 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp990 = *$tmp989;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$io$MemoryOutputStream** $tmp991 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp992 = *$tmp991;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$io$MemoryOutputStream** $tmp993 = &param0->importStream;
*$tmp993 = $tmp990;
// line 286
frost$collections$HashSet** $tmp994 = &param0->bodyImports;
frost$collections$HashSet* $tmp995 = *$tmp994;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$collections$HashSet** $tmp996 = &param0->imports;
frost$collections$HashSet* $tmp997 = *$tmp996;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$collections$HashSet** $tmp998 = &param0->imports;
*$tmp998 = $tmp995;
// line 287
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s999));
frost$core$String* $tmp1000 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local0) = &$s1001;
// line 288
frost$core$Bit $tmp1002 = org$frostlanguage$frostc$HCodeGenerator$needsStructIndirection$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block1; else goto block3;
block1:;
// line 289
frost$io$IndentedOutputStream** $tmp1004 = &param0->body;
frost$io$IndentedOutputStream* $tmp1005 = *$tmp1004;
frost$core$String* $tmp1006 = org$frostlanguage$frostc$HCodeGenerator$getName$org$frostlanguage$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1007 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1008, $tmp1006);
frost$core$String* $tmp1009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1007, &$s1010);
org$frostlanguage$frostc$Type** $tmp1011 = &param1->returnType;
org$frostlanguage$frostc$Type* $tmp1012 = *$tmp1011;
frost$core$String* $tmp1013 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp1012);
frost$core$String* $tmp1014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1009, $tmp1013);
frost$core$String* $tmp1015 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1014, &$s1016);
$fn1018 $tmp1017 = ($fn1018) ((frost$io$OutputStream*) $tmp1005)->$class->vtable[17];
$tmp1017(((frost$io$OutputStream*) $tmp1005), $tmp1015);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// unreffing REF($44:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
// unreffing REF($43:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
// unreffing REF($38:frost.core.String)
// line 290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1019));
frost$core$String* $tmp1020 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local0) = &$s1021;
goto block2;
block3:;
// line 1
// line 293
frost$io$IndentedOutputStream** $tmp1022 = &param0->body;
frost$io$IndentedOutputStream* $tmp1023 = *$tmp1022;
org$frostlanguage$frostc$Type** $tmp1024 = &param1->returnType;
org$frostlanguage$frostc$Type* $tmp1025 = *$tmp1024;
frost$core$String* $tmp1026 = org$frostlanguage$frostc$HCodeGenerator$type$org$frostlanguage$frostc$Type$R$frost$core$String(param0, $tmp1025);
frost$core$String* $tmp1027 = frost$core$String$convert$R$frost$core$String($tmp1026);
frost$core$String* $tmp1028 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1027, &$s1029);
frost$core$String* $tmp1030 = org$frostlanguage$frostc$HCodeGenerator$getName$org$frostlanguage$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1031 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1028, $tmp1030);
frost$core$String* $tmp1032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1031, &$s1033);
$fn1035 $tmp1034 = ($fn1035) ((frost$io$OutputStream*) $tmp1023)->$class->vtable[17];
$tmp1034(((frost$io$OutputStream*) $tmp1023), $tmp1032);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing REF($86:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// unreffing REF($85:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing REF($83:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing REF($81:frost.core.String)
goto block2;
block2:;
// line 295
org$frostlanguage$frostc$Annotations** $tmp1036 = &param1->annotations;
org$frostlanguage$frostc$Annotations* $tmp1037 = *$tmp1036;
frost$core$Bit $tmp1038 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1037);
frost$core$Bit $tmp1039 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1038);
bool $tmp1040 = $tmp1039.value;
if ($tmp1040) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1041 = &param0->compiler;
frost$core$Weak* $tmp1042 = *$tmp1041;
frost$core$Object* $tmp1043 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1042);
frost$core$Bit $tmp1044 = org$frostlanguage$frostc$Compiler$isValueInit$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(((org$frostlanguage$frostc$Compiler*) $tmp1043), param1);
frost$core$Bit $tmp1045 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1044);
frost$core$Frost$unref$frost$core$Object$Q($tmp1043);
// unreffing REF($118:frost.core.Weak.T)
*(&local1) = $tmp1045;
goto block8;
block7:;
*(&local1) = $tmp1039;
goto block8;
block8:;
frost$core$Bit $tmp1046 = *(&local1);
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block4; else goto block5;
block4:;
// line 296
frost$io$IndentedOutputStream** $tmp1048 = &param0->body;
frost$io$IndentedOutputStream* $tmp1049 = *$tmp1048;
frost$core$String* $tmp1050 = *(&local0);
frost$core$String* $tmp1051 = frost$core$String$convert$R$frost$core$String($tmp1050);
frost$core$String* $tmp1052 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1051, &$s1053);
frost$core$String* $tmp1054 = org$frostlanguage$frostc$HCodeGenerator$selfType$org$frostlanguage$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1052, $tmp1054);
frost$core$String* $tmp1056 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1055, &$s1057);
$fn1059 $tmp1058 = ($fn1059) ((frost$io$OutputStream*) $tmp1049)->$class->vtable[17];
$tmp1058(((frost$io$OutputStream*) $tmp1049), $tmp1056);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing REF($142:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing REF($141:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing REF($140:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// unreffing REF($139:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// unreffing REF($138:frost.core.String)
// line 297
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1060));
frost$core$String* $tmp1061 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local0) = &$s1062;
goto block5;
block5:;
// line 299
frost$collections$Array** $tmp1063 = &param1->parameters;
frost$collections$Array* $tmp1064 = *$tmp1063;
ITable* $tmp1065 = ((frost$collections$Iterable*) $tmp1064)->$class->itable;
while ($tmp1065->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1065 = $tmp1065->next;
}
$fn1067 $tmp1066 = $tmp1065->methods[0];
frost$collections$Iterator* $tmp1068 = $tmp1066(((frost$collections$Iterable*) $tmp1064));
goto block9;
block9:;
ITable* $tmp1069 = $tmp1068->$class->itable;
while ($tmp1069->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[0];
frost$core$Bit $tmp1072 = $tmp1070($tmp1068);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block11; else goto block10;
block10:;
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1074 = $tmp1068->$class->itable;
while ($tmp1074->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1074 = $tmp1074->next;
}
$fn1076 $tmp1075 = $tmp1074->methods[1];
frost$core$Object* $tmp1077 = $tmp1075($tmp1068);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp1077)));
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp1078 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp1077);
// line 300
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp1079 = *(&local2);
frost$core$String** $tmp1080 = &$tmp1079->name;
frost$core$String* $tmp1081 = *$tmp1080;
frost$core$String* $tmp1082 = org$frostlanguage$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1081);
frost$core$String* $tmp1083 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1084, $tmp1082);
frost$core$String* $tmp1085 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1083, &$s1086);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$String* $tmp1087 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local3) = $tmp1085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// unreffing REF($199:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
// unreffing REF($198:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// unreffing REF($197:frost.core.String)
// line 301
frost$io$IndentedOutputStream** $tmp1088 = &param0->body;
frost$io$IndentedOutputStream* $tmp1089 = *$tmp1088;
frost$core$String* $tmp1090 = *(&local0);
frost$core$String* $tmp1091 = frost$core$String$convert$R$frost$core$String($tmp1090);
frost$core$String* $tmp1092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1091, &$s1093);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp1094 = *(&local2);
org$frostlanguage$frostc$Type** $tmp1095 = &$tmp1094->type;
org$frostlanguage$frostc$Type* $tmp1096 = *$tmp1095;
frost$core$String* $tmp1097 = *(&local3);
frost$core$String* $tmp1098 = org$frostlanguage$frostc$HCodeGenerator$declaration$org$frostlanguage$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1096, $tmp1097);
frost$core$String* $tmp1099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1092, $tmp1098);
frost$core$String* $tmp1100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1099, &$s1101);
$fn1103 $tmp1102 = ($fn1103) ((frost$io$OutputStream*) $tmp1089)->$class->vtable[17];
$tmp1102(((frost$io$OutputStream*) $tmp1089), $tmp1100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// unreffing REF($229:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// unreffing REF($228:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing REF($227:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing REF($222:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
// unreffing REF($221:frost.core.String)
// line 302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1104));
frost$core$String* $tmp1105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local0) = &$s1106;
frost$core$String* $tmp1107 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
// unreffing name
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1077);
// unreffing REF($185:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp1108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// unreffing p
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
// unreffing REF($174:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 304
frost$io$IndentedOutputStream** $tmp1109 = &param0->body;
frost$io$IndentedOutputStream* $tmp1110 = *$tmp1109;
$fn1112 $tmp1111 = ($fn1112) ((frost$io$OutputStream*) $tmp1110)->$class->vtable[19];
$tmp1111(((frost$io$OutputStream*) $tmp1110), &$s1113);
frost$core$String* $tmp1114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
// unreffing separator
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlanguage$frostc$HCodeGenerator$write$org$frostlanguage$frostc$MethodDecl$org$frostlanguage$frostc$IR(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$MethodDecl* param1, org$frostlanguage$frostc$IR* param2) {

// line 309
org$frostlanguage$frostc$HCodeGenerator$writeDeclaration$org$frostlanguage$frostc$MethodDecl(param0, param1);
return;

}
void org$frostlanguage$frostc$HCodeGenerator$end$org$frostlanguage$frostc$ClassDecl(org$frostlanguage$frostc$HCodeGenerator* param0, org$frostlanguage$frostc$ClassDecl* param1) {

// line 314
frost$io$IndentedOutputStream** $tmp1115 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1116 = *$tmp1115;
frost$io$MemoryOutputStream** $tmp1117 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1118 = *$tmp1117;
$fn1120 $tmp1119 = ($fn1120) ((frost$io$OutputStream*) $tmp1116)->$class->vtable[20];
$tmp1119(((frost$io$OutputStream*) $tmp1116), ((frost$core$Object*) $tmp1118));
// line 315
frost$io$IndentedOutputStream** $tmp1121 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1122 = *$tmp1121;
frost$io$MemoryOutputStream** $tmp1123 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1124 = *$tmp1123;
$fn1126 $tmp1125 = ($fn1126) ((frost$io$OutputStream*) $tmp1122)->$class->vtable[20];
$tmp1125(((frost$io$OutputStream*) $tmp1122), ((frost$core$Object*) $tmp1124));
// line 316
frost$io$IndentedOutputStream** $tmp1127 = &param0->out;
frost$io$IndentedOutputStream* $tmp1128 = *$tmp1127;
frost$io$MemoryOutputStream** $tmp1129 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1130 = *$tmp1129;
$fn1132 $tmp1131 = ($fn1132) ((frost$io$OutputStream*) $tmp1128)->$class->vtable[20];
$tmp1131(((frost$io$OutputStream*) $tmp1128), ((frost$core$Object*) $tmp1130));
// line 317
frost$io$IndentedOutputStream** $tmp1133 = &param0->out;
frost$io$IndentedOutputStream* $tmp1134 = *$tmp1133;
frost$io$MemoryOutputStream** $tmp1135 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1136 = *$tmp1135;
$fn1138 $tmp1137 = ($fn1138) ((frost$io$OutputStream*) $tmp1134)->$class->vtable[20];
$tmp1137(((frost$io$OutputStream*) $tmp1134), ((frost$core$Object*) $tmp1136));
return;

}
void org$frostlanguage$frostc$HCodeGenerator$finish(org$frostlanguage$frostc$HCodeGenerator* param0) {

return;

}
void org$frostlanguage$frostc$HCodeGenerator$cleanup(org$frostlanguage$frostc$HCodeGenerator* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1139 = &param0->compiler;
frost$core$Weak* $tmp1140 = *$tmp1139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$io$MemoryOutputStream** $tmp1141 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1142 = *$tmp1141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$io$MemoryOutputStream** $tmp1143 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1144 = *$tmp1143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$io$IndentedOutputStream** $tmp1145 = &param0->types;
frost$io$IndentedOutputStream* $tmp1146 = *$tmp1145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$io$MemoryOutputStream** $tmp1147 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1148 = *$tmp1147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$io$MemoryOutputStream** $tmp1149 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1150 = *$tmp1149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$io$IndentedOutputStream** $tmp1151 = &param0->body;
frost$io$IndentedOutputStream* $tmp1152 = *$tmp1151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$collections$HashSet** $tmp1153 = &param0->typeImports;
frost$collections$HashSet* $tmp1154 = *$tmp1153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$collections$HashSet** $tmp1155 = &param0->bodyImports;
frost$collections$HashSet* $tmp1156 = *$tmp1155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$collections$HashSet** $tmp1157 = &param0->imports;
frost$collections$HashSet* $tmp1158 = *$tmp1157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$io$MemoryOutputStream** $tmp1159 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1160 = *$tmp1159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$io$File** $tmp1161 = &param0->outDir;
frost$io$File* $tmp1162 = *$tmp1161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$io$IndentedOutputStream** $tmp1163 = &param0->out;
frost$io$IndentedOutputStream* $tmp1164 = *$tmp1163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$io$IndentedOutputStream** $tmp1165 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1166 = *$tmp1165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
org$frostlanguage$frostc$LLVMCodeGenerator** $tmp1167 = &param0->llvmCodeGen;
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp1168 = *$tmp1167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Weak** $tmp1169 = &param0->cCodeGen;
frost$core$Weak* $tmp1170 = *$tmp1169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
org$frostlanguage$frostc$CCodeGenerator** $tmp1171 = &param0->cCodeGenRetain;
org$frostlanguage$frostc$CCodeGenerator* $tmp1172 = *$tmp1171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
return;

}

