#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$io$File panda$io$File;
typedef struct panda$io$IndentedOutputStream panda$io$IndentedOutputStream;
typedef struct panda$io$MemoryOutputStream panda$io$MemoryOutputStream;
typedef struct panda$collections$HashSet panda$collections$HashSet;
typedef struct org$pandalanguage$pandac$HCodeGenerator org$pandalanguage$pandac$HCodeGenerator;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$collections$IdentityMap panda$collections$IdentityMap;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct panda$collections$Stack panda$collections$Stack;
#include "panda/core/Int64_types.h"

typedef struct org$pandalanguage$pandac$CCodeGenerator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Weak* compiler;
    panda$io$File* outDir;
    panda$io$IndentedOutputStream* out;
    panda$io$MemoryOutputStream* strings;
    panda$collections$HashSet* imports;
    org$pandalanguage$pandac$HCodeGenerator* hCodeGen;
    org$pandalanguage$pandac$ClassDecl* currentClass;
    panda$io$MemoryOutputStream* declarations;
    panda$io$MemoryOutputStream* types;
    panda$io$MemoryOutputStream* methodsBuffer;
    panda$io$IndentedOutputStream* methods;
    panda$io$MemoryOutputStream* methodHeaderBuffer;
    panda$io$IndentedOutputStream* methodHeader;
    panda$io$MemoryOutputStream* shimsBuffer;
    panda$io$IndentedOutputStream* shims;
    panda$collections$HashSet* declared;
    panda$collections$HashSet* writtenTypes;
    panda$collections$HashSet* writtenWrappers;
    panda$collections$HashMap* classConstants;
    panda$collections$IdentityMap* variableNames;
    panda$core$String* currentBlock;
    org$pandalanguage$pandac$MethodDecl* currentMethod;
    panda$core$String* returnValueVar;
    panda$collections$Stack* enclosingContexts;
    panda$collections$Stack* extraEffects;
    panda$core$Int64 varCount;
    panda$collections$HashMap* reusedValues;
    panda$collections$IdentityMap* methodShims;
} org$pandalanguage$pandac$CCodeGenerator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[101]; } org$pandalanguage$pandac$CCodeGenerator$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class;

