#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$io$MemoryOutputStream panda$io$MemoryOutputStream;
typedef struct panda$collections$HashSet panda$collections$HashSet;
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$collections$IdentityMap panda$collections$IdentityMap;
typedef struct org$pandalanguage$pandac$IR org$pandalanguage$pandac$IR;

typedef struct org$pandalanguage$pandac$LLVMCodeGenerator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$OutputStream* physicalOut;
    panda$io$OutputStream* out;
    panda$core$Weak* compiler;
    panda$io$MemoryOutputStream* declarations;
    panda$io$MemoryOutputStream* types;
    panda$io$MemoryOutputStream* methods;
    panda$io$MemoryOutputStream* methodHeader;
    panda$io$MemoryOutputStream* shims;
    panda$io$MemoryOutputStream* strings;
    panda$io$MemoryOutputStream* metadata;
    panda$collections$HashSet* declared;
    panda$collections$HashSet* writtenTypes;
    panda$collections$HashSet* writtenWrappers;
    panda$collections$HashMap* classConstants;
    panda$core$Int64 varCount;
    panda$core$Int64 labelCount;
    panda$core$Int64 metadataCount;
    panda$core$String* currentFileMetadata;
    panda$core$String* currentMethodMetadata;
    org$pandalanguage$pandac$Position lastDebugPosition;
    panda$core$String* currentBlock;
    panda$collections$IdentityMap* sizes;
    panda$collections$IdentityMap* choiceDataSizes;
    panda$collections$IdentityMap* methodShims;
    panda$collections$HashMap* refs;
    org$pandalanguage$pandac$IR* ir;
} org$pandalanguage$pandac$LLVMCodeGenerator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[84]; } org$pandalanguage$pandac$LLVMCodeGenerator$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class;

