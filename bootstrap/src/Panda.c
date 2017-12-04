#include "panda/core/Panda.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/core/Object.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Class.h"


typedef void (*$fn9)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn21)(panda$io$OutputStream*, panda$core$String*);
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x20\x66\x61\x69\x6C\x75\x72\x65\x20\x28", 19, 1 };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x20\x66\x61\x69\x6C\x75\x72\x65\x20\x28", 19, 1 };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3A\x20", 3, 1 };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x44\x65\x62\x75\x67\x3A\x20", 7, 1 };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp1 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp3 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2, p_file);
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3, &$s4);
    panda$core$String* $tmp6 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5, ((panda$core$Object*) wrap_panda$core$Int64(p_line)));
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6, &$s7);
    (($fn9) $tmp1->$class->vtable[19])($tmp1, $tmp8);
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp10 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s11, p_file);
    panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp12, &$s13);
    panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp14, ((panda$core$Object*) wrap_panda$core$Int64(p_line)));
    panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp15, &$s16);
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp17, p_msg);
    panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s19);
    (($fn21) $tmp10->$class->vtable[19])($tmp10, $tmp20);
    panda$core$System$crash();
}
void panda$core$Panda$debugPrint$panda$core$UInt64(panda$core$UInt64 p_i) {
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s22, ((panda$core$Object*) wrap_panda$core$UInt64(p_i)));
    panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, &$s24);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp25));
}
void panda$core$Panda$init(panda$core$Panda* self) {
}

