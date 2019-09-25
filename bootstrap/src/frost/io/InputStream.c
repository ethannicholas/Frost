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
#include "frost/unsafe/Pointer.h"
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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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
typedef frost$core$UInt8$nullable (*$fn70)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn71)(frost$io$InputStream*);
typedef frost$core$Int (*$fn76)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn77)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn78)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn79)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn80)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn81)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn82)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn83)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Char8$nullable (*$fn85)(frost$io$InputStream*);
typedef frost$core$Char8$nullable (*$fn86)(frost$io$InputStream*);
typedef frost$core$Int (*$fn91)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Error* (*$fn92)(frost$io$OutputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn93)(frost$io$InputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Error* (*$fn95)(frost$io$OutputStream*, frost$unsafe$Pointer, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, 3191935231446009407, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x62\x75\x66\x66\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x6d\x61\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 140, -5200651779235952167, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };

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
frost$core$Int _28;
frost$core$Int* _31;
frost$io$ByteOrder _33;
frost$io$ByteOrder _36;
frost$core$Equatable* _37;
$fn20 _38;
frost$core$Bit _39;
bool _40;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$UInt8$nullable _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
frost$core$UInt8 _55;
frost$core$UInt8 _56;
uint8_t _59;
uint32_t _60;
uint8_t _61;
uint32_t _62;
uint32_t _63;
frost$core$UInt32 _64;
frost$core$UInt8$nullable _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$core$Int _71;
frost$core$UInt8 _74;
frost$core$UInt32 _75;
uint32_t _76;
uint32_t _77;
uint32_t _78;
frost$core$UInt32 _79;
uint32_t _82;
int16_t _83;
frost$core$Int16 _84;
frost$core$Int16$nullable _86;
frost$core$UInt8$nullable _90;
bool _91;
frost$core$Bit _92;
bool _93;
frost$core$Int _95;
frost$core$UInt8 _98;
frost$core$UInt8 _99;
uint8_t _102;
uint32_t _103;
uint8_t _104;
uint32_t _105;
uint32_t _106;
frost$core$UInt32 _107;
frost$core$UInt8$nullable _109;
bool _110;
frost$core$Bit _111;
bool _112;
frost$core$Int _114;
frost$core$UInt8 _117;
frost$core$UInt32 _118;
uint32_t _119;
uint32_t _120;
uint32_t _121;
frost$core$UInt32 _122;
uint32_t _125;
int16_t _126;
frost$core$Int16 _127;
frost$core$Int16$nullable _129;
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
_28 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:111:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_31 = &(&local3)->$rawValue;
*_31 = _28;
_33 = *(&local3);
*(&local2) = _33;
_36 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp24;
$tmp24 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp24->value = _36;
_37 = ((frost$core$Equatable*) $tmp24);
ITable* $tmp25 = _27->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
_38 = $tmp25->methods[0];
_39 = _38(_27, _37);
_40 = _39.value;
_41 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_43);
if (_40) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:112
_47 = *(&local1);
_48 = _47.nonnull;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block9; else goto block10;
block10:;
_52 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _52, &$s27);
abort(); // unreachable
block9:;
_55 = ((frost$core$UInt8) _47.value);
_56 = (frost$core$UInt8) {8u};
// begin inline call to function frost.core.UInt8.<<(other:frost.core.UInt8):frost.core.UInt32 from InputStream.frost:112:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
_59 = _55.value;
_60 = ((uint32_t) _59);
_61 = _56.value;
_62 = ((uint32_t) _61);
_63 = _60 << _62;
_64 = (frost$core$UInt32) {_63};
_66 = *(&local0);
_67 = _66.nonnull;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block12; else goto block13;
block13:;
_71 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _71, &$s29);
abort(); // unreachable
block12:;
_74 = ((frost$core$UInt8) _66.value);
_75 = frost$core$UInt32$init$frost$core$UInt8(_74);
_76 = _64.value;
_77 = _75.value;
_78 = _76 + _77;
_79 = (frost$core$UInt32) {_78};
// begin inline call to function frost.core.UInt32.get_asInt16():frost.core.Int16 from InputStream.frost:112:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
_82 = _79.value;
_83 = ((int16_t) _82);
_84 = (frost$core$Int16) {_83};
_86 = ((frost$core$Int16$nullable) { _84, true });
return _86;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:115
_90 = *(&local0);
_91 = _90.nonnull;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block15; else goto block16;
block16:;
_95 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _95, &$s31);
abort(); // unreachable
block15:;
_98 = ((frost$core$UInt8) _90.value);
_99 = (frost$core$UInt8) {8u};
// begin inline call to function frost.core.UInt8.<<(other:frost.core.UInt8):frost.core.UInt32 from InputStream.frost:115:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
_102 = _98.value;
_103 = ((uint32_t) _102);
_104 = _99.value;
_105 = ((uint32_t) _104);
_106 = _103 << _105;
_107 = (frost$core$UInt32) {_106};
_109 = *(&local1);
_110 = _109.nonnull;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block18; else goto block19;
block19:;
_114 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _114, &$s33);
abort(); // unreachable
block18:;
_117 = ((frost$core$UInt8) _109.value);
_118 = frost$core$UInt32$init$frost$core$UInt8(_117);
_119 = _107.value;
_120 = _118.value;
_121 = _119 + _120;
_122 = (frost$core$UInt32) {_121};
// begin inline call to function frost.core.UInt32.get_asInt16():frost.core.Int16 from InputStream.frost:115:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
_125 = _122.value;
_126 = ((int16_t) _125);
_127 = (frost$core$Int16) {_126};
_129 = ((frost$core$Int16$nullable) { _127, true });
return _129;
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
frost$core$Int _28;
frost$core$Int* _31;
frost$io$ByteOrder _33;
frost$io$ByteOrder _36;
frost$core$Equatable* _37;
$fn36 _38;
frost$core$Bit _39;
bool _40;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Int16$nullable _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
frost$core$Int16 _55;
frost$core$Int16 _56;
int16_t _59;
int32_t _60;
int16_t _61;
int32_t _62;
int32_t _63;
frost$core$Int32 _64;
frost$core$Int16$nullable _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$core$Int _71;
frost$core$Int16 _74;
frost$core$Int32 _75;
int32_t _76;
int32_t _77;
int32_t _78;
frost$core$Int32 _79;
frost$core$Int32$nullable _80;
frost$core$Int16$nullable _84;
bool _85;
frost$core$Bit _86;
bool _87;
frost$core$Int _89;
frost$core$Int16 _92;
frost$core$Int16 _93;
int16_t _96;
int32_t _97;
int16_t _98;
int32_t _99;
int32_t _100;
frost$core$Int32 _101;
frost$core$Int16$nullable _103;
bool _104;
frost$core$Bit _105;
bool _106;
frost$core$Int _108;
frost$core$Int16 _111;
frost$core$Int32 _112;
int32_t _113;
int32_t _114;
int32_t _115;
frost$core$Int32 _116;
frost$core$Int32$nullable _117;
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
_28 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:132:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_31 = &(&local3)->$rawValue;
*_31 = _28;
_33 = *(&local3);
*(&local2) = _33;
_36 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp40;
$tmp40 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp40->value = _36;
_37 = ((frost$core$Equatable*) $tmp40);
ITable* $tmp41 = _27->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp41 = $tmp41->next;
}
_38 = $tmp41->methods[0];
_39 = _38(_27, _37);
_40 = _39.value;
_41 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_43);
if (_40) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:133
_47 = *(&local1);
_48 = _47.nonnull;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block9; else goto block10;
block10:;
_52 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _52, &$s43);
abort(); // unreachable
block9:;
_55 = ((frost$core$Int16) _47.value);
_56 = (frost$core$Int16) {16u};
// begin inline call to function frost.core.Int16.<<(other:frost.core.Int16):frost.core.Int32 from InputStream.frost:133:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:512
_59 = _55.value;
_60 = ((int32_t) _59);
_61 = _56.value;
_62 = ((int32_t) _61);
_63 = _60 << _62;
_64 = (frost$core$Int32) {_63};
_66 = *(&local0);
_67 = _66.nonnull;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block12; else goto block13;
block13:;
_71 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _71, &$s45);
abort(); // unreachable
block12:;
_74 = ((frost$core$Int16) _66.value);
_75 = frost$core$Int32$init$frost$core$Int16(_74);
_76 = _64.value;
_77 = _75.value;
_78 = _76 + _77;
_79 = (frost$core$Int32) {_78};
_80 = ((frost$core$Int32$nullable) { _79, true });
return _80;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:136
_84 = *(&local0);
_85 = _84.nonnull;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block14; else goto block15;
block15:;
_89 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _89, &$s47);
abort(); // unreachable
block14:;
_92 = ((frost$core$Int16) _84.value);
_93 = (frost$core$Int16) {16u};
// begin inline call to function frost.core.Int16.<<(other:frost.core.Int16):frost.core.Int32 from InputStream.frost:136:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:512
_96 = _92.value;
_97 = ((int32_t) _96);
_98 = _93.value;
_99 = ((int32_t) _98);
_100 = _97 << _99;
_101 = (frost$core$Int32) {_100};
_103 = *(&local1);
_104 = _103.nonnull;
_105 = (frost$core$Bit) {_104};
_106 = _105.value;
if (_106) goto block17; else goto block18;
block18:;
_108 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _108, &$s49);
abort(); // unreachable
block17:;
_111 = ((frost$core$Int16) _103.value);
_112 = frost$core$Int32$init$frost$core$Int16(_111);
_113 = _101.value;
_114 = _112.value;
_115 = _113 + _114;
_116 = (frost$core$Int32) {_115};
_117 = ((frost$core$Int32$nullable) { _116, true });
return _117;
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
frost$core$Int _28;
frost$core$Int* _31;
frost$io$ByteOrder _33;
frost$io$ByteOrder _36;
frost$core$Equatable* _37;
$fn52 _38;
frost$core$Bit _39;
bool _40;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Int32$nullable _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
frost$core$Int32 _55;
int32_t _56;
int64_t _57;
frost$core$Int64 _58;
frost$core$Int64 _59;
int64_t _62;
int64_t _63;
int64_t _64;
frost$core$Int64 _65;
frost$core$Int32$nullable _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$Int _72;
frost$core$Int32 _75;
frost$core$Int64 _76;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int64 _80;
frost$core$Int64$nullable _81;
frost$core$Int32$nullable _85;
bool _86;
frost$core$Bit _87;
bool _88;
frost$core$Int _90;
frost$core$Int32 _93;
int32_t _94;
int64_t _95;
frost$core$Int64 _96;
frost$core$Int64 _97;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int64 _103;
frost$core$Int32$nullable _105;
bool _106;
frost$core$Bit _107;
bool _108;
frost$core$Int _110;
frost$core$Int32 _113;
frost$core$Int64 _114;
int64_t _115;
int64_t _116;
int64_t _117;
frost$core$Int64 _118;
frost$core$Int64$nullable _119;
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
_28 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:153:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
_31 = &(&local3)->$rawValue;
*_31 = _28;
_33 = *(&local3);
*(&local2) = _33;
_36 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp56;
$tmp56 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(sizeof(frost$io$ByteOrder$wrapper), (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp56->value = _36;
_37 = ((frost$core$Equatable*) $tmp56);
ITable* $tmp57 = _27->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp57 = $tmp57->next;
}
_38 = $tmp57->methods[0];
_39 = _38(_27, _37);
_40 = _39.value;
_41 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_43);
if (_40) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:154
_47 = *(&local1);
_48 = _47.nonnull;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block9; else goto block10;
block10:;
_52 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _52, &$s59);
abort(); // unreachable
block9:;
_55 = ((frost$core$Int32) _47.value);
_56 = _55.value;
_57 = ((int64_t) _56);
_58 = (frost$core$Int64) {_57};
_59 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from InputStream.frost:154:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
_62 = _58.value;
_63 = _59.value;
_64 = _62 << _63;
_65 = (frost$core$Int64) {_64};
_67 = *(&local0);
_68 = _67.nonnull;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block12; else goto block13;
block13:;
_72 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _72, &$s61);
abort(); // unreachable
block12:;
_75 = ((frost$core$Int32) _67.value);
_76 = frost$core$Int64$init$frost$core$Int32(_75);
_77 = _65.value;
_78 = _76.value;
_79 = _77 + _78;
_80 = (frost$core$Int64) {_79};
_81 = ((frost$core$Int64$nullable) { _80, true });
return _81;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:157
_85 = *(&local0);
_86 = _85.nonnull;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block14; else goto block15;
block15:;
_90 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _90, &$s63);
abort(); // unreachable
block14:;
_93 = ((frost$core$Int32) _85.value);
_94 = _93.value;
_95 = ((int64_t) _94);
_96 = (frost$core$Int64) {_95};
_97 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from InputStream.frost:157:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
_100 = _96.value;
_101 = _97.value;
_102 = _100 << _101;
_103 = (frost$core$Int64) {_102};
_105 = *(&local1);
_106 = _105.nonnull;
_107 = (frost$core$Bit) {_106};
_108 = _107.value;
if (_108) goto block17; else goto block18;
block18:;
_110 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _110, &$s65);
abort(); // unreachable
block17:;
_113 = ((frost$core$Int32) _105.value);
_114 = frost$core$Int64$init$frost$core$Int32(_113);
_115 = _103.value;
_116 = _114.value;
_117 = _115 + _116;
_118 = (frost$core$Int64) {_117};
_119 = ((frost$core$Int64$nullable) { _118, true });
return _119;
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
return _21;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:169
return ((frost$core$Char8$nullable) { .nonnull = false });

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$unsafe$Pointer param1, frost$core$Int param2) {
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
$fn70 _26;
frost$core$UInt8$nullable _27;
frost$core$UInt8$nullable _30;
bool _31;
frost$core$Bit _32;
bool _33;
int64_t _38;
frost$core$Int _39;
frost$core$Int64 _40;
frost$core$UInt8$nullable _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
frost$core$UInt8 _49;
int64_t _50;
frost$core$Int _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
int64_t _57;
frost$core$Int _58;
frost$core$Int _62;
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
_26 = ($fn71) param0->$class->vtable[2];
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
_38 = param1.value;
_39 = *(&local1);
_40 = frost$core$Int64$init$frost$core$Int(_39);
_41 = *(&local2);
_42 = _41.nonnull;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block9; else goto block10;
block10:;
_46 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s72, _46, &$s73);
abort(); // unreachable
block9:;
_49 = ((frost$core$UInt8) _41.value);
_50 = _40.value;
((frost$core$UInt8*)_38)[_50] = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:186
_53 = *(&local1);
_54 = (frost$core$Int) {1u};
_55 = _53.value;
_56 = _54.value;
_57 = _55 + _56;
_58 = (frost$core$Int) {_57};
*(&local1) = _58;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:188
_62 = *(&local1);
*(&local0) = _62;
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, _6, &$s75);
abort(); // unreachable

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$unsafe$Pointer param1, frost$core$Int param2) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

