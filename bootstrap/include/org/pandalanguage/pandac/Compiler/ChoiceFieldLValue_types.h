#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
typedef struct org$pandalanguage$pandac$ChoiceCase org$pandalanguage$pandac$ChoiceCase;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$ChoiceFieldLValue {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Compiler* compiler;
    org$pandalanguage$pandac$Position position;
    org$pandalanguage$pandac$IR$Value* target;
    org$pandalanguage$pandac$ChoiceCase* choiceCase;
    panda$core$Int64 index;
} org$pandalanguage$pandac$Compiler$ChoiceFieldLValue;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$Compiler$ChoiceFieldLValue$class_type;
extern org$pandalanguage$pandac$Compiler$ChoiceFieldLValue$class_type org$pandalanguage$pandac$Compiler$ChoiceFieldLValue$class;

