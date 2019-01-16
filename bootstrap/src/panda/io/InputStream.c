#include "panda/io/InputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/UInt16.h"
#include "panda/core/Int16.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt8.h"
#include "panda/io/ByteOrder.h"
#include "panda/core/Equatable.h"
#include "panda/core/Char8.h"
#include "panda/core/MutableString.h"
#include "panda/core/MutableString/Index.h"
#include "panda/core/Char32.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream/LineIterator.h"


static panda$core$String $s1;
panda$io$InputStream$class_type panda$io$InputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$cleanup, NULL, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$InputStream$close} };

typedef panda$core$Int16$nullable (*$fn3)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn16)(panda$io$InputStream*);
typedef panda$core$Int64$nullable (*$fn29)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn42)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn55)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn61)(panda$io$InputStream*);
typedef panda$core$Bit (*$fn74)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int16$nullable (*$fn123)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn129)(panda$io$InputStream*);
typedef panda$core$Bit (*$fn142)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int32$nullable (*$fn189)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn195)(panda$io$InputStream*);
typedef panda$core$Bit (*$fn208)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$UInt8$nullable (*$fn259)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn284)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn305)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn308)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Char8$nullable (*$fn336)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn405)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn423)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x27", 71, 6702670180207013967, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x27", 71, -84524611045988621, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 1229762652197425650, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x27", 71, 6702670180207013967, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x27", 71, 6702670180207013967, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x27", 71, 6702670180207013967, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x27", 71, 6702670180207013967, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -4313794287938759288, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x27", 71, -84524611045988621, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x27", 71, -84524611045988621, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x27", 71, -84524611045988621, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x27", 71, -84524611045988621, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -4095566630427842895, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x27", 71, -934148035806124129, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x27", 71, 9164094136534764051, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x27", 71, -934148035806124129, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x27", 71, -934148035806124129, NULL };

