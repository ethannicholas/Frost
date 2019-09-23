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
#include "frost/collections/CollectionView.h"
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
typedef frost$core$Int (*$fn78)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn79)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn83)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Int (*$fn86)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn87)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn91)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Int (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn95)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn99)(frost$io$OutputStream*, frost$core$Char8);
typedef frost$core$Error* (*$fn102)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn103)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn104)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn105)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$String* (*$fn106)(frost$core$Object*);
typedef frost$core$Error* (*$fn107)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn108)(frost$core$Object*);
typedef frost$core$Error* (*$fn109)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn110)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn111)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn112)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn115)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn118)(frost$core$Object*);
typedef frost$core$Error* (*$fn119)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn120)(frost$core$Object*);
typedef frost$core$Error* (*$fn121)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn122)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn123)(frost$io$OutputStream*, frost$core$String*);

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
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 18, -2257109096393591788, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

frost$core$Error* frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt16 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$io$ByteOrder local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder* _3;
frost$io$ByteOrder _4;
frost$core$Equatable* _5;
frost$core$Int _6;
frost$core$Int* _9;
frost$io$ByteOrder _11;
frost$io$ByteOrder _14;
frost$core$Equatable* _15;
$fn2 _16;
frost$core$Bit _17;
bool _18;
frost$core$Object* _19;
frost$core$Object* _21;
uint16_t _27;
uint8_t _28;
frost$core$UInt8 _29;
$fn3 _31;
frost$core$Error* _32;
bool _33;
frost$core$Object* _35;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
frost$core$Error* _44;
frost$core$Object* _46;
frost$core$Object* _49;
frost$core$UInt16 _52;
uint16_t _55;
uint32_t _56;
uint16_t _57;
uint32_t _58;
uint32_t _59;
frost$core$UInt32 _60;
uint32_t _64;
uint8_t _65;
frost$core$UInt8 _66;
$fn4 _68;
frost$core$Error* _69;
bool _70;
frost$core$Object* _72;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
frost$core$Error* _81;
frost$core$Object* _83;
frost$core$Object* _86;
frost$core$UInt16 _91;
uint16_t _94;
uint32_t _95;
uint16_t _96;
uint32_t _97;
uint32_t _98;
frost$core$UInt32 _99;
uint32_t _103;
uint8_t _104;
frost$core$UInt8 _105;
$fn5 _107;
frost$core$Error* _108;
bool _109;
frost$core$Object* _111;
bool _113;
frost$core$Bit _114;
bool _115;
frost$core$Int _117;
frost$core$Error* _120;
frost$core$Object* _122;
frost$core$Object* _125;
uint16_t _130;
uint8_t _131;
frost$core$UInt8 _132;
$fn6 _134;
frost$core$Error* _135;
bool _136;
frost$core$Object* _138;
bool _140;
frost$core$Bit _141;
bool _142;
frost$core$Int _144;
frost$core$Error* _147;
frost$core$Object* _149;
frost$core$Object* _152;
frost$core$Object* _156;
frost$core$Error* _158;
frost$core$Object* _159;
frost$core$Error* _164;
frost$core$Error* _165;
frost$core$Object* _166;
frost$core$Error* _168;
frost$core$Object* _169;
frost$core$Error* _173;
frost$core$Object* _174;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:40
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:41
_3 = &param0->byteOrder;
_4 = *_3;
frost$io$ByteOrder$wrapper* $tmp7;
$tmp7 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp7->value = _4;
_5 = ((frost$core$Equatable*) $tmp7);
_6 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:41:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_9 = &(&local2)->$rawValue;
*_9 = _6;
_11 = *(&local2);
*(&local1) = _11;
_14 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp8;
$tmp8 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp8->value = _14;
_15 = ((frost$core$Equatable*) $tmp8);
ITable* $tmp9 = _5->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp9 = $tmp9->next;
}
_16 = $tmp9->methods[0];
_17 = _16(_5, _15);
_18 = _17.value;
_19 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_21);
if (_18) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:42
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:42:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1106
_27 = param1.value;
_28 = ((uint8_t) _27);
_29 = (frost$core$UInt8) {_28};
_31 = ($fn10) param0->$class->vtable[2];
_32 = _31(param0, _29);
_33 = _32 == NULL;
if (_33) goto block8; else goto block9;
block9:;
_35 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = _32 != NULL;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block10; else goto block11;
block11:;
_41 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _41, &$s12);
abort(); // unreachable
block10:;
_44 = _32;
*(&local0) = _44;
_46 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_46);
goto block1;
block8:;
_49 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:43
_52 = (frost$core$UInt16) {8u};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:43:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:517
_55 = param1.value;
_56 = ((uint32_t) _55);
_57 = _52.value;
_58 = ((uint32_t) _57);
_59 = _56 >> _58;
_60 = (frost$core$UInt32) {_59};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:43:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_64 = _60.value;
_65 = ((uint8_t) _64);
_66 = (frost$core$UInt8) {_65};
_68 = ($fn13) param0->$class->vtable[2];
_69 = _68(param0, _66);
_70 = _69 == NULL;
if (_70) goto block14; else goto block15;
block15:;
_72 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_72);
_74 = _69 != NULL;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block16; else goto block17;
block17:;
_78 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _78, &$s15);
abort(); // unreachable
block16:;
_81 = _69;
*(&local0) = _81;
_83 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_83);
goto block1;
block14:;
_86 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_86);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:46
_91 = (frost$core$UInt16) {8u};
// begin inline call to function frost.core.UInt16.>>(other:frost.core.UInt16):frost.core.UInt32 from OutputStream.frost:46:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:517
_94 = param1.value;
_95 = ((uint32_t) _94);
_96 = _91.value;
_97 = ((uint32_t) _96);
_98 = _95 >> _97;
_99 = (frost$core$UInt32) {_98};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from OutputStream.frost:46:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_103 = _99.value;
_104 = ((uint8_t) _103);
_105 = (frost$core$UInt8) {_104};
_107 = ($fn16) param0->$class->vtable[2];
_108 = _107(param0, _105);
_109 = _108 == NULL;
if (_109) goto block20; else goto block21;
block21:;
_111 = ((frost$core$Object*) _108);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = _108 != NULL;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block22; else goto block23;
block23:;
_117 = (frost$core$Int) {46u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _117, &$s18);
abort(); // unreachable
block22:;
_120 = _108;
*(&local0) = _120;
_122 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_122);
goto block1;
block20:;
_125 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:47
// begin inline call to function frost.core.UInt16.get_asUInt8():frost.core.UInt8 from OutputStream.frost:47:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1106
_130 = param1.value;
_131 = ((uint8_t) _130);
_132 = (frost$core$UInt8) {_131};
_134 = ($fn19) param0->$class->vtable[2];
_135 = _134(param0, _132);
_136 = _135 == NULL;
if (_136) goto block25; else goto block26;
block26:;
_138 = ((frost$core$Object*) _135);
frost$core$Frost$ref$frost$core$Object$Q(_138);
_140 = _135 != NULL;
_141 = (frost$core$Bit) {_140};
_142 = _141.value;
if (_142) goto block27; else goto block28;
block28:;
_144 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _144, &$s21);
abort(); // unreachable
block27:;
_147 = _135;
*(&local0) = _147;
_149 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_149);
goto block1;
block25:;
_152 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_152);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:49
_156 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = *(&local0);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:52
_164 = *(&local0);
_165 = _164;
_166 = ((frost$core$Object*) _165);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = *(&local0);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_169);
*(&local0) = ((frost$core$Error*) NULL);
return _165;
block2:;
_173 = *(&local0);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_174);
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
frost$core$Int _6;
frost$core$Int* _9;
frost$io$ByteOrder _11;
frost$io$ByteOrder _14;
frost$core$Equatable* _15;
$fn22 _16;
frost$core$Bit _17;
bool _18;
frost$core$Object* _19;
frost$core$Object* _21;
uint32_t _27;
uint16_t _28;
frost$core$UInt16 _29;
$fn23 _31;
frost$core$Error* _32;
bool _33;
frost$core$Object* _35;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
frost$core$Error* _44;
frost$core$Object* _46;
frost$core$Object* _49;
frost$core$UInt32 _52;
uint32_t _55;
uint32_t _56;
uint32_t _57;
frost$core$UInt32 _58;
uint32_t _62;
uint16_t _63;
frost$core$UInt16 _64;
$fn24 _66;
frost$core$Error* _67;
bool _68;
frost$core$Object* _70;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$Int _76;
frost$core$Error* _79;
frost$core$Object* _81;
frost$core$Object* _84;
frost$core$UInt32 _89;
uint32_t _92;
uint32_t _93;
uint32_t _94;
frost$core$UInt32 _95;
uint32_t _99;
uint16_t _100;
frost$core$UInt16 _101;
$fn25 _103;
frost$core$Error* _104;
bool _105;
frost$core$Object* _107;
bool _109;
frost$core$Bit _110;
bool _111;
frost$core$Int _113;
frost$core$Error* _116;
frost$core$Object* _118;
frost$core$Object* _121;
uint32_t _126;
uint16_t _127;
frost$core$UInt16 _128;
$fn26 _130;
frost$core$Error* _131;
bool _132;
frost$core$Object* _134;
bool _136;
frost$core$Bit _137;
bool _138;
frost$core$Int _140;
frost$core$Error* _143;
frost$core$Object* _145;
frost$core$Object* _148;
frost$core$Object* _152;
frost$core$Error* _154;
frost$core$Object* _155;
frost$core$Error* _160;
frost$core$Error* _161;
frost$core$Object* _162;
frost$core$Error* _164;
frost$core$Object* _165;
frost$core$Error* _169;
frost$core$Object* _170;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:63
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:64
_3 = &param0->byteOrder;
_4 = *_3;
frost$io$ByteOrder$wrapper* $tmp27;
$tmp27 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp27->value = _4;
_5 = ((frost$core$Equatable*) $tmp27);
_6 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:64:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_9 = &(&local2)->$rawValue;
*_9 = _6;
_11 = *(&local2);
*(&local1) = _11;
_14 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp28;
$tmp28 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp28->value = _14;
_15 = ((frost$core$Equatable*) $tmp28);
ITable* $tmp29 = _5->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
_16 = $tmp29->methods[0];
_17 = _16(_5, _15);
_18 = _17.value;
_19 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_21);
if (_18) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:65
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:65:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_27 = param1.value;
_28 = ((uint16_t) _27);
_29 = (frost$core$UInt16) {_28};
_31 = ($fn30) param0->$class->vtable[3];
_32 = _31(param0, _29);
_33 = _32 == NULL;
if (_33) goto block8; else goto block9;
block9:;
_35 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = _32 != NULL;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block10; else goto block11;
block11:;
_41 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _41, &$s32);
abort(); // unreachable
block10:;
_44 = _32;
*(&local0) = _44;
_46 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_46);
goto block1;
block8:;
_49 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:66
_52 = (frost$core$UInt32) {16u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:66:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:382
_55 = param1.value;
_56 = _52.value;
_57 = _55 >> _56;
_58 = (frost$core$UInt32) {_57};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_62 = _58.value;
_63 = ((uint16_t) _62);
_64 = (frost$core$UInt16) {_63};
_66 = ($fn33) param0->$class->vtable[3];
_67 = _66(param0, _64);
_68 = _67 == NULL;
if (_68) goto block14; else goto block15;
block15:;
_70 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = _67 != NULL;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block16; else goto block17;
block17:;
_76 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _76, &$s35);
abort(); // unreachable
block16:;
_79 = _67;
*(&local0) = _79;
_81 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_81);
goto block1;
block14:;
_84 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_84);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:69
_89 = (frost$core$UInt32) {16u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from OutputStream.frost:69:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:382
_92 = param1.value;
_93 = _89.value;
_94 = _92 >> _93;
_95 = (frost$core$UInt32) {_94};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_99 = _95.value;
_100 = ((uint16_t) _99);
_101 = (frost$core$UInt16) {_100};
_103 = ($fn36) param0->$class->vtable[3];
_104 = _103(param0, _101);
_105 = _104 == NULL;
if (_105) goto block20; else goto block21;
block21:;
_107 = ((frost$core$Object*) _104);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = _104 != NULL;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block22; else goto block23;
block23:;
_113 = (frost$core$Int) {69u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _113, &$s38);
abort(); // unreachable
block22:;
_116 = _104;
*(&local0) = _116;
_118 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_118);
goto block1;
block20:;
_121 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_121);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:70
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from OutputStream.frost:70:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_126 = param1.value;
_127 = ((uint16_t) _126);
_128 = (frost$core$UInt16) {_127};
_130 = ($fn39) param0->$class->vtable[3];
_131 = _130(param0, _128);
_132 = _131 == NULL;
if (_132) goto block25; else goto block26;
block26:;
_134 = ((frost$core$Object*) _131);
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = _131 != NULL;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block27; else goto block28;
block28:;
_140 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _140, &$s41);
abort(); // unreachable
block27:;
_143 = _131;
*(&local0) = _143;
_145 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_145);
goto block1;
block25:;
_148 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_148);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:72
_152 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = *(&local0);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:75
_160 = *(&local0);
_161 = _160;
_162 = ((frost$core$Object*) _161);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = *(&local0);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local0) = ((frost$core$Error*) NULL);
return _161;
block2:;
_169 = *(&local0);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
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
frost$core$Int _6;
frost$core$Int* _9;
frost$io$ByteOrder _11;
frost$io$ByteOrder _14;
frost$core$Equatable* _15;
$fn42 _16;
frost$core$Bit _17;
bool _18;
frost$core$Object* _19;
frost$core$Object* _21;
uint64_t _27;
uint32_t _28;
frost$core$UInt32 _29;
$fn43 _31;
frost$core$Error* _32;
bool _33;
frost$core$Object* _35;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
frost$core$Error* _44;
frost$core$Object* _46;
frost$core$Object* _49;
frost$core$UInt64 _52;
uint64_t _55;
uint64_t _56;
uint64_t _57;
frost$core$UInt64 _58;
uint64_t _62;
uint32_t _63;
frost$core$UInt32 _64;
$fn44 _66;
frost$core$Error* _67;
bool _68;
frost$core$Object* _70;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$Int _76;
frost$core$Error* _79;
frost$core$Object* _81;
frost$core$Object* _84;
frost$core$UInt64 _89;
uint64_t _92;
uint64_t _93;
uint64_t _94;
frost$core$UInt64 _95;
uint64_t _99;
uint32_t _100;
frost$core$UInt32 _101;
$fn45 _103;
frost$core$Error* _104;
bool _105;
frost$core$Object* _107;
bool _109;
frost$core$Bit _110;
bool _111;
frost$core$Int _113;
frost$core$Error* _116;
frost$core$Object* _118;
frost$core$Object* _121;
uint64_t _126;
uint32_t _127;
frost$core$UInt32 _128;
$fn46 _130;
frost$core$Error* _131;
bool _132;
frost$core$Object* _134;
bool _136;
frost$core$Bit _137;
bool _138;
frost$core$Int _140;
frost$core$Error* _143;
frost$core$Object* _145;
frost$core$Object* _148;
frost$core$Object* _152;
frost$core$Error* _154;
frost$core$Object* _155;
frost$core$Error* _160;
frost$core$Error* _161;
frost$core$Object* _162;
frost$core$Error* _164;
frost$core$Object* _165;
frost$core$Error* _169;
frost$core$Object* _170;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:86
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:87
_3 = &param0->byteOrder;
_4 = *_3;
frost$io$ByteOrder$wrapper* $tmp47;
$tmp47 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp47->value = _4;
_5 = ((frost$core$Equatable*) $tmp47);
_6 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from OutputStream.frost:87:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_9 = &(&local2)->$rawValue;
*_9 = _6;
_11 = *(&local2);
*(&local1) = _11;
_14 = *(&local1);
frost$io$ByteOrder$wrapper* $tmp48;
$tmp48 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp48->value = _14;
_15 = ((frost$core$Equatable*) $tmp48);
ITable* $tmp49 = _5->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp49 = $tmp49->next;
}
_16 = $tmp49->methods[0];
_17 = _16(_5, _15);
_18 = _17.value;
_19 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_21);
if (_18) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:88
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:88:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_27 = param1.value;
_28 = ((uint32_t) _27);
_29 = (frost$core$UInt32) {_28};
_31 = ($fn50) param0->$class->vtable[4];
_32 = _31(param0, _29);
_33 = _32 == NULL;
if (_33) goto block8; else goto block9;
block9:;
_35 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = _32 != NULL;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block10; else goto block11;
block11:;
_41 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _41, &$s52);
abort(); // unreachable
block10:;
_44 = _32;
*(&local0) = _44;
_46 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_46);
goto block1;
block8:;
_49 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:89
_52 = (frost$core$UInt64) {32u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:89:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_55 = param1.value;
_56 = _52.value;
_57 = _55 >> _56;
_58 = (frost$core$UInt64) {_57};
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:89:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_62 = _58.value;
_63 = ((uint32_t) _62);
_64 = (frost$core$UInt32) {_63};
_66 = ($fn53) param0->$class->vtable[4];
_67 = _66(param0, _64);
_68 = _67 == NULL;
if (_68) goto block14; else goto block15;
block15:;
_70 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = _67 != NULL;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block16; else goto block17;
block17:;
_76 = (frost$core$Int) {89u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _76, &$s55);
abort(); // unreachable
block16:;
_79 = _67;
*(&local0) = _79;
_81 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_81);
goto block1;
block14:;
_84 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_84);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:92
_89 = (frost$core$UInt64) {32u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from OutputStream.frost:92:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_92 = param1.value;
_93 = _89.value;
_94 = _92 >> _93;
_95 = (frost$core$UInt64) {_94};
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:92:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_99 = _95.value;
_100 = ((uint32_t) _99);
_101 = (frost$core$UInt32) {_100};
_103 = ($fn56) param0->$class->vtable[4];
_104 = _103(param0, _101);
_105 = _104 == NULL;
if (_105) goto block20; else goto block21;
block21:;
_107 = ((frost$core$Object*) _104);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = _104 != NULL;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block22; else goto block23;
block23:;
_113 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, _113, &$s58);
abort(); // unreachable
block22:;
_116 = _104;
*(&local0) = _116;
_118 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_118);
goto block1;
block20:;
_121 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_121);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:93
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from OutputStream.frost:93:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_126 = param1.value;
_127 = ((uint32_t) _126);
_128 = (frost$core$UInt32) {_127};
_130 = ($fn59) param0->$class->vtable[4];
_131 = _130(param0, _128);
_132 = _131 == NULL;
if (_132) goto block25; else goto block26;
block26:;
_134 = ((frost$core$Object*) _131);
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = _131 != NULL;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block27; else goto block28;
block28:;
_140 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _140, &$s61);
abort(); // unreachable
block27:;
_143 = _131;
*(&local0) = _143;
_145 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_145);
goto block1;
block25:;
_148 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_148);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:95
_152 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = *(&local0);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:98
_160 = *(&local0);
_161 = _160;
_162 = ((frost$core$Object*) _161);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = *(&local0);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local0) = ((frost$core$Error*) NULL);
return _161;
block2:;
_169 = *(&local0);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
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
frost$core$Int _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$collections$CollectionView* _35;
$fn78 _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$core$Object*** _48;
frost$core$Object** _49;
frost$core$Int64 _50;
int64_t _51;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$UInt8 _56;
$fn79 _57;
frost$core$Error* _58;
bool _59;
frost$core$Object* _61;
bool _63;
frost$core$Bit _64;
bool _65;
frost$core$Int _67;
frost$core$Error* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Error* _115;
frost$core$Error* _116;
frost$core$Object* _117;
frost$core$Error* _119;
frost$core$Object* _120;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Int _82;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
frost$core$Object* _107;
frost$core$Error* _109;
frost$core$Object* _110;
frost$core$Error* _124;
frost$core$Object* _125;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:191
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:192
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:193
_26 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from OutputStream.frost:193:24
_28 = (frost$core$Int) {0u};
_29 = _26.value;
_30 = _28.value;
_31 = _29 >= _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block11; else goto block10;
block11:;
_35 = ((frost$collections$CollectionView*) param1);
ITable* $tmp80 = _35->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
_36 = $tmp80->methods[0];
_37 = _36(_35);
_38 = _26.value;
_39 = _37.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block9; else goto block10;
block10:;
_44 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _44, &$s82);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_48 = &param1->data;
_49 = *_48;
_50 = frost$core$Int64$init$frost$core$Int(_26);
_51 = _50.value;
_52 = _49[_51];
_53 = _52;
frost$core$Frost$ref$frost$core$Object$Q(_53);
_56 = ((frost$core$UInt8$wrapper*) _52)->value;
_57 = ($fn83) param0->$class->vtable[2];
_58 = _57(param0, _56);
_59 = _58 == NULL;
if (_59) goto block12; else goto block13;
block13:;
_61 = ((frost$core$Object*) _58);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = _58 != NULL;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block14; else goto block15;
block15:;
_67 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s84, _67, &$s85);
abort(); // unreachable
block14:;
_70 = _58;
*(&local0) = _70;
_72 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_74);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:198
_115 = *(&local0);
_116 = _115;
_117 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = *(&local0);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local0) = ((frost$core$Error*) NULL);
return _116;
block12:;
_77 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_79);
_82 = *(&local1);
_83 = _8.value;
_84 = _82.value;
_85 = _83 - _84;
_86 = (frost$core$Int) {_85};
if (_10) goto block17; else goto block18;
block17:;
_88 = _86.value;
_89 = _11.value;
_90 = _88 >= _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block16; else goto block4;
block18:;
_94 = _86.value;
_95 = _11.value;
_96 = _94 > _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block16; else goto block4;
block16:;
_100 = _82.value;
_101 = _11.value;
_102 = _100 + _101;
_103 = (frost$core$Int) {_102};
*(&local1) = _103;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:195
_107 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = *(&local0);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_110);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
_124 = *(&local0);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local0) = ((frost$core$Error*) NULL);
goto block19;
block19:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$collections$Array* param1, frost$core$Int param2) {
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
frost$core$Int _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$collections$CollectionView* _35;
$fn86 _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$core$Object*** _48;
frost$core$Object** _49;
frost$core$Int64 _50;
int64_t _51;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$Int8 _56;
int8_t _61;
uint8_t _62;
frost$core$UInt8 _63;
$fn87 _65;
frost$core$Error* _66;
frost$core$Object* _67;
frost$core$Object* _69;
bool _72;
frost$core$Object* _74;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$core$Error* _83;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$Error* _128;
frost$core$Error* _129;
frost$core$Object* _130;
frost$core$Error* _132;
frost$core$Object* _133;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Int _95;
int64_t _96;
int64_t _97;
int64_t _98;
frost$core$Int _99;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
int64_t _115;
frost$core$Int _116;
frost$core$Object* _120;
frost$core$Error* _122;
frost$core$Object* _123;
frost$core$Error* _137;
frost$core$Object* _138;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:211
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:212
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:213
_26 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from OutputStream.frost:213:24
_28 = (frost$core$Int) {0u};
_29 = _26.value;
_30 = _28.value;
_31 = _29 >= _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block11; else goto block10;
block11:;
_35 = ((frost$collections$CollectionView*) param1);
ITable* $tmp88 = _35->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp88 = $tmp88->next;
}
_36 = $tmp88->methods[0];
_37 = _36(_35);
_38 = _26.value;
_39 = _37.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block9; else goto block10;
block10:;
_44 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s89, _44, &$s90);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_48 = &param1->data;
_49 = *_48;
_50 = frost$core$Int64$init$frost$core$Int(_26);
_51 = _50.value;
_52 = _49[_51];
_53 = _52;
frost$core$Frost$ref$frost$core$Object$Q(_53);
_56 = ((frost$core$Int8$wrapper*) _52)->value;
// begin inline call to method frost.io.OutputStream.write(value:frost.core.Int8):frost.core.Error? from OutputStream.frost:213:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:109
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from OutputStream.frost:109:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
_61 = _56.value;
_62 = ((uint8_t) _61);
_63 = (frost$core$UInt8) {_62};
_65 = ($fn91) param0->$class->vtable[2];
_66 = _65(param0, _63);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_72 = _66 == NULL;
if (_72) goto block14; else goto block15;
block15:;
_74 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = _66 != NULL;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block16; else goto block17;
block17:;
_80 = (frost$core$Int) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _80, &$s93);
abort(); // unreachable
block16:;
_83 = _66;
*(&local0) = _83;
_85 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_87);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:218
_128 = *(&local0);
_129 = _128;
_130 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_130);
_132 = *(&local0);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local0) = ((frost$core$Error*) NULL);
return _129;
block14:;
_90 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_92);
_95 = *(&local1);
_96 = _8.value;
_97 = _95.value;
_98 = _96 - _97;
_99 = (frost$core$Int) {_98};
if (_10) goto block19; else goto block20;
block19:;
_101 = _99.value;
_102 = _11.value;
_103 = _101 >= _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block18; else goto block4;
block20:;
_107 = _99.value;
_108 = _11.value;
_109 = _107 > _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block18; else goto block4;
block18:;
_113 = _95.value;
_114 = _11.value;
_115 = _113 + _114;
_116 = (frost$core$Int) {_115};
*(&local1) = _116;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:215
_120 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = *(&local0);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
_137 = *(&local0);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local0) = ((frost$core$Error*) NULL);
goto block21;
block21:;

}
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$collections$Array* param1, frost$core$Int param2) {
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
frost$core$Int _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$collections$CollectionView* _35;
$fn94 _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$core$Object*** _48;
frost$core$Object** _49;
frost$core$Int64 _50;
int64_t _51;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$Char8 _56;
$fn95 _57;
frost$core$Error* _58;
bool _59;
frost$core$Object* _61;
bool _63;
frost$core$Bit _64;
bool _65;
frost$core$Int _67;
frost$core$Error* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Error* _115;
frost$core$Error* _116;
frost$core$Object* _117;
frost$core$Error* _119;
frost$core$Object* _120;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Int _82;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
frost$core$Object* _107;
frost$core$Error* _109;
frost$core$Object* _110;
frost$core$Error* _124;
frost$core$Object* _125;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:231
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:232
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:233
_26 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from OutputStream.frost:233:24
_28 = (frost$core$Int) {0u};
_29 = _26.value;
_30 = _28.value;
_31 = _29 >= _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block11; else goto block10;
block11:;
_35 = ((frost$collections$CollectionView*) param1);
ITable* $tmp96 = _35->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp96 = $tmp96->next;
}
_36 = $tmp96->methods[0];
_37 = _36(_35);
_38 = _26.value;
_39 = _37.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block9; else goto block10;
block10:;
_44 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s97, _44, &$s98);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_48 = &param1->data;
_49 = *_48;
_50 = frost$core$Int64$init$frost$core$Int(_26);
_51 = _50.value;
_52 = _49[_51];
_53 = _52;
frost$core$Frost$ref$frost$core$Object$Q(_53);
_56 = ((frost$core$Char8$wrapper*) _52)->value;
_57 = ($fn99) param0->$class->vtable[16];
_58 = _57(param0, _56);
_59 = _58 == NULL;
if (_59) goto block12; else goto block13;
block13:;
_61 = ((frost$core$Object*) _58);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = _58 != NULL;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block14; else goto block15;
block15:;
_67 = (frost$core$Int) {233u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s100, _67, &$s101);
abort(); // unreachable
block14:;
_70 = _58;
*(&local0) = _70;
_72 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_74);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:238
_115 = *(&local0);
_116 = _115;
_117 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = *(&local0);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local0) = ((frost$core$Error*) NULL);
return _116;
block12:;
_77 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_79);
_82 = *(&local1);
_83 = _8.value;
_84 = _82.value;
_85 = _83 - _84;
_86 = (frost$core$Int) {_85};
if (_10) goto block17; else goto block18;
block17:;
_88 = _86.value;
_89 = _11.value;
_90 = _88 >= _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block16; else goto block4;
block18:;
_94 = _86.value;
_95 = _11.value;
_96 = _94 > _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block16; else goto block4;
block16:;
_100 = _82.value;
_101 = _11.value;
_102 = _100 + _101;
_103 = (frost$core$Int) {_102};
*(&local1) = _103;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:235
_107 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = *(&local0);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_110);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block2:;
_124 = *(&local0);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local0) = ((frost$core$Error*) NULL);
goto block19;
block19:;

}
frost$core$Error* frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q(void* rawSelf, frost$core$Char8 param1) {
frost$io$OutputStream* param0 = (frost$io$OutputStream*) rawSelf;

uint8_t _1;
frost$core$UInt8 _2;
$fn102 _3;
frost$core$Error* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:248
_1 = param1.value;
_2 = (frost$core$UInt8) {_1};
_3 = ($fn103) param0->$class->vtable[2];
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
$fn104 _8;
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
_8 = ($fn105) param0->$class->vtable[10];
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

$fn106 _1;
frost$core$String* _2;
$fn107 _3;
frost$core$Error* _4;
frost$core$Object* _5;
frost$core$Object* _7;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:267
_1 = ($fn108) param1->$class->vtable[0];
_2 = _1(param1);
_3 = ($fn109) param0->$class->vtable[17];
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
$fn110 _3;
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
$fn111 _24;
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
_3 = ($fn112) param0->$class->vtable[17];
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, _13, &$s114);
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
_24 = ($fn115) param0->$class->vtable[21];
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s116, _34, &$s117);
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

$fn118 _1;
frost$core$String* _2;
$fn119 _3;
frost$core$Error* _4;
frost$core$Object* _5;
frost$core$Object* _7;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:293
_1 = ($fn120) param1->$class->vtable[0];
_2 = _1(param1);
_3 = ($fn121) param0->$class->vtable[19];
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
$fn122 _3;
frost$core$Error* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/OutputStream.frost:300
_1 = &param0->lineEnding;
_2 = *_1;
_3 = ($fn123) param0->$class->vtable[17];
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
_13 = ((frost$core$Object*) &$s124);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = &param0->lineEnding;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->lineEnding;
*_19 = &$s125;
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

