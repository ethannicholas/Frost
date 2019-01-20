#include "frost/io/InputStream.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/UInt16.h"
#include "frost/core/Int16.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt32.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int8.h"
#include "frost/core/UInt8.h"
#include "frost/io/ByteOrder.h"
#include "frost/core/Equatable.h"
#include "frost/core/Char8.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Maybe.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Error.h"
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream/LineIterator.h"


static frost$core$String $s1;
frost$io$InputStream$class_type frost$io$InputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$InputStream$cleanup, NULL, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };

typedef frost$core$Int16$nullable (*$fn3)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn16)(frost$io$InputStream*);
typedef frost$core$Int64$nullable (*$fn29)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn42)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn55)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn61)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn74)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int16$nullable (*$fn123)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn129)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn142)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int32$nullable (*$fn189)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn195)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn208)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$UInt8$nullable (*$fn259)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn284)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn316)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn319)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn330)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn355)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Char8$nullable (*$fn416)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn485)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn503)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -5494188274558096821, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, -4755360762366142727, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 2021060694383823997, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 5988084942103078614, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, -4755360762366142727, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, -4755360762366142727, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, -4755360762366142727, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 71, -4755360762366142727, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 444528001966893676, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 2021060694383823997, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 2021060694383823997, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 2021060694383823997, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 71, 2021060694383823997, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 662755659477810069, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, 6429331476505863113, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 7935194284755564189, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x62\x75\x66\x66\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x6d\x61\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 144, -3741681415420647689, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, 6429331476505863113, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, 6429331476505863113, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, -3555560516261098471, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x63\x6c\x6f\x73\x65\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, -7263992578022205712, NULL };

