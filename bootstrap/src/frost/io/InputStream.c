#include "frost/io/InputStream.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/UInt16.h"
#include "frost/core/Int16.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt32.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int64.h"
#include "frost/core/Int8.h"
#include "frost/core/UInt8.h"
#include "frost/io/ByteOrder.h"
#include "frost/core/Equatable.h"
#include "frost/core/Char8.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Maybe.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Error.h"
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream/LineIterator.h"


static frost$core$String $s1;
frost$io$InputStream$class_type frost$io$InputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$InputStream$cleanup, NULL, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };

typedef frost$core$Int16$nullable (*$fn2)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn3)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn6)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn7)(frost$io$InputStream*);
typedef frost$core$Int64$nullable (*$fn10)(frost$io$InputStream*);
typedef frost$core$Int64$nullable (*$fn11)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn14)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn15)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn18)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn19)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn20)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$UInt8$nullable (*$fn21)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn22)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn34)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn35)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn36)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int16$nullable (*$fn37)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn38)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn50)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn51)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn52)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int32$nullable (*$fn53)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn54)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn66)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn67)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn72)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn73)(frost$io$InputStream*);
typedef frost$core$Int (*$fn78)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn79)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn80)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn81)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn82)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn83)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn84)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn85)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Char8$nullable (*$fn87)(frost$io$InputStream*);
typedef frost$core$Char8$nullable (*$fn88)(frost$io$InputStream*);
typedef frost$core$Int (*$fn93)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn94)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn95)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn97)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, 3191935231446009407, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x62\x75\x66\x66\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x6d\x61\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 140, -5200651779235952167, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };

