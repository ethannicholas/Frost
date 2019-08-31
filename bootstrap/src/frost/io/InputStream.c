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

typedef frost$core$Int16$nullable (*$fn3)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn17)(frost$io$InputStream*);
typedef frost$core$Int64$nullable (*$fn31)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn45)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn59)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn65)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn80)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int16$nullable (*$fn132)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn138)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn153)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int32$nullable (*$fn201)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn207)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn222)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$UInt8$nullable (*$fn274)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn299)(frost$io$InputStream*);
typedef frost$core$Int (*$fn321)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn324)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn336)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn362)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Char8$nullable (*$fn422)(frost$io$InputStream*);
typedef frost$core$Int (*$fn504)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn527)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, 3191935231446009407, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, 192549845863873455, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 5067573960117224623, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };

frost$core$UInt16$nullable frost$io$InputStream$read$R$frost$core$UInt16$Q(frost$io$InputStream* param0) {

frost$core$Int16 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:56
$fn3 $tmp2 = ($fn3) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp4 = $tmp2(param0);
frost$core$Bit $tmp5 = (frost$core$Bit) {$tmp4.nonnull};
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block2:;
frost$core$Int $tmp7 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, $tmp7, &$s9);
abort(); // unreachable
block1:;
*(&local0) = ((frost$core$Int16) $tmp4.value);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:57
frost$core$Int16 $tmp10 = *(&local0);
frost$core$Bit $tmp11 = (frost$core$Bit) {true};
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:58
frost$core$Int16 $tmp13 = *(&local0);
// begin inline call to function frost.core.Int16.get_asUInt16():frost.core.UInt16 from InputStream.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:1130
int16_t $tmp14 = $tmp13.value;
frost$core$UInt16 $tmp15 = (frost$core$UInt16) {((uint16_t) $tmp14)};
return ((frost$core$UInt16$nullable) { $tmp15, true });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:60
return ((frost$core$UInt16$nullable) { .nonnull = false });

}
frost$core$UInt32$nullable frost$io$InputStream$read$R$frost$core$UInt32$Q(frost$io$InputStream* param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:68
$fn17 $tmp16 = ($fn17) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp18 = $tmp16(param0);
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18.nonnull};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int $tmp21 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
*(&local0) = ((frost$core$Int32) $tmp18.value);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:69
frost$core$Int32 $tmp24 = *(&local0);
frost$core$Bit $tmp25 = (frost$core$Bit) {true};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:70
frost$core$Int32 $tmp27 = *(&local0);
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from InputStream.frost:70:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1002
int32_t $tmp28 = $tmp27.value;
frost$core$UInt32 $tmp29 = (frost$core$UInt32) {((uint32_t) $tmp28)};
return ((frost$core$UInt32$nullable) { $tmp29, true });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:72
return ((frost$core$UInt32$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$io$InputStream$read$R$frost$core$UInt64$Q(frost$io$InputStream* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:80
$fn31 $tmp30 = ($fn31) param0->$class->vtable[9];
frost$core$Int64$nullable $tmp32 = $tmp30(param0);
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32.nonnull};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block2:;
frost$core$Int $tmp35 = (frost$core$Int) {80u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, $tmp35, &$s37);
abort(); // unreachable
block1:;
*(&local0) = ((frost$core$Int64) $tmp32.value);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:81
frost$core$Int64 $tmp38 = *(&local0);
frost$core$Bit $tmp39 = (frost$core$Bit) {true};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:82
frost$core$Int64 $tmp41 = *(&local0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from InputStream.frost:82:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp42 = $tmp41.value;
frost$core$UInt64 $tmp43 = (frost$core$UInt64) {((uint64_t) $tmp42)};
return ((frost$core$UInt64$nullable) { $tmp43, true });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:84
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$Int8$nullable frost$io$InputStream$read$R$frost$core$Int8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:91
$fn45 $tmp44 = ($fn45) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp46 = $tmp44(param0);
*(&local0) = $tmp46;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:92
frost$core$UInt8$nullable $tmp47 = *(&local0);
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47.nonnull};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:93
frost$core$UInt8$nullable $tmp50 = *(&local0);
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50.nonnull};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block3; else goto block4;
block4:;
frost$core$Int $tmp53 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block3:;
// begin inline call to function frost.core.UInt8.get_asInt8():frost.core.Int8 from InputStream.frost:93:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1166
uint8_t $tmp56 = ((frost$core$UInt8) $tmp50.value).value;
frost$core$Int8 $tmp57 = (frost$core$Int8) {((int8_t) $tmp56)};
return ((frost$core$Int8$nullable) { $tmp57, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:95
return ((frost$core$Int8$nullable) { .nonnull = false });

}
frost$core$Int16$nullable frost$io$InputStream$read$R$frost$core$Int16$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
frost$core$UInt8$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:103
$fn59 $tmp58 = ($fn59) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp60 = $tmp58(param0);
*(&local0) = $tmp60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:104
frost$core$UInt8$nullable $tmp61 = *(&local0);
frost$core$Bit $tmp62 = (frost$core$Bit) {!$tmp61.nonnull};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:105
return ((frost$core$Int16$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:107
$fn65 $tmp64 = ($fn65) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp66 = $tmp64(param0);
*(&local1) = $tmp66;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:108
frost$core$UInt8$nullable $tmp67 = *(&local1);
frost$core$Bit $tmp68 = (frost$core$Bit) {!$tmp67.nonnull};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:109
return ((frost$core$Int16$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:111
frost$io$ByteOrder* $tmp70 = &param0->byteOrder;
frost$io$ByteOrder $tmp71 = *$tmp70;
frost$io$ByteOrder$wrapper* $tmp72;
$tmp72 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp72->value = $tmp71;
frost$core$Int $tmp73 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:111:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp74 = &(&local3)->$rawValue;
*$tmp74 = $tmp73;
frost$io$ByteOrder $tmp75 = *(&local3);
*(&local2) = $tmp75;
frost$io$ByteOrder $tmp76 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp77;
$tmp77 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp77->value = $tmp76;
ITable* $tmp78 = ((frost$core$Equatable*) $tmp72)->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
frost$core$Bit $tmp81 = $tmp79(((frost$core$Equatable*) $tmp72), ((frost$core$Equatable*) $tmp77));
bool $tmp82 = $tmp81.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp77)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp72)));
if ($tmp82) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:112
frost$core$UInt8$nullable $tmp83 = *(&local1);
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83.nonnull};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block9; else goto block10;
block10:;
frost$core$Int $tmp86 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, $tmp86, &$s88);
abort(); // unreachable
block9:;
frost$core$UInt8 $tmp89 = (frost$core$UInt8) {8u};
// begin inline call to function frost.core.UInt8.<<(other:frost.core.UInt8):frost.core.UInt32 from InputStream.frost:112:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
uint8_t $tmp90 = ((frost$core$UInt8) $tmp83.value).value;
uint8_t $tmp91 = $tmp89.value;
uint32_t $tmp92 = ((uint32_t) $tmp90) << ((uint32_t) $tmp91);
frost$core$UInt32 $tmp93 = (frost$core$UInt32) {$tmp92};
frost$core$UInt8$nullable $tmp94 = *(&local0);
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94.nonnull};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block12; else goto block13;
block13:;
frost$core$Int $tmp97 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s98, $tmp97, &$s99);
abort(); // unreachable
block12:;
frost$core$UInt32 $tmp100 = frost$core$UInt32$init$frost$core$UInt8(((frost$core$UInt8) $tmp94.value));
uint32_t $tmp101 = $tmp93.value;
uint32_t $tmp102 = $tmp100.value;
uint32_t $tmp103 = $tmp101 + $tmp102;
frost$core$UInt32 $tmp104 = (frost$core$UInt32) {$tmp103};
// begin inline call to function frost.core.UInt32.get_asInt16():frost.core.Int16 from InputStream.frost:112:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
uint32_t $tmp105 = $tmp104.value;
frost$core$Int16 $tmp106 = (frost$core$Int16) {((int16_t) $tmp105)};
return ((frost$core$Int16$nullable) { $tmp106, true });
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:115
frost$core$UInt8$nullable $tmp107 = *(&local0);
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107.nonnull};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block15; else goto block16;
block16:;
frost$core$Int $tmp110 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block15:;
frost$core$UInt8 $tmp113 = (frost$core$UInt8) {8u};
// begin inline call to function frost.core.UInt8.<<(other:frost.core.UInt8):frost.core.UInt32 from InputStream.frost:115:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
uint8_t $tmp114 = ((frost$core$UInt8) $tmp107.value).value;
uint8_t $tmp115 = $tmp113.value;
uint32_t $tmp116 = ((uint32_t) $tmp114) << ((uint32_t) $tmp115);
frost$core$UInt32 $tmp117 = (frost$core$UInt32) {$tmp116};
frost$core$UInt8$nullable $tmp118 = *(&local1);
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118.nonnull};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block18; else goto block19;
block19:;
frost$core$Int $tmp121 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s122, $tmp121, &$s123);
abort(); // unreachable
block18:;
frost$core$UInt32 $tmp124 = frost$core$UInt32$init$frost$core$UInt8(((frost$core$UInt8) $tmp118.value));
uint32_t $tmp125 = $tmp117.value;
uint32_t $tmp126 = $tmp124.value;
uint32_t $tmp127 = $tmp125 + $tmp126;
frost$core$UInt32 $tmp128 = (frost$core$UInt32) {$tmp127};
// begin inline call to function frost.core.UInt32.get_asInt16():frost.core.Int16 from InputStream.frost:115:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
uint32_t $tmp129 = $tmp128.value;
frost$core$Int16 $tmp130 = (frost$core$Int16) {((int16_t) $tmp129)};
return ((frost$core$Int16$nullable) { $tmp130, true });
block6:;
goto block21;
block21:;

}
frost$core$Int32$nullable frost$io$InputStream$read$R$frost$core$Int32$Q(frost$io$InputStream* param0) {

frost$core$Int16$nullable local0;
frost$core$Int16$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:124
$fn132 $tmp131 = ($fn132) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp133 = $tmp131(param0);
*(&local0) = $tmp133;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:125
frost$core$Int16$nullable $tmp134 = *(&local0);
frost$core$Bit $tmp135 = (frost$core$Bit) {!$tmp134.nonnull};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:126
return ((frost$core$Int32$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:128
$fn138 $tmp137 = ($fn138) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp139 = $tmp137(param0);
*(&local1) = $tmp139;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:129
frost$core$Int16$nullable $tmp140 = *(&local1);
frost$core$Bit $tmp141 = (frost$core$Bit) {!$tmp140.nonnull};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:130
return ((frost$core$Int32$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:132
frost$io$ByteOrder* $tmp143 = &param0->byteOrder;
frost$io$ByteOrder $tmp144 = *$tmp143;
frost$io$ByteOrder$wrapper* $tmp145;
$tmp145 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp145->value = $tmp144;
frost$core$Int $tmp146 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:132:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp147 = &(&local3)->$rawValue;
*$tmp147 = $tmp146;
frost$io$ByteOrder $tmp148 = *(&local3);
*(&local2) = $tmp148;
frost$io$ByteOrder $tmp149 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp150;
$tmp150 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp150->value = $tmp149;
ITable* $tmp151 = ((frost$core$Equatable*) $tmp145)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Bit $tmp154 = $tmp152(((frost$core$Equatable*) $tmp145), ((frost$core$Equatable*) $tmp150));
bool $tmp155 = $tmp154.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp150)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp145)));
if ($tmp155) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:133
frost$core$Int16$nullable $tmp156 = *(&local1);
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156.nonnull};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block9; else goto block10;
block10:;
frost$core$Int $tmp159 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s160, $tmp159, &$s161);
abort(); // unreachable
block9:;
frost$core$Int16 $tmp162 = (frost$core$Int16) {16u};
// begin inline call to function frost.core.Int16.<<(other:frost.core.Int16):frost.core.Int32 from InputStream.frost:133:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:512
int16_t $tmp163 = ((frost$core$Int16) $tmp156.value).value;
int16_t $tmp164 = $tmp162.value;
int32_t $tmp165 = ((int32_t) $tmp163) << ((int32_t) $tmp164);
frost$core$Int32 $tmp166 = (frost$core$Int32) {$tmp165};
frost$core$Int16$nullable $tmp167 = *(&local0);
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167.nonnull};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block12; else goto block13;
block13:;
frost$core$Int $tmp170 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s171, $tmp170, &$s172);
abort(); // unreachable
block12:;
frost$core$Int32 $tmp173 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp167.value));
int32_t $tmp174 = $tmp166.value;
int32_t $tmp175 = $tmp173.value;
int32_t $tmp176 = $tmp174 + $tmp175;
frost$core$Int32 $tmp177 = (frost$core$Int32) {$tmp176};
return ((frost$core$Int32$nullable) { $tmp177, true });
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:136
frost$core$Int16$nullable $tmp178 = *(&local0);
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178.nonnull};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block14; else goto block15;
block15:;
frost$core$Int $tmp181 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s182, $tmp181, &$s183);
abort(); // unreachable
block14:;
frost$core$Int16 $tmp184 = (frost$core$Int16) {16u};
// begin inline call to function frost.core.Int16.<<(other:frost.core.Int16):frost.core.Int32 from InputStream.frost:136:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:512
int16_t $tmp185 = ((frost$core$Int16) $tmp178.value).value;
int16_t $tmp186 = $tmp184.value;
int32_t $tmp187 = ((int32_t) $tmp185) << ((int32_t) $tmp186);
frost$core$Int32 $tmp188 = (frost$core$Int32) {$tmp187};
frost$core$Int16$nullable $tmp189 = *(&local1);
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189.nonnull};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block17; else goto block18;
block18:;
frost$core$Int $tmp192 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s193, $tmp192, &$s194);
abort(); // unreachable
block17:;
frost$core$Int32 $tmp195 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp189.value));
int32_t $tmp196 = $tmp188.value;
int32_t $tmp197 = $tmp195.value;
int32_t $tmp198 = $tmp196 + $tmp197;
frost$core$Int32 $tmp199 = (frost$core$Int32) {$tmp198};
return ((frost$core$Int32$nullable) { $tmp199, true });
block6:;
goto block19;
block19:;

}
frost$core$Int64$nullable frost$io$InputStream$read$R$frost$core$Int64$Q(frost$io$InputStream* param0) {

frost$core$Int32$nullable local0;
frost$core$Int32$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:145
$fn201 $tmp200 = ($fn201) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp202 = $tmp200(param0);
*(&local0) = $tmp202;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:146
frost$core$Int32$nullable $tmp203 = *(&local0);
frost$core$Bit $tmp204 = (frost$core$Bit) {!$tmp203.nonnull};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:147
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:149
$fn207 $tmp206 = ($fn207) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp208 = $tmp206(param0);
*(&local1) = $tmp208;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:150
frost$core$Int32$nullable $tmp209 = *(&local1);
frost$core$Bit $tmp210 = (frost$core$Bit) {!$tmp209.nonnull};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:151
return ((frost$core$Int64$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:153
frost$io$ByteOrder* $tmp212 = &param0->byteOrder;
frost$io$ByteOrder $tmp213 = *$tmp212;
frost$io$ByteOrder$wrapper* $tmp214;
$tmp214 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp214->value = $tmp213;
frost$core$Int $tmp215 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:153:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp216 = &(&local3)->$rawValue;
*$tmp216 = $tmp215;
frost$io$ByteOrder $tmp217 = *(&local3);
*(&local2) = $tmp217;
frost$io$ByteOrder $tmp218 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp219;
$tmp219 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp219->value = $tmp218;
ITable* $tmp220 = ((frost$core$Equatable*) $tmp214)->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[0];
frost$core$Bit $tmp223 = $tmp221(((frost$core$Equatable*) $tmp214), ((frost$core$Equatable*) $tmp219));
bool $tmp224 = $tmp223.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp219)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp214)));
if ($tmp224) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:154
frost$core$Int32$nullable $tmp225 = *(&local1);
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225.nonnull};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block9; else goto block10;
block10:;
frost$core$Int $tmp228 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s229, $tmp228, &$s230);
abort(); // unreachable
block9:;
int32_t $tmp231 = ((frost$core$Int32) $tmp225.value).value;
frost$core$Int64 $tmp232 = (frost$core$Int64) {((int64_t) $tmp231)};
frost$core$Int64 $tmp233 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from InputStream.frost:154:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234 << $tmp235;
frost$core$Int64 $tmp237 = (frost$core$Int64) {$tmp236};
frost$core$Int32$nullable $tmp238 = *(&local0);
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238.nonnull};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block12; else goto block13;
block13:;
frost$core$Int $tmp241 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s242, $tmp241, &$s243);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp244 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp238.value));
int64_t $tmp245 = $tmp237.value;
int64_t $tmp246 = $tmp244.value;
int64_t $tmp247 = $tmp245 + $tmp246;
frost$core$Int64 $tmp248 = (frost$core$Int64) {$tmp247};
return ((frost$core$Int64$nullable) { $tmp248, true });
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:157
frost$core$Int32$nullable $tmp249 = *(&local0);
frost$core$Bit $tmp250 = (frost$core$Bit) {$tmp249.nonnull};
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block14; else goto block15;
block15:;
frost$core$Int $tmp252 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s253, $tmp252, &$s254);
abort(); // unreachable
block14:;
int32_t $tmp255 = ((frost$core$Int32) $tmp249.value).value;
frost$core$Int64 $tmp256 = (frost$core$Int64) {((int64_t) $tmp255)};
frost$core$Int64 $tmp257 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from InputStream.frost:157:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257.value;
int64_t $tmp260 = $tmp258 << $tmp259;
frost$core$Int64 $tmp261 = (frost$core$Int64) {$tmp260};
frost$core$Int32$nullable $tmp262 = *(&local1);
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262.nonnull};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block17; else goto block18;
block18:;
frost$core$Int $tmp265 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s266, $tmp265, &$s267);
abort(); // unreachable
block17:;
frost$core$Int64 $tmp268 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp262.value));
int64_t $tmp269 = $tmp261.value;
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269 + $tmp270;
frost$core$Int64 $tmp272 = (frost$core$Int64) {$tmp271};
return ((frost$core$Int64$nullable) { $tmp272, true });
block6:;
goto block19;
block19:;

}
frost$core$Char8$nullable frost$io$InputStream$read$R$frost$core$Char8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:165
$fn274 $tmp273 = ($fn274) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp275 = $tmp273(param0);
*(&local0) = $tmp275;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:166
frost$core$UInt8$nullable $tmp276 = *(&local0);
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276.nonnull};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:167
frost$core$UInt8$nullable $tmp279 = *(&local0);
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279.nonnull};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block3; else goto block4;
block4:;
frost$core$Int $tmp282 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s283, $tmp282, &$s284);
abort(); // unreachable
block3:;
frost$core$Char8 $tmp285 = frost$core$Char8$init$frost$core$UInt8(((frost$core$UInt8) $tmp279.value));
frost$core$Bit $tmp286 = (frost$core$Bit) {((frost$core$Char8$nullable) { $tmp285, true }).nonnull};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block5; else goto block6;
block6:;
frost$core$Int $tmp288 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s289, $tmp288, &$s290);
abort(); // unreachable
block5:;
return ((frost$core$Char8$nullable) { ((frost$core$Char8) ((frost$core$Char8$nullable) { $tmp285, true }).value), true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:169
return ((frost$core$Char8$nullable) { .nonnull = false });

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(frost$io$InputStream* param0, frost$core$UInt8* param1, frost$core$Int param2) {

frost$core$Int local0;
frost$core$UInt8$nullable local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:179
frost$core$Int $tmp291 = (frost$core$Int) {0u};
*(&local0) = $tmp291;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:180
goto block1;
block1:;
frost$core$Int $tmp292 = *(&local0);
int64_t $tmp293 = $tmp292.value;
int64_t $tmp294 = param2.value;
bool $tmp295 = $tmp293 < $tmp294;
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:181
$fn299 $tmp298 = ($fn299) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp300 = $tmp298(param0);
*(&local1) = $tmp300;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:182
frost$core$UInt8$nullable $tmp301 = *(&local1);
frost$core$Bit $tmp302 = (frost$core$Bit) {!$tmp301.nonnull};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:183
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:185
frost$core$Int $tmp304 = *(&local0);
frost$core$Int64 $tmp305 = frost$core$Int64$init$frost$core$Int($tmp304);
frost$core$UInt8$nullable $tmp306 = *(&local1);
frost$core$Bit $tmp307 = (frost$core$Bit) {$tmp306.nonnull};
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block6; else goto block7;
block7:;
frost$core$Int $tmp309 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s310, $tmp309, &$s311);
abort(); // unreachable
block6:;
int64_t $tmp312 = $tmp305.value;
param1[$tmp312] = ((frost$core$UInt8) $tmp306.value);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:186
frost$core$Int $tmp313 = *(&local0);
frost$core$Int $tmp314 = (frost$core$Int) {1u};
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315 + $tmp316;
frost$core$Int $tmp318 = (frost$core$Int) {$tmp317};
*(&local0) = $tmp318;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:188
frost$core$Int $tmp319 = *(&local0);
return $tmp319;

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int(frost$io$InputStream* param0, frost$core$Int8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:196
$fn321 $tmp320 = ($fn321) param0->$class->vtable[11];
frost$core$Int $tmp322 = $tmp320(param0, ((frost$core$UInt8*) param1), param2);
return $tmp322;

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int(frost$io$InputStream* param0, frost$core$Char8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:204
$fn324 $tmp323 = ($fn324) param0->$class->vtable[11];
frost$core$Int $tmp325 = $tmp323(param0, ((frost$core$UInt8*) param1), param2);
return $tmp325;

}
frost$core$String* frost$io$InputStream$readFully$R$frost$core$String(frost$io$InputStream* param0) {

frost$core$Int local0;
frost$core$MutableString* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:214
frost$core$Int $tmp326 = (frost$core$Int) {2048u};
*(&local0) = $tmp326;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:215
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp327 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp327);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$MutableString* $tmp328 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local1) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:216
frost$core$Int $tmp329 = *(&local0);
frost$core$Int64 $tmp330 = frost$core$Int64$init$frost$core$Int($tmp329);
int64_t $tmp331 = $tmp330.value;
frost$core$UInt8* $tmp332 = ((frost$core$UInt8*) frostAlloc($tmp331 * 1));
*(&local2) = $tmp332;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:217
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:218
frost$core$UInt8* $tmp333 = *(&local2);
frost$core$Int $tmp334 = *(&local0);
$fn336 $tmp335 = ($fn336) param0->$class->vtable[11];
frost$core$Int $tmp337 = $tmp335(param0, $tmp333, $tmp334);
*(&local3) = $tmp337;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:219
frost$core$Int $tmp338 = *(&local3);
frost$core$Int $tmp339 = (frost$core$Int) {0u};
int64_t $tmp340 = $tmp338.value;
int64_t $tmp341 = $tmp339.value;
bool $tmp342 = $tmp340 <= $tmp341;
frost$core$Bit $tmp343 = (frost$core$Bit) {$tmp342};
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:220
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:224
frost$core$UInt8* $tmp345 = *(&local2);
frostFree($tmp345);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:225
frost$core$MutableString* $tmp346 = *(&local1);
frost$core$String* $tmp347 = frost$core$MutableString$finish$R$frost$core$String($tmp346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$MutableString* $tmp348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp347;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:222
frost$core$MutableString* $tmp349 = *(&local1);
frost$core$UInt8* $tmp350 = *(&local2);
frost$core$Int $tmp351 = *(&local3);
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp349, ((frost$core$Char8*) $tmp350), $tmp351);
goto block1;

}
frost$collections$Array* frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$InputStream* param0) {

frost$core$Int local0;
frost$collections$Array* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int local3;
frost$core$Int local4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:235
frost$core$Int $tmp352 = (frost$core$Int) {2048u};
*(&local0) = $tmp352;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:236
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp353 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp353);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$collections$Array* $tmp354 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local1) = $tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:237
frost$core$Int $tmp355 = *(&local0);
frost$core$Int64 $tmp356 = frost$core$Int64$init$frost$core$Int($tmp355);
int64_t $tmp357 = $tmp356.value;
frost$core$UInt8* $tmp358 = ((frost$core$UInt8*) frostAlloc($tmp357 * 1));
*(&local2) = $tmp358;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:238
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:239
frost$core$UInt8* $tmp359 = *(&local2);
frost$core$Int $tmp360 = *(&local0);
$fn362 $tmp361 = ($fn362) param0->$class->vtable[11];
frost$core$Int $tmp363 = $tmp361(param0, $tmp359, $tmp360);
*(&local3) = $tmp363;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:240
frost$core$Int $tmp364 = *(&local3);
frost$core$Int $tmp365 = (frost$core$Int) {0u};
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 <= $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:241
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:248
frost$core$UInt8* $tmp371 = *(&local2);
frostFree($tmp371);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:249
frost$collections$Array* $tmp372 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$collections$Array* $tmp373 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp372;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:244
frost$core$Int $tmp374 = (frost$core$Int) {0u};
frost$core$Int $tmp375 = *(&local3);
frost$core$Bit $tmp376 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp377 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp374, $tmp375, $tmp376);
frost$core$Int $tmp378 = $tmp377.min;
*(&local4) = $tmp378;
frost$core$Int $tmp379 = $tmp377.max;
frost$core$Bit $tmp380 = $tmp377.inclusive;
bool $tmp381 = $tmp380.value;
frost$core$Int $tmp382 = (frost$core$Int) {1u};
if ($tmp381) goto block8; else goto block9;
block8:;
int64_t $tmp383 = $tmp378.value;
int64_t $tmp384 = $tmp379.value;
bool $tmp385 = $tmp383 <= $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block5; else goto block6;
block9:;
int64_t $tmp388 = $tmp378.value;
int64_t $tmp389 = $tmp379.value;
bool $tmp390 = $tmp388 < $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:245
frost$collections$Array* $tmp393 = *(&local1);
frost$core$UInt8* $tmp394 = *(&local2);
frost$core$Int $tmp395 = *(&local4);
frost$core$Int64 $tmp396 = frost$core$Int64$init$frost$core$Int($tmp395);
int64_t $tmp397 = $tmp396.value;
frost$core$UInt8 $tmp398 = $tmp394[$tmp397];
frost$core$UInt8$wrapper* $tmp399;
$tmp399 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp399->value = $tmp398;
frost$collections$Array$add$frost$collections$Array$T($tmp393, ((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Int $tmp400 = *(&local4);
int64_t $tmp401 = $tmp379.value;
int64_t $tmp402 = $tmp400.value;
int64_t $tmp403 = $tmp401 - $tmp402;
frost$core$Int $tmp404 = (frost$core$Int) {$tmp403};
if ($tmp381) goto block11; else goto block12;
block11:;
int64_t $tmp405 = $tmp404.value;
int64_t $tmp406 = $tmp382.value;
bool $tmp407 = $tmp405 >= $tmp406;
frost$core$Bit $tmp408 = (frost$core$Bit) {$tmp407};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block10; else goto block6;
block12:;
int64_t $tmp410 = $tmp404.value;
int64_t $tmp411 = $tmp382.value;
bool $tmp412 = $tmp410 > $tmp411;
frost$core$Bit $tmp413 = (frost$core$Bit) {$tmp412};
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block10; else goto block6;
block10:;
int64_t $tmp415 = $tmp400.value;
int64_t $tmp416 = $tmp382.value;
int64_t $tmp417 = $tmp415 + $tmp416;
frost$core$Int $tmp418 = (frost$core$Int) {$tmp417};
*(&local4) = $tmp418;
goto block5;
block6:;
goto block1;

}
frost$core$String* frost$io$InputStream$readLine$R$frost$core$String$Q(frost$io$InputStream* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:258
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp419 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp419);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$MutableString* $tmp420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local0) = $tmp419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:259
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:260
$fn422 $tmp421 = ($fn422) param0->$class->vtable[10];
frost$core$Char8$nullable $tmp423 = $tmp421(param0);
*(&local1) = $tmp423;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:261
frost$core$Char8$nullable $tmp424 = *(&local1);
frost$core$Bit $tmp425 = (frost$core$Bit) {!$tmp424.nonnull};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:262
frost$core$MutableString* $tmp427 = *(&local0);
frost$core$Int* $tmp428 = &$tmp427->_length;
frost$core$Int $tmp429 = *$tmp428;
frost$core$Int $tmp430 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from InputStream.frost:262:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp431 = $tmp429.value;
int64_t $tmp432 = $tmp430.value;
bool $tmp433 = $tmp431 == $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:263
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp436 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:265
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:267
frost$core$Char8$nullable $tmp437 = *(&local1);
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437.nonnull};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block10; else goto block11;
block11:;
frost$core$Int $tmp440 = (frost$core$Int) {267u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s441, $tmp440, &$s442);
abort(); // unreachable
block10:;
frost$core$UInt8 $tmp443 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp444 = frost$core$Char8$init$frost$core$UInt8($tmp443);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from InputStream.frost:267:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp445 = ((frost$core$Char8) $tmp437.value).value;
uint8_t $tmp446 = $tmp444.value;
bool $tmp447 = $tmp445 == $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:268
frost$core$MutableString* $tmp450 = *(&local0);
frost$core$Int* $tmp451 = &$tmp450->_length;
frost$core$Int $tmp452 = *$tmp451;
frost$core$Int $tmp453 = (frost$core$Int) {0u};
int64_t $tmp454 = $tmp452.value;
int64_t $tmp455 = $tmp453.value;
bool $tmp456 = $tmp454 > $tmp455;
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp456};
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block15; else goto block14;
block15:;
frost$core$MutableString* $tmp459 = *(&local0);
frost$core$MutableString* $tmp460 = *(&local0);
frost$core$MutableString* $tmp461 = *(&local0);
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from InputStream.frost:268:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp462 = &$tmp461->_length;
frost$core$Int $tmp463 = *$tmp462;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp464 = &(&local3)->value;
*$tmp464 = $tmp463;
frost$core$MutableString$Index $tmp465 = *(&local3);
*(&local2) = $tmp465;
frost$core$MutableString$Index $tmp466 = *(&local2);
frost$core$MutableString$Index $tmp467 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index($tmp460, $tmp466);
frost$core$Char32 $tmp468 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32($tmp459, $tmp467);
frost$core$Int32 $tmp469 = (frost$core$Int32) {13u};
frost$core$Char32 $tmp470 = frost$core$Char32$init$frost$core$Int32($tmp469);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from InputStream.frost:268:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp471 = $tmp468.value;
int32_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 == $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:269
frost$core$MutableString* $tmp476 = *(&local0);
frost$core$Int* $tmp477 = &$tmp476->_length;
frost$core$Int $tmp478 = *$tmp477;
frost$core$Int $tmp479 = (frost$core$Int) {1u};
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479.value;
int64_t $tmp482 = $tmp480 - $tmp481;
frost$core$Int $tmp483 = (frost$core$Int) {$tmp482};
frost$core$Int* $tmp484 = &$tmp476->_length;
*$tmp484 = $tmp483;
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:271
goto block2;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:273
frost$core$MutableString* $tmp485 = *(&local0);
frost$core$Char8$nullable $tmp486 = *(&local1);
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486.nonnull};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block19; else goto block20;
block20:;
frost$core$Int $tmp489 = (frost$core$Int) {273u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s490, $tmp489, &$s491);
abort(); // unreachable
block19:;
frost$core$MutableString$append$frost$core$Char8($tmp485, ((frost$core$Char8) $tmp486.value));
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:275
frost$core$MutableString* $tmp492 = *(&local0);
frost$core$String* $tmp493 = frost$core$MutableString$finish$R$frost$core$String($tmp492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$MutableString* $tmp494 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp493;

}
frost$core$Maybe* frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT(frost$io$InputStream* param0, frost$io$OutputStream* param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$UInt8* local2;
frost$core$Int local3;
frost$core$Error* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:284
frost$core$Int $tmp495 = (frost$core$Int) {0u};
*(&local0) = $tmp495;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:285
frost$core$Int $tmp496 = (frost$core$Int) {2048u};
*(&local1) = $tmp496;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:286
frost$core$Int $tmp497 = *(&local1);
frost$core$Int64 $tmp498 = frost$core$Int64$init$frost$core$Int($tmp497);
int64_t $tmp499 = $tmp498.value;
frost$core$UInt8* $tmp500 = ((frost$core$UInt8*) frostAlloc($tmp499 * 1));
*(&local2) = $tmp500;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:287
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:288
frost$core$UInt8* $tmp501 = *(&local2);
frost$core$Int $tmp502 = *(&local1);
$fn504 $tmp503 = ($fn504) param0->$class->vtable[11];
frost$core$Int $tmp505 = $tmp503(param0, $tmp501, $tmp502);
*(&local3) = $tmp505;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:289
frost$core$Int $tmp506 = *(&local3);
frost$core$Int $tmp507 = (frost$core$Int) {0u};
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507.value;
bool $tmp510 = $tmp508 <= $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:290
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:298
frost$core$UInt8* $tmp513 = *(&local2);
frostFree($tmp513);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:299
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp514 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp515 = (frost$core$Int) {0u};
frost$core$Int $tmp516 = *(&local0);
frost$core$Int$wrapper* $tmp517;
$tmp517 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp517->value = $tmp516;
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T($tmp514, $tmp515, ((frost$core$Object*) $tmp517));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
return $tmp514;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:292
frost$core$Int $tmp518 = *(&local0);
frost$core$Int $tmp519 = *(&local3);
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519.value;
int64_t $tmp522 = $tmp520 + $tmp521;
frost$core$Int $tmp523 = (frost$core$Int) {$tmp522};
*(&local0) = $tmp523;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:293
frost$core$UInt8* $tmp524 = *(&local2);
frost$core$Int $tmp525 = *(&local3);
$fn527 $tmp526 = ($fn527) param1->$class->vtable[10];
frost$core$Error* $tmp528 = $tmp526(param1, $tmp524, $tmp525);
*(&local4) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Error* $tmp529 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local4) = $tmp528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:294
frost$core$Error* $tmp530 = *(&local4);
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530 != NULL};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:295
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp533 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp534 = (frost$core$Int) {1u};
frost$core$Error* $tmp535 = *(&local4);
frost$core$Bit $tmp536 = (frost$core$Bit) {$tmp535 != NULL};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block7; else goto block8;
block8:;
frost$core$Int $tmp538 = (frost$core$Int) {295u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s539, $tmp538, &$s540);
abort(); // unreachable
block7:;
frost$core$Maybe$init$frost$core$Int$frost$core$Error($tmp533, $tmp534, $tmp535);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Error* $tmp541 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local4) = ((frost$core$Error*) NULL);
return $tmp533;
block6:;
frost$core$Error* $tmp542 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local4) = ((frost$core$Error*) NULL);
goto block1;

}
frost$collections$Iterator* frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(frost$io$InputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:307
FROST_ASSERT(32 == sizeof(frost$io$InputStream$LineIterator));
frost$io$InputStream$LineIterator* $tmp543 = (frost$io$InputStream$LineIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$io$InputStream$LineIterator$class);
frost$io$InputStream$LineIterator$init$frost$io$InputStream($tmp543, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
return ((frost$collections$Iterator*) $tmp543);

}
frost$core$Error* frost$io$InputStream$close$R$frost$core$Error$Q(frost$io$InputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:311
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$InputStream$init(frost$io$InputStream* param0) {

frost$io$ByteOrder local0;
frost$io$ByteOrder local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:14
frost$core$Int $tmp544 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:14:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp545 = &(&local1)->$rawValue;
*$tmp545 = $tmp544;
frost$io$ByteOrder $tmp546 = *(&local1);
*(&local0) = $tmp546;
frost$io$ByteOrder $tmp547 = *(&local0);
frost$io$ByteOrder* $tmp548 = &param0->byteOrder;
*$tmp548 = $tmp547;
return;

}
void frost$io$InputStream$cleanup(frost$io$InputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

