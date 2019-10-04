#include "org/frostlang/frostc/Interpreter/Context.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Interpreter.h"
#include "org/frostlang/frostc/Interpreter/MethodCode.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Weak.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MemoryLayout.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashKey.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Int32.h"
#include "frost/core/Int8.h"
#include "frost/core/Char8.h"
#include "frost/core/System.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Interpreter$Context$class_type org$frostlang$frostc$Interpreter$Context$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Interpreter$Context$cleanup, org$frostlang$frostc$Interpreter$Context$value$org$frostlang$frostc$IR$Value$R$frost$core$Int64} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$unsafe$Pointer (*$fn5)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$unsafe$Pointer (*$fn11)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn18)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn19)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn20)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn21)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn23)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Object* (*$fn24)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn25)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn26)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn27)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn28)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn29)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn30)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Object* (*$fn31)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn32)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn33)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Object* (*$fn34)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn35)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn36)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Object* (*$fn37)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn38)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn39)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn40)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn64)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn65)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn71)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn91)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn131)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn145)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn159)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn173)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn178)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74", 40, -2545013520635907277, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x24\x63\x6c\x61\x73\x73", 6, 884054518070421605, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x66\x43\x6f\x75\x6e\x74", 8, 8091773242217245961, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x24\x66\x6c\x61\x67\x73", 6, 4174342017609101514, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x61\x74\x61", 4, -8837375942098466299, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5f\x6c\x65\x6e\x67\x74\x68", 7, 4463237941217136266, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x75\x6d\x6d\x79", 5, -5874221191567762533, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x77\x6e\x65\x72", 5, -6443816147932705548, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };

