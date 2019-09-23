#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlang$frostc$MemoryLayout org$frostlang$frostc$MemoryLayout;
typedef struct frost$io$MemoryOutputStream frost$io$MemoryOutputStream;
typedef struct frost$collections$HashSet frost$collections$HashSet;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

typedef struct org$frostlang$frostc$LLVMCodeGenerator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$String* INT_CLASS;
    frost$io$OutputStream* physicalOut;
    frost$io$OutputStream* out;
    frost$core$Weak* compiler;
    org$frostlang$frostc$MemoryLayout* memoryLayout;
    frost$io$MemoryOutputStream* declarations;
    frost$io$MemoryOutputStream* types;
    frost$io$MemoryOutputStream* methods;
    frost$io$MemoryOutputStream* methodHeader;
    frost$io$MemoryOutputStream* shims;
    frost$io$MemoryOutputStream* strings;
    frost$io$MemoryOutputStream* metadata;
    frost$collections$HashSet* declared;
    frost$collections$HashSet* writtenTypes;
    frost$collections$HashSet* writtenWrappers;
    frost$collections$HashMap* classConstants;
    frost$collections$IdentityMap* debugTypes;
    frost$core$Int varCount;
    frost$core$Int labelCount;
    frost$core$Int metadataCount;
    frost$core$Bit wroteCompileUnit;
    frost$collections$Array* fileMetadata;
    frost$collections$Array* methodMetadata;
    frost$collections$Array* lexicalBlockMetadata;
    frost$core$String* currentBlock;
    frost$collections$HashMap* debugPositions;
    frost$collections$IdentityMap* methodShims;
    frost$collections$IdentityMap* nameCache;
    frost$collections$IdentityMap* typeNames;
    org$frostlang$frostc$IR* ir;
} org$frostlang$frostc$LLVMCodeGenerator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[87]; } org$frostlang$frostc$LLVMCodeGenerator$class_type;
extern org$frostlang$frostc$LLVMCodeGenerator$class_type org$frostlang$frostc$LLVMCodeGenerator$class;