frost$core$UInt16$nullable frost$io$InputStream$read$R$frost$core$UInt16$Q(frost$io$InputStream* param0) {

frost$core$Int16 local0;
// line 56
$fn3 $tmp2 = ($fn3) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp4 = $tmp2(param0);
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit($tmp4.nonnull);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp7 = (frost$core$Int64) {56};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s8, $tmp7, &$s9);
abort(); // unreachable
block1:;
*(&local0) = ((frost$core$Int16) $tmp4.value);
// line 57
frost$core$Int16 $tmp10 = *(&local0);
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit(true);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 58
frost$core$Int16 $tmp13 = *(&local0);
frost$core$UInt16 $tmp14 = frost$core$Int16$get_asUInt16$R$frost$core$UInt16($tmp13);
return ((frost$core$UInt16$nullable) { $tmp14, true });
block4:;
// line 60
return ((frost$core$UInt16$nullable) { .nonnull = false });

}
frost$core$UInt32$nullable frost$io$InputStream$read$R$frost$core$UInt32$Q(frost$io$InputStream* param0) {

frost$core$Int32 local0;
// line 68
$fn16 $tmp15 = ($fn16) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp17 = $tmp15(param0);
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17.nonnull);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {68};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
*(&local0) = ((frost$core$Int32) $tmp17.value);
// line 69
frost$core$Int32 $tmp23 = *(&local0);
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(true);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block4;
block3:;
// line 70
frost$core$Int32 $tmp26 = *(&local0);
frost$core$UInt32 $tmp27 = frost$core$Int32$get_asUInt32$R$frost$core$UInt32($tmp26);
return ((frost$core$UInt32$nullable) { $tmp27, true });
block4:;
// line 72
return ((frost$core$UInt32$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$io$InputStream$read$R$frost$core$UInt64$Q(frost$io$InputStream* param0) {

frost$core$Int64 local0;
// line 80
$fn29 $tmp28 = ($fn29) param0->$class->vtable[9];
frost$core$Int64$nullable $tmp30 = $tmp28(param0);
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit($tmp30.nonnull);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp33 = (frost$core$Int64) {80};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block1:;
*(&local0) = ((frost$core$Int64) $tmp30.value);
// line 81
frost$core$Int64 $tmp36 = *(&local0);
frost$core$Bit $tmp37 = frost$core$Bit$init$builtin_bit(true);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block3; else goto block4;
block3:;
// line 82
frost$core$Int64 $tmp39 = *(&local0);
frost$core$UInt64 $tmp40 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp39);
return ((frost$core$UInt64$nullable) { $tmp40, true });
block4:;
// line 84
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$Int8$nullable frost$io$InputStream$read$R$frost$core$Int8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// line 91
$fn42 $tmp41 = ($fn42) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp43 = $tmp41(param0);
*(&local0) = $tmp43;
// line 92
frost$core$UInt8$nullable $tmp44 = *(&local0);
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit($tmp44.nonnull);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block1; else goto block2;
block1:;
// line 93
frost$core$UInt8$nullable $tmp47 = *(&local0);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47.nonnull);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {93};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block3:;
frost$core$Int8 $tmp53 = frost$core$UInt8$get_asInt8$R$frost$core$Int8(((frost$core$UInt8) $tmp47.value));
return ((frost$core$Int8$nullable) { $tmp53, true });
block2:;
// line 95
return ((frost$core$Int8$nullable) { .nonnull = false });

}
frost$core$Int16$nullable frost$io$InputStream$read$R$frost$core$Int16$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
frost$core$UInt8$nullable local1;
// line 103
$fn55 $tmp54 = ($fn55) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp56 = $tmp54(param0);
*(&local0) = $tmp56;
// line 104
frost$core$UInt8$nullable $tmp57 = *(&local0);
frost$core$Bit $tmp58 = frost$core$Bit$init$builtin_bit(!$tmp57.nonnull);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block1; else goto block2;
block1:;
// line 105
return ((frost$core$Int16$nullable) { .nonnull = false });
block2:;
// line 107
$fn61 $tmp60 = ($fn61) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp62 = $tmp60(param0);
*(&local1) = $tmp62;
// line 108
frost$core$UInt8$nullable $tmp63 = *(&local1);
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit(!$tmp63.nonnull);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block3; else goto block4;
block3:;
// line 109
return ((frost$core$Int16$nullable) { .nonnull = false });
block4:;
// line 111
frost$io$ByteOrder* $tmp66 = &param0->byteOrder;
frost$io$ByteOrder $tmp67 = *$tmp66;
frost$io$ByteOrder$wrapper* $tmp68;
$tmp68 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp68->value = $tmp67;
frost$core$Int64 $tmp69 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp70 = frost$io$ByteOrder$init$frost$core$Int64($tmp69);
frost$io$ByteOrder$wrapper* $tmp71;
$tmp71 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp71->value = $tmp70;
ITable* $tmp72 = ((frost$core$Equatable*) $tmp68)->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
frost$core$Bit $tmp75 = $tmp73(((frost$core$Equatable*) $tmp68), ((frost$core$Equatable*) $tmp71));
bool $tmp76 = $tmp75.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp71)));
// unreffing REF($31:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp68)));
// unreffing REF($27:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp76) goto block5; else goto block7;
block5:;
// line 112
frost$core$UInt8$nullable $tmp77 = *(&local1);
frost$core$Bit $tmp78 = frost$core$Bit$init$builtin_bit($tmp77.nonnull);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp80 = (frost$core$Int64) {112};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s81, $tmp80, &$s82);
abort(); // unreachable
block8:;
frost$core$UInt8 $tmp83 = (frost$core$UInt8) {8};
frost$core$UInt32 $tmp84 = frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8) $tmp77.value), $tmp83);
frost$core$UInt8$nullable $tmp85 = *(&local0);
frost$core$Bit $tmp86 = frost$core$Bit$init$builtin_bit($tmp85.nonnull);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp88 = (frost$core$Int64) {112};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s89, $tmp88, &$s90);
abort(); // unreachable
block10:;
frost$core$UInt32 $tmp91 = frost$core$UInt32$init$frost$core$UInt8(((frost$core$UInt8) $tmp85.value));
uint32_t $tmp92 = $tmp84.value;
uint32_t $tmp93 = $tmp91.value;
uint32_t $tmp94 = $tmp92 + $tmp93;
frost$core$UInt32 $tmp95 = (frost$core$UInt32) {$tmp94};
frost$core$Int16 $tmp96 = frost$core$UInt32$get_asInt16$R$frost$core$Int16($tmp95);
return ((frost$core$Int16$nullable) { $tmp96, true });
block7:;
// line 1
// line 115
frost$core$UInt8$nullable $tmp97 = *(&local0);
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit($tmp97.nonnull);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s101, $tmp100, &$s102);
abort(); // unreachable
block12:;
frost$core$UInt8 $tmp103 = (frost$core$UInt8) {8};
frost$core$UInt32 $tmp104 = frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8) $tmp97.value), $tmp103);
frost$core$UInt8$nullable $tmp105 = *(&local1);
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105.nonnull);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp108 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s109, $tmp108, &$s110);
abort(); // unreachable
block14:;
frost$core$UInt32 $tmp111 = frost$core$UInt32$init$frost$core$UInt8(((frost$core$UInt8) $tmp105.value));
uint32_t $tmp112 = $tmp104.value;
uint32_t $tmp113 = $tmp111.value;
uint32_t $tmp114 = $tmp112 + $tmp113;
frost$core$UInt32 $tmp115 = (frost$core$UInt32) {$tmp114};
frost$core$Int16 $tmp116 = frost$core$UInt32$get_asInt16$R$frost$core$Int16($tmp115);
return ((frost$core$Int16$nullable) { $tmp116, true });
block6:;
frost$core$Bit $tmp117 = frost$core$Bit$init$builtin_bit(false);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp119 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block16:;
abort(); // unreachable

}
frost$core$Int32$nullable frost$io$InputStream$read$R$frost$core$Int32$Q(frost$io$InputStream* param0) {

frost$core$Int16$nullable local0;
frost$core$Int16$nullable local1;
// line 124
$fn123 $tmp122 = ($fn123) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp124 = $tmp122(param0);
*(&local0) = $tmp124;
// line 125
frost$core$Int16$nullable $tmp125 = *(&local0);
frost$core$Bit $tmp126 = frost$core$Bit$init$builtin_bit(!$tmp125.nonnull);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block1; else goto block2;
block1:;
// line 126
return ((frost$core$Int32$nullable) { .nonnull = false });
block2:;
// line 128
$fn129 $tmp128 = ($fn129) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp130 = $tmp128(param0);
*(&local1) = $tmp130;
// line 129
frost$core$Int16$nullable $tmp131 = *(&local1);
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit(!$tmp131.nonnull);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block3; else goto block4;
block3:;
// line 130
return ((frost$core$Int32$nullable) { .nonnull = false });
block4:;
// line 132
frost$io$ByteOrder* $tmp134 = &param0->byteOrder;
frost$io$ByteOrder $tmp135 = *$tmp134;
frost$io$ByteOrder$wrapper* $tmp136;
$tmp136 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp136->value = $tmp135;
frost$core$Int64 $tmp137 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp138 = frost$io$ByteOrder$init$frost$core$Int64($tmp137);
frost$io$ByteOrder$wrapper* $tmp139;
$tmp139 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp139->value = $tmp138;
ITable* $tmp140 = ((frost$core$Equatable*) $tmp136)->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[0];
frost$core$Bit $tmp143 = $tmp141(((frost$core$Equatable*) $tmp136), ((frost$core$Equatable*) $tmp139));
bool $tmp144 = $tmp143.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp139)));
// unreffing REF($31:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp136)));
// unreffing REF($27:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp144) goto block5; else goto block7;
block5:;
// line 133
frost$core$Int16$nullable $tmp145 = *(&local1);
frost$core$Bit $tmp146 = frost$core$Bit$init$builtin_bit($tmp145.nonnull);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s149, $tmp148, &$s150);
abort(); // unreachable
block8:;
frost$core$Int16 $tmp151 = (frost$core$Int16) {16};
frost$core$Int32 $tmp152 = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16) $tmp145.value), $tmp151);
frost$core$Int16$nullable $tmp153 = *(&local0);
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit($tmp153.nonnull);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s157, $tmp156, &$s158);
abort(); // unreachable
block10:;
frost$core$Int32 $tmp159 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp153.value));
int32_t $tmp160 = $tmp152.value;
int32_t $tmp161 = $tmp159.value;
int32_t $tmp162 = $tmp160 + $tmp161;
frost$core$Int32 $tmp163 = (frost$core$Int32) {$tmp162};
return ((frost$core$Int32$nullable) { $tmp163, true });
block7:;
// line 1
// line 136
frost$core$Int16$nullable $tmp164 = *(&local0);
frost$core$Bit $tmp165 = frost$core$Bit$init$builtin_bit($tmp164.nonnull);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp167 = (frost$core$Int64) {136};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s168, $tmp167, &$s169);
abort(); // unreachable
block12:;
frost$core$Int16 $tmp170 = (frost$core$Int16) {16};
frost$core$Int32 $tmp171 = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16) $tmp164.value), $tmp170);
frost$core$Int16$nullable $tmp172 = *(&local1);
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit($tmp172.nonnull);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp175 = (frost$core$Int64) {136};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s176, $tmp175, &$s177);
abort(); // unreachable
block14:;
frost$core$Int32 $tmp178 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp172.value));
int32_t $tmp179 = $tmp171.value;
int32_t $tmp180 = $tmp178.value;
int32_t $tmp181 = $tmp179 + $tmp180;
frost$core$Int32 $tmp182 = (frost$core$Int32) {$tmp181};
return ((frost$core$Int32$nullable) { $tmp182, true });
block6:;
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(false);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp185 = (frost$core$Int64) {123};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s186, $tmp185, &$s187);
abort(); // unreachable
block16:;
abort(); // unreachable

}
frost$core$Int64$nullable frost$io$InputStream$read$R$frost$core$Int64$Q(frost$io$InputStream* param0) {

frost$core$Int32$nullable local0;
frost$core$Int32$nullable local1;
// line 145
$fn189 $tmp188 = ($fn189) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp190 = $tmp188(param0);
*(&local0) = $tmp190;
// line 146
frost$core$Int32$nullable $tmp191 = *(&local0);
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit(!$tmp191.nonnull);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block1; else goto block2;
block1:;
// line 147
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 149
$fn195 $tmp194 = ($fn195) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp196 = $tmp194(param0);
*(&local1) = $tmp196;
// line 150
frost$core$Int32$nullable $tmp197 = *(&local1);
frost$core$Bit $tmp198 = frost$core$Bit$init$builtin_bit(!$tmp197.nonnull);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block3; else goto block4;
block3:;
// line 151
return ((frost$core$Int64$nullable) { .nonnull = false });
block4:;
// line 153
frost$io$ByteOrder* $tmp200 = &param0->byteOrder;
frost$io$ByteOrder $tmp201 = *$tmp200;
frost$io$ByteOrder$wrapper* $tmp202;
$tmp202 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp202->value = $tmp201;
frost$core$Int64 $tmp203 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp204 = frost$io$ByteOrder$init$frost$core$Int64($tmp203);
frost$io$ByteOrder$wrapper* $tmp205;
$tmp205 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp205->value = $tmp204;
ITable* $tmp206 = ((frost$core$Equatable*) $tmp202)->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
frost$core$Bit $tmp209 = $tmp207(((frost$core$Equatable*) $tmp202), ((frost$core$Equatable*) $tmp205));
bool $tmp210 = $tmp209.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp205)));
// unreffing REF($31:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp202)));
// unreffing REF($27:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp210) goto block5; else goto block7;
block5:;
// line 154
frost$core$Int32$nullable $tmp211 = *(&local1);
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211.nonnull);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {154};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s215, $tmp214, &$s216);
abort(); // unreachable
block8:;
int32_t $tmp217 = ((frost$core$Int32) $tmp211.value).value;
frost$core$Int64 $tmp218 = (frost$core$Int64) {((int64_t) $tmp217)};
frost$core$Int64 $tmp219 = (frost$core$Int64) {32};
frost$core$Int64 $tmp220 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp218, $tmp219);
frost$core$Int32$nullable $tmp221 = *(&local0);
frost$core$Bit $tmp222 = frost$core$Bit$init$builtin_bit($tmp221.nonnull);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp224 = (frost$core$Int64) {154};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s225, $tmp224, &$s226);
abort(); // unreachable
block10:;
frost$core$Int64 $tmp227 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp221.value));
int64_t $tmp228 = $tmp220.value;
int64_t $tmp229 = $tmp227.value;
int64_t $tmp230 = $tmp228 + $tmp229;
frost$core$Int64 $tmp231 = (frost$core$Int64) {$tmp230};
return ((frost$core$Int64$nullable) { $tmp231, true });
block7:;
// line 1
// line 157
frost$core$Int32$nullable $tmp232 = *(&local0);
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit($tmp232.nonnull);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp235 = (frost$core$Int64) {157};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s236, $tmp235, &$s237);
abort(); // unreachable
block12:;
int32_t $tmp238 = ((frost$core$Int32) $tmp232.value).value;
frost$core$Int64 $tmp239 = (frost$core$Int64) {((int64_t) $tmp238)};
frost$core$Int64 $tmp240 = (frost$core$Int64) {32};
frost$core$Int64 $tmp241 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp239, $tmp240);
frost$core$Int32$nullable $tmp242 = *(&local1);
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242.nonnull);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp245 = (frost$core$Int64) {157};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block14:;
frost$core$Int64 $tmp248 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp242.value));
int64_t $tmp249 = $tmp241.value;
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249 + $tmp250;
frost$core$Int64 $tmp252 = (frost$core$Int64) {$tmp251};
return ((frost$core$Int64$nullable) { $tmp252, true });
block6:;
frost$core$Bit $tmp253 = frost$core$Bit$init$builtin_bit(false);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp255 = (frost$core$Int64) {144};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block16:;
abort(); // unreachable

}
frost$core$Char8$nullable frost$io$InputStream$read$R$frost$core$Char8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// line 165
$fn259 $tmp258 = ($fn259) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp260 = $tmp258(param0);
*(&local0) = $tmp260;
// line 166
frost$core$UInt8$nullable $tmp261 = *(&local0);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261.nonnull);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 167
frost$core$UInt8$nullable $tmp264 = *(&local0);
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264.nonnull);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp267 = (frost$core$Int64) {167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s268, $tmp267, &$s269);
abort(); // unreachable
block3:;
frost$core$Char8 $tmp270 = frost$core$Char8$init$frost$core$UInt8(((frost$core$UInt8) $tmp264.value));
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit(((frost$core$Char8$nullable) { $tmp270, true }).nonnull);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp273 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s274, $tmp273, &$s275);
abort(); // unreachable
block5:;
return ((frost$core$Char8$nullable) { ((frost$core$Char8) ((frost$core$Char8$nullable) { $tmp270, true }).value), true });
block2:;
// line 169
return ((frost$core$Char8$nullable) { .nonnull = false });

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt8$nullable local2;
// line 179
frost$core$Int64 $tmp276 = (frost$core$Int64) {0};
*(&local1) = $tmp276;
// line 180
goto block4;
block4:;
frost$core$Int64 $tmp277 = *(&local1);
int64_t $tmp278 = $tmp277.value;
int64_t $tmp279 = param2.value;
bool $tmp280 = $tmp278 < $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block5; else goto block6;
block5:;
// line 181
$fn284 $tmp283 = ($fn284) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp285 = $tmp283(param0);
*(&local2) = $tmp285;
// line 182
frost$core$UInt8$nullable $tmp286 = *(&local2);
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit(!$tmp286.nonnull);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block7; else goto block8;
block7:;
// line 183
goto block6;
block8:;
// line 185
frost$core$Int64 $tmp289 = *(&local1);
frost$core$UInt8$nullable $tmp290 = *(&local2);
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit($tmp290.nonnull);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {185};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block9:;
int64_t $tmp296 = $tmp289.value;
param1[$tmp296] = ((frost$core$UInt8) $tmp290.value);
// line 186
frost$core$Int64 $tmp297 = *(&local1);
frost$core$Int64 $tmp298 = (frost$core$Int64) {1};
int64_t $tmp299 = $tmp297.value;
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299 + $tmp300;
frost$core$Int64 $tmp302 = (frost$core$Int64) {$tmp301};
*(&local1) = $tmp302;
goto block4;
block6:;
// line 188
frost$core$Int64 $tmp303 = *(&local1);
*(&local0) = $tmp303;
goto block1;
block1:;
frost$core$Int64 $tmp304 = *(&local0);
frost$core$Int64 $tmp305 = (frost$core$Int64) {0};
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 >= $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block2; else goto block3;
block2:;
frost$core$Int64 $tmp311 = *(&local0);
return $tmp311;
block3:;
frost$core$Int64 $tmp312 = (frost$core$Int64) {178};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s313, $tmp312, &$s314);
abort(); // unreachable

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$Int8* param1, frost$core$Int64 param2) {

// line 196
$fn316 $tmp315 = ($fn316) param0->$class->vtable[11];
frost$core$Int64 $tmp317 = $tmp315(param0, ((frost$core$UInt8*) param1), param2);
return $tmp317;

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// line 204
$fn319 $tmp318 = ($fn319) param0->$class->vtable[11];
frost$core$Int64 $tmp320 = $tmp318(param0, ((frost$core$UInt8*) param1), param2);
return $tmp320;

}
frost$core$String* frost$io$InputStream$readFully$R$frost$core$String(frost$io$InputStream* param0) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int64 local3;
// line 214
frost$core$Int64 $tmp321 = (frost$core$Int64) {2048};
*(&local0) = $tmp321;
// line 215
frost$core$MutableString* $tmp322 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp322);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$MutableString* $tmp323 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local1) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($4:frost.core.MutableString)
// line 216
frost$core$Int64 $tmp324 = *(&local0);
int64_t $tmp325 = $tmp324.value;
frost$core$UInt8* $tmp326 = ((frost$core$UInt8*) frostAlloc($tmp325 * 1));
*(&local2) = $tmp326;
// line 217
goto block1;
block1:;
// line 218
frost$core$UInt8* $tmp327 = *(&local2);
frost$core$Int64 $tmp328 = *(&local0);
$fn330 $tmp329 = ($fn330) param0->$class->vtable[11];
frost$core$Int64 $tmp331 = $tmp329(param0, $tmp327, $tmp328);
*(&local3) = $tmp331;
// line 219
frost$core$Int64 $tmp332 = *(&local3);
frost$core$Int64 $tmp333 = (frost$core$Int64) {0};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
bool $tmp336 = $tmp334 <= $tmp335;
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block3; else goto block4;
block3:;
// line 220
goto block2;
block4:;
// line 222
frost$core$MutableString* $tmp339 = *(&local1);
frost$core$UInt8* $tmp340 = *(&local2);
frost$core$Int64 $tmp341 = *(&local3);
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp339, ((frost$core$Char8*) $tmp340), $tmp341);
goto block1;
block2:;
// line 224
frost$core$UInt8* $tmp342 = *(&local2);
frostFree($tmp342);
// line 225
frost$core$MutableString* $tmp343 = *(&local1);
frost$core$String* $tmp344 = frost$core$MutableString$finish$R$frost$core$String($tmp343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($52:frost.core.String)
frost$core$MutableString* $tmp345 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp344;

}
frost$collections$Array* frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$InputStream* param0) {

frost$core$Int64 local0;
frost$collections$Array* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
// line 234
frost$core$Int64 $tmp346 = (frost$core$Int64) {2048};
*(&local0) = $tmp346;
// line 235
frost$collections$Array* $tmp347 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp347);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$collections$Array* $tmp348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local1) = $tmp347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($4:frost.collections.Array<frost.core.UInt8>)
// line 236
frost$core$Int64 $tmp349 = *(&local0);
int64_t $tmp350 = $tmp349.value;
frost$core$UInt8* $tmp351 = ((frost$core$UInt8*) frostAlloc($tmp350 * 1));
*(&local2) = $tmp351;
// line 237
goto block1;
block1:;
// line 238
frost$core$UInt8* $tmp352 = *(&local2);
frost$core$Int64 $tmp353 = *(&local0);
$fn355 $tmp354 = ($fn355) param0->$class->vtable[11];
frost$core$Int64 $tmp356 = $tmp354(param0, $tmp352, $tmp353);
*(&local3) = $tmp356;
// line 239
frost$core$Int64 $tmp357 = *(&local3);
frost$core$Int64 $tmp358 = (frost$core$Int64) {0};
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 <= $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block3; else goto block4;
block3:;
// line 240
goto block2;
block4:;
// line 243
frost$core$Int64 $tmp364 = (frost$core$Int64) {0};
frost$core$Int64 $tmp365 = *(&local3);
frost$core$Bit $tmp366 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp367 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp364, $tmp365, $tmp366);
frost$core$Int64 $tmp368 = $tmp367.min;
*(&local4) = $tmp368;
frost$core$Int64 $tmp369 = $tmp367.max;
frost$core$Bit $tmp370 = $tmp367.inclusive;
bool $tmp371 = $tmp370.value;
frost$core$Int64 $tmp372 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp373 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp372);
if ($tmp371) goto block8; else goto block9;
block8:;
int64_t $tmp374 = $tmp368.value;
int64_t $tmp375 = $tmp369.value;
bool $tmp376 = $tmp374 <= $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block5; else goto block6;
block9:;
int64_t $tmp379 = $tmp368.value;
int64_t $tmp380 = $tmp369.value;
bool $tmp381 = $tmp379 < $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block5; else goto block6;
block5:;
// line 244
frost$collections$Array* $tmp384 = *(&local1);
frost$core$UInt8* $tmp385 = *(&local2);
frost$core$Int64 $tmp386 = *(&local4);
int64_t $tmp387 = $tmp386.value;
frost$core$UInt8 $tmp388 = $tmp385[$tmp387];
frost$core$UInt8$wrapper* $tmp389;
$tmp389 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp389->value = $tmp388;
frost$collections$Array$add$frost$collections$Array$T($tmp384, ((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
// unreffing REF($73:frost.collections.Array.T)
goto block7;
block7:;
frost$core$Int64 $tmp390 = *(&local4);
int64_t $tmp391 = $tmp369.value;
int64_t $tmp392 = $tmp390.value;
int64_t $tmp393 = $tmp391 - $tmp392;
frost$core$Int64 $tmp394 = (frost$core$Int64) {$tmp393};
frost$core$UInt64 $tmp395 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp394);
if ($tmp371) goto block11; else goto block12;
block11:;
uint64_t $tmp396 = $tmp395.value;
uint64_t $tmp397 = $tmp373.value;
bool $tmp398 = $tmp396 >= $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block10; else goto block6;
block12:;
uint64_t $tmp401 = $tmp395.value;
uint64_t $tmp402 = $tmp373.value;
bool $tmp403 = $tmp401 > $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block10; else goto block6;
block10:;
int64_t $tmp406 = $tmp390.value;
int64_t $tmp407 = $tmp372.value;
int64_t $tmp408 = $tmp406 + $tmp407;
frost$core$Int64 $tmp409 = (frost$core$Int64) {$tmp408};
*(&local4) = $tmp409;
goto block5;
block6:;
goto block1;
block2:;
// line 247
frost$core$UInt8* $tmp410 = *(&local2);
frostFree($tmp410);
// line 248
frost$collections$Array* $tmp411 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$collections$Array* $tmp412 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp411;

}
frost$core$String* frost$io$InputStream$readLine$R$frost$core$String$Q(frost$io$InputStream* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
frost$core$Bit local2;
// line 257
frost$core$MutableString* $tmp413 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp413);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$MutableString* $tmp414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = $tmp413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// unreffing REF($1:frost.core.MutableString)
// line 258
goto block1;
block1:;
// line 259
$fn416 $tmp415 = ($fn416) param0->$class->vtable[10];
frost$core$Char8$nullable $tmp417 = $tmp415(param0);
*(&local1) = $tmp417;
// line 260
frost$core$Char8$nullable $tmp418 = *(&local1);
frost$core$Bit $tmp419 = frost$core$Bit$init$builtin_bit(!$tmp418.nonnull);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block3; else goto block4;
block3:;
// line 261
frost$core$MutableString* $tmp421 = *(&local0);
frost$core$Int64* $tmp422 = &$tmp421->_length;
frost$core$Int64 $tmp423 = *$tmp422;
frost$core$Int64 $tmp424 = (frost$core$Int64) {0};
frost$core$Bit $tmp425 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp423, $tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block5; else goto block6;
block5:;
// line 262
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp427 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// line 264
goto block2;
block4:;
// line 266
frost$core$Char8$nullable $tmp428 = *(&local1);
frost$core$Bit $tmp429 = frost$core$Bit$init$builtin_bit($tmp428.nonnull);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp431 = (frost$core$Int64) {266};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s432, $tmp431, &$s433);
abort(); // unreachable
block9:;
frost$core$UInt8 $tmp434 = (frost$core$UInt8) {10};
frost$core$Char8 $tmp435 = frost$core$Char8$init$frost$core$UInt8($tmp434);
frost$core$Bit $tmp436 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8) $tmp428.value), $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block7; else goto block8;
block7:;
// line 267
frost$core$MutableString* $tmp438 = *(&local0);
frost$core$Int64* $tmp439 = &$tmp438->_length;
frost$core$Int64 $tmp440 = *$tmp439;
frost$core$Int64 $tmp441 = (frost$core$Int64) {0};
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441.value;
bool $tmp444 = $tmp442 > $tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block13; else goto block14;
block13:;
frost$core$MutableString* $tmp447 = *(&local0);
frost$core$MutableString* $tmp448 = *(&local0);
frost$core$MutableString* $tmp449 = *(&local0);
frost$core$MutableString$Index $tmp450 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index($tmp449);
frost$core$MutableString$Index $tmp451 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index($tmp448, $tmp450);
frost$core$Char32 $tmp452 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32($tmp447, $tmp451);
frost$core$Int32 $tmp453 = (frost$core$Int32) {13};
frost$core$Char32 $tmp454 = frost$core$Char32$init$frost$core$Int32($tmp453);
frost$core$Bit $tmp455 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp452, $tmp454);
*(&local2) = $tmp455;
goto block15;
block14:;
*(&local2) = $tmp445;
goto block15;
block15:;
frost$core$Bit $tmp456 = *(&local2);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block11; else goto block12;
block11:;
// line 268
frost$core$MutableString* $tmp458 = *(&local0);
frost$core$Int64* $tmp459 = &$tmp458->_length;
frost$core$Int64 $tmp460 = *$tmp459;
frost$core$Int64 $tmp461 = (frost$core$Int64) {1};
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461.value;
int64_t $tmp464 = $tmp462 - $tmp463;
frost$core$Int64 $tmp465 = (frost$core$Int64) {$tmp464};
frost$core$Int64* $tmp466 = &$tmp458->_length;
*$tmp466 = $tmp465;
goto block12;
block12:;
// line 270
goto block2;
block8:;
// line 272
frost$core$MutableString* $tmp467 = *(&local0);
frost$core$Char8$nullable $tmp468 = *(&local1);
frost$core$Bit $tmp469 = frost$core$Bit$init$builtin_bit($tmp468.nonnull);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp471 = (frost$core$Int64) {272};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s472, $tmp471, &$s473);
abort(); // unreachable
block16:;
frost$core$MutableString$append$frost$core$Char8($tmp467, ((frost$core$Char8) $tmp468.value));
goto block1;
block2:;
// line 274
frost$core$MutableString* $tmp474 = *(&local0);
frost$core$String* $tmp475 = frost$core$MutableString$finish$R$frost$core$String($tmp474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($115:frost.core.String)
frost$core$MutableString* $tmp476 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp475;

}
frost$core$Maybe* frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT(frost$io$InputStream* param0, frost$io$OutputStream* param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt8* local2;
frost$core$Int64 local3;
frost$core$Error* local4 = NULL;
// line 283
frost$core$Int64 $tmp477 = (frost$core$Int64) {0};
*(&local0) = $tmp477;
// line 284
frost$core$Int64 $tmp478 = (frost$core$Int64) {2048};
*(&local1) = $tmp478;
// line 285
frost$core$Int64 $tmp479 = *(&local1);
int64_t $tmp480 = $tmp479.value;
frost$core$UInt8* $tmp481 = ((frost$core$UInt8*) frostAlloc($tmp480 * 1));
*(&local2) = $tmp481;
// line 286
goto block1;
block1:;
// line 287
frost$core$UInt8* $tmp482 = *(&local2);
frost$core$Int64 $tmp483 = *(&local1);
$fn485 $tmp484 = ($fn485) param0->$class->vtable[11];
frost$core$Int64 $tmp486 = $tmp484(param0, $tmp482, $tmp483);
*(&local3) = $tmp486;
// line 288
frost$core$Int64 $tmp487 = *(&local3);
frost$core$Int64 $tmp488 = (frost$core$Int64) {0};
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 <= $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block3; else goto block4;
block3:;
// line 289
goto block2;
block4:;
// line 291
frost$core$Int64 $tmp494 = *(&local0);
frost$core$Int64 $tmp495 = *(&local3);
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 + $tmp497;
frost$core$Int64 $tmp499 = (frost$core$Int64) {$tmp498};
*(&local0) = $tmp499;
// line 292
frost$core$UInt8* $tmp500 = *(&local2);
frost$core$Int64 $tmp501 = *(&local3);
$fn503 $tmp502 = ($fn503) param1->$class->vtable[10];
frost$core$Error* $tmp504 = $tmp502(param1, $tmp500, $tmp501);
*(&local4) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Error* $tmp505 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local4) = $tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// unreffing REF($42:frost.core.Error?)
// line 293
frost$core$Error* $tmp506 = *(&local4);
frost$core$Bit $tmp507 = frost$core$Bit$init$builtin_bit($tmp506 != NULL);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block5; else goto block6;
block5:;
// line 294
frost$core$Maybe* $tmp509 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp510 = (frost$core$Int64) {1};
frost$core$Error* $tmp511 = *(&local4);
frost$core$Bit $tmp512 = frost$core$Bit$init$builtin_bit($tmp511 != NULL);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp514 = (frost$core$Int64) {294};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s515, $tmp514, &$s516);
abort(); // unreachable
block7:;
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp509, $tmp510, $tmp511);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// unreffing REF($60:frost.core.Maybe<frost.core.Int64>)
frost$core$Error* $tmp517 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing error
*(&local4) = ((frost$core$Error*) NULL);
return $tmp509;
block6:;
frost$core$Error* $tmp518 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing error
*(&local4) = ((frost$core$Error*) NULL);
goto block1;
block2:;
// line 297
frost$core$UInt8* $tmp519 = *(&local2);
frostFree($tmp519);
// line 298
frost$core$Maybe* $tmp520 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp521 = (frost$core$Int64) {0};
frost$core$Int64 $tmp522 = *(&local0);
frost$core$Int64$wrapper* $tmp523;
$tmp523 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp523->value = $tmp522;
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp520, $tmp521, ((frost$core$Object*) $tmp523));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// unreffing REF($98:frost.core.Maybe.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// unreffing REF($94:frost.core.Maybe<frost.core.Int64>)
return $tmp520;

}
frost$collections$Iterator* frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(frost$io$InputStream* param0) {

// line 306
frost$io$InputStream$LineIterator* $tmp524 = (frost$io$InputStream$LineIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$io$InputStream$LineIterator$class);
frost$io$InputStream$LineIterator$init$frost$io$InputStream($tmp524, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp524)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
// unreffing REF($1:frost.io.InputStream.LineIterator)
return ((frost$collections$Iterator*) $tmp524);

}
frost$core$Error* frost$io$InputStream$close$R$frost$core$Error$Q(frost$io$InputStream* param0) {

frost$core$Bit $tmp525 = frost$core$Bit$init$builtin_bit(false);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp527 = (frost$core$Int64) {309};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s528, $tmp527, &$s529);
abort(); // unreachable
block1:;
abort(); // unreachable

}
void frost$io$InputStream$init(frost$io$InputStream* param0) {

// line 14
frost$core$Int64 $tmp530 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp531 = frost$io$ByteOrder$init$frost$core$Int64($tmp530);
frost$io$ByteOrder* $tmp532 = &param0->byteOrder;
*$tmp532 = $tmp531;
return;

}
void frost$io$InputStream$cleanup(frost$io$InputStream* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