frost$core$UInt16$nullable frost$io$InputStream$read$R$frost$core$UInt16$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int16 local0;
$fn2 _1;
frost$core$Int16$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
frost$core$Int16 _10;
frost$core$Int16 _13;
frost$core$Bit _14;
bool _15;
frost$core$Int16 _18;
int16_t _21;
uint16_t _22;
frost$core$UInt16 _23;
frost$core$UInt16$nullable _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:56
_1 = ($fn3) param0->$class->vtable[7];
_2 = _1(param0);
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _7, &$s5);
abort(); // unreachable
block1:;
_10 = ((frost$core$Int16) _2.value);
*(&local0) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:57
_13 = *(&local0);
_14 = (frost$core$Bit) {true};
_15 = _14.value;
if (_15) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:58
_18 = *(&local0);
// begin inline call to function frost.core.Int16.get_asUInt16():frost.core.UInt16 from InputStream.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:1130
_21 = _18.value;
_22 = ((uint16_t) _21);
_23 = (frost$core$UInt16) {_22};
_25 = ((frost$core$UInt16$nullable) { _23, true });
return _25;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:60
return ((frost$core$UInt16$nullable) { .nonnull = false });

}
frost$core$UInt32$nullable frost$io$InputStream$read$R$frost$core$UInt32$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int32 local0;
$fn6 _1;
frost$core$Int32$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
frost$core$Int32 _10;
frost$core$Int32 _13;
frost$core$Bit _14;
bool _15;
frost$core$Int32 _18;
int32_t _21;
uint32_t _22;
frost$core$UInt32 _23;
frost$core$UInt32$nullable _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:68
_1 = ($fn7) param0->$class->vtable[8];
_2 = _1(param0);
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _7, &$s9);
abort(); // unreachable
block1:;
_10 = ((frost$core$Int32) _2.value);
*(&local0) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:69
_13 = *(&local0);
_14 = (frost$core$Bit) {true};
_15 = _14.value;
if (_15) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:70
_18 = *(&local0);
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from InputStream.frost:70:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1002
_21 = _18.value;
_22 = ((uint32_t) _21);
_23 = (frost$core$UInt32) {_22};
_25 = ((frost$core$UInt32$nullable) { _23, true });
return _25;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:72
return ((frost$core$UInt32$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$io$InputStream$read$R$frost$core$UInt64$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int64 local0;
$fn10 _1;
frost$core$Int64$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
frost$core$Int64 _10;
frost$core$Int64 _13;
frost$core$Bit _14;
bool _15;
frost$core$Int64 _18;
int64_t _21;
uint64_t _22;
frost$core$UInt64 _23;
frost$core$UInt64$nullable _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:80
_1 = ($fn11) param0->$class->vtable[9];
_2 = _1(param0);
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {80u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _7, &$s13);
abort(); // unreachable
block1:;
_10 = ((frost$core$Int64) _2.value);
*(&local0) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:81
_13 = *(&local0);
_14 = (frost$core$Bit) {true};
_15 = _14.value;
if (_15) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:82
_18 = *(&local0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from InputStream.frost:82:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_21 = _18.value;
_22 = ((uint64_t) _21);
_23 = (frost$core$UInt64) {_22};
_25 = ((frost$core$UInt64$nullable) { _23, true });
return _25;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:84
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$Int8$nullable frost$io$InputStream$read$R$frost$core$Int8$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$UInt8$nullable local0;
$fn14 _1;
frost$core$UInt8$nullable _2;
frost$core$UInt8$nullable _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$UInt8$nullable _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$core$UInt8 _19;
uint8_t _22;
int8_t _23;
frost$core$Int8 _24;
frost$core$Int8$nullable _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:91
_1 = ($fn15) param0->$class->vtable[2];
_2 = _1(param0);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:92
_5 = *(&local0);
_6 = _5.nonnull;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:93
_11 = *(&local0);
_12 = _11.nonnull;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block3; else goto block4;
block4:;
_16 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _16, &$s17);
abort(); // unreachable
block3:;
_19 = ((frost$core$UInt8) _11.value);
// begin inline call to function frost.core.UInt8.get_asInt8():frost.core.Int8 from InputStream.frost:93:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1166
_22 = _19.value;
_23 = ((int8_t) _22);
_24 = (frost$core$Int8) {_23};
_26 = ((frost$core$Int8$nullable) { _24, true });
return _26;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:95
return ((frost$core$Int8$nullable) { .nonnull = false });

}
frost$core$Int16$nullable frost$io$InputStream$read$R$frost$core$Int16$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$UInt8$nullable local0;
frost$core$UInt8$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
$fn18 _1;
frost$core$UInt8$nullable _2;
frost$core$UInt8$nullable _5;
bool _6;
frost$core$Bit _7;
bool _8;
$fn19 _13;
frost$core$UInt8$nullable _14;
frost$core$UInt8$nullable _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$io$ByteOrder* _25;
frost$io$ByteOrder _26;
frost$core$Equatable* _27;
frost$core$Equatable* _28;
frost$core$Int _29;
frost$core$Int* _32;
frost$io$ByteOrder _34;
frost$io$ByteOrder _37;
frost$core$Equatable* _38;
$fn20 _39;
frost$core$Bit _40;
bool _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$UInt8$nullable _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$UInt8 _56;
frost$core$UInt8 _57;
uint8_t _60;
uint32_t _61;
uint8_t _62;
uint32_t _63;
uint32_t _64;
frost$core$UInt32 _65;
frost$core$UInt8$nullable _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$Int _72;
frost$core$UInt8 _75;
frost$core$UInt32 _76;
uint32_t _77;
uint32_t _78;
uint32_t _79;
frost$core$UInt32 _80;
uint32_t _83;
int16_t _84;
frost$core$Int16 _85;
frost$core$Int16$nullable _87;
frost$core$UInt8$nullable _91;
bool _92;
frost$core$Bit _93;
bool _94;
frost$core$Int _96;
frost$core$UInt8 _99;
frost$core$UInt8 _100;
uint8_t _103;
uint32_t _104;
uint8_t _105;
uint32_t _106;
uint32_t _107;
frost$core$UInt32 _108;
frost$core$UInt8$nullable _110;
bool _111;
frost$core$Bit _112;
bool _113;
frost$core$Int _115;
frost$core$UInt8 _118;
frost$core$UInt32 _119;
uint32_t _120;
uint32_t _121;
uint32_t _122;
frost$core$UInt32 _123;
uint32_t _126;
int16_t _127;
frost$core$Int16 _128;
frost$core$Int16$nullable _130;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:103
_1 = ($fn21) param0->$class->vtable[2];
_2 = _1(param0);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:104
_5 = *(&local0);
_6 = !_5.nonnull;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:105
return ((frost$core$Int16$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:107
_13 = ($fn22) param0->$class->vtable[2];
_14 = _13(param0);
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:108
_17 = *(&local1);
_18 = !_17.nonnull;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:109
return ((frost$core$Int16$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:111
_25 = &param0->byteOrder;
_26 = *_25;
frost$io$ByteOrder$wrapper* $tmp23;
$tmp23 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp23->value = _26;
_27 = ((frost$core$Equatable*) $tmp23);
_28 = _27;
_29 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:111:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_32 = &(&local3)->$rawValue;
*_32 = _29;
_34 = *(&local3);
*(&local2) = _34;
_37 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp24;
$tmp24 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp24->value = _37;
_38 = ((frost$core$Equatable*) $tmp24);
ITable* $tmp25 = _28->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
_39 = $tmp25->methods[0];
_40 = _39(_28, _38);
_41 = _40.value;
_42 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_44);
if (_41) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:112
_48 = *(&local1);
_49 = _48.nonnull;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block9; else goto block10;
block10:;
_53 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _53, &$s27);
abort(); // unreachable
block9:;
_56 = ((frost$core$UInt8) _48.value);
_57 = (frost$core$UInt8) {8u};
// begin inline call to function frost.core.UInt8.<<(other:frost.core.UInt8):frost.core.UInt32 from InputStream.frost:112:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
_60 = _56.value;
_61 = ((uint32_t) _60);
_62 = _57.value;
_63 = ((uint32_t) _62);
_64 = _61 << _63;
_65 = (frost$core$UInt32) {_64};
_67 = *(&local0);
_68 = _67.nonnull;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block12; else goto block13;
block13:;
_72 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _72, &$s29);
abort(); // unreachable
block12:;
_75 = ((frost$core$UInt8) _67.value);
_76 = frost$core$UInt32$init$frost$core$UInt8(_75);
_77 = _65.value;
_78 = _76.value;
_79 = _77 + _78;
_80 = (frost$core$UInt32) {_79};
// begin inline call to function frost.core.UInt32.get_asInt16():frost.core.Int16 from InputStream.frost:112:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
_83 = _80.value;
_84 = ((int16_t) _83);
_85 = (frost$core$Int16) {_84};
_87 = ((frost$core$Int16$nullable) { _85, true });
return _87;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:115
_91 = *(&local0);
_92 = _91.nonnull;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block15; else goto block16;
block16:;
_96 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _96, &$s31);
abort(); // unreachable
block15:;
_99 = ((frost$core$UInt8) _91.value);
_100 = (frost$core$UInt8) {8u};
// begin inline call to function frost.core.UInt8.<<(other:frost.core.UInt8):frost.core.UInt32 from InputStream.frost:115:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
_103 = _99.value;
_104 = ((uint32_t) _103);
_105 = _100.value;
_106 = ((uint32_t) _105);
_107 = _104 << _106;
_108 = (frost$core$UInt32) {_107};
_110 = *(&local1);
_111 = _110.nonnull;
_112 = (frost$core$Bit) {_111};
_113 = _112.value;
if (_113) goto block18; else goto block19;
block19:;
_115 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _115, &$s33);
abort(); // unreachable
block18:;
_118 = ((frost$core$UInt8) _110.value);
_119 = frost$core$UInt32$init$frost$core$UInt8(_118);
_120 = _108.value;
_121 = _119.value;
_122 = _120 + _121;
_123 = (frost$core$UInt32) {_122};
// begin inline call to function frost.core.UInt32.get_asInt16():frost.core.Int16 from InputStream.frost:115:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
_126 = _123.value;
_127 = ((int16_t) _126);
_128 = (frost$core$Int16) {_127};
_130 = ((frost$core$Int16$nullable) { _128, true });
return _130;
block6:;
goto block21;
block21:;

}
frost$core$Int32$nullable frost$io$InputStream$read$R$frost$core$Int32$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int16$nullable local0;
frost$core$Int16$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
$fn34 _1;
frost$core$Int16$nullable _2;
frost$core$Int16$nullable _5;
bool _6;
frost$core$Bit _7;
bool _8;
$fn35 _13;
frost$core$Int16$nullable _14;
frost$core$Int16$nullable _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$io$ByteOrder* _25;
frost$io$ByteOrder _26;
frost$core$Equatable* _27;
frost$core$Equatable* _28;
frost$core$Int _29;
frost$core$Int* _32;
frost$io$ByteOrder _34;
frost$io$ByteOrder _37;
frost$core$Equatable* _38;
$fn36 _39;
frost$core$Bit _40;
bool _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Int16$nullable _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$Int16 _56;
frost$core$Int16 _57;
int16_t _60;
int32_t _61;
int16_t _62;
int32_t _63;
int32_t _64;
frost$core$Int32 _65;
frost$core$Int16$nullable _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$Int _72;
frost$core$Int16 _75;
frost$core$Int32 _76;
int32_t _77;
int32_t _78;
int32_t _79;
frost$core$Int32 _80;
frost$core$Int32$nullable _81;
frost$core$Int16$nullable _85;
bool _86;
frost$core$Bit _87;
bool _88;
frost$core$Int _90;
frost$core$Int16 _93;
frost$core$Int16 _94;
int16_t _97;
int32_t _98;
int16_t _99;
int32_t _100;
int32_t _101;
frost$core$Int32 _102;
frost$core$Int16$nullable _104;
bool _105;
frost$core$Bit _106;
bool _107;
frost$core$Int _109;
frost$core$Int16 _112;
frost$core$Int32 _113;
int32_t _114;
int32_t _115;
int32_t _116;
frost$core$Int32 _117;
frost$core$Int32$nullable _118;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:124
_1 = ($fn37) param0->$class->vtable[7];
_2 = _1(param0);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:125
_5 = *(&local0);
_6 = !_5.nonnull;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:126
return ((frost$core$Int32$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:128
_13 = ($fn38) param0->$class->vtable[7];
_14 = _13(param0);
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:129
_17 = *(&local1);
_18 = !_17.nonnull;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:130
return ((frost$core$Int32$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:132
_25 = &param0->byteOrder;
_26 = *_25;
frost$io$ByteOrder$wrapper* $tmp39;
$tmp39 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp39->value = _26;
_27 = ((frost$core$Equatable*) $tmp39);
_28 = _27;
_29 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:132:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_32 = &(&local3)->$rawValue;
*_32 = _29;
_34 = *(&local3);
*(&local2) = _34;
_37 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp40;
$tmp40 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp40->value = _37;
_38 = ((frost$core$Equatable*) $tmp40);
ITable* $tmp41 = _28->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp41 = $tmp41->next;
}
_39 = $tmp41->methods[0];
_40 = _39(_28, _38);
_41 = _40.value;
_42 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_44);
if (_41) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:133
_48 = *(&local1);
_49 = _48.nonnull;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block9; else goto block10;
block10:;
_53 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _53, &$s43);
abort(); // unreachable
block9:;
_56 = ((frost$core$Int16) _48.value);
_57 = (frost$core$Int16) {16u};
// begin inline call to function frost.core.Int16.<<(other:frost.core.Int16):frost.core.Int32 from InputStream.frost:133:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:512
_60 = _56.value;
_61 = ((int32_t) _60);
_62 = _57.value;
_63 = ((int32_t) _62);
_64 = _61 << _63;
_65 = (frost$core$Int32) {_64};
_67 = *(&local0);
_68 = _67.nonnull;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block12; else goto block13;
block13:;
_72 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _72, &$s45);
abort(); // unreachable
block12:;
_75 = ((frost$core$Int16) _67.value);
_76 = frost$core$Int32$init$frost$core$Int16(_75);
_77 = _65.value;
_78 = _76.value;
_79 = _77 + _78;
_80 = (frost$core$Int32) {_79};
_81 = ((frost$core$Int32$nullable) { _80, true });
return _81;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:136
_85 = *(&local0);
_86 = _85.nonnull;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block14; else goto block15;
block15:;
_90 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _90, &$s47);
abort(); // unreachable
block14:;
_93 = ((frost$core$Int16) _85.value);
_94 = (frost$core$Int16) {16u};
// begin inline call to function frost.core.Int16.<<(other:frost.core.Int16):frost.core.Int32 from InputStream.frost:136:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:512
_97 = _93.value;
_98 = ((int32_t) _97);
_99 = _94.value;
_100 = ((int32_t) _99);
_101 = _98 << _100;
_102 = (frost$core$Int32) {_101};
_104 = *(&local1);
_105 = _104.nonnull;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block17; else goto block18;
block18:;
_109 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _109, &$s49);
abort(); // unreachable
block17:;
_112 = ((frost$core$Int16) _104.value);
_113 = frost$core$Int32$init$frost$core$Int16(_112);
_114 = _102.value;
_115 = _113.value;
_116 = _114 + _115;
_117 = (frost$core$Int32) {_116};
_118 = ((frost$core$Int32$nullable) { _117, true });
return _118;
block6:;
goto block19;
block19:;

}
frost$core$Int64$nullable frost$io$InputStream$read$R$frost$core$Int64$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int32$nullable local0;
frost$core$Int32$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
$fn50 _1;
frost$core$Int32$nullable _2;
frost$core$Int32$nullable _5;
bool _6;
frost$core$Bit _7;
bool _8;
$fn51 _13;
frost$core$Int32$nullable _14;
frost$core$Int32$nullable _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$io$ByteOrder* _25;
frost$io$ByteOrder _26;
frost$core$Equatable* _27;
frost$core$Equatable* _28;
frost$core$Int _29;
frost$core$Int* _32;
frost$io$ByteOrder _34;
frost$io$ByteOrder _37;
frost$core$Equatable* _38;
$fn52 _39;
frost$core$Bit _40;
bool _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Int32$nullable _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$Int32 _56;
int32_t _57;
int64_t _58;
frost$core$Int64 _59;
frost$core$Int64 _60;
int64_t _63;
int64_t _64;
int64_t _65;
frost$core$Int64 _66;
frost$core$Int32$nullable _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$core$Int _73;
frost$core$Int32 _76;
frost$core$Int64 _77;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int64 _81;
frost$core$Int64$nullable _82;
frost$core$Int32$nullable _86;
bool _87;
frost$core$Bit _88;
bool _89;
frost$core$Int _91;
frost$core$Int32 _94;
int32_t _95;
int64_t _96;
frost$core$Int64 _97;
frost$core$Int64 _98;
int64_t _101;
int64_t _102;
int64_t _103;
frost$core$Int64 _104;
frost$core$Int32$nullable _106;
bool _107;
frost$core$Bit _108;
bool _109;
frost$core$Int _111;
frost$core$Int32 _114;
frost$core$Int64 _115;
int64_t _116;
int64_t _117;
int64_t _118;
frost$core$Int64 _119;
frost$core$Int64$nullable _120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:145
_1 = ($fn53) param0->$class->vtable[8];
_2 = _1(param0);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:146
_5 = *(&local0);
_6 = !_5.nonnull;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:147
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:149
_13 = ($fn54) param0->$class->vtable[8];
_14 = _13(param0);
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:150
_17 = *(&local1);
_18 = !_17.nonnull;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:151
return ((frost$core$Int64$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:153
_25 = &param0->byteOrder;
_26 = *_25;
frost$io$ByteOrder$wrapper* $tmp55;
$tmp55 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp55->value = _26;
_27 = ((frost$core$Equatable*) $tmp55);
_28 = _27;
_29 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:153:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_32 = &(&local3)->$rawValue;
*_32 = _29;
_34 = *(&local3);
*(&local2) = _34;
_37 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp56;
$tmp56 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp56->value = _37;
_38 = ((frost$core$Equatable*) $tmp56);
ITable* $tmp57 = _28->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp57 = $tmp57->next;
}
_39 = $tmp57->methods[0];
_40 = _39(_28, _38);
_41 = _40.value;
_42 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_44);
if (_41) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:154
_48 = *(&local1);
_49 = _48.nonnull;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block9; else goto block10;
block10:;
_53 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _53, &$s59);
abort(); // unreachable
block9:;
_56 = ((frost$core$Int32) _48.value);
_57 = _56.value;
_58 = ((int64_t) _57);
_59 = (frost$core$Int64) {_58};
_60 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from InputStream.frost:154:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
_63 = _59.value;
_64 = _60.value;
_65 = _63 << _64;
_66 = (frost$core$Int64) {_65};
_68 = *(&local0);
_69 = _68.nonnull;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block12; else goto block13;
block13:;
_73 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _73, &$s61);
abort(); // unreachable
block12:;
_76 = ((frost$core$Int32) _68.value);
_77 = frost$core$Int64$init$frost$core$Int32(_76);
_78 = _66.value;
_79 = _77.value;
_80 = _78 + _79;
_81 = (frost$core$Int64) {_80};
_82 = ((frost$core$Int64$nullable) { _81, true });
return _82;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:157
_86 = *(&local0);
_87 = _86.nonnull;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block14; else goto block15;
block15:;
_91 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _91, &$s63);
abort(); // unreachable
block14:;
_94 = ((frost$core$Int32) _86.value);
_95 = _94.value;
_96 = ((int64_t) _95);
_97 = (frost$core$Int64) {_96};
_98 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from InputStream.frost:157:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
_101 = _97.value;
_102 = _98.value;
_103 = _101 << _102;
_104 = (frost$core$Int64) {_103};
_106 = *(&local1);
_107 = _106.nonnull;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block17; else goto block18;
block18:;
_111 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _111, &$s65);
abort(); // unreachable
block17:;
_114 = ((frost$core$Int32) _106.value);
_115 = frost$core$Int64$init$frost$core$Int32(_114);
_116 = _104.value;
_117 = _115.value;
_118 = _116 + _117;
_119 = (frost$core$Int64) {_118};
_120 = ((frost$core$Int64$nullable) { _119, true });
return _120;
block6:;
goto block19;
block19:;

}
frost$core$Char8$nullable frost$io$InputStream$read$R$frost$core$Char8$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$UInt8$nullable local0;
$fn66 _1;
frost$core$UInt8$nullable _2;
frost$core$UInt8$nullable _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$UInt8$nullable _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$core$UInt8 _19;
frost$core$Char8 _20;
frost$core$Char8$nullable _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _26;
frost$core$Char8 _29;
frost$core$Char8$nullable _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:165
_1 = ($fn67) param0->$class->vtable[2];
_2 = _1(param0);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:166
_5 = *(&local0);
_6 = _5.nonnull;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:167
_11 = *(&local0);
_12 = _11.nonnull;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block3; else goto block4;
block4:;
_16 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, _16, &$s69);
abort(); // unreachable
block3:;
_19 = ((frost$core$UInt8) _11.value);
_20 = frost$core$Char8$init$frost$core$UInt8(_19);
_21 = ((frost$core$Char8$nullable) { _20, true });
_22 = _21.nonnull;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block5; else goto block6;
block6:;
_26 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _26, &$s71);
abort(); // unreachable
block5:;
_29 = ((frost$core$Char8) _21.value);
_30 = ((frost$core$Char8$nullable) { _29, true });
return _30;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:169
return ((frost$core$Char8$nullable) { .nonnull = false });

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$UInt8* param1, frost$core$Int param2) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$UInt8$nullable local2;
frost$core$Int _14;
frost$core$Int _18;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _23;
$fn72 _26;
frost$core$UInt8$nullable _27;
frost$core$UInt8$nullable _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _38;
frost$core$Int64 _39;
frost$core$UInt8$nullable _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$Int _45;
frost$core$UInt8 _48;
int64_t _49;
frost$core$Int _52;
frost$core$Int _53;
int64_t _54;
int64_t _55;
int64_t _56;
frost$core$Int _57;
frost$core$Int _61;
frost$core$Int _0;
frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _9;
frost$core$Int _11;
frost$core$Int _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:179
_14 = (frost$core$Int) {0u};
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:180
goto block4;
block4:;
_18 = *(&local1);
_19 = _18.value;
_20 = param2.value;
_21 = _19 < _20;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:181
_26 = ($fn73) param0->$class->vtable[2];
_27 = _26(param0);
*(&local2) = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:182
_30 = *(&local2);
_31 = !_30.nonnull;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:183
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:185
_38 = *(&local1);
_39 = frost$core$Int64$init$frost$core$Int(_38);
_40 = *(&local2);
_41 = _40.nonnull;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block9; else goto block10;
block10:;
_45 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, _45, &$s75);
abort(); // unreachable
block9:;
_48 = ((frost$core$UInt8) _40.value);
_49 = _39.value;
param1[_49] = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:186
_52 = *(&local1);
_53 = (frost$core$Int) {1u};
_54 = _52.value;
_55 = _53.value;
_56 = _54 + _55;
_57 = (frost$core$Int) {_56};
*(&local1) = _57;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:188
_61 = *(&local1);
*(&local0) = _61;
_0 = *(&local0);
_1 = (frost$core$Int) {0u};
_2 = _0.value;
_3 = _1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
_9 = _5.value;
if (_9) goto block2; else goto block3;
block2:;
_11 = *(&local0);
return _11;
block3:;
_6 = (frost$core$Int) {178u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _6, &$s77);
abort(); // unreachable

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int8* param1, frost$core$Int param2) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$UInt8* _1;
$fn78 _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:196
_1 = ((frost$core$UInt8*) param1);
_2 = ($fn79) param0->$class->vtable[11];
_3 = _2(param0, _1, param2);
return _3;

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Char8* param1, frost$core$Int param2) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$UInt8* _1;
$fn80 _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:204
_1 = ((frost$core$UInt8*) param1);
_2 = ($fn81) param0->$class->vtable[11];
_3 = _2(param0, _1, param2);
return _3;

}
frost$core$String* frost$io$InputStream$readFully$R$frost$core$String(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int local0;
frost$core$MutableString* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int local3;
frost$core$Int _1;
frost$core$MutableString* _4;
frost$core$Object* _7;
frost$core$MutableString* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$Int _16;
frost$core$Int64 _17;
int64_t _18;
frost$core$UInt8* _19;
frost$core$UInt8* _24;
frost$core$Int _25;
$fn82 _26;
frost$core$Int _27;
frost$core$Int _30;
frost$core$Int _31;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$UInt8* _48;
frost$core$MutableString* _51;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$Object* _55;
frost$core$MutableString* _57;
frost$core$Object* _58;
frost$core$MutableString* _41;
frost$core$UInt8* _42;
frost$core$Char8* _43;
frost$core$Int _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:214
_1 = (frost$core$Int) {2048u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:215
_4 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_4);
*(&local1) = ((frost$core$MutableString*) NULL);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local1);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local1) = _4;
_13 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:216
_16 = *(&local0);
_17 = frost$core$Int64$init$frost$core$Int(_16);
_18 = _17.value;
_19 = ((frost$core$UInt8*) frostAlloc(_18 * sizeof(frost$core$UInt8)));
*(&local2) = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:217
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:218
_24 = *(&local2);
_25 = *(&local0);
_26 = ($fn83) param0->$class->vtable[11];
_27 = _26(param0, _24, _25);
*(&local3) = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:219
_30 = *(&local3);
_31 = (frost$core$Int) {0u};
_32 = _30.value;
_33 = _31.value;
_34 = _32 <= _33;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:220
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:224
_48 = *(&local2);
frostFree(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:225
_51 = *(&local1);
_52 = frost$core$MutableString$finish$R$frost$core$String(_51);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = *(&local1);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local1) = ((frost$core$MutableString*) NULL);
return _52;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:222
_41 = *(&local1);
_42 = *(&local2);
_43 = ((frost$core$Char8*) _42);
_44 = *(&local3);
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_41, _43, _44);
goto block1;

}
frost$collections$Array* frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int local0;
frost$collections$Array* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int local3;
frost$core$Int local4;
frost$core$Int _1;
frost$collections$Array* _4;
frost$collections$Array* _5;
frost$core$Object* _8;
frost$collections$Array* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$Int _17;
frost$core$Int64 _18;
int64_t _19;
frost$core$UInt8* _20;
frost$core$UInt8* _25;
frost$core$Int _26;
$fn84 _27;
frost$core$Int _28;
frost$core$Int _31;
frost$core$Int _32;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$core$UInt8* _104;
frost$collections$Array* _107;
frost$core$Object* _108;
frost$collections$Array* _110;
frost$core$Object* _111;
frost$core$Int _42;
frost$core$Int _43;
frost$core$Bit _44;
frost$core$Range$LTfrost$core$Int$GT _45;
frost$core$Int _46;
frost$core$Int _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _51;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _63;
frost$collections$Array* _66;
frost$collections$Array* _67;
frost$core$UInt8* _68;
frost$core$Int _69;
frost$core$Int64 _70;
int64_t _71;
frost$core$UInt8 _72;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Int _78;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int _82;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
int64_t _96;
int64_t _97;
int64_t _98;
frost$core$Int _99;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:235
_1 = (frost$core$Int) {2048u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:236
_4 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_5 = _4;
frost$collections$Array$init(_5);
*(&local1) = ((frost$collections$Array*) NULL);
_8 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local1) = _4;
_14 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:237
_17 = *(&local0);
_18 = frost$core$Int64$init$frost$core$Int(_17);
_19 = _18.value;
_20 = ((frost$core$UInt8*) frostAlloc(_19 * sizeof(frost$core$UInt8)));
*(&local2) = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:238
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:239
_25 = *(&local2);
_26 = *(&local0);
_27 = ($fn85) param0->$class->vtable[11];
_28 = _27(param0, _25, _26);
*(&local3) = _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:240
_31 = *(&local3);
_32 = (frost$core$Int) {0u};
_33 = _31.value;
_34 = _32.value;
_35 = _33 <= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:241
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:248
_104 = *(&local2);
frostFree(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:249
_107 = *(&local1);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = *(&local1);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local1) = ((frost$collections$Array*) NULL);
return _107;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:244
_42 = (frost$core$Int) {0u};
_43 = *(&local3);
_44 = (frost$core$Bit) {false};
_45 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_42, _43, _44);
_46 = _45.min;
*(&local4) = _46;
_48 = _45.max;
_49 = _45.inclusive;
_50 = _49.value;
_51 = (frost$core$Int) {1u};
if (_50) goto block8; else goto block9;
block8:;
_53 = _46.value;
_54 = _48.value;
_55 = _53 <= _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block5; else goto block6;
block9:;
_59 = _46.value;
_60 = _48.value;
_61 = _59 < _60;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:245
_66 = *(&local1);
_67 = _66;
_68 = *(&local2);
_69 = *(&local4);
_70 = frost$core$Int64$init$frost$core$Int(_69);
_71 = _70.value;
_72 = _68[_71];
frost$core$UInt8$wrapper* $tmp86;
$tmp86 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp86->value = _72;
_73 = ((frost$core$Object*) $tmp86);
frost$collections$Array$add$frost$collections$Array$T(_67, _73);
_75 = _73;
frost$core$Frost$unref$frost$core$Object$Q(_75);
_78 = *(&local4);
_79 = _48.value;
_80 = _78.value;
_81 = _79 - _80;
_82 = (frost$core$Int) {_81};
if (_50) goto block11; else goto block12;
block11:;
_84 = _82.value;
_85 = _51.value;
_86 = _84 >= _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block10; else goto block6;
block12:;
_90 = _82.value;
_91 = _51.value;
_92 = _90 > _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block10; else goto block6;
block10:;
_96 = _78.value;
_97 = _51.value;
_98 = _96 + _97;
_99 = (frost$core$Int) {_98};
*(&local4) = _99;
goto block5;
block6:;
goto block1;

}
frost$core$String* frost$io$InputStream$readLine$R$frost$core$String$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
$fn87 _15;
frost$core$Char8$nullable _16;
frost$core$Char8$nullable _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$core$MutableString* _25;
frost$core$Int* _26;
frost$core$Int _27;
frost$core$Int _28;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _36;
frost$core$Object* _39;
frost$core$MutableString* _41;
frost$core$Object* _42;
frost$core$Char8$nullable _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Int _54;
frost$core$Char8 _57;
frost$core$UInt8 _58;
frost$core$Char8 _59;
uint8_t _62;
uint8_t _63;
bool _64;
frost$core$Bit _65;
bool _67;
frost$core$MutableString* _70;
frost$core$Int* _71;
frost$core$Int _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$MutableString* _80;
frost$core$MutableString* _81;
frost$core$MutableString* _82;
frost$core$Int* _85;
frost$core$Int _86;
frost$core$Int* _89;
frost$core$MutableString$Index _91;
frost$core$MutableString$Index _94;
frost$core$MutableString$Index _96;
frost$core$Char32 _97;
frost$core$Int32 _98;
frost$core$Char32 _99;
int32_t _102;
int32_t _103;
bool _104;
frost$core$Bit _105;
bool _107;
frost$core$MutableString* _110;
frost$core$Int* _111;
frost$core$Int _112;
frost$core$Int _113;
int64_t _114;
int64_t _115;
int64_t _116;
frost$core$Int _117;
frost$core$Int* _118;
frost$core$MutableString* _124;
frost$core$Char8$nullable _125;
bool _126;
frost$core$Bit _127;
bool _128;
frost$core$Int _130;
frost$core$Char8 _133;
frost$core$MutableString* _137;
frost$core$String* _138;
frost$core$String* _139;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$MutableString* _144;
frost$core$Object* _145;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:258
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:259
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:260
_15 = ($fn88) param0->$class->vtable[10];
_16 = _15(param0);
*(&local1) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:261
_19 = *(&local1);
_20 = !_19.nonnull;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:262
_25 = *(&local0);
_26 = &_25->_length;
_27 = *_26;
_28 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from InputStream.frost:262:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _27.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:263
_39 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local0);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:265
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:267
_49 = *(&local1);
_50 = _49.nonnull;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block10; else goto block11;
block11:;
_54 = (frost$core$Int) {267u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s89, _54, &$s90);
abort(); // unreachable
block10:;
_57 = ((frost$core$Char8) _49.value);
_58 = (frost$core$UInt8) {10u};
_59 = frost$core$Char8$init$frost$core$UInt8(_58);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from InputStream.frost:267:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_62 = _57.value;
_63 = _59.value;
_64 = _62 == _63;
_65 = (frost$core$Bit) {_64};
_67 = _65.value;
if (_67) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:268
_70 = *(&local0);
_71 = &_70->_length;
_72 = *_71;
_73 = (frost$core$Int) {0u};
_74 = _72.value;
_75 = _73.value;
_76 = _74 > _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block15; else goto block14;
block15:;
_80 = *(&local0);
_81 = *(&local0);
_82 = *(&local0);
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from InputStream.frost:268:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
_85 = &_82->_length;
_86 = *_85;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
_89 = &(&local3)->value;
*_89 = _86;
_91 = *(&local3);
*(&local2) = _91;
_94 = *(&local2);
_96 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(_81, _94);
_97 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(_80, _96);
_98 = (frost$core$Int32) {13u};
_99 = frost$core$Char32$init$frost$core$Int32(_98);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from InputStream.frost:268:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_102 = _97.value;
_103 = _99.value;
_104 = _102 == _103;
_105 = (frost$core$Bit) {_104};
_107 = _105.value;
if (_107) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:269
_110 = *(&local0);
_111 = &_110->_length;
_112 = *_111;
_113 = (frost$core$Int) {1u};
_114 = _112.value;
_115 = _113.value;
_116 = _114 - _115;
_117 = (frost$core$Int) {_116};
_118 = &_110->_length;
*_118 = _117;
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:271
goto block2;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:273
_124 = *(&local0);
_125 = *(&local1);
_126 = _125.nonnull;
_127 = (frost$core$Bit) {_126};
_128 = _127.value;
if (_128) goto block19; else goto block20;
block20:;
_130 = (frost$core$Int) {273u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s91, _130, &$s92);
abort(); // unreachable
block19:;
_133 = ((frost$core$Char8) _125.value);
frost$core$MutableString$append$frost$core$Char8(_124, _133);
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:275
_137 = *(&local0);
_138 = frost$core$MutableString$finish$R$frost$core$String(_137);
_139 = _138;
_140 = ((frost$core$Object*) _139);
frost$core$Frost$ref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = *(&local0);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local0) = ((frost$core$MutableString*) NULL);
return _139;

}
frost$core$Maybe* frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT(void* rawSelf, frost$io$OutputStream* param1) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$UInt8* local2;
frost$core$Int local3;
frost$core$Error* local4 = NULL;
frost$core$Int _1;
frost$core$Int _4;
frost$core$Int _7;
frost$core$Int64 _8;
int64_t _9;
frost$core$UInt8* _10;
frost$core$UInt8* _15;
frost$core$Int _16;
$fn93 _17;
frost$core$Int _18;
frost$core$Int _21;
frost$core$Int _22;
int64_t _23;
int64_t _24;
bool _25;
frost$core$Bit _26;
bool _27;
frost$core$UInt8* _88;
frost$core$Maybe* _91;
frost$core$Maybe* _92;
frost$core$Int _93;
frost$core$Int _94;
frost$core$Object* _95;
frost$core$Object* _97;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$Int _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
int64_t _36;
frost$core$Int _37;
frost$core$UInt8* _40;
frost$core$Int _41;
$fn94 _42;
frost$core$Error* _43;
frost$core$Object* _45;
frost$core$Error* _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Error* _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$core$Maybe* _60;
frost$core$Maybe* _61;
frost$core$Int _62;
frost$core$Error* _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$core$Int _68;
frost$core$Error* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Error* _77;
frost$core$Object* _78;
frost$core$Error* _82;
frost$core$Object* _83;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:284
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:285
_4 = (frost$core$Int) {2048u};
*(&local1) = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:286
_7 = *(&local1);
_8 = frost$core$Int64$init$frost$core$Int(_7);
_9 = _8.value;
_10 = ((frost$core$UInt8*) frostAlloc(_9 * sizeof(frost$core$UInt8)));
*(&local2) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:287
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:288
_15 = *(&local2);
_16 = *(&local1);
_17 = ($fn95) param0->$class->vtable[11];
_18 = _17(param0, _15, _16);
*(&local3) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:289
_21 = *(&local3);
_22 = (frost$core$Int) {0u};
_23 = _21.value;
_24 = _22.value;
_25 = _23 <= _24;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:290
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:298
_88 = *(&local2);
frostFree(_88);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:299
_91 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_92 = _91;
_93 = (frost$core$Int) {0u};
_94 = *(&local0);
frost$core$Int$wrapper* $tmp96;
$tmp96 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp96->value = _94;
_95 = ((frost$core$Object*) $tmp96);
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_92, _93, _95);
_97 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_97);
_99 = _95;
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_101);
return _91;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:292
_32 = *(&local0);
_33 = *(&local3);
_34 = _32.value;
_35 = _33.value;
_36 = _34 + _35;
_37 = (frost$core$Int) {_36};
*(&local0) = _37;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:293
_40 = *(&local2);
_41 = *(&local3);
_42 = ($fn97) param1->$class->vtable[10];
_43 = _42(param1, _40, _41);
*(&local4) = ((frost$core$Error*) NULL);
_45 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local4);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local4) = _43;
_51 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_51);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:294
_54 = *(&local4);
_55 = _54 != NULL;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:295
_60 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_61 = _60;
_62 = (frost$core$Int) {1u};
_63 = *(&local4);
_64 = _63 != NULL;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block7; else goto block8;
block8:;
_68 = (frost$core$Int) {295u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s98, _68, &$s99);
abort(); // unreachable
block7:;
_71 = _63;
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_61, _62, _71);
_73 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = *(&local4);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local4) = ((frost$core$Error*) NULL);
return _60;
block6:;
_82 = *(&local4);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local4) = ((frost$core$Error*) NULL);
goto block1;

}
frost$collections$Iterator* frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$io$InputStream$LineIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:307
_1 = (frost$io$InputStream$LineIterator*) frostObjectAlloc(sizeof(frost$io$InputStream$LineIterator), (frost$core$Class*) &frost$io$InputStream$LineIterator$class);
frost$io$InputStream$LineIterator$init$frost$io$InputStream(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Error* frost$io$InputStream$close$R$frost$core$Error$Q(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:311
_1 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1);
return ((frost$core$Error*) NULL);

}
void frost$io$InputStream$init(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$io$ByteOrder local0;
frost$io$ByteOrder local1;
frost$core$Int _1;
frost$core$Int* _4;
frost$io$ByteOrder _6;
frost$io$ByteOrder _9;
frost$io$ByteOrder* _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:14
_1 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:14:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_4 = &(&local1)->$rawValue;
*_4 = _1;
_6 = *(&local1);
*(&local0) = _6;
_9 = *(&local0);
_10 = &param0->byteOrder;
*_10 = _9;
return;

}
void frost$io$InputStream$cleanup(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

