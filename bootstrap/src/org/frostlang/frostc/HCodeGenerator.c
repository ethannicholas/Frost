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
#include "frost/core/UInt8.h"
#include "frost/core/System.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$HCodeGenerator$class_type org$frostlang$frostc$HCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$HCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$cleanup, org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File, org$frostlang$frostc$HCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$HCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$HCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$HCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$HCodeGenerator$finish} };

typedef frost$core$Error* (*$fn249)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn285)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn453)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn491)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn579)(frost$core$Error*);
typedef frost$core$Error* (*$fn664)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn672)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn686)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn693)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn701)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn726)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn751)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn755)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn760)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn796)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn817)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn831)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn839)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn864)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn871)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn901)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn917)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn937)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn961)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn978)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn986)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1000)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1024)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1038)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1061)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1068)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1093)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1129)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1146)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1169)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1208)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1315)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1334)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1365)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1375)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1379)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1384)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1411)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1424)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1434)(frost$core$Error*);
typedef frost$core$Error* (*$fn1443)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1450)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1457)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1464)(frost$io$OutputStream*, frost$core$Object*);

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
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x5f\x63\x2e\x68\x22", 20, -552554386615344138, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x66\x72\x6f\x73\x74\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 1463299869330935309, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, -7770263306546861737, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -4763367725704761010, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static frost$core$String $s998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static frost$core$String $s1070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static frost$core$String $s1089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static frost$core$String $s1091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static frost$core$String $s1103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, 9143137537033975547, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static frost$core$String $s1158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static frost$core$String $s1185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static frost$core$String $s1283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static frost$core$String $s1307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static frost$core$String $s1349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, -6778245279874839817, NULL };
static frost$core$String $s1359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static frost$core$String $s1368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s1394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };

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
frost$core$String* $tmp200 = frost$core$String$convert$R$frost$core$String($tmp199);
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
frost$core$String* $tmp404 = frost$core$String$convert$R$frost$core$String($tmp403);
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
$fn579 $tmp578 = ($fn579) $tmp577->$class->vtable[0];
frost$core$String* $tmp580 = $tmp578($tmp577);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s581, $tmp576, $tmp580);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// unreffing REF($1170:frost.core.String)
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
frost$core$String* $tmp589 = frost$core$String$convert$R$frost$core$String($tmp588);
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
frost$io$File$createDirectories($tmp621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($42:frost.io.File?)
// line 192
frost$io$IndentedOutputStream* $tmp627 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp628 = *(&local1);
frost$core$Maybe* $tmp629 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp628);
// try maybe check
frost$core$Int64* $tmp630 = &$tmp629->$rawValue;
frost$core$Int64 $tmp631 = *$tmp630;
int64_t $tmp632 = $tmp631.value;
bool $tmp633 = $tmp632 == 0;
if ($tmp633) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp634 = (frost$core$Error**) ($tmp629->$data + 0);
frost$core$Error* $tmp635 = *$tmp634;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local0) = $tmp635;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($58:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($56:frost.io.IndentedOutputStream)
frost$io$File* $tmp636 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Object** $tmp637 = (frost$core$Object**) ($tmp629->$data + 0);
frost$core$Object* $tmp638 = *$tmp637;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp627, ((frost$io$OutputStream*) $tmp638));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$io$IndentedOutputStream** $tmp639 = &param0->out;
frost$io$IndentedOutputStream* $tmp640 = *$tmp639;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$io$IndentedOutputStream** $tmp641 = &param0->out;
*$tmp641 = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($58:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($56:frost.io.IndentedOutputStream)
// line 193
frost$io$File* $tmp642 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(param0, param1, &$s643);
*(&local2) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$io$File* $tmp644 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local2) = $tmp642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// unreffing REF($102:frost.io.File)
// line 194
frost$io$IndentedOutputStream* $tmp645 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp646 = *(&local2);
frost$core$Maybe* $tmp647 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp646);
// try maybe check
frost$core$Int64* $tmp648 = &$tmp647->$rawValue;
frost$core$Int64 $tmp649 = *$tmp648;
int64_t $tmp650 = $tmp649.value;
bool $tmp651 = $tmp650 == 0;
if ($tmp651) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp652 = (frost$core$Error**) ($tmp647->$data + 0);
frost$core$Error* $tmp653 = *$tmp652;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local0) = $tmp653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// unreffing REF($116:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($114:frost.io.IndentedOutputStream)
frost$io$File* $tmp654 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp656 = (frost$core$Object**) ($tmp647->$data + 0);
frost$core$Object* $tmp657 = *$tmp656;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp645, ((frost$io$OutputStream*) $tmp657));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$io$IndentedOutputStream** $tmp658 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp659 = *$tmp658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$io$IndentedOutputStream** $tmp660 = &param0->typesOut;
*$tmp660 = $tmp645;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// unreffing REF($116:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($114:frost.io.IndentedOutputStream)
// line 195
frost$io$IndentedOutputStream** $tmp661 = &param0->out;
frost$io$IndentedOutputStream* $tmp662 = *$tmp661;
$fn664 $tmp663 = ($fn664) ((frost$io$OutputStream*) $tmp662)->$class->vtable[19];
frost$core$Error* $tmp665 = $tmp663(((frost$io$OutputStream*) $tmp662), &$s666);
// try error check
if ($tmp665 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local0) = $tmp665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing REF($169:frost.core.Error?)
frost$io$File* $tmp667 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp668 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing REF($169:frost.core.Error?)
// line 196
frost$io$IndentedOutputStream** $tmp669 = &param0->out;
frost$io$IndentedOutputStream* $tmp670 = *$tmp669;
$fn672 $tmp671 = ($fn672) ((frost$io$OutputStream*) $tmp670)->$class->vtable[19];
frost$core$Error* $tmp673 = $tmp671(((frost$io$OutputStream*) $tmp670), &$s674);
// try error check
if ($tmp673 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local0) = $tmp673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// unreffing REF($198:frost.core.Error?)
frost$io$File* $tmp675 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp676 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// unreffing REF($198:frost.core.Error?)
// line 197
frost$io$IndentedOutputStream** $tmp677 = &param0->out;
frost$io$IndentedOutputStream* $tmp678 = *$tmp677;
frost$io$File* $tmp679 = *(&local2);
frost$core$String* $tmp680 = frost$io$File$get_name$R$frost$core$String($tmp679);
frost$core$String* $tmp681 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s682, $tmp680);
frost$core$String* $tmp683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp681, &$s684);
$fn686 $tmp685 = ($fn686) ((frost$io$OutputStream*) $tmp678)->$class->vtable[19];
frost$core$Error* $tmp687 = $tmp685(((frost$io$OutputStream*) $tmp678), $tmp683);
// try error check
if ($tmp687 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local0) = $tmp687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// unreffing REF($231:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($229:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($228:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing REF($227:frost.core.String)
frost$io$File* $tmp688 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp689 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// unreffing REF($231:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($229:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($228:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing REF($227:frost.core.String)
// line 198
frost$io$IndentedOutputStream** $tmp690 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp691 = *$tmp690;
$fn693 $tmp692 = ($fn693) ((frost$io$OutputStream*) $tmp691)->$class->vtable[19];
frost$core$Error* $tmp694 = $tmp692(((frost$io$OutputStream*) $tmp691), &$s695);
// try error check
if ($tmp694 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local0) = $tmp694;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// unreffing REF($278:frost.core.Error?)
frost$io$File* $tmp696 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp697 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// unreffing REF($278:frost.core.Error?)
// line 199
frost$io$IndentedOutputStream** $tmp698 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp699 = *$tmp698;
$fn701 $tmp700 = ($fn701) ((frost$io$OutputStream*) $tmp699)->$class->vtable[19];
frost$core$Error* $tmp702 = $tmp700(((frost$io$OutputStream*) $tmp699), &$s703);
// try error check
if ($tmp702 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local0) = $tmp702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($307:frost.core.Error?)
frost$io$File* $tmp704 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp705 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($307:frost.core.Error?)
// line 200
frost$io$MemoryOutputStream** $tmp706 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp707 = *$tmp706;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$io$MemoryOutputStream** $tmp708 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp709 = *$tmp708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$io$MemoryOutputStream** $tmp710 = &param0->importStream;
*$tmp710 = $tmp707;
// line 201
frost$collections$HashSet** $tmp711 = &param0->typeImports;
frost$collections$HashSet* $tmp712 = *$tmp711;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$collections$HashSet** $tmp713 = &param0->imports;
frost$collections$HashSet* $tmp714 = *$tmp713;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$collections$HashSet** $tmp715 = &param0->imports;
*$tmp715 = $tmp712;
// line 202
frost$io$IndentedOutputStream** $tmp716 = &param0->types;
frost$io$IndentedOutputStream* $tmp717 = *$tmp716;
frost$core$String** $tmp718 = &param1->name;
frost$core$String* $tmp719 = *$tmp718;
frost$core$String* $tmp720 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp719);
frost$core$String* $tmp721 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s722, $tmp720);
frost$core$String* $tmp723 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp721, &$s724);
$fn726 $tmp725 = ($fn726) ((frost$io$OutputStream*) $tmp717)->$class->vtable[19];
frost$core$Error* $tmp727 = $tmp725(((frost$io$OutputStream*) $tmp717), $tmp723);
// try error check
if ($tmp727 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local0) = $tmp727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing REF($363:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($361:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// unreffing REF($360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing REF($359:frost.core.String)
frost$io$File* $tmp728 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp729 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing REF($363:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($361:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// unreffing REF($360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing REF($359:frost.core.String)
// line 203
frost$io$IndentedOutputStream** $tmp730 = &param0->types;
frost$io$IndentedOutputStream* $tmp731 = *$tmp730;
frost$core$Int64* $tmp732 = &$tmp731->level;
frost$core$Int64 $tmp733 = *$tmp732;
frost$core$Int64 $tmp734 = (frost$core$Int64) {1};
int64_t $tmp735 = $tmp733.value;
int64_t $tmp736 = $tmp734.value;
int64_t $tmp737 = $tmp735 + $tmp736;
frost$core$Int64 $tmp738 = (frost$core$Int64) {$tmp737};
frost$core$Int64* $tmp739 = &$tmp731->level;
*$tmp739 = $tmp738;
// line 204
frost$core$Weak** $tmp740 = &param0->compiler;
frost$core$Weak* $tmp741 = *$tmp740;
frost$core$Object* $tmp742 = frost$core$Weak$get$R$frost$core$Weak$T($tmp741);
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp742) != NULL);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp745 = (frost$core$Int64) {204};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s746, $tmp745, &$s747);
abort(); // unreachable
block21:;
frost$collections$ListView* $tmp748 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp742), param1);
ITable* $tmp749 = ((frost$collections$Iterable*) $tmp748)->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[0];
frost$collections$Iterator* $tmp752 = $tmp750(((frost$collections$Iterable*) $tmp748));
goto block23;
block23:;
ITable* $tmp753 = $tmp752->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
frost$core$Bit $tmp756 = $tmp754($tmp752);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block25; else goto block24;
block24:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp758 = $tmp752->$class->itable;
while ($tmp758->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[1];
frost$core$Object* $tmp761 = $tmp759($tmp752);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp761)));
org$frostlang$frostc$FieldDecl* $tmp762 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp761);
// line 205
frost$core$Weak** $tmp763 = &param0->compiler;
frost$core$Weak* $tmp764 = *$tmp763;
frost$core$Object* $tmp765 = frost$core$Weak$get$R$frost$core$Weak$T($tmp764);
frost$core$Bit $tmp766 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp765) != NULL);
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp768 = (frost$core$Int64) {205};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s769, $tmp768, &$s770);
abort(); // unreachable
block26:;
org$frostlang$frostc$FieldDecl* $tmp771 = *(&local3);
frost$core$Bit $tmp772 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp765), $tmp771);
frost$core$Frost$unref$frost$core$Object$Q($tmp765);
// unreffing REF($458:frost.core.Weak.T)
// line 206
org$frostlang$frostc$FieldDecl* $tmp773 = *(&local3);
org$frostlang$frostc$Type** $tmp774 = &$tmp773->type;
org$frostlang$frostc$Type* $tmp775 = *$tmp774;
org$frostlang$frostc$Type* $tmp776 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp777 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp775, $tmp776);
bool $tmp778 = $tmp777.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
// unreffing REF($477:org.frostlang.frostc.Type)
if ($tmp778) goto block28; else goto block30;
block28:;
// line 207
frost$io$IndentedOutputStream** $tmp779 = &param0->types;
frost$io$IndentedOutputStream* $tmp780 = *$tmp779;
org$frostlang$frostc$FieldDecl* $tmp781 = *(&local3);
frost$core$String** $tmp782 = &((org$frostlang$frostc$Symbol*) $tmp781)->name;
frost$core$String* $tmp783 = *$tmp782;
frost$core$String* $tmp784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s785, $tmp783);
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp784, &$s787);
org$frostlang$frostc$LLVMCodeGenerator** $tmp788 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp789 = *$tmp788;
frost$core$Int64 $tmp790 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp789, param1);
frost$core$Int64$wrapper* $tmp791;
$tmp791 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp791->value = $tmp790;
frost$core$String* $tmp792 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp786, ((frost$core$Object*) $tmp791));
frost$core$String* $tmp793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp792, &$s794);
$fn796 $tmp795 = ($fn796) ((frost$io$OutputStream*) $tmp780)->$class->vtable[19];
frost$core$Error* $tmp797 = $tmp795(((frost$io$OutputStream*) $tmp780), $tmp793);
// try error check
if ($tmp797 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local0) = $tmp797;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($501:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// unreffing REF($498:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
// unreffing REF($497:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing REF($492:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp761);
// unreffing REF($446:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp798 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($435:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing REF($431:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
// unreffing REF($421:frost.core.Weak.T)
frost$io$File* $tmp799 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp800 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($501:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// unreffing REF($498:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
// unreffing REF($497:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing REF($492:frost.core.String)
goto block29;
block30:;
// line 1
// line 210
frost$io$IndentedOutputStream** $tmp801 = &param0->types;
frost$io$IndentedOutputStream* $tmp802 = *$tmp801;
org$frostlang$frostc$FieldDecl* $tmp803 = *(&local3);
org$frostlang$frostc$Type** $tmp804 = &$tmp803->type;
org$frostlang$frostc$Type* $tmp805 = *$tmp804;
frost$core$String* $tmp806 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp805);
frost$core$String* $tmp807 = frost$core$String$convert$R$frost$core$String($tmp806);
frost$core$String* $tmp808 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp807, &$s809);
org$frostlang$frostc$FieldDecl* $tmp810 = *(&local3);
frost$core$String** $tmp811 = &((org$frostlang$frostc$Symbol*) $tmp810)->name;
frost$core$String* $tmp812 = *$tmp811;
frost$core$String* $tmp813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp808, $tmp812);
frost$core$String* $tmp814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp813, &$s815);
$fn817 $tmp816 = ($fn817) ((frost$io$OutputStream*) $tmp802)->$class->vtable[19];
frost$core$Error* $tmp818 = $tmp816(((frost$io$OutputStream*) $tmp802), $tmp814);
// try error check
if ($tmp818 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local0) = $tmp818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing REF($591:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// unreffing REF($589:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// unreffing REF($588:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// unreffing REF($583:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing REF($582:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
// unreffing REF($581:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp761);
// unreffing REF($446:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp819 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($435:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing REF($431:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
// unreffing REF($421:frost.core.Weak.T)
frost$io$File* $tmp820 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp821 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing REF($591:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// unreffing REF($589:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// unreffing REF($588:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// unreffing REF($583:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing REF($582:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
// unreffing REF($581:frost.core.String)
goto block29;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp761);
// unreffing REF($446:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp822 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing f
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block23;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($435:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing REF($431:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
// unreffing REF($421:frost.core.Weak.T)
// line 213
frost$core$String** $tmp823 = &param1->name;
frost$core$String* $tmp824 = *$tmp823;
frost$core$Bit $tmp825 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp824, &$s826);
bool $tmp827 = $tmp825.value;
if ($tmp827) goto block35; else goto block36;
block35:;
// line 214
frost$io$IndentedOutputStream** $tmp828 = &param0->types;
frost$io$IndentedOutputStream* $tmp829 = *$tmp828;
$fn831 $tmp830 = ($fn831) ((frost$io$OutputStream*) $tmp829)->$class->vtable[19];
frost$core$Error* $tmp832 = $tmp830(((frost$io$OutputStream*) $tmp829), &$s833);
// try error check
if ($tmp832 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local0) = $tmp832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing REF($692:frost.core.Error?)
frost$io$File* $tmp834 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp835 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing REF($692:frost.core.Error?)
// line 215
frost$io$IndentedOutputStream** $tmp836 = &param0->types;
frost$io$IndentedOutputStream* $tmp837 = *$tmp836;
$fn839 $tmp838 = ($fn839) ((frost$io$OutputStream*) $tmp837)->$class->vtable[19];
frost$core$Error* $tmp840 = $tmp838(((frost$io$OutputStream*) $tmp837), &$s841);
// try error check
if ($tmp840 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local0) = $tmp840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing REF($721:frost.core.Error?)
frost$io$File* $tmp842 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing REF($721:frost.core.Error?)
goto block36;
block36:;
// line 217
frost$io$IndentedOutputStream** $tmp844 = &param0->types;
frost$io$IndentedOutputStream* $tmp845 = *$tmp844;
frost$core$Int64* $tmp846 = &$tmp845->level;
frost$core$Int64 $tmp847 = *$tmp846;
frost$core$Int64 $tmp848 = (frost$core$Int64) {1};
int64_t $tmp849 = $tmp847.value;
int64_t $tmp850 = $tmp848.value;
int64_t $tmp851 = $tmp849 - $tmp850;
frost$core$Int64 $tmp852 = (frost$core$Int64) {$tmp851};
frost$core$Int64* $tmp853 = &$tmp845->level;
*$tmp853 = $tmp852;
// line 218
frost$io$IndentedOutputStream** $tmp854 = &param0->types;
frost$io$IndentedOutputStream* $tmp855 = *$tmp854;
frost$core$String** $tmp856 = &param1->name;
frost$core$String* $tmp857 = *$tmp856;
frost$core$String* $tmp858 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp857);
frost$core$String* $tmp859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s860, $tmp858);
frost$core$String* $tmp861 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp859, &$s862);
$fn864 $tmp863 = ($fn864) ((frost$io$OutputStream*) $tmp855)->$class->vtable[19];
frost$core$Error* $tmp865 = $tmp863(((frost$io$OutputStream*) $tmp855), $tmp861);
// try error check
if ($tmp865 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local0) = $tmp865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// unreffing REF($768:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing REF($766:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($765:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// unreffing REF($764:frost.core.String)
frost$io$File* $tmp866 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp867 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// unreffing REF($768:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing REF($766:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($765:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// unreffing REF($764:frost.core.String)
// line 219
frost$io$IndentedOutputStream** $tmp868 = &param0->types;
frost$io$IndentedOutputStream* $tmp869 = *$tmp868;
$fn871 $tmp870 = ($fn871) ((frost$io$OutputStream*) $tmp869)->$class->vtable[19];
frost$core$Error* $tmp872 = $tmp870(((frost$io$OutputStream*) $tmp869), &$s873);
// try error check
if ($tmp872 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local0) = $tmp872;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($815:frost.core.Error?)
frost$io$File* $tmp874 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp875 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($815:frost.core.Error?)
// line 220
frost$io$IndentedOutputStream** $tmp876 = &param0->types;
frost$io$IndentedOutputStream* $tmp877 = *$tmp876;
org$frostlang$frostc$Type* $tmp878 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp879 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp878);
frost$core$String* $tmp880 = frost$core$String$convert$R$frost$core$String($tmp879);
frost$core$String* $tmp881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp880, &$s882);
org$frostlang$frostc$Type* $tmp883 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp884 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp883);
frost$core$String* $tmp885 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp881, $tmp884);
frost$core$String* $tmp886 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp885, &$s887);
frost$core$String* $tmp888 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s889, $tmp886);
frost$core$Weak** $tmp890 = &param0->compiler;
frost$core$Weak* $tmp891 = *$tmp890;
frost$core$Object* $tmp892 = frost$core$Weak$get$R$frost$core$Weak$T($tmp891);
frost$core$Bit $tmp893 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp892) != NULL);
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp895 = (frost$core$Int64) {222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s896, $tmp895, &$s897);
abort(); // unreachable
block45:;
frost$collections$ListView* $tmp898 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp892), param1);
ITable* $tmp899 = ((frost$collections$CollectionView*) $tmp898)->$class->itable;
while ($tmp899->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp899 = $tmp899->next;
}
$fn901 $tmp900 = $tmp899->methods[0];
frost$core$Int64 $tmp902 = $tmp900(((frost$collections$CollectionView*) $tmp898));
frost$core$Int64$wrapper* $tmp903;
$tmp903 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp903->value = $tmp902;
frost$core$String* $tmp904 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s905, ((frost$core$Object*) $tmp903));
frost$core$String* $tmp906 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp904, &$s907);
frost$core$String* $tmp908 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp888, $tmp906);
frost$core$String** $tmp909 = &param1->name;
frost$core$String* $tmp910 = *$tmp909;
frost$core$String* $tmp911 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp910);
frost$core$String* $tmp912 = frost$core$String$convert$R$frost$core$String($tmp911);
frost$core$String* $tmp913 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp912, &$s914);
frost$core$String* $tmp915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp908, $tmp913);
$fn917 $tmp916 = ($fn917) ((frost$io$OutputStream*) $tmp877)->$class->vtable[19];
frost$core$Error* $tmp918 = $tmp916(((frost$io$OutputStream*) $tmp877), $tmp915);
// try error check
if ($tmp918 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local0) = $tmp918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
// unreffing REF($880:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing REF($878:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($877:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($876:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// unreffing REF($875:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing REF($872:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// unreffing REF($871:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// unreffing REF($870:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing REF($869:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// unreffing REF($865:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp892);
// unreffing REF($855:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing REF($851:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing REF($850:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($849:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($848:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($847:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($846:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing REF($845:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing REF($844:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// unreffing REF($843:org.frostlang.frostc.Type)
frost$io$File* $tmp919 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp920 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
// unreffing REF($880:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing REF($878:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($877:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($876:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// unreffing REF($875:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing REF($872:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// unreffing REF($871:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// unreffing REF($870:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing REF($869:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// unreffing REF($865:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp892);
// unreffing REF($855:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing REF($851:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing REF($850:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($849:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($848:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($847:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($846:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing REF($845:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing REF($844:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// unreffing REF($843:org.frostlang.frostc.Type)
// line 224
frost$io$IndentedOutputStream** $tmp921 = &param0->types;
frost$io$IndentedOutputStream* $tmp922 = *$tmp921;
frost$core$String** $tmp923 = &param1->name;
frost$core$String* $tmp924 = *$tmp923;
frost$core$String* $tmp925 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp924);
frost$core$String* $tmp926 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s927, $tmp925);
frost$core$String* $tmp928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp926, &$s929);
frost$core$String** $tmp930 = &param1->name;
frost$core$String* $tmp931 = *$tmp930;
frost$core$String* $tmp932 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp931);
frost$core$String* $tmp933 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp928, $tmp932);
frost$core$String* $tmp934 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp933, &$s935);
$fn937 $tmp936 = ($fn937) ((frost$io$OutputStream*) $tmp922)->$class->vtable[19];
frost$core$Error* $tmp938 = $tmp936(((frost$io$OutputStream*) $tmp922), $tmp934);
// try error check
if ($tmp938 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local0) = $tmp938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// unreffing REF($1033:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($1031:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing REF($1030:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($1029:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing REF($1026:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing REF($1025:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing REF($1024:frost.core.String)
frost$io$File* $tmp939 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp940 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// unreffing REF($1033:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($1031:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing REF($1030:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($1029:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing REF($1026:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing REF($1025:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing REF($1024:frost.core.String)
// line 225
frost$core$Weak** $tmp941 = &param0->compiler;
frost$core$Weak* $tmp942 = *$tmp941;
frost$core$Object* $tmp943 = frost$core$Weak$get$R$frost$core$Weak$T($tmp942);
frost$core$Bit $tmp944 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp943) != NULL);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp946 = (frost$core$Int64) {225};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s947, $tmp946, &$s948);
abort(); // unreachable
block53:;
frost$core$Bit $tmp949 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp943), param1);
bool $tmp950 = $tmp949.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp943);
// unreffing REF($1097:frost.core.Weak.T)
if ($tmp950) goto block51; else goto block52;
block51:;
// line 226
frost$io$IndentedOutputStream** $tmp951 = &param0->types;
frost$io$IndentedOutputStream* $tmp952 = *$tmp951;
frost$core$String** $tmp953 = &param1->name;
frost$core$String* $tmp954 = *$tmp953;
frost$core$String* $tmp955 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp954);
frost$core$String* $tmp956 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s957, $tmp955);
frost$core$String* $tmp958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp956, &$s959);
$fn961 $tmp960 = ($fn961) ((frost$io$OutputStream*) $tmp952)->$class->vtable[19];
frost$core$Error* $tmp962 = $tmp960(((frost$io$OutputStream*) $tmp952), $tmp958);
// try error check
if ($tmp962 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local0) = $tmp962;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
// unreffing REF($1124:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($1122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($1121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// unreffing REF($1120:frost.core.String)
frost$io$File* $tmp963 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp964 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
// unreffing REF($1124:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($1122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($1121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// unreffing REF($1120:frost.core.String)
// line 227
frost$io$IndentedOutputStream** $tmp965 = &param0->types;
frost$io$IndentedOutputStream* $tmp966 = *$tmp965;
frost$core$Int64* $tmp967 = &$tmp966->level;
frost$core$Int64 $tmp968 = *$tmp967;
frost$core$Int64 $tmp969 = (frost$core$Int64) {1};
int64_t $tmp970 = $tmp968.value;
int64_t $tmp971 = $tmp969.value;
int64_t $tmp972 = $tmp970 + $tmp971;
frost$core$Int64 $tmp973 = (frost$core$Int64) {$tmp972};
frost$core$Int64* $tmp974 = &$tmp966->level;
*$tmp974 = $tmp973;
// line 228
frost$io$IndentedOutputStream** $tmp975 = &param0->types;
frost$io$IndentedOutputStream* $tmp976 = *$tmp975;
$fn978 $tmp977 = ($fn978) ((frost$io$OutputStream*) $tmp976)->$class->vtable[19];
frost$core$Error* $tmp979 = $tmp977(((frost$io$OutputStream*) $tmp976), &$s980);
// try error check
if ($tmp979 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local0) = $tmp979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// unreffing REF($1183:frost.core.Error?)
frost$io$File* $tmp981 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp982 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// unreffing REF($1183:frost.core.Error?)
// line 229
frost$io$IndentedOutputStream** $tmp983 = &param0->types;
frost$io$IndentedOutputStream* $tmp984 = *$tmp983;
$fn986 $tmp985 = ($fn986) ((frost$io$OutputStream*) $tmp984)->$class->vtable[19];
frost$core$Error* $tmp987 = $tmp985(((frost$io$OutputStream*) $tmp984), &$s988);
// try error check
if ($tmp987 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local0) = $tmp987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing REF($1212:frost.core.Error?)
frost$io$File* $tmp989 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp990 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing REF($1212:frost.core.Error?)
// line 230
frost$io$IndentedOutputStream** $tmp991 = &param0->types;
frost$io$IndentedOutputStream* $tmp992 = *$tmp991;
org$frostlang$frostc$Type** $tmp993 = &param1->type;
org$frostlang$frostc$Type* $tmp994 = *$tmp993;
frost$core$String* $tmp995 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp994);
frost$core$String* $tmp996 = frost$core$String$convert$R$frost$core$String($tmp995);
frost$core$String* $tmp997 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp996, &$s998);
$fn1000 $tmp999 = ($fn1000) ((frost$io$OutputStream*) $tmp992)->$class->vtable[19];
frost$core$Error* $tmp1001 = $tmp999(((frost$io$OutputStream*) $tmp992), $tmp997);
// try error check
if ($tmp1001 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local0) = $tmp1001;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing REF($1246:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing REF($1244:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing REF($1243:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// unreffing REF($1242:frost.core.String)
frost$io$File* $tmp1002 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1003 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing REF($1246:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing REF($1244:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing REF($1243:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// unreffing REF($1242:frost.core.String)
// line 231
frost$io$IndentedOutputStream** $tmp1004 = &param0->types;
frost$io$IndentedOutputStream* $tmp1005 = *$tmp1004;
frost$core$Int64* $tmp1006 = &$tmp1005->level;
frost$core$Int64 $tmp1007 = *$tmp1006;
frost$core$Int64 $tmp1008 = (frost$core$Int64) {1};
int64_t $tmp1009 = $tmp1007.value;
int64_t $tmp1010 = $tmp1008.value;
int64_t $tmp1011 = $tmp1009 - $tmp1010;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {$tmp1011};
frost$core$Int64* $tmp1013 = &$tmp1005->level;
*$tmp1013 = $tmp1012;
// line 232
frost$io$IndentedOutputStream** $tmp1014 = &param0->types;
frost$io$IndentedOutputStream* $tmp1015 = *$tmp1014;
frost$core$String** $tmp1016 = &param1->name;
frost$core$String* $tmp1017 = *$tmp1016;
frost$core$String* $tmp1018 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1017);
frost$core$String* $tmp1019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1020, $tmp1018);
frost$core$String* $tmp1021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1019, &$s1022);
$fn1024 $tmp1023 = ($fn1024) ((frost$io$OutputStream*) $tmp1015)->$class->vtable[19];
frost$core$Error* $tmp1025 = $tmp1023(((frost$io$OutputStream*) $tmp1015), $tmp1021);
// try error check
if ($tmp1025 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local0) = $tmp1025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing REF($1310:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing REF($1308:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing REF($1307:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($1306:frost.core.String)
frost$io$File* $tmp1026 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing REF($1310:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing REF($1308:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing REF($1307:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($1306:frost.core.String)
// line 233
frost$io$IndentedOutputStream** $tmp1028 = &param0->types;
frost$io$IndentedOutputStream* $tmp1029 = *$tmp1028;
frost$core$String** $tmp1030 = &param1->name;
frost$core$String* $tmp1031 = *$tmp1030;
frost$core$String* $tmp1032 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1031);
frost$core$String* $tmp1033 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1034, $tmp1032);
frost$core$String* $tmp1035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1033, &$s1036);
$fn1038 $tmp1037 = ($fn1038) ((frost$io$OutputStream*) $tmp1029)->$class->vtable[19];
frost$core$Error* $tmp1039 = $tmp1037(((frost$io$OutputStream*) $tmp1029), $tmp1035);
// try error check
if ($tmp1039 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local0) = $tmp1039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
// unreffing REF($1362:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing REF($1360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing REF($1359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing REF($1358:frost.core.String)
frost$io$File* $tmp1040 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1041 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
// unreffing REF($1362:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing REF($1360:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing REF($1359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing REF($1358:frost.core.String)
// line 234
frost$io$IndentedOutputStream** $tmp1042 = &param0->types;
frost$io$IndentedOutputStream* $tmp1043 = *$tmp1042;
frost$core$Int64* $tmp1044 = &$tmp1043->level;
frost$core$Int64 $tmp1045 = *$tmp1044;
frost$core$Int64 $tmp1046 = (frost$core$Int64) {1};
int64_t $tmp1047 = $tmp1045.value;
int64_t $tmp1048 = $tmp1046.value;
int64_t $tmp1049 = $tmp1047 + $tmp1048;
frost$core$Int64 $tmp1050 = (frost$core$Int64) {$tmp1049};
frost$core$Int64* $tmp1051 = &$tmp1043->level;
*$tmp1051 = $tmp1050;
// line 235
frost$io$IndentedOutputStream** $tmp1052 = &param0->types;
frost$io$IndentedOutputStream* $tmp1053 = *$tmp1052;
frost$core$String** $tmp1054 = &param1->name;
frost$core$String* $tmp1055 = *$tmp1054;
frost$core$String* $tmp1056 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1055);
frost$core$String* $tmp1057 = frost$core$String$convert$R$frost$core$String($tmp1056);
frost$core$String* $tmp1058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1057, &$s1059);
$fn1061 $tmp1060 = ($fn1061) ((frost$io$OutputStream*) $tmp1053)->$class->vtable[19];
frost$core$Error* $tmp1062 = $tmp1060(((frost$io$OutputStream*) $tmp1053), $tmp1058);
// try error check
if ($tmp1062 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local0) = $tmp1062;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
// unreffing REF($1426:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing REF($1424:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing REF($1423:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing REF($1422:frost.core.String)
frost$io$File* $tmp1063 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1064 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
// unreffing REF($1426:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing REF($1424:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing REF($1423:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing REF($1422:frost.core.String)
// line 236
frost$io$IndentedOutputStream** $tmp1065 = &param0->types;
frost$io$IndentedOutputStream* $tmp1066 = *$tmp1065;
$fn1068 $tmp1067 = ($fn1068) ((frost$io$OutputStream*) $tmp1066)->$class->vtable[19];
frost$core$Error* $tmp1069 = $tmp1067(((frost$io$OutputStream*) $tmp1066), &$s1070);
// try error check
if ($tmp1069 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
*(&local0) = $tmp1069;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// unreffing REF($1473:frost.core.Error?)
frost$io$File* $tmp1071 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1072 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// unreffing REF($1473:frost.core.Error?)
// line 237
frost$io$IndentedOutputStream** $tmp1073 = &param0->types;
frost$io$IndentedOutputStream* $tmp1074 = *$tmp1073;
frost$core$Int64* $tmp1075 = &$tmp1074->level;
frost$core$Int64 $tmp1076 = *$tmp1075;
frost$core$Int64 $tmp1077 = (frost$core$Int64) {1};
int64_t $tmp1078 = $tmp1076.value;
int64_t $tmp1079 = $tmp1077.value;
int64_t $tmp1080 = $tmp1078 - $tmp1079;
frost$core$Int64 $tmp1081 = (frost$core$Int64) {$tmp1080};
frost$core$Int64* $tmp1082 = &$tmp1074->level;
*$tmp1082 = $tmp1081;
// line 238
frost$io$IndentedOutputStream** $tmp1083 = &param0->types;
frost$io$IndentedOutputStream* $tmp1084 = *$tmp1083;
frost$core$String** $tmp1085 = &param1->name;
frost$core$String* $tmp1086 = *$tmp1085;
frost$core$String* $tmp1087 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1086);
frost$core$String* $tmp1088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1089, $tmp1087);
frost$core$String* $tmp1090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1088, &$s1091);
$fn1093 $tmp1092 = ($fn1093) ((frost$io$OutputStream*) $tmp1084)->$class->vtable[19];
frost$core$Error* $tmp1094 = $tmp1092(((frost$io$OutputStream*) $tmp1084), $tmp1090);
// try error check
if ($tmp1094 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local0) = $tmp1094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
// unreffing REF($1519:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
// unreffing REF($1517:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// unreffing REF($1516:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// unreffing REF($1515:frost.core.String)
frost$io$File* $tmp1095 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1096 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
// unreffing REF($1519:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
// unreffing REF($1517:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// unreffing REF($1516:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// unreffing REF($1515:frost.core.String)
// line 239
frost$core$Weak** $tmp1097 = &param0->compiler;
frost$core$Weak* $tmp1098 = *$tmp1097;
frost$core$Object* $tmp1099 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1098);
frost$core$Bit $tmp1100 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1099) != NULL);
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp1102 = (frost$core$Int64) {239};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1103, $tmp1102, &$s1104);
abort(); // unreachable
block73:;
org$frostlang$frostc$Type* $tmp1105 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp1106 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1099), $tmp1105);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$ClassDecl* $tmp1107 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local4) = $tmp1106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
// unreffing REF($1576:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
// unreffing REF($1575:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1099);
// unreffing REF($1565:frost.core.Weak.T)
// line 240
frost$core$Weak** $tmp1108 = &param0->compiler;
frost$core$Weak* $tmp1109 = *$tmp1108;
frost$core$Object* $tmp1110 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1109);
frost$core$Bit $tmp1111 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1110) != NULL);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp1113 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1114, $tmp1113, &$s1115);
abort(); // unreachable
block75:;
org$frostlang$frostc$ClassDecl* $tmp1116 = *(&local4);
frost$core$Bit $tmp1117 = frost$core$Bit$init$builtin_bit($tmp1116 != NULL);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1120, $tmp1119, &$s1121);
abort(); // unreachable
block77:;
frost$collections$ListView* $tmp1122 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1110), $tmp1116);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$collections$ListView* $tmp1123 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
*(&local5) = $tmp1122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// unreffing REF($1616:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1110);
// unreffing REF($1597:frost.core.Weak.T)
// line 241
frost$io$IndentedOutputStream** $tmp1124 = &param0->types;
frost$io$IndentedOutputStream* $tmp1125 = *$tmp1124;
frost$collections$ListView* $tmp1126 = *(&local5);
ITable* $tmp1127 = ((frost$collections$CollectionView*) $tmp1126)->$class->itable;
while ($tmp1127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1127 = $tmp1127->next;
}
$fn1129 $tmp1128 = $tmp1127->methods[0];
frost$core$Int64 $tmp1130 = $tmp1128(((frost$collections$CollectionView*) $tmp1126));
frost$core$Int64$wrapper* $tmp1131;
$tmp1131 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1131->value = $tmp1130;
frost$core$String* $tmp1132 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1133, ((frost$core$Object*) $tmp1131));
frost$core$String* $tmp1134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1132, &$s1135);
frost$core$String* $tmp1136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1137, $tmp1134);
frost$core$String** $tmp1138 = &param1->name;
frost$core$String* $tmp1139 = *$tmp1138;
frost$core$String* $tmp1140 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1139);
frost$core$String* $tmp1141 = frost$core$String$convert$R$frost$core$String($tmp1140);
frost$core$String* $tmp1142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1141, &$s1143);
frost$core$String* $tmp1144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1136, $tmp1142);
$fn1146 $tmp1145 = ($fn1146) ((frost$io$OutputStream*) $tmp1125)->$class->vtable[19];
frost$core$Error* $tmp1147 = $tmp1145(((frost$io$OutputStream*) $tmp1125), $tmp1144);
// try error check
if ($tmp1147 == NULL) goto block79; else goto block80;
block80:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local0) = $tmp1147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// unreffing REF($1649:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// unreffing REF($1647:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
// unreffing REF($1646:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// unreffing REF($1645:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
// unreffing REF($1644:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing REF($1641:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($1640:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($1639:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// unreffing REF($1638:frost.core.Object)
frost$collections$ListView* $tmp1148 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1149 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1150 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1151 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// unreffing REF($1649:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// unreffing REF($1647:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
// unreffing REF($1646:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// unreffing REF($1645:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
// unreffing REF($1644:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing REF($1641:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($1640:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($1639:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// unreffing REF($1638:frost.core.Object)
// line 245
frost$io$IndentedOutputStream** $tmp1152 = &param0->types;
frost$io$IndentedOutputStream* $tmp1153 = *$tmp1152;
frost$core$String** $tmp1154 = &param1->name;
frost$core$String* $tmp1155 = *$tmp1154;
frost$core$String* $tmp1156 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1155);
frost$core$String* $tmp1157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1158, $tmp1156);
frost$core$String* $tmp1159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1157, &$s1160);
frost$core$String** $tmp1161 = &param1->name;
frost$core$String* $tmp1162 = *$tmp1161;
frost$core$String* $tmp1163 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1162);
frost$core$String* $tmp1164 = frost$core$String$convert$R$frost$core$String($tmp1163);
frost$core$String* $tmp1165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1164, &$s1166);
frost$core$String* $tmp1167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1159, $tmp1165);
$fn1169 $tmp1168 = ($fn1169) ((frost$io$OutputStream*) $tmp1153)->$class->vtable[19];
frost$core$Error* $tmp1170 = $tmp1168(((frost$io$OutputStream*) $tmp1153), $tmp1167);
// try error check
if ($tmp1170 == NULL) goto block81; else goto block82;
block82:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local0) = $tmp1170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
// unreffing REF($1747:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// unreffing REF($1745:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
// unreffing REF($1744:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// unreffing REF($1743:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
// unreffing REF($1742:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing REF($1739:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing REF($1738:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// unreffing REF($1737:frost.core.String)
frost$collections$ListView* $tmp1171 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1172 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$io$File* $tmp1173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1174 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block81:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
// unreffing REF($1747:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// unreffing REF($1745:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
// unreffing REF($1744:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// unreffing REF($1743:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
// unreffing REF($1742:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing REF($1739:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing REF($1738:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// unreffing REF($1737:frost.core.String)
frost$collections$ListView* $tmp1175 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// unreffing valueVTable
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1176 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing value
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block52;
block52:;
frost$io$File* $tmp1177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing typesPath
*(&local2) = ((frost$io$File*) NULL);
frost$io$File* $tmp1178 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
// unreffing path
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 250
frost$core$Weak** $tmp1179 = &param0->compiler;
frost$core$Weak* $tmp1180 = *$tmp1179;
frost$core$Object* $tmp1181 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1180);
frost$core$Bit $tmp1182 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1181) != NULL);
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp1184 = (frost$core$Int64) {250};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1185, $tmp1184, &$s1186);
abort(); // unreachable
block83:;
org$frostlang$frostc$Position* $tmp1187 = &param1->position;
org$frostlang$frostc$Position $tmp1188 = *$tmp1187;
frost$core$Error* $tmp1189 = *(&local0);
frost$core$String** $tmp1190 = &$tmp1189->message;
frost$core$String* $tmp1191 = *$tmp1190;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1181), $tmp1188, $tmp1191);
frost$core$Frost$unref$frost$core$Object$Q($tmp1181);
// unreffing REF($1849:frost.core.Weak.T)
goto block2;
block2:;
frost$core$Error* $tmp1192 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
// line 255
frost$core$Weak** $tmp1193 = &param1->owner;
frost$core$Weak* $tmp1194 = *$tmp1193;
frost$core$Object* $tmp1195 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1194);
org$frostlang$frostc$Type** $tmp1196 = &((org$frostlang$frostc$ClassDecl*) $tmp1195)->type;
org$frostlang$frostc$Type* $tmp1197 = *$tmp1196;
frost$core$String* $tmp1198 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1197);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$String* $tmp1199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
*(&local0) = $tmp1198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1195);
// unreffing REF($4:frost.core.Weak.T)
// line 256
org$frostlang$frostc$MethodDecl$Kind* $tmp1200 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1201 = *$tmp1200;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1202;
$tmp1202 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1202->value = $tmp1201;
frost$core$Int64 $tmp1203 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1204 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1203);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1205;
$tmp1205 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1205->value = $tmp1204;
ITable* $tmp1206 = ((frost$core$Equatable*) $tmp1202)->$class->itable;
while ($tmp1206->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1206 = $tmp1206->next;
}
$fn1208 $tmp1207 = $tmp1206->methods[0];
frost$core$Bit $tmp1209 = $tmp1207(((frost$core$Equatable*) $tmp1202), ((frost$core$Equatable*) $tmp1205));
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block3; else goto block4;
block3:;
frost$core$String* $tmp1211 = *(&local0);
frost$core$Bit $tmp1212 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1211, &$s1213);
frost$core$Bit $tmp1214 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1212);
*(&local1) = $tmp1214;
goto block5;
block4:;
*(&local1) = $tmp1209;
goto block5;
block5:;
frost$core$Bit $tmp1215 = *(&local1);
bool $tmp1216 = $tmp1215.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1205)));
// unreffing REF($29:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1202)));
// unreffing REF($25:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1216) goto block1; else goto block2;
block1:;
// line 257
frost$core$String* $tmp1217 = *(&local0);
frost$core$String* $tmp1218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1217, &$s1219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
// unreffing REF($52:frost.core.String)
frost$core$String* $tmp1220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1218;
block2:;
// line 259
frost$core$String* $tmp1221 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$String* $tmp1222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp1221;

}
frost$core$Bit org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$HCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// line 279
org$frostlang$frostc$Type** $tmp1223 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1224 = *$tmp1223;
frost$core$Bit $tmp1225 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1224);
frost$core$Bit $tmp1226 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1225);
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block1; else goto block2;
block1:;
// line 280
frost$core$Bit $tmp1228 = frost$core$Bit$init$builtin_bit(false);
return $tmp1228;
block2:;
// line 282
org$frostlang$frostc$Annotations** $tmp1229 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1230 = *$tmp1229;
frost$core$Bit $tmp1231 = org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit($tmp1230);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Type** $tmp1233 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1234 = *$tmp1233;
frost$core$Bit $tmp1235 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1234);
*(&local1) = $tmp1235;
goto block5;
block4:;
*(&local1) = $tmp1231;
goto block5;
block5:;
frost$core$Bit $tmp1236 = *(&local1);
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block6; else goto block7;
block6:;
frost$core$Weak** $tmp1238 = &param0->compiler;
frost$core$Weak* $tmp1239 = *$tmp1238;
frost$core$Object* $tmp1240 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1239);
frost$core$Bit $tmp1241 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1240) != NULL);
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1243 = (frost$core$Int64) {283};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1244, $tmp1243, &$s1245);
abort(); // unreachable
block9:;
frost$core$Weak** $tmp1246 = &param0->compiler;
frost$core$Weak* $tmp1247 = *$tmp1246;
frost$core$Object* $tmp1248 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1247);
frost$core$Bit $tmp1249 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1248) != NULL);
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {283};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1252, $tmp1251, &$s1253);
abort(); // unreachable
block11:;
org$frostlang$frostc$Type** $tmp1254 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1255 = *$tmp1254;
org$frostlang$frostc$ClassDecl* $tmp1256 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1248), $tmp1255);
frost$core$Bit $tmp1257 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1240), $tmp1256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// unreffing REF($54:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1248);
// unreffing REF($42:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1240);
// unreffing REF($29:frost.core.Weak.T)
*(&local0) = $tmp1257;
goto block8;
block7:;
*(&local0) = $tmp1236;
goto block8;
block8:;
frost$core$Bit $tmp1258 = *(&local0);
*(&local2) = $tmp1258;
// line 288
frost$core$Bit $tmp1259 = *(&local2);
frost$core$Bit $tmp1260 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1259);
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block13; else goto block14;
block13:;
*(&local3) = $tmp1260;
goto block15;
block14:;
org$frostlang$frostc$Annotations** $tmp1262 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1263 = *$tmp1262;
frost$core$Bit $tmp1264 = org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit($tmp1263);
frost$core$Bit $tmp1265 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1264);
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Annotations** $tmp1267 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1268 = *$tmp1267;
frost$core$Bit $tmp1269 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1268);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block19; else goto block20;
block19:;
*(&local5) = $tmp1269;
goto block21;
block20:;
org$frostlang$frostc$Annotations** $tmp1271 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1272 = *$tmp1271;
frost$core$Bit $tmp1273 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1272);
*(&local5) = $tmp1273;
goto block21;
block21:;
frost$core$Bit $tmp1274 = *(&local5);
*(&local4) = $tmp1274;
goto block18;
block17:;
*(&local4) = $tmp1265;
goto block18;
block18:;
frost$core$Bit $tmp1275 = *(&local4);
*(&local3) = $tmp1275;
goto block15;
block15:;
frost$core$Bit $tmp1276 = *(&local3);
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1278 = (frost$core$Int64) {288};
frost$core$String* $tmp1279 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$String* $tmp1280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1281, $tmp1279);
frost$core$String* $tmp1282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1280, &$s1283);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1284, $tmp1278, $tmp1282);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
// unreffing REF($110:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
// unreffing REF($109:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// unreffing REF($108:frost.core.String)
abort(); // unreachable
block22:;
// line 290
frost$core$Bit $tmp1285 = *(&local2);
return $tmp1285;

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
frost$io$MemoryOutputStream** $tmp1286 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1287 = *$tmp1286;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$io$MemoryOutputStream** $tmp1288 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1289 = *$tmp1288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$io$MemoryOutputStream** $tmp1290 = &param0->importStream;
*$tmp1290 = $tmp1287;
// line 297
frost$collections$HashSet** $tmp1291 = &param0->bodyImports;
frost$collections$HashSet* $tmp1292 = *$tmp1291;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$collections$HashSet** $tmp1293 = &param0->imports;
frost$collections$HashSet* $tmp1294 = *$tmp1293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
frost$collections$HashSet** $tmp1295 = &param0->imports;
*$tmp1295 = $tmp1292;
// line 298
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1296));
frost$core$String* $tmp1297 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local1) = &$s1298;
// line 299
frost$core$Bit $tmp1299 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block3; else goto block5;
block3:;
// line 300
frost$io$IndentedOutputStream** $tmp1301 = &param0->body;
frost$io$IndentedOutputStream* $tmp1302 = *$tmp1301;
frost$core$String* $tmp1303 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1305, $tmp1303);
frost$core$String* $tmp1306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1304, &$s1307);
org$frostlang$frostc$Type** $tmp1308 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1309 = *$tmp1308;
frost$core$String* $tmp1310 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1309);
frost$core$String* $tmp1311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1306, $tmp1310);
frost$core$String* $tmp1312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1311, &$s1313);
$fn1315 $tmp1314 = ($fn1315) ((frost$io$OutputStream*) $tmp1302)->$class->vtable[17];
frost$core$Error* $tmp1316 = $tmp1314(((frost$io$OutputStream*) $tmp1302), $tmp1312);
// try error check
if ($tmp1316 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local0) = $tmp1316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
// unreffing REF($49:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// unreffing REF($42:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
// unreffing REF($40:frost.core.String)
frost$core$String* $tmp1317 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
// unreffing REF($49:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// unreffing REF($42:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
// unreffing REF($40:frost.core.String)
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1318));
frost$core$String* $tmp1319 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local1) = &$s1320;
goto block4;
block5:;
// line 1
// line 304
frost$io$IndentedOutputStream** $tmp1321 = &param0->body;
frost$io$IndentedOutputStream* $tmp1322 = *$tmp1321;
org$frostlang$frostc$Type** $tmp1323 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1324 = *$tmp1323;
frost$core$String* $tmp1325 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1324);
frost$core$String* $tmp1326 = frost$core$String$convert$R$frost$core$String($tmp1325);
frost$core$String* $tmp1327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1326, &$s1328);
frost$core$String* $tmp1329 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1330 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1327, $tmp1329);
frost$core$String* $tmp1331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1330, &$s1332);
$fn1334 $tmp1333 = ($fn1334) ((frost$io$OutputStream*) $tmp1322)->$class->vtable[17];
frost$core$Error* $tmp1335 = $tmp1333(((frost$io$OutputStream*) $tmp1322), $tmp1331);
// try error check
if ($tmp1335 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local0) = $tmp1335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
// unreffing REF($126:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// unreffing REF($124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing REF($123:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing REF($120:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// unreffing REF($119:frost.core.String)
frost$core$String* $tmp1336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
// unreffing REF($126:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// unreffing REF($124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing REF($123:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing REF($120:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// unreffing REF($119:frost.core.String)
goto block4;
block4:;
// line 306
org$frostlang$frostc$Annotations** $tmp1337 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1338 = *$tmp1337;
frost$core$Bit $tmp1339 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1338);
frost$core$Bit $tmp1340 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1339);
bool $tmp1341 = $tmp1340.value;
if ($tmp1341) goto block12; else goto block13;
block12:;
frost$core$Weak** $tmp1342 = &param0->compiler;
frost$core$Weak* $tmp1343 = *$tmp1342;
frost$core$Object* $tmp1344 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1343);
frost$core$Bit $tmp1345 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Compiler*) $tmp1344) != NULL);
bool $tmp1346 = $tmp1345.value;
if ($tmp1346) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1347 = (frost$core$Int64) {306};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1348, $tmp1347, &$s1349);
abort(); // unreachable
block15:;
frost$core$Bit $tmp1350 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1344), param1);
frost$core$Bit $tmp1351 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1350);
frost$core$Frost$unref$frost$core$Object$Q($tmp1344);
// unreffing REF($192:frost.core.Weak.T)
*(&local2) = $tmp1351;
goto block14;
block13:;
*(&local2) = $tmp1340;
goto block14;
block14:;
frost$core$Bit $tmp1352 = *(&local2);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block10; else goto block11;
block10:;
// line 307
frost$io$IndentedOutputStream** $tmp1354 = &param0->body;
frost$io$IndentedOutputStream* $tmp1355 = *$tmp1354;
frost$core$String* $tmp1356 = *(&local1);
frost$core$String* $tmp1357 = frost$core$String$convert$R$frost$core$String($tmp1356);
frost$core$String* $tmp1358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1357, &$s1359);
frost$core$String* $tmp1360 = org$frostlang$frostc$HCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1358, $tmp1360);
frost$core$String* $tmp1362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1361, &$s1363);
$fn1365 $tmp1364 = ($fn1365) ((frost$io$OutputStream*) $tmp1355)->$class->vtable[17];
frost$core$Error* $tmp1366 = $tmp1364(((frost$io$OutputStream*) $tmp1355), $tmp1362);
// try error check
if ($tmp1366 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local0) = $tmp1366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
// unreffing REF($225:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
// unreffing REF($223:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
// unreffing REF($222:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing REF($221:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// unreffing REF($220:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
// unreffing REF($219:frost.core.String)
frost$core$String* $tmp1367 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
// unreffing REF($225:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
// unreffing REF($223:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
// unreffing REF($222:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing REF($221:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// unreffing REF($220:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
// unreffing REF($219:frost.core.String)
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1368));
frost$core$String* $tmp1369 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local1) = &$s1370;
goto block11;
block11:;
// line 310
frost$collections$Array** $tmp1371 = &param1->parameters;
frost$collections$Array* $tmp1372 = *$tmp1371;
ITable* $tmp1373 = ((frost$collections$Iterable*) $tmp1372)->$class->itable;
while ($tmp1373->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[0];
frost$collections$Iterator* $tmp1376 = $tmp1374(((frost$collections$Iterable*) $tmp1372));
goto block19;
block19:;
ITable* $tmp1377 = $tmp1376->$class->itable;
while ($tmp1377->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1377 = $tmp1377->next;
}
$fn1379 $tmp1378 = $tmp1377->methods[0];
frost$core$Bit $tmp1380 = $tmp1378($tmp1376);
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block21; else goto block20;
block20:;
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp1382 = $tmp1376->$class->itable;
while ($tmp1382->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1382 = $tmp1382->next;
}
$fn1384 $tmp1383 = $tmp1382->methods[1];
frost$core$Object* $tmp1385 = $tmp1383($tmp1376);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1385)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1386 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1385);
// line 311
org$frostlang$frostc$MethodDecl$Parameter* $tmp1387 = *(&local3);
frost$core$String** $tmp1388 = &$tmp1387->name;
frost$core$String* $tmp1389 = *$tmp1388;
frost$core$String* $tmp1390 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1389);
frost$core$String* $tmp1391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1392, $tmp1390);
frost$core$String* $tmp1393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1391, &$s1394);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
frost$core$String* $tmp1395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
*(&local4) = $tmp1393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
// unreffing REF($313:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
// unreffing REF($312:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
// unreffing REF($311:frost.core.String)
// line 312
frost$io$IndentedOutputStream** $tmp1396 = &param0->body;
frost$io$IndentedOutputStream* $tmp1397 = *$tmp1396;
frost$core$String* $tmp1398 = *(&local1);
frost$core$String* $tmp1399 = frost$core$String$convert$R$frost$core$String($tmp1398);
frost$core$String* $tmp1400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1399, &$s1401);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1402 = *(&local3);
org$frostlang$frostc$Type** $tmp1403 = &$tmp1402->type;
org$frostlang$frostc$Type* $tmp1404 = *$tmp1403;
frost$core$String* $tmp1405 = *(&local4);
frost$core$String* $tmp1406 = org$frostlang$frostc$HCodeGenerator$declaration$org$frostlang$frostc$Type$frost$core$String$R$frost$core$String(param0, $tmp1404, $tmp1405);
frost$core$String* $tmp1407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1400, $tmp1406);
frost$core$String* $tmp1408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1407, &$s1409);
$fn1411 $tmp1410 = ($fn1411) ((frost$io$OutputStream*) $tmp1397)->$class->vtable[17];
frost$core$Error* $tmp1412 = $tmp1410(((frost$io$OutputStream*) $tmp1397), $tmp1408);
// try error check
if ($tmp1412 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local0) = $tmp1412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// unreffing REF($345:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
// unreffing REF($343:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
// unreffing REF($342:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
// unreffing REF($341:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// unreffing REF($336:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
// unreffing REF($335:frost.core.String)
frost$core$String* $tmp1413 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
// unreffing name
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1385);
// unreffing REF($299:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp1414 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
// unreffing p
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing REF($288:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$String* $tmp1415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// unreffing REF($345:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
// unreffing REF($343:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
// unreffing REF($342:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
// unreffing REF($341:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// unreffing REF($336:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
// unreffing REF($335:frost.core.String)
// line 313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1416));
frost$core$String* $tmp1417 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local1) = &$s1418;
frost$core$String* $tmp1419 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing name
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1385);
// unreffing REF($299:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp1420 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
// unreffing p
*(&local3) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing REF($288:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 315
frost$io$IndentedOutputStream** $tmp1421 = &param0->body;
frost$io$IndentedOutputStream* $tmp1422 = *$tmp1421;
$fn1424 $tmp1423 = ($fn1424) ((frost$io$OutputStream*) $tmp1422)->$class->vtable[19];
frost$core$Error* $tmp1425 = $tmp1423(((frost$io$OutputStream*) $tmp1422), &$s1426);
// try error check
if ($tmp1425 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local0) = $tmp1425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
// unreffing REF($439:frost.core.Error?)
frost$core$String* $tmp1427 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
// unreffing REF($439:frost.core.Error?)
frost$core$String* $tmp1428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 318
frost$core$Bit $tmp1429 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1430 = $tmp1429.value;
if ($tmp1430) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1431 = (frost$core$Int64) {318};
frost$core$Error* $tmp1432 = *(&local0);
$fn1434 $tmp1433 = ($fn1434) $tmp1432->$class->vtable[0];
frost$core$String* $tmp1435 = $tmp1433($tmp1432);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1436, $tmp1431, $tmp1435);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
// unreffing REF($471:frost.core.String)
abort(); // unreachable
block26:;
goto block2;
block2:;
frost$core$Error* $tmp1437 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
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
frost$io$IndentedOutputStream** $tmp1438 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1439 = *$tmp1438;
frost$io$MemoryOutputStream** $tmp1440 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1441 = *$tmp1440;
$fn1443 $tmp1442 = ($fn1443) ((frost$io$OutputStream*) $tmp1439)->$class->vtable[20];
frost$core$Error* $tmp1444 = $tmp1442(((frost$io$OutputStream*) $tmp1439), ((frost$core$Object*) $tmp1441));
// try error check
if ($tmp1444 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
*(&local0) = $tmp1444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
// unreffing REF($10:frost.core.Error?)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
// unreffing REF($10:frost.core.Error?)
// line 331
frost$io$IndentedOutputStream** $tmp1445 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1446 = *$tmp1445;
frost$io$MemoryOutputStream** $tmp1447 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1448 = *$tmp1447;
$fn1450 $tmp1449 = ($fn1450) ((frost$io$OutputStream*) $tmp1446)->$class->vtable[20];
frost$core$Error* $tmp1451 = $tmp1449(((frost$io$OutputStream*) $tmp1446), ((frost$core$Object*) $tmp1448));
// try error check
if ($tmp1451 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local0) = $tmp1451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
// unreffing REF($32:frost.core.Error?)
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
// unreffing REF($32:frost.core.Error?)
// line 332
frost$io$IndentedOutputStream** $tmp1452 = &param0->out;
frost$io$IndentedOutputStream* $tmp1453 = *$tmp1452;
frost$io$MemoryOutputStream** $tmp1454 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1455 = *$tmp1454;
$fn1457 $tmp1456 = ($fn1457) ((frost$io$OutputStream*) $tmp1453)->$class->vtable[20];
frost$core$Error* $tmp1458 = $tmp1456(((frost$io$OutputStream*) $tmp1453), ((frost$core$Object*) $tmp1455));
// try error check
if ($tmp1458 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local0) = $tmp1458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing REF($54:frost.core.Error?)
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing REF($54:frost.core.Error?)
// line 333
frost$io$IndentedOutputStream** $tmp1459 = &param0->out;
frost$io$IndentedOutputStream* $tmp1460 = *$tmp1459;
frost$io$MemoryOutputStream** $tmp1461 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1462 = *$tmp1461;
$fn1464 $tmp1463 = ($fn1464) ((frost$io$OutputStream*) $tmp1460)->$class->vtable[20];
frost$core$Error* $tmp1465 = $tmp1463(((frost$io$OutputStream*) $tmp1460), ((frost$core$Object*) $tmp1462));
// try error check
if ($tmp1465 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local0) = $tmp1465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
// unreffing REF($76:frost.core.Error?)
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
// unreffing REF($76:frost.core.Error?)
goto block2;
block1:;
// line 336
frost$core$Error* $tmp1466 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp1466));
// line 337
frost$core$UInt8 $tmp1467 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp1467);
goto block2;
block2:;
frost$core$Error* $tmp1468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
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
frost$core$Weak** $tmp1469 = &param0->compiler;
frost$core$Weak* $tmp1470 = *$tmp1469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$io$MemoryOutputStream** $tmp1471 = &param0->typeImportStream;
frost$io$MemoryOutputStream* $tmp1472 = *$tmp1471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$io$MemoryOutputStream** $tmp1473 = &param0->typesBuffer;
frost$io$MemoryOutputStream* $tmp1474 = *$tmp1473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$io$IndentedOutputStream** $tmp1475 = &param0->types;
frost$io$IndentedOutputStream* $tmp1476 = *$tmp1475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$io$MemoryOutputStream** $tmp1477 = &param0->bodyImportStream;
frost$io$MemoryOutputStream* $tmp1478 = *$tmp1477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$io$MemoryOutputStream** $tmp1479 = &param0->bodyBuffer;
frost$io$MemoryOutputStream* $tmp1480 = *$tmp1479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$io$IndentedOutputStream** $tmp1481 = &param0->body;
frost$io$IndentedOutputStream* $tmp1482 = *$tmp1481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$collections$HashSet** $tmp1483 = &param0->typeImports;
frost$collections$HashSet* $tmp1484 = *$tmp1483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$collections$HashSet** $tmp1485 = &param0->bodyImports;
frost$collections$HashSet* $tmp1486 = *$tmp1485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
frost$collections$HashSet** $tmp1487 = &param0->imports;
frost$collections$HashSet* $tmp1488 = *$tmp1487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
frost$io$MemoryOutputStream** $tmp1489 = &param0->importStream;
frost$io$MemoryOutputStream* $tmp1490 = *$tmp1489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
frost$io$File** $tmp1491 = &param0->outDir;
frost$io$File* $tmp1492 = *$tmp1491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
frost$io$IndentedOutputStream** $tmp1493 = &param0->out;
frost$io$IndentedOutputStream* $tmp1494 = *$tmp1493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$io$IndentedOutputStream** $tmp1495 = &param0->typesOut;
frost$io$IndentedOutputStream* $tmp1496 = *$tmp1495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
org$frostlang$frostc$LLVMCodeGenerator** $tmp1497 = &param0->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp1498 = *$tmp1497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
frost$core$Weak** $tmp1499 = &param0->cCodeGen;
frost$core$Weak* $tmp1500 = *$tmp1499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
org$frostlang$frostc$CCodeGenerator** $tmp1501 = &param0->cCodeGenRetain;
org$frostlang$frostc$CCodeGenerator* $tmp1502 = *$tmp1501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
return;

}

