#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlang$frostc$CodeGenerator org$frostlang$frostc$CodeGenerator;
typedef struct frost$io$MemoryOutputStream frost$io$MemoryOutputStream;
typedef struct frost$collections$HashSet frost$collections$HashSet;
#include "frost/core/Int_types.h"
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$HashMap frost$collections$HashMap;

typedef struct org$frostlang$frostc$LLVMBackend {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$String* INT_CLASS;
    frost$io$OutputStream* physicalOut;
    frost$io$OutputStream* out;
    frost$core$Weak* compiler;
    org$frostlang$frostc$CodeGenerator* cg;
    frost$io$MemoryOutputStream* signatures;
    frost$io$MemoryOutputStream* methods;
    frost$io$MemoryOutputStream* metadata;
    frost$collections$HashSet* writtenSignatures;
    frost$core$Int varCount;
    frost$collections$IdentityMap* debugTypes;
    frost$core$Int metadataCount;
    frost$core$Bit wroteCompileUnit;
    frost$collections$Array* fileMetadata;
    frost$collections$Array* methodMetadata;
    frost$collections$Array* lexicalBlockMetadata;
    frost$collections$HashMap* debugPositions;
} org$frostlang$frostc$LLVMBackend;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[22]; } org$frostlang$frostc$LLVMBackend$class_type;
extern org$frostlang$frostc$LLVMBackend$class_type org$frostlang$frostc$LLVMBackend$class;

