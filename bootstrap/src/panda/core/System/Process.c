#include "panda/core/System/Process.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Panda.h"
#include "panda/io/OutputStream.h"
#include "panda/io/InputStream.h"


panda$core$System$Process$class_type panda$core$System$Process$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$System$Process$cleanup, panda$core$System$Process$waitFor$R$panda$core$Int64} };



void panda$core$System$Process$init(panda$core$System$Process* self) {
}
void panda$core$System$Process$cleanup(panda$core$System$Process* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->input));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->output));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->error));
}

