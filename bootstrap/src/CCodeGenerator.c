#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/io/OutputStream.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/IdentityMap.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Object.h"
#include "panda/core/MutableString.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Range.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/collections/Array.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/core/Immutable.h"


typedef panda$core$Bit (*$fn58)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn66)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Bit (*$fn67)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn70)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn87)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn90)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn93)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn95)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn96)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn98)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn102)(panda$collections$ImmutableArray*);
typedef void (*$fn123)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn124)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn127)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn141)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn142)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn158)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn176)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn185)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn188)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn191)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn200)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn216)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn218)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn220)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn234)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn240)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn250)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn256)(panda$collections$Iterator*);
typedef void (*$fn258)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Bit (*$fn269)(panda$collections$Set*, panda$collections$Key*);
typedef panda$core$Object* (*$fn273)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn285)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn290)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn293)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn296)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn298)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn304)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn305)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn308)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn310)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn312)(panda$collections$ImmutableArray*);
typedef void (*$fn334)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn335)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn338)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn351)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn352)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn355)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn362)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Set* (*$fn364)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn371)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn377)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn383)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn386)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn391)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn415)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn437)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn443)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn449)(panda$collections$Iterator*);
typedef void (*$fn451)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn453)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn456)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn458)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn460)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn461)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn473)(panda$collections$IdentityMap*, panda$core$Object*);
typedef panda$core$Int64 (*$fn476)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn479)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn496)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn505)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn506)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn528)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn532)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn533)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn541)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn557)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn587)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn589)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn591)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn607)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn659)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn661)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn669)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn672)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn676)(panda$core$MutableString*);
typedef void (*$fn678)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn679)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn704)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn706)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn709)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn732)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn755)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn781)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn783)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn804)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn813)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn839)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn852)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn855)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn857)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Set* (*$fn859)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn866)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn872)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn878)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn881)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn886)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn910)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn937)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn943)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn949)(panda$collections$Iterator*);
typedef void (*$fn951)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn953)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn956)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn958)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn960)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn961)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn967)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn970)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn972)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn975)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn977)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn980)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn985)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn987)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn992)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn999)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn1000)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn1002)(panda$collections$Stack*, panda$core$Object*);
typedef panda$collections$ListView* (*$fn1004)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1009)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1016)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1019)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1029)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1059)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1065)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1071)(panda$collections$Iterator*);
typedef void (*$fn1073)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn1074)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1077)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1079)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1082)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1083)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn1084)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1092)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn1104)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1109)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn1112)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn1123)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1126)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1138)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1167)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1190)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1202)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1216)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1217)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1218)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn1225)(panda$collections$IdentityMap*, panda$core$Object*);
typedef void (*$fn1235)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn1257)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1278)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1282)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1293)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1299)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1310)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1320)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1324)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1380)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1400)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1445)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn1450)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1472)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1486)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1517)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1529)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1532)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn1537)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1559)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1573)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn1575)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn1579)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn1585)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1601)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1605)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1620)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn1622)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1669)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn1671)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn1709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1725)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1743)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1746)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn1748)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1751)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1754)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn1759)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1790)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1793)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1798)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn1832)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1840)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1852)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1856)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1862)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1868)(panda$collections$Iterator*);
typedef void (*$fn1877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1880)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1883)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1886)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1891)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1895)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1911)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1931)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1936)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1941)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn1970)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1974)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2005)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2016)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2019)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2022)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2025)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2031)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2035)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2041)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2047)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2049)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn2055)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2061)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2063)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2086)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2091)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2095)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn2110)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2125)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2151)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2156)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn2168)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2199)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2216)(panda$collections$Iterator*);
typedef void (*$fn2221)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2228)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2230)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn2237)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2239)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn2244)(panda$collections$CollectionView*);
typedef void (*$fn2249)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2265)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2268)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2290)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2293)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2311)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2313)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2315)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2374)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn2377)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn2389)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2394)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2400)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2406)(panda$collections$Iterator*);
typedef void (*$fn2410)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2420)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2430)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2441)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2454)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2463)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2480)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2483)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn2485)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn2488)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn2491)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn2499)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn2530)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2533)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn2538)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn2574)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2585)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2591)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2595)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2601)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2607)(panda$collections$Iterator*);
typedef void (*$fn2609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2624)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2628)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2631)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2641)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn2647)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2651)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn2654)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2658)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2660)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn2681)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2685)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2727)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2748)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn2769)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2781)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2937)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2953)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2969)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2986)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3000)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3029)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3030)(panda$collections$Stack*);
typedef void (*$fn3037)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3053)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3054)(panda$collections$Stack*);
typedef void (*$fn3061)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3072)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3073)(panda$collections$Stack*);
typedef void (*$fn3080)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3082)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3085)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3086)(panda$collections$Stack*);
typedef void (*$fn3099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3109)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3126)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3135)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3155)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn3175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3184)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3186)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3187)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn3190)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3211)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn3214)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn3218)(panda$collections$Stack*, panda$core$Int64);
typedef void (*$fn3237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3244)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3272)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3285)(panda$io$MemoryOutputStream*);
typedef void (*$fn3295)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3298)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3306)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3311)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3317)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3323)(panda$collections$Iterator*);
typedef void (*$fn3337)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3340)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3363)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3365)(panda$io$MemoryOutputStream*);
typedef void (*$fn3367)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3368)(panda$io$MemoryOutputStream*);
typedef void (*$fn3370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3373)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3374)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3391)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3402)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3417)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3419)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3424)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3425)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3426)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3427)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3428)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3429)(panda$core$Object*);
struct { panda$core$Class* cl; ITable* next; void* methods[5]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$MethodShim$class_type org$pandalanguage$pandac$CCodeGenerator$MethodShim$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$CCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$Pair$class_type org$pandalanguage$pandac$CCodeGenerator$Pair$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$OpClass$class_type org$pandalanguage$pandac$CCodeGenerator$OpClass$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6E", 3 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2A", 3 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4 };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2 };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2 };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1 };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8 };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8 };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2 };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9 };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4 };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2 };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9 };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19 };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14 };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5 };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5 };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21 };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4 };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4 };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5 };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11 };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5 };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5 };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2 };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3 };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2 };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1 };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10 };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5 };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7 };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6 };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12 };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9 };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5 };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3 };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7 };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12 };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4 };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9 };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9 };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21 };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14 };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5 };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5 };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3 };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4 };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4 };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5 };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11 };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6 };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17 };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6 };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7 };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21 };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4 };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6 };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5 };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5 };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4 };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4 };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5 };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13 };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17 };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19 };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13 };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7 };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21 };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6 };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5 };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21 };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5 };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4 };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4 };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2 };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1 };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6 };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5 };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5 };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6 };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6 };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5 };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6 };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1 };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1 };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1 };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2 };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2 };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1 };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1 };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1 };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2 };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2 };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1 };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2 };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2 };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20 };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4 };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3 };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20 };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4 };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3 };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2 };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17 };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2 };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8 };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17 };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7 };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33 };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3 };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7 };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10 };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2 };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5 };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9 };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9 };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2 };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3 };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2 };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2 };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1 };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7 };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7 };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10 };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9 };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2 };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14 };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1 };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5 };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3 };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1 };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15 };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5 };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3 };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2 };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11 };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8 };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7 };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2 };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11 };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8 };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2 };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2 };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7 };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2 };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8 };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2 };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4 };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3 };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4 };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1 };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4 };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2 };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7 };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32 };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7 };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21 };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1 };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4 };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5 };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2 };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25 };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5 };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70 };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16 };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16 };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3 };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1 };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4 };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7 };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5 };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8 };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8 };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20 };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8 };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8 };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20 };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3 };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2 };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23 };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4 };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1 };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1 };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1 };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1 };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3 };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4 };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1 };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10 };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7 };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5 };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4 };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2 };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9 };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6 };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28\x28", 5 };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2 };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x29\x2D\x3E\x76\x61\x6C\x75\x65\x2E\x76\x61\x6C\x75\x65\x3B", 21 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5 };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3 };
static panda$core$String $s2700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28\x28", 5 };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2 };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x29\x2D\x3E\x76\x61\x6C\x75\x65\x2E\x76\x61\x6C\x75\x65\x3B", 19 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12 };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5 };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17 };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14 };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1 };
static panda$core$String $s2757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1 };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1 };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5 };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5 };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4 };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3 };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4 };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3 };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3 };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7 };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4 };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3 };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9 };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5 };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4 };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7 };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12 };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10 };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5 };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5 };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13 };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5 };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4 };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13 };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14 };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2 };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3 };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7 };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7 };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5 };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5 };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1 };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5 };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3 };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3 };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15 };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8 };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4 };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19 };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18 };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37 };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1 };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14 };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25 };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18 };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C", 15 };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s3434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C\x3E", 16 };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$OutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$OutputStream* p_out) {
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->strings = $tmp1;
    panda$collections$Set* $tmp3 = (panda$collections$Set*) malloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp3->refCount.value = 1;
    panda$collections$Set$init($tmp3);
    self->imports = $tmp3;
    org$pandalanguage$pandac$HCodeGenerator* $tmp5 = (org$pandalanguage$pandac$HCodeGenerator*) malloc(120);
    $tmp5->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
    $tmp5->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    org$pandalanguage$pandac$HCodeGenerator$init$panda$io$OutputStream($tmp5, ((panda$io$OutputStream*) $tmp7));
    self->hCodeGen = $tmp5;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->declarations = $tmp9;
    panda$io$MemoryOutputStream* $tmp11 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp11->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp11);
    self->types = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->methodsBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->methodHeaderBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp19->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp19;
    panda$io$MemoryOutputStream* $tmp21 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp21->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp21);
    self->wrapperShimsBuffer = $tmp21;
    panda$io$IndentedOutputStream* $tmp23 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp23->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp23->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp23, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp23;
    panda$io$MemoryOutputStream* $tmp25 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp25->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp25->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp25);
    self->shimsBuffer = $tmp25;
    panda$io$IndentedOutputStream* $tmp27 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp27->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp27->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp27, ((panda$io$OutputStream*) self->shimsBuffer));
    self->shims = $tmp27;
    panda$collections$Set* $tmp29 = (panda$collections$Set*) malloc(24);
    $tmp29->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp29->refCount.value = 1;
    panda$collections$Set$init($tmp29);
    self->declared = $tmp29;
    panda$collections$Set* $tmp31 = (panda$collections$Set*) malloc(24);
    $tmp31->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp31->refCount.value = 1;
    panda$collections$Set$init($tmp31);
    self->writtenTypes = $tmp31;
    panda$collections$Set* $tmp33 = (panda$collections$Set*) malloc(24);
    $tmp33->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp33->refCount.value = 1;
    panda$collections$Set$init($tmp33);
    self->writtenWrappers = $tmp33;
    panda$collections$HashMap* $tmp35 = (panda$collections$HashMap*) malloc(56);
    $tmp35->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp35->refCount.value = 1;
    panda$collections$HashMap$init($tmp35);
    self->classConstants = $tmp35;
    panda$collections$IdentityMap* $tmp37 = (panda$collections$IdentityMap*) malloc(56);
    $tmp37->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp37->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp37);
    self->variableNames = $tmp37;
    panda$collections$Stack* $tmp39 = (panda$collections$Stack*) malloc(24);
    $tmp39->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp39->refCount.value = 1;
    panda$collections$Stack$init($tmp39);
    self->loopDescriptors = $tmp39;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp41 = (panda$collections$HashMap*) malloc(56);
    $tmp41->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp41->refCount.value = 1;
    panda$collections$HashMap$init($tmp41);
    self->reusedValues = $tmp41;
    panda$collections$IdentityMap* $tmp43 = (panda$collections$IdentityMap*) malloc(56);
    $tmp43->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp43->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp43);
    self->methodShims = $tmp43;
    panda$collections$Stack* $tmp45 = (panda$collections$Stack*) malloc(24);
    $tmp45->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp45->refCount.value = 1;
    panda$collections$Stack$init($tmp45);
    self->inlineContext = $tmp45;
    panda$collections$IdentityMap* $tmp47 = (panda$collections$IdentityMap*) malloc(56);
    $tmp47->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp47->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp47);
    self->currentlyInlining = $tmp47;
    panda$io$IndentedOutputStream* $tmp49 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp49->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp49->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp49, p_out);
    self->out = $tmp49;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp51 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->hCodeGen, p_s);
    return $tmp51;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp52 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->hCodeGen, p_m);
    return $tmp52;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp53 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->hCodeGen, p_t);
    return $tmp53;
}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* includePath56;
    panda$core$Bit $tmp55 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s54);
    if ($tmp55.value) {
    {
        return;
    }
    }
    panda$core$String* $tmp57 = org$pandalanguage$pandac$HCodeGenerator$getIncludePath$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self->hCodeGen, p_cl);
    includePath56 = $tmp57;
    panda$core$Bit $tmp59 = (($fn58) self->imports->$class->vtable[7])(self->imports, ((panda$collections$Key*) includePath56));
    panda$core$Bit $tmp60 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp59);
    if ($tmp60.value) {
    {
        panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s61, includePath56);
        panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
        (($fn65) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp64);
        (($fn66) self->imports->$class->vtable[2])(self->imports, ((panda$core$Object*) ((panda$collections$Key*) includePath56)));
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl69;
    panda$core$String* result78;
    panda$core$MutableString* code83;
    panda$core$String* separator99;
    panda$core$Range $tmp101;
    panda$core$Bit $tmp68 = (($fn67) p_t->$class->vtable[8])(p_t);
    if ($tmp68.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp71 = (($fn70) self->compiler->$class->vtable[13])(self->compiler, p_t);
        cl69 = $tmp71;
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl69);
    }
    }
    panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp72 = $tmp73.value;
    if ($tmp72) goto $l74;
    panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp72 = $tmp75.value;
    $l74:;
    panda$core$Bit $tmp76 = { $tmp72 };
    if ($tmp76.value) {
    {
        panda$core$Int64 $tmp77 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp77;
        panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s79, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s81);
        result78 = $tmp82;
        panda$core$MutableString* $tmp84 = (panda$core$MutableString*) malloc(40);
        $tmp84->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp84->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp84, &$s86);
        code83 = $tmp84;
        panda$core$Int64 $tmp88 = (($fn87) p_t->subtypes->$class->vtable[3])(p_t->subtypes);
        panda$core$Int64 $tmp89 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp88, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp91 = (($fn90) p_t->subtypes->$class->vtable[2])(p_t->subtypes, $tmp89);
        panda$core$String* $tmp92 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp91));
        (($fn93) code83->$class->vtable[3])(code83, $tmp92);
        (($fn95) code83->$class->vtable[3])(code83, &$s94);
        (($fn96) code83->$class->vtable[3])(code83, result78);
        (($fn98) code83->$class->vtable[3])(code83, &$s97);
        separator99 = &$s100;
        panda$core$Int64 $tmp103 = (($fn102) p_t->subtypes->$class->vtable[3])(p_t->subtypes);
        panda$core$Int64 $tmp104 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp103, ((panda$core$Int64) { 1 }));
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp101, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp104)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp106 = ((panda$core$Int64$wrapper*) $tmp101.start)->value.value;
        panda$core$Int64 i105 = { $tmp106 };
        int64_t $tmp108 = ((panda$core$Int64$wrapper*) $tmp101.end)->value.value;
        int64_t $tmp109 = $tmp101.step.value;
        bool $tmp110 = $tmp101.inclusive.value;
        bool $tmp117 = $tmp109 > 0;
        if ($tmp117) goto $l115; else goto $l116;
        $l115:;
        if ($tmp110) goto $l118; else goto $l119;
        $l118:;
        if ($tmp106 <= $tmp108) goto $l111; else goto $l113;
        $l119:;
        if ($tmp106 < $tmp108) goto $l111; else goto $l113;
        $l116:;
        if ($tmp110) goto $l120; else goto $l121;
        $l120:;
        if ($tmp106 >= $tmp108) goto $l111; else goto $l113;
        $l121:;
        if ($tmp106 > $tmp108) goto $l111; else goto $l113;
        $l111:;
        {
            (($fn123) code83->$class->vtable[3])(code83, separator99);
            panda$core$Object* $tmp125 = (($fn124) p_t->subtypes->$class->vtable[2])(p_t->subtypes, i105);
            panda$core$String* $tmp126 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp125));
            (($fn127) code83->$class->vtable[3])(code83, $tmp126);
            separator99 = &$s128;
        }
        $l114:;
        if ($tmp117) goto $l130; else goto $l131;
        $l130:;
        int64_t $tmp132 = $tmp108 - i105.value;
        if ($tmp110) goto $l133; else goto $l134;
        $l133:;
        if ($tmp132 >= $tmp109) goto $l129; else goto $l113;
        $l134:;
        if ($tmp132 > $tmp109) goto $l129; else goto $l113;
        $l131:;
        int64_t $tmp136 = i105.value - $tmp108;
        if ($tmp110) goto $l137; else goto $l138;
        $l137:;
        if ($tmp136 >= -$tmp109) goto $l129; else goto $l113;
        $l138:;
        if ($tmp136 > -$tmp109) goto $l129; else goto $l113;
        $l129:;
        i105.value += $tmp109;
        goto $l111;
        $l113:;
        (($fn141) code83->$class->vtable[3])(code83, &$s140);
        (($fn142) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code83));
        return result78;
    }
    }
    panda$core$String* $tmp143 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp143;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp144 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp144;
    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s145, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s147);
    return $tmp148;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp149 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp149;
    panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s150, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s152);
    return $tmp153;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s154, p_label);
    panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s156);
    (($fn158) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp157);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    panda$core$Int64 $match$6990159;
    {
        $match$6990159 = p_stmt->kind;
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6990159, ((panda$core$Int64) { 1000 }));
        if ($tmp160.value) {
        {
            panda$core$Int64 $tmp161 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp161, ((panda$core$Int64) { 0 }));
            if ($tmp162.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp163 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp164 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp163, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp164);
            panda$core$Bit $tmp166 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp165));
            return $tmp166;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6990159, ((panda$core$Int64) { 1006 }));
        bool $tmp168 = $tmp169.value;
        if ($tmp168) goto $l170;
        panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6990159, ((panda$core$Int64) { 1007 }));
        $tmp168 = $tmp171.value;
        $l170:;
        panda$core$Bit $tmp172 = { $tmp168 };
        bool $tmp167 = $tmp172.value;
        if ($tmp167) goto $l173;
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6990159, ((panda$core$Int64) { 1008 }));
        $tmp167 = $tmp174.value;
        $l173:;
        panda$core$Bit $tmp175 = { $tmp167 };
        if ($tmp175.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl187;
    panda$core$Int64 result198;
    panda$collections$Iterator* f$Iter199;
    org$pandalanguage$pandac$FieldDecl* f213;
    panda$core$Int64 size221;
    panda$core$Int64 align223;
    panda$core$Bit $tmp177 = (($fn176) p_t->$class->vtable[7])(p_t);
    if ($tmp177.value) {
    {
        panda$core$Bit $tmp179 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s178);
        if ($tmp179.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp181 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s180);
        if ($tmp181.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp183 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s182);
        if ($tmp183.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp184 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp186 = (($fn185) p_t->$class->vtable[4])(p_t, ((panda$core$Object*) $tmp184));
    if ($tmp186.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp189 = (($fn188) self->compiler->$class->vtable[13])(self->compiler, p_t);
    cl187 = $tmp189;
    panda$core$Bit $tmp192 = (($fn191) self->compiler->$class->vtable[9])(self->compiler, cl187);
    panda$core$Bit $tmp193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp192);
    bool $tmp190 = $tmp193.value;
    if ($tmp190) goto $l194;
    panda$core$Bit $tmp196 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl187)->name, &$s195);
    $tmp190 = $tmp196.value;
    $l194:;
    panda$core$Bit $tmp197 = { $tmp190 };
    if ($tmp197.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result198 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp201 = (($fn200) self->compiler->$class->vtable[10])(self->compiler, cl187);
        ITable* $tmp202 = ((panda$collections$Iterable*) $tmp201)->$class->itable;
        while ($tmp202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp202 = $tmp202->next;
        }
        $fn204 $tmp203 = $tmp202->methods[0];
        panda$collections$Iterator* $tmp205 = $tmp203(((panda$collections$Iterable*) $tmp201));
        f$Iter199 = $tmp205;
        $l206:;
        ITable* $tmp208 = f$Iter199->$class->itable;
        while ($tmp208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp208 = $tmp208->next;
        }
        $fn210 $tmp209 = $tmp208->methods[0];
        panda$core$Bit $tmp211 = $tmp209(f$Iter199);
        panda$core$Bit $tmp212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp211);
        if (!$tmp212.value) goto $l207;
        {
            ITable* $tmp214 = f$Iter199->$class->itable;
            while ($tmp214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp214 = $tmp214->next;
            }
            $fn216 $tmp215 = $tmp214->methods[1];
            panda$core$Object* $tmp217 = $tmp215(f$Iter199);
            f213 = ((org$pandalanguage$pandac$FieldDecl*) $tmp217);
            panda$core$Bit $tmp219 = (($fn218) f213->annotations->$class->vtable[5])(f213->annotations);
            if ($tmp219.value) {
            {
                goto $l206;
            }
            }
            (($fn220) self->compiler->$class->vtable[7])(self->compiler, f213);
            panda$core$Int64 $tmp222 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f213->type);
            size221 = $tmp222;
            panda$core$Int64 $tmp224 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result198, size221);
            align223 = $tmp224;
            panda$core$Bit $tmp225 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align223, ((panda$core$Int64) { 0 }));
            if ($tmp225.value) {
            {
                panda$core$Int64 $tmp226 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size221, align223);
                panda$core$Int64 $tmp227 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result198, $tmp226);
                result198 = $tmp227;
            }
            }
            panda$core$Int64 $tmp228 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result198, size221);
            result198 = $tmp228;
        }
        goto $l206;
        $l207:;
    }
    panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp229.value) {
    {
        panda$core$Int64 $tmp230 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result198, ((panda$core$Int64) { 1 }));
        result198 = $tmp230;
    }
    }
    return result198;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp231 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp232 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp231, ((panda$core$Int64) { 8 }));
    return $tmp232;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl233;
    panda$core$Int64 result236;
    panda$collections$Iterator* f$Iter239;
    org$pandalanguage$pandac$FieldDecl* f253;
    panda$core$Int64 size259;
    panda$core$Int64 align261;
    org$pandalanguage$pandac$ClassDecl* $tmp235 = (($fn234) self->compiler->$class->vtable[13])(self->compiler, p_t);
    cl233 = $tmp235;
    org$pandalanguage$pandac$Type* $tmp237 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp238 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp237);
    result236 = $tmp238;
    {
        panda$collections$ListView* $tmp241 = (($fn240) self->compiler->$class->vtable[10])(self->compiler, cl233);
        ITable* $tmp242 = ((panda$collections$Iterable*) $tmp241)->$class->itable;
        while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp242 = $tmp242->next;
        }
        $fn244 $tmp243 = $tmp242->methods[0];
        panda$collections$Iterator* $tmp245 = $tmp243(((panda$collections$Iterable*) $tmp241));
        f$Iter239 = $tmp245;
        $l246:;
        ITable* $tmp248 = f$Iter239->$class->itable;
        while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp248 = $tmp248->next;
        }
        $fn250 $tmp249 = $tmp248->methods[0];
        panda$core$Bit $tmp251 = $tmp249(f$Iter239);
        panda$core$Bit $tmp252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp251);
        if (!$tmp252.value) goto $l247;
        {
            ITable* $tmp254 = f$Iter239->$class->itable;
            while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp254 = $tmp254->next;
            }
            $fn256 $tmp255 = $tmp254->methods[1];
            panda$core$Object* $tmp257 = $tmp255(f$Iter239);
            f253 = ((org$pandalanguage$pandac$FieldDecl*) $tmp257);
            (($fn258) self->compiler->$class->vtable[7])(self->compiler, f253);
            panda$core$Int64 $tmp260 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f253->type);
            size259 = $tmp260;
            panda$core$Int64 $tmp262 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result236, size259);
            align261 = $tmp262;
            panda$core$Bit $tmp263 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align261, ((panda$core$Int64) { 0 }));
            if ($tmp263.value) {
            {
                panda$core$Int64 $tmp264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size259, align261);
                panda$core$Int64 $tmp265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result236, $tmp264);
                result236 = $tmp265;
            }
            }
            panda$core$Int64 $tmp266 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result236, size259);
            result236 = $tmp266;
        }
        goto $l246;
        $l247:;
    }
    panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp267.value) {
    {
        panda$core$Int64 $tmp268 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result236, ((panda$core$Int64) { 1 }));
        result236 = $tmp268;
    }
    }
    return result236;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp270 = (($fn269) self->writtenTypes->$class->vtable[7])(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp270.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp271 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp271;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp272.value) {
    {
        panda$core$Object* $tmp274 = (($fn273) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp275 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp274));
        return $tmp275;
    }
    }
    panda$core$String* $tmp277 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s276, $tmp277);
    panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp278, &$s279);
    return $tmp280;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp281 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, &$s282);
    return $tmp283;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType284;
    panda$core$MutableString* result287;
    panda$core$Range $tmp311;
    org$pandalanguage$pandac$Type* $tmp286 = (($fn285) self->compiler->$class->vtable[45])(self->compiler, p_m);
    inheritedType284 = $tmp286;
    panda$core$MutableString* $tmp288 = (panda$core$MutableString*) malloc(40);
    $tmp288->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp288->refCount.value = 1;
    panda$core$MutableString$init($tmp288);
    result287 = $tmp288;
    panda$core$Int64 $tmp291 = (($fn290) inheritedType284->subtypes->$class->vtable[3])(inheritedType284->subtypes);
    panda$core$Int64 $tmp292 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp291, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp294 = (($fn293) inheritedType284->subtypes->$class->vtable[2])(inheritedType284->subtypes, $tmp292);
    panda$core$String* $tmp295 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp294));
    (($fn296) result287->$class->vtable[3])(result287, $tmp295);
    (($fn298) result287->$class->vtable[3])(result287, &$s297);
    panda$core$String* $tmp300 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s299, $tmp300);
    panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp301, &$s302);
    (($fn304) result287->$class->vtable[3])(result287, $tmp303);
    panda$core$Bit $tmp306 = (($fn305) self->compiler->$class->vtable[9])(self->compiler, p_m->owner);
    if ($tmp306.value) {
    {
        (($fn308) result287->$class->vtable[3])(result287, &$s307);
    }
    }
    (($fn310) result287->$class->vtable[3])(result287, &$s309);
    panda$core$Int64 $tmp313 = (($fn312) inheritedType284->subtypes->$class->vtable[3])(inheritedType284->subtypes);
    panda$core$Int64 $tmp314 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp313, ((panda$core$Int64) { 1 }));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp311, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp314)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp316 = ((panda$core$Int64$wrapper*) $tmp311.start)->value.value;
    panda$core$Int64 i315 = { $tmp316 };
    int64_t $tmp318 = ((panda$core$Int64$wrapper*) $tmp311.end)->value.value;
    int64_t $tmp319 = $tmp311.step.value;
    bool $tmp320 = $tmp311.inclusive.value;
    bool $tmp327 = $tmp319 > 0;
    if ($tmp327) goto $l325; else goto $l326;
    $l325:;
    if ($tmp320) goto $l328; else goto $l329;
    $l328:;
    if ($tmp316 <= $tmp318) goto $l321; else goto $l323;
    $l329:;
    if ($tmp316 < $tmp318) goto $l321; else goto $l323;
    $l326:;
    if ($tmp320) goto $l330; else goto $l331;
    $l330:;
    if ($tmp316 >= $tmp318) goto $l321; else goto $l323;
    $l331:;
    if ($tmp316 > $tmp318) goto $l321; else goto $l323;
    $l321:;
    {
        (($fn334) result287->$class->vtable[3])(result287, &$s333);
        panda$core$Object* $tmp336 = (($fn335) inheritedType284->subtypes->$class->vtable[2])(inheritedType284->subtypes, i315);
        panda$core$String* $tmp337 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp336));
        (($fn338) result287->$class->vtable[3])(result287, $tmp337);
    }
    $l324:;
    if ($tmp327) goto $l340; else goto $l341;
    $l340:;
    int64_t $tmp342 = $tmp318 - i315.value;
    if ($tmp320) goto $l343; else goto $l344;
    $l343:;
    if ($tmp342 >= $tmp319) goto $l339; else goto $l323;
    $l344:;
    if ($tmp342 > $tmp319) goto $l339; else goto $l323;
    $l341:;
    int64_t $tmp346 = i315.value - $tmp318;
    if ($tmp320) goto $l347; else goto $l348;
    $l347:;
    if ($tmp346 >= -$tmp319) goto $l339; else goto $l323;
    $l348:;
    if ($tmp346 > -$tmp319) goto $l339; else goto $l323;
    $l339:;
    i315.value += $tmp319;
    goto $l321;
    $l323:;
    (($fn351) result287->$class->vtable[3])(result287, &$s350);
    panda$core$String* $tmp353 = (($fn352) result287->$class->vtable[0])(result287);
    return $tmp353;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Object* $tmp356 = (($fn355) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp357 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp356));
    panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s354, $tmp357);
    panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, &$s359);
    return $tmp360;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces361;
    panda$core$String* previous366;
    panda$collections$Iterator* intfType$Iter368;
    org$pandalanguage$pandac$Type* intfType380;
    org$pandalanguage$pandac$ClassDecl* intf385;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC388;
    panda$collections$ListView* methods390;
    panda$core$String* name393;
    panda$core$MutableString* result403;
    panda$core$String* separator432;
    panda$collections$Iterator* m$Iter434;
    org$pandalanguage$pandac$MethodDecl* m446;
    org$pandalanguage$pandac$Type* $tmp363 = (($fn362) p_cl->$class->vtable[3])(p_cl);
    panda$collections$Set* $tmp365 = (($fn364) self->compiler->$class->vtable[14])(self->compiler, $tmp363);
    interfaces361 = $tmp365;
    previous366 = &$s367;
    {
        ITable* $tmp369 = ((panda$collections$Iterable*) interfaces361)->$class->itable;
        while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp369 = $tmp369->next;
        }
        $fn371 $tmp370 = $tmp369->methods[0];
        panda$collections$Iterator* $tmp372 = $tmp370(((panda$collections$Iterable*) interfaces361));
        intfType$Iter368 = $tmp372;
        $l373:;
        ITable* $tmp375 = intfType$Iter368->$class->itable;
        while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp375 = $tmp375->next;
        }
        $fn377 $tmp376 = $tmp375->methods[0];
        panda$core$Bit $tmp378 = $tmp376(intfType$Iter368);
        panda$core$Bit $tmp379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp378);
        if (!$tmp379.value) goto $l374;
        {
            ITable* $tmp381 = intfType$Iter368->$class->itable;
            while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp381 = $tmp381->next;
            }
            $fn383 $tmp382 = $tmp381->methods[1];
            panda$core$Object* $tmp384 = $tmp382(intfType$Iter368);
            intfType380 = ((org$pandalanguage$pandac$Type*) $tmp384);
            org$pandalanguage$pandac$ClassDecl* $tmp387 = (($fn386) self->compiler->$class->vtable[13])(self->compiler, intfType380);
            intf385 = $tmp387;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp389 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf385);
            intfCC388 = $tmp389;
            panda$collections$ListView* $tmp392 = (($fn391) self->compiler->$class->vtable[18])(self->compiler, p_cl, intfType380);
            methods390 = $tmp392;
            panda$core$String* $tmp395 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s394, $tmp395);
            panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, &$s397);
            panda$core$String* $tmp399 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf385)->name);
            panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp398, $tmp399);
            panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp400, &$s401);
            name393 = $tmp402;
            panda$core$MutableString* $tmp404 = (panda$core$MutableString*) malloc(40);
            $tmp404->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp404->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp407 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp408 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp407);
            panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s406, $tmp408);
            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp409, &$s410);
            ITable* $tmp413 = ((panda$collections$CollectionView*) methods390)->$class->itable;
            while ($tmp413->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp413 = $tmp413->next;
            }
            $fn415 $tmp414 = $tmp413->methods[0];
            panda$core$Int64 $tmp416 = $tmp414(((panda$collections$CollectionView*) methods390));
            panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s412, ((panda$core$Object*) wrap_panda$core$Int64($tmp416)));
            panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s418);
            panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, name393);
            panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp420, &$s421);
            panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, $tmp422);
            panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s424, intfCC388->name);
            panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s426);
            panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp427, previous366);
            panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s429);
            panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, $tmp430);
            panda$core$MutableString$init$panda$core$String($tmp404, $tmp431);
            result403 = $tmp404;
            separator432 = &$s433;
            {
                ITable* $tmp435 = ((panda$collections$Iterable*) methods390)->$class->itable;
                while ($tmp435->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp435 = $tmp435->next;
                }
                $fn437 $tmp436 = $tmp435->methods[0];
                panda$collections$Iterator* $tmp438 = $tmp436(((panda$collections$Iterable*) methods390));
                m$Iter434 = $tmp438;
                $l439:;
                ITable* $tmp441 = m$Iter434->$class->itable;
                while ($tmp441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp441 = $tmp441->next;
                }
                $fn443 $tmp442 = $tmp441->methods[0];
                panda$core$Bit $tmp444 = $tmp442(m$Iter434);
                panda$core$Bit $tmp445 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp444);
                if (!$tmp445.value) goto $l440;
                {
                    ITable* $tmp447 = m$Iter434->$class->itable;
                    while ($tmp447->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp447 = $tmp447->next;
                    }
                    $fn449 $tmp448 = $tmp447->methods[1];
                    panda$core$Object* $tmp450 = $tmp448(m$Iter434);
                    m446 = ((org$pandalanguage$pandac$MethodDecl*) $tmp450);
                    (($fn451) result403->$class->vtable[3])(result403, separator432);
                    separator432 = &$s452;
                    panda$core$Bit $tmp454 = (($fn453) m446->annotations->$class->vtable[10])(m446->annotations);
                    if ($tmp454.value) {
                    {
                        (($fn456) result403->$class->vtable[3])(result403, &$s455);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp457 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m446);
                        (($fn458) result403->$class->vtable[3])(result403, $tmp457);
                    }
                    }
                }
                goto $l439;
                $l440:;
            }
            (($fn460) result403->$class->vtable[3])(result403, &$s459);
            (($fn461) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result403));
            panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s462, name393);
            panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp463, &$s464);
            previous366 = $tmp465;
        }
        goto $l373;
        $l374:;
    }
    return previous366;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer466;
    panda$io$IndentedOutputStream* out469;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found472;
    org$pandalanguage$pandac$Type* effectiveReturnType475;
    panda$core$String* resultName481;
    panda$core$MutableString* resultType485;
    panda$core$String* self_t497;
    panda$core$Range $tmp507;
    panda$core$String* pType527;
    panda$collections$Array* casts558;
    panda$core$Range $tmp561;
    panda$core$String* p581;
    panda$core$Range $tmp621;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result673;
    panda$io$MemoryOutputStream* $tmp467 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp467->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp467->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp467);
    outBuffer466 = $tmp467;
    panda$io$IndentedOutputStream* $tmp470 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp470->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp470->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp470, ((panda$io$OutputStream*) outBuffer466));
    out469 = $tmp470;
    panda$core$Object* $tmp474 = (($fn473) self->methodShims->$class->vtable[3])(self->methodShims, ((panda$core$Object*) p_raw));
    found472 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp474);
    if (((panda$core$Bit) { found472 != NULL }).value) {
    {
        return found472;
    }
    }
    panda$core$Int64 $tmp477 = (($fn476) p_effective->subtypes->$class->vtable[3])(p_effective->subtypes);
    panda$core$Int64 $tmp478 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp477, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp480 = (($fn479) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, $tmp478);
    effectiveReturnType475 = ((org$pandalanguage$pandac$Type*) $tmp480);
    panda$core$String* $tmp482 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s483);
    resultName481 = $tmp484;
    panda$core$MutableString* $tmp486 = (panda$core$MutableString*) malloc(40);
    $tmp486->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp486->refCount.value = 1;
    panda$core$String* $tmp488 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType475);
    panda$core$MutableString$init$panda$core$String($tmp486, $tmp488);
    resultType485 = $tmp486;
    panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s489, ((panda$core$Object*) resultType485));
    panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s491);
    panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, resultName481);
    panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s494);
    (($fn496) ((panda$io$OutputStream*) out469)->$class->vtable[16])(((panda$io$OutputStream*) out469), $tmp495);
    panda$core$String* $tmp498 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t497 = $tmp498;
    panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s499, self_t497);
    panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp500, &$s501);
    (($fn503) ((panda$io$OutputStream*) out469)->$class->vtable[16])(((panda$io$OutputStream*) out469), $tmp502);
    (($fn505) resultType485->$class->vtable[3])(resultType485, &$s504);
    (($fn506) resultType485->$class->vtable[3])(resultType485, self_t497);
    panda$core$Int64 $tmp508 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp507, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp508)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp510 = ((panda$core$Int64$wrapper*) $tmp507.start)->value.value;
    panda$core$Int64 i509 = { $tmp510 };
    int64_t $tmp512 = ((panda$core$Int64$wrapper*) $tmp507.end)->value.value;
    int64_t $tmp513 = $tmp507.step.value;
    bool $tmp514 = $tmp507.inclusive.value;
    bool $tmp521 = $tmp513 > 0;
    if ($tmp521) goto $l519; else goto $l520;
    $l519:;
    if ($tmp514) goto $l522; else goto $l523;
    $l522:;
    if ($tmp510 <= $tmp512) goto $l515; else goto $l517;
    $l523:;
    if ($tmp510 < $tmp512) goto $l515; else goto $l517;
    $l520:;
    if ($tmp514) goto $l524; else goto $l525;
    $l524:;
    if ($tmp510 >= $tmp512) goto $l515; else goto $l517;
    $l525:;
    if ($tmp510 > $tmp512) goto $l515; else goto $l517;
    $l515:;
    {
        panda$core$Object* $tmp529 = (($fn528) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i509);
        panda$core$String* $tmp530 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp529));
        pType527 = $tmp530;
        (($fn532) resultType485->$class->vtable[3])(resultType485, &$s531);
        (($fn533) resultType485->$class->vtable[3])(resultType485, pType527);
        panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s534, pType527);
        panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp535, &$s536);
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp537, ((panda$core$Object*) wrap_panda$core$Int64(i509)));
        panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
        (($fn541) ((panda$io$OutputStream*) out469)->$class->vtable[16])(((panda$io$OutputStream*) out469), $tmp540);
    }
    $l518:;
    if ($tmp521) goto $l543; else goto $l544;
    $l543:;
    int64_t $tmp545 = $tmp512 - i509.value;
    if ($tmp514) goto $l546; else goto $l547;
    $l546:;
    if ($tmp545 >= $tmp513) goto $l542; else goto $l517;
    $l547:;
    if ($tmp545 > $tmp513) goto $l542; else goto $l517;
    $l544:;
    int64_t $tmp549 = i509.value - $tmp512;
    if ($tmp514) goto $l550; else goto $l551;
    $l550:;
    if ($tmp549 >= -$tmp513) goto $l542; else goto $l517;
    $l551:;
    if ($tmp549 > -$tmp513) goto $l542; else goto $l517;
    $l542:;
    i509.value += $tmp513;
    goto $l515;
    $l517:;
    (($fn554) ((panda$io$OutputStream*) out469)->$class->vtable[19])(((panda$io$OutputStream*) out469), &$s553);
    panda$core$Int64 $tmp555 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out469->level, ((panda$core$Int64) { 1 }));
    out469->level = $tmp555;
    (($fn557) resultType485->$class->vtable[3])(resultType485, &$s556);
    panda$collections$Array* $tmp559 = (panda$collections$Array*) malloc(40);
    $tmp559->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp559->refCount.value = 1;
    panda$collections$Array$init($tmp559);
    casts558 = $tmp559;
    panda$core$Int64 $tmp562 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp561, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp562)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp564 = ((panda$core$Int64$wrapper*) $tmp561.start)->value.value;
    panda$core$Int64 i563 = { $tmp564 };
    int64_t $tmp566 = ((panda$core$Int64$wrapper*) $tmp561.end)->value.value;
    int64_t $tmp567 = $tmp561.step.value;
    bool $tmp568 = $tmp561.inclusive.value;
    bool $tmp575 = $tmp567 > 0;
    if ($tmp575) goto $l573; else goto $l574;
    $l573:;
    if ($tmp568) goto $l576; else goto $l577;
    $l576:;
    if ($tmp564 <= $tmp566) goto $l569; else goto $l571;
    $l577:;
    if ($tmp564 < $tmp566) goto $l569; else goto $l571;
    $l574:;
    if ($tmp568) goto $l578; else goto $l579;
    $l578:;
    if ($tmp564 >= $tmp566) goto $l569; else goto $l571;
    $l579:;
    if ($tmp564 > $tmp566) goto $l569; else goto $l571;
    $l569:;
    {
        panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s582, ((panda$core$Object*) wrap_panda$core$Int64(i563)));
        panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s584);
        p581 = $tmp585;
        panda$core$Object* $tmp586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i563);
        panda$core$Object* $tmp588 = (($fn587) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i563);
        panda$core$Bit $tmp590 = (($fn589) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp586)->type->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp586)->type, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp588)));
        if ($tmp590.value) {
        {
            panda$core$Object* $tmp592 = (($fn591) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i563);
            panda$core$Object* $tmp593 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i563);
            panda$core$String* $tmp594 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p581, ((org$pandalanguage$pandac$Type*) $tmp592), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp593)->type, out469);
            panda$collections$Array$add$panda$collections$Array$T(casts558, ((panda$core$Object*) $tmp594));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts558, ((panda$core$Object*) p581));
        }
        }
    }
    $l572:;
    if ($tmp575) goto $l596; else goto $l597;
    $l596:;
    int64_t $tmp598 = $tmp566 - i563.value;
    if ($tmp568) goto $l599; else goto $l600;
    $l599:;
    if ($tmp598 >= $tmp567) goto $l595; else goto $l571;
    $l600:;
    if ($tmp598 > $tmp567) goto $l595; else goto $l571;
    $l597:;
    int64_t $tmp602 = i563.value - $tmp566;
    if ($tmp568) goto $l603; else goto $l604;
    $l603:;
    if ($tmp602 >= -$tmp567) goto $l595; else goto $l571;
    $l604:;
    if ($tmp602 > -$tmp567) goto $l595; else goto $l571;
    $l595:;
    i563.value += $tmp567;
    goto $l569;
    $l571:;
    org$pandalanguage$pandac$Type* $tmp606 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp608 = (($fn607) p_raw->returnType->$class->vtable[5])(p_raw->returnType, ((panda$core$Object*) $tmp606));
    if ($tmp608.value) {
    {
        panda$core$String* $tmp610 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s609, $tmp610);
        panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, &$s612);
        (($fn614) ((panda$io$OutputStream*) out469)->$class->vtable[16])(((panda$io$OutputStream*) out469), $tmp613);
    }
    }
    panda$core$String* $tmp616 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s615, $tmp616);
    panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, &$s618);
    (($fn620) ((panda$io$OutputStream*) out469)->$class->vtable[16])(((panda$io$OutputStream*) out469), $tmp619);
    panda$core$Int64 $tmp622 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp621, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp622)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp624 = ((panda$core$Int64$wrapper*) $tmp621.start)->value.value;
    panda$core$Int64 i623 = { $tmp624 };
    int64_t $tmp626 = ((panda$core$Int64$wrapper*) $tmp621.end)->value.value;
    int64_t $tmp627 = $tmp621.step.value;
    bool $tmp628 = $tmp621.inclusive.value;
    bool $tmp635 = $tmp627 > 0;
    if ($tmp635) goto $l633; else goto $l634;
    $l633:;
    if ($tmp628) goto $l636; else goto $l637;
    $l636:;
    if ($tmp624 <= $tmp626) goto $l629; else goto $l631;
    $l637:;
    if ($tmp624 < $tmp626) goto $l629; else goto $l631;
    $l634:;
    if ($tmp628) goto $l638; else goto $l639;
    $l638:;
    if ($tmp624 >= $tmp626) goto $l629; else goto $l631;
    $l639:;
    if ($tmp624 > $tmp626) goto $l629; else goto $l631;
    $l629:;
    {
        panda$core$Object* $tmp642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts558, i623);
        panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s641, ((panda$core$String*) $tmp642));
        panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp643, &$s644);
        (($fn646) ((panda$io$OutputStream*) out469)->$class->vtable[16])(((panda$io$OutputStream*) out469), $tmp645);
    }
    $l632:;
    if ($tmp635) goto $l648; else goto $l649;
    $l648:;
    int64_t $tmp650 = $tmp626 - i623.value;
    if ($tmp628) goto $l651; else goto $l652;
    $l651:;
    if ($tmp650 >= $tmp627) goto $l647; else goto $l631;
    $l652:;
    if ($tmp650 > $tmp627) goto $l647; else goto $l631;
    $l649:;
    int64_t $tmp654 = i623.value - $tmp626;
    if ($tmp628) goto $l655; else goto $l656;
    $l655:;
    if ($tmp654 >= -$tmp627) goto $l647; else goto $l631;
    $l656:;
    if ($tmp654 > -$tmp627) goto $l647; else goto $l631;
    $l647:;
    i623.value += $tmp627;
    goto $l629;
    $l631:;
    (($fn659) ((panda$io$OutputStream*) out469)->$class->vtable[19])(((panda$io$OutputStream*) out469), &$s658);
    org$pandalanguage$pandac$Type* $tmp660 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp662 = (($fn661) p_raw->returnType->$class->vtable[5])(p_raw->returnType, ((panda$core$Object*) $tmp660));
    if ($tmp662.value) {
    {
        panda$core$String* $tmp665 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s664, p_raw->returnType, effectiveReturnType475, out469);
        panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s663, $tmp665);
        panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp666, &$s667);
        (($fn669) ((panda$io$OutputStream*) out469)->$class->vtable[19])(((panda$io$OutputStream*) out469), $tmp668);
    }
    }
    panda$core$Int64 $tmp670 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out469->level, ((panda$core$Int64) { 1 }));
    out469->level = $tmp670;
    (($fn672) ((panda$io$OutputStream*) out469)->$class->vtable[19])(((panda$io$OutputStream*) out469), &$s671);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp674 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp674->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp674->refCount.value = 1;
    panda$core$String* $tmp677 = (($fn676) resultType485->$class->vtable[0])(resultType485);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp674, resultName481, $tmp677);
    result673 = $tmp674;
    (($fn678) self->methodShims->$class->vtable[5])(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result673));
    (($fn679) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer466));
    return result673;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod680;
    panda$core$String* result681;
    panda$core$String* selfType687;
    org$pandalanguage$pandac$Type* actualMethodType705;
    org$pandalanguage$pandac$Type* inheritedMethodType708;
    panda$core$Range $tmp711;
    panda$collections$Array* parameters757;
    panda$core$Range $tmp760;
    panda$collections$Array* children797;
    panda$core$Range $tmp814;
    oldMethod680 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp683 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s682, $tmp683);
    panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp684, &$s685);
    result681 = $tmp686;
    panda$core$String* $tmp689 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s688, $tmp689);
    panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, &$s691);
    selfType687 = $tmp692;
    panda$core$String* $tmp694 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s693, $tmp694);
    panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp695, &$s696);
    panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp697, result681);
    panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp698, &$s699);
    panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, selfType687);
    panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s702);
    (($fn704) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp703);
    org$pandalanguage$pandac$Type* $tmp707 = (($fn706) self->compiler->$class->vtable[43])(self->compiler, p_m);
    actualMethodType705 = $tmp707;
    org$pandalanguage$pandac$Type* $tmp710 = (($fn709) self->compiler->$class->vtable[45])(self->compiler, p_m);
    inheritedMethodType708 = $tmp710;
    panda$core$Int64 $tmp712 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp711, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp712)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp714 = ((panda$core$Int64$wrapper*) $tmp711.start)->value.value;
    panda$core$Int64 i713 = { $tmp714 };
    int64_t $tmp716 = ((panda$core$Int64$wrapper*) $tmp711.end)->value.value;
    int64_t $tmp717 = $tmp711.step.value;
    bool $tmp718 = $tmp711.inclusive.value;
    bool $tmp725 = $tmp717 > 0;
    if ($tmp725) goto $l723; else goto $l724;
    $l723:;
    if ($tmp718) goto $l726; else goto $l727;
    $l726:;
    if ($tmp714 <= $tmp716) goto $l719; else goto $l721;
    $l727:;
    if ($tmp714 < $tmp716) goto $l719; else goto $l721;
    $l724:;
    if ($tmp718) goto $l728; else goto $l729;
    $l728:;
    if ($tmp714 >= $tmp716) goto $l719; else goto $l721;
    $l729:;
    if ($tmp714 > $tmp716) goto $l719; else goto $l721;
    $l719:;
    {
        panda$core$Object* $tmp733 = (($fn732) inheritedMethodType708->subtypes->$class->vtable[2])(inheritedMethodType708->subtypes, i713);
        panda$core$String* $tmp734 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp733));
        panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s731, $tmp734);
        panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s736);
        panda$core$Object* $tmp738 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i713);
        panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp738)->name);
        panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, &$s740);
        (($fn742) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp741);
    }
    $l722:;
    if ($tmp725) goto $l744; else goto $l745;
    $l744:;
    int64_t $tmp746 = $tmp716 - i713.value;
    if ($tmp718) goto $l747; else goto $l748;
    $l747:;
    if ($tmp746 >= $tmp717) goto $l743; else goto $l721;
    $l748:;
    if ($tmp746 > $tmp717) goto $l743; else goto $l721;
    $l745:;
    int64_t $tmp750 = i713.value - $tmp716;
    if ($tmp718) goto $l751; else goto $l752;
    $l751:;
    if ($tmp750 >= -$tmp717) goto $l743; else goto $l721;
    $l752:;
    if ($tmp750 > -$tmp717) goto $l743; else goto $l721;
    $l743:;
    i713.value += $tmp717;
    goto $l719;
    $l721:;
    (($fn755) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s754);
    panda$core$Int64 $tmp756 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp756;
    panda$collections$Array* $tmp758 = (panda$collections$Array*) malloc(40);
    $tmp758->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp758->refCount.value = 1;
    panda$collections$Array$init($tmp758);
    parameters757 = $tmp758;
    panda$core$Int64 $tmp761 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp760, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp761)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp763 = ((panda$core$Int64$wrapper*) $tmp760.start)->value.value;
    panda$core$Int64 i762 = { $tmp763 };
    int64_t $tmp765 = ((panda$core$Int64$wrapper*) $tmp760.end)->value.value;
    int64_t $tmp766 = $tmp760.step.value;
    bool $tmp767 = $tmp760.inclusive.value;
    bool $tmp774 = $tmp766 > 0;
    if ($tmp774) goto $l772; else goto $l773;
    $l772:;
    if ($tmp767) goto $l775; else goto $l776;
    $l775:;
    if ($tmp763 <= $tmp765) goto $l768; else goto $l770;
    $l776:;
    if ($tmp763 < $tmp765) goto $l768; else goto $l770;
    $l773:;
    if ($tmp767) goto $l777; else goto $l778;
    $l777:;
    if ($tmp763 >= $tmp765) goto $l768; else goto $l770;
    $l778:;
    if ($tmp763 > $tmp765) goto $l768; else goto $l770;
    $l768:;
    {
        panda$core$Object* $tmp780 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i762);
        panda$core$Object* $tmp782 = (($fn781) inheritedMethodType708->subtypes->$class->vtable[2])(inheritedMethodType708->subtypes, i762);
        panda$core$Object* $tmp784 = (($fn783) actualMethodType705->subtypes->$class->vtable[2])(actualMethodType705->subtypes, i762);
        panda$core$String* $tmp785 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp780)->name, ((org$pandalanguage$pandac$Type*) $tmp782), ((org$pandalanguage$pandac$Type*) $tmp784), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters757, ((panda$core$Object*) $tmp785));
    }
    $l771:;
    if ($tmp774) goto $l787; else goto $l788;
    $l787:;
    int64_t $tmp789 = $tmp765 - i762.value;
    if ($tmp767) goto $l790; else goto $l791;
    $l790:;
    if ($tmp789 >= $tmp766) goto $l786; else goto $l770;
    $l791:;
    if ($tmp789 > $tmp766) goto $l786; else goto $l770;
    $l788:;
    int64_t $tmp793 = i762.value - $tmp765;
    if ($tmp767) goto $l794; else goto $l795;
    $l794:;
    if ($tmp793 >= -$tmp766) goto $l786; else goto $l770;
    $l795:;
    if ($tmp793 > -$tmp766) goto $l786; else goto $l770;
    $l786:;
    i762.value += $tmp766;
    goto $l768;
    $l770:;
    panda$collections$Array* $tmp798 = (panda$collections$Array*) malloc(40);
    $tmp798->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp798->refCount.value = 1;
    panda$collections$Array$init($tmp798);
    children797 = $tmp798;
    org$pandalanguage$pandac$IRNode* $tmp800 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp800->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp800->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp802 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp800, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp802);
    panda$collections$Array$add$panda$collections$Array$T(children797, ((panda$core$Object*) $tmp800));
    org$pandalanguage$pandac$Type* $tmp803 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp805 = (($fn804) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp803));
    if ($tmp805.value) {
    {
        (($fn807) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s806);
    }
    }
    panda$core$String* $tmp809 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s808, $tmp809);
    panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, &$s811);
    (($fn813) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp812);
    panda$core$Int64 $tmp815 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp814, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp815)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp817 = ((panda$core$Int64$wrapper*) $tmp814.start)->value.value;
    panda$core$Int64 i816 = { $tmp817 };
    int64_t $tmp819 = ((panda$core$Int64$wrapper*) $tmp814.end)->value.value;
    int64_t $tmp820 = $tmp814.step.value;
    bool $tmp821 = $tmp814.inclusive.value;
    bool $tmp828 = $tmp820 > 0;
    if ($tmp828) goto $l826; else goto $l827;
    $l826:;
    if ($tmp821) goto $l829; else goto $l830;
    $l829:;
    if ($tmp817 <= $tmp819) goto $l822; else goto $l824;
    $l830:;
    if ($tmp817 < $tmp819) goto $l822; else goto $l824;
    $l827:;
    if ($tmp821) goto $l831; else goto $l832;
    $l831:;
    if ($tmp817 >= $tmp819) goto $l822; else goto $l824;
    $l832:;
    if ($tmp817 > $tmp819) goto $l822; else goto $l824;
    $l822:;
    {
        panda$core$Object* $tmp835 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters757, i816);
        panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s834, ((panda$core$String*) $tmp835));
        panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp836, &$s837);
        (($fn839) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp838);
    }
    $l825:;
    if ($tmp828) goto $l841; else goto $l842;
    $l841:;
    int64_t $tmp843 = $tmp819 - i816.value;
    if ($tmp821) goto $l844; else goto $l845;
    $l844:;
    if ($tmp843 >= $tmp820) goto $l840; else goto $l824;
    $l845:;
    if ($tmp843 > $tmp820) goto $l840; else goto $l824;
    $l842:;
    int64_t $tmp847 = i816.value - $tmp819;
    if ($tmp821) goto $l848; else goto $l849;
    $l848:;
    if ($tmp847 >= -$tmp820) goto $l840; else goto $l824;
    $l849:;
    if ($tmp847 > -$tmp820) goto $l840; else goto $l824;
    $l840:;
    i816.value += $tmp820;
    goto $l822;
    $l824:;
    (($fn852) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s851);
    panda$core$Int64 $tmp853 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp853;
    (($fn855) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s854);
    self->currentMethod = oldMethod680;
    return result681;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces856;
    panda$core$String* previous861;
    panda$collections$Iterator* intfType$Iter863;
    org$pandalanguage$pandac$Type* intfType875;
    org$pandalanguage$pandac$ClassDecl* intf880;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC883;
    panda$collections$ListView* methods885;
    panda$core$String* name888;
    panda$core$MutableString* result898;
    panda$core$String* separator932;
    panda$collections$Iterator* m$Iter934;
    org$pandalanguage$pandac$MethodDecl* m946;
    org$pandalanguage$pandac$Type* $tmp858 = (($fn857) p_cl->$class->vtable[3])(p_cl);
    panda$collections$Set* $tmp860 = (($fn859) self->compiler->$class->vtable[14])(self->compiler, $tmp858);
    interfaces856 = $tmp860;
    previous861 = &$s862;
    {
        ITable* $tmp864 = ((panda$collections$Iterable*) interfaces856)->$class->itable;
        while ($tmp864->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp864 = $tmp864->next;
        }
        $fn866 $tmp865 = $tmp864->methods[0];
        panda$collections$Iterator* $tmp867 = $tmp865(((panda$collections$Iterable*) interfaces856));
        intfType$Iter863 = $tmp867;
        $l868:;
        ITable* $tmp870 = intfType$Iter863->$class->itable;
        while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp870 = $tmp870->next;
        }
        $fn872 $tmp871 = $tmp870->methods[0];
        panda$core$Bit $tmp873 = $tmp871(intfType$Iter863);
        panda$core$Bit $tmp874 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp873);
        if (!$tmp874.value) goto $l869;
        {
            ITable* $tmp876 = intfType$Iter863->$class->itable;
            while ($tmp876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp876 = $tmp876->next;
            }
            $fn878 $tmp877 = $tmp876->methods[1];
            panda$core$Object* $tmp879 = $tmp877(intfType$Iter863);
            intfType875 = ((org$pandalanguage$pandac$Type*) $tmp879);
            org$pandalanguage$pandac$ClassDecl* $tmp882 = (($fn881) self->compiler->$class->vtable[13])(self->compiler, intfType875);
            intf880 = $tmp882;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp884 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf880);
            intfCC883 = $tmp884;
            panda$collections$ListView* $tmp887 = (($fn886) self->compiler->$class->vtable[18])(self->compiler, p_cl, intfType875);
            methods885 = $tmp887;
            panda$core$String* $tmp890 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s889, $tmp890);
            panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, &$s892);
            panda$core$String* $tmp894 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf880)->name);
            panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, $tmp894);
            panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp895, &$s896);
            name888 = $tmp897;
            panda$core$MutableString* $tmp899 = (panda$core$MutableString*) malloc(40);
            $tmp899->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp899->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp902 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp903 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp902);
            panda$core$String* $tmp904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s901, $tmp903);
            panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp904, &$s905);
            ITable* $tmp908 = ((panda$collections$CollectionView*) methods885)->$class->itable;
            while ($tmp908->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp908 = $tmp908->next;
            }
            $fn910 $tmp909 = $tmp908->methods[0];
            panda$core$Int64 $tmp911 = $tmp909(((panda$collections$CollectionView*) methods885));
            panda$core$String* $tmp912 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s907, ((panda$core$Object*) wrap_panda$core$Int64($tmp911)));
            panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp912, &$s913);
            panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp914, name888);
            panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp915, &$s916);
            panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, $tmp917);
            org$pandalanguage$pandac$Type* $tmp920 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp921 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp920);
            panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s919, $tmp921);
            panda$core$String* $tmp924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp922, &$s923);
            panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp924, intfCC883->name);
            panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp925, &$s926);
            panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, previous861);
            panda$core$String* $tmp930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp928, &$s929);
            panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, $tmp930);
            panda$core$MutableString$init$panda$core$String($tmp899, $tmp931);
            result898 = $tmp899;
            separator932 = &$s933;
            {
                ITable* $tmp935 = ((panda$collections$Iterable*) methods885)->$class->itable;
                while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp935 = $tmp935->next;
                }
                $fn937 $tmp936 = $tmp935->methods[0];
                panda$collections$Iterator* $tmp938 = $tmp936(((panda$collections$Iterable*) methods885));
                m$Iter934 = $tmp938;
                $l939:;
                ITable* $tmp941 = m$Iter934->$class->itable;
                while ($tmp941->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp941 = $tmp941->next;
                }
                $fn943 $tmp942 = $tmp941->methods[0];
                panda$core$Bit $tmp944 = $tmp942(m$Iter934);
                panda$core$Bit $tmp945 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp944);
                if (!$tmp945.value) goto $l940;
                {
                    ITable* $tmp947 = m$Iter934->$class->itable;
                    while ($tmp947->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp947 = $tmp947->next;
                    }
                    $fn949 $tmp948 = $tmp947->methods[1];
                    panda$core$Object* $tmp950 = $tmp948(m$Iter934);
                    m946 = ((org$pandalanguage$pandac$MethodDecl*) $tmp950);
                    (($fn951) result898->$class->vtable[3])(result898, separator932);
                    separator932 = &$s952;
                    panda$core$Bit $tmp954 = (($fn953) m946->annotations->$class->vtable[10])(m946->annotations);
                    if ($tmp954.value) {
                    {
                        (($fn956) result898->$class->vtable[3])(result898, &$s955);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp957 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m946, self->wrapperShims);
                        (($fn958) result898->$class->vtable[3])(result898, $tmp957);
                    }
                    }
                }
                goto $l939;
                $l940:;
            }
            (($fn960) result898->$class->vtable[3])(result898, &$s959);
            (($fn961) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result898));
            panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s962, name888);
            panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, &$s964);
            previous861 = $tmp965;
        }
        goto $l868;
        $l869:;
    }
    return previous861;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp966 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp966;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result968;
    org$pandalanguage$pandac$Type* declared969;
    org$pandalanguage$pandac$Type* inherited974;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim979;
    (($fn967) self->compiler->$class->vtable[6])(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp971 = (($fn970) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp973 = (($fn972) self->compiler->$class->vtable[44])(self->compiler, p_m, $tmp971);
    declared969 = $tmp973;
    org$pandalanguage$pandac$Type* $tmp976 = (($fn975) self->compiler->$class->vtable[46])(self->compiler, p_m);
    inherited974 = $tmp976;
    panda$core$Bit $tmp978 = (($fn977) declared969->$class->vtable[5])(declared969, ((panda$core$Object*) inherited974));
    if ($tmp978.value) {
    {
        org$pandalanguage$pandac$Type* $tmp981 = (($fn980) self->compiler->$class->vtable[45])(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp982 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp981, ((panda$io$OutputStream*) self->shims));
        shim979 = $tmp982;
        result968 = shim979->name;
    }
    }
    else {
    {
        panda$core$String* $tmp983 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result968 = $tmp983;
    }
    }
    return result968;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result984;
    panda$core$String* type988;
    panda$collections$ListView* vtable1003;
    panda$core$String* superPtr1017;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1018;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1027;
    panda$core$MutableString* code1032;
    panda$core$String* separator1054;
    panda$collections$Iterator* m$Iter1056;
    org$pandalanguage$pandac$MethodDecl* m1068;
    panda$core$Object* $tmp986 = (($fn985) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)));
    result984 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp986);
    if (((panda$core$Bit) { result984 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        (($fn987) self->compiler->$class->vtable[5])(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp989 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp989->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp989->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp993 = (($fn992) p_cl->$class->vtable[3])(p_cl);
            panda$core$String* $tmp994 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp993)->name);
            panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s991, $tmp994);
            panda$core$String* $tmp997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp995, &$s996);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp989, $tmp997, &$s998);
            result984 = $tmp989;
            (($fn999) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)), ((panda$core$Object*) result984));
            panda$core$Object* $tmp1001 = (($fn1000) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1001);
        }
        }
        (($fn1002) self->compiler->currentClass->$class->vtable[2])(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp1005 = (($fn1004) self->compiler->$class->vtable[20])(self->compiler, p_cl);
        vtable1003 = $tmp1005;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1006 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp1006->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp1006->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1010 = (($fn1009) p_cl->$class->vtable[3])(p_cl);
        panda$core$String* $tmp1011 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1010)->name);
        panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1008, $tmp1011);
        panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1012, &$s1013);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1006, $tmp1014, &$s1015);
        result984 = $tmp1006;
        (($fn1016) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)), ((panda$core$Object*) result984));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1020 = (($fn1019) self->compiler->$class->vtable[13])(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1021 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1020);
            superCC1018 = $tmp1021;
            panda$core$String* $tmp1023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1022, superCC1018->name);
            panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1023, &$s1024);
            superPtr1017 = $tmp1025;
        }
        }
        else {
        {
            superPtr1017 = &$s1026;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1028 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1030 = (($fn1029) self->compiler->$class->vtable[13])(self->compiler, $tmp1028);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1031 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1030);
        clConstant1027 = $tmp1031;
        panda$core$MutableString* $tmp1033 = (panda$core$MutableString*) malloc(40);
        $tmp1033->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1033->refCount.value = 1;
        panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1035, result984->name);
        panda$core$String* $tmp1038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1036, &$s1037);
        panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1038, result984->name);
        panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, &$s1040);
        panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1042, clConstant1027->name);
        panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, &$s1044);
        panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1045, superPtr1017);
        panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
        panda$core$String* $tmp1049 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, $tmp1049);
        panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, &$s1051);
        panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, $tmp1052);
        panda$core$MutableString$init$panda$core$String($tmp1033, $tmp1053);
        code1032 = $tmp1033;
        separator1054 = &$s1055;
        {
            ITable* $tmp1057 = ((panda$collections$Iterable*) vtable1003)->$class->itable;
            while ($tmp1057->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1057 = $tmp1057->next;
            }
            $fn1059 $tmp1058 = $tmp1057->methods[0];
            panda$collections$Iterator* $tmp1060 = $tmp1058(((panda$collections$Iterable*) vtable1003));
            m$Iter1056 = $tmp1060;
            $l1061:;
            ITable* $tmp1063 = m$Iter1056->$class->itable;
            while ($tmp1063->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1063 = $tmp1063->next;
            }
            $fn1065 $tmp1064 = $tmp1063->methods[0];
            panda$core$Bit $tmp1066 = $tmp1064(m$Iter1056);
            panda$core$Bit $tmp1067 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1066);
            if (!$tmp1067.value) goto $l1062;
            {
                ITable* $tmp1069 = m$Iter1056->$class->itable;
                while ($tmp1069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1069 = $tmp1069->next;
                }
                $fn1071 $tmp1070 = $tmp1069->methods[1];
                panda$core$Object* $tmp1072 = $tmp1070(m$Iter1056);
                m1068 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1072);
                (($fn1073) code1032->$class->vtable[3])(code1032, separator1054);
                panda$core$Bit $tmp1075 = (($fn1074) m1068->annotations->$class->vtable[10])(m1068->annotations);
                if ($tmp1075.value) {
                {
                    (($fn1077) code1032->$class->vtable[3])(code1032, &$s1076);
                }
                }
                else {
                {
                    panda$core$String* $tmp1078 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1068);
                    (($fn1079) code1032->$class->vtable[3])(code1032, $tmp1078);
                }
                }
                separator1054 = &$s1080;
            }
            goto $l1061;
            $l1062:;
        }
        (($fn1082) code1032->$class->vtable[3])(code1032, &$s1081);
        (($fn1083) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1032));
        (($fn1084) self->compiler->currentClass->$class->vtable[3])(self->compiler->currentClass);
    }
    }
    return result984;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1085;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result1091;
    panda$core$String* type1095;
    org$pandalanguage$pandac$ClassDecl* value1107;
    panda$collections$ListView* valueVTable1111;
    panda$collections$ListView* vtable1122;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1125;
    panda$core$String* superCast1129;
    panda$core$String* itable1134;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1136;
    panda$core$MutableString* code1141;
    panda$core$String* separator1162;
    panda$core$Range $tmp1164;
    org$pandalanguage$pandac$MethodDecl* m1187;
    panda$core$String* methodName1192;
    panda$core$String* $tmp1087 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1086, $tmp1087);
    panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1089);
    name1085 = $tmp1090;
    panda$core$Object* $tmp1093 = (($fn1092) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) name1085)));
    result1091 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1093);
    if (((panda$core$Bit) { result1091 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1094 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1094);
            type1095 = &$s1096;
            panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1097, name1085);
            panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
            panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, type1095);
            panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, &$s1102);
            (($fn1104) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1103);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1105 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1105->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1105->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1105, name1085, type1095);
            result1091 = $tmp1105;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1108 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1110 = (($fn1109) self->compiler->$class->vtable[13])(self->compiler, $tmp1108);
            value1107 = $tmp1110;
            panda$collections$ListView* $tmp1113 = (($fn1112) self->compiler->$class->vtable[20])(self->compiler, value1107);
            valueVTable1111 = $tmp1113;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1114 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1114->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1114->refCount.value = 1;
            panda$core$String* $tmp1117 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1116, $tmp1117);
            panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1118, &$s1119);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1114, $tmp1120, &$s1121);
            result1091 = $tmp1114;
            panda$collections$ListView* $tmp1124 = (($fn1123) self->compiler->$class->vtable[20])(self->compiler, p_cl);
            vtable1122 = $tmp1124;
            org$pandalanguage$pandac$ClassDecl* $tmp1127 = (($fn1126) self->compiler->$class->vtable[13])(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1128 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1127);
            superCC1125 = $tmp1128;
            panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1130, superCC1125->name);
            panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1131, &$s1132);
            superCast1129 = $tmp1133;
            panda$core$String* $tmp1135 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1134 = $tmp1135;
            org$pandalanguage$pandac$Type* $tmp1137 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1139 = (($fn1138) self->compiler->$class->vtable[13])(self->compiler, $tmp1137);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1140 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1139);
            clConstant1136 = $tmp1140;
            panda$core$MutableString* $tmp1142 = (panda$core$MutableString*) malloc(40);
            $tmp1142->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1142->refCount.value = 1;
            panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1144, result1091->name);
            panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1146);
            panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1147, result1091->name);
            panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1149);
            panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1151, clConstant1136->name);
            panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1153);
            panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, superCast1129);
            panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, &$s1156);
            panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1157, itable1134);
            panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1158, &$s1159);
            panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1150, $tmp1160);
            panda$core$MutableString$init$panda$core$String($tmp1142, $tmp1161);
            code1141 = $tmp1142;
            separator1162 = &$s1163;
            ITable* $tmp1165 = ((panda$collections$CollectionView*) valueVTable1111)->$class->itable;
            while ($tmp1165->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1165 = $tmp1165->next;
            }
            $fn1167 $tmp1166 = $tmp1165->methods[0];
            panda$core$Int64 $tmp1168 = $tmp1166(((panda$collections$CollectionView*) valueVTable1111));
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1164, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1168)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1170 = ((panda$core$Int64$wrapper*) $tmp1164.start)->value.value;
            panda$core$Int64 i1169 = { $tmp1170 };
            int64_t $tmp1172 = ((panda$core$Int64$wrapper*) $tmp1164.end)->value.value;
            int64_t $tmp1173 = $tmp1164.step.value;
            bool $tmp1174 = $tmp1164.inclusive.value;
            bool $tmp1181 = $tmp1173 > 0;
            if ($tmp1181) goto $l1179; else goto $l1180;
            $l1179:;
            if ($tmp1174) goto $l1182; else goto $l1183;
            $l1182:;
            if ($tmp1170 <= $tmp1172) goto $l1175; else goto $l1177;
            $l1183:;
            if ($tmp1170 < $tmp1172) goto $l1175; else goto $l1177;
            $l1180:;
            if ($tmp1174) goto $l1184; else goto $l1185;
            $l1184:;
            if ($tmp1170 >= $tmp1172) goto $l1175; else goto $l1177;
            $l1185:;
            if ($tmp1170 > $tmp1172) goto $l1175; else goto $l1177;
            $l1175:;
            {
                ITable* $tmp1188 = vtable1122->$class->itable;
                while ($tmp1188->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1188 = $tmp1188->next;
                }
                $fn1190 $tmp1189 = $tmp1188->methods[0];
                panda$core$Object* $tmp1191 = $tmp1189(vtable1122, i1169);
                m1187 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1191);
                if (((panda$core$Bit) { ((panda$core$Object*) m1187->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1193 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1187, self->wrapperShims);
                    methodName1192 = $tmp1193;
                }
                }
                else {
                {
                    panda$core$String* $tmp1194 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1187);
                    methodName1192 = $tmp1194;
                    if (m1187->owner->external.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1187);
                    }
                    }
                }
                }
                panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1195, separator1162);
                panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1196, &$s1197);
                panda$core$String* $tmp1199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1198, methodName1192);
                panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1199, &$s1200);
                (($fn1202) code1141->$class->vtable[3])(code1141, $tmp1201);
                separator1162 = &$s1203;
            }
            $l1178:;
            if ($tmp1181) goto $l1205; else goto $l1206;
            $l1205:;
            int64_t $tmp1207 = $tmp1172 - i1169.value;
            if ($tmp1174) goto $l1208; else goto $l1209;
            $l1208:;
            if ($tmp1207 >= $tmp1173) goto $l1204; else goto $l1177;
            $l1209:;
            if ($tmp1207 > $tmp1173) goto $l1204; else goto $l1177;
            $l1206:;
            int64_t $tmp1211 = i1169.value - $tmp1172;
            if ($tmp1174) goto $l1212; else goto $l1213;
            $l1212:;
            if ($tmp1211 >= -$tmp1173) goto $l1204; else goto $l1177;
            $l1213:;
            if ($tmp1211 > -$tmp1173) goto $l1204; else goto $l1177;
            $l1204:;
            i1169.value += $tmp1173;
            goto $l1175;
            $l1177:;
            (($fn1216) code1141->$class->vtable[3])(code1141, &$s1215);
            (($fn1217) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1141));
        }
        }
        (($fn1218) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) name1085)), ((panda$core$Object*) result1091));
    }
    }
    return result1091;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1224;
    panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1219.value) {
    {
        panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1220, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1221, &$s1222);
        return $tmp1223;
    }
    }
    panda$core$Object* $tmp1226 = (($fn1225) self->variableNames->$class->vtable[3])(self->variableNames, ((panda$core$Object*) p_v));
    result1224 = ((panda$core$String*) $tmp1226);
    if (((panda$core$Bit) { result1224 == NULL }).value) {
    {
        panda$core$Int64 $tmp1227 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1227;
        panda$core$String* $tmp1229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1228, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1229, &$s1230);
        panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1231, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, &$s1233);
        result1224 = $tmp1234;
        (($fn1235) self->variableNames->$class->vtable[5])(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1224));
    }
    }
    return result1224;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $tmp1237 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1236, $tmp1237);
    panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1238, &$s1239);
    panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1240, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, &$s1242);
    return $tmp1243;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$219091244;
    {
        $match$219091244 = p_t->typeKind;
        panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219091244, ((panda$core$Int64) { 12 }));
        if ($tmp1245.value) {
        {
            return ((panda$core$Int64) { 10121 });
        }
        }
        else {
        panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219091244, ((panda$core$Int64) { 13 }));
        bool $tmp1246 = $tmp1247.value;
        if ($tmp1246) goto $l1248;
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219091244, ((panda$core$Int64) { 19 }));
        $tmp1246 = $tmp1249.value;
        $l1248:;
        panda$core$Bit $tmp1250 = { $tmp1246 };
        if ($tmp1250.value) {
        {
            return ((panda$core$Int64) { 10122 });
        }
        }
        else {
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219091244, ((panda$core$Int64) { 20 }));
        if ($tmp1251.value) {
        {
            return ((panda$core$Int64) { 10123 });
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1252;
    panda$core$String* leftRef1254;
    panda$core$String* falseLabel1269;
    panda$core$String* rightRef1279;
    panda$core$String* $tmp1253 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1252 = $tmp1253;
    panda$core$String* $tmp1255 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1254 = $tmp1255;
    org$pandalanguage$pandac$Type* $tmp1256 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1258 = (($fn1257) p_left->type->$class->vtable[4])(p_left->type, ((panda$core$Object*) $tmp1256));
    if ($tmp1258.value) {
    {
        panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1254, &$s1259);
        leftRef1254 = $tmp1260;
    }
    }
    panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1261, result1252);
    panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1262, &$s1263);
    panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1264, leftRef1254);
    panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1265, &$s1266);
    (($fn1268) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1267);
    panda$core$String* $tmp1270 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1269 = $tmp1270;
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1271, result1252);
    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, falseLabel1269);
    panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
    (($fn1278) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1277);
    panda$core$String* $tmp1280 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1279 = $tmp1280;
    org$pandalanguage$pandac$Type* $tmp1281 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1283 = (($fn1282) p_right->type->$class->vtable[4])(p_right->type, ((panda$core$Object*) $tmp1281));
    if ($tmp1283.value) {
    {
        panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1279, &$s1284);
        rightRef1279 = $tmp1285;
    }
    }
    panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1286, result1252);
    panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1287, &$s1288);
    panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1289, rightRef1279);
    panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1290, &$s1291);
    (($fn1293) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1292);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1269, p_out);
    return result1252;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1294;
    panda$core$String* leftRef1296;
    panda$core$String* trueLabel1311;
    panda$core$String* rightRef1321;
    panda$core$String* $tmp1295 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1294 = $tmp1295;
    panda$core$String* $tmp1297 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1296 = $tmp1297;
    org$pandalanguage$pandac$Type* $tmp1298 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1300 = (($fn1299) p_left->type->$class->vtable[4])(p_left->type, ((panda$core$Object*) $tmp1298));
    if ($tmp1300.value) {
    {
        panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1296, &$s1301);
        leftRef1296 = $tmp1302;
    }
    }
    panda$core$String* $tmp1304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1303, result1294);
    panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1304, &$s1305);
    panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1306, leftRef1296);
    panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1307, &$s1308);
    (($fn1310) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1309);
    panda$core$String* $tmp1312 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1311 = $tmp1312;
    panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1313, result1294);
    panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1314, &$s1315);
    panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, trueLabel1311);
    panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, &$s1318);
    (($fn1320) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1319);
    panda$core$String* $tmp1322 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1321 = $tmp1322;
    org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1325 = (($fn1324) p_right->type->$class->vtable[4])(p_right->type, ((panda$core$Object*) $tmp1323));
    if ($tmp1325.value) {
    {
        panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1321, &$s1326);
        rightRef1321 = $tmp1327;
    }
    }
    panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1328, result1294);
    panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1330);
    panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, rightRef1321);
    panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1333);
    (($fn1335) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1334);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1311, p_out);
    return result1294;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1336;
    panda$core$Bit logical1337;
    panda$core$Int64 $match$237771338;
    panda$core$String* result1377;
    logical1337 = ((panda$core$Bit) { false });
    {
        $match$237771338 = p_op;
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 51 }));
        if ($tmp1339.value) {
        {
            cOp1336 = &$s1340;
        }
        }
        else {
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 52 }));
        if ($tmp1341.value) {
        {
            cOp1336 = &$s1342;
        }
        }
        else {
        panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 53 }));
        if ($tmp1343.value) {
        {
            cOp1336 = &$s1344;
        }
        }
        else {
        panda$core$Bit $tmp1345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 55 }));
        if ($tmp1345.value) {
        {
            cOp1336 = &$s1346;
        }
        }
        else {
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 54 }));
        if ($tmp1347.value) {
        {
            cOp1336 = &$s1348;
        }
        }
        else {
        panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 56 }));
        if ($tmp1349.value) {
        {
            cOp1336 = &$s1350;
        }
        }
        else {
        panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 72 }));
        if ($tmp1351.value) {
        {
            cOp1336 = &$s1352;
        }
        }
        else {
        panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 1 }));
        if ($tmp1353.value) {
        {
            cOp1336 = &$s1354;
        }
        }
        else {
        panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 67 }));
        if ($tmp1355.value) {
        {
            cOp1336 = &$s1356;
        }
        }
        else {
        panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 69 }));
        if ($tmp1357.value) {
        {
            cOp1336 = &$s1358;
        }
        }
        else {
        panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 70 }));
        bool $tmp1359 = $tmp1360.value;
        if ($tmp1359) goto $l1361;
        panda$core$Bit $tmp1362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 71 }));
        $tmp1359 = $tmp1362.value;
        $l1361:;
        panda$core$Bit $tmp1363 = { $tmp1359 };
        if ($tmp1363.value) {
        {
            cOp1336 = &$s1364;
        }
        }
        else {
        panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 58 }));
        if ($tmp1365.value) {
        {
            cOp1336 = &$s1366;
            logical1337 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 59 }));
        if ($tmp1367.value) {
        {
            cOp1336 = &$s1368;
            logical1337 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 63 }));
        if ($tmp1369.value) {
        {
            cOp1336 = &$s1370;
            logical1337 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 62 }));
        if ($tmp1371.value) {
        {
            cOp1336 = &$s1372;
            logical1337 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 65 }));
        if ($tmp1373.value) {
        {
            cOp1336 = &$s1374;
            logical1337 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$237771338, ((panda$core$Int64) { 64 }));
        if ($tmp1375.value) {
        {
            logical1337 = ((panda$core$Bit) { true });
            cOp1336 = &$s1376;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$String* $tmp1378 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1377 = $tmp1378;
    if (logical1337.value) {
    {
        (($fn1380) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1379);
    }
    }
    else {
    {
        panda$core$String* $tmp1382 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1381, $tmp1382);
        panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, &$s1384);
        (($fn1386) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1385);
    }
    }
    panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1387, result1377);
    panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, &$s1389);
    panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, p_leftRef);
    panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1392);
    panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, cOp1336);
    panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1395);
    panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, p_rightRef);
    panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1398);
    (($fn1400) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1399);
    return result1377;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1401;
    panda$core$String* rightRef1403;
    panda$core$String* $tmp1402 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1401 = $tmp1402;
    panda$core$String* $tmp1404 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1403 = $tmp1404;
    panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1405, leftRef1401);
    panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, &$s1407);
    panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, rightRef1403);
    panda$core$String* $tmp1411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, &$s1410);
    return $tmp1411;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1412;
    panda$core$String* rightRef1414;
    panda$core$String* $tmp1413 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1412 = $tmp1413;
    panda$core$String* $tmp1415 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1414 = $tmp1415;
    panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1416, leftRef1412);
    panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1418);
    panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, rightRef1414);
    panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1421);
    return $tmp1422;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$260461423;
    panda$core$String* leftRef1432;
    panda$core$String* rightRef1434;
    {
        $match$260461423 = p_op;
        panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$260461423, ((panda$core$Int64) { 66 }));
        if ($tmp1424.value) {
        {
            panda$core$String* $tmp1425 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1425;
        }
        }
        else {
        panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$260461423, ((panda$core$Int64) { 68 }));
        if ($tmp1426.value) {
        {
            panda$core$String* $tmp1427 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1427;
        }
        }
        else {
        panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$260461423, ((panda$core$Int64) { 60 }));
        if ($tmp1428.value) {
        {
            panda$core$String* $tmp1429 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1429;
        }
        }
        else {
        panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$260461423, ((panda$core$Int64) { 61 }));
        if ($tmp1430.value) {
        {
            panda$core$String* $tmp1431 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1431;
        }
        }
        else {
        {
            panda$core$String* $tmp1433 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1432 = $tmp1433;
            panda$core$String* $tmp1435 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1434 = $tmp1435;
            panda$core$Int64 $tmp1436 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1437 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1436, p_left->type, leftRef1432, p_op, rightRef1434, p_out);
            return $tmp1437;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp1438 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1439 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1440 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1438), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1439), p_out);
    return $tmp1440;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1441;
    panda$core$Int64 index1443;
    panda$collections$ListView* vtable1444;
    panda$core$Range $tmp1447;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1442 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1441 = $tmp1442;
    index1443 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1446 = (($fn1445) self->compiler->$class->vtable[20])(self->compiler, p_m->owner);
    vtable1444 = $tmp1446;
    ITable* $tmp1448 = ((panda$collections$CollectionView*) vtable1444)->$class->itable;
    while ($tmp1448->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1448 = $tmp1448->next;
    }
    $fn1450 $tmp1449 = $tmp1448->methods[0];
    panda$core$Int64 $tmp1451 = $tmp1449(((panda$collections$CollectionView*) vtable1444));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1447, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1451)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1453 = ((panda$core$Int64$wrapper*) $tmp1447.start)->value.value;
    panda$core$Int64 i1452 = { $tmp1453 };
    int64_t $tmp1455 = ((panda$core$Int64$wrapper*) $tmp1447.end)->value.value;
    int64_t $tmp1456 = $tmp1447.step.value;
    bool $tmp1457 = $tmp1447.inclusive.value;
    bool $tmp1464 = $tmp1456 > 0;
    if ($tmp1464) goto $l1462; else goto $l1463;
    $l1462:;
    if ($tmp1457) goto $l1465; else goto $l1466;
    $l1465:;
    if ($tmp1453 <= $tmp1455) goto $l1458; else goto $l1460;
    $l1466:;
    if ($tmp1453 < $tmp1455) goto $l1458; else goto $l1460;
    $l1463:;
    if ($tmp1457) goto $l1467; else goto $l1468;
    $l1467:;
    if ($tmp1453 >= $tmp1455) goto $l1458; else goto $l1460;
    $l1468:;
    if ($tmp1453 > $tmp1455) goto $l1458; else goto $l1460;
    $l1458:;
    {
        ITable* $tmp1470 = vtable1444->$class->itable;
        while ($tmp1470->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1470 = $tmp1470->next;
        }
        $fn1472 $tmp1471 = $tmp1470->methods[0];
        panda$core$Object* $tmp1473 = $tmp1471(vtable1444, i1452);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1473)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1443 = i1452;
            goto $l1460;
        }
        }
    }
    $l1461:;
    if ($tmp1464) goto $l1475; else goto $l1476;
    $l1475:;
    int64_t $tmp1477 = $tmp1455 - i1452.value;
    if ($tmp1457) goto $l1478; else goto $l1479;
    $l1478:;
    if ($tmp1477 >= $tmp1456) goto $l1474; else goto $l1460;
    $l1479:;
    if ($tmp1477 > $tmp1456) goto $l1474; else goto $l1460;
    $l1476:;
    int64_t $tmp1481 = i1452.value - $tmp1455;
    if ($tmp1457) goto $l1482; else goto $l1483;
    $l1482:;
    if ($tmp1481 >= -$tmp1456) goto $l1474; else goto $l1460;
    $l1483:;
    if ($tmp1481 > -$tmp1456) goto $l1474; else goto $l1460;
    $l1474:;
    i1452.value += $tmp1456;
    goto $l1458;
    $l1460:;
    org$pandalanguage$pandac$Type* $tmp1487 = (($fn1486) self->compiler->$class->vtable[46])(self->compiler, p_m);
    panda$core$String* $tmp1488 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1487);
    panda$core$String* $tmp1489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1485, $tmp1488);
    panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1489, &$s1490);
    panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, p_target);
    panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1493);
    panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1494, ((panda$core$Object*) wrap_panda$core$Int64(index1443)));
    panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
    return $tmp1497;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1498;
    panda$core$String* itable1500;
    panda$core$Int64 index1530;
    panda$collections$ListView* vtable1531;
    panda$core$Range $tmp1534;
    panda$core$String* result1582;
    panda$core$String* methodType1584;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1499 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1498 = $tmp1499;
    panda$core$String* $tmp1501 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1500 = $tmp1501;
    panda$core$String* $tmp1503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1502, itable1500);
    panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, &$s1504);
    panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, p_target);
    panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1506, &$s1507);
    (($fn1509) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1508);
    panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1510, itable1500);
    panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1512);
    panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, cc1498->name);
    panda$core$String* $tmp1516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1514, &$s1515);
    (($fn1517) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1516);
    panda$core$Int64 $tmp1518 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1518;
    panda$core$String* $tmp1520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1519, itable1500);
    panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1520, &$s1521);
    panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, itable1500);
    panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, &$s1524);
    (($fn1526) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1525);
    panda$core$Int64 $tmp1527 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1527;
    (($fn1529) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1528);
    index1530 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1533 = (($fn1532) self->compiler->$class->vtable[20])(self->compiler, p_m->owner);
    vtable1531 = $tmp1533;
    ITable* $tmp1535 = ((panda$collections$CollectionView*) vtable1531)->$class->itable;
    while ($tmp1535->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1535 = $tmp1535->next;
    }
    $fn1537 $tmp1536 = $tmp1535->methods[0];
    panda$core$Int64 $tmp1538 = $tmp1536(((panda$collections$CollectionView*) vtable1531));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1534, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1538)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1540 = ((panda$core$Int64$wrapper*) $tmp1534.start)->value.value;
    panda$core$Int64 i1539 = { $tmp1540 };
    int64_t $tmp1542 = ((panda$core$Int64$wrapper*) $tmp1534.end)->value.value;
    int64_t $tmp1543 = $tmp1534.step.value;
    bool $tmp1544 = $tmp1534.inclusive.value;
    bool $tmp1551 = $tmp1543 > 0;
    if ($tmp1551) goto $l1549; else goto $l1550;
    $l1549:;
    if ($tmp1544) goto $l1552; else goto $l1553;
    $l1552:;
    if ($tmp1540 <= $tmp1542) goto $l1545; else goto $l1547;
    $l1553:;
    if ($tmp1540 < $tmp1542) goto $l1545; else goto $l1547;
    $l1550:;
    if ($tmp1544) goto $l1554; else goto $l1555;
    $l1554:;
    if ($tmp1540 >= $tmp1542) goto $l1545; else goto $l1547;
    $l1555:;
    if ($tmp1540 > $tmp1542) goto $l1545; else goto $l1547;
    $l1545:;
    {
        ITable* $tmp1557 = vtable1531->$class->itable;
        while ($tmp1557->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1557 = $tmp1557->next;
        }
        $fn1559 $tmp1558 = $tmp1557->methods[0];
        panda$core$Object* $tmp1560 = $tmp1558(vtable1531, i1539);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1560)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1530 = i1539;
            goto $l1547;
        }
        }
    }
    $l1548:;
    if ($tmp1551) goto $l1562; else goto $l1563;
    $l1562:;
    int64_t $tmp1564 = $tmp1542 - i1539.value;
    if ($tmp1544) goto $l1565; else goto $l1566;
    $l1565:;
    if ($tmp1564 >= $tmp1543) goto $l1561; else goto $l1547;
    $l1566:;
    if ($tmp1564 > $tmp1543) goto $l1561; else goto $l1547;
    $l1563:;
    int64_t $tmp1568 = i1539.value - $tmp1542;
    if ($tmp1544) goto $l1569; else goto $l1570;
    $l1569:;
    if ($tmp1568 >= -$tmp1543) goto $l1561; else goto $l1547;
    $l1570:;
    if ($tmp1568 > -$tmp1543) goto $l1561; else goto $l1547;
    $l1561:;
    i1539.value += $tmp1543;
    goto $l1545;
    $l1547:;
    org$pandalanguage$pandac$Type* $tmp1572 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1574 = (($fn1573) self->compiler->$class->vtable[13])(self->compiler, $tmp1572);
    panda$collections$ListView* $tmp1576 = (($fn1575) self->compiler->$class->vtable[20])(self->compiler, $tmp1574);
    ITable* $tmp1577 = ((panda$collections$CollectionView*) $tmp1576)->$class->itable;
    while ($tmp1577->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1577 = $tmp1577->next;
    }
    $fn1579 $tmp1578 = $tmp1577->methods[0];
    panda$core$Int64 $tmp1580 = $tmp1578(((panda$collections$CollectionView*) $tmp1576));
    panda$core$Int64 $tmp1581 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1530, $tmp1580);
    index1530 = $tmp1581;
    panda$core$String* $tmp1583 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1582 = $tmp1583;
    org$pandalanguage$pandac$Type* $tmp1586 = (($fn1585) self->compiler->$class->vtable[46])(self->compiler, p_m);
    panda$core$String* $tmp1587 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1586);
    methodType1584 = $tmp1587;
    panda$core$String* $tmp1589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1588, methodType1584);
    panda$core$String* $tmp1591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1589, &$s1590);
    panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1591, result1582);
    panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1592, &$s1593);
    panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, itable1500);
    panda$core$String* $tmp1597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1595, &$s1596);
    panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1597, ((panda$core$Object*) wrap_panda$core$Int64(index1530)));
    panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1598, &$s1599);
    (($fn1601) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1600);
    return result1582;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1603 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1602 = $tmp1603.value;
    if (!$tmp1602) goto $l1604;
    panda$core$Bit $tmp1606 = (($fn1605) p_m->$class->vtable[3])(p_m);
    $tmp1602 = $tmp1606.value;
    $l1604:;
    panda$core$Bit $tmp1607 = { $tmp1602 };
    if ($tmp1607.value) {
    {
        panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1608.value) {
        {
            panda$core$String* $tmp1609 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1609;
        }
        }
        else {
        {
            panda$core$String* $tmp1610 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1610;
        }
        }
    }
    }
    else {
    {
        if (p_m->owner->external.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1611 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1611;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1612;
    panda$core$String* $match$292611613;
    panda$core$String* count1616;
    panda$core$Int64 elementSize1619;
    panda$core$String* ptr1638;
    panda$core$String* ptr1647;
    panda$core$String* index1650;
    panda$core$String* ptr1662;
    panda$core$String* count1665;
    panda$core$Int64 elementSize1668;
    m1612 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$292611613 = ((org$pandalanguage$pandac$Symbol*) m1612->value)->name;
        panda$core$Bit $tmp1615 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$292611613, &$s1614);
        if ($tmp1615.value) {
        {
            panda$core$Object* $tmp1617 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1618 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1617), p_out);
            count1616 = $tmp1618;
            org$pandalanguage$pandac$Type* $tmp1621 = (($fn1620) m1612->$class->vtable[5])(m1612);
            panda$core$Object* $tmp1623 = (($fn1622) $tmp1621->subtypes->$class->vtable[2])($tmp1621->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1624 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1623));
            elementSize1619 = $tmp1624;
            panda$core$String* $tmp1626 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1625, $tmp1626);
            panda$core$String* $tmp1629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1627, &$s1628);
            panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1629, count1616);
            panda$core$String* $tmp1632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, &$s1631);
            panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1632, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1619)));
            panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, &$s1634);
            return $tmp1635;
        }
        }
        else {
        panda$core$Bit $tmp1637 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$292611613, &$s1636);
        if ($tmp1637.value) {
        {
            panda$core$Object* $tmp1639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1640 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1639), p_out);
            ptr1638 = $tmp1640;
            panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1641, ptr1638);
            panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1642, &$s1643);
            return $tmp1644;
        }
        }
        else {
        panda$core$Bit $tmp1646 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$292611613, &$s1645);
        if ($tmp1646.value) {
        {
            panda$core$Object* $tmp1648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1649 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1648), p_out);
            ptr1647 = $tmp1649;
            panda$core$Object* $tmp1651 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1652 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1651), p_out);
            index1650 = $tmp1652;
            panda$core$String* $tmp1654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1653, ptr1647);
            panda$core$String* $tmp1656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1654, &$s1655);
            panda$core$String* $tmp1657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1656, index1650);
            panda$core$String* $tmp1659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1657, &$s1658);
            return $tmp1659;
        }
        }
        else {
        panda$core$Bit $tmp1661 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$292611613, &$s1660);
        if ($tmp1661.value) {
        {
            panda$core$Object* $tmp1663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1664 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1663), p_out);
            ptr1662 = $tmp1664;
            panda$core$Object* $tmp1666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1667 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1666), p_out);
            count1665 = $tmp1667;
            org$pandalanguage$pandac$Type* $tmp1670 = (($fn1669) m1612->$class->vtable[5])(m1612);
            panda$core$Object* $tmp1672 = (($fn1671) $tmp1670->subtypes->$class->vtable[2])($tmp1670->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1673 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1672));
            elementSize1668 = $tmp1673;
            panda$core$String* $tmp1675 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1674, $tmp1675);
            panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1677);
            panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, ptr1662);
            panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, &$s1680);
            panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, count1665);
            panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, &$s1683);
            panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1684, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1668)));
            panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1686);
            return $tmp1687;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m1688;
    panda$core$String* bit1696;
    panda$core$String* result1700;
    panda$core$String* bit1712;
    panda$core$String* result1716;
    panda$collections$Array* args1726;
    org$pandalanguage$pandac$Type* actualMethodType1730;
    panda$core$String* actualResultType1731;
    panda$core$Bit isSuper1732;
    panda$core$Int64 offset1757;
    panda$core$Range $tmp1763;
    panda$core$String* arg1783;
    panda$core$String* target1812;
    panda$core$String* methodRef1816;
    panda$core$Bit indirect1818;
    panda$core$String* result1820;
    panda$core$String* separator1822;
    panda$core$String* indirectVar1824;
    panda$collections$Iterator* arg$Iter1853;
    panda$core$String* arg1865;
    m1688 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1690 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1688->owner)->name, &$s1689);
    if ($tmp1690.value) {
    {
        panda$core$String* $tmp1691 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1691;
    }
    }
    if (m1688->owner->external.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1688);
    }
    }
    panda$core$Bit $tmp1693 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1688->owner)->name, &$s1692);
    if ($tmp1693.value) {
    {
        panda$core$Bit $tmp1695 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1688)->name, &$s1694);
        if ($tmp1695.value) {
        {
            panda$core$Object* $tmp1697 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1698 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1699 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1697), ((org$pandalanguage$pandac$IRNode*) $tmp1698), p_out);
            bit1696 = $tmp1699;
            panda$core$String* $tmp1701 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1700 = $tmp1701;
            panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1702, result1700);
            panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, &$s1704);
            panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, bit1696);
            panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
            (($fn1709) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1708);
            return result1700;
        }
        }
        panda$core$Bit $tmp1711 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1688)->name, &$s1710);
        if ($tmp1711.value) {
        {
            panda$core$Object* $tmp1713 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1714 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1715 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1713), ((org$pandalanguage$pandac$IRNode*) $tmp1714), p_out);
            bit1712 = $tmp1715;
            panda$core$String* $tmp1717 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1716 = $tmp1717;
            panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1718, result1716);
            panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1720);
            panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, bit1712);
            panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1722, &$s1723);
            (($fn1725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1724);
            return result1716;
        }
        }
    }
    }
    panda$collections$Array* $tmp1727 = (panda$collections$Array*) malloc(40);
    $tmp1727->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1727->refCount.value = 1;
    panda$core$Int64 $tmp1729 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1727, $tmp1729);
    args1726 = $tmp1727;
    panda$core$Int64 $tmp1734 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1735 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1734, ((panda$core$Int64) { 1 }));
    bool $tmp1733 = $tmp1735.value;
    if (!$tmp1733) goto $l1736;
    panda$core$Object* $tmp1737 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1737)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1733 = $tmp1738.value;
    $l1736:;
    panda$core$Bit $tmp1739 = { $tmp1733 };
    isSuper1732 = $tmp1739;
    panda$core$Bit $tmp1741 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1732);
    bool $tmp1740 = $tmp1741.value;
    if (!$tmp1740) goto $l1742;
    panda$core$Bit $tmp1744 = (($fn1743) m1688->$class->vtable[3])(m1688);
    $tmp1740 = $tmp1744.value;
    $l1742:;
    panda$core$Bit $tmp1745 = { $tmp1740 };
    if ($tmp1745.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1747 = (($fn1746) self->compiler->$class->vtable[45])(self->compiler, m1688);
        actualMethodType1730 = $tmp1747;
        panda$core$Int64 $tmp1749 = (($fn1748) actualMethodType1730->subtypes->$class->vtable[3])(actualMethodType1730->subtypes);
        panda$core$Int64 $tmp1750 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1749, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1752 = (($fn1751) actualMethodType1730->subtypes->$class->vtable[2])(actualMethodType1730->subtypes, $tmp1750);
        panda$core$String* $tmp1753 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1752));
        actualResultType1731 = $tmp1753;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1755 = (($fn1754) self->compiler->$class->vtable[43])(self->compiler, m1688);
        actualMethodType1730 = $tmp1755;
        panda$core$String* $tmp1756 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1731 = $tmp1756;
    }
    }
    panda$core$Int64 $tmp1758 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1760 = (($fn1759) actualMethodType1730->subtypes->$class->vtable[3])(actualMethodType1730->subtypes);
    panda$core$Int64 $tmp1761 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1758, $tmp1760);
    panda$core$Int64 $tmp1762 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1761, ((panda$core$Int64) { 1 }));
    offset1757 = $tmp1762;
    panda$core$Int64 $tmp1764 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1763, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1764)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1766 = ((panda$core$Int64$wrapper*) $tmp1763.start)->value.value;
    panda$core$Int64 i1765 = { $tmp1766 };
    int64_t $tmp1768 = ((panda$core$Int64$wrapper*) $tmp1763.end)->value.value;
    int64_t $tmp1769 = $tmp1763.step.value;
    bool $tmp1770 = $tmp1763.inclusive.value;
    bool $tmp1777 = $tmp1769 > 0;
    if ($tmp1777) goto $l1775; else goto $l1776;
    $l1775:;
    if ($tmp1770) goto $l1778; else goto $l1779;
    $l1778:;
    if ($tmp1766 <= $tmp1768) goto $l1771; else goto $l1773;
    $l1779:;
    if ($tmp1766 < $tmp1768) goto $l1771; else goto $l1773;
    $l1776:;
    if ($tmp1770) goto $l1780; else goto $l1781;
    $l1780:;
    if ($tmp1766 >= $tmp1768) goto $l1771; else goto $l1773;
    $l1781:;
    if ($tmp1766 > $tmp1768) goto $l1771; else goto $l1773;
    $l1771:;
    {
        panda$core$Object* $tmp1784 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1765);
        panda$core$String* $tmp1785 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1784), p_out);
        arg1783 = $tmp1785;
        panda$core$Bit $tmp1787 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1765, offset1757);
        bool $tmp1786 = $tmp1787.value;
        if (!$tmp1786) goto $l1788;
        panda$core$Int64 $tmp1789 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1765, offset1757);
        panda$core$Object* $tmp1791 = (($fn1790) actualMethodType1730->subtypes->$class->vtable[2])(actualMethodType1730->subtypes, $tmp1789);
        panda$core$Object* $tmp1792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1765);
        panda$core$Bit $tmp1794 = (($fn1793) ((org$pandalanguage$pandac$Type*) $tmp1791)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp1791), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1792)->type));
        $tmp1786 = $tmp1794.value;
        $l1788:;
        panda$core$Bit $tmp1795 = { $tmp1786 };
        if ($tmp1795.value) {
        {
            panda$core$Object* $tmp1796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1765);
            panda$core$Int64 $tmp1797 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1765, offset1757);
            panda$core$Object* $tmp1799 = (($fn1798) actualMethodType1730->subtypes->$class->vtable[2])(actualMethodType1730->subtypes, $tmp1797);
            panda$core$String* $tmp1800 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1783, ((org$pandalanguage$pandac$IRNode*) $tmp1796)->type, ((org$pandalanguage$pandac$Type*) $tmp1799), p_out);
            arg1783 = $tmp1800;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1726, ((panda$core$Object*) arg1783));
    }
    $l1774:;
    if ($tmp1777) goto $l1802; else goto $l1803;
    $l1802:;
    int64_t $tmp1804 = $tmp1768 - i1765.value;
    if ($tmp1770) goto $l1805; else goto $l1806;
    $l1805:;
    if ($tmp1804 >= $tmp1769) goto $l1801; else goto $l1773;
    $l1806:;
    if ($tmp1804 > $tmp1769) goto $l1801; else goto $l1773;
    $l1803:;
    int64_t $tmp1808 = i1765.value - $tmp1768;
    if ($tmp1770) goto $l1809; else goto $l1810;
    $l1809:;
    if ($tmp1808 >= -$tmp1769) goto $l1801; else goto $l1773;
    $l1810:;
    if ($tmp1808 > -$tmp1769) goto $l1801; else goto $l1773;
    $l1801:;
    i1765.value += $tmp1769;
    goto $l1771;
    $l1773:;
    panda$core$Int64 $tmp1813 = panda$collections$Array$get_count$R$panda$core$Int64(args1726);
    panda$core$Bit $tmp1814 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1813, ((panda$core$Int64) { 0 }));
    if ($tmp1814.value) {
    {
        panda$core$Object* $tmp1815 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1726, ((panda$core$Int64) { 0 }));
        target1812 = ((panda$core$String*) $tmp1815);
    }
    }
    else {
    {
        target1812 = NULL;
    }
    }
    panda$core$String* $tmp1817 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1812, m1688, isSuper1732, p_out);
    methodRef1816 = $tmp1817;
    panda$core$Bit $tmp1819 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1688);
    indirect1818 = $tmp1819;
    panda$core$String* $tmp1821 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1820 = $tmp1821;
    separator1822 = &$s1823;
    if (indirect1818.value) {
    {
        panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1825, actualResultType1731);
        panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, &$s1827);
        panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, result1820);
        panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, &$s1830);
        (($fn1832) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1831);
        panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1833, methodRef1816);
        panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1834, &$s1835);
        panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, result1820);
        panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, &$s1838);
        (($fn1840) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1839);
        separator1822 = &$s1841;
    }
    }
    else {
    {
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1842, actualResultType1731);
        panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, &$s1844);
        panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, result1820);
        panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1846, &$s1847);
        panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, methodRef1816);
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
        (($fn1852) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1851);
    }
    }
    {
        ITable* $tmp1854 = ((panda$collections$Iterable*) args1726)->$class->itable;
        while ($tmp1854->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1854 = $tmp1854->next;
        }
        $fn1856 $tmp1855 = $tmp1854->methods[0];
        panda$collections$Iterator* $tmp1857 = $tmp1855(((panda$collections$Iterable*) args1726));
        arg$Iter1853 = $tmp1857;
        $l1858:;
        ITable* $tmp1860 = arg$Iter1853->$class->itable;
        while ($tmp1860->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1860 = $tmp1860->next;
        }
        $fn1862 $tmp1861 = $tmp1860->methods[0];
        panda$core$Bit $tmp1863 = $tmp1861(arg$Iter1853);
        panda$core$Bit $tmp1864 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1863);
        if (!$tmp1864.value) goto $l1859;
        {
            ITable* $tmp1866 = arg$Iter1853->$class->itable;
            while ($tmp1866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1866 = $tmp1866->next;
            }
            $fn1868 $tmp1867 = $tmp1866->methods[1];
            panda$core$Object* $tmp1869 = $tmp1867(arg$Iter1853);
            arg1865 = ((panda$core$String*) $tmp1869);
            panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1870, separator1822);
            panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1872);
            panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, arg1865);
            panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1874, &$s1875);
            (($fn1877) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1876);
            separator1822 = &$s1878;
        }
        goto $l1858;
        $l1859:;
    }
    (($fn1880) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1879);
    panda$core$String* $tmp1881 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1882 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1881, actualResultType1731);
    if ($tmp1882.value) {
    {
        panda$core$Int64 $tmp1884 = (($fn1883) actualMethodType1730->subtypes->$class->vtable[3])(actualMethodType1730->subtypes);
        panda$core$Int64 $tmp1885 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1884, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1887 = (($fn1886) actualMethodType1730->subtypes->$class->vtable[2])(actualMethodType1730->subtypes, $tmp1885);
        panda$core$String* $tmp1888 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1820, ((org$pandalanguage$pandac$Type*) $tmp1887), p_call->type, p_out);
        return $tmp1888;
    }
    }
    return result1820;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1890;
    panda$core$String* nonNullValue1894;
    panda$core$String* wrapped1905;
    panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1889.value) {
    {
        panda$core$Object* $tmp1892 = (($fn1891) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1893 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1892), p_out);
        unwrapped1890 = $tmp1893;
        panda$core$Object* $tmp1896 = (($fn1895) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1897 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1890, ((org$pandalanguage$pandac$Type*) $tmp1896), p_dstType, p_out);
        nonNullValue1894 = $tmp1897;
        panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1898, p_value);
        panda$core$String* $tmp1901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1899, &$s1900);
        panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1901, nonNullValue1894);
        panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, &$s1903);
        return $tmp1904;
    }
    }
    panda$core$String* $tmp1907 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1906, $tmp1907);
    panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1909);
    org$pandalanguage$pandac$ClassDecl* $tmp1912 = (($fn1911) self->compiler->$class->vtable[13])(self->compiler, p_srcType);
    panda$core$String* $tmp1913 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1912)->name);
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, $tmp1913);
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, &$s1915);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1917, p_value);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, &$s1919);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, $tmp1920);
    wrapped1905 = $tmp1921;
    panda$core$Bit $tmp1922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1922.value) {
    {
        panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1923, p_value);
        panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, &$s1925);
        panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, wrapped1905);
        panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, &$s1928);
        return $tmp1929;
    }
    }
    return wrapped1905;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1930;
    org$pandalanguage$pandac$ClassDecl* cl1934;
    panda$core$String* base1938;
    field1930 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1932 = (($fn1931) field1930->annotations->$class->vtable[5])(field1930->annotations);
    if ($tmp1932.value) {
    {
        panda$core$String* $tmp1933 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1930->value, p_out);
        return $tmp1933;
    }
    }
    panda$core$Object* $tmp1935 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1937 = (($fn1936) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1935)->type);
    cl1934 = $tmp1937;
    panda$core$Object* $tmp1939 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1940 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1939), p_out);
    base1938 = $tmp1940;
    panda$core$Bit $tmp1942 = (($fn1941) self->compiler->$class->vtable[9])(self->compiler, cl1934);
    if ($tmp1942.value) {
    {
        panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1943, base1938);
        panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, &$s1945);
        panda$core$String* $tmp1947 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1930)->name);
        panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, $tmp1947);
        panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1948, &$s1949);
        return $tmp1950;
    }
    }
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1951, base1938);
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, &$s1953);
    panda$core$String* $tmp1955 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1930)->name);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, $tmp1955);
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
    return $tmp1958;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1959;
    panda$core$String* wrapped1969;
    panda$core$String* nonNullValue1973;
    panda$core$String* $tmp1961 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1960, $tmp1961);
    panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, &$s1963);
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, p_value);
    panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1966);
    result1959 = $tmp1967;
    panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1968.value) {
    {
        panda$core$Object* $tmp1971 = (($fn1970) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1972 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1971), p_out);
        wrapped1969 = $tmp1972;
        panda$core$Object* $tmp1975 = (($fn1974) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1976 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1969, ((org$pandalanguage$pandac$Type*) $tmp1975), p_dstType, p_out);
        nonNullValue1973 = $tmp1976;
        panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1977, p_value);
        panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, &$s1979);
        panda$core$String* $tmp1981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, nonNullValue1973);
        panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1981, &$s1982);
        panda$core$String* $tmp1984 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, $tmp1984);
        panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1985, &$s1986);
        return $tmp1987;
    }
    }
    return result1959;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1989 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1988, $tmp1989);
    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, &$s1991);
    panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, p_value);
    panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1994);
    return $tmp1995;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1997 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1996, $tmp1997);
    panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, &$s1999);
    panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, p_value);
    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
    return $tmp2003;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op2004;
    org$pandalanguage$pandac$ClassDecl* srcClass2015;
    org$pandalanguage$pandac$ClassDecl* targetClass2018;
    panda$core$String* srcType2068;
    panda$core$String* dstType2070;
    panda$core$Bit $tmp2006 = (($fn2005) p_target->$class->vtable[7])(p_target);
    if ($tmp2006.value) {
    {
        panda$core$String* $tmp2008 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2007, $tmp2008);
        panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2010);
        panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, p_value);
        panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
        return $tmp2014;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2017 = (($fn2016) self->compiler->$class->vtable[13])(self->compiler, p_src);
        srcClass2015 = $tmp2017;
        org$pandalanguage$pandac$ClassDecl* $tmp2020 = (($fn2019) self->compiler->$class->vtable[13])(self->compiler, p_target);
        targetClass2018 = $tmp2020;
        panda$core$Bit $tmp2023 = (($fn2022) self->compiler->$class->vtable[9])(self->compiler, srcClass2015);
        bool $tmp2021 = $tmp2023.value;
        if (!$tmp2021) goto $l2024;
        panda$core$Bit $tmp2026 = (($fn2025) self->compiler->$class->vtable[9])(self->compiler, targetClass2018);
        panda$core$Bit $tmp2027 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2026);
        $tmp2021 = $tmp2027.value;
        $l2024:;
        panda$core$Bit $tmp2028 = { $tmp2021 };
        if ($tmp2028.value) {
        {
            panda$core$String* $tmp2029 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2029;
        }
        }
        else {
        panda$core$Bit $tmp2032 = (($fn2031) self->compiler->$class->vtable[9])(self->compiler, srcClass2015);
        panda$core$Bit $tmp2033 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2032);
        bool $tmp2030 = $tmp2033.value;
        if (!$tmp2030) goto $l2034;
        panda$core$Bit $tmp2036 = (($fn2035) self->compiler->$class->vtable[9])(self->compiler, targetClass2018);
        $tmp2030 = $tmp2036.value;
        $l2034:;
        panda$core$Bit $tmp2037 = { $tmp2030 };
        if ($tmp2037.value) {
        {
            panda$core$String* $tmp2038 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2038;
        }
        }
        else {
        panda$core$Bit $tmp2042 = (($fn2041) self->compiler->$class->vtable[9])(self->compiler, srcClass2015);
        bool $tmp2040 = $tmp2042.value;
        if (!$tmp2040) goto $l2043;
        panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2040 = $tmp2044.value;
        $l2043:;
        panda$core$Bit $tmp2045 = { $tmp2040 };
        bool $tmp2039 = $tmp2045.value;
        if (!$tmp2039) goto $l2046;
        panda$core$Object* $tmp2048 = (($fn2047) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2050 = (($fn2049) ((org$pandalanguage$pandac$Type*) $tmp2048)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp2048), ((panda$core$Object*) p_src));
        $tmp2039 = $tmp2050.value;
        $l2046:;
        panda$core$Bit $tmp2051 = { $tmp2039 };
        if ($tmp2051.value) {
        {
            panda$core$String* $tmp2052 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2052;
        }
        }
        else {
        panda$core$Bit $tmp2056 = (($fn2055) self->compiler->$class->vtable[9])(self->compiler, targetClass2018);
        bool $tmp2054 = $tmp2056.value;
        if (!$tmp2054) goto $l2057;
        panda$core$Bit $tmp2058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2054 = $tmp2058.value;
        $l2057:;
        panda$core$Bit $tmp2059 = { $tmp2054 };
        bool $tmp2053 = $tmp2059.value;
        if (!$tmp2053) goto $l2060;
        panda$core$Object* $tmp2062 = (($fn2061) p_src->subtypes->$class->vtable[2])(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2064 = (($fn2063) ((org$pandalanguage$pandac$Type*) $tmp2062)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp2062), ((panda$core$Object*) p_target));
        $tmp2053 = $tmp2064.value;
        $l2060:;
        panda$core$Bit $tmp2065 = { $tmp2053 };
        if ($tmp2065.value) {
        {
            panda$core$String* $tmp2066 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2066;
        }
        }
        }
        }
        }
        op2004 = &$s2067;
    }
    }
    panda$core$String* $tmp2069 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType2068 = $tmp2069;
    panda$core$String* $tmp2071 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType2070 = $tmp2071;
    panda$core$Bit $tmp2072 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType2068, dstType2070);
    if ($tmp2072.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2073, dstType2070);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
    panda$core$String* $tmp2077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, p_value);
    panda$core$String* $tmp2079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2077, &$s2078);
    return $tmp2079;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2080;
    panda$core$Object* $tmp2081 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2082 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2081), p_out);
    base2080 = $tmp2082;
    panda$core$Object* $tmp2083 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2084 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2080, ((org$pandalanguage$pandac$IRNode*) $tmp2083)->type, p_cast->type, p_out);
    return $tmp2084;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2085;
    panda$core$String* t2088;
    panda$core$String* value2098;
    panda$core$String* tmp2113;
    panda$core$String* result2131;
    panda$core$String* classPtr2152;
    panda$core$String* className2154;
    org$pandalanguage$pandac$ClassDecl* $tmp2087 = (($fn2086) self->compiler->$class->vtable[13])(self->compiler, p_construct->type);
    cl2085 = $tmp2087;
    panda$core$String* $tmp2089 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t2088 = $tmp2089;
    panda$core$Bit $tmp2092 = (($fn2091) p_construct->type->$class->vtable[6])(p_construct->type);
    bool $tmp2090 = $tmp2092.value;
    if ($tmp2090) goto $l2093;
    org$pandalanguage$pandac$Type* $tmp2094 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2096 = (($fn2095) p_construct->type->$class->vtable[4])(p_construct->type, ((panda$core$Object*) $tmp2094));
    $tmp2090 = $tmp2096.value;
    $l2093:;
    panda$core$Bit $tmp2097 = { $tmp2090 };
    if ($tmp2097.value) {
    {
        panda$core$Object* $tmp2099 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp2100 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2099)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2101 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2100), p_out);
        value2098 = $tmp2101;
        panda$core$String* $tmp2103 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2102, $tmp2103);
        panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, &$s2105);
        panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2106, value2098);
        panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2108);
        return $tmp2109;
    }
    }
    panda$core$Bit $tmp2111 = (($fn2110) self->compiler->$class->vtable[9])(self->compiler, cl2085);
    if ($tmp2111.value) {
    {
        panda$core$Int64 $tmp2112 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2112;
        panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2114, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
        tmp2113 = $tmp2117;
        panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2118, t2088);
        panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, &$s2120);
        panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, tmp2113);
        panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
        (($fn2125) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2124);
        panda$core$Object* $tmp2126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2127, tmp2113);
        panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2128, &$s2129);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2126), $tmp2130, p_out);
        return tmp2113;
    }
    }
    panda$core$String* $tmp2132 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2131 = $tmp2132;
    panda$core$String* $tmp2134 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2133, $tmp2134);
    panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, &$s2136);
    panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, result2131);
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2139);
    panda$core$String* $tmp2141 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, $tmp2141);
    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2142, &$s2143);
    panda$core$Int64 $tmp2146 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2145, ((panda$core$Object*) wrap_panda$core$Int64($tmp2146)));
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, &$s2148);
    panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, $tmp2149);
    (($fn2151) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2150);
    panda$core$String* $tmp2153 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2152 = $tmp2153;
    panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2155.value) {
    {
        panda$core$Object* $tmp2157 = (($fn2156) p_construct->type->subtypes->$class->vtable[2])(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2158 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2157));
        className2154 = $tmp2158;
    }
    }
    else {
    {
        panda$core$String* $tmp2159 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className2154 = $tmp2159;
    }
    }
    panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2160, result2131);
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2162);
    panda$core$String* $tmp2164 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl2085)->name);
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, $tmp2164);
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
    (($fn2168) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2167);
    panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2169, result2131);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, &$s2171);
    (($fn2173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2172);
    panda$core$Object* $tmp2174 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2175, result2131);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2174), $tmp2178, p_out);
    return result2131;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2179 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp2179;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2181 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2180, $tmp2181);
    return $tmp2182;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2183;
    }
    }
    return &$s2184;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2185 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2185;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2187;
    panda$collections$Iterator* raw$Iter2200;
    panda$core$Char8 raw2213;
    panda$core$UInt8 c2218;
    panda$core$Int64 $tmp2186 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2186;
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2188, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
    result2187 = $tmp2191;
    org$pandalanguage$pandac$Type* $tmp2192 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2192);
    panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2193, result2187);
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2194, &$s2195);
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, &$s2197);
    (($fn2199) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2198);
    {
        panda$collections$ListView* $tmp2201 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2202 = ((panda$collections$Iterable*) $tmp2201)->$class->itable;
        while ($tmp2202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2202 = $tmp2202->next;
        }
        $fn2204 $tmp2203 = $tmp2202->methods[0];
        panda$collections$Iterator* $tmp2205 = $tmp2203(((panda$collections$Iterable*) $tmp2201));
        raw$Iter2200 = $tmp2205;
        $l2206:;
        ITable* $tmp2208 = raw$Iter2200->$class->itable;
        while ($tmp2208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2208 = $tmp2208->next;
        }
        $fn2210 $tmp2209 = $tmp2208->methods[0];
        panda$core$Bit $tmp2211 = $tmp2209(raw$Iter2200);
        panda$core$Bit $tmp2212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2211);
        if (!$tmp2212.value) goto $l2207;
        {
            ITable* $tmp2214 = raw$Iter2200->$class->itable;
            while ($tmp2214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2214 = $tmp2214->next;
            }
            $fn2216 $tmp2215 = $tmp2214->methods[1];
            panda$core$Object* $tmp2217 = $tmp2215(raw$Iter2200);
            raw2213 = ((panda$core$Char8$wrapper*) $tmp2217)->value;
            panda$core$UInt8 $tmp2219 = panda$core$Char8$convert$R$panda$core$UInt8(raw2213);
            c2218 = $tmp2219;
            (($fn2221) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s2220);
            panda$collections$ListView* $tmp2223 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2222);
            panda$core$UInt32 $tmp2224 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c2218, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2225 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2224);
            ITable* $tmp2226 = $tmp2223->$class->itable;
            while ($tmp2226->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2226 = $tmp2226->next;
            }
            $fn2228 $tmp2227 = $tmp2226->methods[0];
            panda$core$Object* $tmp2229 = $tmp2227($tmp2223, $tmp2225);
            (($fn2230) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2229)->value)));
            panda$collections$ListView* $tmp2232 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2231);
            panda$core$UInt32 $tmp2233 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c2218, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2234 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2233);
            ITable* $tmp2235 = $tmp2232->$class->itable;
            while ($tmp2235->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2235 = $tmp2235->next;
            }
            $fn2237 $tmp2236 = $tmp2235->methods[0];
            panda$core$Object* $tmp2238 = $tmp2236($tmp2232, $tmp2234);
            (($fn2239) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2238)->value)));
        }
        goto $l2206;
        $l2207:;
    }
    panda$collections$ListView* $tmp2241 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2242 = ((panda$collections$CollectionView*) $tmp2241)->$class->itable;
    while ($tmp2242->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2242 = $tmp2242->next;
    }
    $fn2244 $tmp2243 = $tmp2242->methods[0];
    panda$core$Int64 $tmp2245 = $tmp2243(((panda$collections$CollectionView*) $tmp2241));
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2240, ((panda$core$Object*) wrap_panda$core$Int64($tmp2245)));
    panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2247);
    (($fn2249) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2248);
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2250, result2187);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2252);
    return $tmp2253;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2254;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2256 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2255, $tmp2256);
    panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, &$s2258);
    return $tmp2259;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2260;
    org$pandalanguage$pandac$ClassDecl* cl2263;
    panda$core$String* bit2267;
    panda$core$Object* $tmp2261 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2262 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2261), p_out);
    value2260 = $tmp2262;
    panda$core$Object* $tmp2264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2266 = (($fn2265) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2264)->type);
    cl2263 = $tmp2266;
    panda$core$Bit $tmp2269 = (($fn2268) self->compiler->$class->vtable[9])(self->compiler, cl2263);
    if ($tmp2269.value) {
    {
        panda$core$Object* $tmp2270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2271 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2270)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2271.value) {
        {
            bit2267 = &$s2272;
        }
        }
        else {
        {
            panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2273, value2260);
            panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, &$s2275);
            bit2267 = $tmp2276;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2277, value2260);
        panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2278, &$s2279);
        bit2267 = $tmp2280;
    }
    }
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2281, bit2267);
    panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2282, &$s2283);
    return $tmp2284;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2285;
    org$pandalanguage$pandac$ClassDecl* cl2288;
    panda$core$String* bit2292;
    panda$core$Object* $tmp2286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2287 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2286), p_out);
    value2285 = $tmp2287;
    panda$core$Object* $tmp2289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2291 = (($fn2290) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2289)->type);
    cl2288 = $tmp2291;
    panda$core$Bit $tmp2294 = (($fn2293) self->compiler->$class->vtable[9])(self->compiler, cl2288);
    if ($tmp2294.value) {
    {
        panda$core$Object* $tmp2295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2296 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2295)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2296.value) {
        {
            bit2292 = &$s2297;
        }
        }
        else {
        {
            panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2298, value2285);
            panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, &$s2300);
            bit2292 = $tmp2301;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2302, value2285);
        panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2304);
        bit2292 = $tmp2305;
    }
    }
    panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2306, bit2292);
    panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2307, &$s2308);
    return $tmp2309;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2310;
    panda$core$Object* $tmp2312 = (($fn2311) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2314 = (($fn2313) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2312));
    cl2310 = $tmp2314;
    panda$core$Bit $tmp2316 = (($fn2315) self->compiler->$class->vtable[9])(self->compiler, cl2310);
    if ($tmp2316.value) {
    {
        panda$core$String* $tmp2318 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2317, $tmp2318);
        panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2319, &$s2320);
        return $tmp2321;
    }
    }
    else {
    {
        return &$s2322;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2323;
    panda$core$String* result2326;
    panda$core$Int64 $match$432602328;
    panda$core$Object* $tmp2324 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2325 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2324), p_out);
    base2323 = $tmp2325;
    panda$core$String* $tmp2327 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2326 = $tmp2327;
    {
        panda$core$Int64 $tmp2329 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
        $match$432602328 = $tmp2329;
        panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$432602328, ((panda$core$Int64) { 52 }));
        if ($tmp2330.value) {
        {
            panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2331, base2323);
            panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2333);
            return $tmp2334;
        }
        }
        else {
        panda$core$Bit $tmp2335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$432602328, ((panda$core$Int64) { 49 }));
        if ($tmp2335.value) {
        {
            panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2336, base2323);
            panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, &$s2338);
            return $tmp2339;
        }
        }
        else {
        panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$432602328, ((panda$core$Int64) { 50 }));
        if ($tmp2340.value) {
        {
            panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2341, base2323);
            panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2342, &$s2343);
            return $tmp2344;
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$436812345;
    panda$core$String* value2371;
    panda$core$String* result2376;
    {
        $match$436812345 = p_expr->kind;
        panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1023 }));
        if ($tmp2346.value) {
        {
            panda$core$String* $tmp2347 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2347;
        }
        }
        else {
        panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1005 }));
        if ($tmp2348.value) {
        {
            panda$core$String* $tmp2349 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2349;
        }
        }
        else {
        panda$core$Bit $tmp2350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1009 }));
        if ($tmp2350.value) {
        {
            panda$core$String* $tmp2351 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2351;
        }
        }
        else {
        panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1004 }));
        if ($tmp2352.value) {
        {
            panda$core$String* $tmp2353 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2353;
        }
        }
        else {
        panda$core$Bit $tmp2354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1032 }));
        if ($tmp2354.value) {
        {
            panda$core$String* $tmp2355 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2355;
        }
        }
        else {
        panda$core$Bit $tmp2356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1011 }));
        if ($tmp2356.value) {
        {
            panda$core$String* $tmp2357 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2357;
        }
        }
        else {
        panda$core$Bit $tmp2358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1010 }));
        if ($tmp2358.value) {
        {
            panda$core$String* $tmp2359 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2359;
        }
        }
        else {
        panda$core$Bit $tmp2360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1016 }));
        if ($tmp2360.value) {
        {
            panda$core$String* $tmp2361 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2361;
        }
        }
        else {
        panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1026 }));
        if ($tmp2362.value) {
        {
            panda$core$String* $tmp2363 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2363;
        }
        }
        else {
        panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1033 }));
        if ($tmp2364.value) {
        {
            panda$core$String* $tmp2365 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2365;
        }
        }
        else {
        panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1025 }));
        if ($tmp2366.value) {
        {
            panda$core$String* $tmp2367 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2367;
        }
        }
        else {
        panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1024 }));
        if ($tmp2368.value) {
        {
            panda$core$String* $tmp2369 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2369;
        }
        }
        else {
        panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1027 }));
        if ($tmp2370.value) {
        {
            panda$core$Object* $tmp2372 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2373 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2372), p_out);
            value2371 = $tmp2373;
            (($fn2374) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))), ((panda$core$Object*) value2371));
            return value2371;
        }
        }
        else {
        panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1028 }));
        if ($tmp2375.value) {
        {
            panda$core$Object* $tmp2378 = (($fn2377) self->reusedValues->$class->vtable[3])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))));
            result2376 = ((panda$core$String*) $tmp2378);
            return result2376;
        }
        }
        else {
        panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1030 }));
        if ($tmp2379.value) {
        {
            panda$core$String* $tmp2380 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2380;
        }
        }
        else {
        panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1035 }));
        if ($tmp2381.value) {
        {
            panda$core$String* $tmp2382 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2382;
        }
        }
        else {
        panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1036 }));
        if ($tmp2383.value) {
        {
            panda$core$String* $tmp2384 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2384;
        }
        }
        else {
        panda$core$Bit $tmp2385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$436812345, ((panda$core$Int64) { 1041 }));
        if ($tmp2385.value) {
        {
            panda$core$String* $tmp2386 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2386;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2387 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2387;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2391;
    org$pandalanguage$pandac$IRNode* s2403;
    (($fn2389) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2388);
    panda$core$Int64 $tmp2390 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2390;
    {
        ITable* $tmp2392 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2392->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2392 = $tmp2392->next;
        }
        $fn2394 $tmp2393 = $tmp2392->methods[0];
        panda$collections$Iterator* $tmp2395 = $tmp2393(((panda$collections$Iterable*) p_block->children));
        s$Iter2391 = $tmp2395;
        $l2396:;
        ITable* $tmp2398 = s$Iter2391->$class->itable;
        while ($tmp2398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2398 = $tmp2398->next;
        }
        $fn2400 $tmp2399 = $tmp2398->methods[0];
        panda$core$Bit $tmp2401 = $tmp2399(s$Iter2391);
        panda$core$Bit $tmp2402 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2401);
        if (!$tmp2402.value) goto $l2397;
        {
            ITable* $tmp2404 = s$Iter2391->$class->itable;
            while ($tmp2404->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2404 = $tmp2404->next;
            }
            $fn2406 $tmp2405 = $tmp2404->methods[1];
            panda$core$Object* $tmp2407 = $tmp2405(s$Iter2391);
            s2403 = ((org$pandalanguage$pandac$IRNode*) $tmp2407);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2403, p_out);
        }
        goto $l2396;
        $l2397:;
    }
    panda$core$Int64 $tmp2408 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2408;
    (($fn2410) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2409);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2411;
    panda$core$String* $match$462462412;
    panda$core$String* ptr2415;
    panda$core$String* arg2418;
    panda$core$String* base2433;
    panda$core$String* index2436;
    panda$core$String* value2439;
    m2411 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$462462412 = ((org$pandalanguage$pandac$Symbol*) m2411->value)->name;
        panda$core$Bit $tmp2414 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$462462412, &$s2413);
        if ($tmp2414.value) {
        {
            panda$core$Object* $tmp2416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2417 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2416), p_out);
            ptr2415 = $tmp2417;
            panda$core$Object* $tmp2419 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2421 = (($fn2420) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2419));
            panda$core$String* $tmp2422 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2421, p_out);
            arg2418 = $tmp2422;
            panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2423, arg2418);
            panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2424, &$s2425);
            panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, ptr2415);
            panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, &$s2428);
            (($fn2430) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2429);
        }
        }
        else {
        panda$core$Bit $tmp2432 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$462462412, &$s2431);
        if ($tmp2432.value) {
        {
            panda$core$Object* $tmp2434 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2435 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2434), p_out);
            base2433 = $tmp2435;
            panda$core$Object* $tmp2437 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2438 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2437), p_out);
            index2436 = $tmp2438;
            panda$core$Object* $tmp2440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2442 = (($fn2441) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2440));
            panda$core$String* $tmp2443 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2442, p_out);
            value2439 = $tmp2443;
            panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2444, base2433);
            panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, &$s2446);
            panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2447, index2436);
            panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, &$s2449);
            panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, value2439);
            panda$core$String* $tmp2453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2451, &$s2452);
            (($fn2454) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2453);
        }
        }
        else {
        panda$core$Bit $tmp2456 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$462462412, &$s2455);
        if ($tmp2456.value) {
        {
            panda$core$Object* $tmp2458 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2459 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2458), p_out);
            panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2457, $tmp2459);
            panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
            (($fn2463) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2462);
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2464;
    org$pandalanguage$pandac$Type* actualMethodType2467;
    panda$core$String* actualResultType2468;
    panda$core$Bit isSuper2469;
    panda$collections$Array* args2494;
    panda$core$Int64 offset2497;
    panda$core$Range $tmp2503;
    panda$core$String* arg2523;
    panda$core$String* refTarget2552;
    panda$core$String* methodRef2556;
    panda$core$String* separator2558;
    panda$core$String* indirectVar2562;
    panda$core$String* resultType2565;
    panda$collections$Iterator* a$Iter2592;
    panda$core$String* a2604;
    m2464 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2466 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2464->owner)->name, &$s2465);
    if ($tmp2466.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m2464->owner->external.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2464);
    }
    }
    panda$core$Int64 $tmp2471 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2472 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2471, ((panda$core$Int64) { 1 }));
    bool $tmp2470 = $tmp2472.value;
    if (!$tmp2470) goto $l2473;
    panda$core$Object* $tmp2474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2474)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2470 = $tmp2475.value;
    $l2473:;
    panda$core$Bit $tmp2476 = { $tmp2470 };
    isSuper2469 = $tmp2476;
    panda$core$Bit $tmp2478 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2469);
    bool $tmp2477 = $tmp2478.value;
    if (!$tmp2477) goto $l2479;
    panda$core$Bit $tmp2481 = (($fn2480) m2464->$class->vtable[3])(m2464);
    $tmp2477 = $tmp2481.value;
    $l2479:;
    panda$core$Bit $tmp2482 = { $tmp2477 };
    if ($tmp2482.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2484 = (($fn2483) self->compiler->$class->vtable[45])(self->compiler, m2464);
        actualMethodType2467 = $tmp2484;
        panda$core$Int64 $tmp2486 = (($fn2485) actualMethodType2467->subtypes->$class->vtable[3])(actualMethodType2467->subtypes);
        panda$core$Int64 $tmp2487 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2486, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2489 = (($fn2488) actualMethodType2467->subtypes->$class->vtable[2])(actualMethodType2467->subtypes, $tmp2487);
        panda$core$String* $tmp2490 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2489));
        actualResultType2468 = $tmp2490;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2492 = (($fn2491) self->compiler->$class->vtable[43])(self->compiler, m2464);
        actualMethodType2467 = $tmp2492;
        panda$core$String* $tmp2493 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2468 = $tmp2493;
    }
    }
    panda$collections$Array* $tmp2495 = (panda$collections$Array*) malloc(40);
    $tmp2495->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2495->refCount.value = 1;
    panda$collections$Array$init($tmp2495);
    args2494 = $tmp2495;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2494, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2498 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2500 = (($fn2499) actualMethodType2467->subtypes->$class->vtable[3])(actualMethodType2467->subtypes);
    panda$core$Int64 $tmp2501 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2498, $tmp2500);
    panda$core$Int64 $tmp2502 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2501, ((panda$core$Int64) { 1 }));
    offset2497 = $tmp2502;
    panda$core$Int64 $tmp2504 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp2503, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp2504)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2506 = ((panda$core$Int64$wrapper*) $tmp2503.start)->value.value;
    panda$core$Int64 i2505 = { $tmp2506 };
    int64_t $tmp2508 = ((panda$core$Int64$wrapper*) $tmp2503.end)->value.value;
    int64_t $tmp2509 = $tmp2503.step.value;
    bool $tmp2510 = $tmp2503.inclusive.value;
    bool $tmp2517 = $tmp2509 > 0;
    if ($tmp2517) goto $l2515; else goto $l2516;
    $l2515:;
    if ($tmp2510) goto $l2518; else goto $l2519;
    $l2518:;
    if ($tmp2506 <= $tmp2508) goto $l2511; else goto $l2513;
    $l2519:;
    if ($tmp2506 < $tmp2508) goto $l2511; else goto $l2513;
    $l2516:;
    if ($tmp2510) goto $l2520; else goto $l2521;
    $l2520:;
    if ($tmp2506 >= $tmp2508) goto $l2511; else goto $l2513;
    $l2521:;
    if ($tmp2506 > $tmp2508) goto $l2511; else goto $l2513;
    $l2511:;
    {
        panda$core$Object* $tmp2524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2505);
        panda$core$String* $tmp2525 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2524), p_out);
        arg2523 = $tmp2525;
        panda$core$Bit $tmp2527 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2505, offset2497);
        bool $tmp2526 = $tmp2527.value;
        if (!$tmp2526) goto $l2528;
        panda$core$Int64 $tmp2529 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2505, offset2497);
        panda$core$Object* $tmp2531 = (($fn2530) actualMethodType2467->subtypes->$class->vtable[2])(actualMethodType2467->subtypes, $tmp2529);
        panda$core$Object* $tmp2532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2505);
        panda$core$Bit $tmp2534 = (($fn2533) ((org$pandalanguage$pandac$Type*) $tmp2531)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp2531), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2532)->type));
        $tmp2526 = $tmp2534.value;
        $l2528:;
        panda$core$Bit $tmp2535 = { $tmp2526 };
        if ($tmp2535.value) {
        {
            panda$core$Object* $tmp2536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2505);
            panda$core$Int64 $tmp2537 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2505, offset2497);
            panda$core$Object* $tmp2539 = (($fn2538) actualMethodType2467->subtypes->$class->vtable[2])(actualMethodType2467->subtypes, $tmp2537);
            panda$core$String* $tmp2540 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2523, ((org$pandalanguage$pandac$IRNode*) $tmp2536)->type, ((org$pandalanguage$pandac$Type*) $tmp2539), p_out);
            arg2523 = $tmp2540;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2494, ((panda$core$Object*) arg2523));
    }
    $l2514:;
    if ($tmp2517) goto $l2542; else goto $l2543;
    $l2542:;
    int64_t $tmp2544 = $tmp2508 - i2505.value;
    if ($tmp2510) goto $l2545; else goto $l2546;
    $l2545:;
    if ($tmp2544 >= $tmp2509) goto $l2541; else goto $l2513;
    $l2546:;
    if ($tmp2544 > $tmp2509) goto $l2541; else goto $l2513;
    $l2543:;
    int64_t $tmp2548 = i2505.value - $tmp2508;
    if ($tmp2510) goto $l2549; else goto $l2550;
    $l2549:;
    if ($tmp2548 >= -$tmp2509) goto $l2541; else goto $l2513;
    $l2550:;
    if ($tmp2548 > -$tmp2509) goto $l2541; else goto $l2513;
    $l2541:;
    i2505.value += $tmp2509;
    goto $l2511;
    $l2513:;
    panda$core$Int64 $tmp2553 = panda$collections$Array$get_count$R$panda$core$Int64(args2494);
    panda$core$Bit $tmp2554 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2553, ((panda$core$Int64) { 0 }));
    if ($tmp2554.value) {
    {
        panda$core$Object* $tmp2555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2494, ((panda$core$Int64) { 0 }));
        refTarget2552 = ((panda$core$String*) $tmp2555);
    }
    }
    else {
    {
        refTarget2552 = NULL;
    }
    }
    panda$core$String* $tmp2557 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2552, m2464, isSuper2469, p_out);
    methodRef2556 = $tmp2557;
    separator2558 = &$s2559;
    panda$core$Bit $tmp2560 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2464);
    if ($tmp2560.value) {
    {
        panda$core$Int64 $tmp2561 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2561;
        panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2563, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2562 = $tmp2564;
        panda$core$String* $tmp2566 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2565 = $tmp2566;
        panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2567, resultType2565);
        panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2568, &$s2569);
        panda$core$String* $tmp2571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2570, indirectVar2562);
        panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2571, &$s2572);
        (($fn2574) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2573);
        panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2575, methodRef2556);
        panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2577);
        panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, resultType2565);
        panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, &$s2580);
        panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, indirectVar2562);
        panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
        (($fn2585) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2584);
        separator2558 = &$s2586;
    }
    }
    else {
    {
        panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2587, methodRef2556);
        panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
        (($fn2591) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2590);
    }
    }
    {
        ITable* $tmp2593 = ((panda$collections$Iterable*) args2494)->$class->itable;
        while ($tmp2593->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2593 = $tmp2593->next;
        }
        $fn2595 $tmp2594 = $tmp2593->methods[0];
        panda$collections$Iterator* $tmp2596 = $tmp2594(((panda$collections$Iterable*) args2494));
        a$Iter2592 = $tmp2596;
        $l2597:;
        ITable* $tmp2599 = a$Iter2592->$class->itable;
        while ($tmp2599->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2599 = $tmp2599->next;
        }
        $fn2601 $tmp2600 = $tmp2599->methods[0];
        panda$core$Bit $tmp2602 = $tmp2600(a$Iter2592);
        panda$core$Bit $tmp2603 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2602);
        if (!$tmp2603.value) goto $l2598;
        {
            ITable* $tmp2605 = a$Iter2592->$class->itable;
            while ($tmp2605->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2605 = $tmp2605->next;
            }
            $fn2607 $tmp2606 = $tmp2605->methods[1];
            panda$core$Object* $tmp2608 = $tmp2606(a$Iter2592);
            a2604 = ((panda$core$String*) $tmp2608);
            (($fn2609) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2558);
            (($fn2610) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2604);
            separator2558 = &$s2611;
        }
        goto $l2597;
        $l2598:;
    }
    (($fn2613) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2612);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2614;
    panda$core$Object* $tmp2615 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2616 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2615), p_out);
    test2614 = $tmp2616;
    panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2617, test2614);
    panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2618, &$s2619);
    (($fn2621) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2620);
    panda$core$Object* $tmp2622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2622), p_out);
    (($fn2624) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2623);
    panda$core$Int64 $tmp2625 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2625, ((panda$core$Int64) { 3 }));
    if ($tmp2626.value) {
    {
        (($fn2628) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2627);
        panda$core$Object* $tmp2629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2629), p_out);
        (($fn2631) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2630);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2632;
    panda$core$String* range2634;
    org$pandalanguage$pandac$IRNode* block2637;
    org$pandalanguage$pandac$Type* t2639;
    panda$core$String* llt2643;
    panda$core$String* indexType2645;
    org$pandalanguage$pandac$ClassDecl* cl2650;
    org$pandalanguage$pandac$FieldDecl* field2653;
    panda$core$String* numberType2661;
    panda$core$String* index2663;
    panda$core$String* start2665;
    panda$core$String* indexValuePtr2682;
    panda$core$String* end2698;
    panda$core$String* step2715;
    panda$core$String* inclusive2728;
    panda$core$String* loopStart2738;
    panda$core$String* loopBody2740;
    panda$core$String* loopEnd2742;
    panda$core$String* loopTest2744;
    panda$core$String* forwardEntry2749;
    panda$core$String* backwardEntry2751;
    panda$core$String* signPrefix2753;
    panda$core$String* direction2758;
    panda$core$String* forwardEntryInclusive2782;
    panda$core$String* forwardEntryExclusive2784;
    panda$core$String* backwardEntryInclusive2827;
    panda$core$String* backwardEntryExclusive2829;
    panda$core$String* backwardEntryExclusiveTest2858;
    panda$core$String* loopInc2874;
    panda$core$String* forwardLabel2876;
    panda$core$String* backwardLabel2878;
    panda$core$String* forwardDelta2891;
    panda$core$String* forwardInclusiveLabel2907;
    panda$core$String* forwardExclusiveLabel2909;
    panda$core$String* forwardExclusiveTest2938;
    panda$core$String* backwardDelta2954;
    panda$core$String* backwardInclusiveLabel2970;
    panda$core$String* backwardExclusiveLabel2972;
    panda$core$String* inc3015;
    panda$core$Object* $tmp2633 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2632 = ((org$pandalanguage$pandac$IRNode*) $tmp2633);
    panda$core$Object* $tmp2635 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2636 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2635), p_out);
    range2634 = $tmp2636;
    panda$core$Object* $tmp2638 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2637 = ((org$pandalanguage$pandac$IRNode*) $tmp2638);
    panda$core$Object* $tmp2640 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2642 = (($fn2641) ((org$pandalanguage$pandac$IRNode*) $tmp2640)->type->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2640)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2639 = ((org$pandalanguage$pandac$Type*) $tmp2642);
    panda$core$String* $tmp2644 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2639);
    llt2643 = $tmp2644;
    panda$core$Bit $tmp2646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2639->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2646.value) {
    {
        panda$core$Object* $tmp2648 = (($fn2647) t2639->subtypes->$class->vtable[2])(t2639->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2649 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2648));
        indexType2645 = $tmp2649;
    }
    }
    else {
    {
        indexType2645 = llt2643;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2652 = (($fn2651) self->compiler->$class->vtable[13])(self->compiler, t2639);
    cl2650 = $tmp2652;
    panda$collections$ListView* $tmp2655 = (($fn2654) self->compiler->$class->vtable[10])(self->compiler, cl2650);
    ITable* $tmp2656 = $tmp2655->$class->itable;
    while ($tmp2656->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2656 = $tmp2656->next;
    }
    $fn2658 $tmp2657 = $tmp2656->methods[0];
    panda$core$Object* $tmp2659 = $tmp2657($tmp2655, ((panda$core$Int64) { 0 }));
    field2653 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2659);
    (($fn2660) self->compiler->$class->vtable[7])(self->compiler, field2653);
    panda$core$String* $tmp2662 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2653->type);
    numberType2661 = $tmp2662;
    panda$core$String* $tmp2664 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2632->payload));
    index2663 = $tmp2664;
    panda$core$String* $tmp2666 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2665 = $tmp2666;
    panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2667, numberType2661);
    panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, &$s2669);
    panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, start2665);
    panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2672);
    panda$core$String* $tmp2674 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2639);
    panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, $tmp2674);
    panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2676);
    panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, range2634);
    panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2678, &$s2679);
    (($fn2681) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2680);
    panda$core$String* $tmp2683 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2682 = $tmp2683;
    org$pandalanguage$pandac$Type* $tmp2686 = (($fn2685) cl2650->$class->vtable[3])(cl2650);
    panda$core$String* $tmp2687 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2686);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2684, $tmp2687);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, index2663);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
    panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, start2665);
    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, &$s2695);
    (($fn2697) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2696);
    panda$core$String* $tmp2699 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2698 = $tmp2699;
    panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2700, numberType2661);
    panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, end2698);
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
    panda$core$String* $tmp2707 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2639);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, $tmp2707);
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, range2634);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
    (($fn2714) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2713);
    panda$core$String* $tmp2716 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2715 = $tmp2716;
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2717, numberType2661);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, step2715);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, range2634);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2725);
    (($fn2727) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2726);
    panda$core$String* $tmp2729 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2728 = $tmp2729;
    panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2730, inclusive2728);
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, &$s2732);
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, range2634);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, &$s2735);
    (($fn2737) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2736);
    panda$core$String* $tmp2739 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2738 = $tmp2739;
    panda$core$String* $tmp2741 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2740 = $tmp2741;
    panda$core$String* $tmp2743 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2742 = $tmp2743;
    panda$core$String* $tmp2745 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2744 = $tmp2745;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2746 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2746->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2746->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2746, ((panda$core$String*) p_f->payload), loopEnd2742, loopTest2744);
    (($fn2748) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp2746));
    panda$core$String* $tmp2750 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2749 = $tmp2750;
    panda$core$String* $tmp2752 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2751 = $tmp2752;
    panda$core$Bit $tmp2755 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2639)->name, &$s2754);
    if ($tmp2755.value) {
    {
        signPrefix2753 = &$s2756;
    }
    }
    else {
    {
        signPrefix2753 = &$s2757;
    }
    }
    panda$core$Bit $tmp2760 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2753, &$s2759);
    if ($tmp2760.value) {
    {
        panda$core$String* $tmp2761 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2758 = $tmp2761;
        panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2762, direction2758);
        panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
        panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, step2715);
        panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
        (($fn2769) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2768);
    }
    }
    else {
    {
        direction2758 = &$s2770;
    }
    }
    panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2771, direction2758);
    panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, &$s2773);
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, forwardEntry2749);
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2776);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, backwardEntry2751);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
    (($fn2781) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2780);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2749, p_out);
    panda$core$String* $tmp2783 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2782 = $tmp2783;
    panda$core$String* $tmp2785 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2784 = $tmp2785;
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2786, inclusive2728);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2788);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, forwardEntryInclusive2782);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2793, forwardEntryExclusive2784);
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, $tmp2796);
    (($fn2798) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2797);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2782, p_out);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2799, start2665);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, &$s2801);
    panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, end2698);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, &$s2804);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, loopStart2738);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, &$s2807);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, loopEnd2742);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2810);
    (($fn2812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2811);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2784, p_out);
    panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2813, start2665);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, &$s2815);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, end2698);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, loopStart2738);
    panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2821);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, loopEnd2742);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, &$s2824);
    (($fn2826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2825);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2751, p_out);
    panda$core$String* $tmp2828 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2827 = $tmp2828;
    panda$core$String* $tmp2830 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2829 = $tmp2830;
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2831, inclusive2728);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, backwardEntryInclusive2827);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2838, backwardEntryExclusive2829);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2840);
    panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, $tmp2841);
    (($fn2843) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2842);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2827, p_out);
    panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2844, start2665);
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2845, &$s2846);
    panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, end2698);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, &$s2849);
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, loopStart2738);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, &$s2852);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, loopEnd2742);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
    (($fn2857) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2856);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2829, p_out);
    panda$core$String* $tmp2859 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2858 = $tmp2859;
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2860, start2665);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2862);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, end2698);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2865);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, loopStart2738);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, loopEnd2742);
    panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, &$s2871);
    (($fn2873) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2872);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2738, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2637, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2744, p_out);
    panda$core$String* $tmp2875 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2874 = $tmp2875;
    panda$core$String* $tmp2877 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2876 = $tmp2877;
    panda$core$String* $tmp2879 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2878 = $tmp2879;
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2880, direction2758);
    panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, &$s2882);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2883, forwardLabel2876);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, &$s2885);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, backwardLabel2878);
    panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
    (($fn2890) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2889);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2876, p_out);
    panda$core$String* $tmp2892 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2891 = $tmp2892;
    panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2893, numberType2661);
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2894, &$s2895);
    panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, forwardDelta2891);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2897, &$s2898);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, end2698);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, &$s2901);
    panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, index2663);
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, &$s2904);
    (($fn2906) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2905);
    panda$core$String* $tmp2908 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2907 = $tmp2908;
    panda$core$String* $tmp2910 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2909 = $tmp2910;
    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2911, inclusive2728);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
    panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, forwardInclusiveLabel2907);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2918, forwardExclusiveLabel2909);
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, &$s2920);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, $tmp2921);
    (($fn2923) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2922);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2907, p_out);
    panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2924, forwardDelta2891);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, &$s2926);
    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, step2715);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
    panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, loopInc2874);
    panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2931, &$s2932);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2933, loopEnd2742);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
    (($fn2937) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2936);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2909, p_out);
    panda$core$String* $tmp2939 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2938 = $tmp2939;
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2940, forwardDelta2891);
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, &$s2942);
    panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, step2715);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, &$s2945);
    panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, loopInc2874);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2947, &$s2948);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, loopEnd2742);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
    (($fn2953) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2952);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2878, p_out);
    panda$core$String* $tmp2955 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2954 = $tmp2955;
    panda$core$String* $tmp2957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2956, numberType2661);
    panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2957, &$s2958);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, backwardDelta2954);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, index2663);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, end2698);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    (($fn2969) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2968);
    panda$core$String* $tmp2971 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2970 = $tmp2971;
    panda$core$String* $tmp2973 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2972 = $tmp2973;
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2974, inclusive2728);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, backwardInclusiveLabel2970);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
    panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2981, backwardExclusiveLabel2972);
    panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2983);
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, $tmp2984);
    (($fn2986) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2985);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2970, p_out);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2987, backwardDelta2954);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, &$s2989);
    panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, step2715);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2992);
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, loopInc2874);
    panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, &$s2995);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, loopEnd2742);
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, &$s2998);
    (($fn3000) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2999);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2972, p_out);
    panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3001, backwardDelta2954);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
    panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, step2715);
    panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, &$s3006);
    panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, loopInc2874);
    panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3008, &$s3009);
    panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, loopEnd2742);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, &$s3012);
    (($fn3014) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3013);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2874, p_out);
    panda$core$String* $tmp3016 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3015 = $tmp3016;
    panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3017, index2663);
    panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, &$s3019);
    panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, step2715);
    panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3021, &$s3022);
    (($fn3024) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3023);
    panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3025, loopStart2738);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
    (($fn3029) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3028);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2742, p_out);
    (($fn3030) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3031;
    panda$core$String* loopEnd3033;
    panda$core$String* $tmp3032 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3031 = $tmp3032;
    panda$core$String* $tmp3034 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3033 = $tmp3034;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3035 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3035->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3035->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3035, ((panda$core$String*) p_w->payload), loopEnd3033, loopStart3031);
    (($fn3037) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3035));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3031, p_out);
    panda$core$Object* $tmp3039 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3040 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3039), p_out);
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3038, $tmp3040);
    panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
    panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, loopEnd3033);
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
    (($fn3047) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3046);
    panda$core$Object* $tmp3048 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3048), p_out);
    panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3049, loopStart3031);
    panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3050, &$s3051);
    (($fn3053) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3052);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3033, p_out);
    (($fn3054) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3055;
    panda$core$String* loopEnd3057;
    panda$core$String* $tmp3056 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3055 = $tmp3056;
    panda$core$String* $tmp3058 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3057 = $tmp3058;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3059 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3059->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3059->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3059, ((panda$core$String*) p_d->payload), loopEnd3057, loopStart3055);
    (($fn3061) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3059));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3055, p_out);
    panda$core$Object* $tmp3062 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3062), p_out);
    panda$core$Object* $tmp3064 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3065 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3064), p_out);
    panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3063, $tmp3065);
    panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, &$s3067);
    panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, loopStart3055);
    panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, &$s3070);
    (($fn3072) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3071);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3057, p_out);
    (($fn3073) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3074;
    panda$core$String* loopEnd3076;
    panda$core$String* $tmp3075 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3074 = $tmp3075;
    panda$core$String* $tmp3077 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3076 = $tmp3077;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3078 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3078->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3078->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3078, ((panda$core$String*) p_l->payload), loopEnd3076, loopStart3074);
    (($fn3080) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3078));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3074, p_out);
    (($fn3082) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3081);
    panda$core$Object* $tmp3083 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3083), p_out);
    (($fn3085) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3084);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3076, p_out);
    (($fn3086) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$594443087;
    org$pandalanguage$pandac$Variable* v3089;
    {
        $match$594443087 = p_target->kind;
        panda$core$Bit $tmp3088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$594443087, ((panda$core$Int64) { 1016 }));
        if ($tmp3088.value) {
        {
            v3089 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3089->type);
            panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3090, $tmp3091);
            panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
            panda$core$String* $tmp3095 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3089);
            panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, $tmp3095);
            panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
            (($fn3099) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3098);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3101 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3089);
                panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3100, $tmp3101);
                panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3102, &$s3103);
                panda$core$String* $tmp3105 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3104, $tmp3105);
                panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, &$s3107);
                (($fn3109) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3108);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$594443087, ((panda$core$Int64) { 1022 }));
        if ($tmp3110.value) {
        {
        }
        }
        else {
        {
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* decl$Iter3111;
    org$pandalanguage$pandac$IRNode* decl3123;
    {
        ITable* $tmp3112 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3112 = $tmp3112->next;
        }
        $fn3114 $tmp3113 = $tmp3112->methods[0];
        panda$collections$Iterator* $tmp3115 = $tmp3113(((panda$collections$Iterable*) p_v->children));
        decl$Iter3111 = $tmp3115;
        $l3116:;
        ITable* $tmp3118 = decl$Iter3111->$class->itable;
        while ($tmp3118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3118 = $tmp3118->next;
        }
        $fn3120 $tmp3119 = $tmp3118->methods[0];
        panda$core$Bit $tmp3121 = $tmp3119(decl$Iter3111);
        panda$core$Bit $tmp3122 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3121);
        if (!$tmp3122.value) goto $l3117;
        {
            ITable* $tmp3124 = decl$Iter3111->$class->itable;
            while ($tmp3124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3124 = $tmp3124->next;
            }
            $fn3126 $tmp3125 = $tmp3124->methods[1];
            panda$core$Object* $tmp3127 = $tmp3125(decl$Iter3111);
            decl3123 = ((org$pandalanguage$pandac$IRNode*) $tmp3127);
            panda$core$Int64 $tmp3128 = panda$collections$Array$get_count$R$panda$core$Int64(decl3123->children);
            panda$core$Bit $tmp3129 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3128, ((panda$core$Int64) { 1 }));
            if ($tmp3129.value) {
            {
                panda$core$Object* $tmp3130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3123->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3131 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3123->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3130), ((org$pandalanguage$pandac$IRNode*) $tmp3131), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3132 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3123->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3132), NULL, p_out);
            }
            }
        }
        goto $l3116;
        $l3117:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$605593133;
    panda$core$String* base3141;
    panda$core$String* result3152;
    {
        $match$605593133 = p_lvalue->kind;
        panda$core$Bit $tmp3134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605593133, ((panda$core$Int64) { 1009 }));
        if ($tmp3134.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3136 = (($fn3135) self->compiler->$class->vtable[50])(self->compiler, p_lvalue);
            panda$core$String* $tmp3137 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3136, p_out);
            return $tmp3137;
        }
        }
        else {
        panda$core$Bit $tmp3138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605593133, ((panda$core$Int64) { 1016 }));
        if ($tmp3138.value) {
        {
            panda$core$String* $tmp3139 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3139;
        }
        }
        else {
        panda$core$Bit $tmp3140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605593133, ((panda$core$Int64) { 1026 }));
        if ($tmp3140.value) {
        {
            panda$core$Object* $tmp3142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3143 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3142), p_out);
            base3141 = $tmp3143;
            panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3144, base3141);
            panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3146);
            panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
            return $tmp3150;
        }
        }
        else {
        panda$core$Bit $tmp3151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605593133, ((panda$core$Int64) { 1027 }));
        if ($tmp3151.value) {
        {
            panda$core$Object* $tmp3153 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3154 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3153), p_out);
            result3152 = $tmp3154;
            (($fn3155) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value))), ((panda$core$Object*) result3152));
            return result3152;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3156;
    panda$core$String* value3159;
    panda$core$String* t3160;
    panda$core$Int64 op3163;
    panda$core$String* right3165;
    panda$core$Object* $tmp3157 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3158 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3157), p_out);
    lvalue3156 = $tmp3158;
    panda$core$Object* $tmp3161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3162 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3161)->type);
    t3160 = $tmp3162;
    op3163 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3163, ((panda$core$Int64) { 73 }));
    if ($tmp3164.value) {
    {
        panda$core$Object* $tmp3166 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3167 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3166), p_out);
        right3165 = $tmp3167;
        value3159 = right3165;
    }
    }
    else {
    {
    }
    }
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3168, lvalue3156);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, &$s3170);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, value3159);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, &$s3173);
    (($fn3175) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3174);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3176 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3176, ((panda$core$Int64) { 1 }));
    if ($tmp3177.value) {
    {
        panda$core$Object* $tmp3179 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3180 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3179), p_out);
        panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3178, $tmp3180);
        panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, &$s3182);
        (($fn3184) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3183);
    }
    }
    else {
    {
        (($fn3186) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3185);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range $tmp3189;
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3188 = (($fn3187) self->loopDescriptors->$class->vtable[4])(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3188);
    }
    }
    panda$core$Int64 $tmp3191 = (($fn3190) self->loopDescriptors->$class->vtable[7])(self->loopDescriptors);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3189, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp3191)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3193 = ((panda$core$Int64$wrapper*) $tmp3189.start)->value.value;
    panda$core$Int64 i3192 = { $tmp3193 };
    int64_t $tmp3195 = ((panda$core$Int64$wrapper*) $tmp3189.end)->value.value;
    int64_t $tmp3196 = $tmp3189.step.value;
    bool $tmp3197 = $tmp3189.inclusive.value;
    bool $tmp3204 = $tmp3196 > 0;
    if ($tmp3204) goto $l3202; else goto $l3203;
    $l3202:;
    if ($tmp3197) goto $l3205; else goto $l3206;
    $l3205:;
    if ($tmp3193 <= $tmp3195) goto $l3198; else goto $l3200;
    $l3206:;
    if ($tmp3193 < $tmp3195) goto $l3198; else goto $l3200;
    $l3203:;
    if ($tmp3197) goto $l3207; else goto $l3208;
    $l3207:;
    if ($tmp3193 >= $tmp3195) goto $l3198; else goto $l3200;
    $l3208:;
    if ($tmp3193 > $tmp3195) goto $l3198; else goto $l3200;
    $l3198:;
    {
        panda$core$Object* $tmp3212 = (($fn3211) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3192);
        bool $tmp3210 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3212)->loopLabel != NULL }).value;
        if (!$tmp3210) goto $l3213;
        panda$core$Object* $tmp3215 = (($fn3214) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3192);
        panda$core$Bit $tmp3216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3215)->loopLabel, p_name);
        $tmp3210 = $tmp3216.value;
        $l3213:;
        panda$core$Bit $tmp3217 = { $tmp3210 };
        if ($tmp3217.value) {
        {
            panda$core$Object* $tmp3219 = (($fn3218) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3192);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3219);
        }
        }
    }
    $l3201:;
    if ($tmp3204) goto $l3221; else goto $l3222;
    $l3221:;
    int64_t $tmp3223 = $tmp3195 - i3192.value;
    if ($tmp3197) goto $l3224; else goto $l3225;
    $l3224:;
    if ($tmp3223 >= $tmp3196) goto $l3220; else goto $l3200;
    $l3225:;
    if ($tmp3223 > $tmp3196) goto $l3220; else goto $l3200;
    $l3222:;
    int64_t $tmp3227 = i3192.value - $tmp3195;
    if ($tmp3197) goto $l3228; else goto $l3229;
    $l3228:;
    if ($tmp3227 >= -$tmp3196) goto $l3220; else goto $l3200;
    $l3229:;
    if ($tmp3227 > -$tmp3196) goto $l3220; else goto $l3200;
    $l3220:;
    i3192.value += $tmp3196;
    goto $l3198;
    $l3200:;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3231;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3232 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3231 = $tmp3232;
    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3233, desc3231->breakLabel);
    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, &$s3235);
    (($fn3237) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3236);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3238;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3239 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3238 = $tmp3239;
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3240, desc3238->continueLabel);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
    (($fn3244) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3243);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$651933245;
    {
        $match$651933245 = p_stmt->kind;
        panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1023 }));
        if ($tmp3246.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1000 }));
        if ($tmp3247.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1005 }));
        if ($tmp3248.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1012 }));
        if ($tmp3249.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1029 }));
        if ($tmp3250.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1013 }));
        if ($tmp3251.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1014 }));
        if ($tmp3252.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1015 }));
        if ($tmp3253.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1017 }));
        bool $tmp3256 = $tmp3257.value;
        if ($tmp3256) goto $l3258;
        panda$core$Bit $tmp3259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1018 }));
        $tmp3256 = $tmp3259.value;
        $l3258:;
        panda$core$Bit $tmp3260 = { $tmp3256 };
        bool $tmp3255 = $tmp3260.value;
        if ($tmp3255) goto $l3261;
        panda$core$Bit $tmp3262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1019 }));
        $tmp3255 = $tmp3262.value;
        $l3261:;
        panda$core$Bit $tmp3263 = { $tmp3255 };
        bool $tmp3254 = $tmp3263.value;
        if ($tmp3254) goto $l3264;
        panda$core$Bit $tmp3265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1020 }));
        $tmp3254 = $tmp3265.value;
        $l3264:;
        panda$core$Bit $tmp3266 = { $tmp3254 };
        if ($tmp3266.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1008 }));
        if ($tmp3267.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1006 }));
        if ($tmp3268.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1007 }));
        if ($tmp3269.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$651933245, ((panda$core$Int64) { 1034 }));
        if ($tmp3270.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result3271;
    org$pandalanguage$pandac$Type* $tmp3273 = (($fn3272) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp3274 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3273);
    result3271 = $tmp3274;
    panda$core$Bit $tmp3276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3275 = $tmp3276.value;
    if (!$tmp3275) goto $l3277;
    panda$core$Bit $tmp3279 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3271, &$s3278);
    panda$core$Bit $tmp3280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3279);
    $tmp3275 = $tmp3280.value;
    $l3277:;
    panda$core$Bit $tmp3281 = { $tmp3275 };
    if ($tmp3281.value) {
    {
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3271, &$s3282);
        return $tmp3283;
    }
    }
    return result3271;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3296;
    panda$collections$Iterator* p$Iter3308;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3320;
    panda$io$MemoryOutputStream* bodyBuffer3342;
    panda$io$IndentedOutputStream* indentedBody3345;
    panda$collections$Iterator* s$Iter3348;
    org$pandalanguage$pandac$IRNode* s3360;
    self->currentMethod = p_m;
    self->currentBlock = &$s3284;
    (($fn3285) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3287 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3286, $tmp3287);
    panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, &$s3289);
    panda$core$String* $tmp3291 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, $tmp3291);
    panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
    (($fn3295) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3294);
    separator3296 = &$s3297;
    panda$core$Bit $tmp3299 = (($fn3298) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp3300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3299);
    if ($tmp3300.value) {
    {
        panda$core$String* $tmp3302 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3301, $tmp3302);
        panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
        (($fn3306) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3305);
        separator3296 = &$s3307;
    }
    }
    {
        ITable* $tmp3309 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3309->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3309 = $tmp3309->next;
        }
        $fn3311 $tmp3310 = $tmp3309->methods[0];
        panda$collections$Iterator* $tmp3312 = $tmp3310(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3308 = $tmp3312;
        $l3313:;
        ITable* $tmp3315 = p$Iter3308->$class->itable;
        while ($tmp3315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3315 = $tmp3315->next;
        }
        $fn3317 $tmp3316 = $tmp3315->methods[0];
        panda$core$Bit $tmp3318 = $tmp3316(p$Iter3308);
        panda$core$Bit $tmp3319 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3318);
        if (!$tmp3319.value) goto $l3314;
        {
            ITable* $tmp3321 = p$Iter3308->$class->itable;
            while ($tmp3321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3321 = $tmp3321->next;
            }
            $fn3323 $tmp3322 = $tmp3321->methods[1];
            panda$core$Object* $tmp3324 = $tmp3322(p$Iter3308);
            p3320 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3324);
            panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3325, separator3296);
            panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, &$s3327);
            panda$core$String* $tmp3329 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3320->type);
            panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, $tmp3329);
            panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, &$s3331);
            panda$core$String* $tmp3333 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3320->name);
            panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, $tmp3333);
            panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3334, &$s3335);
            (($fn3337) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3336);
            separator3296 = &$s3338;
        }
        goto $l3313;
        $l3314:;
    }
    (($fn3340) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3339);
    panda$core$Int64 $tmp3341 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3341;
    panda$io$MemoryOutputStream* $tmp3343 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3343->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3343->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3343);
    bodyBuffer3342 = $tmp3343;
    panda$io$IndentedOutputStream* $tmp3346 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3346->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3346->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3346, ((panda$io$OutputStream*) bodyBuffer3342));
    indentedBody3345 = $tmp3346;
    {
        ITable* $tmp3349 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3349 = $tmp3349->next;
        }
        $fn3351 $tmp3350 = $tmp3349->methods[0];
        panda$collections$Iterator* $tmp3352 = $tmp3350(((panda$collections$Iterable*) p_body->children));
        s$Iter3348 = $tmp3352;
        $l3353:;
        ITable* $tmp3355 = s$Iter3348->$class->itable;
        while ($tmp3355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3355 = $tmp3355->next;
        }
        $fn3357 $tmp3356 = $tmp3355->methods[0];
        panda$core$Bit $tmp3358 = $tmp3356(s$Iter3348);
        panda$core$Bit $tmp3359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3358);
        if (!$tmp3359.value) goto $l3354;
        {
            ITable* $tmp3361 = s$Iter3348->$class->itable;
            while ($tmp3361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3361 = $tmp3361->next;
            }
            $fn3363 $tmp3362 = $tmp3361->methods[1];
            panda$core$Object* $tmp3364 = $tmp3362(s$Iter3348);
            s3360 = ((org$pandalanguage$pandac$IRNode*) $tmp3364);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3360, indentedBody3345);
        }
        goto $l3353;
        $l3354:;
    }
    panda$core$String* $tmp3366 = (($fn3365) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn3367) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3366);
    panda$core$String* $tmp3369 = (($fn3368) bodyBuffer3342->$class->vtable[0])(bodyBuffer3342);
    (($fn3370) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3369);
    panda$core$Int64 $tmp3371 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3371;
    (($fn3373) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3372);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3375 = (($fn3374) self->compiler->$class->vtable[9])(self->compiler, p_cl);
    if ($tmp3375.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3377 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3376, $tmp3377);
        panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
        panda$core$String* $tmp3381 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, $tmp3381);
        panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, &$s3383);
        panda$core$String* $tmp3386 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3385, $tmp3386);
        panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, $tmp3389);
        (($fn3391) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3390);
        panda$core$String* $tmp3393 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3392, $tmp3393);
        panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
        panda$core$String* $tmp3398 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3397, $tmp3398);
        panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3400);
        org$pandalanguage$pandac$Type* $tmp3403 = (($fn3402) p_cl->$class->vtable[3])(p_cl);
        panda$core$Int64 $tmp3404 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3403);
        panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3401, ((panda$core$Object*) wrap_panda$core$Int64($tmp3404)));
        panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
        panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, $tmp3407);
        (($fn3409) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3408);
        panda$core$String* $tmp3412 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3411, $tmp3412);
        panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3410, $tmp3415);
        (($fn3417) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3416);
        (($fn3419) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3418);
        (($fn3421) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3420);
        (($fn3423) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3422);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    (($fn3424) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->shimsBuffer));
    (($fn3425) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->wrapperShimsBuffer));
    (($fn3426) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->types));
    (($fn3427) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->strings));
    (($fn3428) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->methodsBuffer));
    (($fn3429) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}
