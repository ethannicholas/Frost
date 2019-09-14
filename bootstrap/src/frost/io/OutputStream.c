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
#include "frost/core/UInt8.h"
#include "frost/core/UInt32.h"
#include "frost/core/Frost.h"
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

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn4)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn5)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn6)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn10)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn13)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn16)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn19)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Bit (*$fn22)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn23)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn24)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn25)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn26)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn30)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn33)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn36)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn39)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Bit (*$fn42)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn43)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn44)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn45)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn46)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn50)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn53)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn56)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn59)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn62)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn63)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn64)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn65)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Error* (*$fn66)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn67)(frost$io$OutputStream*, frost$core$UInt32);
typedef frost$core$Error* (*$fn68)(frost$io$OutputStream*, frost$core$UInt64);
typedef frost$core$Error* (*$fn69)(frost$io$OutputStream*, frost$core$UInt64);
typedef frost$core$Error* (*$fn70)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn71)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn74)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn75)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn76)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn77)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn78)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn79)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn80)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn81)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn85)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn88)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn89)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn90)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn91)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn95)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn98)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn99)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn100)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn101)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn105)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn108)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn109)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn110)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn111)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$String* (*$fn112)(frost$core$Object*);
typedef frost$core$Error* (*$fn113)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn114)(frost$core$Object*);
typedef frost$core$Error* (*$fn115)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn116)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn117)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn118)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn121)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn124)(frost$core$Object*);
typedef frost$core$Error* (*$fn125)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn126)(frost$core$Object*);
typedef frost$core$Error* (*$fn127)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn128)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn129)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, 7670378173706479600, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

