#include "panda/core/System/Process.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/io/OutputStream.h"
#include "panda/io/InputStream.h"


static panda$core$String $s1;
panda$core$System$Process$class_type panda$core$System$Process$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$System$Process$cleanup, panda$core$System$Process$waitFor$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 25, 2374669805226762464, NULL };

void panda$core$System$Process$init(panda$core$System$Process* self) {
    self->input = NULL;
    self->output = NULL;
    self->error = NULL;
}
void panda$core$System$Process$cleanup(panda$core$System$Process* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->input));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->output));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->error));
}