$fn76 _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:196
_1 = ($fn77) param0->$class->vtable[11];
_2 = _1(param0, param1, param2);
return _2;

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$unsafe$Pointer param1, frost$core$Int param2) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

$fn78 _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:204
_1 = ($fn79) param0->$class->vtable[11];
_2 = _1(param0, param1, param2);
return _2;

}
frost$core$String* frost$io$InputStream$readFully$R$frost$core$String(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int local0;
frost$core$MutableString* local1 = NULL;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
frost$core$Int local5;
frost$core$Int _1;
frost$core$MutableString* _4;
frost$core$Object* _7;
frost$core$MutableString* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$Int _16;
int64_t _19;
int64_t _20;
int64_t _21;
int64_t* _24;
frost$unsafe$Pointer _26;
frost$unsafe$Pointer _29;
frost$unsafe$Pointer _35;
frost$core$Int _36;
$fn80 _37;
frost$core$Int _38;
frost$core$Int _41;
frost$core$Int _42;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$unsafe$Pointer _58;
int64_t _61;
frost$core$MutableString* _65;
frost$core$String* _66;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$MutableString* _71;
frost$core$Object* _72;
frost$core$MutableString* _52;
frost$unsafe$Pointer _53;
frost$core$Int _54;
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
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from InputStream.frost:216:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_19 = _16.value;
_20 = _19 * 1u;
_21 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_20);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_24 = &(&local3)->value;
*_24 = _21;
_26 = *(&local3);
*(&local2) = _26;
_29 = *(&local2);
*(&local4) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:217
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:218
_35 = *(&local4);
_36 = *(&local0);
_37 = ($fn81) param0->$class->vtable[11];
_38 = _37(param0, _35, _36);
*(&local5) = _38;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:219
_41 = *(&local5);
_42 = (frost$core$Int) {0u};
_43 = _41.value;
_44 = _42.value;
_45 = _43 <= _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:220
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:224
_58 = *(&local4);
// begin inline call to method frost.unsafe.Pointer.destroy() from InputStream.frost:224:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:132
_61 = _58.value;
frost$core$Frost$destroy$builtin_int(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:225
_65 = *(&local1);
_66 = frost$core$MutableString$finish$R$frost$core$String(_65);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = *(&local1);
_72 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local1) = ((frost$core$MutableString*) NULL);
return _66;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:222
_52 = *(&local1);
_53 = *(&local4);
_54 = *(&local5);
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_52, _53, _54);
goto block3;

}
frost$collections$Array* frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(void* rawSelf) {
frost$io$InputStream* param0 = (frost$io$InputStream*) rawSelf;

frost$core$Int local0;
frost$collections$Array* local1 = NULL;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
frost$core$Int local5;
frost$core$Int local6;
frost$core$Int _1;
frost$collections$Array* _4;
frost$core$Object* _7;
frost$collections$Array* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$Int _16;
int64_t _19;
int64_t _20;
int64_t _21;
int64_t* _24;
frost$unsafe$Pointer _26;
frost$unsafe$Pointer _29;
frost$unsafe$Pointer _35;
frost$core$Int _36;
$fn82 _37;
frost$core$Int _38;
frost$core$Int _41;
frost$core$Int _42;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$unsafe$Pointer _114;
int64_t _117;
frost$collections$Array* _121;
frost$core$Object* _122;
frost$collections$Array* _124;
frost$core$Object* _125;
frost$core$Int _52;
frost$core$Int _53;
frost$core$Bit _54;
frost$core$Range$LTfrost$core$Int$GT _55;
frost$core$Int _56;
frost$core$Int _58;
frost$core$Bit _59;
bool _60;
frost$core$Int _61;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
frost$collections$Array* _76;
frost$unsafe$Pointer _77;
int64_t _78;
frost$core$Int _79;
frost$core$Int64 _80;
int64_t _81;
frost$core$UInt8 _82;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Int _88;
int64_t _89;
int64_t _90;
int64_t _91;
frost$core$Int _92;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
int64_t _100;
int64_t _101;
bool _102;
frost$core$Bit _103;
bool _104;
int64_t _106;
int64_t _107;
int64_t _108;
frost$core$Int _109;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:235
_1 = (frost$core$Int) {2048u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:236
_4 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_4);
*(&local1) = ((frost$collections$Array*) NULL);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local1);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local1) = _4;
_13 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:237
_16 = *(&local0);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from InputStream.frost:237:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_19 = _16.value;
_20 = _19 * 1u;
_21 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_20);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_24 = &(&local3)->value;
*_24 = _21;
_26 = *(&local3);
*(&local2) = _26;
_29 = *(&local2);
*(&local4) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:238
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:239
_35 = *(&local4);
_36 = *(&local0);
_37 = ($fn83) param0->$class->vtable[11];
_38 = _37(param0, _35, _36);
*(&local5) = _38;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:240
_41 = *(&local5);
_42 = (frost$core$Int) {0u};
_43 = _41.value;
_44 = _42.value;
_45 = _43 <= _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:241
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:248
_114 = *(&local4);
// begin inline call to method frost.unsafe.Pointer.destroy() from InputStream.frost:248:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:132
_117 = _114.value;
frost$core$Frost$destroy$builtin_int(_117);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:249
_121 = *(&local1);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = *(&local1);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local1) = ((frost$collections$Array*) NULL);
return _121;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:244
_52 = (frost$core$Int) {0u};
_53 = *(&local5);
_54 = (frost$core$Bit) {false};
_55 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_52, _53, _54);
_56 = _55.min;
*(&local6) = _56;
_58 = _55.max;
_59 = _55.inclusive;
_60 = _59.value;
_61 = (frost$core$Int) {1u};
if (_60) goto block10; else goto block11;
block10:;
_63 = _56.value;
_64 = _58.value;
_65 = _63 <= _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block7; else goto block8;
block11:;
_69 = _56.value;
_70 = _58.value;
_71 = _69 < _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:245
_76 = *(&local1);
_77 = *(&local4);
_78 = _77.value;
_79 = *(&local6);
_80 = frost$core$Int64$init$frost$core$Int(_79);
_81 = _80.value;
_82 = ((frost$core$UInt8*)_78)[_81];
frost$core$UInt8$wrapper* $tmp84;
$tmp84 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp84->value = _82;
_83 = ((frost$core$Object*) $tmp84);
frost$collections$Array$add$frost$collections$Array$T(_76, _83);
_85 = _83;
frost$core$Frost$unref$frost$core$Object$Q(_85);
_88 = *(&local6);
_89 = _58.value;
_90 = _88.value;
_91 = _89 - _90;
_92 = (frost$core$Int) {_91};
if (_60) goto block13; else goto block14;
block13:;
_94 = _92.value;
_95 = _61.value;
_96 = _94 >= _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block12; else goto block8;
block14:;
_100 = _92.value;
_101 = _61.value;
_102 = _100 > _101;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block12; else goto block8;
block12:;
_106 = _88.value;
_107 = _61.value;
_108 = _106 + _107;
_109 = (frost$core$Int) {_108};
*(&local6) = _109;
goto block7;
block8:;
goto block3;

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
$fn85 _15;
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
_15 = ($fn86) param0->$class->vtable[10];
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _54, &$s88);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s89, _130, &$s90);
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
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
frost$core$Int local5;
frost$core$Error* local6 = NULL;
frost$core$Int _1;
frost$core$Int _4;
frost$core$Int _7;
int64_t _10;
int64_t _11;
int64_t _12;
int64_t* _15;
frost$unsafe$Pointer _17;
frost$unsafe$Pointer _20;
frost$unsafe$Pointer _26;
frost$core$Int _27;
$fn91 _28;
frost$core$Int _29;
frost$core$Int _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$unsafe$Pointer _98;
int64_t _101;
frost$core$Maybe* _105;
frost$core$Int _106;
frost$core$Int _107;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Int _43;
frost$core$Int _44;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int _48;
frost$unsafe$Pointer _51;
frost$core$Int _52;
$fn92 _53;
frost$core$Error* _54;
frost$core$Object* _56;
frost$core$Error* _58;
frost$core$Object* _59;
frost$core$Object* _62;
frost$core$Error* _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$core$Maybe* _71;
frost$core$Int _72;
frost$core$Error* _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
frost$core$Error* _81;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Error* _87;
frost$core$Object* _88;
frost$core$Error* _92;
frost$core$Object* _93;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:284
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:285
_4 = (frost$core$Int) {2048u};
*(&local1) = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:286
_7 = *(&local1);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from InputStream.frost:286:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_10 = _7.value;
_11 = _10 * 1u;
_12 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_11);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_15 = &(&local3)->value;
*_15 = _12;
_17 = *(&local3);
*(&local2) = _17;
_20 = *(&local2);
*(&local4) = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:287
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:288
_26 = *(&local4);
_27 = *(&local1);
_28 = ($fn93) param0->$class->vtable[11];
_29 = _28(param0, _26, _27);
*(&local5) = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:289
_32 = *(&local5);
_33 = (frost$core$Int) {0u};
_34 = _32.value;
_35 = _33.value;
_36 = _34 <= _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:290
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:298
_98 = *(&local4);
// begin inline call to method frost.unsafe.Pointer.destroy() from InputStream.frost:298:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:132
_101 = _98.value;
frost$core$Frost$destroy$builtin_int(_101);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:299
_105 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_106 = (frost$core$Int) {0u};
_107 = *(&local0);
frost$core$Int$wrapper* $tmp94;
$tmp94 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp94->value = _107;
_108 = ((frost$core$Object*) $tmp94);
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_105, _106, _108);
_110 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = _108;
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_114);
return _105;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:292
_43 = *(&local0);
_44 = *(&local5);
_45 = _43.value;
_46 = _44.value;
_47 = _45 + _46;
_48 = (frost$core$Int) {_47};
*(&local0) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:293
_51 = *(&local4);
_52 = *(&local5);
_53 = ($fn95) param1->$class->vtable[10];
_54 = _53(param1, _51, _52);
*(&local6) = ((frost$core$Error*) NULL);
_56 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = *(&local6);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local6) = _54;
_62 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_62);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:294
_65 = *(&local6);
_66 = _65 != NULL;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:295
_71 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_72 = (frost$core$Int) {1u};
_73 = *(&local6);
_74 = _73 != NULL;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block9; else goto block10;
block10:;
_78 = (frost$core$Int) {295u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _78, &$s97);
abort(); // unreachable
block9:;
_81 = _73;
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_71, _72, _81);
_83 = ((frost$core$Object*) _71);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = *(&local6);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
*(&local6) = ((frost$core$Error*) NULL);
return _71;
block8:;
_92 = *(&local6);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local6) = ((frost$core$Error*) NULL);
goto block3;

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