panda$core$UInt16$nullable panda$io$InputStream$read$R$panda$core$UInt16$Q(panda$io$InputStream* param0) {

panda$core$Int16 local0;
// line 56
$fn3 $tmp2 = ($fn3) param0->$class->vtable[7];
panda$core$Int16$nullable $tmp4 = $tmp2(param0);
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit($tmp4.nonnull);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp7 = (panda$core$Int64) {56};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s8, $tmp7, &$s9);
abort(); // unreachable
block1:;
*(&local0) = ((panda$core$Int16) $tmp4.value);
// line 57
panda$core$Int16 $tmp10 = *(&local0);
panda$core$Bit $tmp11 = panda$core$Bit$init$builtin_bit(true);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 58
panda$core$Int16 $tmp13 = *(&local0);
panda$core$UInt16 $tmp14 = panda$core$Int16$convert$R$panda$core$UInt16($tmp13);
return ((panda$core$UInt16$nullable) { $tmp14, true });
block4:;
// line 60
return ((panda$core$UInt16$nullable) { .nonnull = false });

}
panda$core$UInt32$nullable panda$io$InputStream$read$R$panda$core$UInt32$Q(panda$io$InputStream* param0) {

panda$core$Int32 local0;
// line 68
$fn16 $tmp15 = ($fn16) param0->$class->vtable[8];
panda$core$Int32$nullable $tmp17 = $tmp15(param0);
panda$core$Bit $tmp18 = panda$core$Bit$init$builtin_bit($tmp17.nonnull);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp20 = (panda$core$Int64) {68};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
*(&local0) = ((panda$core$Int32) $tmp17.value);
// line 69
panda$core$Int32 $tmp23 = *(&local0);
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit(true);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block4;
block3:;
// line 70
panda$core$Int32 $tmp26 = *(&local0);
panda$core$UInt32 $tmp27 = panda$core$Int32$convert$R$panda$core$UInt32($tmp26);
return ((panda$core$UInt32$nullable) { $tmp27, true });
block4:;
// line 72
return ((panda$core$UInt32$nullable) { .nonnull = false });

}
panda$core$UInt64$nullable panda$io$InputStream$read$R$panda$core$UInt64$Q(panda$io$InputStream* param0) {

panda$core$Int64 local0;
// line 80
$fn29 $tmp28 = ($fn29) param0->$class->vtable[9];
panda$core$Int64$nullable $tmp30 = $tmp28(param0);
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit($tmp30.nonnull);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp33 = (panda$core$Int64) {80};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block1:;
*(&local0) = ((panda$core$Int64) $tmp30.value);
// line 81
panda$core$Int64 $tmp36 = *(&local0);
panda$core$Bit $tmp37 = panda$core$Bit$init$builtin_bit(true);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block3; else goto block4;
block3:;
// line 82
panda$core$Int64 $tmp39 = *(&local0);
panda$core$UInt64 $tmp40 = panda$core$Int64$convert$R$panda$core$UInt64($tmp39);
return ((panda$core$UInt64$nullable) { $tmp40, true });
block4:;
// line 84
return ((panda$core$UInt64$nullable) { .nonnull = false });

}
panda$core$Int8$nullable panda$io$InputStream$read$R$panda$core$Int8$Q(panda$io$InputStream* param0) {

panda$core$UInt8$nullable local0;
// line 91
$fn42 $tmp41 = ($fn42) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp43 = $tmp41(param0);
*(&local0) = $tmp43;
// line 92
panda$core$UInt8$nullable $tmp44 = *(&local0);
panda$core$Bit $tmp45 = panda$core$Bit$init$builtin_bit($tmp44.nonnull);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block1; else goto block2;
block1:;
// line 93
panda$core$UInt8$nullable $tmp47 = *(&local0);
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit($tmp47.nonnull);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {93};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block3:;
panda$core$Int8 $tmp53 = panda$core$UInt8$convert$R$panda$core$Int8(((panda$core$UInt8) $tmp47.value));
return ((panda$core$Int8$nullable) { $tmp53, true });
block2:;
// line 95
return ((panda$core$Int8$nullable) { .nonnull = false });

}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* param0) {

panda$core$UInt8$nullable local0;
panda$core$UInt8$nullable local1;
// line 103
$fn55 $tmp54 = ($fn55) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp56 = $tmp54(param0);
*(&local0) = $tmp56;
// line 104
panda$core$UInt8$nullable $tmp57 = *(&local0);
panda$core$Bit $tmp58 = panda$core$Bit$init$builtin_bit(!$tmp57.nonnull);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block1; else goto block2;
block1:;
// line 105
return ((panda$core$Int16$nullable) { .nonnull = false });
block2:;
// line 107
$fn61 $tmp60 = ($fn61) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp62 = $tmp60(param0);
*(&local1) = $tmp62;
// line 108
panda$core$UInt8$nullable $tmp63 = *(&local1);
panda$core$Bit $tmp64 = panda$core$Bit$init$builtin_bit(!$tmp63.nonnull);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block3; else goto block4;
block3:;
// line 109
return ((panda$core$Int16$nullable) { .nonnull = false });
block4:;
// line 111
panda$io$ByteOrder* $tmp66 = &param0->byteOrder;
panda$io$ByteOrder $tmp67 = *$tmp66;
panda$io$ByteOrder$wrapper* $tmp68;
$tmp68 = (panda$io$ByteOrder$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp68->value = $tmp67;
panda$core$Int64 $tmp69 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp70 = panda$io$ByteOrder$init$panda$core$Int64($tmp69);
panda$io$ByteOrder$wrapper* $tmp71;
$tmp71 = (panda$io$ByteOrder$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp71->value = $tmp70;
ITable* $tmp72 = ((panda$core$Equatable*) $tmp68)->$class->itable;
while ($tmp72->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
panda$core$Bit $tmp75 = $tmp73(((panda$core$Equatable*) $tmp68), ((panda$core$Equatable*) $tmp71));
bool $tmp76 = $tmp75.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp71)));
// unreffing REF($31:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp68)));
// unreffing REF($27:panda.core.Equatable<panda.io.ByteOrder>)
if ($tmp76) goto block5; else goto block7;
block5:;
// line 112
panda$core$UInt8$nullable $tmp77 = *(&local1);
panda$core$Bit $tmp78 = panda$core$Bit$init$builtin_bit($tmp77.nonnull);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp80 = (panda$core$Int64) {112};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s81, $tmp80, &$s82);
abort(); // unreachable
block8:;
panda$core$UInt8 $tmp83 = (panda$core$UInt8) {8};
panda$core$UInt32 $tmp84 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) $tmp77.value), $tmp83);
panda$core$UInt8$nullable $tmp85 = *(&local0);
panda$core$Bit $tmp86 = panda$core$Bit$init$builtin_bit($tmp85.nonnull);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp88 = (panda$core$Int64) {112};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s89, $tmp88, &$s90);
abort(); // unreachable
block10:;
panda$core$UInt32 $tmp91 = panda$core$UInt32$init$panda$core$UInt8(((panda$core$UInt8) $tmp85.value));
uint32_t $tmp92 = $tmp84.value;
uint32_t $tmp93 = $tmp91.value;
uint32_t $tmp94 = $tmp92 + $tmp93;
panda$core$UInt32 $tmp95 = (panda$core$UInt32) {$tmp94};
panda$core$Int16 $tmp96 = panda$core$UInt32$convert$R$panda$core$Int16($tmp95);
return ((panda$core$Int16$nullable) { $tmp96, true });
block7:;
// line 1
// line 115
panda$core$UInt8$nullable $tmp97 = *(&local0);
panda$core$Bit $tmp98 = panda$core$Bit$init$builtin_bit($tmp97.nonnull);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp100 = (panda$core$Int64) {115};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s101, $tmp100, &$s102);
abort(); // unreachable
block12:;
panda$core$UInt8 $tmp103 = (panda$core$UInt8) {8};
panda$core$UInt32 $tmp104 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) $tmp97.value), $tmp103);
panda$core$UInt8$nullable $tmp105 = *(&local1);
panda$core$Bit $tmp106 = panda$core$Bit$init$builtin_bit($tmp105.nonnull);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp108 = (panda$core$Int64) {115};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s109, $tmp108, &$s110);
abort(); // unreachable
block14:;
panda$core$UInt32 $tmp111 = panda$core$UInt32$init$panda$core$UInt8(((panda$core$UInt8) $tmp105.value));
uint32_t $tmp112 = $tmp104.value;
uint32_t $tmp113 = $tmp111.value;
uint32_t $tmp114 = $tmp112 + $tmp113;
panda$core$UInt32 $tmp115 = (panda$core$UInt32) {$tmp114};
panda$core$Int16 $tmp116 = panda$core$UInt32$convert$R$panda$core$Int16($tmp115);
return ((panda$core$Int16$nullable) { $tmp116, true });
block6:;
panda$core$Bit $tmp117 = panda$core$Bit$init$builtin_bit(false);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp119 = (panda$core$Int64) {102};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block16:;
abort(); // unreachable

}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* param0) {

panda$core$Int16$nullable local0;
panda$core$Int16$nullable local1;
// line 124
$fn123 $tmp122 = ($fn123) param0->$class->vtable[7];
panda$core$Int16$nullable $tmp124 = $tmp122(param0);
*(&local0) = $tmp124;
// line 125
panda$core$Int16$nullable $tmp125 = *(&local0);
panda$core$Bit $tmp126 = panda$core$Bit$init$builtin_bit(!$tmp125.nonnull);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block1; else goto block2;
block1:;
// line 126
return ((panda$core$Int32$nullable) { .nonnull = false });
block2:;
// line 128
$fn129 $tmp128 = ($fn129) param0->$class->vtable[7];
panda$core$Int16$nullable $tmp130 = $tmp128(param0);
*(&local1) = $tmp130;
// line 129
panda$core$Int16$nullable $tmp131 = *(&local1);
panda$core$Bit $tmp132 = panda$core$Bit$init$builtin_bit(!$tmp131.nonnull);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block3; else goto block4;
block3:;
// line 130
return ((panda$core$Int32$nullable) { .nonnull = false });
block4:;
// line 132
panda$io$ByteOrder* $tmp134 = &param0->byteOrder;
panda$io$ByteOrder $tmp135 = *$tmp134;
panda$io$ByteOrder$wrapper* $tmp136;
$tmp136 = (panda$io$ByteOrder$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp136->value = $tmp135;
panda$core$Int64 $tmp137 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp138 = panda$io$ByteOrder$init$panda$core$Int64($tmp137);
panda$io$ByteOrder$wrapper* $tmp139;
$tmp139 = (panda$io$ByteOrder$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp139->value = $tmp138;
ITable* $tmp140 = ((panda$core$Equatable*) $tmp136)->$class->itable;
while ($tmp140->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[0];
panda$core$Bit $tmp143 = $tmp141(((panda$core$Equatable*) $tmp136), ((panda$core$Equatable*) $tmp139));
bool $tmp144 = $tmp143.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp139)));
// unreffing REF($31:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp136)));
// unreffing REF($27:panda.core.Equatable<panda.io.ByteOrder>)
if ($tmp144) goto block5; else goto block7;
block5:;
// line 133
panda$core$Int16$nullable $tmp145 = *(&local1);
panda$core$Bit $tmp146 = panda$core$Bit$init$builtin_bit($tmp145.nonnull);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp148 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s149, $tmp148, &$s150);
abort(); // unreachable
block8:;
panda$core$Int16 $tmp151 = (panda$core$Int16) {16};
panda$core$Int32 $tmp152 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) $tmp145.value), $tmp151);
panda$core$Int16$nullable $tmp153 = *(&local0);
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit($tmp153.nonnull);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s157, $tmp156, &$s158);
abort(); // unreachable
block10:;
panda$core$Int32 $tmp159 = panda$core$Int32$init$panda$core$Int16(((panda$core$Int16) $tmp153.value));
int32_t $tmp160 = $tmp152.value;
int32_t $tmp161 = $tmp159.value;
int32_t $tmp162 = $tmp160 + $tmp161;
panda$core$Int32 $tmp163 = (panda$core$Int32) {$tmp162};
return ((panda$core$Int32$nullable) { $tmp163, true });
block7:;
// line 1
// line 136
panda$core$Int16$nullable $tmp164 = *(&local0);
panda$core$Bit $tmp165 = panda$core$Bit$init$builtin_bit($tmp164.nonnull);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp167 = (panda$core$Int64) {136};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s168, $tmp167, &$s169);
abort(); // unreachable
block12:;
panda$core$Int16 $tmp170 = (panda$core$Int16) {16};
panda$core$Int32 $tmp171 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) $tmp164.value), $tmp170);
panda$core$Int16$nullable $tmp172 = *(&local1);
panda$core$Bit $tmp173 = panda$core$Bit$init$builtin_bit($tmp172.nonnull);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp175 = (panda$core$Int64) {136};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s176, $tmp175, &$s177);
abort(); // unreachable
block14:;
panda$core$Int32 $tmp178 = panda$core$Int32$init$panda$core$Int16(((panda$core$Int16) $tmp172.value));
int32_t $tmp179 = $tmp171.value;
int32_t $tmp180 = $tmp178.value;
int32_t $tmp181 = $tmp179 + $tmp180;
panda$core$Int32 $tmp182 = (panda$core$Int32) {$tmp181};
return ((panda$core$Int32$nullable) { $tmp182, true });
block6:;
panda$core$Bit $tmp183 = panda$core$Bit$init$builtin_bit(false);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp185 = (panda$core$Int64) {123};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s186, $tmp185, &$s187);
abort(); // unreachable
block16:;
abort(); // unreachable

}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* param0) {

panda$core$Int32$nullable local0;
panda$core$Int32$nullable local1;
// line 145
$fn189 $tmp188 = ($fn189) param0->$class->vtable[8];
panda$core$Int32$nullable $tmp190 = $tmp188(param0);
*(&local0) = $tmp190;
// line 146
panda$core$Int32$nullable $tmp191 = *(&local0);
panda$core$Bit $tmp192 = panda$core$Bit$init$builtin_bit(!$tmp191.nonnull);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block1; else goto block2;
block1:;
// line 147
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 149
$fn195 $tmp194 = ($fn195) param0->$class->vtable[8];
panda$core$Int32$nullable $tmp196 = $tmp194(param0);
*(&local1) = $tmp196;
// line 150
panda$core$Int32$nullable $tmp197 = *(&local1);
panda$core$Bit $tmp198 = panda$core$Bit$init$builtin_bit(!$tmp197.nonnull);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block3; else goto block4;
block3:;
// line 151
return ((panda$core$Int64$nullable) { .nonnull = false });
block4:;
// line 153
panda$io$ByteOrder* $tmp200 = &param0->byteOrder;
panda$io$ByteOrder $tmp201 = *$tmp200;
panda$io$ByteOrder$wrapper* $tmp202;
$tmp202 = (panda$io$ByteOrder$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp202->value = $tmp201;
panda$core$Int64 $tmp203 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp204 = panda$io$ByteOrder$init$panda$core$Int64($tmp203);
panda$io$ByteOrder$wrapper* $tmp205;
$tmp205 = (panda$io$ByteOrder$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp205->value = $tmp204;
ITable* $tmp206 = ((panda$core$Equatable*) $tmp202)->$class->itable;
while ($tmp206->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
panda$core$Bit $tmp209 = $tmp207(((panda$core$Equatable*) $tmp202), ((panda$core$Equatable*) $tmp205));
bool $tmp210 = $tmp209.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp205)));
// unreffing REF($31:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp202)));
// unreffing REF($27:panda.core.Equatable<panda.io.ByteOrder>)
if ($tmp210) goto block5; else goto block7;
block5:;
// line 154
panda$core$Int32$nullable $tmp211 = *(&local1);
panda$core$Bit $tmp212 = panda$core$Bit$init$builtin_bit($tmp211.nonnull);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp214 = (panda$core$Int64) {154};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s215, $tmp214, &$s216);
abort(); // unreachable
block8:;
int32_t $tmp217 = ((panda$core$Int32) $tmp211.value).value;
panda$core$Int64 $tmp218 = (panda$core$Int64) {((int64_t) $tmp217)};
panda$core$Int64 $tmp219 = (panda$core$Int64) {32};
panda$core$Int64 $tmp220 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp218, $tmp219);
panda$core$Int32$nullable $tmp221 = *(&local0);
panda$core$Bit $tmp222 = panda$core$Bit$init$builtin_bit($tmp221.nonnull);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp224 = (panda$core$Int64) {154};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s225, $tmp224, &$s226);
abort(); // unreachable
block10:;
panda$core$Int64 $tmp227 = panda$core$Int64$init$panda$core$Int32(((panda$core$Int32) $tmp221.value));
int64_t $tmp228 = $tmp220.value;
int64_t $tmp229 = $tmp227.value;
int64_t $tmp230 = $tmp228 + $tmp229;
panda$core$Int64 $tmp231 = (panda$core$Int64) {$tmp230};
return ((panda$core$Int64$nullable) { $tmp231, true });
block7:;
// line 1
// line 157
panda$core$Int32$nullable $tmp232 = *(&local0);
panda$core$Bit $tmp233 = panda$core$Bit$init$builtin_bit($tmp232.nonnull);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp235 = (panda$core$Int64) {157};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s236, $tmp235, &$s237);
abort(); // unreachable
block12:;
int32_t $tmp238 = ((panda$core$Int32) $tmp232.value).value;
panda$core$Int64 $tmp239 = (panda$core$Int64) {((int64_t) $tmp238)};
panda$core$Int64 $tmp240 = (panda$core$Int64) {32};
panda$core$Int64 $tmp241 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp239, $tmp240);
panda$core$Int32$nullable $tmp242 = *(&local1);
panda$core$Bit $tmp243 = panda$core$Bit$init$builtin_bit($tmp242.nonnull);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp245 = (panda$core$Int64) {157};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block14:;
panda$core$Int64 $tmp248 = panda$core$Int64$init$panda$core$Int32(((panda$core$Int32) $tmp242.value));
int64_t $tmp249 = $tmp241.value;
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249 + $tmp250;
panda$core$Int64 $tmp252 = (panda$core$Int64) {$tmp251};
return ((panda$core$Int64$nullable) { $tmp252, true });
block6:;
panda$core$Bit $tmp253 = panda$core$Bit$init$builtin_bit(false);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp255 = (panda$core$Int64) {144};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block16:;
abort(); // unreachable

}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* param0) {

panda$core$UInt8$nullable local0;
// line 165
$fn259 $tmp258 = ($fn259) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp260 = $tmp258(param0);
*(&local0) = $tmp260;
// line 166
panda$core$UInt8$nullable $tmp261 = *(&local0);
panda$core$Bit $tmp262 = panda$core$Bit$init$builtin_bit($tmp261.nonnull);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 167
panda$core$UInt8$nullable $tmp264 = *(&local0);
panda$core$Bit $tmp265 = panda$core$Bit$init$builtin_bit($tmp264.nonnull);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp267 = (panda$core$Int64) {167};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s268, $tmp267, &$s269);
abort(); // unreachable
block3:;
panda$core$Char8 $tmp270 = panda$core$Char8$init$panda$core$UInt8(((panda$core$UInt8) $tmp264.value));
panda$core$Bit $tmp271 = panda$core$Bit$init$builtin_bit(((panda$core$Char8$nullable) { $tmp270, true }).nonnull);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp273 = (panda$core$Int64) {1};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s274, $tmp273, &$s275);
abort(); // unreachable
block5:;
return ((panda$core$Char8$nullable) { ((panda$core$Char8) ((panda$core$Char8$nullable) { $tmp270, true }).value), true });
block2:;
// line 169
return ((panda$core$Char8$nullable) { .nonnull = false });

}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* param0, panda$core$UInt8* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
panda$core$UInt8$nullable local1;
// line 179
panda$core$Int64 $tmp276 = (panda$core$Int64) {0};
*(&local0) = $tmp276;
// line 180
goto block1;
block1:;
panda$core$Int64 $tmp277 = *(&local0);
int64_t $tmp278 = $tmp277.value;
int64_t $tmp279 = param2.value;
bool $tmp280 = $tmp278 < $tmp279;
panda$core$Bit $tmp281 = (panda$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block2; else goto block3;
block2:;
// line 181
$fn284 $tmp283 = ($fn284) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp285 = $tmp283(param0);
*(&local1) = $tmp285;
// line 182
panda$core$UInt8$nullable $tmp286 = *(&local1);
panda$core$Bit $tmp287 = panda$core$Bit$init$builtin_bit(!$tmp286.nonnull);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block4; else goto block5;
block4:;
// line 183
goto block3;
block5:;
// line 185
panda$core$Int64 $tmp289 = *(&local0);
panda$core$UInt8$nullable $tmp290 = *(&local1);
panda$core$Bit $tmp291 = panda$core$Bit$init$builtin_bit($tmp290.nonnull);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp293 = (panda$core$Int64) {185};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block6:;
int64_t $tmp296 = $tmp289.value;
param1[$tmp296] = ((panda$core$UInt8) $tmp290.value);
// line 186
panda$core$Int64 $tmp297 = *(&local0);
panda$core$Int64 $tmp298 = (panda$core$Int64) {1};
int64_t $tmp299 = $tmp297.value;
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299 + $tmp300;
panda$core$Int64 $tmp302 = (panda$core$Int64) {$tmp301};
*(&local0) = $tmp302;
goto block1;
block3:;
// line 188
panda$core$Int64 $tmp303 = *(&local0);
return $tmp303;

}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* param0, panda$core$Int8* param1, panda$core$Int64 param2) {

// line 196
$fn305 $tmp304 = ($fn305) param0->$class->vtable[11];
panda$core$Int64 $tmp306 = $tmp304(param0, ((panda$core$UInt8*) param1), param2);
return $tmp306;

}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* param0, panda$core$Char8* param1, panda$core$Int64 param2) {

// line 204
$fn308 $tmp307 = ($fn308) param0->$class->vtable[11];
panda$core$Int64 $tmp309 = $tmp307(param0, ((panda$core$UInt8*) param1), param2);
return $tmp309;

}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* param0) {

panda$core$Int64 local0;
panda$core$MutableString* local1 = NULL;
panda$core$Int8* local2;
panda$core$Int64 local3;
// line 213
panda$core$Int64 $tmp310 = (panda$core$Int64) {2048};
*(&local0) = $tmp310;
// line 214
panda$core$MutableString* $tmp311 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp311);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
panda$core$MutableString* $tmp312 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
*(&local1) = $tmp311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing REF($4:panda.core.MutableString)
// line 215
panda$core$Int64 $tmp313 = *(&local0);
int64_t $tmp314 = $tmp313.value;
panda$core$Int8* $tmp315 = ((panda$core$Int8*) frostAlloc($tmp314 * 1));
*(&local2) = $tmp315;
// line 216
goto block1;
block1:;
// line 217
panda$core$Int8* $tmp316 = *(&local2);
panda$core$Int64 $tmp317 = *(&local0);
panda$core$Int64 $tmp318 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(param0, $tmp316, $tmp317);
*(&local3) = $tmp318;
// line 218
panda$core$Int64 $tmp319 = *(&local3);
panda$core$Int64 $tmp320 = (panda$core$Int64) {0};
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320.value;
bool $tmp323 = $tmp321 <= $tmp322;
panda$core$Bit $tmp324 = (panda$core$Bit) {$tmp323};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block3; else goto block4;
block3:;
// line 219
goto block2;
block4:;
// line 221
panda$core$MutableString* $tmp326 = *(&local1);
panda$core$Int8* $tmp327 = *(&local2);
panda$core$Int64 $tmp328 = *(&local3);
panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp326, ((panda$core$Char8*) $tmp327), $tmp328);
goto block1;
block2:;
// line 223
panda$core$Int8* $tmp329 = *(&local2);
frostFree($tmp329);
// line 224
panda$core$MutableString* $tmp330 = *(&local1);
panda$core$String* $tmp331 = panda$core$MutableString$finish$R$panda$core$String($tmp330);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($51:panda.core.String)
panda$core$MutableString* $tmp332 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp331;

}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$Char8$nullable local1;
panda$core$Bit local2;
// line 232
panda$core$MutableString* $tmp333 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp333);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$MutableString* $tmp334 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
*(&local0) = $tmp333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($1:panda.core.MutableString)
// line 233
goto block1;
block1:;
// line 234
$fn336 $tmp335 = ($fn336) param0->$class->vtable[10];
panda$core$Char8$nullable $tmp337 = $tmp335(param0);
*(&local1) = $tmp337;
// line 235
panda$core$Char8$nullable $tmp338 = *(&local1);
panda$core$Bit $tmp339 = panda$core$Bit$init$builtin_bit(!$tmp338.nonnull);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block3; else goto block4;
block3:;
// line 236
panda$core$MutableString* $tmp341 = *(&local0);
panda$core$Int64* $tmp342 = &$tmp341->_length;
panda$core$Int64 $tmp343 = *$tmp342;
panda$core$Int64 $tmp344 = (panda$core$Int64) {0};
panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp343, $tmp344);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block5; else goto block6;
block5:;
// line 237
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp347 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block6:;
// line 239
goto block2;
block4:;
// line 241
panda$core$Char8$nullable $tmp348 = *(&local1);
panda$core$Bit $tmp349 = panda$core$Bit$init$builtin_bit($tmp348.nonnull);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp351 = (panda$core$Int64) {241};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s352, $tmp351, &$s353);
abort(); // unreachable
block9:;
panda$core$UInt8 $tmp354 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp355 = panda$core$Char8$init$panda$core$UInt8($tmp354);
panda$core$Bit $tmp356 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp348.value), $tmp355);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block7; else goto block8;
block7:;
// line 242
panda$core$MutableString* $tmp358 = *(&local0);
panda$core$Int64* $tmp359 = &$tmp358->_length;
panda$core$Int64 $tmp360 = *$tmp359;
panda$core$Int64 $tmp361 = (panda$core$Int64) {0};
int64_t $tmp362 = $tmp360.value;
int64_t $tmp363 = $tmp361.value;
bool $tmp364 = $tmp362 > $tmp363;
panda$core$Bit $tmp365 = (panda$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block13; else goto block14;
block13:;
panda$core$MutableString* $tmp367 = *(&local0);
panda$core$MutableString* $tmp368 = *(&local0);
panda$core$MutableString* $tmp369 = *(&local0);
panda$core$MutableString$Index $tmp370 = panda$core$MutableString$get_end$R$panda$core$MutableString$Index($tmp369);
panda$core$MutableString$Index $tmp371 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index($tmp368, $tmp370);
panda$core$Char32 $tmp372 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32($tmp367, $tmp371);
panda$core$Int32 $tmp373 = (panda$core$Int32) {13};
panda$core$Char32 $tmp374 = panda$core$Char32$init$panda$core$Int32($tmp373);
panda$core$Bit $tmp375 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp372, $tmp374);
*(&local2) = $tmp375;
goto block15;
block14:;
*(&local2) = $tmp365;
goto block15;
block15:;
panda$core$Bit $tmp376 = *(&local2);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block11; else goto block12;
block11:;
// line 243
panda$core$MutableString* $tmp378 = *(&local0);
panda$core$Int64* $tmp379 = &$tmp378->_length;
panda$core$Int64 $tmp380 = *$tmp379;
panda$core$Int64 $tmp381 = (panda$core$Int64) {1};
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382 - $tmp383;
panda$core$Int64 $tmp385 = (panda$core$Int64) {$tmp384};
panda$core$Int64* $tmp386 = &$tmp378->_length;
*$tmp386 = $tmp385;
goto block12;
block12:;
// line 245
goto block2;
block8:;
// line 247
panda$core$MutableString* $tmp387 = *(&local0);
panda$core$Char8$nullable $tmp388 = *(&local1);
panda$core$Bit $tmp389 = panda$core$Bit$init$builtin_bit($tmp388.nonnull);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp391 = (panda$core$Int64) {247};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s392, $tmp391, &$s393);
abort(); // unreachable
block16:;
panda$core$MutableString$append$panda$core$Char8($tmp387, ((panda$core$Char8) $tmp388.value));
goto block1;
block2:;
// line 249
panda$core$MutableString* $tmp394 = *(&local0);
panda$core$String* $tmp395 = panda$core$MutableString$finish$R$panda$core$String($tmp394);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
// unreffing REF($115:panda.core.String)
panda$core$MutableString* $tmp396 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp395;

}
panda$core$Int64 panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64(panda$io$InputStream* param0, panda$io$OutputStream* param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$UInt8* local2;
panda$core$Int64 local3;
// line 257
panda$core$Int64 $tmp397 = (panda$core$Int64) {0};
*(&local0) = $tmp397;
// line 258
panda$core$Int64 $tmp398 = (panda$core$Int64) {2048};
*(&local1) = $tmp398;
// line 259
panda$core$Int64 $tmp399 = *(&local1);
int64_t $tmp400 = $tmp399.value;
panda$core$UInt8* $tmp401 = ((panda$core$UInt8*) frostAlloc($tmp400 * 1));
*(&local2) = $tmp401;
// line 260
goto block1;
block1:;
// line 261
panda$core$UInt8* $tmp402 = *(&local2);
panda$core$Int64 $tmp403 = *(&local1);
$fn405 $tmp404 = ($fn405) param0->$class->vtable[11];
panda$core$Int64 $tmp406 = $tmp404(param0, $tmp402, $tmp403);
*(&local3) = $tmp406;
// line 262
panda$core$Int64 $tmp407 = *(&local3);
panda$core$Int64 $tmp408 = (panda$core$Int64) {0};
int64_t $tmp409 = $tmp407.value;
int64_t $tmp410 = $tmp408.value;
bool $tmp411 = $tmp409 <= $tmp410;
panda$core$Bit $tmp412 = (panda$core$Bit) {$tmp411};
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block3; else goto block4;
block3:;
// line 263
goto block2;
block4:;
// line 265
panda$core$Int64 $tmp414 = *(&local0);
panda$core$Int64 $tmp415 = *(&local3);
int64_t $tmp416 = $tmp414.value;
int64_t $tmp417 = $tmp415.value;
int64_t $tmp418 = $tmp416 + $tmp417;
panda$core$Int64 $tmp419 = (panda$core$Int64) {$tmp418};
*(&local0) = $tmp419;
// line 266
panda$core$UInt8* $tmp420 = *(&local2);
panda$core$Int64 $tmp421 = *(&local3);
$fn423 $tmp422 = ($fn423) param1->$class->vtable[10];
$tmp422(param1, $tmp420, $tmp421);
goto block1;
block2:;
// line 268
panda$core$UInt8* $tmp424 = *(&local2);
frostFree($tmp424);
// line 269
panda$core$Int64 $tmp425 = *(&local0);
return $tmp425;

}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* param0) {

// line 276
panda$io$InputStream$LineIterator* $tmp426 = (panda$io$InputStream$LineIterator*) frostObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp426, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp426)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// unreffing REF($1:panda.io.InputStream.LineIterator)
return ((panda$collections$Iterator*) $tmp426);

}
void panda$io$InputStream$close(panda$io$InputStream* param0) {

return;

}
void panda$io$InputStream$init(panda$io$InputStream* param0) {

// line 14
panda$core$Int64 $tmp427 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp428 = panda$io$ByteOrder$init$panda$core$Int64($tmp427);
panda$io$ByteOrder* $tmp429 = &param0->byteOrder;
*$tmp429 = $tmp428;
return;

}
void panda$io$InputStream$cleanup(panda$io$InputStream* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

