#include "frost/io/OutputStream.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Error.h"
#include "frost/core/UInt16.h"
#include "frost/io/ByteOrder.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char8.h"


static frost$core$String $s1;
frost$io$OutputStream$class_type frost$io$OutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$OutputStream$cleanup, NULL, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q} };

typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn18)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn33)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn48)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn58)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Bit (*$fn79)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn85)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn100)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn115)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn125)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Bit (*$fn146)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn152)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn167)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn182)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn192)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn206)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn211)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn216)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn221)(frost$io$OutputStream*, frost$core$UInt64);
typedef frost$core$Error* (*$fn246)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn277)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn280)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn284)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn288)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn293)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn297)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn310)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn314)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn319)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn325)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn338)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn342)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn347)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn351)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn365)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn372)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$String* (*$fn375)(frost$core$Object*);
typedef frost$core$Error* (*$fn378)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn381)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn389)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn401)(frost$core$Object*);
typedef frost$core$Error* (*$fn404)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn409)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, 7670378173706479600, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

frost$core$Error* frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt16 param1) {

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:40
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:41
frost$io$ByteOrder* $tmp2 = &param0->byteOrder;
frost$io$ByteOrder $tmp3 = *$tmp2;
frost$io$ByteOrder$wrapper* $tmp4;
$tmp4 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int $tmp5 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:41:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp6 = &(&local2)->$rawValue;
*$tmp6 = $tmp5;
frost$io$ByteOrder $tmp7 = *(&local2);
*(&local1) = $tmp7;
frost$io$ByteOrder $tmp8 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp9;
$tmp9 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp9->value = $tmp8;
ITable* $tmp10 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Bit $tmp13 = $tmp11(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp9));
bool $tmp14 = $tmp13.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp9)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
if ($tmp14) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:42
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:42:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1106
uint16_t $tmp15 = param1.value;
frost$core$UInt8 $tmp16 = (frost$core$UInt8) {((uint8_t) $tmp15)};
$fn18 $tmp17 = ($fn18) param0->$class->vtable[2];
frost$core$Error* $tmp19 = $tmp17(param0, $tmp16);
if ($tmp19 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19 != NULL};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block10; else goto block11;
block11:;
frost$core$Int $tmp22 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block10:;
*(&local0) = $tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:43
frost$core$UInt16 $tmp25 = (frost$core$UInt16) {8u};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:43:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:517
uint16_t $tmp26 = param1.value;
uint16_t $tmp27 = $tmp25.value;
uint32_t $tmp28 = ((uint32_t) $tmp26) >> ((uint32_t) $tmp27);
frost$core$UInt32 $tmp29 = (frost$core$UInt32) {$tmp28};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:43:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
uint32_t $tmp30 = $tmp29.value;
frost$core$UInt8 $tmp31 = (frost$core$UInt8) {((uint8_t) $tmp30)};
$fn33 $tmp32 = ($fn33) param0->$class->vtable[2];
frost$core$Error* $tmp34 = $tmp32(param0, $tmp31);
if ($tmp34 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34 != NULL};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block16; else goto block17;
block17:;
frost$core$Int $tmp37 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, $tmp37, &$s39);
abort(); // unreachable
block16:;
*(&local0) = $tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:46
frost$core$UInt16 $tmp40 = (frost$core$UInt16) {8u};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:46:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:517
uint16_t $tmp41 = param1.value;
uint16_t $tmp42 = $tmp40.value;
uint32_t $tmp43 = ((uint32_t) $tmp41) >> ((uint32_t) $tmp42);
frost$core$UInt32 $tmp44 = (frost$core$UInt32) {$tmp43};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:46:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
uint32_t $tmp45 = $tmp44.value;
frost$core$UInt8 $tmp46 = (frost$core$UInt8) {((uint8_t) $tmp45)};
$fn48 $tmp47 = ($fn48) param0->$class->vtable[2];
frost$core$Error* $tmp49 = $tmp47(param0, $tmp46);
if ($tmp49 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49 != NULL};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block22; else goto block23;
block23:;
frost$core$Int $tmp52 = (frost$core$Int) {46u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block22:;
*(&local0) = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:47
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:47:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1106
uint16_t $tmp55 = param1.value;
frost$core$UInt8 $tmp56 = (frost$core$UInt8) {((uint8_t) $tmp55)};
$fn58 $tmp57 = ($fn58) param0->$class->vtable[2];
frost$core$Error* $tmp59 = $tmp57(param0, $tmp56);
if ($tmp59 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59 != NULL};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block27; else goto block28;
block28:;
frost$core$Int $tmp62 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s63, $tmp62, &$s64);
abort(); // unreachable
block27:;
*(&local0) = $tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:49
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:52
frost$core$Error* $tmp66 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Error* $tmp67 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp66;
block2:;
frost$core$Error* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((frost$core$Error*) NULL);
goto block29;
block29:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt32 param1) {

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:63
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:64
frost$io$ByteOrder* $tmp69 = &param0->byteOrder;
frost$io$ByteOrder $tmp70 = *$tmp69;
frost$io$ByteOrder$wrapper* $tmp71;
$tmp71 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp71->value = $tmp70;
frost$core$Int $tmp72 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:64:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp73 = &(&local2)->$rawValue;
*$tmp73 = $tmp72;
frost$io$ByteOrder $tmp74 = *(&local2);
*(&local1) = $tmp74;
frost$io$ByteOrder $tmp75 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp76;
$tmp76 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp76->value = $tmp75;
ITable* $tmp77 = ((frost$core$Equatable*) $tmp71)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
frost$core$Bit $tmp80 = $tmp78(((frost$core$Equatable*) $tmp71), ((frost$core$Equatable*) $tmp76));
bool $tmp81 = $tmp80.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp76)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp71)));
if ($tmp81) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:65
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:65:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
uint32_t $tmp82 = param1.value;
frost$core$UInt16 $tmp83 = (frost$core$UInt16) {((uint16_t) $tmp82)};
$fn85 $tmp84 = ($fn85) param0->$class->vtable[3];
frost$core$Error* $tmp86 = $tmp84(param0, $tmp83);
if ($tmp86 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86 != NULL};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block10; else goto block11;
block11:;
frost$core$Int $tmp89 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s90, $tmp89, &$s91);
abort(); // unreachable
block10:;
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:66
frost$core$UInt32 $tmp92 = (frost$core$UInt32) {16u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:66:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:382
uint32_t $tmp93 = param1.value;
uint32_t $tmp94 = $tmp92.value;
uint32_t $tmp95 = $tmp93 >> $tmp94;
frost$core$UInt32 $tmp96 = (frost$core$UInt32) {$tmp95};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
uint32_t $tmp97 = $tmp96.value;
frost$core$UInt16 $tmp98 = (frost$core$UInt16) {((uint16_t) $tmp97)};
$fn100 $tmp99 = ($fn100) param0->$class->vtable[3];
frost$core$Error* $tmp101 = $tmp99(param0, $tmp98);
if ($tmp101 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101 != NULL};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block16; else goto block17;
block17:;
frost$core$Int $tmp104 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s105, $tmp104, &$s106);
abort(); // unreachable
block16:;
*(&local0) = $tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:69
frost$core$UInt32 $tmp107 = (frost$core$UInt32) {16u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:69:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:382
uint32_t $tmp108 = param1.value;
uint32_t $tmp109 = $tmp107.value;
uint32_t $tmp110 = $tmp108 >> $tmp109;
frost$core$UInt32 $tmp111 = (frost$core$UInt32) {$tmp110};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
uint32_t $tmp112 = $tmp111.value;
frost$core$UInt16 $tmp113 = (frost$core$UInt16) {((uint16_t) $tmp112)};
$fn115 $tmp114 = ($fn115) param0->$class->vtable[3];
frost$core$Error* $tmp116 = $tmp114(param0, $tmp113);
if ($tmp116 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116 != NULL};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block22; else goto block23;
block23:;
frost$core$Int $tmp119 = (frost$core$Int) {69u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block22:;
*(&local0) = $tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:70
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:70:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
uint32_t $tmp122 = param1.value;
frost$core$UInt16 $tmp123 = (frost$core$UInt16) {((uint16_t) $tmp122)};
$fn125 $tmp124 = ($fn125) param0->$class->vtable[3];
frost$core$Error* $tmp126 = $tmp124(param0, $tmp123);
if ($tmp126 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126 != NULL};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block27; else goto block28;
block28:;
frost$core$Int $tmp129 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s130, $tmp129, &$s131);
abort(); // unreachable
block27:;
*(&local0) = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:75
frost$core$Error* $tmp133 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Error* $tmp134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp133;
block2:;
frost$core$Error* $tmp135 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local0) = ((frost$core$Error*) NULL);
goto block29;
block29:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt64 param1) {

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:86
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:87
frost$io$ByteOrder* $tmp136 = &param0->byteOrder;
frost$io$ByteOrder $tmp137 = *$tmp136;
frost$io$ByteOrder$wrapper* $tmp138;
$tmp138 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp138->value = $tmp137;
frost$core$Int $tmp139 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:87:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp140 = &(&local2)->$rawValue;
*$tmp140 = $tmp139;
frost$io$ByteOrder $tmp141 = *(&local2);
*(&local1) = $tmp141;
frost$io$ByteOrder $tmp142 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp143;
$tmp143 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp143->value = $tmp142;
ITable* $tmp144 = ((frost$core$Equatable*) $tmp138)->$class->itable;
while ($tmp144->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp144 = $tmp144->next;
}
$fn146 $tmp145 = $tmp144->methods[0];
frost$core$Bit $tmp147 = $tmp145(((frost$core$Equatable*) $tmp138), ((frost$core$Equatable*) $tmp143));
bool $tmp148 = $tmp147.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp143)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp138)));
if ($tmp148) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:88
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:88:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
uint64_t $tmp149 = param1.value;
frost$core$UInt32 $tmp150 = (frost$core$UInt32) {((uint32_t) $tmp149)};
$fn152 $tmp151 = ($fn152) param0->$class->vtable[4];
frost$core$Error* $tmp153 = $tmp151(param0, $tmp150);
if ($tmp153 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153 != NULL};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block10; else goto block11;
block11:;
frost$core$Int $tmp156 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s157, $tmp156, &$s158);
abort(); // unreachable
block10:;
*(&local0) = $tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:89
frost$core$UInt64 $tmp159 = (frost$core$UInt64) {32u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:89:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
uint64_t $tmp160 = param1.value;
uint64_t $tmp161 = $tmp159.value;
uint64_t $tmp162 = $tmp160 >> $tmp161;
frost$core$UInt64 $tmp163 = (frost$core$UInt64) {$tmp162};
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:89:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
uint64_t $tmp164 = $tmp163.value;
frost$core$UInt32 $tmp165 = (frost$core$UInt32) {((uint32_t) $tmp164)};
$fn167 $tmp166 = ($fn167) param0->$class->vtable[4];
frost$core$Error* $tmp168 = $tmp166(param0, $tmp165);
if ($tmp168 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168 != NULL};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block16; else goto block17;
block17:;
frost$core$Int $tmp171 = (frost$core$Int) {89u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s172, $tmp171, &$s173);
abort(); // unreachable
block16:;
*(&local0) = $tmp168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:92
frost$core$UInt64 $tmp174 = (frost$core$UInt64) {32u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:92:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
uint64_t $tmp175 = param1.value;
uint64_t $tmp176 = $tmp174.value;
uint64_t $tmp177 = $tmp175 >> $tmp176;
frost$core$UInt64 $tmp178 = (frost$core$UInt64) {$tmp177};
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:92:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
uint64_t $tmp179 = $tmp178.value;
frost$core$UInt32 $tmp180 = (frost$core$UInt32) {((uint32_t) $tmp179)};
$fn182 $tmp181 = ($fn182) param0->$class->vtable[4];
frost$core$Error* $tmp183 = $tmp181(param0, $tmp180);
if ($tmp183 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183 != NULL};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block22; else goto block23;
block23:;
frost$core$Int $tmp186 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s187, $tmp186, &$s188);
abort(); // unreachable
block22:;
*(&local0) = $tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:93
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:93:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
uint64_t $tmp189 = param1.value;
frost$core$UInt32 $tmp190 = (frost$core$UInt32) {((uint32_t) $tmp189)};
$fn192 $tmp191 = ($fn192) param0->$class->vtable[4];
frost$core$Error* $tmp193 = $tmp191(param0, $tmp190);
if ($tmp193 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193 != NULL};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block27; else goto block28;
block28:;
frost$core$Int $tmp196 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s197, $tmp196, &$s198);
abort(); // unreachable
block27:;
*(&local0) = $tmp193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:98
frost$core$Error* $tmp200 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Error* $tmp201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp200;
block2:;
frost$core$Error* $tmp202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local0) = ((frost$core$Error*) NULL);
goto block29;
block29:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
int8_t $tmp203 = param1.value;
frost$core$UInt8 $tmp204 = (frost$core$UInt8) {((uint8_t) $tmp203)};
$fn206 $tmp205 = ($fn206) param0->$class->vtable[2];
frost$core$Error* $tmp207 = $tmp205(param0, $tmp204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
return $tmp207;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:119
// begin inline call to function frost.core.Int16.get_asUInt16():frost.core.UInt16 from OutputStream.frost:119:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:1130
int16_t $tmp208 = param1.value;
frost$core$UInt16 $tmp209 = (frost$core$UInt16) {((uint16_t) $tmp208)};
$fn211 $tmp210 = ($fn211) param0->$class->vtable[3];
frost$core$Error* $tmp212 = $tmp210(param0, $tmp209);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
return $tmp212;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:129
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from OutputStream.frost:129:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1002
int32_t $tmp213 = param1.value;
frost$core$UInt32 $tmp214 = (frost$core$UInt32) {((uint32_t) $tmp213)};
$fn216 $tmp215 = ($fn216) param0->$class->vtable[4];
frost$core$Error* $tmp217 = $tmp215(param0, $tmp214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
return $tmp217;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:139
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from OutputStream.frost:139:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp218 = param1.value;
frost$core$UInt64 $tmp219 = (frost$core$UInt64) {((uint64_t) $tmp218)};
$fn221 $tmp220 = ($fn221) param0->$class->vtable[5];
frost$core$Error* $tmp222 = $tmp220(param0, $tmp219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
return $tmp222;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$UInt8* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:149
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:150
frost$core$Int $tmp223 = (frost$core$Int) {0u};
frost$core$Bit $tmp224 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp225 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp223, param2, $tmp224);
frost$core$Int $tmp226 = $tmp225.min;
*(&local1) = $tmp226;
frost$core$Int $tmp227 = $tmp225.max;
frost$core$Bit $tmp228 = $tmp225.inclusive;
bool $tmp229 = $tmp228.value;
frost$core$Int $tmp230 = (frost$core$Int) {1u};
if ($tmp229) goto block6; else goto block7;
block6:;
int64_t $tmp231 = $tmp226.value;
int64_t $tmp232 = $tmp227.value;
bool $tmp233 = $tmp231 <= $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block3; else goto block4;
block7:;
int64_t $tmp236 = $tmp226.value;
int64_t $tmp237 = $tmp227.value;
bool $tmp238 = $tmp236 < $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:151
frost$core$Int $tmp241 = *(&local1);
frost$core$Int64 $tmp242 = frost$core$Int64$init$frost$core$Int($tmp241);
int64_t $tmp243 = $tmp242.value;
frost$core$UInt8 $tmp244 = param1[$tmp243];
$fn246 $tmp245 = ($fn246) param0->$class->vtable[2];
frost$core$Error* $tmp247 = $tmp245(param0, $tmp244);
if ($tmp247 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247 != NULL};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block10; else goto block11;
block11:;
frost$core$Int $tmp250 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s251, $tmp250, &$s252);
abort(); // unreachable
block10:;
*(&local0) = $tmp247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:156
frost$core$Error* $tmp253 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Error* $tmp254 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp253;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Int $tmp255 = *(&local1);
int64_t $tmp256 = $tmp227.value;
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256 - $tmp257;
frost$core$Int $tmp259 = (frost$core$Int) {$tmp258};
if ($tmp229) goto block13; else goto block14;
block13:;
int64_t $tmp260 = $tmp259.value;
int64_t $tmp261 = $tmp230.value;
bool $tmp262 = $tmp260 >= $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block12; else goto block4;
block14:;
int64_t $tmp265 = $tmp259.value;
int64_t $tmp266 = $tmp230.value;
bool $tmp267 = $tmp265 > $tmp266;
frost$core$Bit $tmp268 = (frost$core$Bit) {$tmp267};
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block12; else goto block4;
block12:;
int64_t $tmp270 = $tmp255.value;
int64_t $tmp271 = $tmp230.value;
int64_t $tmp272 = $tmp270 + $tmp271;
frost$core$Int $tmp273 = (frost$core$Int) {$tmp272};
*(&local1) = $tmp273;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp274 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp275 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local0) = ((frost$core$Error*) NULL);
goto block15;
block15:;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Int8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:168
$fn277 $tmp276 = ($fn277) param0->$class->vtable[10];
frost$core$Error* $tmp278 = $tmp276(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
return $tmp278;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:179
$fn280 $tmp279 = ($fn280) param0->$class->vtable[10];
frost$core$Error* $tmp281 = $tmp279(param0, ((frost$core$UInt8*) param1), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
return $tmp281;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$UInt8 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:191
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:192
ITable* $tmp282 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$collections$Iterator* $tmp285 = $tmp283(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp286 = $tmp285->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
frost$core$Bit $tmp289 = $tmp287($tmp285);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block5; else goto block4;
block4:;
ITable* $tmp291 = $tmp285->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[1];
frost$core$Object* $tmp294 = $tmp292($tmp285);
*(&local1) = ((frost$core$UInt8$wrapper*) $tmp294)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:193
frost$core$UInt8 $tmp295 = *(&local1);
$fn297 $tmp296 = ($fn297) param0->$class->vtable[2];
frost$core$Error* $tmp298 = $tmp296(param0, $tmp295);
if ($tmp298 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298 != NULL};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block8; else goto block9;
block9:;
frost$core$Int $tmp301 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s302, $tmp301, &$s303);
abort(); // unreachable
block8:;
*(&local0) = $tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q($tmp294);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:198
frost$core$Error* $tmp304 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Error* $tmp305 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp304;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q($tmp294);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp306 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp307 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local0) = ((frost$core$Error*) NULL);
goto block10;
block10:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$Int8 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:211
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:212
ITable* $tmp308 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp308->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp308 = $tmp308->next;
}
$fn310 $tmp309 = $tmp308->methods[0];
frost$collections$Iterator* $tmp311 = $tmp309(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp312 = $tmp311->$class->itable;
while ($tmp312->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[0];
frost$core$Bit $tmp315 = $tmp313($tmp311);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block5; else goto block4;
block4:;
ITable* $tmp317 = $tmp311->$class->itable;
while ($tmp317->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[1];
frost$core$Object* $tmp320 = $tmp318($tmp311);
*(&local1) = ((frost$core$Int8$wrapper*) $tmp320)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:213
frost$core$Int8 $tmp321 = *(&local1);
// begin inline call to method frost.io.OutputStream.write(value:frost.core.Int8):frost.core.Error? from OutputStream.frost:213:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
int8_t $tmp322 = $tmp321.value;
frost$core$UInt8 $tmp323 = (frost$core$UInt8) {((uint8_t) $tmp322)};
$fn325 $tmp324 = ($fn325) param0->$class->vtable[2];
frost$core$Error* $tmp326 = $tmp324(param0, $tmp323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
if ($tmp326 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326 != NULL};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block10; else goto block11;
block11:;
frost$core$Int $tmp329 = (frost$core$Int) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block10:;
*(&local0) = $tmp326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:218
frost$core$Error* $tmp332 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Error* $tmp333 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp332;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp335 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local0) = ((frost$core$Error*) NULL);
goto block12;
block12:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$Char8 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:231
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:232
ITable* $tmp336 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp336->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp336 = $tmp336->next;
}
$fn338 $tmp337 = $tmp336->methods[0];
frost$collections$Iterator* $tmp339 = $tmp337(((frost$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp340 = $tmp339->$class->itable;
while ($tmp340->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
frost$core$Bit $tmp343 = $tmp341($tmp339);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block5; else goto block4;
block4:;
ITable* $tmp345 = $tmp339->$class->itable;
while ($tmp345->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp345 = $tmp345->next;
}
$fn347 $tmp346 = $tmp345->methods[1];
frost$core$Object* $tmp348 = $tmp346($tmp339);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp348)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:233
frost$core$Char8 $tmp349 = *(&local1);
$fn351 $tmp350 = ($fn351) param0->$class->vtable[16];
frost$core$Error* $tmp352 = $tmp350(param0, $tmp349);
if ($tmp352 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352 != NULL};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block8; else goto block9;
block9:;
frost$core$Int $tmp355 = (frost$core$Int) {233u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s356, $tmp355, &$s357);
abort(); // unreachable
block8:;
*(&local0) = $tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q($tmp348);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:238
frost$core$Error* $tmp358 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Error* $tmp359 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp358;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q($tmp348);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
frost$core$Error* $tmp361 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local0) = ((frost$core$Error*) NULL);
goto block10;
block10:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:248
uint8_t $tmp362 = param1.value;
frost$core$UInt8 $tmp363 = (frost$core$UInt8) {$tmp362};
$fn365 $tmp364 = ($fn365) param0->$class->vtable[2];
frost$core$Error* $tmp366 = $tmp364(param0, $tmp363);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
return $tmp366;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:257
frost$core$Char8** $tmp367 = &param1->data;
frost$core$Char8* $tmp368 = *$tmp367;
frost$core$Int* $tmp369 = &param1->_length;
frost$core$Int $tmp370 = *$tmp369;
// begin inline call to method frost.io.OutputStream.write(ptr:frost.unsafe.Pointer<frost.core.Char8>, count:frost.core.Int):frost.core.Error? from OutputStream.frost:257:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:179
$fn372 $tmp371 = ($fn372) param0->$class->vtable[10];
frost$core$Error* $tmp373 = $tmp371(param0, ((frost$core$UInt8*) $tmp368), $tmp370);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
return $tmp373;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:267
$fn375 $tmp374 = ($fn375) param1->$class->vtable[0];
frost$core$String* $tmp376 = $tmp374(param1);
$fn378 $tmp377 = ($fn378) param0->$class->vtable[17];
frost$core$Error* $tmp379 = $tmp377(param0, $tmp376);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
return $tmp379;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:276
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:277
$fn381 $tmp380 = ($fn381) param0->$class->vtable[17];
frost$core$Error* $tmp382 = $tmp380(param0, param1);
if ($tmp382 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382 != NULL};
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block5; else goto block6;
block6:;
frost$core$Int $tmp385 = (frost$core$Int) {277u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s386, $tmp385, &$s387);
abort(); // unreachable
block5:;
*(&local0) = $tmp382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:278
$fn389 $tmp388 = ($fn389) param0->$class->vtable[21];
frost$core$Error* $tmp390 = $tmp388(param0);
if ($tmp390 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390 != NULL};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block9; else goto block10;
block10:;
frost$core$Int $tmp393 = (frost$core$Int) {278u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s394, $tmp393, &$s395);
abort(); // unreachable
block9:;
*(&local0) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:279
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp396 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:282
frost$core$Error* $tmp397 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Error* $tmp398 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp397;
block2:;
frost$core$Error* $tmp399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local0) = ((frost$core$Error*) NULL);
goto block11;
block11:;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q(frost$io$OutputStream* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:293
$fn401 $tmp400 = ($fn401) param1->$class->vtable[0];
frost$core$String* $tmp402 = $tmp400(param1);
$fn404 $tmp403 = ($fn404) param0->$class->vtable[19];
frost$core$Error* $tmp405 = $tmp403(param0, $tmp402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
return $tmp405;

}
frost$core$Error* frost$io$OutputStream$printLine$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:300
frost$core$String** $tmp406 = &param0->lineEnding;
frost$core$String* $tmp407 = *$tmp406;
$fn409 $tmp408 = ($fn409) param0->$class->vtable[17];
frost$core$Error* $tmp410 = $tmp408(param0, $tmp407);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
return $tmp410;

}
frost$core$Error* frost$io$OutputStream$flush$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
frost$core$Error* frost$io$OutputStream$close$R$frost$core$Error$Q(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:313
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$OutputStream$init(frost$io$OutputStream* param0) {

frost$io$ByteOrder local0;
frost$io$ByteOrder local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:17
frost$core$Int $tmp411 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:17:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp412 = &(&local1)->$rawValue;
*$tmp412 = $tmp411;
frost$io$ByteOrder $tmp413 = *(&local1);
*(&local0) = $tmp413;
frost$io$ByteOrder $tmp414 = *(&local0);
frost$io$ByteOrder* $tmp415 = &param0->byteOrder;
*$tmp415 = $tmp414;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s416));
frost$core$String** $tmp417 = &param0->lineEnding;
frost$core$String* $tmp418 = *$tmp417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$String** $tmp419 = &param0->lineEnding;
*$tmp419 = &$s420;
return;

}
void frost$io$OutputStream$cleanup(frost$io$OutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp421 = &param0->lineEnding;
frost$core$String* $tmp422 = *$tmp421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
return;

}