void org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$ClassConstant* self, panda$core$String* p_name, panda$core$String* p_type) {
    self->name = p_name;
    self->type = p_type;
}
void org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$MethodShim* self, panda$core$String* p_name, panda$core$String* p_type) {
    self->name = p_name;
    self->type = p_type;
}
void org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self, panda$core$String* p_loopLabel, panda$core$String* p_breakLabel, panda$core$String* p_continueLabel) {
    self->loopLabel = p_loopLabel;
    self->breakLabel = p_breakLabel;
    self->continueLabel = p_continueLabel;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self) {
    if (((panda$core$Bit) { self->loopLabel != NULL }).value) {
    {
        panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3430, self->loopLabel);
        panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, &$s3432);
        return $tmp3433;
    }
    }
    else {
    {
        return &$s3434;
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    panda$collections$Array* $tmp3435 = (panda$collections$Array*) malloc(40);
    $tmp3435->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3435->refCount.value = 1;
    panda$collections$Array$init($tmp3435);
    self->returns = $tmp3435;
    self->varSuffix = p_varSuffix;
    self->selfRef = p_selfRef;
    panda$collections$ImmutableArray* $tmp3437 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp3437->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp3437->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp3437, p_argRefs);
    self->argRefs = $tmp3437;
    self->exitLabel = p_exitLabel;
}
void org$pandalanguage$pandac$CCodeGenerator$Pair$init$org$pandalanguage$pandac$CCodeGenerator$Pair$A$org$pandalanguage$pandac$CCodeGenerator$Pair$B(org$pandalanguage$pandac$CCodeGenerator$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    self->first = p_first;
    self->second = p_second;
}
void org$pandalanguage$pandac$CCodeGenerator$OpClass$init(org$pandalanguage$pandac$CCodeGenerator$OpClass* self) {
}

