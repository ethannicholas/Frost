#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$io$MemoryOutputStream panda$io$MemoryOutputStream;
typedef struct panda$io$IndentedOutputStream panda$io$IndentedOutputStream;
typedef struct panda$collections$HashSet panda$collections$HashSet;
typedef struct panda$io$File panda$io$File;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator org$pandalanguage$pandac$LLVMCodeGenerator;
#include "panda/core/Bit_types.h"
typedef struct org$pandalanguage$pandac$CCodeGenerator org$pandalanguage$pandac$CCodeGenerator;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$HCodeGenerator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Weak* compiler;
    panda$io$MemoryOutputStream* typeImportStream;
    panda$io$MemoryOutputStream* typesBuffer;
    panda$io$IndentedOutputStream* types;
    panda$io$MemoryOutputStream* bodyImportStream;
    panda$io$MemoryOutputStream* bodyBuffer;
    panda$io$IndentedOutputStream* body;
    panda$collections$HashSet* typeImports;
    panda$collections$HashSet* bodyImports;
    panda$collections$HashSet* imports;
    panda$io$MemoryOutputStream* importStream;
    panda$io$File* outDir;
    panda$io$IndentedOutputStream* out;
    panda$io$IndentedOutputStream* typesOut;
    org$pandalanguage$pandac$LLVMCodeGenerator* llvmCodeGen;
    panda$core$Bit inClass;
    panda$core$Weak* cCodeGen;
    org$pandalanguage$pandac$CCodeGenerator* cCodeGenRetain;
} org$pandalanguage$pandac$HCodeGenerator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[17]; } org$pandalanguage$pandac$HCodeGenerator$class_type;
extern org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class;

