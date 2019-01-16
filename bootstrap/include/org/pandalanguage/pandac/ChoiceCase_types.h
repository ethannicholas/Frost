#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "org/pandalanguage/pandac/Symbol/Kind_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/Int64_types.h"
#include "org/pandalanguage/pandac/Compiler/Resolution_types.h"

typedef struct org$pandalanguage$pandac$ChoiceCase {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Symbol$Kind kind;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    panda$core$Weak* owner;
    panda$core$String* doccomment;
    panda$collections$Array* fields;
    panda$core$Int64 rawValue;
    panda$core$Weak* initMethod;
    org$pandalanguage$pandac$Compiler$Resolution resolved;
} org$pandalanguage$pandac$ChoiceCase;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$ChoiceCase$class_type;
extern org$pandalanguage$pandac$ChoiceCase$class_type org$pandalanguage$pandac$ChoiceCase$class;

