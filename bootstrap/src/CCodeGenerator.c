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
typedef void (*$fn1724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1740)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1758)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1761)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn1763)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1766)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1769)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn1774)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1805)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1808)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1813)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn1847)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1867)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1883)(panda$collections$Iterator*);
typedef void (*$fn1892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1895)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1898)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1901)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1906)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1910)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1926)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1946)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1951)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1956)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn1985)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1989)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2020)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2031)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2034)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2037)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2040)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2046)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2050)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2056)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2062)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2064)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn2070)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2076)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2078)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2101)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2106)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2110)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn2125)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2140)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2166)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2171)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn2183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2214)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2219)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2225)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2231)(panda$collections$Iterator*);
typedef void (*$fn2236)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2243)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2245)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn2252)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2254)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn2259)(panda$collections$CollectionView*);
typedef void (*$fn2264)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2280)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2283)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2305)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2308)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2326)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2328)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2330)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2389)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn2392)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn2404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2409)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2415)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2421)(panda$collections$Iterator*);
typedef void (*$fn2425)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2435)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2445)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2456)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2478)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2495)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2498)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn2500)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn2503)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn2506)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn2514)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn2545)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2548)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn2553)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn2589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2606)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2610)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2616)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2622)(panda$collections$Iterator*);
typedef void (*$fn2624)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2628)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2639)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2646)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2656)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn2662)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2666)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn2669)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2673)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2675)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn2696)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2700)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2752)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2763)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn2784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2813)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2841)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2888)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3001)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3029)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3044)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3045)(panda$collections$Stack*);
typedef void (*$fn3052)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3062)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3068)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3069)(panda$collections$Stack*);
typedef void (*$fn3076)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3087)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3088)(panda$collections$Stack*);
typedef void (*$fn3095)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3100)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3101)(panda$collections$Stack*);
typedef void (*$fn3114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3124)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3141)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3150)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3170)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn3190)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3201)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3202)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn3205)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3226)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn3229)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn3233)(panda$collections$Stack*, panda$core$Int64);
typedef void (*$fn3252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3259)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3287)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3300)(panda$io$MemoryOutputStream*);
typedef void (*$fn3310)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3313)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3321)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3326)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3338)(panda$collections$Iterator*);
typedef void (*$fn3352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3355)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3366)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3372)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3378)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3380)(panda$io$MemoryOutputStream*);
typedef void (*$fn3382)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3383)(panda$io$MemoryOutputStream*);
typedef void (*$fn3385)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3388)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3389)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3406)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3417)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3432)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3434)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3439)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3440)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3441)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3442)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3443)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3444)(panda$core$Object*);
struct { panda$core$Class* cl; ITable* next; void* methods[5]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$MethodShim$class_type org$pandalanguage$pandac$CCodeGenerator$MethodShim$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$CCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$Pair$class_type org$pandalanguage$pandac$CCodeGenerator$Pair$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$OpClass$class_type org$pandalanguage$pandac$CCodeGenerator$OpClass$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6E", 3, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2A", 3, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 1 };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2, 1 };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, 1 };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, 1 };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 1 };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 1 };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, 1 };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, 1 };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, 1 };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, 1 };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, 1 };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1 };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, 1 };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, 1 };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, 1 };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, 1 };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, 1 };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, 1 };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, 1 };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, 1 };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, 1 };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, 1 };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, 1 };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, 1 };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, 1 };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, 1 };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, 1 };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, 1 };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, 1 };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, 1 };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 1 };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, 1 };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, 1 };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, 1 };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, 1 };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 1 };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, 1 };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, 1 };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, 1 };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, 1 };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 1 };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1 };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 1 };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 1 };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1 };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x20\x7D\x3B", 6, 1 };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 1 };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 1 };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, 1 };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 1 };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 1 };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28\x28", 5, 1 };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x29\x2D\x3E\x76\x61\x6C\x75\x65\x2E\x76\x61\x6C\x75\x65\x3B", 21, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28\x28", 5, 1 };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x29\x2D\x3E\x76\x61\x6C\x75\x65\x2E\x76\x61\x6C\x75\x65\x3B", 19, 1 };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, 1 };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, 1 };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 1 };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 1 };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1 };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1 };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1 };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 1 };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 1 };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, 1 };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1 };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 1 };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 1 };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 1 };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 1 };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 1 };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, 1 };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 1 };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, 1 };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C", 15, 1 };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C\x3E", 16, 1 };

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
    panda$core$String* ptr1690;
    panda$core$String* offset1693;
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
        panda$core$Bit $tmp1689 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$292611613, &$s1688);
        if ($tmp1689.value) {
        {
            panda$core$Object* $tmp1691 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1692 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1691), p_out);
            ptr1690 = $tmp1692;
            panda$core$Object* $tmp1694 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1695 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1694), p_out);
            offset1693 = $tmp1695;
            panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1696, ptr1690);
            panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1697, &$s1698);
            panda$core$String* $tmp1700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1699, offset1693);
            panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1700, &$s1701);
            return $tmp1702;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m1703;
    panda$core$String* bit1711;
    panda$core$String* result1715;
    panda$core$String* bit1727;
    panda$core$String* result1731;
    panda$collections$Array* args1741;
    org$pandalanguage$pandac$Type* actualMethodType1745;
    panda$core$String* actualResultType1746;
    panda$core$Bit isSuper1747;
    panda$core$Int64 offset1772;
    panda$core$Range $tmp1778;
    panda$core$String* arg1798;
    panda$core$String* target1827;
    panda$core$String* methodRef1831;
    panda$core$Bit indirect1833;
    panda$core$String* result1835;
    panda$core$String* separator1837;
    panda$core$String* indirectVar1839;
    panda$collections$Iterator* arg$Iter1868;
    panda$core$String* arg1880;
    m1703 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1705 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1703->owner)->name, &$s1704);
    if ($tmp1705.value) {
    {
        panda$core$String* $tmp1706 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1706;
    }
    }
    if (m1703->owner->external.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1703);
    }
    }
    panda$core$Bit $tmp1708 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1703->owner)->name, &$s1707);
    if ($tmp1708.value) {
    {
        panda$core$Bit $tmp1710 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1703)->name, &$s1709);
        if ($tmp1710.value) {
        {
            panda$core$Object* $tmp1712 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1713 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1714 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1712), ((org$pandalanguage$pandac$IRNode*) $tmp1713), p_out);
            bit1711 = $tmp1714;
            panda$core$String* $tmp1716 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1715 = $tmp1716;
            panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1717, result1715);
            panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, &$s1719);
            panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, bit1711);
            panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
            (($fn1724) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1723);
            return result1715;
        }
        }
        panda$core$Bit $tmp1726 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1703)->name, &$s1725);
        if ($tmp1726.value) {
        {
            panda$core$Object* $tmp1728 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1729 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1730 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1728), ((org$pandalanguage$pandac$IRNode*) $tmp1729), p_out);
            bit1727 = $tmp1730;
            panda$core$String* $tmp1732 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1731 = $tmp1732;
            panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1733, result1731);
            panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1734, &$s1735);
            panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, bit1727);
            panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1738);
            (($fn1740) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1739);
            return result1731;
        }
        }
    }
    }
    panda$collections$Array* $tmp1742 = (panda$collections$Array*) malloc(40);
    $tmp1742->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1742->refCount.value = 1;
    panda$core$Int64 $tmp1744 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1742, $tmp1744);
    args1741 = $tmp1742;
    panda$core$Int64 $tmp1749 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1750 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1749, ((panda$core$Int64) { 1 }));
    bool $tmp1748 = $tmp1750.value;
    if (!$tmp1748) goto $l1751;
    panda$core$Object* $tmp1752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1752)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1748 = $tmp1753.value;
    $l1751:;
    panda$core$Bit $tmp1754 = { $tmp1748 };
    isSuper1747 = $tmp1754;
    panda$core$Bit $tmp1756 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1747);
    bool $tmp1755 = $tmp1756.value;
    if (!$tmp1755) goto $l1757;
    panda$core$Bit $tmp1759 = (($fn1758) m1703->$class->vtable[3])(m1703);
    $tmp1755 = $tmp1759.value;
    $l1757:;
    panda$core$Bit $tmp1760 = { $tmp1755 };
    if ($tmp1760.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1762 = (($fn1761) self->compiler->$class->vtable[45])(self->compiler, m1703);
        actualMethodType1745 = $tmp1762;
        panda$core$Int64 $tmp1764 = (($fn1763) actualMethodType1745->subtypes->$class->vtable[3])(actualMethodType1745->subtypes);
        panda$core$Int64 $tmp1765 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1764, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1767 = (($fn1766) actualMethodType1745->subtypes->$class->vtable[2])(actualMethodType1745->subtypes, $tmp1765);
        panda$core$String* $tmp1768 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1767));
        actualResultType1746 = $tmp1768;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1770 = (($fn1769) self->compiler->$class->vtable[43])(self->compiler, m1703);
        actualMethodType1745 = $tmp1770;
        panda$core$String* $tmp1771 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1746 = $tmp1771;
    }
    }
    panda$core$Int64 $tmp1773 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1775 = (($fn1774) actualMethodType1745->subtypes->$class->vtable[3])(actualMethodType1745->subtypes);
    panda$core$Int64 $tmp1776 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1773, $tmp1775);
    panda$core$Int64 $tmp1777 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1776, ((panda$core$Int64) { 1 }));
    offset1772 = $tmp1777;
    panda$core$Int64 $tmp1779 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1778, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1779)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1781 = ((panda$core$Int64$wrapper*) $tmp1778.start)->value.value;
    panda$core$Int64 i1780 = { $tmp1781 };
    int64_t $tmp1783 = ((panda$core$Int64$wrapper*) $tmp1778.end)->value.value;
    int64_t $tmp1784 = $tmp1778.step.value;
    bool $tmp1785 = $tmp1778.inclusive.value;
    bool $tmp1792 = $tmp1784 > 0;
    if ($tmp1792) goto $l1790; else goto $l1791;
    $l1790:;
    if ($tmp1785) goto $l1793; else goto $l1794;
    $l1793:;
    if ($tmp1781 <= $tmp1783) goto $l1786; else goto $l1788;
    $l1794:;
    if ($tmp1781 < $tmp1783) goto $l1786; else goto $l1788;
    $l1791:;
    if ($tmp1785) goto $l1795; else goto $l1796;
    $l1795:;
    if ($tmp1781 >= $tmp1783) goto $l1786; else goto $l1788;
    $l1796:;
    if ($tmp1781 > $tmp1783) goto $l1786; else goto $l1788;
    $l1786:;
    {
        panda$core$Object* $tmp1799 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1780);
        panda$core$String* $tmp1800 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1799), p_out);
        arg1798 = $tmp1800;
        panda$core$Bit $tmp1802 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1780, offset1772);
        bool $tmp1801 = $tmp1802.value;
        if (!$tmp1801) goto $l1803;
        panda$core$Int64 $tmp1804 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1780, offset1772);
        panda$core$Object* $tmp1806 = (($fn1805) actualMethodType1745->subtypes->$class->vtable[2])(actualMethodType1745->subtypes, $tmp1804);
        panda$core$Object* $tmp1807 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1780);
        panda$core$Bit $tmp1809 = (($fn1808) ((org$pandalanguage$pandac$Type*) $tmp1806)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp1806), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1807)->type));
        $tmp1801 = $tmp1809.value;
        $l1803:;
        panda$core$Bit $tmp1810 = { $tmp1801 };
        if ($tmp1810.value) {
        {
            panda$core$Object* $tmp1811 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1780);
            panda$core$Int64 $tmp1812 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1780, offset1772);
            panda$core$Object* $tmp1814 = (($fn1813) actualMethodType1745->subtypes->$class->vtable[2])(actualMethodType1745->subtypes, $tmp1812);
            panda$core$String* $tmp1815 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1798, ((org$pandalanguage$pandac$IRNode*) $tmp1811)->type, ((org$pandalanguage$pandac$Type*) $tmp1814), p_out);
            arg1798 = $tmp1815;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1741, ((panda$core$Object*) arg1798));
    }
    $l1789:;
    if ($tmp1792) goto $l1817; else goto $l1818;
    $l1817:;
    int64_t $tmp1819 = $tmp1783 - i1780.value;
    if ($tmp1785) goto $l1820; else goto $l1821;
    $l1820:;
    if ($tmp1819 >= $tmp1784) goto $l1816; else goto $l1788;
    $l1821:;
    if ($tmp1819 > $tmp1784) goto $l1816; else goto $l1788;
    $l1818:;
    int64_t $tmp1823 = i1780.value - $tmp1783;
    if ($tmp1785) goto $l1824; else goto $l1825;
    $l1824:;
    if ($tmp1823 >= -$tmp1784) goto $l1816; else goto $l1788;
    $l1825:;
    if ($tmp1823 > -$tmp1784) goto $l1816; else goto $l1788;
    $l1816:;
    i1780.value += $tmp1784;
    goto $l1786;
    $l1788:;
    panda$core$Int64 $tmp1828 = panda$collections$Array$get_count$R$panda$core$Int64(args1741);
    panda$core$Bit $tmp1829 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1828, ((panda$core$Int64) { 0 }));
    if ($tmp1829.value) {
    {
        panda$core$Object* $tmp1830 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1741, ((panda$core$Int64) { 0 }));
        target1827 = ((panda$core$String*) $tmp1830);
    }
    }
    else {
    {
        target1827 = NULL;
    }
    }
    panda$core$String* $tmp1832 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1827, m1703, isSuper1747, p_out);
    methodRef1831 = $tmp1832;
    panda$core$Bit $tmp1834 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1703);
    indirect1833 = $tmp1834;
    panda$core$String* $tmp1836 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1835 = $tmp1836;
    separator1837 = &$s1838;
    if (indirect1833.value) {
    {
        panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1840, actualResultType1746);
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1841, &$s1842);
        panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, result1835);
        panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, &$s1845);
        (($fn1847) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1846);
        panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1848, methodRef1831);
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
        panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, result1835);
        panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, &$s1853);
        (($fn1855) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1854);
        separator1837 = &$s1856;
    }
    }
    else {
    {
        panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1857, actualResultType1746);
        panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
        panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, result1835);
        panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
        panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, methodRef1831);
        panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1865);
        (($fn1867) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1866);
    }
    }
    {
        ITable* $tmp1869 = ((panda$collections$Iterable*) args1741)->$class->itable;
        while ($tmp1869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1869 = $tmp1869->next;
        }
        $fn1871 $tmp1870 = $tmp1869->methods[0];
        panda$collections$Iterator* $tmp1872 = $tmp1870(((panda$collections$Iterable*) args1741));
        arg$Iter1868 = $tmp1872;
        $l1873:;
        ITable* $tmp1875 = arg$Iter1868->$class->itable;
        while ($tmp1875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1875 = $tmp1875->next;
        }
        $fn1877 $tmp1876 = $tmp1875->methods[0];
        panda$core$Bit $tmp1878 = $tmp1876(arg$Iter1868);
        panda$core$Bit $tmp1879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1878);
        if (!$tmp1879.value) goto $l1874;
        {
            ITable* $tmp1881 = arg$Iter1868->$class->itable;
            while ($tmp1881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1881 = $tmp1881->next;
            }
            $fn1883 $tmp1882 = $tmp1881->methods[1];
            panda$core$Object* $tmp1884 = $tmp1882(arg$Iter1868);
            arg1880 = ((panda$core$String*) $tmp1884);
            panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1885, separator1837);
            panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, &$s1887);
            panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, arg1880);
            panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1890);
            (($fn1892) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1891);
            separator1837 = &$s1893;
        }
        goto $l1873;
        $l1874:;
    }
    (($fn1895) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1894);
    panda$core$String* $tmp1896 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1897 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1896, actualResultType1746);
    if ($tmp1897.value) {
    {
        panda$core$Int64 $tmp1899 = (($fn1898) actualMethodType1745->subtypes->$class->vtable[3])(actualMethodType1745->subtypes);
        panda$core$Int64 $tmp1900 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1899, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1902 = (($fn1901) actualMethodType1745->subtypes->$class->vtable[2])(actualMethodType1745->subtypes, $tmp1900);
        panda$core$String* $tmp1903 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1835, ((org$pandalanguage$pandac$Type*) $tmp1902), p_call->type, p_out);
        return $tmp1903;
    }
    }
    return result1835;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1905;
    panda$core$String* nonNullValue1909;
    panda$core$String* wrapped1920;
    panda$core$Bit $tmp1904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1904.value) {
    {
        panda$core$Object* $tmp1907 = (($fn1906) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1908 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1907), p_out);
        unwrapped1905 = $tmp1908;
        panda$core$Object* $tmp1911 = (($fn1910) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1912 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1905, ((org$pandalanguage$pandac$Type*) $tmp1911), p_dstType, p_out);
        nonNullValue1909 = $tmp1912;
        panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1913, p_value);
        panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, &$s1915);
        panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, nonNullValue1909);
        panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1918);
        return $tmp1919;
    }
    }
    panda$core$String* $tmp1922 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1921, $tmp1922);
    panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, &$s1924);
    org$pandalanguage$pandac$ClassDecl* $tmp1927 = (($fn1926) self->compiler->$class->vtable[13])(self->compiler, p_srcType);
    panda$core$String* $tmp1928 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1927)->name);
    panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, $tmp1928);
    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1929, &$s1930);
    panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1932, p_value);
    panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, &$s1934);
    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1931, $tmp1935);
    wrapped1920 = $tmp1936;
    panda$core$Bit $tmp1937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1937.value) {
    {
        panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1938, p_value);
        panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, &$s1940);
        panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, wrapped1920);
        panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1942, &$s1943);
        return $tmp1944;
    }
    }
    return wrapped1920;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1945;
    org$pandalanguage$pandac$ClassDecl* cl1949;
    panda$core$String* base1953;
    field1945 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1947 = (($fn1946) field1945->annotations->$class->vtable[5])(field1945->annotations);
    if ($tmp1947.value) {
    {
        panda$core$String* $tmp1948 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1945->value, p_out);
        return $tmp1948;
    }
    }
    panda$core$Object* $tmp1950 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1952 = (($fn1951) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1950)->type);
    cl1949 = $tmp1952;
    panda$core$Object* $tmp1954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1955 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1954), p_out);
    base1953 = $tmp1955;
    panda$core$Bit $tmp1957 = (($fn1956) self->compiler->$class->vtable[9])(self->compiler, cl1949);
    if ($tmp1957.value) {
    {
        panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1958, base1953);
        panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, &$s1960);
        panda$core$String* $tmp1962 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1945)->name);
        panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, $tmp1962);
        panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1963, &$s1964);
        return $tmp1965;
    }
    }
    panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1966, base1953);
    panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1968);
    panda$core$String* $tmp1970 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1945)->name);
    panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1969, $tmp1970);
    panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1972);
    return $tmp1973;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1974;
    panda$core$String* wrapped1984;
    panda$core$String* nonNullValue1988;
    panda$core$String* $tmp1976 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1975, $tmp1976);
    panda$core$String* $tmp1979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1977, &$s1978);
    panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1979, p_value);
    panda$core$String* $tmp1982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, &$s1981);
    result1974 = $tmp1982;
    panda$core$Bit $tmp1983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1983.value) {
    {
        panda$core$Object* $tmp1986 = (($fn1985) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1987 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1986), p_out);
        wrapped1984 = $tmp1987;
        panda$core$Object* $tmp1990 = (($fn1989) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1991 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1984, ((org$pandalanguage$pandac$Type*) $tmp1990), p_dstType, p_out);
        nonNullValue1988 = $tmp1991;
        panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1992, p_value);
        panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1994);
        panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1995, nonNullValue1988);
        panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, &$s1997);
        panda$core$String* $tmp1999 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, $tmp1999);
        panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, &$s2001);
        return $tmp2002;
    }
    }
    return result1974;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2004 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2003, $tmp2004);
    panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, &$s2006);
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, p_value);
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
    return $tmp2010;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2012 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2011, $tmp2012);
    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2014);
    panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, p_value);
    panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, &$s2017);
    return $tmp2018;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op2019;
    org$pandalanguage$pandac$ClassDecl* srcClass2030;
    org$pandalanguage$pandac$ClassDecl* targetClass2033;
    panda$core$String* srcType2083;
    panda$core$String* dstType2085;
    panda$core$Bit $tmp2021 = (($fn2020) p_target->$class->vtable[7])(p_target);
    if ($tmp2021.value) {
    {
        panda$core$String* $tmp2023 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2022, $tmp2023);
        panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2024, &$s2025);
        panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, p_value);
        panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, &$s2028);
        return $tmp2029;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2032 = (($fn2031) self->compiler->$class->vtable[13])(self->compiler, p_src);
        srcClass2030 = $tmp2032;
        org$pandalanguage$pandac$ClassDecl* $tmp2035 = (($fn2034) self->compiler->$class->vtable[13])(self->compiler, p_target);
        targetClass2033 = $tmp2035;
        panda$core$Bit $tmp2038 = (($fn2037) self->compiler->$class->vtable[9])(self->compiler, srcClass2030);
        bool $tmp2036 = $tmp2038.value;
        if (!$tmp2036) goto $l2039;
        panda$core$Bit $tmp2041 = (($fn2040) self->compiler->$class->vtable[9])(self->compiler, targetClass2033);
        panda$core$Bit $tmp2042 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2041);
        $tmp2036 = $tmp2042.value;
        $l2039:;
        panda$core$Bit $tmp2043 = { $tmp2036 };
        if ($tmp2043.value) {
        {
            panda$core$String* $tmp2044 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2044;
        }
        }
        else {
        panda$core$Bit $tmp2047 = (($fn2046) self->compiler->$class->vtable[9])(self->compiler, srcClass2030);
        panda$core$Bit $tmp2048 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2047);
        bool $tmp2045 = $tmp2048.value;
        if (!$tmp2045) goto $l2049;
        panda$core$Bit $tmp2051 = (($fn2050) self->compiler->$class->vtable[9])(self->compiler, targetClass2033);
        $tmp2045 = $tmp2051.value;
        $l2049:;
        panda$core$Bit $tmp2052 = { $tmp2045 };
        if ($tmp2052.value) {
        {
            panda$core$String* $tmp2053 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2053;
        }
        }
        else {
        panda$core$Bit $tmp2057 = (($fn2056) self->compiler->$class->vtable[9])(self->compiler, srcClass2030);
        bool $tmp2055 = $tmp2057.value;
        if (!$tmp2055) goto $l2058;
        panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2055 = $tmp2059.value;
        $l2058:;
        panda$core$Bit $tmp2060 = { $tmp2055 };
        bool $tmp2054 = $tmp2060.value;
        if (!$tmp2054) goto $l2061;
        panda$core$Object* $tmp2063 = (($fn2062) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2065 = (($fn2064) ((org$pandalanguage$pandac$Type*) $tmp2063)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp2063), ((panda$core$Object*) p_src));
        $tmp2054 = $tmp2065.value;
        $l2061:;
        panda$core$Bit $tmp2066 = { $tmp2054 };
        if ($tmp2066.value) {
        {
            panda$core$String* $tmp2067 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2067;
        }
        }
        else {
        panda$core$Bit $tmp2071 = (($fn2070) self->compiler->$class->vtable[9])(self->compiler, targetClass2033);
        bool $tmp2069 = $tmp2071.value;
        if (!$tmp2069) goto $l2072;
        panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2069 = $tmp2073.value;
        $l2072:;
        panda$core$Bit $tmp2074 = { $tmp2069 };
        bool $tmp2068 = $tmp2074.value;
        if (!$tmp2068) goto $l2075;
        panda$core$Object* $tmp2077 = (($fn2076) p_src->subtypes->$class->vtable[2])(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2079 = (($fn2078) ((org$pandalanguage$pandac$Type*) $tmp2077)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp2077), ((panda$core$Object*) p_target));
        $tmp2068 = $tmp2079.value;
        $l2075:;
        panda$core$Bit $tmp2080 = { $tmp2068 };
        if ($tmp2080.value) {
        {
            panda$core$String* $tmp2081 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2081;
        }
        }
        }
        }
        }
        op2019 = &$s2082;
    }
    }
    panda$core$String* $tmp2084 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType2083 = $tmp2084;
    panda$core$String* $tmp2086 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType2085 = $tmp2086;
    panda$core$Bit $tmp2087 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType2083, dstType2085);
    if ($tmp2087.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2088, dstType2085);
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2090);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, p_value);
    panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2093);
    return $tmp2094;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2095;
    panda$core$Object* $tmp2096 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2097 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2096), p_out);
    base2095 = $tmp2097;
    panda$core$Object* $tmp2098 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2099 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2095, ((org$pandalanguage$pandac$IRNode*) $tmp2098)->type, p_cast->type, p_out);
    return $tmp2099;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2100;
    panda$core$String* t2103;
    panda$core$String* value2113;
    panda$core$String* tmp2128;
    panda$core$String* result2146;
    panda$core$String* classPtr2167;
    panda$core$String* className2169;
    org$pandalanguage$pandac$ClassDecl* $tmp2102 = (($fn2101) self->compiler->$class->vtable[13])(self->compiler, p_construct->type);
    cl2100 = $tmp2102;
    panda$core$String* $tmp2104 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t2103 = $tmp2104;
    panda$core$Bit $tmp2107 = (($fn2106) p_construct->type->$class->vtable[6])(p_construct->type);
    bool $tmp2105 = $tmp2107.value;
    if ($tmp2105) goto $l2108;
    org$pandalanguage$pandac$Type* $tmp2109 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2111 = (($fn2110) p_construct->type->$class->vtable[4])(p_construct->type, ((panda$core$Object*) $tmp2109));
    $tmp2105 = $tmp2111.value;
    $l2108:;
    panda$core$Bit $tmp2112 = { $tmp2105 };
    if ($tmp2112.value) {
    {
        panda$core$Object* $tmp2114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp2115 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2114)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2116 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2115), p_out);
        value2113 = $tmp2116;
        panda$core$String* $tmp2118 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2117, $tmp2118);
        panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, &$s2120);
        panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, value2113);
        panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
        return $tmp2124;
    }
    }
    panda$core$Bit $tmp2126 = (($fn2125) self->compiler->$class->vtable[9])(self->compiler, cl2100);
    if ($tmp2126.value) {
    {
        panda$core$Int64 $tmp2127 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2127;
        panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2129, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
        tmp2128 = $tmp2132;
        panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2133, t2103);
        panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2134, &$s2135);
        panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2136, tmp2128);
        panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, &$s2138);
        (($fn2140) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2139);
        panda$core$Object* $tmp2141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2142, tmp2128);
        panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2141), $tmp2145, p_out);
        return tmp2128;
    }
    }
    panda$core$String* $tmp2147 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2146 = $tmp2147;
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2148, $tmp2149);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, result2146);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    panda$core$String* $tmp2156 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, $tmp2156);
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
    panda$core$Int64 $tmp2161 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2160, ((panda$core$Object*) wrap_panda$core$Int64($tmp2161)));
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2163);
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, $tmp2164);
    (($fn2166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2165);
    panda$core$String* $tmp2168 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2167 = $tmp2168;
    panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2170.value) {
    {
        panda$core$Object* $tmp2172 = (($fn2171) p_construct->type->subtypes->$class->vtable[2])(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2173 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2172));
        className2169 = $tmp2173;
    }
    }
    else {
    {
        panda$core$String* $tmp2174 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className2169 = $tmp2174;
    }
    }
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2175, result2146);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
    panda$core$String* $tmp2179 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl2100)->name);
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, $tmp2179);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2181);
    (($fn2183) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2182);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2184, result2146);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
    (($fn2188) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2187);
    panda$core$Object* $tmp2189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2190, result2146);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2192);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2189), $tmp2193, p_out);
    return result2146;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2194 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp2194;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2196 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2195, $tmp2196);
    return $tmp2197;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2198;
    }
    }
    return &$s2199;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2200 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2200;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2202;
    panda$collections$Iterator* raw$Iter2215;
    panda$core$Char8 raw2228;
    panda$core$UInt8 c2233;
    panda$core$Int64 $tmp2201 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2201;
    panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2203, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, &$s2205);
    result2202 = $tmp2206;
    org$pandalanguage$pandac$Type* $tmp2207 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2207);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2208, result2202);
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, &$s2210);
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2212);
    (($fn2214) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2213);
    {
        panda$collections$ListView* $tmp2216 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2217 = ((panda$collections$Iterable*) $tmp2216)->$class->itable;
        while ($tmp2217->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2217 = $tmp2217->next;
        }
        $fn2219 $tmp2218 = $tmp2217->methods[0];
        panda$collections$Iterator* $tmp2220 = $tmp2218(((panda$collections$Iterable*) $tmp2216));
        raw$Iter2215 = $tmp2220;
        $l2221:;
        ITable* $tmp2223 = raw$Iter2215->$class->itable;
        while ($tmp2223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2223 = $tmp2223->next;
        }
        $fn2225 $tmp2224 = $tmp2223->methods[0];
        panda$core$Bit $tmp2226 = $tmp2224(raw$Iter2215);
        panda$core$Bit $tmp2227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2226);
        if (!$tmp2227.value) goto $l2222;
        {
            ITable* $tmp2229 = raw$Iter2215->$class->itable;
            while ($tmp2229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2229 = $tmp2229->next;
            }
            $fn2231 $tmp2230 = $tmp2229->methods[1];
            panda$core$Object* $tmp2232 = $tmp2230(raw$Iter2215);
            raw2228 = ((panda$core$Char8$wrapper*) $tmp2232)->value;
            panda$core$UInt8 $tmp2234 = panda$core$Char8$convert$R$panda$core$UInt8(raw2228);
            c2233 = $tmp2234;
            (($fn2236) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s2235);
            panda$collections$ListView* $tmp2238 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2237);
            panda$core$UInt32 $tmp2239 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c2233, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2240 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2239);
            ITable* $tmp2241 = $tmp2238->$class->itable;
            while ($tmp2241->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2241 = $tmp2241->next;
            }
            $fn2243 $tmp2242 = $tmp2241->methods[0];
            panda$core$Object* $tmp2244 = $tmp2242($tmp2238, $tmp2240);
            (($fn2245) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2244)->value)));
            panda$collections$ListView* $tmp2247 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2246);
            panda$core$UInt32 $tmp2248 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c2233, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2249 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2248);
            ITable* $tmp2250 = $tmp2247->$class->itable;
            while ($tmp2250->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2250 = $tmp2250->next;
            }
            $fn2252 $tmp2251 = $tmp2250->methods[0];
            panda$core$Object* $tmp2253 = $tmp2251($tmp2247, $tmp2249);
            (($fn2254) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2253)->value)));
        }
        goto $l2221;
        $l2222:;
    }
    panda$collections$ListView* $tmp2256 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2257 = ((panda$collections$CollectionView*) $tmp2256)->$class->itable;
    while ($tmp2257->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2257 = $tmp2257->next;
    }
    $fn2259 $tmp2258 = $tmp2257->methods[0];
    panda$core$Int64 $tmp2260 = $tmp2258(((panda$collections$CollectionView*) $tmp2256));
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2255, ((panda$core$Object*) wrap_panda$core$Int64($tmp2260)));
    panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, &$s2262);
    (($fn2264) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2263);
    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2265, result2202);
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, &$s2267);
    return $tmp2268;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2269;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2271 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2270, $tmp2271);
    panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2273);
    return $tmp2274;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2275;
    org$pandalanguage$pandac$ClassDecl* cl2278;
    panda$core$String* bit2282;
    panda$core$Object* $tmp2276 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2277 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2276), p_out);
    value2275 = $tmp2277;
    panda$core$Object* $tmp2279 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2281 = (($fn2280) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2279)->type);
    cl2278 = $tmp2281;
    panda$core$Bit $tmp2284 = (($fn2283) self->compiler->$class->vtable[9])(self->compiler, cl2278);
    if ($tmp2284.value) {
    {
        panda$core$Object* $tmp2285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2286 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2285)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2286.value) {
        {
            bit2282 = &$s2287;
        }
        }
        else {
        {
            panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2288, value2275);
            panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, &$s2290);
            bit2282 = $tmp2291;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2292, value2275);
        panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
        bit2282 = $tmp2295;
    }
    }
    panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2296, bit2282);
    panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, &$s2298);
    return $tmp2299;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2300;
    org$pandalanguage$pandac$ClassDecl* cl2303;
    panda$core$String* bit2307;
    panda$core$Object* $tmp2301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2302 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2301), p_out);
    value2300 = $tmp2302;
    panda$core$Object* $tmp2304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2306 = (($fn2305) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2304)->type);
    cl2303 = $tmp2306;
    panda$core$Bit $tmp2309 = (($fn2308) self->compiler->$class->vtable[9])(self->compiler, cl2303);
    if ($tmp2309.value) {
    {
        panda$core$Object* $tmp2310 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2311 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2310)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2311.value) {
        {
            bit2307 = &$s2312;
        }
        }
        else {
        {
            panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2313, value2300);
            panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, &$s2315);
            bit2307 = $tmp2316;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2317, value2300);
        panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2319);
        bit2307 = $tmp2320;
    }
    }
    panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2321, bit2307);
    panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, &$s2323);
    return $tmp2324;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2325;
    panda$core$Object* $tmp2327 = (($fn2326) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2329 = (($fn2328) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2327));
    cl2325 = $tmp2329;
    panda$core$Bit $tmp2331 = (($fn2330) self->compiler->$class->vtable[9])(self->compiler, cl2325);
    if ($tmp2331.value) {
    {
        panda$core$String* $tmp2333 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2332, $tmp2333);
        panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, &$s2335);
        return $tmp2336;
    }
    }
    else {
    {
        return &$s2337;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2338;
    panda$core$String* result2341;
    panda$core$Int64 $match$435242343;
    panda$core$Object* $tmp2339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2340 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2339), p_out);
    base2338 = $tmp2340;
    panda$core$String* $tmp2342 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2341 = $tmp2342;
    {
        panda$core$Int64 $tmp2344 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
        $match$435242343 = $tmp2344;
        panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435242343, ((panda$core$Int64) { 52 }));
        if ($tmp2345.value) {
        {
            panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2346, base2338);
            panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, &$s2348);
            return $tmp2349;
        }
        }
        else {
        panda$core$Bit $tmp2350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435242343, ((panda$core$Int64) { 49 }));
        if ($tmp2350.value) {
        {
            panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2351, base2338);
            panda$core$String* $tmp2354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2352, &$s2353);
            return $tmp2354;
        }
        }
        else {
        panda$core$Bit $tmp2355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435242343, ((panda$core$Int64) { 50 }));
        if ($tmp2355.value) {
        {
            panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2356, base2338);
            panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2357, &$s2358);
            return $tmp2359;
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
    panda$core$Int64 $match$439452360;
    panda$core$String* value2386;
    panda$core$String* result2391;
    {
        $match$439452360 = p_expr->kind;
        panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1023 }));
        if ($tmp2361.value) {
        {
            panda$core$String* $tmp2362 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2362;
        }
        }
        else {
        panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1005 }));
        if ($tmp2363.value) {
        {
            panda$core$String* $tmp2364 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2364;
        }
        }
        else {
        panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1009 }));
        if ($tmp2365.value) {
        {
            panda$core$String* $tmp2366 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2366;
        }
        }
        else {
        panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1004 }));
        if ($tmp2367.value) {
        {
            panda$core$String* $tmp2368 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2368;
        }
        }
        else {
        panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1032 }));
        if ($tmp2369.value) {
        {
            panda$core$String* $tmp2370 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2370;
        }
        }
        else {
        panda$core$Bit $tmp2371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1011 }));
        if ($tmp2371.value) {
        {
            panda$core$String* $tmp2372 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2372;
        }
        }
        else {
        panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1010 }));
        if ($tmp2373.value) {
        {
            panda$core$String* $tmp2374 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2374;
        }
        }
        else {
        panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1016 }));
        if ($tmp2375.value) {
        {
            panda$core$String* $tmp2376 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2376;
        }
        }
        else {
        panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1026 }));
        if ($tmp2377.value) {
        {
            panda$core$String* $tmp2378 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2378;
        }
        }
        else {
        panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1033 }));
        if ($tmp2379.value) {
        {
            panda$core$String* $tmp2380 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2380;
        }
        }
        else {
        panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1025 }));
        if ($tmp2381.value) {
        {
            panda$core$String* $tmp2382 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2382;
        }
        }
        else {
        panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1024 }));
        if ($tmp2383.value) {
        {
            panda$core$String* $tmp2384 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2384;
        }
        }
        else {
        panda$core$Bit $tmp2385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1027 }));
        if ($tmp2385.value) {
        {
            panda$core$Object* $tmp2387 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2388 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2387), p_out);
            value2386 = $tmp2388;
            (($fn2389) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))), ((panda$core$Object*) value2386));
            return value2386;
        }
        }
        else {
        panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1028 }));
        if ($tmp2390.value) {
        {
            panda$core$Object* $tmp2393 = (($fn2392) self->reusedValues->$class->vtable[3])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))));
            result2391 = ((panda$core$String*) $tmp2393);
            return result2391;
        }
        }
        else {
        panda$core$Bit $tmp2394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1030 }));
        if ($tmp2394.value) {
        {
            panda$core$String* $tmp2395 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2395;
        }
        }
        else {
        panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1035 }));
        if ($tmp2396.value) {
        {
            panda$core$String* $tmp2397 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2397;
        }
        }
        else {
        panda$core$Bit $tmp2398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1036 }));
        if ($tmp2398.value) {
        {
            panda$core$String* $tmp2399 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2399;
        }
        }
        else {
        panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439452360, ((panda$core$Int64) { 1041 }));
        if ($tmp2400.value) {
        {
            panda$core$String* $tmp2401 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2401;
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
    panda$core$String* $tmp2402 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2402;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2406;
    org$pandalanguage$pandac$IRNode* s2418;
    (($fn2404) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2403);
    panda$core$Int64 $tmp2405 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2405;
    {
        ITable* $tmp2407 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2407->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2407 = $tmp2407->next;
        }
        $fn2409 $tmp2408 = $tmp2407->methods[0];
        panda$collections$Iterator* $tmp2410 = $tmp2408(((panda$collections$Iterable*) p_block->children));
        s$Iter2406 = $tmp2410;
        $l2411:;
        ITable* $tmp2413 = s$Iter2406->$class->itable;
        while ($tmp2413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2413 = $tmp2413->next;
        }
        $fn2415 $tmp2414 = $tmp2413->methods[0];
        panda$core$Bit $tmp2416 = $tmp2414(s$Iter2406);
        panda$core$Bit $tmp2417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2416);
        if (!$tmp2417.value) goto $l2412;
        {
            ITable* $tmp2419 = s$Iter2406->$class->itable;
            while ($tmp2419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2419 = $tmp2419->next;
            }
            $fn2421 $tmp2420 = $tmp2419->methods[1];
            panda$core$Object* $tmp2422 = $tmp2420(s$Iter2406);
            s2418 = ((org$pandalanguage$pandac$IRNode*) $tmp2422);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2418, p_out);
        }
        goto $l2411;
        $l2412:;
    }
    panda$core$Int64 $tmp2423 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2423;
    (($fn2425) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2424);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2426;
    panda$core$String* $match$465102427;
    panda$core$String* ptr2430;
    panda$core$String* arg2433;
    panda$core$String* base2448;
    panda$core$String* index2451;
    panda$core$String* value2454;
    m2426 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$465102427 = ((org$pandalanguage$pandac$Symbol*) m2426->value)->name;
        panda$core$Bit $tmp2429 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$465102427, &$s2428);
        if ($tmp2429.value) {
        {
            panda$core$Object* $tmp2431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2432 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2431), p_out);
            ptr2430 = $tmp2432;
            panda$core$Object* $tmp2434 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2436 = (($fn2435) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2434));
            panda$core$String* $tmp2437 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2436, p_out);
            arg2433 = $tmp2437;
            panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2438, arg2433);
            panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, &$s2440);
            panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2441, ptr2430);
            panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, &$s2443);
            (($fn2445) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2444);
        }
        }
        else {
        panda$core$Bit $tmp2447 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$465102427, &$s2446);
        if ($tmp2447.value) {
        {
            panda$core$Object* $tmp2449 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2450 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2449), p_out);
            base2448 = $tmp2450;
            panda$core$Object* $tmp2452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2453 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2452), p_out);
            index2451 = $tmp2453;
            panda$core$Object* $tmp2455 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2457 = (($fn2456) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2455));
            panda$core$String* $tmp2458 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2457, p_out);
            value2454 = $tmp2458;
            panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2459, base2448);
            panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
            panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2462, index2451);
            panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, &$s2464);
            panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2465, value2454);
            panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
            (($fn2469) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2468);
        }
        }
        else {
        panda$core$Bit $tmp2471 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$465102427, &$s2470);
        if ($tmp2471.value) {
        {
            panda$core$Object* $tmp2473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2474 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2473), p_out);
            panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2472, $tmp2474);
            panda$core$String* $tmp2477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2475, &$s2476);
            (($fn2478) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2477);
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
    org$pandalanguage$pandac$MethodDecl* m2479;
    org$pandalanguage$pandac$Type* actualMethodType2482;
    panda$core$String* actualResultType2483;
    panda$core$Bit isSuper2484;
    panda$collections$Array* args2509;
    panda$core$Int64 offset2512;
    panda$core$Range $tmp2518;
    panda$core$String* arg2538;
    panda$core$String* refTarget2567;
    panda$core$String* methodRef2571;
    panda$core$String* separator2573;
    panda$core$String* indirectVar2577;
    panda$core$String* resultType2580;
    panda$collections$Iterator* a$Iter2607;
    panda$core$String* a2619;
    m2479 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2481 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2479->owner)->name, &$s2480);
    if ($tmp2481.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m2479->owner->external.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2479);
    }
    }
    panda$core$Int64 $tmp2486 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2487 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2486, ((panda$core$Int64) { 1 }));
    bool $tmp2485 = $tmp2487.value;
    if (!$tmp2485) goto $l2488;
    panda$core$Object* $tmp2489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2489)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2485 = $tmp2490.value;
    $l2488:;
    panda$core$Bit $tmp2491 = { $tmp2485 };
    isSuper2484 = $tmp2491;
    panda$core$Bit $tmp2493 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2484);
    bool $tmp2492 = $tmp2493.value;
    if (!$tmp2492) goto $l2494;
    panda$core$Bit $tmp2496 = (($fn2495) m2479->$class->vtable[3])(m2479);
    $tmp2492 = $tmp2496.value;
    $l2494:;
    panda$core$Bit $tmp2497 = { $tmp2492 };
    if ($tmp2497.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2499 = (($fn2498) self->compiler->$class->vtable[45])(self->compiler, m2479);
        actualMethodType2482 = $tmp2499;
        panda$core$Int64 $tmp2501 = (($fn2500) actualMethodType2482->subtypes->$class->vtable[3])(actualMethodType2482->subtypes);
        panda$core$Int64 $tmp2502 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2501, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2504 = (($fn2503) actualMethodType2482->subtypes->$class->vtable[2])(actualMethodType2482->subtypes, $tmp2502);
        panda$core$String* $tmp2505 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2504));
        actualResultType2483 = $tmp2505;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2507 = (($fn2506) self->compiler->$class->vtable[43])(self->compiler, m2479);
        actualMethodType2482 = $tmp2507;
        panda$core$String* $tmp2508 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2483 = $tmp2508;
    }
    }
    panda$collections$Array* $tmp2510 = (panda$collections$Array*) malloc(40);
    $tmp2510->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2510->refCount.value = 1;
    panda$collections$Array$init($tmp2510);
    args2509 = $tmp2510;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2509, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2513 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2515 = (($fn2514) actualMethodType2482->subtypes->$class->vtable[3])(actualMethodType2482->subtypes);
    panda$core$Int64 $tmp2516 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2513, $tmp2515);
    panda$core$Int64 $tmp2517 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2516, ((panda$core$Int64) { 1 }));
    offset2512 = $tmp2517;
    panda$core$Int64 $tmp2519 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp2518, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp2519)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2521 = ((panda$core$Int64$wrapper*) $tmp2518.start)->value.value;
    panda$core$Int64 i2520 = { $tmp2521 };
    int64_t $tmp2523 = ((panda$core$Int64$wrapper*) $tmp2518.end)->value.value;
    int64_t $tmp2524 = $tmp2518.step.value;
    bool $tmp2525 = $tmp2518.inclusive.value;
    bool $tmp2532 = $tmp2524 > 0;
    if ($tmp2532) goto $l2530; else goto $l2531;
    $l2530:;
    if ($tmp2525) goto $l2533; else goto $l2534;
    $l2533:;
    if ($tmp2521 <= $tmp2523) goto $l2526; else goto $l2528;
    $l2534:;
    if ($tmp2521 < $tmp2523) goto $l2526; else goto $l2528;
    $l2531:;
    if ($tmp2525) goto $l2535; else goto $l2536;
    $l2535:;
    if ($tmp2521 >= $tmp2523) goto $l2526; else goto $l2528;
    $l2536:;
    if ($tmp2521 > $tmp2523) goto $l2526; else goto $l2528;
    $l2526:;
    {
        panda$core$Object* $tmp2539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2520);
        panda$core$String* $tmp2540 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2539), p_out);
        arg2538 = $tmp2540;
        panda$core$Bit $tmp2542 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2520, offset2512);
        bool $tmp2541 = $tmp2542.value;
        if (!$tmp2541) goto $l2543;
        panda$core$Int64 $tmp2544 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2520, offset2512);
        panda$core$Object* $tmp2546 = (($fn2545) actualMethodType2482->subtypes->$class->vtable[2])(actualMethodType2482->subtypes, $tmp2544);
        panda$core$Object* $tmp2547 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2520);
        panda$core$Bit $tmp2549 = (($fn2548) ((org$pandalanguage$pandac$Type*) $tmp2546)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp2546), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2547)->type));
        $tmp2541 = $tmp2549.value;
        $l2543:;
        panda$core$Bit $tmp2550 = { $tmp2541 };
        if ($tmp2550.value) {
        {
            panda$core$Object* $tmp2551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2520);
            panda$core$Int64 $tmp2552 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2520, offset2512);
            panda$core$Object* $tmp2554 = (($fn2553) actualMethodType2482->subtypes->$class->vtable[2])(actualMethodType2482->subtypes, $tmp2552);
            panda$core$String* $tmp2555 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2538, ((org$pandalanguage$pandac$IRNode*) $tmp2551)->type, ((org$pandalanguage$pandac$Type*) $tmp2554), p_out);
            arg2538 = $tmp2555;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2509, ((panda$core$Object*) arg2538));
    }
    $l2529:;
    if ($tmp2532) goto $l2557; else goto $l2558;
    $l2557:;
    int64_t $tmp2559 = $tmp2523 - i2520.value;
    if ($tmp2525) goto $l2560; else goto $l2561;
    $l2560:;
    if ($tmp2559 >= $tmp2524) goto $l2556; else goto $l2528;
    $l2561:;
    if ($tmp2559 > $tmp2524) goto $l2556; else goto $l2528;
    $l2558:;
    int64_t $tmp2563 = i2520.value - $tmp2523;
    if ($tmp2525) goto $l2564; else goto $l2565;
    $l2564:;
    if ($tmp2563 >= -$tmp2524) goto $l2556; else goto $l2528;
    $l2565:;
    if ($tmp2563 > -$tmp2524) goto $l2556; else goto $l2528;
    $l2556:;
    i2520.value += $tmp2524;
    goto $l2526;
    $l2528:;
    panda$core$Int64 $tmp2568 = panda$collections$Array$get_count$R$panda$core$Int64(args2509);
    panda$core$Bit $tmp2569 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2568, ((panda$core$Int64) { 0 }));
    if ($tmp2569.value) {
    {
        panda$core$Object* $tmp2570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2509, ((panda$core$Int64) { 0 }));
        refTarget2567 = ((panda$core$String*) $tmp2570);
    }
    }
    else {
    {
        refTarget2567 = NULL;
    }
    }
    panda$core$String* $tmp2572 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2567, m2479, isSuper2484, p_out);
    methodRef2571 = $tmp2572;
    separator2573 = &$s2574;
    panda$core$Bit $tmp2575 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2479);
    if ($tmp2575.value) {
    {
        panda$core$Int64 $tmp2576 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2576;
        panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2578, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2577 = $tmp2579;
        panda$core$String* $tmp2581 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2580 = $tmp2581;
        panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2582, resultType2580);
        panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
        panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, indirectVar2577);
        panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
        (($fn2589) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2588);
        panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2590, methodRef2571);
        panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
        panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, resultType2580);
        panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
        panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, indirectVar2577);
        panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
        (($fn2600) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2599);
        separator2573 = &$s2601;
    }
    }
    else {
    {
        panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2602, methodRef2571);
        panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2603, &$s2604);
        (($fn2606) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2605);
    }
    }
    {
        ITable* $tmp2608 = ((panda$collections$Iterable*) args2509)->$class->itable;
        while ($tmp2608->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2608 = $tmp2608->next;
        }
        $fn2610 $tmp2609 = $tmp2608->methods[0];
        panda$collections$Iterator* $tmp2611 = $tmp2609(((panda$collections$Iterable*) args2509));
        a$Iter2607 = $tmp2611;
        $l2612:;
        ITable* $tmp2614 = a$Iter2607->$class->itable;
        while ($tmp2614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2614 = $tmp2614->next;
        }
        $fn2616 $tmp2615 = $tmp2614->methods[0];
        panda$core$Bit $tmp2617 = $tmp2615(a$Iter2607);
        panda$core$Bit $tmp2618 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2617);
        if (!$tmp2618.value) goto $l2613;
        {
            ITable* $tmp2620 = a$Iter2607->$class->itable;
            while ($tmp2620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2620 = $tmp2620->next;
            }
            $fn2622 $tmp2621 = $tmp2620->methods[1];
            panda$core$Object* $tmp2623 = $tmp2621(a$Iter2607);
            a2619 = ((panda$core$String*) $tmp2623);
            (($fn2624) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2573);
            (($fn2625) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2619);
            separator2573 = &$s2626;
        }
        goto $l2612;
        $l2613:;
    }
    (($fn2628) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2627);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2629;
    panda$core$Object* $tmp2630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2631 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2630), p_out);
    test2629 = $tmp2631;
    panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2632, test2629);
    panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2634);
    (($fn2636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2635);
    panda$core$Object* $tmp2637 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2637), p_out);
    (($fn2639) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2638);
    panda$core$Int64 $tmp2640 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2640, ((panda$core$Int64) { 3 }));
    if ($tmp2641.value) {
    {
        (($fn2643) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2642);
        panda$core$Object* $tmp2644 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2644), p_out);
        (($fn2646) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2645);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2647;
    panda$core$String* range2649;
    org$pandalanguage$pandac$IRNode* block2652;
    org$pandalanguage$pandac$Type* t2654;
    panda$core$String* llt2658;
    panda$core$String* indexType2660;
    org$pandalanguage$pandac$ClassDecl* cl2665;
    org$pandalanguage$pandac$FieldDecl* field2668;
    panda$core$String* numberType2676;
    panda$core$String* index2678;
    panda$core$String* start2680;
    panda$core$String* indexValuePtr2697;
    panda$core$String* end2713;
    panda$core$String* step2730;
    panda$core$String* inclusive2743;
    panda$core$String* loopStart2753;
    panda$core$String* loopBody2755;
    panda$core$String* loopEnd2757;
    panda$core$String* loopTest2759;
    panda$core$String* forwardEntry2764;
    panda$core$String* backwardEntry2766;
    panda$core$String* signPrefix2768;
    panda$core$String* direction2773;
    panda$core$String* forwardEntryInclusive2797;
    panda$core$String* forwardEntryExclusive2799;
    panda$core$String* backwardEntryInclusive2842;
    panda$core$String* backwardEntryExclusive2844;
    panda$core$String* backwardEntryExclusiveTest2873;
    panda$core$String* loopInc2889;
    panda$core$String* forwardLabel2891;
    panda$core$String* backwardLabel2893;
    panda$core$String* forwardDelta2906;
    panda$core$String* forwardInclusiveLabel2922;
    panda$core$String* forwardExclusiveLabel2924;
    panda$core$String* forwardExclusiveTest2953;
    panda$core$String* backwardDelta2969;
    panda$core$String* backwardInclusiveLabel2985;
    panda$core$String* backwardExclusiveLabel2987;
    panda$core$String* inc3030;
    panda$core$Object* $tmp2648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2647 = ((org$pandalanguage$pandac$IRNode*) $tmp2648);
    panda$core$Object* $tmp2650 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2651 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2650), p_out);
    range2649 = $tmp2651;
    panda$core$Object* $tmp2653 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2652 = ((org$pandalanguage$pandac$IRNode*) $tmp2653);
    panda$core$Object* $tmp2655 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2657 = (($fn2656) ((org$pandalanguage$pandac$IRNode*) $tmp2655)->type->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2655)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2654 = ((org$pandalanguage$pandac$Type*) $tmp2657);
    panda$core$String* $tmp2659 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2654);
    llt2658 = $tmp2659;
    panda$core$Bit $tmp2661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2654->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2661.value) {
    {
        panda$core$Object* $tmp2663 = (($fn2662) t2654->subtypes->$class->vtable[2])(t2654->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2664 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2663));
        indexType2660 = $tmp2664;
    }
    }
    else {
    {
        indexType2660 = llt2658;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2667 = (($fn2666) self->compiler->$class->vtable[13])(self->compiler, t2654);
    cl2665 = $tmp2667;
    panda$collections$ListView* $tmp2670 = (($fn2669) self->compiler->$class->vtable[10])(self->compiler, cl2665);
    ITable* $tmp2671 = $tmp2670->$class->itable;
    while ($tmp2671->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2671 = $tmp2671->next;
    }
    $fn2673 $tmp2672 = $tmp2671->methods[0];
    panda$core$Object* $tmp2674 = $tmp2672($tmp2670, ((panda$core$Int64) { 0 }));
    field2668 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2674);
    (($fn2675) self->compiler->$class->vtable[7])(self->compiler, field2668);
    panda$core$String* $tmp2677 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2668->type);
    numberType2676 = $tmp2677;
    panda$core$String* $tmp2679 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2647->payload));
    index2678 = $tmp2679;
    panda$core$String* $tmp2681 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2680 = $tmp2681;
    panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2682, numberType2676);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2684);
    panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, start2680);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, &$s2687);
    panda$core$String* $tmp2689 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2654);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, $tmp2689);
    panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, &$s2691);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, range2649);
    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, &$s2694);
    (($fn2696) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2695);
    panda$core$String* $tmp2698 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2697 = $tmp2698;
    org$pandalanguage$pandac$Type* $tmp2701 = (($fn2700) cl2665->$class->vtable[3])(cl2665);
    panda$core$String* $tmp2702 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2701);
    panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2699, $tmp2702);
    panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, &$s2704);
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, index2678);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, &$s2707);
    panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, start2680);
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, &$s2710);
    (($fn2712) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2711);
    panda$core$String* $tmp2714 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2713 = $tmp2714;
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2715, numberType2676);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, end2713);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, &$s2720);
    panda$core$String* $tmp2722 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2654);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, $tmp2722);
    panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, range2649);
    panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
    (($fn2729) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2728);
    panda$core$String* $tmp2731 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2730 = $tmp2731;
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2732, numberType2676);
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, step2730);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, range2649);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
    (($fn2742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2741);
    panda$core$String* $tmp2744 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2743 = $tmp2744;
    panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2745, inclusive2743);
    panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2746, &$s2747);
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, range2649);
    panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
    (($fn2752) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2751);
    panda$core$String* $tmp2754 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2753 = $tmp2754;
    panda$core$String* $tmp2756 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2755 = $tmp2756;
    panda$core$String* $tmp2758 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2757 = $tmp2758;
    panda$core$String* $tmp2760 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2759 = $tmp2760;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2761 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2761->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2761->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2761, ((panda$core$String*) p_f->payload), loopEnd2757, loopTest2759);
    (($fn2763) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp2761));
    panda$core$String* $tmp2765 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2764 = $tmp2765;
    panda$core$String* $tmp2767 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2766 = $tmp2767;
    panda$core$Bit $tmp2770 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2654)->name, &$s2769);
    if ($tmp2770.value) {
    {
        signPrefix2768 = &$s2771;
    }
    }
    else {
    {
        signPrefix2768 = &$s2772;
    }
    }
    panda$core$Bit $tmp2775 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2768, &$s2774);
    if ($tmp2775.value) {
    {
        panda$core$String* $tmp2776 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2773 = $tmp2776;
        panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2777, direction2773);
        panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
        panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, step2730);
        panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
        (($fn2784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2783);
    }
    }
    else {
    {
        direction2773 = &$s2785;
    }
    }
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2786, direction2773);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2788);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, forwardEntry2764);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, backwardEntry2766);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
    (($fn2796) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2795);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2764, p_out);
    panda$core$String* $tmp2798 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2797 = $tmp2798;
    panda$core$String* $tmp2800 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2799 = $tmp2800;
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2801, inclusive2743);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, forwardEntryInclusive2797);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2808, forwardEntryExclusive2799);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2810);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, $tmp2811);
    (($fn2813) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2812);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2797, p_out);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2814, start2680);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, end2713);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, loopStart2753);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, loopEnd2757);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    (($fn2827) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2826);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2799, p_out);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2828, start2680);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, end2713);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, loopStart2753);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, loopEnd2757);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
    (($fn2841) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2840);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2766, p_out);
    panda$core$String* $tmp2843 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2842 = $tmp2843;
    panda$core$String* $tmp2845 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2844 = $tmp2845;
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2846, inclusive2743);
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, backwardEntryInclusive2842);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, &$s2851);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2853, backwardEntryExclusive2844);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, $tmp2856);
    (($fn2858) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2857);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2842, p_out);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2859, start2680);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, &$s2861);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, end2713);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2864);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, loopStart2753);
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, &$s2867);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, loopEnd2757);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, &$s2870);
    (($fn2872) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2871);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2844, p_out);
    panda$core$String* $tmp2874 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2873 = $tmp2874;
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2875, start2680);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, &$s2877);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, end2713);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2880);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, loopStart2753);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, loopEnd2757);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, &$s2886);
    (($fn2888) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2887);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2753, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2652, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2759, p_out);
    panda$core$String* $tmp2890 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2889 = $tmp2890;
    panda$core$String* $tmp2892 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2891 = $tmp2892;
    panda$core$String* $tmp2894 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2893 = $tmp2894;
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2895, direction2773);
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, forwardLabel2891);
    panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, &$s2900);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, backwardLabel2893);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, &$s2903);
    (($fn2905) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2904);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2891, p_out);
    panda$core$String* $tmp2907 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2906 = $tmp2907;
    panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2908, numberType2676);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, forwardDelta2906);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
    panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, end2713);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, index2678);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
    (($fn2921) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2920);
    panda$core$String* $tmp2923 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2922 = $tmp2923;
    panda$core$String* $tmp2925 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2924 = $tmp2925;
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2926, inclusive2743);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, forwardInclusiveLabel2922);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, &$s2931);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2933, forwardExclusiveLabel2924);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, $tmp2936);
    (($fn2938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2937);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2922, p_out);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2939, forwardDelta2906);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, step2730);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, &$s2944);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, loopInc2889);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, loopEnd2757);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
    (($fn2952) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2951);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2924, p_out);
    panda$core$String* $tmp2954 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2953 = $tmp2954;
    panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2955, forwardDelta2906);
    panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2957);
    panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, step2730);
    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, loopInc2889);
    panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, &$s2963);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, loopEnd2757);
    panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, &$s2966);
    (($fn2968) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2967);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2893, p_out);
    panda$core$String* $tmp2970 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2969 = $tmp2970;
    panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2971, numberType2676);
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2973);
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, backwardDelta2969);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, index2678);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, end2713);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
    (($fn2984) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2983);
    panda$core$String* $tmp2986 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2985 = $tmp2986;
    panda$core$String* $tmp2988 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2987 = $tmp2988;
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2989, inclusive2743);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, backwardInclusiveLabel2985);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2996, backwardExclusiveLabel2987);
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, &$s2998);
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, $tmp2999);
    (($fn3001) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3000);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2985, p_out);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3002, backwardDelta2969);
    panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, &$s3004);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, step2730);
    panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, &$s3007);
    panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3008, loopInc2889);
    panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3009, &$s3010);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, loopEnd2757);
    panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
    (($fn3015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3014);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2987, p_out);
    panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3016, backwardDelta2969);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, &$s3018);
    panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, step2730);
    panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
    panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3022, loopInc2889);
    panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, &$s3024);
    panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, loopEnd2757);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
    (($fn3029) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3028);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2889, p_out);
    panda$core$String* $tmp3031 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3030 = $tmp3031;
    panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3032, index2678);
    panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
    panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, step2730);
    panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, &$s3037);
    (($fn3039) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3038);
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3040, loopStart2753);
    panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
    (($fn3044) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3043);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2757, p_out);
    (($fn3045) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3046;
    panda$core$String* loopEnd3048;
    panda$core$String* $tmp3047 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3046 = $tmp3047;
    panda$core$String* $tmp3049 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3048 = $tmp3049;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3050 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3050->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3050->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3050, ((panda$core$String*) p_w->payload), loopEnd3048, loopStart3046);
    (($fn3052) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3050));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3046, p_out);
    panda$core$Object* $tmp3054 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3055 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3054), p_out);
    panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3053, $tmp3055);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
    panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, loopEnd3048);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
    (($fn3062) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3061);
    panda$core$Object* $tmp3063 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3063), p_out);
    panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3064, loopStart3046);
    panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3065, &$s3066);
    (($fn3068) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3067);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3048, p_out);
    (($fn3069) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3070;
    panda$core$String* loopEnd3072;
    panda$core$String* $tmp3071 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3070 = $tmp3071;
    panda$core$String* $tmp3073 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3072 = $tmp3073;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3074 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3074->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3074->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3074, ((panda$core$String*) p_d->payload), loopEnd3072, loopStart3070);
    (($fn3076) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3074));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3070, p_out);
    panda$core$Object* $tmp3077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3077), p_out);
    panda$core$Object* $tmp3079 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3080 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3079), p_out);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3078, $tmp3080);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, &$s3082);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, loopStart3070);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, &$s3085);
    (($fn3087) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3086);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3072, p_out);
    (($fn3088) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3089;
    panda$core$String* loopEnd3091;
    panda$core$String* $tmp3090 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3089 = $tmp3090;
    panda$core$String* $tmp3092 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3091 = $tmp3092;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3093 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3093->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3093->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3093, ((panda$core$String*) p_l->payload), loopEnd3091, loopStart3089);
    (($fn3095) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3093));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3089, p_out);
    (($fn3097) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3096);
    panda$core$Object* $tmp3098 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3098), p_out);
    (($fn3100) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3099);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3091, p_out);
    (($fn3101) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$597083102;
    org$pandalanguage$pandac$Variable* v3104;
    {
        $match$597083102 = p_target->kind;
        panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597083102, ((panda$core$Int64) { 1016 }));
        if ($tmp3103.value) {
        {
            v3104 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3106 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3104->type);
            panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3105, $tmp3106);
            panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
            panda$core$String* $tmp3110 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3104);
            panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, $tmp3110);
            panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, &$s3112);
            (($fn3114) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3113);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3116 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3104);
                panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3115, $tmp3116);
                panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3118);
                panda$core$String* $tmp3120 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, $tmp3120);
                panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
                (($fn3124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3123);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597083102, ((panda$core$Int64) { 1022 }));
        if ($tmp3125.value) {
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
    panda$collections$Iterator* decl$Iter3126;
    org$pandalanguage$pandac$IRNode* decl3138;
    {
        ITable* $tmp3127 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3127 = $tmp3127->next;
        }
        $fn3129 $tmp3128 = $tmp3127->methods[0];
        panda$collections$Iterator* $tmp3130 = $tmp3128(((panda$collections$Iterable*) p_v->children));
        decl$Iter3126 = $tmp3130;
        $l3131:;
        ITable* $tmp3133 = decl$Iter3126->$class->itable;
        while ($tmp3133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3133 = $tmp3133->next;
        }
        $fn3135 $tmp3134 = $tmp3133->methods[0];
        panda$core$Bit $tmp3136 = $tmp3134(decl$Iter3126);
        panda$core$Bit $tmp3137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3136);
        if (!$tmp3137.value) goto $l3132;
        {
            ITable* $tmp3139 = decl$Iter3126->$class->itable;
            while ($tmp3139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3139 = $tmp3139->next;
            }
            $fn3141 $tmp3140 = $tmp3139->methods[1];
            panda$core$Object* $tmp3142 = $tmp3140(decl$Iter3126);
            decl3138 = ((org$pandalanguage$pandac$IRNode*) $tmp3142);
            panda$core$Int64 $tmp3143 = panda$collections$Array$get_count$R$panda$core$Int64(decl3138->children);
            panda$core$Bit $tmp3144 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3143, ((panda$core$Int64) { 1 }));
            if ($tmp3144.value) {
            {
                panda$core$Object* $tmp3145 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3145), ((org$pandalanguage$pandac$IRNode*) $tmp3146), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3147), NULL, p_out);
            }
            }
        }
        goto $l3131;
        $l3132:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$608233148;
    panda$core$String* base3156;
    panda$core$String* result3167;
    {
        $match$608233148 = p_lvalue->kind;
        panda$core$Bit $tmp3149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$608233148, ((panda$core$Int64) { 1009 }));
        if ($tmp3149.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3151 = (($fn3150) self->compiler->$class->vtable[50])(self->compiler, p_lvalue);
            panda$core$String* $tmp3152 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3151, p_out);
            return $tmp3152;
        }
        }
        else {
        panda$core$Bit $tmp3153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$608233148, ((panda$core$Int64) { 1016 }));
        if ($tmp3153.value) {
        {
            panda$core$String* $tmp3154 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3154;
        }
        }
        else {
        panda$core$Bit $tmp3155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$608233148, ((panda$core$Int64) { 1026 }));
        if ($tmp3155.value) {
        {
            panda$core$Object* $tmp3157 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3158 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3157), p_out);
            base3156 = $tmp3158;
            panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3159, base3156);
            panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, &$s3161);
            panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
            return $tmp3165;
        }
        }
        else {
        panda$core$Bit $tmp3166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$608233148, ((panda$core$Int64) { 1027 }));
        if ($tmp3166.value) {
        {
            panda$core$Object* $tmp3168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3169 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3168), p_out);
            result3167 = $tmp3169;
            (($fn3170) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value))), ((panda$core$Object*) result3167));
            return result3167;
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
    panda$core$String* lvalue3171;
    panda$core$String* value3174;
    panda$core$String* t3175;
    panda$core$Int64 op3178;
    panda$core$String* right3180;
    panda$core$Object* $tmp3172 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3173 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3172), p_out);
    lvalue3171 = $tmp3173;
    panda$core$Object* $tmp3176 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3177 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3176)->type);
    t3175 = $tmp3177;
    op3178 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3178, ((panda$core$Int64) { 73 }));
    if ($tmp3179.value) {
    {
        panda$core$Object* $tmp3181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3182 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3181), p_out);
        right3180 = $tmp3182;
        value3174 = right3180;
    }
    }
    else {
    {
    }
    }
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3183, lvalue3171);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, &$s3185);
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, value3174);
    panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, &$s3188);
    (($fn3190) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3189);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3191 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3191, ((panda$core$Int64) { 1 }));
    if ($tmp3192.value) {
    {
        panda$core$Object* $tmp3194 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3195 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3194), p_out);
        panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3193, $tmp3195);
        panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, &$s3197);
        (($fn3199) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3198);
    }
    }
    else {
    {
        (($fn3201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3200);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range $tmp3204;
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3203 = (($fn3202) self->loopDescriptors->$class->vtable[4])(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3203);
    }
    }
    panda$core$Int64 $tmp3206 = (($fn3205) self->loopDescriptors->$class->vtable[7])(self->loopDescriptors);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3204, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp3206)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3208 = ((panda$core$Int64$wrapper*) $tmp3204.start)->value.value;
    panda$core$Int64 i3207 = { $tmp3208 };
    int64_t $tmp3210 = ((panda$core$Int64$wrapper*) $tmp3204.end)->value.value;
    int64_t $tmp3211 = $tmp3204.step.value;
    bool $tmp3212 = $tmp3204.inclusive.value;
    bool $tmp3219 = $tmp3211 > 0;
    if ($tmp3219) goto $l3217; else goto $l3218;
    $l3217:;
    if ($tmp3212) goto $l3220; else goto $l3221;
    $l3220:;
    if ($tmp3208 <= $tmp3210) goto $l3213; else goto $l3215;
    $l3221:;
    if ($tmp3208 < $tmp3210) goto $l3213; else goto $l3215;
    $l3218:;
    if ($tmp3212) goto $l3222; else goto $l3223;
    $l3222:;
    if ($tmp3208 >= $tmp3210) goto $l3213; else goto $l3215;
    $l3223:;
    if ($tmp3208 > $tmp3210) goto $l3213; else goto $l3215;
    $l3213:;
    {
        panda$core$Object* $tmp3227 = (($fn3226) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3207);
        bool $tmp3225 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3227)->loopLabel != NULL }).value;
        if (!$tmp3225) goto $l3228;
        panda$core$Object* $tmp3230 = (($fn3229) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3207);
        panda$core$Bit $tmp3231 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3230)->loopLabel, p_name);
        $tmp3225 = $tmp3231.value;
        $l3228:;
        panda$core$Bit $tmp3232 = { $tmp3225 };
        if ($tmp3232.value) {
        {
            panda$core$Object* $tmp3234 = (($fn3233) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3207);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3234);
        }
        }
    }
    $l3216:;
    if ($tmp3219) goto $l3236; else goto $l3237;
    $l3236:;
    int64_t $tmp3238 = $tmp3210 - i3207.value;
    if ($tmp3212) goto $l3239; else goto $l3240;
    $l3239:;
    if ($tmp3238 >= $tmp3211) goto $l3235; else goto $l3215;
    $l3240:;
    if ($tmp3238 > $tmp3211) goto $l3235; else goto $l3215;
    $l3237:;
    int64_t $tmp3242 = i3207.value - $tmp3210;
    if ($tmp3212) goto $l3243; else goto $l3244;
    $l3243:;
    if ($tmp3242 >= -$tmp3211) goto $l3235; else goto $l3215;
    $l3244:;
    if ($tmp3242 > -$tmp3211) goto $l3235; else goto $l3215;
    $l3235:;
    i3207.value += $tmp3211;
    goto $l3213;
    $l3215:;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3246;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3247 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3246 = $tmp3247;
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3248, desc3246->breakLabel);
    panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
    (($fn3252) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3251);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3253;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3254 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3253 = $tmp3254;
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3255, desc3253->continueLabel);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
    (($fn3259) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3258);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$654573260;
    {
        $match$654573260 = p_stmt->kind;
        panda$core$Bit $tmp3261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1023 }));
        if ($tmp3261.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1000 }));
        if ($tmp3262.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1005 }));
        if ($tmp3263.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1012 }));
        if ($tmp3264.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1029 }));
        if ($tmp3265.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1013 }));
        if ($tmp3266.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1014 }));
        if ($tmp3267.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1015 }));
        if ($tmp3268.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1017 }));
        bool $tmp3271 = $tmp3272.value;
        if ($tmp3271) goto $l3273;
        panda$core$Bit $tmp3274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1018 }));
        $tmp3271 = $tmp3274.value;
        $l3273:;
        panda$core$Bit $tmp3275 = { $tmp3271 };
        bool $tmp3270 = $tmp3275.value;
        if ($tmp3270) goto $l3276;
        panda$core$Bit $tmp3277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1019 }));
        $tmp3270 = $tmp3277.value;
        $l3276:;
        panda$core$Bit $tmp3278 = { $tmp3270 };
        bool $tmp3269 = $tmp3278.value;
        if ($tmp3269) goto $l3279;
        panda$core$Bit $tmp3280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1020 }));
        $tmp3269 = $tmp3280.value;
        $l3279:;
        panda$core$Bit $tmp3281 = { $tmp3269 };
        if ($tmp3281.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1008 }));
        if ($tmp3282.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1006 }));
        if ($tmp3283.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1007 }));
        if ($tmp3284.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$654573260, ((panda$core$Int64) { 1034 }));
        if ($tmp3285.value) {
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
    panda$core$String* result3286;
    org$pandalanguage$pandac$Type* $tmp3288 = (($fn3287) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp3289 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3288);
    result3286 = $tmp3289;
    panda$core$Bit $tmp3291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3290 = $tmp3291.value;
    if (!$tmp3290) goto $l3292;
    panda$core$Bit $tmp3294 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3286, &$s3293);
    panda$core$Bit $tmp3295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3294);
    $tmp3290 = $tmp3295.value;
    $l3292:;
    panda$core$Bit $tmp3296 = { $tmp3290 };
    if ($tmp3296.value) {
    {
        panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3286, &$s3297);
        return $tmp3298;
    }
    }
    return result3286;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3311;
    panda$collections$Iterator* p$Iter3323;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3335;
    panda$io$MemoryOutputStream* bodyBuffer3357;
    panda$io$IndentedOutputStream* indentedBody3360;
    panda$collections$Iterator* s$Iter3363;
    org$pandalanguage$pandac$IRNode* s3375;
    self->currentMethod = p_m;
    self->currentBlock = &$s3299;
    (($fn3300) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3302 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3301, $tmp3302);
    panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
    panda$core$String* $tmp3306 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, $tmp3306);
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, &$s3308);
    (($fn3310) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3309);
    separator3311 = &$s3312;
    panda$core$Bit $tmp3314 = (($fn3313) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp3315 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3314);
    if ($tmp3315.value) {
    {
        panda$core$String* $tmp3317 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3316, $tmp3317);
        panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
        (($fn3321) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3320);
        separator3311 = &$s3322;
    }
    }
    {
        ITable* $tmp3324 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3324->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3324 = $tmp3324->next;
        }
        $fn3326 $tmp3325 = $tmp3324->methods[0];
        panda$collections$Iterator* $tmp3327 = $tmp3325(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3323 = $tmp3327;
        $l3328:;
        ITable* $tmp3330 = p$Iter3323->$class->itable;
        while ($tmp3330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3330 = $tmp3330->next;
        }
        $fn3332 $tmp3331 = $tmp3330->methods[0];
        panda$core$Bit $tmp3333 = $tmp3331(p$Iter3323);
        panda$core$Bit $tmp3334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3333);
        if (!$tmp3334.value) goto $l3329;
        {
            ITable* $tmp3336 = p$Iter3323->$class->itable;
            while ($tmp3336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3336 = $tmp3336->next;
            }
            $fn3338 $tmp3337 = $tmp3336->methods[1];
            panda$core$Object* $tmp3339 = $tmp3337(p$Iter3323);
            p3335 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3339);
            panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3340, separator3311);
            panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
            panda$core$String* $tmp3344 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3335->type);
            panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, $tmp3344);
            panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, &$s3346);
            panda$core$String* $tmp3348 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3335->name);
            panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3347, $tmp3348);
            panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3350);
            (($fn3352) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3351);
            separator3311 = &$s3353;
        }
        goto $l3328;
        $l3329:;
    }
    (($fn3355) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3354);
    panda$core$Int64 $tmp3356 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3356;
    panda$io$MemoryOutputStream* $tmp3358 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3358->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3358->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3358);
    bodyBuffer3357 = $tmp3358;
    panda$io$IndentedOutputStream* $tmp3361 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3361->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3361->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3361, ((panda$io$OutputStream*) bodyBuffer3357));
    indentedBody3360 = $tmp3361;
    {
        ITable* $tmp3364 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3364->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3364 = $tmp3364->next;
        }
        $fn3366 $tmp3365 = $tmp3364->methods[0];
        panda$collections$Iterator* $tmp3367 = $tmp3365(((panda$collections$Iterable*) p_body->children));
        s$Iter3363 = $tmp3367;
        $l3368:;
        ITable* $tmp3370 = s$Iter3363->$class->itable;
        while ($tmp3370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3370 = $tmp3370->next;
        }
        $fn3372 $tmp3371 = $tmp3370->methods[0];
        panda$core$Bit $tmp3373 = $tmp3371(s$Iter3363);
        panda$core$Bit $tmp3374 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3373);
        if (!$tmp3374.value) goto $l3369;
        {
            ITable* $tmp3376 = s$Iter3363->$class->itable;
            while ($tmp3376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3376 = $tmp3376->next;
            }
            $fn3378 $tmp3377 = $tmp3376->methods[1];
            panda$core$Object* $tmp3379 = $tmp3377(s$Iter3363);
            s3375 = ((org$pandalanguage$pandac$IRNode*) $tmp3379);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3375, indentedBody3360);
        }
        goto $l3368;
        $l3369:;
    }
    panda$core$String* $tmp3381 = (($fn3380) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn3382) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3381);
    panda$core$String* $tmp3384 = (($fn3383) bodyBuffer3357->$class->vtable[0])(bodyBuffer3357);
    (($fn3385) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3384);
    panda$core$Int64 $tmp3386 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3386;
    (($fn3388) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3387);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3390 = (($fn3389) self->compiler->$class->vtable[9])(self->compiler, p_cl);
    if ($tmp3390.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3392 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3391, $tmp3392);
        panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
        panda$core$String* $tmp3396 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, $tmp3396);
        panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, &$s3398);
        panda$core$String* $tmp3401 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3400, $tmp3401);
        panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, &$s3403);
        panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, $tmp3404);
        (($fn3406) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3405);
        panda$core$String* $tmp3408 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3407, $tmp3408);
        panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3409, &$s3410);
        panda$core$String* $tmp3413 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3412, $tmp3413);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
        org$pandalanguage$pandac$Type* $tmp3418 = (($fn3417) p_cl->$class->vtable[3])(p_cl);
        panda$core$Int64 $tmp3419 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3418);
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3416, ((panda$core$Object*) wrap_panda$core$Int64($tmp3419)));
        panda$core$String* $tmp3422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, &$s3421);
        panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, $tmp3422);
        (($fn3424) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3423);
        panda$core$String* $tmp3427 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3426, $tmp3427);
        panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, &$s3429);
        panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3425, $tmp3430);
        (($fn3432) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3431);
        (($fn3434) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3433);
        (($fn3436) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3435);
        (($fn3438) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3437);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    (($fn3439) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->shimsBuffer));
    (($fn3440) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->wrapperShimsBuffer));
    (($fn3441) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->types));
    (($fn3442) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->strings));
    (($fn3443) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->methodsBuffer));
    (($fn3444) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
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
        panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3445, self->loopLabel);
        panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3446, &$s3447);
        return $tmp3448;
    }
    }
    else {
    {
        return &$s3449;
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    panda$collections$Array* $tmp3450 = (panda$collections$Array*) malloc(40);
    $tmp3450->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3450->refCount.value = 1;
    panda$collections$Array$init($tmp3450);
    self->returns = $tmp3450;
    self->varSuffix = p_varSuffix;
    self->selfRef = p_selfRef;
    panda$collections$ImmutableArray* $tmp3452 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp3452->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp3452->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp3452, p_argRefs);
    self->argRefs = $tmp3452;
    self->exitLabel = p_exitLabel;
}
void org$pandalanguage$pandac$CCodeGenerator$Pair$init$org$pandalanguage$pandac$CCodeGenerator$Pair$A$org$pandalanguage$pandac$CCodeGenerator$Pair$B(org$pandalanguage$pandac$CCodeGenerator$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    self->first = p_first;
    self->second = p_second;
}
void org$pandalanguage$pandac$CCodeGenerator$OpClass$init(org$pandalanguage$pandac$CCodeGenerator$OpClass* self) {
}

