#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$CompilerErrorReporter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Weak* compiler;
} org$pandalanguage$pandac$Compiler$CompilerErrorReporter;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$Compiler$CompilerErrorReporter$class_type;
extern org$pandalanguage$pandac$Compiler$CompilerErrorReporter$class_type org$pandalanguage$pandac$Compiler$CompilerErrorReporter$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Compiler$CompilerErrorReporter org$pandalanguage$pandac$Compiler$CompilerErrorReporter;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Compiler$CompilerErrorReporter$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$CompilerErrorReporter* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$Compiler$CompilerErrorReporter$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler$CompilerErrorReporter* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg);
void org$pandalanguage$pandac$Compiler$CompilerErrorReporter$cleanup(org$pandalanguage$pandac$Compiler$CompilerErrorReporter* self);

#endif