void org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$MethodCode(void* rawSelf, org$frostlang$frostc$Interpreter* param1, org$frostlang$frostc$Interpreter$MethodCode* param2) {
org$frostlang$frostc$Interpreter$Context* param0 = (org$frostlang$frostc$Interpreter$Context*) rawSelf;

frost$core$Int local0;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Weak* _1;
org$frostlang$frostc$Interpreter* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Object* _16;
org$frostlang$frostc$Interpreter$MethodCode** _18;
org$frostlang$frostc$Interpreter$MethodCode* _19;
frost$core$Object* _20;
org$frostlang$frostc$Interpreter$MethodCode** _22;
frost$collections$Array* _25;
frost$collections$Array** _26;
frost$collections$Array* _27;
frost$collections$CollectionView* _28;
$fn2 _29;
frost$core$Int _30;
frost$core$Object* _32;
frost$collections$Array** _34;
frost$collections$Array* _35;
frost$core$Object* _36;
frost$collections$Array** _38;
frost$core$Object* _40;
frost$core$Int _43;
frost$collections$Array** _44;
frost$collections$Array* _45;
frost$collections$CollectionView* _46;
$fn3 _47;
frost$core$Int _48;
frost$core$Bit _49;
frost$core$Range$LTfrost$core$Int$GT _50;
frost$core$Int _51;
frost$core$Int _53;
frost$core$Bit _54;
bool _55;
frost$core$Int _56;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$collections$Array** _71;
frost$collections$Array* _72;
frost$core$Int _73;
frost$core$Int _75;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$collections$CollectionView* _82;
$fn4 _83;
frost$core$Int _84;
int64_t _85;
int64_t _86;
bool _87;
frost$core$Bit _88;
bool _89;
frost$core$Int _91;
frost$unsafe$Pointer* _95;
frost$unsafe$Pointer _96;
int64_t _97;
frost$core$Int64 _98;
int64_t _99;
frost$core$Object* _100;
frost$core$Object* _101;
org$frostlang$frostc$Type* _104;
frost$core$Object* _106;
org$frostlang$frostc$Type* _108;
frost$core$Object* _109;
frost$core$Object* _112;
frost$collections$Array** _115;
frost$collections$Array* _116;
org$frostlang$frostc$Type* _117;
$fn5 _118;
frost$unsafe$Pointer _119;
int64_t _122;
frost$core$Int _123;
frost$core$Object* _125;
frost$core$Object* _127;
org$frostlang$frostc$Type* _129;
frost$core$Object* _130;
frost$core$Int _134;
int64_t _135;
int64_t _136;
int64_t _137;
frost$core$Int _138;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _144;
int64_t _146;
int64_t _147;
bool _148;
frost$core$Bit _149;
bool _150;
int64_t _152;
int64_t _153;
int64_t _154;
frost$core$Int _155;
frost$collections$Array* _159;
frost$core$Object* _161;
frost$collections$Array** _163;
frost$collections$Array* _164;
frost$core$Object* _165;
frost$collections$Array** _167;
frost$core$Object* _169;
frost$collections$Array* _172;
frost$core$Int* _173;
frost$core$Int _174;
frost$core$Int _175;
int64_t _176;
int64_t _177;
int64_t _178;
frost$core$Int _179;
frost$core$Object* _180;
frost$core$Object* _182;
frost$collections$Array** _184;
frost$collections$Array* _185;
frost$core$Object* _186;
frost$collections$Array** _188;
frost$core$Object* _190;
frost$core$Object* _192;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:58
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = param1;
_3 = ((frost$core$Object*) _2);
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->interpreter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->interpreter;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:59
_16 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->code;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->code;
*_22 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:61
_25 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_26 = &param2->locals;
_27 = *_26;
_28 = ((frost$collections$CollectionView*) _27);
ITable* $tmp6 = _28->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_29 = $tmp6->methods[0];
_30 = _29(_28);
frost$collections$Array$init$frost$core$Int(_25, _30);
_32 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = &param0->locals;
_35 = *_34;
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = &param0->locals;
*_38 = _25;
_40 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:62
_43 = (frost$core$Int) {0u};
_44 = &param2->locals;
_45 = *_44;
_46 = ((frost$collections$CollectionView*) _45);
ITable* $tmp7 = _46->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_47 = $tmp7->methods[0];
_48 = _47(_46);
_49 = (frost$core$Bit) {false};
_50 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_43, _48, _49);
_51 = _50.min;
*(&local0) = _51;
_53 = _50.max;
_54 = _50.inclusive;
_55 = _54.value;
_56 = (frost$core$Int) {1u};
if (_55) goto block4; else goto block5;
block4:;
_58 = _51.value;
_59 = _53.value;
_60 = _58 <= _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block1; else goto block2;
block5:;
_64 = _51.value;
_65 = _53.value;
_66 = _64 < _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:63
_71 = &param2->locals;
_72 = *_71;
_73 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:63:37
_75 = (frost$core$Int) {0u};
_76 = _73.value;
_77 = _75.value;
_78 = _76 >= _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block9; else goto block8;
block9:;
_82 = ((frost$collections$CollectionView*) _72);
ITable* $tmp8 = _82->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_83 = $tmp8->methods[0];
_84 = _83(_82);
_85 = _73.value;
_86 = _84.value;
_87 = _85 < _86;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block7; else goto block8;
block8:;
_91 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _91, &$s10);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_95 = &_72->data;
_96 = *_95;
_97 = _96.value;
_98 = frost$core$Int64$init$frost$core$Int(_73);
_99 = _98.value;
_100 = ((frost$core$Object**)_97)[_99];
_101 = _100;
frost$core$Frost$ref$frost$core$Object$Q(_101);
_104 = ((org$frostlang$frostc$Type*) _100);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
_106 = ((frost$core$Object*) _104);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = *(&local1);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local1) = _104;
_112 = _100;
frost$core$Frost$unref$frost$core$Object$Q(_112);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:64
_115 = &param0->locals;
_116 = *_115;
_117 = *(&local1);
_118 = ($fn11) param1->$class->vtable[9];
_119 = _118(param1, _117);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:64:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_122 = _119.value;
_123 = (frost$core$Int) {_122};
frost$core$Int$wrapper* $tmp12;
$tmp12 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp12->value = _123;
_125 = ((frost$core$Object*) $tmp12);
frost$collections$Array$add$frost$collections$Array$T(_116, _125);
_127 = _125;
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = *(&local1);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
_134 = *(&local0);
_135 = _53.value;
_136 = _134.value;
_137 = _135 - _136;
_138 = (frost$core$Int) {_137};
if (_55) goto block12; else goto block13;
block12:;
_140 = _138.value;
_141 = _56.value;
_142 = _140 >= _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block11; else goto block2;
block13:;
_146 = _138.value;
_147 = _56.value;
_148 = _146 > _147;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block11; else goto block2;
block11:;
_152 = _134.value;
_153 = _56.value;
_154 = _152 + _153;
_155 = (frost$core$Int) {_154};
*(&local0) = _155;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:67
_159 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_159);
_161 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = &param0->arguments;
_164 = *_163;
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
_167 = &param0->arguments;
*_167 = _159;
_169 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_169);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:69
_172 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_173 = &param2->maxId;
_174 = *_173;
_175 = (frost$core$Int) {1u};
_176 = _174.value;
_177 = _175.value;
_178 = _176 + _177;
_179 = (frost$core$Int) {_178};
frost$core$Object* $tmp13;
if (((frost$core$Int64$nullable) { .nonnull = false }).nonnull) {
    frost$core$Int64$wrapper* $tmp14;
    $tmp14 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp14->value = ((frost$core$Int64) ((frost$core$Int64$nullable) { .nonnull = false }).value);
    $tmp13 = ((frost$core$Object*) $tmp14);
}
else {
    $tmp13 = NULL;
}
_180 = $tmp13;
frost$collections$Array$init$frost$core$Int$frost$collections$Array$T(_172, _179, _180);
_182 = ((frost$core$Object*) _172);
frost$core$Frost$ref$frost$core$Object$Q(_182);
_184 = &param0->statements;
_185 = *_184;
_186 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = &param0->statements;
*_188 = _172;
_190 = _180;
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_192);
return;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$Context$value$org$frostlang$frostc$IR$Value$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$IR$Value* param1) {
org$frostlang$frostc$Interpreter$Context* param0 = (org$frostlang$frostc$Interpreter$Context*) rawSelf;

frost$core$Bit local0;
frost$core$Object* local1 = NULL;
frost$core$UInt64 local2;
frost$core$Int local3;
org$frostlang$frostc$MethodDecl* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$core$Int local7;
frost$core$Real64 local8;
org$frostlang$frostc$IR$Statement$ID local9;
frost$core$String* local10 = NULL;
frost$core$Int64$nullable local11;
org$frostlang$frostc$Compiler* local12 = NULL;
org$frostlang$frostc$MemoryLayout* local13 = NULL;
frost$unsafe$Pointer local14;
frost$unsafe$Pointer local15;
frost$unsafe$Pointer local16;
org$frostlang$frostc$ClassDecl* local17 = NULL;
frost$unsafe$Pointer local18;
int64_t local19;
int64_t local20;
frost$unsafe$Pointer local21;
frost$unsafe$Pointer local22;
int64_t local23;
int64_t local24;
frost$unsafe$Pointer local25;
frost$unsafe$Pointer local26;
int64_t local27;
int64_t local28;
frost$unsafe$Pointer local29;
frost$unsafe$Pointer local30;
frost$unsafe$Pointer local31;
frost$unsafe$Pointer local32;
frost$unsafe$Pointer local33;
frost$core$Int local34;
int64_t local35;
int64_t local36;
frost$unsafe$Pointer local37;
frost$unsafe$Pointer local38;
int64_t local39;
int64_t local40;
frost$unsafe$Pointer local41;
frost$unsafe$Pointer local42;
int64_t local43;
int64_t local44;
frost$unsafe$Pointer local45;
frost$unsafe$Pointer local46;
int64_t local47;
int64_t local48;
frost$unsafe$Pointer local49;
frost$unsafe$Pointer local50;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Bit* _13;
frost$core$Bit _14;
org$frostlang$frostc$Type** _16;
org$frostlang$frostc$Type* _17;
frost$core$Bit _19;
frost$core$Int _20;
frost$core$Object* _21;
frost$core$Int _22;
frost$core$Object* _23;
bool _26;
frost$core$Object* _29;
frost$core$Object* _32;
frost$core$Object* _36;
frost$core$Object* _39;
frost$core$Object* _42;
frost$core$Int _43;
frost$core$Int64 _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Int _56;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _64;
frost$core$UInt64* _66;
frost$core$UInt64 _67;
org$frostlang$frostc$Type** _69;
org$frostlang$frostc$Type* _70;
frost$core$UInt64 _72;
uint64_t _75;
int64_t _76;
frost$core$Int64 _77;
frost$core$Int _80;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _88;
frost$core$Int* _90;
frost$core$Int _91;
org$frostlang$frostc$Type** _93;
org$frostlang$frostc$Type* _94;
frost$collections$Array** _96;
frost$collections$Array* _97;
frost$core$Int _98;
frost$core$Int _100;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$collections$CollectionView* _107;
$fn15 _108;
frost$core$Int _109;
int64_t _110;
int64_t _111;
bool _112;
frost$core$Bit _113;
bool _114;
frost$core$Int _116;
frost$unsafe$Pointer* _120;
frost$unsafe$Pointer _121;
int64_t _122;
frost$core$Int64 _123;
int64_t _124;
frost$core$Object* _125;
frost$core$Object* _126;
frost$core$Int _129;
int64_t _132;
int64_t _133;
frost$core$Int64 _134;
frost$core$Object* _136;
frost$core$Int _139;
int64_t _142;
int64_t _143;
bool _144;
frost$core$Bit _145;
bool _147;
org$frostlang$frostc$MethodDecl** _149;
org$frostlang$frostc$MethodDecl* _150;
frost$core$Object* _152;
org$frostlang$frostc$MethodDecl* _154;
frost$core$Object* _155;
org$frostlang$frostc$Type** _158;
org$frostlang$frostc$Type* _159;
frost$core$Object* _161;
org$frostlang$frostc$Type* _163;
frost$core$Object* _164;
frost$core$Int _169;
frost$core$Int _172;
int64_t _175;
int64_t _176;
bool _177;
frost$core$Bit _178;
bool _180;
org$frostlang$frostc$Type** _182;
org$frostlang$frostc$Type* _183;
frost$core$Object* _185;
org$frostlang$frostc$Type* _187;
frost$core$Object* _188;
frost$core$Int64 _192;
org$frostlang$frostc$Type* _193;
frost$core$Object* _194;
frost$core$Int _198;
int64_t _201;
int64_t _202;
bool _203;
frost$core$Bit _204;
bool _206;
frost$core$Int* _208;
frost$core$Int _209;
org$frostlang$frostc$Type** _211;
org$frostlang$frostc$Type* _212;
frost$collections$Array** _214;
frost$collections$Array* _215;
frost$core$Int _216;
frost$core$Int _218;
int64_t _219;
int64_t _220;
bool _221;
frost$core$Bit _222;
bool _223;
frost$collections$CollectionView* _225;
$fn16 _226;
frost$core$Int _227;
int64_t _228;
int64_t _229;
bool _230;
frost$core$Bit _231;
bool _232;
frost$core$Int _234;
frost$unsafe$Pointer* _238;
frost$unsafe$Pointer _239;
int64_t _240;
frost$core$Int64 _241;
int64_t _242;
frost$core$Object* _243;
frost$core$Object* _244;
frost$core$Int64 _247;
frost$core$Object* _248;
frost$core$Int _251;
int64_t _254;
int64_t _255;
bool _256;
frost$core$Bit _257;
bool _259;
frost$core$Real64* _261;
frost$core$Real64 _262;
org$frostlang$frostc$Type** _264;
org$frostlang$frostc$Type* _265;
frost$core$Real64 _267;
frost$core$Int64 _268;
frost$core$Int _270;
int64_t _273;
int64_t _274;
bool _275;
frost$core$Bit _276;
bool _278;
org$frostlang$frostc$IR$Statement$ID* _280;
org$frostlang$frostc$IR$Statement$ID _281;
org$frostlang$frostc$Type** _283;
org$frostlang$frostc$Type* _284;
frost$collections$Array** _286;
frost$collections$Array* _287;
org$frostlang$frostc$IR$Statement$ID _288;
frost$core$Int _289;
frost$core$Int _291;
int64_t _292;
int64_t _293;
bool _294;
frost$core$Bit _295;
bool _296;
frost$collections$CollectionView* _298;
$fn17 _299;
frost$core$Int _300;
int64_t _301;
int64_t _302;
bool _303;
frost$core$Bit _304;
bool _305;
frost$core$Int _307;
frost$unsafe$Pointer* _311;
frost$unsafe$Pointer _312;
int64_t _313;
frost$core$Int64 _314;
int64_t _315;
frost$core$Object* _316;
frost$core$Object* _317;
frost$core$Int64$nullable _320;
bool _321;
frost$core$Bit _322;
bool _323;
frost$core$Int _325;
frost$core$Int64 _328;
frost$core$Object* _329;
frost$core$Int _332;
int64_t _335;
int64_t _336;
bool _337;
frost$core$Bit _338;
bool _340;
frost$core$String** _342;
frost$core$String* _343;
frost$core$Object* _345;
frost$core$String* _347;
frost$core$Object* _348;
org$frostlang$frostc$Type** _351;
org$frostlang$frostc$Type* _352;
frost$core$Weak** _354;
frost$core$Weak* _355;
frost$core$Bit* _360;
frost$core$Bit _361;
bool _363;
frost$core$Int _365;
frost$core$Object** _369;
frost$core$Object* _370;
frost$core$Object* _371;
frost$core$Object* _372;
org$frostlang$frostc$Interpreter* _375;
frost$collections$HashMap** _376;
frost$collections$HashMap* _377;
frost$core$String* _378;
frost$collections$HashKey* _379;
frost$core$Object* _380;
frost$core$Int64$nullable _381;
frost$core$Object* _383;
frost$core$Object* _385;
frost$core$Int64$nullable _388;
bool _389;
frost$core$Bit _390;
bool _391;
frost$core$Weak** _394;
frost$core$Weak* _395;
frost$core$Bit* _400;
frost$core$Bit _401;
bool _403;
frost$core$Int _405;
frost$core$Object** _409;
frost$core$Object* _410;
frost$core$Object* _411;
frost$core$Object* _412;
org$frostlang$frostc$Interpreter* _415;
frost$core$Weak** _416;
frost$core$Weak* _417;
frost$core$Bit* _422;
frost$core$Bit _423;
bool _425;
frost$core$Int _427;
frost$core$Object** _431;
frost$core$Object* _432;
frost$core$Object* _433;
frost$core$Object* _434;
org$frostlang$frostc$Compiler* _437;
frost$core$Object* _439;
org$frostlang$frostc$Compiler* _441;
frost$core$Object* _442;
frost$core$Object* _445;
frost$core$Object* _447;
org$frostlang$frostc$Compiler* _450;
bool _451;
frost$core$Bit _452;
bool _453;
frost$core$Int _455;
org$frostlang$frostc$Compiler* _458;
org$frostlang$frostc$MemoryLayout** _459;
org$frostlang$frostc$MemoryLayout* _460;
frost$core$Object* _462;
org$frostlang$frostc$MemoryLayout* _464;
frost$core$Object* _465;
org$frostlang$frostc$MemoryLayout* _469;
$fn18 _470;
frost$core$Int _471;
org$frostlang$frostc$MemoryLayout* _472;
$fn19 _473;
frost$core$Int _474;
int64_t _477;
int64_t _478;
bool _479;
frost$core$Bit _480;
bool _482;
frost$core$Int _484;
frost$core$Weak** _488;
frost$core$Weak* _489;
frost$core$Bit* _494;
frost$core$Bit _495;
bool _497;
frost$core$Int _499;
frost$core$Object** _503;
frost$core$Object* _504;
frost$core$Object* _505;
frost$core$Object* _506;
org$frostlang$frostc$Interpreter* _509;
org$frostlang$frostc$MemoryLayout** _510;
org$frostlang$frostc$MemoryLayout* _511;
org$frostlang$frostc$Compiler* _512;
bool _513;
frost$core$Bit _514;
bool _515;
frost$core$Int _517;
org$frostlang$frostc$Compiler* _520;
org$frostlang$frostc$Type** _521;
org$frostlang$frostc$Type* _522;
$fn20 _523;
frost$core$Int _524;
int64_t _527;
int64_t _528;
int64_t _529;
int64_t* _532;
frost$unsafe$Pointer _534;
frost$unsafe$Pointer _537;
frost$core$Object* _540;
org$frostlang$frostc$Compiler* _543;
bool _544;
frost$core$Bit _545;
bool _546;
frost$core$Int _548;
org$frostlang$frostc$Compiler* _551;
org$frostlang$frostc$Compiler* _552;
bool _553;
frost$core$Bit _554;
bool _555;
frost$core$Int _557;
org$frostlang$frostc$Compiler* _560;
org$frostlang$frostc$Type** _561;
org$frostlang$frostc$Type* _562;
org$frostlang$frostc$ClassDecl* _563;
frost$core$Object* _565;
org$frostlang$frostc$ClassDecl* _567;
frost$core$Object* _568;
frost$core$Object* _571;
frost$unsafe$Pointer _574;
org$frostlang$frostc$Compiler* _577;
bool _578;
frost$core$Bit _579;
bool _580;
frost$core$Int _582;
org$frostlang$frostc$Compiler* _585;
org$frostlang$frostc$ClassDecl* _586;
bool _587;
frost$core$Bit _588;
bool _589;
frost$core$Int _591;
org$frostlang$frostc$ClassDecl* _594;
frost$collections$ListView* _595;
frost$core$Int _596;
$fn21 _597;
frost$core$Object* _598;
org$frostlang$frostc$FieldDecl* _599;
org$frostlang$frostc$Symbol* _600;
frost$core$String** _601;
frost$core$String* _602;
frost$core$Bit _603;
bool _604;
frost$core$Int _606;
frost$core$Object* _609;
frost$core$Object* _611;
frost$unsafe$Pointer _614;
int64_t _617;
frost$core$Int _618;
frost$unsafe$Pointer _620;
int64_t _623;
frost$core$Int _624;
int64_t _626;
int64_t _627;
int64_t _628;
frost$core$Int _629;
org$frostlang$frostc$Compiler* _630;
bool _631;
frost$core$Bit _632;
bool _633;
frost$core$Int _635;
org$frostlang$frostc$Compiler* _638;
org$frostlang$frostc$ClassDecl* _639;
bool _640;
frost$core$Bit _641;
bool _642;
frost$core$Int _644;
org$frostlang$frostc$ClassDecl* _647;
frost$collections$ListView* _648;
frost$core$Int _649;
$fn22 _650;
frost$core$Object* _651;
org$frostlang$frostc$FieldDecl* _652;
frost$core$Int* _653;
frost$core$Int _654;
int64_t _657;
int64_t _658;
bool _659;
frost$core$Bit _660;
bool _662;
frost$core$Int _664;
frost$core$Object* _667;
frost$core$Object* _669;
frost$unsafe$Pointer _672;
int64_t _673;
org$frostlang$frostc$ClassDecl* _674;
bool _675;
frost$core$Bit _676;
bool _677;
frost$core$Int _679;
org$frostlang$frostc$ClassDecl* _682;
frost$core$Object* _683;
org$frostlang$frostc$ClassDecl* _685;
frost$core$Object* _686;
frost$unsafe$Pointer _690;
org$frostlang$frostc$MemoryLayout* _691;
$fn23 _692;
frost$core$Int _693;
int64_t _696;
int64_t _701;
int64_t _702;
int64_t _703;
int64_t _704;
int64_t _705;
int64_t* _708;
frost$unsafe$Pointer _710;
frost$unsafe$Pointer _713;
org$frostlang$frostc$Compiler* _717;
bool _718;
frost$core$Bit _719;
bool _720;
frost$core$Int _722;
org$frostlang$frostc$Compiler* _725;
org$frostlang$frostc$ClassDecl* _726;
bool _727;
frost$core$Bit _728;
bool _729;
frost$core$Int _731;
org$frostlang$frostc$ClassDecl* _734;
frost$collections$ListView* _735;
frost$core$Int _736;
$fn24 _737;
frost$core$Object* _738;
org$frostlang$frostc$FieldDecl* _739;
org$frostlang$frostc$Symbol* _740;
frost$core$String** _741;
frost$core$String* _742;
frost$core$Bit _743;
bool _744;
frost$core$Int _746;
frost$core$Object* _749;
frost$core$Object* _751;
frost$unsafe$Pointer _754;
int64_t _757;
frost$core$Int _758;
frost$unsafe$Pointer _760;
int64_t _763;
frost$core$Int _764;
int64_t _766;
int64_t _767;
int64_t _768;
frost$core$Int _769;
org$frostlang$frostc$Compiler* _770;
bool _771;
frost$core$Bit _772;
bool _773;
frost$core$Int _775;
org$frostlang$frostc$Compiler* _778;
org$frostlang$frostc$ClassDecl* _779;
bool _780;
frost$core$Bit _781;
bool _782;
frost$core$Int _784;
org$frostlang$frostc$ClassDecl* _787;
frost$collections$ListView* _788;
frost$core$Int _789;
$fn25 _790;
frost$core$Object* _791;
org$frostlang$frostc$FieldDecl* _792;
frost$core$Int* _793;
frost$core$Int _794;
int64_t _797;
int64_t _798;
bool _799;
frost$core$Bit _800;
bool _802;
frost$core$Int _804;
frost$core$Object* _807;
frost$core$Object* _809;
frost$unsafe$Pointer _812;
int64_t _813;
frost$core$Int _814;
int64_t _817;
int32_t _818;
frost$core$Int32 _819;
frost$unsafe$Pointer _823;
frost$core$Int _824;
int64_t _827;
int64_t _832;
int64_t _833;
int64_t _834;
int64_t _835;
int64_t _836;
int64_t* _839;
frost$unsafe$Pointer _841;
frost$unsafe$Pointer _844;
org$frostlang$frostc$Compiler* _848;
bool _849;
frost$core$Bit _850;
bool _851;
frost$core$Int _853;
org$frostlang$frostc$Compiler* _856;
org$frostlang$frostc$ClassDecl* _857;
bool _858;
frost$core$Bit _859;
bool _860;
frost$core$Int _862;
org$frostlang$frostc$ClassDecl* _865;
frost$collections$ListView* _866;
frost$core$Int _867;
$fn26 _868;
frost$core$Object* _869;
org$frostlang$frostc$FieldDecl* _870;
org$frostlang$frostc$Symbol* _871;
frost$core$String** _872;
frost$core$String* _873;
frost$core$Bit _874;
bool _875;
frost$core$Int _877;
frost$core$Object* _880;
frost$core$Object* _882;
frost$unsafe$Pointer _885;
int64_t _888;
frost$core$Int _889;
frost$unsafe$Pointer _891;
int64_t _894;
frost$core$Int _895;
int64_t _897;
int64_t _898;
int64_t _899;
frost$core$Int _900;
org$frostlang$frostc$Compiler* _901;
bool _902;
frost$core$Bit _903;
bool _904;
frost$core$Int _906;
org$frostlang$frostc$Compiler* _909;
org$frostlang$frostc$ClassDecl* _910;
bool _911;
frost$core$Bit _912;
bool _913;
frost$core$Int _915;
org$frostlang$frostc$ClassDecl* _918;
frost$collections$ListView* _919;
frost$core$Int _920;
$fn27 _921;
frost$core$Object* _922;
org$frostlang$frostc$FieldDecl* _923;
frost$core$Int* _924;
frost$core$Int _925;
int64_t _928;
int64_t _929;
bool _930;
frost$core$Bit _931;
bool _933;
frost$core$Int _935;
frost$core$Object* _938;
frost$core$Object* _940;
frost$unsafe$Pointer _943;
int64_t _944;
frost$core$Int8 _945;
frost$unsafe$Pointer _948;
frost$core$Int _949;
int64_t _952;
int64_t _957;
int64_t _958;
int64_t _959;
int64_t _960;
int64_t _961;
int64_t* _964;
frost$unsafe$Pointer _966;
frost$unsafe$Pointer _969;
org$frostlang$frostc$Compiler* _973;
bool _974;
frost$core$Bit _975;
bool _976;
frost$core$Int _978;
org$frostlang$frostc$Compiler* _981;
org$frostlang$frostc$ClassDecl* _982;
bool _983;
frost$core$Bit _984;
bool _985;
frost$core$Int _987;
org$frostlang$frostc$ClassDecl* _990;
frost$collections$ListView* _991;
frost$core$Int _992;
$fn28 _993;
frost$core$Object* _994;
org$frostlang$frostc$FieldDecl* _995;
org$frostlang$frostc$Symbol* _996;
frost$core$String** _997;
frost$core$String* _998;
frost$core$Bit _999;
bool _1000;
frost$core$Int _1002;
frost$core$Object* _1005;
frost$core$Object* _1007;
frost$unsafe$Pointer _1010;
int64_t _1013;
frost$core$Int _1014;
frost$unsafe$Pointer _1016;
int64_t _1019;
frost$core$Int _1020;
int64_t _1022;
int64_t _1023;
int64_t _1024;
frost$core$Int _1025;
org$frostlang$frostc$Compiler* _1026;
bool _1027;
frost$core$Bit _1028;
bool _1029;
frost$core$Int _1031;
org$frostlang$frostc$Compiler* _1034;
org$frostlang$frostc$ClassDecl* _1035;
bool _1036;
frost$core$Bit _1037;
bool _1038;
frost$core$Int _1040;
org$frostlang$frostc$ClassDecl* _1043;
frost$collections$ListView* _1044;
frost$core$Int _1045;
$fn29 _1046;
frost$core$Object* _1047;
org$frostlang$frostc$FieldDecl* _1048;
frost$core$Int* _1049;
frost$core$Int _1050;
int64_t _1053;
int64_t _1054;
bool _1055;
frost$core$Bit _1056;
bool _1058;
frost$core$Int _1060;
frost$core$Object* _1063;
frost$core$Object* _1065;
frost$core$String* _1068;
frost$core$Int* _1069;
frost$core$Int _1070;
int64_t _1073;
int64_t _1074;
int64_t _1075;
int64_t* _1078;
frost$unsafe$Pointer _1080;
frost$unsafe$Pointer _1083;
frost$core$Int _1087;
frost$core$String* _1088;
frost$core$Int* _1089;
frost$core$Int _1090;
frost$core$Bit _1091;
frost$core$Range$LTfrost$core$Int$GT _1092;
frost$core$Int _1093;
frost$core$Int _1095;
frost$core$Bit _1096;
bool _1097;
frost$core$Int _1098;
int64_t _1100;
int64_t _1101;
bool _1102;
frost$core$Bit _1103;
bool _1104;
int64_t _1106;
int64_t _1107;
bool _1108;
frost$core$Bit _1109;
bool _1110;
frost$unsafe$Pointer _1113;
int64_t _1114;
frost$core$Int _1115;
frost$core$Int64 _1116;
frost$core$String* _1117;
frost$unsafe$Pointer* _1118;
frost$unsafe$Pointer _1119;
int64_t _1120;
frost$core$Int _1121;
frost$core$Int64 _1122;
int64_t _1123;
frost$core$Char8 _1124;
int64_t _1125;
frost$core$Int _1128;
int64_t _1129;
int64_t _1130;
int64_t _1131;
frost$core$Int _1132;
int64_t _1134;
int64_t _1135;
bool _1136;
frost$core$Bit _1137;
bool _1138;
int64_t _1140;
int64_t _1141;
bool _1142;
frost$core$Bit _1143;
bool _1144;
int64_t _1146;
int64_t _1147;
int64_t _1148;
frost$core$Int _1149;
frost$unsafe$Pointer _1153;
int64_t _1154;
frost$unsafe$Pointer _1155;
int64_t _1158;
frost$core$Int _1159;
frost$unsafe$Pointer _1163;
org$frostlang$frostc$MemoryLayout* _1164;
$fn30 _1165;
frost$core$Int _1166;
int64_t _1169;
int64_t _1174;
int64_t _1175;
int64_t _1176;
int64_t _1177;
int64_t _1178;
int64_t* _1181;
frost$unsafe$Pointer _1183;
frost$unsafe$Pointer _1186;
org$frostlang$frostc$Compiler* _1190;
bool _1191;
frost$core$Bit _1192;
bool _1193;
frost$core$Int _1195;
org$frostlang$frostc$Compiler* _1198;
org$frostlang$frostc$ClassDecl* _1199;
bool _1200;
frost$core$Bit _1201;
bool _1202;
frost$core$Int _1204;
org$frostlang$frostc$ClassDecl* _1207;
frost$collections$ListView* _1208;
frost$core$Int _1209;
$fn31 _1210;
frost$core$Object* _1211;
org$frostlang$frostc$FieldDecl* _1212;
org$frostlang$frostc$Symbol* _1213;
frost$core$String** _1214;
frost$core$String* _1215;
frost$core$Bit _1216;
bool _1217;
frost$core$Int _1219;
frost$core$Object* _1222;
frost$core$Object* _1224;
frost$unsafe$Pointer _1227;
int64_t _1230;
frost$core$Int _1231;
frost$unsafe$Pointer _1233;
int64_t _1236;
frost$core$Int _1237;
int64_t _1239;
int64_t _1240;
int64_t _1241;
frost$core$Int _1242;
org$frostlang$frostc$Compiler* _1243;
bool _1244;
frost$core$Bit _1245;
bool _1246;
frost$core$Int _1248;
org$frostlang$frostc$Compiler* _1251;
org$frostlang$frostc$ClassDecl* _1252;
bool _1253;
frost$core$Bit _1254;
bool _1255;
frost$core$Int _1257;
org$frostlang$frostc$ClassDecl* _1260;
frost$collections$ListView* _1261;
frost$core$Int _1262;
$fn32 _1263;
frost$core$Object* _1264;
org$frostlang$frostc$FieldDecl* _1265;
frost$core$Int* _1266;
frost$core$Int _1267;
int64_t _1270;
int64_t _1271;
bool _1272;
frost$core$Bit _1273;
bool _1275;
frost$core$Int _1277;
frost$core$Object* _1280;
frost$core$Object* _1282;
frost$unsafe$Pointer _1285;
int64_t _1286;
frost$core$String* _1287;
frost$core$Int* _1288;
frost$core$Int _1289;
frost$unsafe$Pointer _1292;
org$frostlang$frostc$MemoryLayout* _1293;
$fn33 _1294;
frost$core$Int _1295;
int64_t _1298;
int64_t _1303;
int64_t _1304;
int64_t _1305;
int64_t _1306;
int64_t _1307;
int64_t* _1310;
frost$unsafe$Pointer _1312;
frost$unsafe$Pointer _1315;
org$frostlang$frostc$Compiler* _1319;
bool _1320;
frost$core$Bit _1321;
bool _1322;
frost$core$Int _1324;
org$frostlang$frostc$Compiler* _1327;
org$frostlang$frostc$ClassDecl* _1328;
bool _1329;
frost$core$Bit _1330;
bool _1331;
frost$core$Int _1333;
org$frostlang$frostc$ClassDecl* _1336;
frost$collections$ListView* _1337;
frost$core$Int _1338;
$fn34 _1339;
frost$core$Object* _1340;
org$frostlang$frostc$FieldDecl* _1341;
org$frostlang$frostc$Symbol* _1342;
frost$core$String** _1343;
frost$core$String* _1344;
frost$core$Bit _1345;
bool _1346;
frost$core$Int _1348;
frost$core$Object* _1351;
frost$core$Object* _1353;
frost$unsafe$Pointer _1356;
int64_t _1359;
frost$core$Int _1360;
frost$unsafe$Pointer _1362;
int64_t _1365;
frost$core$Int _1366;
int64_t _1368;
int64_t _1369;
int64_t _1370;
frost$core$Int _1371;
org$frostlang$frostc$Compiler* _1372;
bool _1373;
frost$core$Bit _1374;
bool _1375;
frost$core$Int _1377;
org$frostlang$frostc$Compiler* _1380;
org$frostlang$frostc$ClassDecl* _1381;
bool _1382;
frost$core$Bit _1383;
bool _1384;
frost$core$Int _1386;
org$frostlang$frostc$ClassDecl* _1389;
frost$collections$ListView* _1390;
frost$core$Int _1391;
$fn35 _1392;
frost$core$Object* _1393;
org$frostlang$frostc$FieldDecl* _1394;
frost$core$Int* _1395;
frost$core$Int _1396;
int64_t _1399;
int64_t _1400;
bool _1401;
frost$core$Bit _1402;
bool _1404;
frost$core$Int _1406;
frost$core$Object* _1409;
frost$core$Object* _1411;
frost$unsafe$Pointer _1414;
org$frostlang$frostc$MemoryLayout* _1415;
$fn36 _1416;
frost$core$Int _1417;
int64_t _1420;
int64_t _1425;
int64_t _1426;
int64_t _1427;
int64_t _1428;
int64_t _1429;
int64_t* _1432;
frost$unsafe$Pointer _1434;
frost$unsafe$Pointer _1437;
org$frostlang$frostc$Compiler* _1441;
bool _1442;
frost$core$Bit _1443;
bool _1444;
frost$core$Int _1446;
org$frostlang$frostc$Compiler* _1449;
org$frostlang$frostc$ClassDecl* _1450;
bool _1451;
frost$core$Bit _1452;
bool _1453;
frost$core$Int _1455;
org$frostlang$frostc$ClassDecl* _1458;
frost$collections$ListView* _1459;
frost$core$Int _1460;
$fn37 _1461;
frost$core$Object* _1462;
org$frostlang$frostc$FieldDecl* _1463;
org$frostlang$frostc$Symbol* _1464;
frost$core$String** _1465;
frost$core$String* _1466;
frost$core$Bit _1467;
bool _1468;
frost$core$Int _1470;
frost$core$Object* _1473;
frost$core$Object* _1475;
frost$unsafe$Pointer _1478;
int64_t _1481;
frost$core$Int _1482;
frost$unsafe$Pointer _1484;
int64_t _1487;
frost$core$Int _1488;
int64_t _1490;
int64_t _1491;
int64_t _1492;
frost$core$Int _1493;
org$frostlang$frostc$Compiler* _1494;
bool _1495;
frost$core$Bit _1496;
bool _1497;
frost$core$Int _1499;
org$frostlang$frostc$Compiler* _1502;
org$frostlang$frostc$ClassDecl* _1503;
bool _1504;
frost$core$Bit _1505;
bool _1506;
frost$core$Int _1508;
org$frostlang$frostc$ClassDecl* _1511;
frost$collections$ListView* _1512;
frost$core$Int _1513;
$fn38 _1514;
frost$core$Object* _1515;
org$frostlang$frostc$FieldDecl* _1516;
frost$core$Int* _1517;
frost$core$Int _1518;
int64_t _1521;
int64_t _1522;
bool _1523;
frost$core$Bit _1524;
bool _1526;
frost$core$Int _1528;
frost$core$Object* _1531;
frost$core$Object* _1533;
frost$unsafe$Pointer _1536;
int64_t _1537;
frost$core$Int _1538;
frost$unsafe$Pointer _1541;
org$frostlang$frostc$MemoryLayout* _1542;
$fn39 _1543;
frost$core$Int _1544;
int64_t _1547;
int64_t _1552;
int64_t _1553;
int64_t _1554;
int64_t _1555;
int64_t _1556;
int64_t* _1559;
frost$unsafe$Pointer _1561;
frost$unsafe$Pointer _1564;
frost$unsafe$Pointer _1568;
int64_t _1571;
frost$core$Int _1572;
frost$unsafe$Pointer _1574;
int64_t _1577;
frost$core$Int _1578;
int64_t _1580;
int64_t _1581;
int64_t _1582;
frost$core$Int _1583;
frost$core$Weak** _1584;
frost$core$Weak* _1585;
frost$core$Bit* _1590;
frost$core$Bit _1591;
bool _1593;
frost$core$Int _1595;
frost$core$Object** _1599;
frost$core$Object* _1600;
frost$core$Object* _1601;
frost$core$Object* _1602;
org$frostlang$frostc$Interpreter* _1605;
org$frostlang$frostc$MemoryLayout** _1606;
org$frostlang$frostc$MemoryLayout* _1607;
org$frostlang$frostc$ClassDecl* _1608;
bool _1609;
frost$core$Bit _1610;
bool _1611;
frost$core$Int _1613;
org$frostlang$frostc$ClassDecl* _1616;
org$frostlang$frostc$Type** _1617;
org$frostlang$frostc$Type* _1618;
$fn40 _1619;
frost$core$Int _1620;
int64_t _1623;
int64_t _1624;
bool _1625;
frost$core$Bit _1626;
bool _1628;
frost$core$Int _1630;
frost$core$Object* _1633;
frost$unsafe$Pointer _1636;
int64_t _1639;
frost$core$Int _1640;
int64_t _1644;
int64_t _1645;
frost$core$Int64 _1646;
frost$core$Int64$nullable _1648;
frost$core$Weak** _1651;
frost$core$Weak* _1652;
frost$core$Bit* _1657;
frost$core$Bit _1658;
bool _1660;
frost$core$Int _1662;
frost$core$Object** _1666;
frost$core$Object* _1667;
frost$core$Object* _1668;
frost$core$Object* _1669;
org$frostlang$frostc$Interpreter* _1672;
frost$collections$HashMap** _1673;
frost$collections$HashMap* _1674;
frost$core$String* _1675;
frost$collections$HashKey* _1676;
frost$core$Int64$nullable _1677;
bool _1678;
frost$core$Bit _1679;
bool _1680;
frost$core$Int _1682;
frost$core$Int64 _1685;
frost$core$Object* _1686;
frost$core$Object* _1688;
frost$core$Object* _1690;
org$frostlang$frostc$ClassDecl* _1692;
frost$core$Object* _1693;
org$frostlang$frostc$MemoryLayout* _1696;
frost$core$Object* _1697;
org$frostlang$frostc$Compiler* _1700;
frost$core$Object* _1701;
frost$core$Int64$nullable _1706;
bool _1707;
frost$core$Bit _1708;
bool _1709;
frost$core$Int _1711;
frost$core$Int64 _1714;
frost$core$String* _1715;
frost$core$Object* _1716;
frost$core$Int _1721;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:73
_1 = &param1->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:74:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param1->$data.$BIT.field0;
_14 = *_13;
*(&local0) = _14;
_16 = &param1->$data.$BIT.field1;
_17 = *_16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:75
_19 = *(&local0);
_20 = (frost$core$Int) {1u};
frost$core$Int$wrapper* $tmp41;
$tmp41 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp41->value = _20;
_21 = ((frost$core$Object*) $tmp41);
_22 = (frost$core$Int) {0u};
frost$core$Int$wrapper* $tmp42;
$tmp42 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp42->value = _22;
_23 = ((frost$core$Object*) $tmp42);
// begin inline call to function frost.core.Bit.choose(ifTrue:frost.core.Bit.choose.T, ifFalse:frost.core.Bit.choose.T):frost.core.Bit.choose.T from Interpreter.frost:75:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:62
_26 = _19.value;
if (_26) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:63
_29 = _21;
frost$core$Frost$ref$frost$core$Object$Q(_29);
*(&local1) = _21;
_32 = _21;
frost$core$Frost$ref$frost$core$Object$Q(_32);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:65
_36 = _23;
frost$core$Frost$ref$frost$core$Object$Q(_36);
*(&local1) = _23;
_39 = _23;
frost$core$Frost$ref$frost$core$Object$Q(_39);
goto block5;
block5:;
_42 = *(&local1);
_43 = ((frost$core$Int$wrapper*) _42)->value;
_44 = frost$core$Int64$init$frost$core$Int(_43);
_45 = _42;
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = *(&local1);
_48 = _47;
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local1) = ((frost$core$Object*) NULL);
_51 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_53);
return _44;
block3:;
_56 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:77:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_59 = _2.value;
_60 = _56.value;
_61 = _59 == _60;
_62 = (frost$core$Bit) {_61};
_64 = _62.value;
if (_64) goto block8; else goto block9;
block8:;
_66 = &param1->$data.$INT.field0;
_67 = *_66;
*(&local2) = _67;
_69 = &param1->$data.$INT.field1;
_70 = *_69;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:78
_72 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:78:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_75 = _72.value;
_76 = ((int64_t) _75);
_77 = (frost$core$Int64) {_76};
return _77;
block9:;
_80 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:80:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_83 = _2.value;
_84 = _80.value;
_85 = _83 == _84;
_86 = (frost$core$Bit) {_85};
_88 = _86.value;
if (_88) goto block12; else goto block13;
block12:;
_90 = &param1->$data.$LOCAL.field0;
_91 = *_90;
*(&local3) = _91;
_93 = &param1->$data.$LOCAL.field1;
_94 = *_93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:81
_96 = &param0->locals;
_97 = *_96;
_98 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:81:34
_100 = (frost$core$Int) {0u};
_101 = _98.value;
_102 = _100.value;
_103 = _101 >= _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block18; else goto block17;
block18:;
_107 = ((frost$collections$CollectionView*) _97);
ITable* $tmp43 = _107->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
_108 = $tmp43->methods[0];
_109 = _108(_107);
_110 = _98.value;
_111 = _109.value;
_112 = _110 < _111;
_113 = (frost$core$Bit) {_112};
_114 = _113.value;
if (_114) goto block16; else goto block17;
block17:;
_116 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _116, &$s45);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_120 = &_97->data;
_121 = *_120;
_122 = _121.value;
_123 = frost$core$Int64$init$frost$core$Int(_98);
_124 = _123.value;
_125 = ((frost$core$Object**)_122)[_124];
_126 = _125;
frost$core$Frost$ref$frost$core$Object$Q(_126);
_129 = ((frost$core$Int$wrapper*) _125)->value;
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:81:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_132 = _129.value;
_133 = ((int64_t) _132);
_134 = (frost$core$Int64) {_133};
_136 = _125;
frost$core$Frost$unref$frost$core$Object$Q(_136);
return _134;
block13:;
_139 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:83:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_142 = _2.value;
_143 = _139.value;
_144 = _142 == _143;
_145 = (frost$core$Bit) {_144};
_147 = _145.value;
if (_147) goto block20; else goto block21;
block20:;
_149 = &param1->$data.$METHOD_POINTER.field0;
_150 = *_149;
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
_152 = ((frost$core$Object*) _150);
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = *(&local4);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local4) = _150;
_158 = &param1->$data.$METHOD_POINTER.field1;
_159 = *_158;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_161 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = *(&local5);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local5) = _159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:84
frost$core$System$crash();
_169 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _169, &$s47);
abort(); // unreachable
block21:;
_172 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:86:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_175 = _2.value;
_176 = _172.value;
_177 = _175 == _176;
_178 = (frost$core$Bit) {_177};
_180 = _178.value;
if (_180) goto block23; else goto block24;
block23:;
_182 = &param1->$data.$NULL.field0;
_183 = *_182;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
_185 = ((frost$core$Object*) _183);
frost$core$Frost$ref$frost$core$Object$Q(_185);
_187 = *(&local6);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_188);
*(&local6) = _183;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:87
_192 = (frost$core$Int64) {0u};
_193 = *(&local6);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return _192;
block24:;
_198 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:89:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_201 = _2.value;
_202 = _198.value;
_203 = _201 == _202;
_204 = (frost$core$Bit) {_203};
_206 = _204.value;
if (_206) goto block26; else goto block27;
block26:;
_208 = &param1->$data.$PARAMETER.field0;
_209 = *_208;
*(&local7) = _209;
_211 = &param1->$data.$PARAMETER.field1;
_212 = *_211;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:90
_214 = &param0->arguments;
_215 = *_214;
_216 = *(&local7);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:90:37
_218 = (frost$core$Int) {0u};
_219 = _216.value;
_220 = _218.value;
_221 = _219 >= _220;
_222 = (frost$core$Bit) {_221};
_223 = _222.value;
if (_223) goto block32; else goto block31;
block32:;
_225 = ((frost$collections$CollectionView*) _215);
ITable* $tmp48 = _225->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
_226 = $tmp48->methods[0];
_227 = _226(_225);
_228 = _216.value;
_229 = _227.value;
_230 = _228 < _229;
_231 = (frost$core$Bit) {_230};
_232 = _231.value;
if (_232) goto block30; else goto block31;
block31:;
_234 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _234, &$s50);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_238 = &_215->data;
_239 = *_238;
_240 = _239.value;
_241 = frost$core$Int64$init$frost$core$Int(_216);
_242 = _241.value;
_243 = ((frost$core$Object**)_240)[_242];
_244 = _243;
frost$core$Frost$ref$frost$core$Object$Q(_244);
_247 = ((frost$core$Int64$wrapper*) _243)->value;
_248 = _243;
frost$core$Frost$unref$frost$core$Object$Q(_248);
return _247;
block27:;
_251 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:92:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_254 = _2.value;
_255 = _251.value;
_256 = _254 == _255;
_257 = (frost$core$Bit) {_256};
_259 = _257.value;
if (_259) goto block33; else goto block34;
block33:;
_261 = &param1->$data.$REAL.field0;
_262 = *_261;
*(&local8) = _262;
_264 = &param1->$data.$REAL.field1;
_265 = *_264;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:93
_267 = *(&local8);
frost$core$Frost$floatToIntBits$frost$core$Real64$R$frost$core$Int64(&_268, _267);
return _268;
block34:;
_270 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:95:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_273 = _2.value;
_274 = _270.value;
_275 = _273 == _274;
_276 = (frost$core$Bit) {_275};
_278 = _276.value;
if (_278) goto block36; else goto block37;
block36:;
_280 = &param1->$data.$REF.field0;
_281 = *_280;
*(&local9) = _281;
_283 = &param1->$data.$REF.field1;
_284 = *_283;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:96
_286 = &param0->statements;
_287 = *_286;
_288 = *(&local9);
_289 = _288.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:96:38
_291 = (frost$core$Int) {0u};
_292 = _289.value;
_293 = _291.value;
_294 = _292 >= _293;
_295 = (frost$core$Bit) {_294};
_296 = _295.value;
if (_296) goto block42; else goto block41;
block42:;
_298 = ((frost$collections$CollectionView*) _287);
ITable* $tmp51 = _298->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
_299 = $tmp51->methods[0];
_300 = _299(_298);
_301 = _289.value;
_302 = _300.value;
_303 = _301 < _302;
_304 = (frost$core$Bit) {_303};
_305 = _304.value;
if (_305) goto block40; else goto block41;
block41:;
_307 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _307, &$s53);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_311 = &_287->data;
_312 = *_311;
_313 = _312.value;
_314 = frost$core$Int64$init$frost$core$Int(_289);
_315 = _314.value;
_316 = ((frost$core$Object**)_313)[_315];
_317 = _316;
frost$core$Frost$ref$frost$core$Object$Q(_317);
_320 = (_316 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) _316)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
_321 = _320.nonnull;
_322 = (frost$core$Bit) {_321};
_323 = _322.value;
if (_323) goto block43; else goto block44;
block44:;
_325 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _325, &$s55);
abort(); // unreachable
block43:;
_328 = ((frost$core$Int64) _320.value);
_329 = _316;
frost$core$Frost$unref$frost$core$Object$Q(_329);
return _328;
block37:;
_332 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:98:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_335 = _2.value;
_336 = _332.value;
_337 = _335 == _336;
_338 = (frost$core$Bit) {_337};
_340 = _338.value;
if (_340) goto block45; else goto block46;
block45:;
_342 = &param1->$data.$STRING.field0;
_343 = *_342;
*(&local10) = ((frost$core$String*) NULL);
_345 = ((frost$core$Object*) _343);
frost$core$Frost$ref$frost$core$Object$Q(_345);
_347 = *(&local10);
_348 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_348);
*(&local10) = _343;
_351 = &param1->$data.$STRING.field1;
_352 = *_351;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:99
_354 = &param0->interpreter;
_355 = *_354;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:99:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_360 = &_355->_valid;
_361 = *_360;
_363 = _361.value;
if (_363) goto block50; else goto block51;
block51:;
_365 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _365, &$s57);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_369 = &_355->value;
_370 = *_369;
_371 = _370;
_372 = _371;
frost$core$Frost$ref$frost$core$Object$Q(_372);
_375 = ((org$frostlang$frostc$Interpreter*) _371);
_376 = &_375->strings;
_377 = *_376;
_378 = *(&local10);
_379 = ((frost$collections$HashKey*) _378);
_380 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_377, _379);
_381 = (_380 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) _380)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
*(&local11) = _381;
_383 = _380;
frost$core$Frost$unref$frost$core$Object$Q(_383);
_385 = _371;
frost$core$Frost$unref$frost$core$Object$Q(_385);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:100
_388 = *(&local11);
_389 = !_388.nonnull;
_390 = (frost$core$Bit) {_389};
_391 = _390.value;
if (_391) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:101
_394 = &param0->interpreter;
_395 = *_394;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:101:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_400 = &_395->_valid;
_401 = *_400;
_403 = _401.value;
if (_403) goto block56; else goto block57;
block57:;
_405 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _405, &$s59);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_409 = &_395->value;
_410 = *_409;
_411 = _410;
_412 = _411;
frost$core$Frost$ref$frost$core$Object$Q(_412);
_415 = ((org$frostlang$frostc$Interpreter*) _411);
_416 = &_415->compiler;
_417 = *_416;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:101:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_422 = &_417->_valid;
_423 = *_422;
_425 = _423.value;
if (_425) goto block60; else goto block61;
block61:;
_427 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _427, &$s61);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_431 = &_417->value;
_432 = *_431;
_433 = _432;
_434 = _433;
frost$core$Frost$ref$frost$core$Object$Q(_434);
_437 = ((org$frostlang$frostc$Compiler*) _433);
*(&local12) = ((org$frostlang$frostc$Compiler*) NULL);
_439 = ((frost$core$Object*) _437);
frost$core$Frost$ref$frost$core$Object$Q(_439);
_441 = *(&local12);
_442 = ((frost$core$Object*) _441);
frost$core$Frost$unref$frost$core$Object$Q(_442);
*(&local12) = _437;
_445 = _433;
frost$core$Frost$unref$frost$core$Object$Q(_445);
_447 = _411;
frost$core$Frost$unref$frost$core$Object$Q(_447);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:102
_450 = *(&local12);
_451 = _450 != NULL;
_452 = (frost$core$Bit) {_451};
_453 = _452.value;
if (_453) goto block62; else goto block63;
block63:;
_455 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _455, &$s63);
abort(); // unreachable
block62:;
_458 = _450;
_459 = &_458->memoryLayout;
_460 = *_459;
*(&local13) = ((org$frostlang$frostc$MemoryLayout*) NULL);
_462 = ((frost$core$Object*) _460);
frost$core$Frost$ref$frost$core$Object$Q(_462);
_464 = *(&local13);
_465 = ((frost$core$Object*) _464);
frost$core$Frost$unref$frost$core$Object$Q(_465);
*(&local13) = _460;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:103
_469 = *(&local13);
_470 = ($fn64) _469->$class->vtable[3];
_471 = _470(_469);
_472 = *(&local13);
_473 = ($fn65) _472->$class->vtable[2];
_474 = _473(_472);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:103:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_477 = _471.value;
_478 = _474.value;
_479 = _477 == _478;
_480 = (frost$core$Bit) {_479};
_482 = _480.value;
if (_482) goto block65; else goto block66;
block66:;
_484 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s66, _484);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:104
_488 = &param0->interpreter;
_489 = *_488;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:104:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_494 = &_489->_valid;
_495 = *_494;
_497 = _495.value;
if (_497) goto block69; else goto block70;
block70:;
_499 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s67, _499, &$s68);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_503 = &_489->value;
_504 = *_503;
_505 = _504;
_506 = _505;
frost$core$Frost$ref$frost$core$Object$Q(_506);
_509 = ((org$frostlang$frostc$Interpreter*) _505);
_510 = &_509->memoryLayout;
_511 = *_510;
_512 = *(&local12);
_513 = _512 != NULL;
_514 = (frost$core$Bit) {_513};
_515 = _514.value;
if (_515) goto block71; else goto block72;
block72:;
_517 = (frost$core$Int) {105u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, _517, &$s70);
abort(); // unreachable
block71:;
_520 = _512;
_521 = &_520->STRING_TYPE;
_522 = *_521;
_523 = ($fn71) _511->$class->vtable[7];
_524 = _523(_511, _522);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:104:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_527 = _524.value;
_528 = _527 * 1u;
_529 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_528);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_532 = &(&local15)->value;
*_532 = _529;
_534 = *(&local15);
*(&local14) = _534;
_537 = *(&local14);
*(&local16) = _537;
_540 = _505;
frost$core$Frost$unref$frost$core$Object$Q(_540);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:106
_543 = *(&local12);
_544 = _543 != NULL;
_545 = (frost$core$Bit) {_544};
_546 = _545.value;
if (_546) goto block75; else goto block76;
block76:;
_548 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s72, _548, &$s73);
abort(); // unreachable
block75:;
_551 = _543;
_552 = *(&local12);
_553 = _552 != NULL;
_554 = (frost$core$Bit) {_553};
_555 = _554.value;
if (_555) goto block77; else goto block78;
block78:;
_557 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, _557, &$s75);
abort(); // unreachable
block77:;
_560 = _552;
_561 = &_560->STRING_TYPE;
_562 = *_561;
_563 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_551, _562);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
_565 = ((frost$core$Object*) _563);
frost$core$Frost$ref$frost$core$Object$Q(_565);
_567 = *(&local17);
_568 = ((frost$core$Object*) _567);
frost$core$Frost$unref$frost$core$Object$Q(_568);
*(&local17) = _563;
_571 = ((frost$core$Object*) _563);
frost$core$Frost$unref$frost$core$Object$Q(_571);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:107
_574 = *(&local16);
*(&local18) = _574;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:110
_577 = *(&local12);
_578 = _577 != NULL;
_579 = (frost$core$Bit) {_578};
_580 = _579.value;
if (_580) goto block79; else goto block80;
block80:;
_582 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _582, &$s77);
abort(); // unreachable
block79:;
_585 = _577;
_586 = *(&local17);
_587 = _586 != NULL;
_588 = (frost$core$Bit) {_587};
_589 = _588.value;
if (_589) goto block81; else goto block82;
block82:;
_591 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s78, _591, &$s79);
abort(); // unreachable
block81:;
_594 = _586;
_595 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_585, _594);
_596 = (frost$core$Int) {0u};
ITable* $tmp80 = _595->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp80 = $tmp80->next;
}
_597 = $tmp80->methods[0];
_598 = _597(_595, _596);
_599 = ((org$frostlang$frostc$FieldDecl*) _598);
_600 = ((org$frostlang$frostc$Symbol*) _599);
_601 = &_600->name;
_602 = *_601;
_603 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_602, &$s81);
_604 = _603.value;
if (_604) goto block83; else goto block84;
block84:;
_606 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s82, _606);
abort(); // unreachable
block83:;
_609 = _598;
frost$core$Frost$unref$frost$core$Object$Q(_609);
_611 = ((frost$core$Object*) _595);
frost$core$Frost$unref$frost$core$Object$Q(_611);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:111
_614 = *(&local18);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:111:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_617 = _614.value;
_618 = (frost$core$Int) {_617};
_620 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:111:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_623 = _620.value;
_624 = (frost$core$Int) {_623};
_626 = _618.value;
_627 = _624.value;
_628 = _626 - _627;
_629 = (frost$core$Int) {_628};
_630 = *(&local12);
_631 = _630 != NULL;
_632 = (frost$core$Bit) {_631};
_633 = _632.value;
if (_633) goto block87; else goto block88;
block88:;
_635 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, _635, &$s84);
abort(); // unreachable
block87:;
_638 = _630;
_639 = *(&local17);
_640 = _639 != NULL;
_641 = (frost$core$Bit) {_640};
_642 = _641.value;
if (_642) goto block89; else goto block90;
block90:;
_644 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, _644, &$s86);
abort(); // unreachable
block89:;
_647 = _639;
_648 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_638, _647);
_649 = (frost$core$Int) {0u};
ITable* $tmp87 = _648->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp87 = $tmp87->next;
}
_650 = $tmp87->methods[0];
_651 = _650(_648, _649);
_652 = ((org$frostlang$frostc$FieldDecl*) _651);
_653 = &_652->offset;
_654 = *_653;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:111:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_657 = _629.value;
_658 = _654.value;
_659 = _657 == _658;
_660 = (frost$core$Bit) {_659};
_662 = _660.value;
if (_662) goto block92; else goto block93;
block93:;
_664 = (frost$core$Int) {111u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s88, _664);
abort(); // unreachable
block92:;
_667 = _651;
frost$core$Frost$unref$frost$core$Object$Q(_667);
_669 = ((frost$core$Object*) _648);
frost$core$Frost$unref$frost$core$Object$Q(_669);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:113
_672 = *(&local18);
_673 = _672.value;
_674 = *(&local17);
_675 = _674 != NULL;
_676 = (frost$core$Bit) {_675};
_677 = _676.value;
if (_677) goto block94; else goto block95;
block95:;
_679 = (frost$core$Int) {113u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s89, _679, &$s90);
abort(); // unreachable
block94:;
_682 = _674;
_683 = ((frost$core$Object*) _682);
frost$core$Frost$ref$frost$core$Object$Q(_683);
_685 = *((org$frostlang$frostc$ClassDecl**)_673);
_686 = ((frost$core$Object*) _685);
frost$core$Frost$unref$frost$core$Object$Q(_686);
*((org$frostlang$frostc$ClassDecl**)_673) = _682;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:114
_690 = *(&local18);
_691 = *(&local13);
_692 = ($fn91) _691->$class->vtable[3];
_693 = _692(_691);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:114:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_696 = _693.value;
*(&local19) = _696;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local20) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_701 = _690.value;
_702 = *(&local19);
_703 = *(&local20);
_704 = _702 * _703;
_705 = _701 + _704;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_708 = &(&local22)->value;
*_708 = _705;
_710 = *(&local22);
*(&local21) = _710;
_713 = *(&local21);
*(&local18) = _713;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:117
_717 = *(&local12);
_718 = _717 != NULL;
_719 = (frost$core$Bit) {_718};
_720 = _719.value;
if (_720) goto block98; else goto block99;
block99:;
_722 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _722, &$s93);
abort(); // unreachable
block98:;
_725 = _717;
_726 = *(&local17);
_727 = _726 != NULL;
_728 = (frost$core$Bit) {_727};
_729 = _728.value;
if (_729) goto block100; else goto block101;
block101:;
_731 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, _731, &$s95);
abort(); // unreachable
block100:;
_734 = _726;
_735 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_725, _734);
_736 = (frost$core$Int) {1u};
ITable* $tmp96 = _735->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp96 = $tmp96->next;
}
_737 = $tmp96->methods[0];
_738 = _737(_735, _736);
_739 = ((org$frostlang$frostc$FieldDecl*) _738);
_740 = ((org$frostlang$frostc$Symbol*) _739);
_741 = &_740->name;
_742 = *_741;
_743 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_742, &$s97);
_744 = _743.value;
if (_744) goto block102; else goto block103;
block103:;
_746 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s98, _746);
abort(); // unreachable
block102:;
_749 = _738;
frost$core$Frost$unref$frost$core$Object$Q(_749);
_751 = ((frost$core$Object*) _735);
frost$core$Frost$unref$frost$core$Object$Q(_751);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:118
_754 = *(&local18);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:118:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_757 = _754.value;
_758 = (frost$core$Int) {_757};
_760 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:118:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_763 = _760.value;
_764 = (frost$core$Int) {_763};
_766 = _758.value;
_767 = _764.value;
_768 = _766 - _767;
_769 = (frost$core$Int) {_768};
_770 = *(&local12);
_771 = _770 != NULL;
_772 = (frost$core$Bit) {_771};
_773 = _772.value;
if (_773) goto block106; else goto block107;
block107:;
_775 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s99, _775, &$s100);
abort(); // unreachable
block106:;
_778 = _770;
_779 = *(&local17);
_780 = _779 != NULL;
_781 = (frost$core$Bit) {_780};
_782 = _781.value;
if (_782) goto block108; else goto block109;
block109:;
_784 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s101, _784, &$s102);
abort(); // unreachable
block108:;
_787 = _779;
_788 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_778, _787);
_789 = (frost$core$Int) {1u};
ITable* $tmp103 = _788->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp103 = $tmp103->next;
}
_790 = $tmp103->methods[0];
_791 = _790(_788, _789);
_792 = ((org$frostlang$frostc$FieldDecl*) _791);
_793 = &_792->offset;
_794 = *_793;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:118:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_797 = _769.value;
_798 = _794.value;
_799 = _797 == _798;
_800 = (frost$core$Bit) {_799};
_802 = _800.value;
if (_802) goto block111; else goto block112;
block112:;
_804 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s104, _804);
abort(); // unreachable
block111:;
_807 = _791;
frost$core$Frost$unref$frost$core$Object$Q(_807);
_809 = ((frost$core$Object*) _788);
frost$core$Frost$unref$frost$core$Object$Q(_809);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:120
_812 = *(&local18);
_813 = _812.value;
_814 = (frost$core$Int) {18446744073709550617u};
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Interpreter.frost:120:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:973
_817 = _814.value;
_818 = ((int32_t) _817);
_819 = (frost$core$Int32) {_818};
*((frost$core$Int32*)_813) = _819;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:121
_823 = *(&local18);
_824 = (frost$core$Int) {4u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:121:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_827 = _824.value;
*(&local23) = _827;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local24) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_832 = _823.value;
_833 = *(&local23);
_834 = *(&local24);
_835 = _833 * _834;
_836 = _832 + _835;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_839 = &(&local26)->value;
*_839 = _836;
_841 = *(&local26);
*(&local25) = _841;
_844 = *(&local25);
*(&local18) = _844;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:124
_848 = *(&local12);
_849 = _848 != NULL;
_850 = (frost$core$Bit) {_849};
_851 = _850.value;
if (_851) goto block116; else goto block117;
block117:;
_853 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s105, _853, &$s106);
abort(); // unreachable
block116:;
_856 = _848;
_857 = *(&local17);
_858 = _857 != NULL;
_859 = (frost$core$Bit) {_858};
_860 = _859.value;
if (_860) goto block118; else goto block119;
block119:;
_862 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s107, _862, &$s108);
abort(); // unreachable
block118:;
_865 = _857;
_866 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_856, _865);
_867 = (frost$core$Int) {2u};
ITable* $tmp109 = _866->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp109 = $tmp109->next;
}
_868 = $tmp109->methods[0];
_869 = _868(_866, _867);
_870 = ((org$frostlang$frostc$FieldDecl*) _869);
_871 = ((org$frostlang$frostc$Symbol*) _870);
_872 = &_871->name;
_873 = *_872;
_874 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_873, &$s110);
_875 = _874.value;
if (_875) goto block120; else goto block121;
block121:;
_877 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s111, _877);
abort(); // unreachable
block120:;
_880 = _869;
frost$core$Frost$unref$frost$core$Object$Q(_880);
_882 = ((frost$core$Object*) _866);
frost$core$Frost$unref$frost$core$Object$Q(_882);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:125
_885 = *(&local18);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:125:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_888 = _885.value;
_889 = (frost$core$Int) {_888};
_891 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:125:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_894 = _891.value;
_895 = (frost$core$Int) {_894};
_897 = _889.value;
_898 = _895.value;
_899 = _897 - _898;
_900 = (frost$core$Int) {_899};
_901 = *(&local12);
_902 = _901 != NULL;
_903 = (frost$core$Bit) {_902};
_904 = _903.value;
if (_904) goto block124; else goto block125;
block125:;
_906 = (frost$core$Int) {126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s112, _906, &$s113);
abort(); // unreachable
block124:;
_909 = _901;
_910 = *(&local17);
_911 = _910 != NULL;
_912 = (frost$core$Bit) {_911};
_913 = _912.value;
if (_913) goto block126; else goto block127;
block127:;
_915 = (frost$core$Int) {126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s114, _915, &$s115);
abort(); // unreachable
block126:;
_918 = _910;
_919 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_909, _918);
_920 = (frost$core$Int) {2u};
ITable* $tmp116 = _919->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp116 = $tmp116->next;
}
_921 = $tmp116->methods[0];
_922 = _921(_919, _920);
_923 = ((org$frostlang$frostc$FieldDecl*) _922);
_924 = &_923->offset;
_925 = *_924;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:125:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_928 = _900.value;
_929 = _925.value;
_930 = _928 == _929;
_931 = (frost$core$Bit) {_930};
_933 = _931.value;
if (_933) goto block129; else goto block130;
block130:;
_935 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s117, _935);
abort(); // unreachable
block129:;
_938 = _922;
frost$core$Frost$unref$frost$core$Object$Q(_938);
_940 = ((frost$core$Object*) _919);
frost$core$Frost$unref$frost$core$Object$Q(_940);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:127
_943 = *(&local18);
_944 = _943.value;
_945 = (frost$core$Int8) {0u};
*((frost$core$Int8*)_944) = _945;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:128
_948 = *(&local18);
_949 = (frost$core$Int) {4u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:128:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_952 = _949.value;
*(&local27) = _952;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local28) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_957 = _948.value;
_958 = *(&local27);
_959 = *(&local28);
_960 = _958 * _959;
_961 = _957 + _960;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_964 = &(&local30)->value;
*_964 = _961;
_966 = *(&local30);
*(&local29) = _966;
_969 = *(&local29);
*(&local18) = _969;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:131
_973 = *(&local12);
_974 = _973 != NULL;
_975 = (frost$core$Bit) {_974};
_976 = _975.value;
if (_976) goto block133; else goto block134;
block134:;
_978 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s118, _978, &$s119);
abort(); // unreachable
block133:;
_981 = _973;
_982 = *(&local17);
_983 = _982 != NULL;
_984 = (frost$core$Bit) {_983};
_985 = _984.value;
if (_985) goto block135; else goto block136;
block136:;
_987 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s120, _987, &$s121);
abort(); // unreachable
block135:;
_990 = _982;
_991 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_981, _990);
_992 = (frost$core$Int) {3u};
ITable* $tmp122 = _991->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp122 = $tmp122->next;
}
_993 = $tmp122->methods[0];
_994 = _993(_991, _992);
_995 = ((org$frostlang$frostc$FieldDecl*) _994);
_996 = ((org$frostlang$frostc$Symbol*) _995);
_997 = &_996->name;
_998 = *_997;
_999 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_998, &$s123);
_1000 = _999.value;
if (_1000) goto block137; else goto block138;
block138:;
_1002 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s124, _1002);
abort(); // unreachable
block137:;
_1005 = _994;
frost$core$Frost$unref$frost$core$Object$Q(_1005);
_1007 = ((frost$core$Object*) _991);
frost$core$Frost$unref$frost$core$Object$Q(_1007);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:132
_1010 = *(&local18);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:132:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1013 = _1010.value;
_1014 = (frost$core$Int) {_1013};
_1016 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:132:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1019 = _1016.value;
_1020 = (frost$core$Int) {_1019};
_1022 = _1014.value;
_1023 = _1020.value;
_1024 = _1022 - _1023;
_1025 = (frost$core$Int) {_1024};
_1026 = *(&local12);
_1027 = _1026 != NULL;
_1028 = (frost$core$Bit) {_1027};
_1029 = _1028.value;
if (_1029) goto block141; else goto block142;
block142:;
_1031 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s125, _1031, &$s126);
abort(); // unreachable
block141:;
_1034 = _1026;
_1035 = *(&local17);
_1036 = _1035 != NULL;
_1037 = (frost$core$Bit) {_1036};
_1038 = _1037.value;
if (_1038) goto block143; else goto block144;
block144:;
_1040 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s127, _1040, &$s128);
abort(); // unreachable
block143:;
_1043 = _1035;
_1044 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_1034, _1043);
_1045 = (frost$core$Int) {3u};
ITable* $tmp129 = _1044->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp129 = $tmp129->next;
}
_1046 = $tmp129->methods[0];
_1047 = _1046(_1044, _1045);
_1048 = ((org$frostlang$frostc$FieldDecl*) _1047);
_1049 = &_1048->offset;
_1050 = *_1049;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:132:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1053 = _1025.value;
_1054 = _1050.value;
_1055 = _1053 == _1054;
_1056 = (frost$core$Bit) {_1055};
_1058 = _1056.value;
if (_1058) goto block146; else goto block147;
block147:;
_1060 = (frost$core$Int) {132u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s130, _1060);
abort(); // unreachable
block146:;
_1063 = _1047;
frost$core$Frost$unref$frost$core$Object$Q(_1063);
_1065 = ((frost$core$Object*) _1044);
frost$core$Frost$unref$frost$core$Object$Q(_1065);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:134
_1068 = *(&local10);
_1069 = &_1068->_length;
_1070 = *_1069;
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:134:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_1073 = _1070.value;
_1074 = _1073 * 1u;
_1075 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_1074);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_1078 = &(&local32)->value;
*_1078 = _1075;
_1080 = *(&local32);
*(&local31) = _1080;
_1083 = *(&local31);
*(&local33) = _1083;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:135
_1087 = (frost$core$Int) {0u};
_1088 = *(&local10);
_1089 = &_1088->_length;
_1090 = *_1089;
_1091 = (frost$core$Bit) {false};
_1092 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1087, _1090, _1091);
_1093 = _1092.min;
*(&local34) = _1093;
_1095 = _1092.max;
_1096 = _1092.inclusive;
_1097 = _1096.value;
_1098 = (frost$core$Int) {1u};
if (_1097) goto block153; else goto block154;
block153:;
_1100 = _1093.value;
_1101 = _1095.value;
_1102 = _1100 <= _1101;
_1103 = (frost$core$Bit) {_1102};
_1104 = _1103.value;
if (_1104) goto block150; else goto block151;
block154:;
_1106 = _1093.value;
_1107 = _1095.value;
_1108 = _1106 < _1107;
_1109 = (frost$core$Bit) {_1108};
_1110 = _1109.value;
if (_1110) goto block150; else goto block151;
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:136
_1113 = *(&local33);
_1114 = _1113.value;
_1115 = *(&local34);
_1116 = frost$core$Int64$init$frost$core$Int(_1115);
_1117 = *(&local10);
_1118 = &_1117->data;
_1119 = *_1118;
_1120 = _1119.value;
_1121 = *(&local34);
_1122 = frost$core$Int64$init$frost$core$Int(_1121);
_1123 = _1122.value;
_1124 = ((frost$core$Char8*)_1120)[_1123];
_1125 = _1116.value;
((frost$core$Char8*)_1114)[_1125] = _1124;
_1128 = *(&local34);
_1129 = _1095.value;
_1130 = _1128.value;
_1131 = _1129 - _1130;
_1132 = (frost$core$Int) {_1131};
if (_1097) goto block156; else goto block157;
block156:;
_1134 = _1132.value;
_1135 = _1098.value;
_1136 = _1134 >= _1135;
_1137 = (frost$core$Bit) {_1136};
_1138 = _1137.value;
if (_1138) goto block155; else goto block151;
block157:;
_1140 = _1132.value;
_1141 = _1098.value;
_1142 = _1140 > _1141;
_1143 = (frost$core$Bit) {_1142};
_1144 = _1143.value;
if (_1144) goto block155; else goto block151;
block155:;
_1146 = _1128.value;
_1147 = _1098.value;
_1148 = _1146 + _1147;
_1149 = (frost$core$Int) {_1148};
*(&local34) = _1149;
goto block150;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:138
_1153 = *(&local18);
_1154 = _1153.value;
_1155 = *(&local33);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:138:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1158 = _1155.value;
_1159 = (frost$core$Int) {_1158};
*((frost$core$Int*)_1154) = _1159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:139
_1163 = *(&local18);
_1164 = *(&local13);
_1165 = ($fn131) _1164->$class->vtable[3];
_1166 = _1165(_1164);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:139:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_1169 = _1166.value;
*(&local35) = _1169;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local36) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_1174 = _1163.value;
_1175 = *(&local35);
_1176 = *(&local36);
_1177 = _1175 * _1176;
_1178 = _1174 + _1177;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_1181 = &(&local38)->value;
*_1181 = _1178;
_1183 = *(&local38);
*(&local37) = _1183;
_1186 = *(&local37);
*(&local18) = _1186;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:142
_1190 = *(&local12);
_1191 = _1190 != NULL;
_1192 = (frost$core$Bit) {_1191};
_1193 = _1192.value;
if (_1193) goto block161; else goto block162;
block162:;
_1195 = (frost$core$Int) {142u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, _1195, &$s133);
abort(); // unreachable
block161:;
_1198 = _1190;
_1199 = *(&local17);
_1200 = _1199 != NULL;
_1201 = (frost$core$Bit) {_1200};
_1202 = _1201.value;
if (_1202) goto block163; else goto block164;
block164:;
_1204 = (frost$core$Int) {142u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s134, _1204, &$s135);
abort(); // unreachable
block163:;
_1207 = _1199;
_1208 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_1198, _1207);
_1209 = (frost$core$Int) {4u};
ITable* $tmp136 = _1208->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp136 = $tmp136->next;
}
_1210 = $tmp136->methods[0];
_1211 = _1210(_1208, _1209);
_1212 = ((org$frostlang$frostc$FieldDecl*) _1211);
_1213 = ((org$frostlang$frostc$Symbol*) _1212);
_1214 = &_1213->name;
_1215 = *_1214;
_1216 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_1215, &$s137);
_1217 = _1216.value;
if (_1217) goto block165; else goto block166;
block166:;
_1219 = (frost$core$Int) {142u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s138, _1219);
abort(); // unreachable
block165:;
_1222 = _1211;
frost$core$Frost$unref$frost$core$Object$Q(_1222);
_1224 = ((frost$core$Object*) _1208);
frost$core$Frost$unref$frost$core$Object$Q(_1224);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:143
_1227 = *(&local18);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:143:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1230 = _1227.value;
_1231 = (frost$core$Int) {_1230};
_1233 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:143:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1236 = _1233.value;
_1237 = (frost$core$Int) {_1236};
_1239 = _1231.value;
_1240 = _1237.value;
_1241 = _1239 - _1240;
_1242 = (frost$core$Int) {_1241};
_1243 = *(&local12);
_1244 = _1243 != NULL;
_1245 = (frost$core$Bit) {_1244};
_1246 = _1245.value;
if (_1246) goto block169; else goto block170;
block170:;
_1248 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, _1248, &$s140);
abort(); // unreachable
block169:;
_1251 = _1243;
_1252 = *(&local17);
_1253 = _1252 != NULL;
_1254 = (frost$core$Bit) {_1253};
_1255 = _1254.value;
if (_1255) goto block171; else goto block172;
block172:;
_1257 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s141, _1257, &$s142);
abort(); // unreachable
block171:;
_1260 = _1252;
_1261 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_1251, _1260);
_1262 = (frost$core$Int) {4u};
ITable* $tmp143 = _1261->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp143 = $tmp143->next;
}
_1263 = $tmp143->methods[0];
_1264 = _1263(_1261, _1262);
_1265 = ((org$frostlang$frostc$FieldDecl*) _1264);
_1266 = &_1265->offset;
_1267 = *_1266;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:143:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1270 = _1242.value;
_1271 = _1267.value;
_1272 = _1270 == _1271;
_1273 = (frost$core$Bit) {_1272};
_1275 = _1273.value;
if (_1275) goto block174; else goto block175;
block175:;
_1277 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s144, _1277);
abort(); // unreachable
block174:;
_1280 = _1264;
frost$core$Frost$unref$frost$core$Object$Q(_1280);
_1282 = ((frost$core$Object*) _1261);
frost$core$Frost$unref$frost$core$Object$Q(_1282);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:145
_1285 = *(&local18);
_1286 = _1285.value;
_1287 = *(&local10);
_1288 = &_1287->_length;
_1289 = *_1288;
*((frost$core$Int*)_1286) = _1289;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:146
_1292 = *(&local18);
_1293 = *(&local13);
_1294 = ($fn145) _1293->$class->vtable[2];
_1295 = _1294(_1293);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:146:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_1298 = _1295.value;
*(&local39) = _1298;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local40) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_1303 = _1292.value;
_1304 = *(&local39);
_1305 = *(&local40);
_1306 = _1304 * _1305;
_1307 = _1303 + _1306;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_1310 = &(&local42)->value;
*_1310 = _1307;
_1312 = *(&local42);
*(&local41) = _1312;
_1315 = *(&local41);
*(&local18) = _1315;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:149
_1319 = *(&local12);
_1320 = _1319 != NULL;
_1321 = (frost$core$Bit) {_1320};
_1322 = _1321.value;
if (_1322) goto block178; else goto block179;
block179:;
_1324 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s146, _1324, &$s147);
abort(); // unreachable
block178:;
_1327 = _1319;
_1328 = *(&local17);
_1329 = _1328 != NULL;
_1330 = (frost$core$Bit) {_1329};
_1331 = _1330.value;
if (_1331) goto block180; else goto block181;
block181:;
_1333 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s148, _1333, &$s149);
abort(); // unreachable
block180:;
_1336 = _1328;
_1337 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_1327, _1336);
_1338 = (frost$core$Int) {5u};
ITable* $tmp150 = _1337->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp150 = $tmp150->next;
}
_1339 = $tmp150->methods[0];
_1340 = _1339(_1337, _1338);
_1341 = ((org$frostlang$frostc$FieldDecl*) _1340);
_1342 = ((org$frostlang$frostc$Symbol*) _1341);
_1343 = &_1342->name;
_1344 = *_1343;
_1345 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_1344, &$s151);
_1346 = _1345.value;
if (_1346) goto block182; else goto block183;
block183:;
_1348 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s152, _1348);
abort(); // unreachable
block182:;
_1351 = _1340;
frost$core$Frost$unref$frost$core$Object$Q(_1351);
_1353 = ((frost$core$Object*) _1337);
frost$core$Frost$unref$frost$core$Object$Q(_1353);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:150
_1356 = *(&local18);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:150:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1359 = _1356.value;
_1360 = (frost$core$Int) {_1359};
_1362 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:150:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1365 = _1362.value;
_1366 = (frost$core$Int) {_1365};
_1368 = _1360.value;
_1369 = _1366.value;
_1370 = _1368 - _1369;
_1371 = (frost$core$Int) {_1370};
_1372 = *(&local12);
_1373 = _1372 != NULL;
_1374 = (frost$core$Bit) {_1373};
_1375 = _1374.value;
if (_1375) goto block186; else goto block187;
block187:;
_1377 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s153, _1377, &$s154);
abort(); // unreachable
block186:;
_1380 = _1372;
_1381 = *(&local17);
_1382 = _1381 != NULL;
_1383 = (frost$core$Bit) {_1382};
_1384 = _1383.value;
if (_1384) goto block188; else goto block189;
block189:;
_1386 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s155, _1386, &$s156);
abort(); // unreachable
block188:;
_1389 = _1381;
_1390 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_1380, _1389);
_1391 = (frost$core$Int) {5u};
ITable* $tmp157 = _1390->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp157 = $tmp157->next;
}
_1392 = $tmp157->methods[0];
_1393 = _1392(_1390, _1391);
_1394 = ((org$frostlang$frostc$FieldDecl*) _1393);
_1395 = &_1394->offset;
_1396 = *_1395;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:150:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1399 = _1371.value;
_1400 = _1396.value;
_1401 = _1399 == _1400;
_1402 = (frost$core$Bit) {_1401};
_1404 = _1402.value;
if (_1404) goto block191; else goto block192;
block192:;
_1406 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s158, _1406);
abort(); // unreachable
block191:;
_1409 = _1393;
frost$core$Frost$unref$frost$core$Object$Q(_1409);
_1411 = ((frost$core$Object*) _1390);
frost$core$Frost$unref$frost$core$Object$Q(_1411);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:152
_1414 = *(&local18);
_1415 = *(&local13);
_1416 = ($fn159) _1415->$class->vtable[2];
_1417 = _1416(_1415);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:152:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_1420 = _1417.value;
*(&local43) = _1420;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local44) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_1425 = _1414.value;
_1426 = *(&local43);
_1427 = *(&local44);
_1428 = _1426 * _1427;
_1429 = _1425 + _1428;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_1432 = &(&local46)->value;
*_1432 = _1429;
_1434 = *(&local46);
*(&local45) = _1434;
_1437 = *(&local45);
*(&local18) = _1437;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:155
_1441 = *(&local12);
_1442 = _1441 != NULL;
_1443 = (frost$core$Bit) {_1442};
_1444 = _1443.value;
if (_1444) goto block195; else goto block196;
block196:;
_1446 = (frost$core$Int) {155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s160, _1446, &$s161);
abort(); // unreachable
block195:;
_1449 = _1441;
_1450 = *(&local17);
_1451 = _1450 != NULL;
_1452 = (frost$core$Bit) {_1451};
_1453 = _1452.value;
if (_1453) goto block197; else goto block198;
block198:;
_1455 = (frost$core$Int) {155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, _1455, &$s163);
abort(); // unreachable
block197:;
_1458 = _1450;
_1459 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_1449, _1458);
_1460 = (frost$core$Int) {6u};
ITable* $tmp164 = _1459->$class->itable;
while ($tmp164->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp164 = $tmp164->next;
}
_1461 = $tmp164->methods[0];
_1462 = _1461(_1459, _1460);
_1463 = ((org$frostlang$frostc$FieldDecl*) _1462);
_1464 = ((org$frostlang$frostc$Symbol*) _1463);
_1465 = &_1464->name;
_1466 = *_1465;
_1467 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_1466, &$s165);
_1468 = _1467.value;
if (_1468) goto block199; else goto block200;
block200:;
_1470 = (frost$core$Int) {155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s166, _1470);
abort(); // unreachable
block199:;
_1473 = _1462;
frost$core$Frost$unref$frost$core$Object$Q(_1473);
_1475 = ((frost$core$Object*) _1459);
frost$core$Frost$unref$frost$core$Object$Q(_1475);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:156
_1478 = *(&local18);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:156:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1481 = _1478.value;
_1482 = (frost$core$Int) {_1481};
_1484 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:156:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1487 = _1484.value;
_1488 = (frost$core$Int) {_1487};
_1490 = _1482.value;
_1491 = _1488.value;
_1492 = _1490 - _1491;
_1493 = (frost$core$Int) {_1492};
_1494 = *(&local12);
_1495 = _1494 != NULL;
_1496 = (frost$core$Bit) {_1495};
_1497 = _1496.value;
if (_1497) goto block203; else goto block204;
block204:;
_1499 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s167, _1499, &$s168);
abort(); // unreachable
block203:;
_1502 = _1494;
_1503 = *(&local17);
_1504 = _1503 != NULL;
_1505 = (frost$core$Bit) {_1504};
_1506 = _1505.value;
if (_1506) goto block205; else goto block206;
block206:;
_1508 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s169, _1508, &$s170);
abort(); // unreachable
block205:;
_1511 = _1503;
_1512 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_1502, _1511);
_1513 = (frost$core$Int) {6u};
ITable* $tmp171 = _1512->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp171 = $tmp171->next;
}
_1514 = $tmp171->methods[0];
_1515 = _1514(_1512, _1513);
_1516 = ((org$frostlang$frostc$FieldDecl*) _1515);
_1517 = &_1516->offset;
_1518 = *_1517;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:156:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1521 = _1493.value;
_1522 = _1518.value;
_1523 = _1521 == _1522;
_1524 = (frost$core$Bit) {_1523};
_1526 = _1524.value;
if (_1526) goto block208; else goto block209;
block209:;
_1528 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s172, _1528);
abort(); // unreachable
block208:;
_1531 = _1515;
frost$core$Frost$unref$frost$core$Object$Q(_1531);
_1533 = ((frost$core$Object*) _1512);
frost$core$Frost$unref$frost$core$Object$Q(_1533);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:158
_1536 = *(&local18);
_1537 = _1536.value;
_1538 = (frost$core$Int) {0u};
*((frost$core$Int*)_1537) = _1538;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:159
_1541 = *(&local18);
_1542 = *(&local13);
_1543 = ($fn173) _1542->$class->vtable[2];
_1544 = _1543(_1542);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:159:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_1547 = _1544.value;
*(&local47) = _1547;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local48) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_1552 = _1541.value;
_1553 = *(&local47);
_1554 = *(&local48);
_1555 = _1553 * _1554;
_1556 = _1552 + _1555;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_1559 = &(&local50)->value;
*_1559 = _1556;
_1561 = *(&local50);
*(&local49) = _1561;
_1564 = *(&local49);
*(&local18) = _1564;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:161
_1568 = *(&local18);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:161:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1571 = _1568.value;
_1572 = (frost$core$Int) {_1571};
_1574 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:161:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1577 = _1574.value;
_1578 = (frost$core$Int) {_1577};
_1580 = _1572.value;
_1581 = _1578.value;
_1582 = _1580 - _1581;
_1583 = (frost$core$Int) {_1582};
_1584 = &param0->interpreter;
_1585 = *_1584;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:162:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_1590 = &_1585->_valid;
_1591 = *_1590;
_1593 = _1591.value;
if (_1593) goto block216; else goto block217;
block217:;
_1595 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s174, _1595, &$s175);
abort(); // unreachable
block216:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_1599 = &_1585->value;
_1600 = *_1599;
_1601 = _1600;
_1602 = _1601;
frost$core$Frost$ref$frost$core$Object$Q(_1602);
_1605 = ((org$frostlang$frostc$Interpreter*) _1601);
_1606 = &_1605->memoryLayout;
_1607 = *_1606;
_1608 = *(&local17);
_1609 = _1608 != NULL;
_1610 = (frost$core$Bit) {_1609};
_1611 = _1610.value;
if (_1611) goto block218; else goto block219;
block219:;
_1613 = (frost$core$Int) {162u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s176, _1613, &$s177);
abort(); // unreachable
block218:;
_1616 = _1608;
_1617 = &_1616->type;
_1618 = *_1617;
_1619 = ($fn178) _1607->$class->vtable[7];
_1620 = _1619(_1607, _1618);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:161:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1623 = _1583.value;
_1624 = _1620.value;
_1625 = _1623 == _1624;
_1626 = (frost$core$Bit) {_1625};
_1628 = _1626.value;
if (_1628) goto block221; else goto block222;
block222:;
_1630 = (frost$core$Int) {161u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s179, _1630);
abort(); // unreachable
block221:;
_1633 = _1601;
frost$core$Frost$unref$frost$core$Object$Q(_1633);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:163
_1636 = *(&local16);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:163:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1639 = _1636.value;
_1640 = (frost$core$Int) {_1639};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:163:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_1644 = _1640.value;
_1645 = ((int64_t) _1644);
_1646 = (frost$core$Int64) {_1645};
_1648 = ((frost$core$Int64$nullable) { _1646, true });
*(&local11) = _1648;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:164
_1651 = &param0->interpreter;
_1652 = *_1651;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:164:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_1657 = &_1652->_valid;
_1658 = *_1657;
_1660 = _1658.value;
if (_1660) goto block227; else goto block228;
block228:;
_1662 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s180, _1662, &$s181);
abort(); // unreachable
block227:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_1666 = &_1652->value;
_1667 = *_1666;
_1668 = _1667;
_1669 = _1668;
frost$core$Frost$ref$frost$core$Object$Q(_1669);
_1672 = ((org$frostlang$frostc$Interpreter*) _1668);
_1673 = &_1672->strings;
_1674 = *_1673;
_1675 = *(&local10);
_1676 = ((frost$collections$HashKey*) _1675);
_1677 = *(&local11);
_1678 = _1677.nonnull;
_1679 = (frost$core$Bit) {_1678};
_1680 = _1679.value;
if (_1680) goto block229; else goto block230;
block230:;
_1682 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s182, _1682, &$s183);
abort(); // unreachable
block229:;
_1685 = ((frost$core$Int64) _1677.value);
frost$core$Int64$wrapper* $tmp184;
$tmp184 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp184->value = _1685;
_1686 = ((frost$core$Object*) $tmp184);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_1674, _1676, _1686);
_1688 = _1686;
frost$core$Frost$unref$frost$core$Object$Q(_1688);
_1690 = _1668;
frost$core$Frost$unref$frost$core$Object$Q(_1690);
_1692 = *(&local17);
_1693 = ((frost$core$Object*) _1692);
frost$core$Frost$unref$frost$core$Object$Q(_1693);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1696 = *(&local13);
_1697 = ((frost$core$Object*) _1696);
frost$core$Frost$unref$frost$core$Object$Q(_1697);
*(&local13) = ((org$frostlang$frostc$MemoryLayout*) NULL);
_1700 = *(&local12);
_1701 = ((frost$core$Object*) _1700);
frost$core$Frost$unref$frost$core$Object$Q(_1701);
*(&local12) = ((org$frostlang$frostc$Compiler*) NULL);
goto block53;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:166
_1706 = *(&local11);
_1707 = _1706.nonnull;
_1708 = (frost$core$Bit) {_1707};
_1709 = _1708.value;
if (_1709) goto block231; else goto block232;
block232:;
_1711 = (frost$core$Int) {166u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s185, _1711, &$s186);
abort(); // unreachable
block231:;
_1714 = ((frost$core$Int64) _1706.value);
_1715 = *(&local10);
_1716 = ((frost$core$Object*) _1715);
frost$core$Frost$unref$frost$core$Object$Q(_1716);
*(&local10) = ((frost$core$String*) NULL);
return _1714;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:169
_1721 = (frost$core$Int) {169u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s187, _1721);
abort(); // unreachable
block1:;
goto block233;
block233:;

}
void org$frostlang$frostc$Interpreter$Context$cleanup(void* rawSelf) {
org$frostlang$frostc$Interpreter$Context* param0 = (org$frostlang$frostc$Interpreter$Context*) rawSelf;

frost$core$Object* _1;
frost$core$Weak** _3;
frost$core$Weak* _4;
frost$core$Object* _5;
org$frostlang$frostc$Interpreter$MethodCode** _7;
org$frostlang$frostc$Interpreter$MethodCode* _8;
frost$core$Object* _9;
frost$collections$Array** _11;
frost$collections$Array* _12;
frost$core$Object* _13;
frost$collections$Array** _15;
frost$collections$Array* _16;
frost$core$Object* _17;
frost$collections$Array** _19;
frost$collections$Array* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:41
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->interpreter;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->code;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->locals;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->arguments;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->statements;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return;

}

