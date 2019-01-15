#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$io$File frost$io$File;
typedef struct frost$io$IndentedOutputStream frost$io$IndentedOutputStream;
typedef struct frost$io$MemoryOutputStream frost$io$MemoryOutputStream;
typedef struct frost$collections$HashSet frost$collections$HashSet;
typedef struct org$frostlanguage$frostc$HCodeGenerator org$frostlanguage$frostc$HCodeGenerator;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct frost$collections$Stack frost$collections$Stack;
#include "frost/core/Int64_types.h"
typedef struct org$frostlanguage$frostc$IR org$frostlanguage$frostc$IR;

typedef struct org$frostlanguage$frostc$CCodeGenerator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Weak* compiler;
    frost$io$File* outDir;
    frost$io$IndentedOutputStream* out;
    frost$io$MemoryOutputStream* strings;
    frost$collections$HashSet* imports;
    frost$core$Weak* hCodeGen;
    org$frostlanguage$frostc$HCodeGenerator* hCodeGenRetain;
    org$frostlanguage$frostc$ClassDecl* currentClass;
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
    org$frostlanguage$frostc$MethodDecl* currentMethod;
    frost$core$String* returnValueVar;
    frost$collections$Stack* enclosingContexts;
    frost$core$Int64 varCount;
    frost$collections$IdentityMap* methodShims;
    frost$collections$IdentityMap* choiceDataSizes;
    frost$collections$HashMap* refs;
    org$frostlanguage$frostc$IR* ir;
} org$frostlanguage$frostc$CCodeGenerator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[84]; } org$frostlanguage$frostc$CCodeGenerator$class_type;
extern org$frostlanguage$frostc$CCodeGenerator$class_type org$frostlanguage$frostc$CCodeGenerator$class;

