#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$io$MemoryOutputStream frost$io$MemoryOutputStream;
typedef struct frost$io$IndentedOutputStream frost$io$IndentedOutputStream;
typedef struct frost$collections$HashSet frost$collections$HashSet;
typedef struct frost$io$File frost$io$File;
typedef struct org$frostlang$frostc$LLVMCodeGenerator org$frostlang$frostc$LLVMCodeGenerator;
typedef struct org$frostlang$frostc$CCodeGenerator org$frostlang$frostc$CCodeGenerator;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$HCodeGenerator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Weak* compiler;
    frost$io$MemoryOutputStream* typeImportStream;
    frost$io$MemoryOutputStream* typesBuffer;
    frost$io$IndentedOutputStream* types;
    frost$io$MemoryOutputStream* bodyImportStream;
    frost$io$MemoryOutputStream* bodyBuffer;
    frost$io$IndentedOutputStream* body;
    frost$collections$HashSet* typeImports;
    frost$collections$HashSet* bodyImports;
    frost$collections$HashSet* imports;
    frost$io$MemoryOutputStream* importStream;
    frost$io$File* outDir;
    frost$io$IndentedOutputStream* out;
    frost$io$IndentedOutputStream* typesOut;
    org$frostlang$frostc$LLVMCodeGenerator* llvmCodeGen;
    frost$core$Weak* cCodeGen;
    org$frostlang$frostc$CCodeGenerator* cCodeGenRetain;
} org$frostlang$frostc$HCodeGenerator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[17]; } org$frostlang$frostc$HCodeGenerator$class_type;
extern org$frostlang$frostc$HCodeGenerator$class_type org$frostlang$frostc$HCodeGenerator$class;