frost$core$Error* frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt16 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder* _3;
frost$io$ByteOrder _4;
frost$core$Equatable* _5;
frost$core$Equatable* _6;
frost$core$Int _7;
frost$core$Int* _10;
frost$io$ByteOrder _12;
frost$io$ByteOrder _15;
frost$core$Equatable* _16;
$fn2 _17;
frost$core$Bit _18;
bool _19;
frost$core$Object* _20;
frost$core$Object* _22;
uint16_t _28;
uint8_t _29;
frost$core$UInt8 _30;
$fn3 _32;
frost$core$Error* _33;
bool _34;
frost$core$Object* _36;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$core$Error* _45;
frost$core$Object* _47;
frost$core$Object* _50;
frost$core$UInt16 _53;
uint16_t _56;
uint32_t _57;
uint16_t _58;
uint32_t _59;
uint32_t _60;
frost$core$UInt32 _61;
uint32_t _65;
uint8_t _66;
frost$core$UInt8 _67;
$fn4 _69;
frost$core$Error* _70;
bool _71;
frost$core$Object* _73;
bool _75;
frost$core$Bit _76;
bool _77;
frost$core$Int _79;
frost$core$Error* _82;
frost$core$Object* _84;
frost$core$Object* _87;
frost$core$UInt16 _92;
uint16_t _95;
uint32_t _96;
uint16_t _97;
uint32_t _98;
uint32_t _99;
frost$core$UInt32 _100;
uint32_t _104;
uint8_t _105;
frost$core$UInt8 _106;
$fn5 _108;
frost$core$Error* _109;
bool _110;
frost$core$Object* _112;
bool _114;
frost$core$Bit _115;
bool _116;
frost$core$Int _118;
frost$core$Error* _121;
frost$core$Object* _123;
frost$core$Object* _126;
uint16_t _131;
uint8_t _132;
frost$core$UInt8 _133;
$fn6 _135;
frost$core$Error* _136;
bool _137;
frost$core$Object* _139;
bool _141;
frost$core$Bit _142;
bool _143;
frost$core$Int _145;
frost$core$Error* _148;
frost$core$Object* _150;
frost$core$Object* _153;
frost$core$Object* _157;
frost$core$Error* _159;
frost$core$Object* _160;
frost$core$Error* _165;
frost$core$Error* _166;
frost$core$Object* _167;
frost$core$Error* _169;
frost$core$Object* _170;
frost$core$Error* _174;
frost$core$Object* _175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:40
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:41
_3 = &param0->byteOrder;
_4 = *_3;
frost$io$ByteOrder$wrapper* $tmp7;
$tmp7 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp7->value = _4;
_5 = ((frost$core$Equatable*) $tmp7);
_6 = _5;
_7 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:41:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_10 = &(&local2)->$rawValue;
*_10 = _7;
_12 = *(&local2);
*(&local1) = _12;
_15 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp8;
$tmp8 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp8->value = _15;
_16 = ((frost$core$Equatable*) $tmp8);
ITable* $tmp9 = _6->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp9 = $tmp9->next;
}
_17 = $tmp9->methods[0];
_18 = _17(_6, _16);
_19 = _18.value;
_20 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_22);
if (_19) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:42
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:42:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1106
_28 = param1.value;
_29 = ((uint8_t) _28);
_30 = (frost$core$UInt8) {_29};
_32 = ($fn10) param0->$class->vtable[2];
_33 = _32(param0, _30);
_34 = _33 == NULL;
if (_34) goto block8; else goto block9;
block9:;
_36 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = _33 != NULL;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block10; else goto block11;
block11:;
_42 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _42, &$s12);
abort(); // unreachable
block10:;
_45 = _33;
*(&local0) = _45;
_47 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_47);
goto block1;
block8:;
_50 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_50);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:43
_53 = (frost$core$UInt16) {8u};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:43:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:517
_56 = param1.value;
_57 = ((uint32_t) _56);
_58 = _53.value;
_59 = ((uint32_t) _58);
_60 = _57 >> _59;
_61 = (frost$core$UInt32) {_60};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:43:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_65 = _61.value;
_66 = ((uint8_t) _65);
_67 = (frost$core$UInt8) {_66};
_69 = ($fn13) param0->$class->vtable[2];
_70 = _69(param0, _67);
_71 = _70 == NULL;
if (_71) goto block14; else goto block15;
block15:;
_73 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = _70 != NULL;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block16; else goto block17;
block17:;
_79 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _79, &$s15);
abort(); // unreachable
block16:;
_82 = _70;
*(&local0) = _82;
_84 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_84);
goto block1;
block14:;
_87 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_87);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:46
_92 = (frost$core$UInt16) {8u};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:46:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:517
_95 = param1.value;
_96 = ((uint32_t) _95);
_97 = _92.value;
_98 = ((uint32_t) _97);
_99 = _96 >> _98;
_100 = (frost$core$UInt32) {_99};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:46:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_104 = _100.value;
_105 = ((uint8_t) _104);
_106 = (frost$core$UInt8) {_105};
_108 = ($fn16) param0->$class->vtable[2];
_109 = _108(param0, _106);
_110 = _109 == NULL;
if (_110) goto block20; else goto block21;
block21:;
_112 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = _109 != NULL;
_115 = (frost$core$Bit) {_114};
_116 = _115.value;
if (_116) goto block22; else goto block23;
block23:;
_118 = (frost$core$Int) {46u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _118, &$s18);
abort(); // unreachable
block22:;
_121 = _109;
*(&local0) = _121;
_123 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_123);
goto block1;
block20:;
_126 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_126);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:47
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:47:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1106
_131 = param1.value;
_132 = ((uint8_t) _131);
_133 = (frost$core$UInt8) {_132};
_135 = ($fn19) param0->$class->vtable[2];
_136 = _135(param0, _133);
_137 = _136 == NULL;
if (_137) goto block25; else goto block26;
block26:;
_139 = ((frost$core$Object*) _136);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = _136 != NULL;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block27; else goto block28;
block28:;
_145 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _145, &$s21);
abort(); // unreachable
block27:;
_148 = _136;
*(&local0) = _148;
_150 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_150);
goto block1;
block25:;
_153 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_153);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:49
_157 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_157);
_159 = *(&local0);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:52
_165 = *(&local0);
_166 = _165;
_167 = ((frost$core$Object*) _166);
frost$core$Frost$ref$frost$core$Object$Q(_167);
_169 = *(&local0);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
*(&local0) = ((frost$core$Error*) NULL);
return _166;
block2:;
_174 = *(&local0);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_175);
*(&local0) = ((frost$core$Error*) NULL);
goto block29;
block29:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt32 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder* _3;
frost$io$ByteOrder _4;
frost$core$Equatable* _5;
frost$core$Equatable* _6;
frost$core$Int _7;
frost$core$Int* _10;
frost$io$ByteOrder _12;
frost$io$ByteOrder _15;
frost$core$Equatable* _16;
$fn22 _17;
frost$core$Bit _18;
bool _19;
frost$core$Object* _20;
frost$core$Object* _22;
uint32_t _28;
uint16_t _29;
frost$core$UInt16 _30;
$fn23 _32;
frost$core$Error* _33;
bool _34;
frost$core$Object* _36;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$core$Error* _45;
frost$core$Object* _47;
frost$core$Object* _50;
frost$core$UInt32 _53;
uint32_t _56;
uint32_t _57;
uint32_t _58;
frost$core$UInt32 _59;
uint32_t _63;
uint16_t _64;
frost$core$UInt16 _65;
$fn24 _67;
frost$core$Error* _68;
bool _69;
frost$core$Object* _71;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Int _77;
frost$core$Error* _80;
frost$core$Object* _82;
frost$core$Object* _85;
frost$core$UInt32 _90;
uint32_t _93;
uint32_t _94;
uint32_t _95;
frost$core$UInt32 _96;
uint32_t _100;
uint16_t _101;
frost$core$UInt16 _102;
$fn25 _104;
frost$core$Error* _105;
bool _106;
frost$core$Object* _108;
bool _110;
frost$core$Bit _111;
bool _112;
frost$core$Int _114;
frost$core$Error* _117;
frost$core$Object* _119;
frost$core$Object* _122;
uint32_t _127;
uint16_t _128;
frost$core$UInt16 _129;
$fn26 _131;
frost$core$Error* _132;
bool _133;
frost$core$Object* _135;
bool _137;
frost$core$Bit _138;
bool _139;
frost$core$Int _141;
frost$core$Error* _144;
frost$core$Object* _146;
frost$core$Object* _149;
frost$core$Object* _153;
frost$core$Error* _155;
frost$core$Object* _156;
frost$core$Error* _161;
frost$core$Error* _162;
frost$core$Object* _163;
frost$core$Error* _165;
frost$core$Object* _166;
frost$core$Error* _170;
frost$core$Object* _171;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:63
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:64
_3 = &param0->byteOrder;
_4 = *_3;
frost$io$ByteOrder$wrapper* $tmp27;
$tmp27 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp27->value = _4;
_5 = ((frost$core$Equatable*) $tmp27);
_6 = _5;
_7 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:64:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_10 = &(&local2)->$rawValue;
*_10 = _7;
_12 = *(&local2);
*(&local1) = _12;
_15 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp28;
$tmp28 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp28->value = _15;
_16 = ((frost$core$Equatable*) $tmp28);
ITable* $tmp29 = _6->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
_17 = $tmp29->methods[0];
_18 = _17(_6, _16);
_19 = _18.value;
_20 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_22);
if (_19) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:65
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:65:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_28 = param1.value;
_29 = ((uint16_t) _28);
_30 = (frost$core$UInt16) {_29};
_32 = ($fn30) param0->$class->vtable[3];
_33 = _32(param0, _30);
_34 = _33 == NULL;
if (_34) goto block8; else goto block9;
block9:;
_36 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = _33 != NULL;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block10; else goto block11;
block11:;
_42 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _42, &$s32);
abort(); // unreachable
block10:;
_45 = _33;
*(&local0) = _45;
_47 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_47);
goto block1;
block8:;
_50 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_50);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:66
_53 = (frost$core$UInt32) {16u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:66:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:382
_56 = param1.value;
_57 = _53.value;
_58 = _56 >> _57;
_59 = (frost$core$UInt32) {_58};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_63 = _59.value;
_64 = ((uint16_t) _63);
_65 = (frost$core$UInt16) {_64};
_67 = ($fn33) param0->$class->vtable[3];
_68 = _67(param0, _65);
_69 = _68 == NULL;
if (_69) goto block14; else goto block15;
block15:;
_71 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = _68 != NULL;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block16; else goto block17;
block17:;
_77 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _77, &$s35);
abort(); // unreachable
block16:;
_80 = _68;
*(&local0) = _80;
_82 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_82);
goto block1;
block14:;
_85 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_85);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:69
_90 = (frost$core$UInt32) {16u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:69:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:382
_93 = param1.value;
_94 = _90.value;
_95 = _93 >> _94;
_96 = (frost$core$UInt32) {_95};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_100 = _96.value;
_101 = ((uint16_t) _100);
_102 = (frost$core$UInt16) {_101};
_104 = ($fn36) param0->$class->vtable[3];
_105 = _104(param0, _102);
_106 = _105 == NULL;
if (_106) goto block20; else goto block21;
block21:;
_108 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = _105 != NULL;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block22; else goto block23;
block23:;
_114 = (frost$core$Int) {69u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _114, &$s38);
abort(); // unreachable
block22:;
_117 = _105;
*(&local0) = _117;
_119 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_119);
goto block1;
block20:;
_122 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:70
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:70:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_127 = param1.value;
_128 = ((uint16_t) _127);
_129 = (frost$core$UInt16) {_128};
_131 = ($fn39) param0->$class->vtable[3];
_132 = _131(param0, _129);
_133 = _132 == NULL;
if (_133) goto block25; else goto block26;
block26:;
_135 = ((frost$core$Object*) _132);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = _132 != NULL;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block27; else goto block28;
block28:;
_141 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _141, &$s41);
abort(); // unreachable
block27:;
_144 = _132;
*(&local0) = _144;
_146 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_146);
goto block1;
block25:;
_149 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_149);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:72
_153 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = *(&local0);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:75
_161 = *(&local0);
_162 = _161;
_163 = ((frost$core$Object*) _162);
frost$core$Frost$ref$frost$core$Object$Q(_163);
_165 = *(&local0);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_166);
*(&local0) = ((frost$core$Error*) NULL);
return _162;
block2:;
_170 = *(&local0);
_171 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_171);
*(&local0) = ((frost$core$Error*) NULL);
goto block29;
block29:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt64 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder* _3;
frost$io$ByteOrder _4;
frost$core$Equatable* _5;
frost$core$Equatable* _6;
frost$core$Int _7;
frost$core$Int* _10;
frost$io$ByteOrder _12;
frost$io$ByteOrder _15;
frost$core$Equatable* _16;
$fn42 _17;
frost$core$Bit _18;
bool _19;
frost$core$Object* _20;
frost$core$Object* _22;
uint64_t _28;
uint32_t _29;
frost$core$UInt32 _30;
$fn43 _32;
frost$core$Error* _33;
bool _34;
frost$core$Object* _36;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$core$Error* _45;
frost$core$Object* _47;
frost$core$Object* _50;
frost$core$UInt64 _53;
uint64_t _56;
uint64_t _57;
uint64_t _58;
frost$core$UInt64 _59;
uint64_t _63;
uint32_t _64;
frost$core$UInt32 _65;
$fn44 _67;
frost$core$Error* _68;
bool _69;
frost$core$Object* _71;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Int _77;
frost$core$Error* _80;
frost$core$Object* _82;
frost$core$Object* _85;
frost$core$UInt64 _90;
uint64_t _93;
uint64_t _94;
uint64_t _95;
frost$core$UInt64 _96;
uint64_t _100;
uint32_t _101;
frost$core$UInt32 _102;
$fn45 _104;
frost$core$Error* _105;
bool _106;
frost$core$Object* _108;
bool _110;
frost$core$Bit _111;
bool _112;
frost$core$Int _114;
frost$core$Error* _117;
frost$core$Object* _119;
frost$core$Object* _122;
uint64_t _127;
uint32_t _128;
frost$core$UInt32 _129;
$fn46 _131;
frost$core$Error* _132;
bool _133;
frost$core$Object* _135;
bool _137;
frost$core$Bit _138;
bool _139;
frost$core$Int _141;
frost$core$Error* _144;
frost$core$Object* _146;
frost$core$Object* _149;
frost$core$Object* _153;
frost$core$Error* _155;
frost$core$Object* _156;
frost$core$Error* _161;
frost$core$Error* _162;
frost$core$Object* _163;
frost$core$Error* _165;
frost$core$Object* _166;
frost$core$Error* _170;
frost$core$Object* _171;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:86
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:87
_3 = &param0->byteOrder;
_4 = *_3;
frost$io$ByteOrder$wrapper* $tmp47;
$tmp47 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp47->value = _4;
_5 = ((frost$core$Equatable*) $tmp47);
_6 = _5;
_7 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:87:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_10 = &(&local2)->$rawValue;
*_10 = _7;
_12 = *(&local2);
*(&local1) = _12;
_15 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp48;
$tmp48 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp48->value = _15;
_16 = ((frost$core$Equatable*) $tmp48);
ITable* $tmp49 = _6->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp49 = $tmp49->next;
}
_17 = $tmp49->methods[0];
_18 = _17(_6, _16);
_19 = _18.value;
_20 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_22);
if (_19) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:88
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:88:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_28 = param1.value;
_29 = ((uint32_t) _28);
_30 = (frost$core$UInt32) {_29};
_32 = ($fn50) param0->$class->vtable[4];
_33 = _32(param0, _30);
_34 = _33 == NULL;
if (_34) goto block8; else goto block9;
block9:;
_36 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = _33 != NULL;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block10; else goto block11;
block11:;
_42 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _42, &$s52);
abort(); // unreachable
block10:;
_45 = _33;
*(&local0) = _45;
_47 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_47);
goto block1;
block8:;
_50 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_50);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:89
_53 = (frost$core$UInt64) {32u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:89:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_56 = param1.value;
_57 = _53.value;
_58 = _56 >> _57;
_59 = (frost$core$UInt64) {_58};
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:89:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_63 = _59.value;
_64 = ((uint32_t) _63);
_65 = (frost$core$UInt32) {_64};
_67 = ($fn53) param0->$class->vtable[4];
_68 = _67(param0, _65);
_69 = _68 == NULL;
if (_69) goto block14; else goto block15;
block15:;
_71 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = _68 != NULL;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block16; else goto block17;
block17:;
_77 = (frost$core$Int) {89u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _77, &$s55);
abort(); // unreachable
block16:;
_80 = _68;
*(&local0) = _80;
_82 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_82);
goto block1;
block14:;
_85 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_85);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:92
_90 = (frost$core$UInt64) {32u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:92:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_93 = param1.value;
_94 = _90.value;
_95 = _93 >> _94;
_96 = (frost$core$UInt64) {_95};
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:92:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_100 = _96.value;
_101 = ((uint32_t) _100);
_102 = (frost$core$UInt32) {_101};
_104 = ($fn56) param0->$class->vtable[4];
_105 = _104(param0, _102);
_106 = _105 == NULL;
if (_106) goto block20; else goto block21;
block21:;
_108 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = _105 != NULL;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block22; else goto block23;
block23:;
_114 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, _114, &$s58);
abort(); // unreachable
block22:;
_117 = _105;
*(&local0) = _117;
_119 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_119);
goto block1;
block20:;
_122 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:93
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:93:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_127 = param1.value;
_128 = ((uint32_t) _127);
_129 = (frost$core$UInt32) {_128};
_131 = ($fn59) param0->$class->vtable[4];
_132 = _131(param0, _129);
_133 = _132 == NULL;
if (_133) goto block25; else goto block26;
block26:;
_135 = ((frost$core$Object*) _132);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = _132 != NULL;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block27; else goto block28;
block28:;
_141 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _141, &$s61);
abort(); // unreachable
block27:;
_144 = _132;
*(&local0) = _144;
_146 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_146);
goto block1;
block25:;
_149 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_149);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:95
_153 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = *(&local0);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:98
_161 = *(&local0);
_162 = _161;
_163 = ((frost$core$Object*) _162);
frost$core$Frost$ref$frost$core$Object$Q(_163);
_165 = *(&local0);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_166);
*(&local0) = ((frost$core$Error*) NULL);
return _162;
block2:;
_170 = *(&local0);
_171 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_171);
*(&local0) = ((frost$core$Error*) NULL);
goto block29;
block29:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q(void* rawSelf, frost$core$Int8 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

int8_t _3;
uint8_t _4;
frost$core$UInt8 _5;
$fn62 _7;
frost$core$Error* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
_3 = param1.value;
_4 = ((uint8_t) _3);
_5 = (frost$core$UInt8) {_4};
_7 = ($fn63) param0->$class->vtable[2];
_8 = _7(param0, _5);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q(void* rawSelf, frost$core$Int16 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

int16_t _3;
uint16_t _4;
frost$core$UInt16 _5;
$fn64 _7;
frost$core$Error* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:119
// begin inline call to function frost.core.Int16.get_asUInt16():frost.core.UInt16 from OutputStream.frost:119:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:1130
_3 = param1.value;
_4 = ((uint16_t) _3);
_5 = (frost$core$UInt16) {_4};
_7 = ($fn65) param0->$class->vtable[3];
_8 = _7(param0, _5);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q(void* rawSelf, frost$core$Int32 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

int32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
$fn66 _7;
frost$core$Error* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:129
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from OutputStream.frost:129:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1002
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = (frost$core$UInt32) {_4};
_7 = ($fn67) param0->$class->vtable[4];
_8 = _7(param0, _5);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q(void* rawSelf, frost$core$Int64 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

int64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
$fn68 _7;
frost$core$Error* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:139
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from OutputStream.frost:139:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_3 = param1.value;
_4 = ((uint64_t) _3);
_5 = (frost$core$UInt64) {_4};
_7 = ($fn69) param0->$class->vtable[5];
_8 = _7(param0, _5);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt8* param1, frost$core$Int param2) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Int local1;
frost$core$Int _3;
frost$core$Bit _4;
frost$core$Range$LTfrost$core$Int$GT _5;
frost$core$Int _6;
frost$core$Int _8;
frost$core$Bit _9;
bool _10;
frost$core$Int _11;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _23;
frost$core$Int _26;
frost$core$Int64 _27;
int64_t _28;
frost$core$UInt8 _29;
$fn70 _30;
frost$core$Error* _31;
bool _32;
frost$core$Object* _34;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$Int _40;
frost$core$Error* _43;
frost$core$Object* _45;
frost$core$Error* _84;
frost$core$Error* _85;
frost$core$Object* _86;
frost$core$Error* _88;
frost$core$Object* _89;
frost$core$Object* _48;
frost$core$Int _51;
int64_t _52;
int64_t _53;
int64_t _54;
frost$core$Int _55;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
int64_t _69;
int64_t _70;
int64_t _71;
frost$core$Int _72;
frost$core$Object* _76;
frost$core$Error* _78;
frost$core$Object* _79;
frost$core$Error* _93;
frost$core$Object* _94;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:149
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:150
_3 = (frost$core$Int) {0u};
_4 = (frost$core$Bit) {false};
_5 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_3, param2, _4);
_6 = _5.min;
*(&local1) = _6;
_8 = _5.max;
_9 = _5.inclusive;
_10 = _9.value;
_11 = (frost$core$Int) {1u};
if (_10) goto block6; else goto block7;
block6:;
_13 = _6.value;
_14 = _8.value;
_15 = _13 <= _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block3; else goto block4;
block7:;
_19 = _6.value;
_20 = _8.value;
_21 = _19 < _20;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:151
_26 = *(&local1);
_27 = frost$core$Int64$init$frost$core$Int(_26);
_28 = _27.value;
_29 = param1[_28];
_30 = ($fn71) param0->$class->vtable[2];
_31 = _30(param0, _29);
_32 = _31 == NULL;
if (_32) goto block8; else goto block9;
block9:;
_34 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = _31 != NULL;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block10; else goto block11;
block11:;
_40 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s72, _40, &$s73);
abort(); // unreachable
block10:;
_43 = _31;
*(&local0) = _43;
_45 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_45);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:156
_84 = *(&local0);
_85 = _84;
_86 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = *(&local0);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local0) = ((frost$core$Error*) NULL);
return _85;
block8:;
_48 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_51 = *(&local1);
_52 = _8.value;
_53 = _51.value;
_54 = _52 - _53;
_55 = (frost$core$Int) {_54};
if (_10) goto block13; else goto block14;
block13:;
_57 = _55.value;
_58 = _11.value;
_59 = _57 >= _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block12; else goto block4;
block14:;
_63 = _55.value;
_64 = _11.value;
_65 = _63 > _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block12; else goto block4;
block12:;
_69 = _51.value;
_70 = _11.value;
_71 = _69 + _70;
_72 = (frost$core$Int) {_71};
*(&local1) = _72;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:153
_76 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = *(&local0);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_79);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
_93 = *(&local0);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
*(&local0) = ((frost$core$Error*) NULL);
goto block15;
block15:;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$core$Int8* param1, frost$core$Int param2) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$UInt8* _1;
$fn74 _2;
frost$core$Error* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:168
_1 = ((frost$core$UInt8*) param1);
_2 = ($fn75) param0->$class->vtable[10];
_3 = _2(param0, _1, param2);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$core$Char8* param1, frost$core$Int param2) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$UInt8* _1;
$fn76 _2;
frost$core$Error* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:179
_1 = ((frost$core$UInt8*) param1);
_2 = ($fn77) param0->$class->vtable[10];
_3 = _2(param0, _1, param2);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$collections$Array* param1, frost$core$Int param2) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$UInt8 local1;
frost$collections$Iterable* _3;
frost$collections$Iterable* _4;
$fn78 _5;
frost$collections$Iterator* _6;
frost$collections$Iterator* _7;
frost$collections$Iterator* _9;
$fn79 _10;
frost$core$Bit _11;
bool _12;
frost$collections$Iterator* _14;
$fn80 _15;
frost$core$Object* _16;
frost$core$UInt8 _17;
frost$core$UInt8 _20;
$fn81 _21;
frost$core$Error* _22;
bool _23;
frost$core$Object* _25;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$core$Error* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Error* _59;
frost$core$Error* _60;
frost$core$Object* _61;
frost$core$Error* _63;
frost$core$Object* _64;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Error* _53;
frost$core$Object* _54;
frost$core$Error* _68;
frost$core$Object* _69;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:191
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:192
_3 = ((frost$collections$Iterable*) param1);
_4 = _3;
ITable* $tmp82 = _4->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp82 = $tmp82->next;
}
_5 = $tmp82->methods[0];
_6 = _5(_4);
_7 = _6;
goto block3;
block3:;
_9 = _7;
ITable* $tmp83 = _9->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp83 = $tmp83->next;
}
_10 = $tmp83->methods[0];
_11 = _10(_9);
_12 = _11.value;
if (_12) goto block5; else goto block4;
block4:;
_14 = _7;
ITable* $tmp84 = _14->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp84 = $tmp84->next;
}
_15 = $tmp84->methods[1];
_16 = _15(_14);
_17 = ((frost$core$UInt8$wrapper*) _16)->value;
*(&local1) = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:193
_20 = *(&local1);
_21 = ($fn85) param0->$class->vtable[2];
_22 = _21(param0, _20);
_23 = _22 == NULL;
if (_23) goto block6; else goto block7;
block7:;
_25 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = _22 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block8; else goto block9;
block9:;
_31 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s86, _31, &$s87);
abort(); // unreachable
block8:;
_34 = _22;
*(&local0) = _34;
_36 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:198
_59 = *(&local0);
_60 = _59;
_61 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = *(&local0);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local0) = ((frost$core$Error*) NULL);
return _60;
block6:;
_43 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_45);
goto block3;
block5:;
_48 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:195
_51 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local0);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
_68 = *(&local0);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local0) = ((frost$core$Error*) NULL);
goto block10;
block10:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$collections$Array* param1, frost$core$Int param2) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Int8 local1;
frost$collections$Iterable* _3;
frost$collections$Iterable* _4;
$fn88 _5;
frost$collections$Iterator* _6;
frost$collections$Iterator* _7;
frost$collections$Iterator* _9;
$fn89 _10;
frost$core$Bit _11;
bool _12;
frost$collections$Iterator* _14;
$fn90 _15;
frost$core$Object* _16;
frost$core$Int8 _17;
frost$core$Int8 _20;
int8_t _25;
uint8_t _26;
frost$core$UInt8 _27;
$fn91 _29;
frost$core$Error* _30;
frost$core$Object* _31;
frost$core$Object* _33;
bool _36;
frost$core$Object* _38;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$core$Error* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Error* _72;
frost$core$Error* _73;
frost$core$Object* _74;
frost$core$Error* _76;
frost$core$Object* _77;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _61;
frost$core$Object* _64;
frost$core$Error* _66;
frost$core$Object* _67;
frost$core$Error* _81;
frost$core$Object* _82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:211
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:212
_3 = ((frost$collections$Iterable*) param1);
_4 = _3;
ITable* $tmp92 = _4->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp92 = $tmp92->next;
}
_5 = $tmp92->methods[0];
_6 = _5(_4);
_7 = _6;
goto block3;
block3:;
_9 = _7;
ITable* $tmp93 = _9->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
_10 = $tmp93->methods[0];
_11 = _10(_9);
_12 = _11.value;
if (_12) goto block5; else goto block4;
block4:;
_14 = _7;
ITable* $tmp94 = _14->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
_15 = $tmp94->methods[1];
_16 = _15(_14);
_17 = ((frost$core$Int8$wrapper*) _16)->value;
*(&local1) = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:213
_20 = *(&local1);
// begin inline call to method frost.io.OutputStream.write(value:frost.core.Int8):frost.core.Error? from OutputStream.frost:213:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
_25 = _20.value;
_26 = ((uint8_t) _25);
_27 = (frost$core$UInt8) {_26};
_29 = ($fn95) param0->$class->vtable[2];
_30 = _29(param0, _27);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_36 = _30 == NULL;
if (_36) goto block8; else goto block9;
block9:;
_38 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = _30 != NULL;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block10; else goto block11;
block11:;
_44 = (frost$core$Int) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _44, &$s97);
abort(); // unreachable
block10:;
_47 = _30;
*(&local0) = _47;
_49 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_53);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:218
_72 = *(&local0);
_73 = _72;
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((frost$core$Error*) NULL);
return _73;
block8:;
_56 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_58);
goto block3;
block5:;
_61 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:215
_64 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
_81 = *(&local0);
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
*(&local0) = ((frost$core$Error*) NULL);
goto block12;
block12:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$collections$Array* param1, frost$core$Int param2) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Char8 local1;
frost$collections$Iterable* _3;
frost$collections$Iterable* _4;
$fn98 _5;
frost$collections$Iterator* _6;
frost$collections$Iterator* _7;
frost$collections$Iterator* _9;
$fn99 _10;
frost$core$Bit _11;
bool _12;
frost$collections$Iterator* _14;
$fn100 _15;
frost$core$Object* _16;
frost$core$Char8 _17;
frost$core$Char8 _20;
$fn101 _21;
frost$core$Error* _22;
bool _23;
frost$core$Object* _25;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$core$Error* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Error* _59;
frost$core$Error* _60;
frost$core$Object* _61;
frost$core$Error* _63;
frost$core$Object* _64;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Error* _53;
frost$core$Object* _54;
frost$core$Error* _68;
frost$core$Object* _69;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:231
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:232
_3 = ((frost$collections$Iterable*) param1);
_4 = _3;
ITable* $tmp102 = _4->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp102 = $tmp102->next;
}
_5 = $tmp102->methods[0];
_6 = _5(_4);
_7 = _6;
goto block3;
block3:;
_9 = _7;
ITable* $tmp103 = _9->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp103 = $tmp103->next;
}
_10 = $tmp103->methods[0];
_11 = _10(_9);
_12 = _11.value;
if (_12) goto block5; else goto block4;
block4:;
_14 = _7;
ITable* $tmp104 = _14->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp104 = $tmp104->next;
}
_15 = $tmp104->methods[1];
_16 = _15(_14);
_17 = ((frost$core$Char8$wrapper*) _16)->value;
*(&local1) = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:233
_20 = *(&local1);
_21 = ($fn105) param0->$class->vtable[16];
_22 = _21(param0, _20);
_23 = _22 == NULL;
if (_23) goto block6; else goto block7;
block7:;
_25 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = _22 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block8; else goto block9;
block9:;
_31 = (frost$core$Int) {233u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s106, _31, &$s107);
abort(); // unreachable
block8:;
_34 = _22;
*(&local0) = _34;
_36 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:238
_59 = *(&local0);
_60 = _59;
_61 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = *(&local0);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local0) = ((frost$core$Error*) NULL);
return _60;
block6:;
_43 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_45);
goto block3;
block5:;
_48 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:235
_51 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local0);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
_68 = *(&local0);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local0) = ((frost$core$Error*) NULL);
goto block10;
block10:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q(void* rawSelf, frost$core$Char8 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

uint8_t _1;
frost$core$UInt8 _2;
$fn108 _3;
frost$core$Error* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:248
_1 = param1.value;
_2 = (frost$core$UInt8) {_1};
_3 = ($fn109) param0->$class->vtable[2];
_4 = _3(param0, _2);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _4;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q(void* rawSelf, frost$core$String* param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Char8** _1;
frost$core$Char8* _2;
frost$core$Int* _3;
frost$core$Int _4;
frost$core$UInt8* _7;
$fn110 _8;
frost$core$Error* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _15;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:257
_1 = &param1->data;
_2 = *_1;
_3 = &param1->_length;
_4 = *_3;
// begin inline call to method frost.io.OutputStream.write(ptr:frost.unsafe.Pointer<frost.core.Char8>, count:frost.core.Int):frost.core.Error? from OutputStream.frost:257:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:179
_7 = ((frost$core$UInt8*) _2);
_8 = ($fn111) param0->$class->vtable[10];
_9 = _8(param0, _7, _4);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_15 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return _9;

}
frost$core$Error* frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q(void* rawSelf, frost$core$Object* param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

$fn112 _1;
frost$core$String* _2;
$fn113 _3;
frost$core$Error* _4;
frost$core$Object* _5;
frost$core$Object* _7;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:267
_1 = ($fn114) param1->$class->vtable[0];
_2 = _1(param1);
_3 = ($fn115) param0->$class->vtable[17];
_4 = _3(param0, _2);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return _4;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q(void* rawSelf, frost$core$String* param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
$fn116 _3;
frost$core$Error* _4;
bool _5;
frost$core$Object* _7;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int _13;
frost$core$Error* _16;
frost$core$Object* _18;
frost$core$Object* _21;
$fn117 _24;
frost$core$Error* _25;
bool _26;
frost$core$Object* _28;
bool _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _34;
frost$core$Error* _37;
frost$core$Object* _39;
frost$core$Object* _42;
frost$core$Object* _45;
frost$core$Error* _47;
frost$core$Object* _48;
frost$core$Error* _53;
frost$core$Error* _54;
frost$core$Object* _55;
frost$core$Error* _57;
frost$core$Object* _58;
frost$core$Error* _62;
frost$core$Object* _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:276
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:277
_3 = ($fn118) param0->$class->vtable[17];
_4 = _3(param0, param1);
_5 = _4 == NULL;
if (_5) goto block3; else goto block4;
block4:;
_7 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = _4 != NULL;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block5; else goto block6;
block6:;
_13 = (frost$core$Int) {277u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s119, _13, &$s120);
abort(); // unreachable
block5:;
_16 = _4;
*(&local0) = _16;
_18 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_18);
goto block1;
block3:;
_21 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:278
_24 = ($fn121) param0->$class->vtable[21];
_25 = _24(param0);
_26 = _25 == NULL;
if (_26) goto block7; else goto block8;
block8:;
_28 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = _25 != NULL;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block9; else goto block10;
block10:;
_34 = (frost$core$Int) {278u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s122, _34, &$s123);
abort(); // unreachable
block9:;
_37 = _25;
*(&local0) = _37;
_39 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_39);
goto block1;
block7:;
_42 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_42);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:279
_45 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local0);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:282
_53 = *(&local0);
_54 = _53;
_55 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = *(&local0);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local0) = ((frost$core$Error*) NULL);
return _54;
block2:;
_62 = *(&local0);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local0) = ((frost$core$Error*) NULL);
goto block11;
block11:;

}
frost$core$Error* frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q(void* rawSelf, frost$core$Object* param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

$fn124 _1;
frost$core$String* _2;
$fn125 _3;
frost$core$Error* _4;
frost$core$Object* _5;
frost$core$Object* _7;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:293
_1 = ($fn126) param1->$class->vtable[0];
_2 = _1(param1);
_3 = ($fn127) param0->$class->vtable[19];
_4 = _3(param0, _2);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return _4;

}
frost$core$Error* frost$io$OutputStream$printLine$R$frost$core$Error$Q(void* rawSelf) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
$fn128 _3;
frost$core$Error* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:300
_1 = &param0->lineEnding;
_2 = *_1;
_3 = ($fn129) param0->$class->vtable[17];
_4 = _3(param0, _2);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _4;

}
frost$core$Error* frost$io$OutputStream$flush$R$frost$core$Error$Q(void* rawSelf) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:309
_1 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1);
return ((frost$core$Error*) NULL);

}
frost$core$Error* frost$io$OutputStream$close$R$frost$core$Error$Q(void* rawSelf) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:313
_1 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1);
return ((frost$core$Error*) NULL);

}
void frost$io$OutputStream$init(void* rawSelf) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$io$ByteOrder local0;
frost$io$ByteOrder local1;
frost$core$Int _1;
frost$core$Int* _4;
frost$io$ByteOrder _6;
frost$io$ByteOrder _9;
frost$io$ByteOrder* _10;
frost$core$Object* _13;
frost$core$String** _15;
frost$core$String* _16;
frost$core$Object* _17;
frost$core$String** _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:17
_1 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:17:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_4 = &(&local1)->$rawValue;
*_4 = _1;
_6 = *(&local1);
*(&local0) = _6;
_9 = *(&local0);
_10 = &param0->byteOrder;
*_10 = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:23
_13 = ((frost$core$Object*) &$s130);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = &param0->lineEnding;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->lineEnding;
*_19 = &$s131;
return;

}
void frost$io$OutputStream$cleanup(void* rawSelf) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->lineEnding;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

