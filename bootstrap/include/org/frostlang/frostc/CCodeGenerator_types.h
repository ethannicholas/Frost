#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$io$File frost$io$File;
typedef struct frost$io$IndentedOutputStream frost$io$IndentedOutputStream;
typedef struct frost$io$MemoryOutputStream frost$io$MemoryOutputStream;
typedef struct frost$collections$HashSet frost$collections$HashSet;
typedef struct org$frostlang$frostc$HCodeGenerator org$frostlang$frostc$HCodeGenerator;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct frost$collections$Stack frost$collections$Stack;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

typedef struct org$frostlang$frostc$CCodeGenerator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Weak* compiler;
    frost$io$File* outDir;
    frost$io$IndentedOutputStream* out;
    frost$io$MemoryOutputStream* strings;
    frost$collections$HashSet* imports;
    frost$core$Weak* hCodeGen;
    org$frostlang$frostc$HCodeGenerator* hCodeGenRetain;
    org$frostlang$frostc$ClassDecl* currentClass;
    frost$io$MemoryOutputStream* includes;
    frost$io$MemoryOutputStream* declarations;
    frost$io$MemoryOutputStream* types;
    frost$io$MemoryOutputStream* methodsBuffer;
    frost$io$IndentedOutputStream* methods;
    frost$io$MemoryOutputStream* methodHeaderBuffer;
    frost$io$IndentedOutputStream* methodHeader;
    frost$io$MemoryOutputStream* shimsBuffer;
    frost$io$IndentedOutputStream* shims;
    frost$collections$HashSet* declared;
    frost$collections$HashSet* writtenTypes;
    frost$collections$HashSet* writtenWrappers;
    frost$collections$HashMap* classConstants;
    frost$collections$IdentityMap* variableNames;
    frost$core$String* currentBlock;
    org$frostlang$frostc$MethodDecl* currentMethod;
    frost$core$String* returnValueVar;
    frost$collections$Stack* enclosingContexts;
    frost$core$Int varCount;
    frost$collections$IdentityMap* methodShims;
    org$frostlang$frostc$IR* ir;
} org$frostlang$frostc$CCodeGenerator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[79]; } org$frostlang$frostc$CCodeGenerator$class_type;
extern org$frostlang$frostc$CCodeGenerator$class_type org$frostlang$frostc$CCodeGenerator$class;

