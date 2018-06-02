#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$io$MemoryOutputStream panda$io$MemoryOutputStream;
typedef struct panda$collections$Set panda$collections$Set;
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$collections$IdentityMap panda$collections$IdentityMap;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct panda$collections$Stack panda$collections$Stack;
#include "panda/core/Int64_types.h"

typedef struct org$pandalanguage$pandac$LLVMCodeGenerator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$OutputStream* out;
    panda$core$Weak* compiler;
    panda$io$MemoryOutputStream* declarations;
    panda$io$MemoryOutputStream* types;
    panda$io$MemoryOutputStream* methods;
    panda$io$MemoryOutputStream* methodHeader;
    panda$io$MemoryOutputStream* shims;
    panda$io$MemoryOutputStream* strings;
    panda$collections$Set* declared;
    panda$collections$Set* writtenTypes;
    panda$collections$Set* writtenWrappers;
    panda$collections$HashMap* classConstants;
    panda$collections$IdentityMap* variableNames;
    panda$core$String* currentBlock;
    org$pandalanguage$pandac$MethodDecl* currentMethod;
    panda$core$String* returnValueVar;
    panda$collections$Stack* enclosingContexts;
    panda$collections$Stack* extraEffects;
    panda$core$Int64 varCount;
    panda$core$Int64 labelCount;
    panda$collections$HashMap* reusedValues;
    panda$collections$IdentityMap* methodShims;
    panda$collections$IdentityMap* currentlyInlining;
    panda$collections$IdentityMap* sizes;
    panda$collections$IdentityMap* choiceDataSizes;
} org$pandalanguage$pandac$LLVMCodeGenerator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[114]; } org$pandalanguage$pandac$LLVMCodeGenerator$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class;

