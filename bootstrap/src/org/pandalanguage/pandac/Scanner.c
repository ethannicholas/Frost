#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Stack.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn40)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn46)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn52)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn65)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn71)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn77)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn134)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn171)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn183)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn230)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn236)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn242)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn257)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn263)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn269)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn292)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn304)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn328)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn334)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn352)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn358)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn364)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn378)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn384)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn390)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn406)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn412)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn418)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn437)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn465)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn471)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn477)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn490)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn496)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn502)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn509)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn515)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn521)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn535)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn541)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn553)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn567)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn573)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn579)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn623)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn642)(panda$core$Weak*);
typedef panda$core$Object* (*$fn657)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn742)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn748)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn754)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn764)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn770)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn776)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn893)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn899)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn905)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn921)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn924)(panda$core$Weak*);
typedef panda$core$Object* (*$fn930)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn936)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn942)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn948)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn953)(panda$core$Weak*);
typedef panda$core$Object* (*$fn955)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn973)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn979)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn985)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn997)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1001)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1009)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1015)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1021)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1032)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1081)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1087)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1093)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1099)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1106)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1118)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1145)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = NULL;
    {
        panda$core$Weak* $tmp2 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) p_compiler));
        self->compiler = $tmp2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$19_93;
    org$pandalanguage$pandac$Position position5;
    panda$core$String* name7;
    org$pandalanguage$pandac$Position position11;
    org$pandalanguage$pandac$ASTNode* base13;
    panda$collections$Array* subtypes15;
    org$pandalanguage$pandac$Type* tmp118;
    org$pandalanguage$pandac$Position position24;
    panda$core$String* base26;
    panda$collections$ImmutableArray* args28;
    panda$collections$Array* subtypes30;
    panda$core$MutableString* name32;
    panda$core$Char8 $tmp34;
    panda$core$String* separator35;
    panda$collections$Iterator* Iter$31$1737;
    org$pandalanguage$pandac$ASTNode* arg49;
    org$pandalanguage$pandac$Type* subtype54;
    panda$core$Char8 $tmp57;
    org$pandalanguage$pandac$Type* tmp258;
    {
        $match$19_93 = p_type;
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_93->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp4.value) {
        {
            org$pandalanguage$pandac$Position* $tmp6 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_93->$data + 0));
            position5 = *$tmp6;
            panda$core$String** $tmp8 = ((panda$core$String**) ((char*) $match$19_93->$data + 16));
            name7 = *$tmp8;
            org$pandalanguage$pandac$Type* $tmp9 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp9, name7, ((panda$core$Int64) { 10 }), position5);
            return $tmp9;
        }
        }
        else {
        panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_93->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp10.value) {
        {
            org$pandalanguage$pandac$Position* $tmp12 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_93->$data + 0));
            position11 = *$tmp12;
            org$pandalanguage$pandac$ASTNode** $tmp14 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$19_93->$data + 16));
            base13 = *$tmp14;
            panda$collections$Array* $tmp16 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp16);
            subtypes15 = $tmp16;
            org$pandalanguage$pandac$Type* $tmp17 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base13);
            panda$collections$Array$add$panda$collections$Array$T(subtypes15, ((panda$core$Object*) $tmp17));
            {
                org$pandalanguage$pandac$Type* $tmp19 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp20 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes15, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp20))->name, &$s21);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp19, $tmp22, ((panda$core$Int64) { 11 }), position11, ((panda$collections$ListView*) subtypes15), ((panda$core$Bit) { false }));
                tmp118 = $tmp19;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes15));
                return tmp118;
            }
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_93->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_93->$data + 0));
            position24 = *$tmp25;
            panda$core$String** $tmp27 = ((panda$core$String**) ((char*) $match$19_93->$data + 16));
            base26 = *$tmp27;
            panda$collections$ImmutableArray** $tmp29 = ((panda$collections$ImmutableArray**) ((char*) $match$19_93->$data + 24));
            args28 = *$tmp29;
            panda$collections$Array* $tmp31 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp31);
            subtypes30 = $tmp31;
            panda$core$MutableString* $tmp33 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp33, base26);
            name32 = $tmp33;
            panda$core$Char8$init$panda$core$UInt8(&$tmp34, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name32, $tmp34);
            separator35 = &$s36;
            {
                ITable* $tmp38 = ((panda$collections$Iterable*) args28)->$class->itable;
                while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp38 = $tmp38->next;
                }
                $fn40 $tmp39 = $tmp38->methods[0];
                panda$collections$Iterator* $tmp41 = $tmp39(((panda$collections$Iterable*) args28));
                Iter$31$1737 = $tmp41;
                $l42:;
                ITable* $tmp44 = Iter$31$1737->$class->itable;
                while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp44 = $tmp44->next;
                }
                $fn46 $tmp45 = $tmp44->methods[0];
                panda$core$Bit $tmp47 = $tmp45(Iter$31$1737);
                panda$core$Bit $tmp48 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp47);
                if (!$tmp48.value) goto $l43;
                {
                    ITable* $tmp50 = Iter$31$1737->$class->itable;
                    while ($tmp50->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp50 = $tmp50->next;
                    }
                    $fn52 $tmp51 = $tmp50->methods[1];
                    panda$core$Object* $tmp53 = $tmp51(Iter$31$1737);
                    arg49 = ((org$pandalanguage$pandac$ASTNode*) $tmp53);
                    org$pandalanguage$pandac$Type* $tmp55 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg49);
                    subtype54 = $tmp55;
                    panda$collections$Array$add$panda$collections$Array$T(subtypes30, ((panda$core$Object*) subtype54));
                    panda$core$MutableString$append$panda$core$String(name32, separator35);
                    panda$core$MutableString$append$panda$core$String(name32, ((org$pandalanguage$pandac$Symbol*) subtype54)->name);
                    {
                        separator35 = &$s56;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator35));
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg49));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtype54));
                    }
                }
                goto $l42;
                $l43:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$31$1737));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp57, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name32, $tmp57);
            {
                org$pandalanguage$pandac$Type* $tmp59 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp60 = panda$core$MutableString$finish$R$panda$core$String(name32);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp59, $tmp60, ((panda$core$Int64) { 21 }), position24, ((panda$collections$ListView*) subtypes30), ((panda$core$Bit) { false }));
                tmp258 = $tmp59;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes30));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator35));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name32));
                }
                return tmp258;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags61;
    panda$collections$Iterator* Iter$47$962;
    org$pandalanguage$pandac$ASTNode* c74;
    org$pandalanguage$pandac$ASTNode* $match$48_1379;
    org$pandalanguage$pandac$Position position81;
    panda$core$String* text83;
    panda$core$String* $match$50_2185;
    flags61 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp63 = ((panda$collections$Iterable*) p_a)->$class->itable;
        while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp63 = $tmp63->next;
        }
        $fn65 $tmp64 = $tmp63->methods[0];
        panda$collections$Iterator* $tmp66 = $tmp64(((panda$collections$Iterable*) p_a));
        Iter$47$962 = $tmp66;
        $l67:;
        ITable* $tmp69 = Iter$47$962->$class->itable;
        while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp69 = $tmp69->next;
        }
        $fn71 $tmp70 = $tmp69->methods[0];
        panda$core$Bit $tmp72 = $tmp70(Iter$47$962);
        panda$core$Bit $tmp73 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp72);
        if (!$tmp73.value) goto $l68;
        {
            ITable* $tmp75 = Iter$47$962->$class->itable;
            while ($tmp75->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp75 = $tmp75->next;
            }
            $fn77 $tmp76 = $tmp75->methods[1];
            panda$core$Object* $tmp78 = $tmp76(Iter$47$962);
            c74 = ((org$pandalanguage$pandac$ASTNode*) $tmp78);
            {
                $match$48_1379 = c74;
                panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$48_1379->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp80.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp82 = ((org$pandalanguage$pandac$Position*) ((char*) $match$48_1379->$data + 0));
                    position81 = *$tmp82;
                    panda$core$String** $tmp84 = ((panda$core$String**) ((char*) $match$48_1379->$data + 16));
                    text83 = *$tmp84;
                    {
                        $match$50_2185 = text83;
                        panda$core$Bit $tmp87 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s86);
                        if ($tmp87.value) {
                        {
                            panda$core$Int64 $tmp88 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                            panda$core$Int64 $tmp89 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp88);
                            flags61 = $tmp89;
                        }
                        }
                        else {
                        panda$core$Bit $tmp91 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s90);
                        if ($tmp91.value) {
                        {
                            panda$core$Int64 $tmp92 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                            panda$core$Int64 $tmp93 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp92);
                            flags61 = $tmp93;
                        }
                        }
                        else {
                        panda$core$Bit $tmp95 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s94);
                        if ($tmp95.value) {
                        {
                            panda$core$Int64 $tmp96 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                            panda$core$Int64 $tmp97 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp96);
                            flags61 = $tmp97;
                        }
                        }
                        else {
                        panda$core$Bit $tmp99 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s98);
                        if ($tmp99.value) {
                        {
                            panda$core$Int64 $tmp100 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                            panda$core$Int64 $tmp101 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp100);
                            flags61 = $tmp101;
                        }
                        }
                        else {
                        panda$core$Bit $tmp103 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s102);
                        if ($tmp103.value) {
                        {
                            panda$core$Int64 $tmp104 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                            panda$core$Int64 $tmp105 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp104);
                            flags61 = $tmp105;
                        }
                        }
                        else {
                        panda$core$Bit $tmp107 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s106);
                        if ($tmp107.value) {
                        {
                            panda$core$Int64 $tmp108 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                            panda$core$Int64 $tmp109 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp108);
                            flags61 = $tmp109;
                        }
                        }
                        else {
                        panda$core$Bit $tmp111 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s110);
                        if ($tmp111.value) {
                        {
                            panda$core$Int64 $tmp112 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                            panda$core$Int64 $tmp113 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp112);
                            flags61 = $tmp113;
                        }
                        }
                        else {
                        panda$core$Bit $tmp115 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s114);
                        if ($tmp115.value) {
                        {
                            panda$core$Int64 $tmp116 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                            panda$core$Int64 $tmp117 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp116);
                            flags61 = $tmp117;
                        }
                        }
                        else {
                        panda$core$Bit $tmp119 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s118);
                        if ($tmp119.value) {
                        {
                            panda$core$Int64 $tmp120 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp121 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp120);
                            flags61 = $tmp121;
                        }
                        }
                        else {
                        panda$core$Bit $tmp123 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s122);
                        if ($tmp123.value) {
                        {
                            panda$core$Int64 $tmp124 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                            panda$core$Int64 $tmp125 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp124);
                            flags61 = $tmp125;
                        }
                        }
                        else {
                        panda$core$Bit $tmp127 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s126);
                        if ($tmp127.value) {
                        {
                            panda$core$Int64 $tmp128 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                            panda$core$Int64 $tmp129 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp128);
                            flags61 = $tmp129;
                        }
                        }
                        else {
                        panda$core$Bit $tmp131 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_2185, &$s130);
                        if ($tmp131.value) {
                        {
                            panda$core$Int64 $tmp132 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                            panda$core$Int64 $tmp133 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags61, $tmp132);
                            flags61 = $tmp133;
                        }
                        }
                        else {
                        {
                            panda$core$Object* $tmp135 = (($fn134) self->compiler->$class->vtable[2])(self->compiler);
                            panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s136, text83);
                            panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s138);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp135), position81, $tmp139);
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
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c74));
        }
        goto $l67;
        $l68:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$47$962));
    }
    org$pandalanguage$pandac$Annotations* $tmp140 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp140, flags61);
    return $tmp140;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment141;
    org$pandalanguage$pandac$ASTNode* $match$81_13142;
    org$pandalanguage$pandac$Position position144;
    panda$core$String* text146;
    org$pandalanguage$pandac$Annotations* annotations148;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind150;
    org$pandalanguage$pandac$ASTNode* $match$90_9151;
    org$pandalanguage$pandac$Variable$Kind kind153;
    panda$collections$ImmutableArray* decls155;
    org$pandalanguage$pandac$Variable$Kind $match$92_17157;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp159;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp161;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp163;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp167;
    panda$collections$Iterator* Iter$103$17168;
    org$pandalanguage$pandac$ASTNode* decl180;
    org$pandalanguage$pandac$ASTNode* $match$104_21185;
    org$pandalanguage$pandac$Position declPosition187;
    org$pandalanguage$pandac$ASTNode* target189;
    org$pandalanguage$pandac$ASTNode* value191;
    panda$core$String* name193;
    org$pandalanguage$pandac$Type* type194;
    org$pandalanguage$pandac$ASTNode* $match$108_29195;
    panda$core$String* id197;
    panda$core$String* id201;
    org$pandalanguage$pandac$ASTNode* idType203;
    org$pandalanguage$pandac$FieldDecl* field206;
    memset(&doccomment141, 0, sizeof(doccomment141));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment141 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment141));
        }
    }
    }
    else {
    {
        {
            $match$81_13142 = p_rawDoccomment;
            panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_13142->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp143.value) {
            {
                org$pandalanguage$pandac$Position* $tmp145 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_13142->$data + 0));
                position144 = *$tmp145;
                panda$core$String** $tmp147 = ((panda$core$String**) ((char*) $match$81_13142->$data + 16));
                text146 = *$tmp147;
                {
                    doccomment141 = text146;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment141));
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
    }
    }
    org$pandalanguage$pandac$Annotations* $tmp149 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations148 = $tmp149;
    memset(&fieldKind150, 0, sizeof(fieldKind150));
    {
        $match$90_9151 = p_varDecl;
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_9151->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp152.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp154 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$90_9151->$data + 16));
            kind153 = *$tmp154;
            panda$collections$ImmutableArray** $tmp156 = ((panda$collections$ImmutableArray**) ((char*) $match$90_9151->$data + 24));
            decls155 = *$tmp156;
            {
                $match$92_17157 = kind153;
                panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17157.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp158.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp159, ((panda$core$Int64) { 0 }));
                    fieldKind150 = $tmp159;
                }
                }
                else {
                panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17157.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp160.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp161, ((panda$core$Int64) { 1 }));
                    fieldKind150 = $tmp161;
                }
                }
                else {
                panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17157.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp162.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp163, ((panda$core$Int64) { 2 }));
                    fieldKind150 = $tmp163;
                    panda$core$Int64 $tmp164 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp165 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations148->flags, $tmp164);
                    annotations148->flags = $tmp165;
                }
                }
                else {
                panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17157.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp166.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp167, ((panda$core$Int64) { 3 }));
                    fieldKind150 = $tmp167;
                }
                }
                }
                }
                }
            }
            {
                ITable* $tmp169 = ((panda$collections$Iterable*) decls155)->$class->itable;
                while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp169 = $tmp169->next;
                }
                $fn171 $tmp170 = $tmp169->methods[0];
                panda$collections$Iterator* $tmp172 = $tmp170(((panda$collections$Iterable*) decls155));
                Iter$103$17168 = $tmp172;
                $l173:;
                ITable* $tmp175 = Iter$103$17168->$class->itable;
                while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp175 = $tmp175->next;
                }
                $fn177 $tmp176 = $tmp175->methods[0];
                panda$core$Bit $tmp178 = $tmp176(Iter$103$17168);
                panda$core$Bit $tmp179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp178);
                if (!$tmp179.value) goto $l174;
                {
                    ITable* $tmp181 = Iter$103$17168->$class->itable;
                    while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp181 = $tmp181->next;
                    }
                    $fn183 $tmp182 = $tmp181->methods[1];
                    panda$core$Object* $tmp184 = $tmp182(Iter$103$17168);
                    decl180 = ((org$pandalanguage$pandac$ASTNode*) $tmp184);
                    {
                        $match$104_21185 = decl180;
                        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$104_21185->$rawValue, ((panda$core$Int64) { 11 }));
                        if ($tmp186.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp188 = ((org$pandalanguage$pandac$Position*) ((char*) $match$104_21185->$data + 0));
                            declPosition187 = *$tmp188;
                            org$pandalanguage$pandac$ASTNode** $tmp190 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$104_21185->$data + 16));
                            target189 = *$tmp190;
                            org$pandalanguage$pandac$ASTNode** $tmp192 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$104_21185->$data + 24));
                            value191 = *$tmp192;
                            memset(&name193, 0, sizeof(name193));
                            memset(&type194, 0, sizeof(type194));
                            {
                                $match$108_29195 = target189;
                                panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_29195->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp196.value) {
                                {
                                    panda$core$String** $tmp198 = ((panda$core$String**) ((char*) $match$108_29195->$data + 16));
                                    id197 = *$tmp198;
                                    {
                                        name193 = id197;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name193));
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp199 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                        type194 = $tmp199;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type194));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_29195->$rawValue, ((panda$core$Int64) { 37 }));
                                if ($tmp200.value) {
                                {
                                    panda$core$String** $tmp202 = ((panda$core$String**) ((char*) $match$108_29195->$data + 16));
                                    id201 = *$tmp202;
                                    org$pandalanguage$pandac$ASTNode** $tmp204 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$108_29195->$data + 24));
                                    idType203 = *$tmp204;
                                    {
                                        name193 = id201;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name193));
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp205 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType203);
                                        type194 = $tmp205;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type194));
                                    }
                                }
                                }
                                else {
                                {
                                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                }
                                }
                                }
                            }
                            org$pandalanguage$pandac$FieldDecl* $tmp207 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp207, p_owner, declPosition187, doccomment141, annotations148, fieldKind150, name193, type194, value191);
                            field206 = $tmp207;
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field206));
                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field206));
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$108_29195));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field206));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type194));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name193));
                            }
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl180));
                }
                goto $l173;
                $l174:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$103$17168));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment141));
    }
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$133_9208;
    org$pandalanguage$pandac$ASTNode* test210;
    org$pandalanguage$pandac$ASTNode* left214;
    org$pandalanguage$pandac$ASTNode* right216;
    panda$collections$ImmutableArray* statements224;
    panda$core$Int64 result226;
    panda$collections$Iterator* Iter$142$17227;
    org$pandalanguage$pandac$ASTNode* s239;
    org$pandalanguage$pandac$ASTNode* target248;
    panda$collections$ImmutableArray* args250;
    panda$core$Int64 result252;
    panda$collections$Iterator* Iter$150$17254;
    org$pandalanguage$pandac$ASTNode* a266;
    org$pandalanguage$pandac$ASTNode* base274;
    org$pandalanguage$pandac$ASTNode* value279;
    panda$collections$ImmutableArray* statements283;
    org$pandalanguage$pandac$ASTNode* test285;
    panda$core$Int64 result287;
    panda$collections$Iterator* Iter$165$17289;
    org$pandalanguage$pandac$ASTNode* s301;
    org$pandalanguage$pandac$ASTNode* base309;
    org$pandalanguage$pandac$ASTNode* list313;
    panda$collections$ImmutableArray* statements315;
    panda$core$Int64 result317;
    panda$collections$Iterator* Iter$173$17319;
    org$pandalanguage$pandac$ASTNode* s331;
    org$pandalanguage$pandac$ASTNode* test341;
    panda$collections$ImmutableArray* ifTrue343;
    org$pandalanguage$pandac$ASTNode* ifFalse345;
    panda$core$Int64 result347;
    panda$collections$Iterator* Iter$183$17349;
    org$pandalanguage$pandac$ASTNode* s361;
    panda$collections$ImmutableArray* statements372;
    panda$core$Int64 result374;
    panda$collections$Iterator* Iter$194$17375;
    org$pandalanguage$pandac$ASTNode* s387;
    org$pandalanguage$pandac$ASTNode* value395;
    panda$collections$ImmutableArray* whens397;
    panda$collections$ImmutableArray* other399;
    panda$core$Int64 result401;
    panda$collections$Iterator* Iter$200$17403;
    org$pandalanguage$pandac$ASTNode* w415;
    panda$collections$Iterator* Iter$204$21422;
    org$pandalanguage$pandac$ASTNode* s434;
    org$pandalanguage$pandac$ASTNode* base444;
    org$pandalanguage$pandac$ASTNode* value451;
    panda$collections$ImmutableArray* decls459;
    panda$core$Int64 result461;
    panda$collections$Iterator* Iter$234$17462;
    org$pandalanguage$pandac$ASTNode* decl474;
    panda$collections$ImmutableArray* tests482;
    panda$collections$ImmutableArray* statements484;
    panda$core$Int64 result486;
    panda$collections$Iterator* Iter$240$17487;
    org$pandalanguage$pandac$ASTNode* test499;
    panda$collections$Iterator* Iter$243$17506;
    org$pandalanguage$pandac$ASTNode* s518;
    org$pandalanguage$pandac$ASTNode* test526;
    panda$collections$ImmutableArray* statements528;
    panda$core$Int64 result530;
    panda$collections$Iterator* Iter$249$17532;
    org$pandalanguage$pandac$ASTNode* s544;
    {
        $match$133_9208 = p_node;
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp211 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 16));
            test210 = *$tmp211;
            panda$core$Int64 $tmp212 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test210);
            return $tmp212;
        }
        }
        else {
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp213.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp215 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 16));
            left214 = *$tmp215;
            org$pandalanguage$pandac$ASTNode** $tmp217 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 32));
            right216 = *$tmp217;
            panda$core$Int64 $tmp218 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left214);
            panda$core$Int64 $tmp219 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp218);
            panda$core$Int64 $tmp220 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right216);
            panda$core$Int64 $tmp221 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp219, $tmp220);
            return $tmp221;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp222.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp223.value) {
        {
            panda$collections$ImmutableArray** $tmp225 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 16));
            statements224 = *$tmp225;
            result226 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp228 = ((panda$collections$Iterable*) statements224)->$class->itable;
                while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp228 = $tmp228->next;
                }
                $fn230 $tmp229 = $tmp228->methods[0];
                panda$collections$Iterator* $tmp231 = $tmp229(((panda$collections$Iterable*) statements224));
                Iter$142$17227 = $tmp231;
                $l232:;
                ITable* $tmp234 = Iter$142$17227->$class->itable;
                while ($tmp234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp234 = $tmp234->next;
                }
                $fn236 $tmp235 = $tmp234->methods[0];
                panda$core$Bit $tmp237 = $tmp235(Iter$142$17227);
                panda$core$Bit $tmp238 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp237);
                if (!$tmp238.value) goto $l233;
                {
                    ITable* $tmp240 = Iter$142$17227->$class->itable;
                    while ($tmp240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp240 = $tmp240->next;
                    }
                    $fn242 $tmp241 = $tmp240->methods[1];
                    panda$core$Object* $tmp243 = $tmp241(Iter$142$17227);
                    s239 = ((org$pandalanguage$pandac$ASTNode*) $tmp243);
                    panda$core$Int64 $tmp244 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s239);
                    panda$core$Int64 $tmp245 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result226, $tmp244);
                    result226 = $tmp245;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s239));
                }
                goto $l232;
                $l233:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$142$17227));
            }
            return result226;
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp246.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp247.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp249 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 16));
            target248 = *$tmp249;
            panda$collections$ImmutableArray** $tmp251 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 24));
            args250 = *$tmp251;
            panda$core$Int64 $tmp253 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target248);
            result252 = $tmp253;
            {
                ITable* $tmp255 = ((panda$collections$Iterable*) args250)->$class->itable;
                while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp255 = $tmp255->next;
                }
                $fn257 $tmp256 = $tmp255->methods[0];
                panda$collections$Iterator* $tmp258 = $tmp256(((panda$collections$Iterable*) args250));
                Iter$150$17254 = $tmp258;
                $l259:;
                ITable* $tmp261 = Iter$150$17254->$class->itable;
                while ($tmp261->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp261 = $tmp261->next;
                }
                $fn263 $tmp262 = $tmp261->methods[0];
                panda$core$Bit $tmp264 = $tmp262(Iter$150$17254);
                panda$core$Bit $tmp265 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp264);
                if (!$tmp265.value) goto $l260;
                {
                    ITable* $tmp267 = Iter$150$17254->$class->itable;
                    while ($tmp267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp267 = $tmp267->next;
                    }
                    $fn269 $tmp268 = $tmp267->methods[1];
                    panda$core$Object* $tmp270 = $tmp268(Iter$150$17254);
                    a266 = ((org$pandalanguage$pandac$ASTNode*) $tmp270);
                    panda$core$Int64 $tmp271 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a266);
                    panda$core$Int64 $tmp272 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result252, $tmp271);
                    result252 = $tmp272;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a266));
                }
                goto $l259;
                $l260:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$150$17254));
            }
            return result252;
        }
        }
        else {
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp273.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp275 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 16));
            base274 = *$tmp275;
            panda$core$Int64 $tmp276 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base274);
            return $tmp276;
        }
        }
        else {
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp277.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp278.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp280 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 24));
            value279 = *$tmp280;
            if (((panda$core$Bit) { value279 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp281 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value279);
            return $tmp281;
        }
        }
        else {
        panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp282.value) {
        {
            panda$collections$ImmutableArray** $tmp284 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 24));
            statements283 = *$tmp284;
            org$pandalanguage$pandac$ASTNode** $tmp286 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 32));
            test285 = *$tmp286;
            panda$core$Int64 $tmp288 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test285);
            result287 = $tmp288;
            {
                ITable* $tmp290 = ((panda$collections$Iterable*) statements283)->$class->itable;
                while ($tmp290->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp290 = $tmp290->next;
                }
                $fn292 $tmp291 = $tmp290->methods[0];
                panda$collections$Iterator* $tmp293 = $tmp291(((panda$collections$Iterable*) statements283));
                Iter$165$17289 = $tmp293;
                $l294:;
                ITable* $tmp296 = Iter$165$17289->$class->itable;
                while ($tmp296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp296 = $tmp296->next;
                }
                $fn298 $tmp297 = $tmp296->methods[0];
                panda$core$Bit $tmp299 = $tmp297(Iter$165$17289);
                panda$core$Bit $tmp300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp299);
                if (!$tmp300.value) goto $l295;
                {
                    ITable* $tmp302 = Iter$165$17289->$class->itable;
                    while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp302 = $tmp302->next;
                    }
                    $fn304 $tmp303 = $tmp302->methods[1];
                    panda$core$Object* $tmp305 = $tmp303(Iter$165$17289);
                    s301 = ((org$pandalanguage$pandac$ASTNode*) $tmp305);
                    panda$core$Int64 $tmp306 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s301);
                    panda$core$Int64 $tmp307 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result287, $tmp306);
                    result287 = $tmp307;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s301));
                }
                goto $l294;
                $l295:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$165$17289));
            }
            return result287;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp310 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 16));
            base309 = *$tmp310;
            panda$core$Int64 $tmp311 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base309);
            return $tmp311;
        }
        }
        else {
        panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp312.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp314 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 32));
            list313 = *$tmp314;
            panda$collections$ImmutableArray** $tmp316 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 40));
            statements315 = *$tmp316;
            panda$core$Int64 $tmp318 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list313);
            result317 = $tmp318;
            {
                ITable* $tmp320 = ((panda$collections$Iterable*) statements315)->$class->itable;
                while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp320 = $tmp320->next;
                }
                $fn322 $tmp321 = $tmp320->methods[0];
                panda$collections$Iterator* $tmp323 = $tmp321(((panda$collections$Iterable*) statements315));
                Iter$173$17319 = $tmp323;
                $l324:;
                ITable* $tmp326 = Iter$173$17319->$class->itable;
                while ($tmp326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp326 = $tmp326->next;
                }
                $fn328 $tmp327 = $tmp326->methods[0];
                panda$core$Bit $tmp329 = $tmp327(Iter$173$17319);
                panda$core$Bit $tmp330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp329);
                if (!$tmp330.value) goto $l325;
                {
                    ITable* $tmp332 = Iter$173$17319->$class->itable;
                    while ($tmp332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp332 = $tmp332->next;
                    }
                    $fn334 $tmp333 = $tmp332->methods[1];
                    panda$core$Object* $tmp335 = $tmp333(Iter$173$17319);
                    s331 = ((org$pandalanguage$pandac$ASTNode*) $tmp335);
                    panda$core$Int64 $tmp336 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s331);
                    panda$core$Int64 $tmp337 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result317, $tmp336);
                    result317 = $tmp337;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s331));
                }
                goto $l324;
                $l325:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$173$17319));
            }
            return result317;
        }
        }
        else {
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp338.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp339.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp342 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 16));
            test341 = *$tmp342;
            panda$collections$ImmutableArray** $tmp344 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 24));
            ifTrue343 = *$tmp344;
            org$pandalanguage$pandac$ASTNode** $tmp346 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 32));
            ifFalse345 = *$tmp346;
            panda$core$Int64 $tmp348 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test341);
            result347 = $tmp348;
            {
                ITable* $tmp350 = ((panda$collections$Iterable*) ifTrue343)->$class->itable;
                while ($tmp350->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp350 = $tmp350->next;
                }
                $fn352 $tmp351 = $tmp350->methods[0];
                panda$collections$Iterator* $tmp353 = $tmp351(((panda$collections$Iterable*) ifTrue343));
                Iter$183$17349 = $tmp353;
                $l354:;
                ITable* $tmp356 = Iter$183$17349->$class->itable;
                while ($tmp356->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp356 = $tmp356->next;
                }
                $fn358 $tmp357 = $tmp356->methods[0];
                panda$core$Bit $tmp359 = $tmp357(Iter$183$17349);
                panda$core$Bit $tmp360 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp359);
                if (!$tmp360.value) goto $l355;
                {
                    ITable* $tmp362 = Iter$183$17349->$class->itable;
                    while ($tmp362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp362 = $tmp362->next;
                    }
                    $fn364 $tmp363 = $tmp362->methods[1];
                    panda$core$Object* $tmp365 = $tmp363(Iter$183$17349);
                    s361 = ((org$pandalanguage$pandac$ASTNode*) $tmp365);
                    panda$core$Int64 $tmp366 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s361);
                    panda$core$Int64 $tmp367 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result347, $tmp366);
                    result347 = $tmp367;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s361));
                }
                goto $l354;
                $l355:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$183$17349));
            }
            if (((panda$core$Bit) { ifFalse345 != NULL }).value) {
            {
                panda$core$Int64 $tmp368 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse345);
                panda$core$Int64 $tmp369 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result347, $tmp368);
                result347 = $tmp369;
            }
            }
            return result347;
        }
        }
        else {
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp370.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp371.value) {
        {
            panda$collections$ImmutableArray** $tmp373 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 24));
            statements372 = *$tmp373;
            result374 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp376 = ((panda$collections$Iterable*) statements372)->$class->itable;
                while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp376 = $tmp376->next;
                }
                $fn378 $tmp377 = $tmp376->methods[0];
                panda$collections$Iterator* $tmp379 = $tmp377(((panda$collections$Iterable*) statements372));
                Iter$194$17375 = $tmp379;
                $l380:;
                ITable* $tmp382 = Iter$194$17375->$class->itable;
                while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp382 = $tmp382->next;
                }
                $fn384 $tmp383 = $tmp382->methods[0];
                panda$core$Bit $tmp385 = $tmp383(Iter$194$17375);
                panda$core$Bit $tmp386 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp385);
                if (!$tmp386.value) goto $l381;
                {
                    ITable* $tmp388 = Iter$194$17375->$class->itable;
                    while ($tmp388->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp388 = $tmp388->next;
                    }
                    $fn390 $tmp389 = $tmp388->methods[1];
                    panda$core$Object* $tmp391 = $tmp389(Iter$194$17375);
                    s387 = ((org$pandalanguage$pandac$ASTNode*) $tmp391);
                    panda$core$Int64 $tmp392 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s387);
                    panda$core$Int64 $tmp393 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result374, $tmp392);
                    result374 = $tmp393;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s387));
                }
                goto $l380;
                $l381:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$194$17375));
            }
            return result374;
        }
        }
        else {
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp394.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp396 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 16));
            value395 = *$tmp396;
            panda$collections$ImmutableArray** $tmp398 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 24));
            whens397 = *$tmp398;
            panda$collections$ImmutableArray** $tmp400 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 32));
            other399 = *$tmp400;
            panda$core$Int64 $tmp402 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value395);
            result401 = $tmp402;
            {
                ITable* $tmp404 = ((panda$collections$Iterable*) whens397)->$class->itable;
                while ($tmp404->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp404 = $tmp404->next;
                }
                $fn406 $tmp405 = $tmp404->methods[0];
                panda$collections$Iterator* $tmp407 = $tmp405(((panda$collections$Iterable*) whens397));
                Iter$200$17403 = $tmp407;
                $l408:;
                ITable* $tmp410 = Iter$200$17403->$class->itable;
                while ($tmp410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp410 = $tmp410->next;
                }
                $fn412 $tmp411 = $tmp410->methods[0];
                panda$core$Bit $tmp413 = $tmp411(Iter$200$17403);
                panda$core$Bit $tmp414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp413);
                if (!$tmp414.value) goto $l409;
                {
                    ITable* $tmp416 = Iter$200$17403->$class->itable;
                    while ($tmp416->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp416 = $tmp416->next;
                    }
                    $fn418 $tmp417 = $tmp416->methods[1];
                    panda$core$Object* $tmp419 = $tmp417(Iter$200$17403);
                    w415 = ((org$pandalanguage$pandac$ASTNode*) $tmp419);
                    panda$core$Int64 $tmp420 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w415);
                    panda$core$Int64 $tmp421 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result401, $tmp420);
                    result401 = $tmp421;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w415));
                }
                goto $l408;
                $l409:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$200$17403));
            }
            if (((panda$core$Bit) { other399 != NULL }).value) {
            {
                {
                    ITable* $tmp423 = ((panda$collections$Iterable*) other399)->$class->itable;
                    while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp423 = $tmp423->next;
                    }
                    $fn425 $tmp424 = $tmp423->methods[0];
                    panda$collections$Iterator* $tmp426 = $tmp424(((panda$collections$Iterable*) other399));
                    Iter$204$21422 = $tmp426;
                    $l427:;
                    ITable* $tmp429 = Iter$204$21422->$class->itable;
                    while ($tmp429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp429 = $tmp429->next;
                    }
                    $fn431 $tmp430 = $tmp429->methods[0];
                    panda$core$Bit $tmp432 = $tmp430(Iter$204$21422);
                    panda$core$Bit $tmp433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp432);
                    if (!$tmp433.value) goto $l428;
                    {
                        ITable* $tmp435 = Iter$204$21422->$class->itable;
                        while ($tmp435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp435 = $tmp435->next;
                        }
                        $fn437 $tmp436 = $tmp435->methods[1];
                        panda$core$Object* $tmp438 = $tmp436(Iter$204$21422);
                        s434 = ((org$pandalanguage$pandac$ASTNode*) $tmp438);
                        panda$core$Int64 $tmp439 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s434);
                        panda$core$Int64 $tmp440 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result401, $tmp439);
                        result401 = $tmp440;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s434));
                    }
                    goto $l427;
                    $l428:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$21422));
                }
            }
            }
            return result401;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp441.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp442.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp443.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp445 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 24));
            base444 = *$tmp445;
            panda$core$Int64 $tmp446 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base444);
            panda$core$Int64 $tmp447 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp446);
            return $tmp447;
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp448.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp449.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp450.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp452 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 16));
            value451 = *$tmp452;
            if (((panda$core$Bit) { value451 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp453 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value451);
            return $tmp453;
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp454.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp455.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp456.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp457.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp458.value) {
        {
            panda$collections$ImmutableArray** $tmp460 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 24));
            decls459 = *$tmp460;
            result461 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp463 = ((panda$collections$Iterable*) decls459)->$class->itable;
                while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp463 = $tmp463->next;
                }
                $fn465 $tmp464 = $tmp463->methods[0];
                panda$collections$Iterator* $tmp466 = $tmp464(((panda$collections$Iterable*) decls459));
                Iter$234$17462 = $tmp466;
                $l467:;
                ITable* $tmp469 = Iter$234$17462->$class->itable;
                while ($tmp469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp469 = $tmp469->next;
                }
                $fn471 $tmp470 = $tmp469->methods[0];
                panda$core$Bit $tmp472 = $tmp470(Iter$234$17462);
                panda$core$Bit $tmp473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp472);
                if (!$tmp473.value) goto $l468;
                {
                    ITable* $tmp475 = Iter$234$17462->$class->itable;
                    while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp475 = $tmp475->next;
                    }
                    $fn477 $tmp476 = $tmp475->methods[1];
                    panda$core$Object* $tmp478 = $tmp476(Iter$234$17462);
                    decl474 = ((org$pandalanguage$pandac$ASTNode*) $tmp478);
                    panda$core$Int64 $tmp479 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl474);
                    panda$core$Int64 $tmp480 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result461, $tmp479);
                    result461 = $tmp480;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl474));
                }
                goto $l467;
                $l468:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$234$17462));
            }
            return result461;
        }
        }
        else {
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp481.value) {
        {
            panda$collections$ImmutableArray** $tmp483 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 16));
            tests482 = *$tmp483;
            panda$collections$ImmutableArray** $tmp485 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 24));
            statements484 = *$tmp485;
            result486 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp488 = ((panda$collections$Iterable*) tests482)->$class->itable;
                while ($tmp488->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp488 = $tmp488->next;
                }
                $fn490 $tmp489 = $tmp488->methods[0];
                panda$collections$Iterator* $tmp491 = $tmp489(((panda$collections$Iterable*) tests482));
                Iter$240$17487 = $tmp491;
                $l492:;
                ITable* $tmp494 = Iter$240$17487->$class->itable;
                while ($tmp494->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp494 = $tmp494->next;
                }
                $fn496 $tmp495 = $tmp494->methods[0];
                panda$core$Bit $tmp497 = $tmp495(Iter$240$17487);
                panda$core$Bit $tmp498 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp497);
                if (!$tmp498.value) goto $l493;
                {
                    ITable* $tmp500 = Iter$240$17487->$class->itable;
                    while ($tmp500->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp500 = $tmp500->next;
                    }
                    $fn502 $tmp501 = $tmp500->methods[1];
                    panda$core$Object* $tmp503 = $tmp501(Iter$240$17487);
                    test499 = ((org$pandalanguage$pandac$ASTNode*) $tmp503);
                    panda$core$Int64 $tmp504 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test499);
                    panda$core$Int64 $tmp505 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result486, $tmp504);
                    result486 = $tmp505;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test499));
                }
                goto $l492;
                $l493:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$240$17487));
            }
            {
                ITable* $tmp507 = ((panda$collections$Iterable*) statements484)->$class->itable;
                while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp507 = $tmp507->next;
                }
                $fn509 $tmp508 = $tmp507->methods[0];
                panda$collections$Iterator* $tmp510 = $tmp508(((panda$collections$Iterable*) statements484));
                Iter$243$17506 = $tmp510;
                $l511:;
                ITable* $tmp513 = Iter$243$17506->$class->itable;
                while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp513 = $tmp513->next;
                }
                $fn515 $tmp514 = $tmp513->methods[0];
                panda$core$Bit $tmp516 = $tmp514(Iter$243$17506);
                panda$core$Bit $tmp517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp516);
                if (!$tmp517.value) goto $l512;
                {
                    ITable* $tmp519 = Iter$243$17506->$class->itable;
                    while ($tmp519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp519 = $tmp519->next;
                    }
                    $fn521 $tmp520 = $tmp519->methods[1];
                    panda$core$Object* $tmp522 = $tmp520(Iter$243$17506);
                    s518 = ((org$pandalanguage$pandac$ASTNode*) $tmp522);
                    panda$core$Int64 $tmp523 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s518);
                    panda$core$Int64 $tmp524 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result486, $tmp523);
                    result486 = $tmp524;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s518));
                }
                goto $l511;
                $l512:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$243$17506));
            }
            return result486;
        }
        }
        else {
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9208->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp525.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp527 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9208->$data + 24));
            test526 = *$tmp527;
            panda$collections$ImmutableArray** $tmp529 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9208->$data + 32));
            statements528 = *$tmp529;
            panda$core$Int64 $tmp531 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test526);
            result530 = $tmp531;
            {
                ITable* $tmp533 = ((panda$collections$Iterable*) statements528)->$class->itable;
                while ($tmp533->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp533 = $tmp533->next;
                }
                $fn535 $tmp534 = $tmp533->methods[0];
                panda$collections$Iterator* $tmp536 = $tmp534(((panda$collections$Iterable*) statements528));
                Iter$249$17532 = $tmp536;
                $l537:;
                ITable* $tmp539 = Iter$249$17532->$class->itable;
                while ($tmp539->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp539 = $tmp539->next;
                }
                $fn541 $tmp540 = $tmp539->methods[0];
                panda$core$Bit $tmp542 = $tmp540(Iter$249$17532);
                panda$core$Bit $tmp543 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp542);
                if (!$tmp543.value) goto $l538;
                {
                    ITable* $tmp545 = Iter$249$17532->$class->itable;
                    while ($tmp545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp545 = $tmp545->next;
                    }
                    $fn547 $tmp546 = $tmp545->methods[1];
                    panda$core$Object* $tmp548 = $tmp546(Iter$249$17532);
                    s544 = ((org$pandalanguage$pandac$ASTNode*) $tmp548);
                    panda$core$Int64 $tmp549 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s544);
                    panda$core$Int64 $tmp550 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result530, $tmp549);
                    result530 = $tmp550;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s544));
                }
                goto $l537;
                $l538:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$249$17532));
            }
            return result530;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
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
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Int64 c563;
    panda$collections$Iterator* Iter$262$13564;
    org$pandalanguage$pandac$ASTNode* s576;
    panda$core$Bit tmp3584;
    panda$core$Bit tmp4585;
    panda$core$Object* $tmp554 = (($fn553) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp555 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp554)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp552 = $tmp555.value;
    if (!$tmp552) goto $l556;
    panda$core$Bit $tmp557 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp558 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp557);
    $tmp552 = $tmp558.value;
    $l556:;
    panda$core$Bit $tmp559 = { $tmp552 };
    bool $tmp551 = $tmp559.value;
    if (!$tmp551) goto $l560;
    panda$core$Bit $tmp561 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp551 = $tmp561.value;
    $l560:;
    panda$core$Bit $tmp562 = { $tmp551 };
    if ($tmp562.value) {
    {
        c563 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp565 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp565 = $tmp565->next;
            }
            $fn567 $tmp566 = $tmp565->methods[0];
            panda$collections$Iterator* $tmp568 = $tmp566(((panda$collections$Iterable*) p_statements));
            Iter$262$13564 = $tmp568;
            $l569:;
            ITable* $tmp571 = Iter$262$13564->$class->itable;
            while ($tmp571->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp571 = $tmp571->next;
            }
            $fn573 $tmp572 = $tmp571->methods[0];
            panda$core$Bit $tmp574 = $tmp572(Iter$262$13564);
            panda$core$Bit $tmp575 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp574);
            if (!$tmp575.value) goto $l570;
            {
                ITable* $tmp577 = Iter$262$13564->$class->itable;
                while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp577 = $tmp577->next;
                }
                $fn579 $tmp578 = $tmp577->methods[1];
                panda$core$Object* $tmp580 = $tmp578(Iter$262$13564);
                s576 = ((org$pandalanguage$pandac$ASTNode*) $tmp580);
                panda$core$Int64 $tmp581 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s576);
                panda$core$Int64 $tmp582 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c563, $tmp581);
                c563 = $tmp582;
                panda$core$Bit $tmp583 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c563, ((panda$core$Int64) { 10 }));
                if ($tmp583.value) {
                {
                    {
                        tmp3584 = ((panda$core$Bit) { false });
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s576));
                        {
                            tmp4585 = tmp3584;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$13564));
                            return tmp4585;
                        }
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s576));
            }
            goto $l569;
            $l570:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$13564));
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment586;
    org$pandalanguage$pandac$ASTNode* $match$283_13587;
    org$pandalanguage$pandac$Position position589;
    panda$core$String* text591;
    org$pandalanguage$pandac$Annotations* annotations593;
    panda$collections$Array* parameters606;
    panda$collections$Iterator* Iter$295$9608;
    org$pandalanguage$pandac$ASTNode* p620;
    org$pandalanguage$pandac$ASTNode* $match$296_13625;
    panda$core$String* name627;
    org$pandalanguage$pandac$ASTNode* type629;
    org$pandalanguage$pandac$Type* returnType633;
    org$pandalanguage$pandac$MethodDecl* tmp5663;
    memset(&doccomment586, 0, sizeof(doccomment586));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment586 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment586));
        }
    }
    }
    else {
    {
        {
            $match$283_13587 = p_rawDoccomment;
            panda$core$Bit $tmp588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13587->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp588.value) {
            {
                org$pandalanguage$pandac$Position* $tmp590 = ((org$pandalanguage$pandac$Position*) ((char*) $match$283_13587->$data + 0));
                position589 = *$tmp590;
                panda$core$String** $tmp592 = ((panda$core$String**) ((char*) $match$283_13587->$data + 16));
                text591 = *$tmp592;
                {
                    doccomment586 = text591;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment586));
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
    }
    }
    org$pandalanguage$pandac$Annotations* $tmp594 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations593 = $tmp594;
    panda$core$Bit $tmp597 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp596 = $tmp597.value;
    if (!$tmp596) goto $l598;
    panda$core$Bit $tmp599 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp596 = $tmp599.value;
    $l598:;
    panda$core$Bit $tmp600 = { $tmp596 };
    bool $tmp595 = $tmp600.value;
    if ($tmp595) goto $l601;
    panda$core$Bit $tmp602 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations593);
    $tmp595 = $tmp602.value;
    $l601:;
    panda$core$Bit $tmp603 = { $tmp595 };
    if ($tmp603.value) {
    {
        panda$core$Int64 $tmp604 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp605 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations593->flags, $tmp604);
        annotations593->flags = $tmp605;
    }
    }
    panda$collections$Array* $tmp607 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp607);
    parameters606 = $tmp607;
    {
        ITable* $tmp609 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp609 = $tmp609->next;
        }
        $fn611 $tmp610 = $tmp609->methods[0];
        panda$collections$Iterator* $tmp612 = $tmp610(((panda$collections$Iterable*) p_rawParameters));
        Iter$295$9608 = $tmp612;
        $l613:;
        ITable* $tmp615 = Iter$295$9608->$class->itable;
        while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp615 = $tmp615->next;
        }
        $fn617 $tmp616 = $tmp615->methods[0];
        panda$core$Bit $tmp618 = $tmp616(Iter$295$9608);
        panda$core$Bit $tmp619 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp618);
        if (!$tmp619.value) goto $l614;
        {
            ITable* $tmp621 = Iter$295$9608->$class->itable;
            while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp621 = $tmp621->next;
            }
            $fn623 $tmp622 = $tmp621->methods[1];
            panda$core$Object* $tmp624 = $tmp622(Iter$295$9608);
            p620 = ((org$pandalanguage$pandac$ASTNode*) $tmp624);
            {
                $match$296_13625 = p620;
                panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$296_13625->$rawValue, ((panda$core$Int64) { 28 }));
                if ($tmp626.value) {
                {
                    panda$core$String** $tmp628 = ((panda$core$String**) ((char*) $match$296_13625->$data + 16));
                    name627 = *$tmp628;
                    org$pandalanguage$pandac$ASTNode** $tmp630 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$296_13625->$data + 24));
                    type629 = *$tmp630;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp631 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                    org$pandalanguage$pandac$Type* $tmp632 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type629);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp631, name627, $tmp632);
                    panda$collections$Array$add$panda$collections$Array$T(parameters606, ((panda$core$Object*) $tmp631));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p620));
        }
        goto $l613;
        $l614:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$9608));
    }
    memset(&returnType633, 0, sizeof(returnType633));
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp634 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
            returnType633 = $tmp634;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType633));
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp635 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            returnType633 = $tmp635;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType633));
        }
    }
    }
    panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp636 = $tmp637.value;
    if (!$tmp636) goto $l638;
    org$pandalanguage$pandac$Type* $tmp639 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp640 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType633, $tmp639);
    $tmp636 = $tmp640.value;
    $l638:;
    panda$core$Bit $tmp641 = { $tmp636 };
    if ($tmp641.value) {
    {
        panda$core$Object* $tmp643 = (($fn642) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp643), p_position, &$s644);
    }
    }
    bool $tmp645 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp645) goto $l646;
    panda$core$Bit $tmp647 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations593, p_statements);
    $tmp645 = $tmp647.value;
    $l646:;
    panda$core$Bit $tmp648 = { $tmp645 };
    if ($tmp648.value) {
    {
        panda$core$Int64 $tmp649 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp650 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations593->flags, $tmp649);
        annotations593->flags = $tmp650;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp651.value) {
        {
            panda$core$Int64 $tmp652 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp653 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations593->flags, $tmp652);
            annotations593->flags = $tmp653;
        }
        }
        else {
        panda$core$Int64 $tmp654 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp655 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations593->flags, $tmp654);
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp655, ((panda$core$Int64) { 0 }));
        if ($tmp656.value) {
        {
            panda$core$Object* $tmp658 = (($fn657) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s659, p_name);
            panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s661);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp658), p_position, $tmp662);
        }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$MethodDecl* $tmp664 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp664, p_owner, p_position, doccomment586, annotations593, p_kind, p_name, parameters606, returnType633, p_statements);
        tmp5663 = $tmp664;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations593));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters606));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType633));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment586));
        }
        return tmp5663;
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$329_9665;
    org$pandalanguage$pandac$Position position667;
    org$pandalanguage$pandac$ASTNode* dc669;
    panda$collections$ImmutableArray* annotations671;
    org$pandalanguage$pandac$ASTNode* varDecl673;
    org$pandalanguage$pandac$Position position676;
    org$pandalanguage$pandac$ASTNode* dc678;
    panda$collections$ImmutableArray* annotations680;
    org$pandalanguage$pandac$MethodDecl$Kind kind682;
    panda$core$String* name684;
    panda$collections$ImmutableArray* parameters686;
    org$pandalanguage$pandac$ASTNode* rawReturnType688;
    panda$collections$ImmutableArray* statements690;
    org$pandalanguage$pandac$MethodDecl* m692;
    org$pandalanguage$pandac$Position position695;
    org$pandalanguage$pandac$ASTNode* dc697;
    panda$collections$ImmutableArray* annotations699;
    org$pandalanguage$pandac$ClassDecl$Kind kind701;
    panda$core$String* name703;
    panda$collections$ImmutableArray* generics705;
    panda$collections$ImmutableArray* supertypes707;
    panda$collections$ImmutableArray* members709;
    org$pandalanguage$pandac$ClassDecl* inner711;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp716;
    org$pandalanguage$pandac$Position position722;
    org$pandalanguage$pandac$ASTNode* dc724;
    panda$core$String* name726;
    panda$collections$ImmutableArray* fields728;
    {
        $match$329_9665 = p_node;
        panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9665->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp666.value) {
        {
            org$pandalanguage$pandac$Position* $tmp668 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_9665->$data + 0));
            position667 = *$tmp668;
            org$pandalanguage$pandac$ASTNode** $tmp670 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9665->$data + 16));
            dc669 = *$tmp670;
            panda$collections$ImmutableArray** $tmp672 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 24));
            annotations671 = *$tmp672;
            org$pandalanguage$pandac$ASTNode** $tmp674 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9665->$data + 32));
            varDecl673 = *$tmp674;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position667, dc669, annotations671, varDecl673);
        }
        }
        else {
        panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9665->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp675.value) {
        {
            org$pandalanguage$pandac$Position* $tmp677 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_9665->$data + 0));
            position676 = *$tmp677;
            org$pandalanguage$pandac$ASTNode** $tmp679 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9665->$data + 16));
            dc678 = *$tmp679;
            panda$collections$ImmutableArray** $tmp681 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 24));
            annotations680 = *$tmp681;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp683 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$329_9665->$data + 32));
            kind682 = *$tmp683;
            panda$core$String** $tmp685 = ((panda$core$String**) ((char*) $match$329_9665->$data + 40));
            name684 = *$tmp685;
            panda$collections$ImmutableArray** $tmp687 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 48));
            parameters686 = *$tmp687;
            org$pandalanguage$pandac$ASTNode** $tmp689 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9665->$data + 56));
            rawReturnType688 = *$tmp689;
            panda$collections$ImmutableArray** $tmp691 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 64));
            statements690 = *$tmp691;
            org$pandalanguage$pandac$MethodDecl* $tmp693 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position676, dc678, annotations680, kind682, name684, parameters686, rawReturnType688, statements690);
            m692 = $tmp693;
            if (((panda$core$Bit) { m692 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m692));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m692));
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m692));
        }
        }
        else {
        panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9665->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp694.value) {
        {
            org$pandalanguage$pandac$Position* $tmp696 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_9665->$data + 0));
            position695 = *$tmp696;
            org$pandalanguage$pandac$ASTNode** $tmp698 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9665->$data + 16));
            dc697 = *$tmp698;
            panda$collections$ImmutableArray** $tmp700 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 24));
            annotations699 = *$tmp700;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp702 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$329_9665->$data + 32));
            kind701 = *$tmp702;
            panda$core$String** $tmp704 = ((panda$core$String**) ((char*) $match$329_9665->$data + 40));
            name703 = *$tmp704;
            panda$collections$ImmutableArray** $tmp706 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 48));
            generics705 = *$tmp706;
            panda$collections$ImmutableArray** $tmp708 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 56));
            supertypes707 = *$tmp708;
            panda$collections$ImmutableArray** $tmp710 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 64));
            members709 = *$tmp710;
            org$pandalanguage$pandac$ClassDecl* $tmp712 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position695, dc697, annotations699, kind701, name703, generics705, supertypes707, members709);
            inner711 = $tmp712;
            if (((panda$core$Bit) { inner711 != NULL }).value) {
            {
                {
                    inner711->owner = p_cl;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner711->owner));
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner711));
                panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s713);
                panda$core$Bit $tmp715 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner711)->name, $tmp714);
                PANDA_ASSERT($tmp715.value);
                panda$core$Int64 $tmp717 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp718 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp717, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp716, ((panda$core$Int64$nullable) { $tmp718, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp719 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner711)->name, $tmp716);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner711), $tmp719);
                panda$collections$Array$add$panda$collections$Array$T(inner711->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp720 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner711->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp720);
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner711));
        }
        }
        else {
        panda$core$Bit $tmp721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9665->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp721.value) {
        {
            org$pandalanguage$pandac$Position* $tmp723 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_9665->$data + 0));
            position722 = *$tmp723;
            org$pandalanguage$pandac$ASTNode** $tmp725 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9665->$data + 16));
            dc724 = *$tmp725;
            panda$core$String** $tmp727 = ((panda$core$String**) ((char*) $match$329_9665->$data + 24));
            name726 = *$tmp727;
            panda$collections$ImmutableArray** $tmp729 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9665->$data + 32));
            fields728 = *$tmp729;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position722, dc724, name726, fields728);
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment730;
    org$pandalanguage$pandac$ASTNode* $match$367_13731;
    org$pandalanguage$pandac$Position position733;
    panda$core$String* text735;
    panda$collections$Array* fields737;
    panda$collections$Iterator* Iter$375$9739;
    org$pandalanguage$pandac$ASTNode* t751;
    org$pandalanguage$pandac$ChoiceEntry* entry757;
    panda$core$Bit found760;
    panda$collections$Iterator* Iter$383$16761;
    org$pandalanguage$pandac$MethodDecl* m773;
    panda$core$Range$LTpanda$core$Int64$GT $tmp786;
    panda$collections$Array* parameters812;
    panda$collections$Array* statements817;
    org$pandalanguage$pandac$parser$Token$Kind $tmp822;
    panda$core$Range$LTpanda$core$Int64$GT $tmp825;
    org$pandalanguage$pandac$parser$Token$Kind $tmp850;
    org$pandalanguage$pandac$MethodDecl* synthetic863;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp866;
    memset(&doccomment730, 0, sizeof(doccomment730));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment730 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment730));
        }
    }
    }
    else {
    {
        {
            $match$367_13731 = p_rawDoccomment;
            panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$367_13731->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp732.value) {
            {
                org$pandalanguage$pandac$Position* $tmp734 = ((org$pandalanguage$pandac$Position*) ((char*) $match$367_13731->$data + 0));
                position733 = *$tmp734;
                panda$core$String** $tmp736 = ((panda$core$String**) ((char*) $match$367_13731->$data + 16));
                text735 = *$tmp736;
                {
                    doccomment730 = text735;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment730));
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
    }
    }
    panda$collections$Array* $tmp738 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp738);
    fields737 = $tmp738;
    {
        ITable* $tmp740 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp740->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp740 = $tmp740->next;
        }
        $fn742 $tmp741 = $tmp740->methods[0];
        panda$collections$Iterator* $tmp743 = $tmp741(((panda$collections$Iterable*) p_rawFields));
        Iter$375$9739 = $tmp743;
        $l744:;
        ITable* $tmp746 = Iter$375$9739->$class->itable;
        while ($tmp746->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp746 = $tmp746->next;
        }
        $fn748 $tmp747 = $tmp746->methods[0];
        panda$core$Bit $tmp749 = $tmp747(Iter$375$9739);
        panda$core$Bit $tmp750 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp749);
        if (!$tmp750.value) goto $l745;
        {
            ITable* $tmp752 = Iter$375$9739->$class->itable;
            while ($tmp752->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp752 = $tmp752->next;
            }
            $fn754 $tmp753 = $tmp752->methods[1];
            panda$core$Object* $tmp755 = $tmp753(Iter$375$9739);
            t751 = ((org$pandalanguage$pandac$ASTNode*) $tmp755);
            org$pandalanguage$pandac$Type* $tmp756 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t751);
            panda$collections$Array$add$panda$collections$Array$T(fields737, ((panda$core$Object*) $tmp756));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t751));
        }
        goto $l744;
        $l745:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$375$9739));
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp758 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
    panda$core$Int64 $tmp759 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp758, p_cl, p_position, p_name, doccomment730, $tmp759, ((panda$collections$ListView*) fields737));
    entry757 = $tmp758;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry757));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry757));
    found760 = ((panda$core$Bit) { false });
    {
        ITable* $tmp762 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp762->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp762 = $tmp762->next;
        }
        $fn764 $tmp763 = $tmp762->methods[0];
        panda$collections$Iterator* $tmp765 = $tmp763(((panda$collections$Iterable*) p_cl->methods));
        Iter$383$16761 = $tmp765;
        $l766:;
        ITable* $tmp768 = Iter$383$16761->$class->itable;
        while ($tmp768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp768 = $tmp768->next;
        }
        $fn770 $tmp769 = $tmp768->methods[0];
        panda$core$Bit $tmp771 = $tmp769(Iter$383$16761);
        panda$core$Bit $tmp772 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp771);
        if (!$tmp772.value) goto $l767;
        {
            ITable* $tmp774 = Iter$383$16761->$class->itable;
            while ($tmp774->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp774 = $tmp774->next;
            }
            $fn776 $tmp775 = $tmp774->methods[1];
            panda$core$Object* $tmp777 = $tmp775(Iter$383$16761);
            m773 = ((org$pandalanguage$pandac$MethodDecl*) $tmp777);
            panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m773->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp778.value);
            panda$core$Int64 $tmp779 = panda$collections$Array$get_count$R$panda$core$Int64(m773->parameters);
            panda$core$Int64 $tmp780 = panda$collections$Array$get_count$R$panda$core$Int64(fields737);
            panda$core$Int64 $tmp781 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp780, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp782 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp779, $tmp781);
            if ($tmp782.value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m773));
                    goto $l766;
                }
            }
            }
            panda$core$Object* $tmp783 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m773->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp784 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp785 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp783)->type, $tmp784);
            PANDA_ASSERT($tmp785.value);
            panda$core$Int64 $tmp787 = panda$collections$Array$get_count$R$panda$core$Int64(fields737);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp786, ((panda$core$Int64) { 0 }), $tmp787, ((panda$core$Bit) { false }));
            int64_t $tmp789 = $tmp786.min.value;
            panda$core$Int64 i788 = { $tmp789 };
            int64_t $tmp791 = $tmp786.max.value;
            bool $tmp792 = $tmp786.inclusive.value;
            if ($tmp792) goto $l799; else goto $l800;
            $l799:;
            if ($tmp789 <= $tmp791) goto $l793; else goto $l795;
            $l800:;
            if ($tmp789 < $tmp791) goto $l793; else goto $l795;
            $l793:;
            {
                panda$core$Object* $tmp801 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields737, i788);
                panda$core$Int64 $tmp802 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i788, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp803 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m773->parameters, $tmp802);
                panda$core$Bit $tmp804 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp801), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp803)->type);
                if ($tmp804.value) {
                {
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m773));
                        goto $l766;
                    }
                }
                }
            }
            $l796:;
            int64_t $tmp806 = $tmp791 - i788.value;
            if ($tmp792) goto $l807; else goto $l808;
            $l807:;
            if ((uint64_t) $tmp806 >= 1) goto $l805; else goto $l795;
            $l808:;
            if ((uint64_t) $tmp806 > 1) goto $l805; else goto $l795;
            $l805:;
            i788.value += 1;
            goto $l793;
            $l795:;
            {
                entry757->initMethod = m773;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry757->initMethod));
            }
            found760 = ((panda$core$Bit) { true });
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m773));
                goto $l767;
            }
        }
        goto $l766;
        $l767:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$383$16761));
    }
    panda$core$Bit $tmp811 = panda$core$Bit$$NOT$R$panda$core$Bit(found760);
    if ($tmp811.value) {
    {
        panda$collections$Array* $tmp813 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp813);
        parameters812 = $tmp813;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp814 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
        org$pandalanguage$pandac$Type* $tmp816 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp814, &$s815, $tmp816);
        panda$collections$Array$add$panda$collections$Array$T(parameters812, ((panda$core$Object*) $tmp814));
        panda$collections$Array* $tmp818 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp818);
        statements817 = $tmp818;
        org$pandalanguage$pandac$ASTNode* $tmp819 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode* $tmp820 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp820, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s821);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp822, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp823 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp823, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s824);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp819, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp820, $tmp822, $tmp823);
        panda$collections$Array$add$panda$collections$Array$T(statements817, ((panda$core$Object*) $tmp819));
        panda$core$Int64 $tmp826 = panda$collections$Array$get_count$R$panda$core$Int64(fields737);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp825, ((panda$core$Int64) { 0 }), $tmp826, ((panda$core$Bit) { false }));
        int64_t $tmp828 = $tmp825.min.value;
        panda$core$Int64 i827 = { $tmp828 };
        int64_t $tmp830 = $tmp825.max.value;
        bool $tmp831 = $tmp825.inclusive.value;
        if ($tmp831) goto $l838; else goto $l839;
        $l838:;
        if ($tmp828 <= $tmp830) goto $l832; else goto $l834;
        $l839:;
        if ($tmp828 < $tmp830) goto $l832; else goto $l834;
        $l832:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp840 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
            panda$core$Int64$wrapper* $tmp842;
            $tmp842 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp842->value = i827;
            panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s841, ((panda$core$Object*) $tmp842));
            panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp843, &$s844);
            panda$core$Object* $tmp846 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields737, i827);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp840, $tmp845, ((org$pandalanguage$pandac$Type*) $tmp846));
            panda$collections$Array$add$panda$collections$Array$T(parameters812, ((panda$core$Object*) $tmp840));
            org$pandalanguage$pandac$ASTNode* $tmp847 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp848 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp849 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp849, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp848, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp849, entry757, i827);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp850, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp851 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$wrapper* $tmp853;
            $tmp853 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp853->value = i827;
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s852, ((panda$core$Object*) $tmp853));
            panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp854, &$s855);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp851, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp856);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp847, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp848, $tmp850, $tmp851);
            panda$collections$Array$add$panda$collections$Array$T(statements817, ((panda$core$Object*) $tmp847));
        }
        $l835:;
        int64_t $tmp858 = $tmp830 - i827.value;
        if ($tmp831) goto $l859; else goto $l860;
        $l859:;
        if ((uint64_t) $tmp858 >= 1) goto $l857; else goto $l834;
        $l860:;
        if ((uint64_t) $tmp858 > 1) goto $l857; else goto $l834;
        $l857:;
        i827.value += 1;
        goto $l832;
        $l834:;
        org$pandalanguage$pandac$MethodDecl* $tmp864 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp865 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp865);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp866, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp868 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp869 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements817);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp864, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp865, $tmp866, &$s867, parameters812, $tmp868, $tmp869);
        synthetic863 = $tmp864;
        {
            entry757->initMethod = synthetic863;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry757->initMethod));
        }
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic863));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic863));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters812));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements817));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic863));
        }
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields737));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment730));
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName870;
    panda$core$String* doccomment879;
    org$pandalanguage$pandac$ASTNode* $match$442_13880;
    org$pandalanguage$pandac$Position position882;
    panda$core$String* text884;
    org$pandalanguage$pandac$Annotations* annotations886;
    panda$collections$Array* parameters888;
    panda$collections$Iterator* Iter$452$13890;
    org$pandalanguage$pandac$ASTNode* p902;
    panda$core$String* name907;
    org$pandalanguage$pandac$Type* bound908;
    org$pandalanguage$pandac$ASTNode* $match$455_17909;
    panda$core$String* id911;
    panda$core$String* id915;
    org$pandalanguage$pandac$ASTNode* type917;
    panda$collections$Array* supertypes927;
    panda$collections$Iterator* Iter$476$13933;
    org$pandalanguage$pandac$ASTNode* s945;
    org$pandalanguage$pandac$ClassDecl* result951;
    org$pandalanguage$pandac$FieldDecl* rawValue958;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp961;
    org$pandalanguage$pandac$FieldDecl* data964;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp967;
    panda$collections$Iterator* Iter$493$9970;
    org$pandalanguage$pandac$ASTNode* m982;
    org$pandalanguage$pandac$ASTNode* $match$494_13987;
    org$pandalanguage$pandac$Position mPosition989;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind991;
    org$pandalanguage$pandac$ClassDecl$Kind $match$497_25994;
    panda$core$Bit foundInit1004;
    panda$core$Bit foundCleanup1005;
    panda$collections$Iterator* Iter$512$91006;
    org$pandalanguage$pandac$MethodDecl* m1018;
    org$pandalanguage$pandac$MethodDecl* defaultInit1045;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1048;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1067;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1071;
    panda$core$Bit haveFields1077;
    panda$collections$Iterator* Iter$540$131078;
    org$pandalanguage$pandac$ChoiceEntry* e1090;
    org$pandalanguage$pandac$ClassDecl* tmp61102;
    memset(&fullName870, 0, sizeof(fullName870));
    panda$core$Bit $tmp872 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s871);
    if ($tmp872.value) {
    {
        {
            panda$core$String* $tmp873 = panda$core$String$convert$R$panda$core$String(p_contextName);
            panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, &$s874);
            panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, p_name);
            panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp876, &$s877);
            fullName870 = $tmp878;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName870));
        }
    }
    }
    else {
    {
        {
            fullName870 = p_name;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName870));
        }
    }
    }
    memset(&doccomment879, 0, sizeof(doccomment879));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment879 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment879));
        }
    }
    }
    else {
    {
        {
            $match$442_13880 = p_rawDoccomment;
            panda$core$Bit $tmp881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442_13880->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp881.value) {
            {
                org$pandalanguage$pandac$Position* $tmp883 = ((org$pandalanguage$pandac$Position*) ((char*) $match$442_13880->$data + 0));
                position882 = *$tmp883;
                panda$core$String** $tmp885 = ((panda$core$String**) ((char*) $match$442_13880->$data + 16));
                text884 = *$tmp885;
                {
                    doccomment879 = text884;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment879));
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
    }
    }
    org$pandalanguage$pandac$Annotations* $tmp887 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations886 = $tmp887;
    panda$collections$Array* $tmp889 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp889);
    parameters888 = $tmp889;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp891 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp891 = $tmp891->next;
            }
            $fn893 $tmp892 = $tmp891->methods[0];
            panda$collections$Iterator* $tmp894 = $tmp892(((panda$collections$Iterable*) p_generics));
            Iter$452$13890 = $tmp894;
            $l895:;
            ITable* $tmp897 = Iter$452$13890->$class->itable;
            while ($tmp897->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp897 = $tmp897->next;
            }
            $fn899 $tmp898 = $tmp897->methods[0];
            panda$core$Bit $tmp900 = $tmp898(Iter$452$13890);
            panda$core$Bit $tmp901 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp900);
            if (!$tmp901.value) goto $l896;
            {
                ITable* $tmp903 = Iter$452$13890->$class->itable;
                while ($tmp903->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp903 = $tmp903->next;
                }
                $fn905 $tmp904 = $tmp903->methods[1];
                panda$core$Object* $tmp906 = $tmp904(Iter$452$13890);
                p902 = ((org$pandalanguage$pandac$ASTNode*) $tmp906);
                memset(&name907, 0, sizeof(name907));
                memset(&bound908, 0, sizeof(bound908));
                {
                    $match$455_17909 = p902;
                    panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$455_17909->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp910.value) {
                    {
                        panda$core$String** $tmp912 = ((panda$core$String**) ((char*) $match$455_17909->$data + 16));
                        id911 = *$tmp912;
                        {
                            name907 = id911;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name907));
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp913 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                            bound908 = $tmp913;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound908));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$455_17909->$rawValue, ((panda$core$Int64) { 37 }));
                    if ($tmp914.value) {
                    {
                        panda$core$String** $tmp916 = ((panda$core$String**) ((char*) $match$455_17909->$data + 16));
                        id915 = *$tmp916;
                        org$pandalanguage$pandac$ASTNode** $tmp918 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$455_17909->$data + 24));
                        type917 = *$tmp918;
                        {
                            name907 = id915;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name907));
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp919 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type917);
                            bound908 = $tmp919;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound908));
                        }
                    }
                    }
                    else {
                    {
                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp920 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                org$pandalanguage$pandac$Position $tmp922 = (($fn921) p902->$class->vtable[2])(p902);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp920, $tmp922, fullName870, name907, bound908);
                panda$collections$Array$add$panda$collections$Array$T(parameters888, ((panda$core$Object*) $tmp920));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound908));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p902));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name907));
                }
            }
            goto $l895;
            $l896:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$452$13890));
        }
        panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp923.value) {
        {
            panda$core$Object* $tmp925 = (($fn924) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp925), p_position, &$s926);
        }
        }
    }
    }
    panda$collections$Array* $tmp928 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp928);
    supertypes927 = $tmp928;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp929.value) {
        {
            panda$core$Object* $tmp931 = (($fn930) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp931), p_position, &$s932);
        }
        }
        {
            ITable* $tmp934 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp934->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp934 = $tmp934->next;
            }
            $fn936 $tmp935 = $tmp934->methods[0];
            panda$collections$Iterator* $tmp937 = $tmp935(((panda$collections$Iterable*) p_rawSupertypes));
            Iter$476$13933 = $tmp937;
            $l938:;
            ITable* $tmp940 = Iter$476$13933->$class->itable;
            while ($tmp940->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp940 = $tmp940->next;
            }
            $fn942 $tmp941 = $tmp940->methods[0];
            panda$core$Bit $tmp943 = $tmp941(Iter$476$13933);
            panda$core$Bit $tmp944 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp943);
            if (!$tmp944.value) goto $l939;
            {
                ITable* $tmp946 = Iter$476$13933->$class->itable;
                while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp946 = $tmp946->next;
                }
                $fn948 $tmp947 = $tmp946->methods[1];
                panda$core$Object* $tmp949 = $tmp947(Iter$476$13933);
                s945 = ((org$pandalanguage$pandac$ASTNode*) $tmp949);
                org$pandalanguage$pandac$Type* $tmp950 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s945);
                panda$collections$Array$add$panda$collections$Array$T(supertypes927, ((panda$core$Object*) $tmp950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s945));
            }
            goto $l938;
            $l939:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$476$13933));
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp952 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(201, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
    panda$core$Object* $tmp954 = (($fn953) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp952, p_source, p_position, p_aliases, doccomment879, annotations886, p_kind, fullName870, ((panda$collections$ListView*) supertypes927), parameters888, ((org$pandalanguage$pandac$Compiler*) $tmp954)->root);
    result951 = $tmp952;
    panda$core$Object* $tmp956 = (($fn955) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp956)->currentClass, ((panda$core$Object*) result951));
    panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp957.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp959 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp960 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp960);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp961, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp963 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp959, result951, ((org$pandalanguage$pandac$Symbol*) result951)->position, NULL, $tmp960, $tmp961, &$s962, $tmp963, NULL);
        rawValue958 = $tmp959;
        panda$collections$Array$add$panda$collections$Array$T(result951->fields, ((panda$core$Object*) rawValue958));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result951->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue958));
        org$pandalanguage$pandac$FieldDecl* $tmp965 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp966 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp966);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp967, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp969 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp965, result951, ((org$pandalanguage$pandac$Symbol*) result951)->position, NULL, $tmp966, $tmp967, &$s968, $tmp969, NULL);
        data964 = $tmp965;
        panda$collections$Array$add$panda$collections$Array$T(result951->fields, ((panda$core$Object*) data964));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result951->symbolTable, ((org$pandalanguage$pandac$Symbol*) data964));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue958));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data964));
        }
    }
    }
    {
        ITable* $tmp971 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp971 = $tmp971->next;
        }
        $fn973 $tmp972 = $tmp971->methods[0];
        panda$collections$Iterator* $tmp974 = $tmp972(((panda$collections$Iterable*) p_members));
        Iter$493$9970 = $tmp974;
        $l975:;
        ITable* $tmp977 = Iter$493$9970->$class->itable;
        while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp977 = $tmp977->next;
        }
        $fn979 $tmp978 = $tmp977->methods[0];
        panda$core$Bit $tmp980 = $tmp978(Iter$493$9970);
        panda$core$Bit $tmp981 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp980);
        if (!$tmp981.value) goto $l976;
        {
            ITable* $tmp983 = Iter$493$9970->$class->itable;
            while ($tmp983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp983 = $tmp983->next;
            }
            $fn985 $tmp984 = $tmp983->methods[1];
            panda$core$Object* $tmp986 = $tmp984(Iter$493$9970);
            m982 = ((org$pandalanguage$pandac$ASTNode*) $tmp986);
            {
                $match$494_13987 = m982;
                panda$core$Bit $tmp988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_13987->$rawValue, ((panda$core$Int64) { 24 }));
                if ($tmp988.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp990 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_13987->$data + 0));
                    mPosition989 = *$tmp990;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp992 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$494_13987->$data + 32));
                    methodKind991 = *$tmp992;
                    panda$core$Bit $tmp993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind991.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp993.value) {
                    {
                        {
                            $match$497_25994 = p_kind;
                            panda$core$Bit $tmp995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_25994.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp995.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_25994.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp996.value) {
                            {
                                panda$core$Object* $tmp998 = (($fn997) self->compiler->$class->vtable[2])(self->compiler);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp998), mPosition989, &$s999);
                            }
                            }
                            else {
                            panda$core$Bit $tmp1000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_25994.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1000.value) {
                            {
                                panda$core$Object* $tmp1002 = (($fn1001) self->compiler->$class->vtable[2])(self->compiler);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1002), mPosition989, &$s1003);
                            }
                            }
                            }
                            }
                        }
                    }
                    }
                }
                }
                else {
                {
                }
                }
            }
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result951, m982);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m982));
        }
        goto $l975;
        $l976:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$493$9970));
    }
    foundInit1004 = ((panda$core$Bit) { false });
    foundCleanup1005 = ((panda$core$Bit) { false });
    {
        ITable* $tmp1007 = ((panda$collections$Iterable*) result951->methods)->$class->itable;
        while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1007 = $tmp1007->next;
        }
        $fn1009 $tmp1008 = $tmp1007->methods[0];
        panda$collections$Iterator* $tmp1010 = $tmp1008(((panda$collections$Iterable*) result951->methods));
        Iter$512$91006 = $tmp1010;
        $l1011:;
        ITable* $tmp1013 = Iter$512$91006->$class->itable;
        while ($tmp1013->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1013 = $tmp1013->next;
        }
        $fn1015 $tmp1014 = $tmp1013->methods[0];
        panda$core$Bit $tmp1016 = $tmp1014(Iter$512$91006);
        panda$core$Bit $tmp1017 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1016);
        if (!$tmp1017.value) goto $l1012;
        {
            ITable* $tmp1019 = Iter$512$91006->$class->itable;
            while ($tmp1019->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1019 = $tmp1019->next;
            }
            $fn1021 $tmp1020 = $tmp1019->methods[1];
            panda$core$Object* $tmp1022 = $tmp1020(Iter$512$91006);
            m1018 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1022);
            panda$core$Bit $tmp1023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1018->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1023.value) {
            {
                foundInit1004 = ((panda$core$Bit) { true });
            }
            }
            panda$core$Bit $tmp1026 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1018)->name, &$s1025);
            bool $tmp1024 = $tmp1026.value;
            if (!$tmp1024) goto $l1027;
            panda$core$Int64 $tmp1028 = panda$collections$Array$get_count$R$panda$core$Int64(m1018->parameters);
            panda$core$Bit $tmp1029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1028, ((panda$core$Int64) { 0 }));
            $tmp1024 = $tmp1029.value;
            $l1027:;
            panda$core$Bit $tmp1030 = { $tmp1024 };
            if ($tmp1030.value) {
            {
                foundCleanup1005 = ((panda$core$Bit) { true });
                panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1031.value) {
                {
                    panda$core$Object* $tmp1033 = (($fn1032) self->compiler->$class->vtable[2])(self->compiler);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1033), p_position, &$s1034);
                }
                }
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1018));
        }
        goto $l1011;
        $l1012:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$512$91006));
    }
    panda$core$Bit $tmp1037 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1004);
    bool $tmp1036 = $tmp1037.value;
    if (!$tmp1036) goto $l1038;
    panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1036 = $tmp1039.value;
    $l1038:;
    panda$core$Bit $tmp1040 = { $tmp1036 };
    bool $tmp1035 = $tmp1040.value;
    if (!$tmp1035) goto $l1041;
    panda$core$Bit $tmp1043 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result951)->name, &$s1042);
    $tmp1035 = $tmp1043.value;
    $l1041:;
    panda$core$Bit $tmp1044 = { $tmp1035 };
    if ($tmp1044.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1046 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1047 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp1047);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1048, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1050 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1050);
        org$pandalanguage$pandac$Type* $tmp1051 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1052 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1052);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1046, result951, p_position, NULL, $tmp1047, $tmp1048, &$s1049, $tmp1050, $tmp1051, $tmp1052);
        defaultInit1045 = $tmp1046;
        panda$collections$Array$add$panda$collections$Array$T(result951->methods, ((panda$core$Object*) defaultInit1045));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result951->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1045));
    }
    }
    panda$core$Bit $tmp1055 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1005);
    bool $tmp1054 = $tmp1055.value;
    if (!$tmp1054) goto $l1056;
    panda$core$Bit $tmp1058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    bool $tmp1057 = $tmp1058.value;
    if ($tmp1057) goto $l1059;
    panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp1057 = $tmp1060.value;
    $l1059:;
    panda$core$Bit $tmp1061 = { $tmp1057 };
    $tmp1054 = $tmp1061.value;
    $l1056:;
    panda$core$Bit $tmp1062 = { $tmp1054 };
    bool $tmp1053 = $tmp1062.value;
    if (!$tmp1053) goto $l1063;
    panda$core$Bit $tmp1065 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result951)->name, &$s1064);
    $tmp1053 = $tmp1065.value;
    $l1063:;
    panda$core$Bit $tmp1066 = { $tmp1053 };
    if ($tmp1066.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1068 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1069 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        panda$core$Int64 $tmp1070 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1069, $tmp1070);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1071, ((panda$core$Int64) { 0 }));
        panda$collections$Array* $tmp1073 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1073);
        org$pandalanguage$pandac$Type* $tmp1074 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1075 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1075);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1068, result951, p_position, NULL, $tmp1069, $tmp1071, &$s1072, $tmp1073, $tmp1074, $tmp1075);
        defaultCleanup1067 = $tmp1068;
        panda$collections$Array$add$panda$collections$Array$T(result951->methods, ((panda$core$Object*) defaultCleanup1067));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result951->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1067));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1067));
    }
    }
    panda$core$Bit $tmp1076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1076.value) {
    {
        haveFields1077 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1079 = ((panda$collections$Iterable*) result951->choiceEntries)->$class->itable;
            while ($tmp1079->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1079 = $tmp1079->next;
            }
            $fn1081 $tmp1080 = $tmp1079->methods[0];
            panda$collections$Iterator* $tmp1082 = $tmp1080(((panda$collections$Iterable*) result951->choiceEntries));
            Iter$540$131078 = $tmp1082;
            $l1083:;
            ITable* $tmp1085 = Iter$540$131078->$class->itable;
            while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1085 = $tmp1085->next;
            }
            $fn1087 $tmp1086 = $tmp1085->methods[0];
            panda$core$Bit $tmp1088 = $tmp1086(Iter$540$131078);
            panda$core$Bit $tmp1089 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1088);
            if (!$tmp1089.value) goto $l1084;
            {
                ITable* $tmp1091 = Iter$540$131078->$class->itable;
                while ($tmp1091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1091 = $tmp1091->next;
                }
                $fn1093 $tmp1092 = $tmp1091->methods[1];
                panda$core$Object* $tmp1094 = $tmp1092(Iter$540$131078);
                e1090 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1094);
                panda$core$Int64 $tmp1095 = panda$collections$Array$get_count$R$panda$core$Int64(e1090->fields);
                panda$core$Bit $tmp1096 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1095, ((panda$core$Int64) { 0 }));
                if ($tmp1096.value) {
                {
                    haveFields1077 = ((panda$core$Bit) { true });
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1090));
                        goto $l1084;
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1090));
            }
            goto $l1083;
            $l1084:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$540$131078));
        }
        panda$core$Bit $tmp1097 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1077);
        if ($tmp1097.value) {
        {
            {
                org$pandalanguage$pandac$Type* $tmp1098 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                result951->rawSuper = $tmp1098;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result951->rawSuper));
            }
        }
        }
    }
    }
    panda$core$Object* $tmp1100 = (($fn1099) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1101 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1100)->currentClass);
    {
        tmp61102 = result951;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName870));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result951));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations886));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters888));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes927));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment879));
        }
        return tmp61102;
    }
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$556$91103;
    org$pandalanguage$pandac$ClassDecl* inner1115;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1104 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1104->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1104 = $tmp1104->next;
        }
        $fn1106 $tmp1105 = $tmp1104->methods[0];
        panda$collections$Iterator* $tmp1107 = $tmp1105(((panda$collections$Iterable*) p_cl->classes));
        Iter$556$91103 = $tmp1107;
        $l1108:;
        ITable* $tmp1110 = Iter$556$91103->$class->itable;
        while ($tmp1110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1110 = $tmp1110->next;
        }
        $fn1112 $tmp1111 = $tmp1110->methods[0];
        panda$core$Bit $tmp1113 = $tmp1111(Iter$556$91103);
        panda$core$Bit $tmp1114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1113);
        if (!$tmp1114.value) goto $l1109;
        {
            ITable* $tmp1116 = Iter$556$91103->$class->itable;
            while ($tmp1116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1116 = $tmp1116->next;
            }
            $fn1118 $tmp1117 = $tmp1116->methods[1];
            panda$core$Object* $tmp1119 = $tmp1117(Iter$556$91103);
            inner1115 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1119);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1115, p_arr);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1115));
        }
        goto $l1108;
        $l1109:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$556$91103));
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$562_91120;
    panda$collections$ImmutableArray* entries1122;
    panda$collections$Array* result1124;
    panda$core$String* currentPackage1126;
    panda$collections$HashMap* aliases1128;
    panda$collections$Iterator* Iter$567$171130;
    org$pandalanguage$pandac$ASTNode* e1142;
    org$pandalanguage$pandac$ASTNode* $match$568_211147;
    panda$core$String* name1149;
    panda$core$String* fullName1152;
    panda$core$String$Index$nullable idx1154;
    panda$core$String* alias1157;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1158;
    org$pandalanguage$pandac$Position position1162;
    org$pandalanguage$pandac$ASTNode* dc1164;
    panda$collections$ImmutableArray* annotations1166;
    org$pandalanguage$pandac$ClassDecl$Kind kind1168;
    panda$core$String* name1170;
    panda$collections$ImmutableArray* generics1172;
    panda$collections$ImmutableArray* supertypes1174;
    panda$collections$ImmutableArray* members1176;
    org$pandalanguage$pandac$ClassDecl* cl1178;
    panda$collections$ListView* tmp71180;
    {
        $match$562_91120 = p_file;
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_91120->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1121.value) {
        {
            panda$collections$ImmutableArray** $tmp1123 = ((panda$collections$ImmutableArray**) ((char*) $match$562_91120->$data + 0));
            entries1122 = *$tmp1123;
            panda$collections$Array* $tmp1125 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1125);
            result1124 = $tmp1125;
            currentPackage1126 = &$s1127;
            panda$collections$HashMap* $tmp1129 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
            panda$collections$HashMap$init($tmp1129);
            aliases1128 = $tmp1129;
            {
                ITable* $tmp1131 = ((panda$collections$Iterable*) entries1122)->$class->itable;
                while ($tmp1131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1131 = $tmp1131->next;
                }
                $fn1133 $tmp1132 = $tmp1131->methods[0];
                panda$collections$Iterator* $tmp1134 = $tmp1132(((panda$collections$Iterable*) entries1122));
                Iter$567$171130 = $tmp1134;
                $l1135:;
                ITable* $tmp1137 = Iter$567$171130->$class->itable;
                while ($tmp1137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1137 = $tmp1137->next;
                }
                $fn1139 $tmp1138 = $tmp1137->methods[0];
                panda$core$Bit $tmp1140 = $tmp1138(Iter$567$171130);
                panda$core$Bit $tmp1141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1140);
                if (!$tmp1141.value) goto $l1136;
                {
                    ITable* $tmp1143 = Iter$567$171130->$class->itable;
                    while ($tmp1143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1143 = $tmp1143->next;
                    }
                    $fn1145 $tmp1144 = $tmp1143->methods[1];
                    panda$core$Object* $tmp1146 = $tmp1144(Iter$567$171130);
                    e1142 = ((org$pandalanguage$pandac$ASTNode*) $tmp1146);
                    {
                        $match$568_211147 = e1142;
                        panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211147->$rawValue, ((panda$core$Int64) { 27 }));
                        if ($tmp1148.value) {
                        {
                            panda$core$String** $tmp1150 = ((panda$core$String**) ((char*) $match$568_211147->$data + 16));
                            name1149 = *$tmp1150;
                            {
                                currentPackage1126 = name1149;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1126));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211147->$rawValue, ((panda$core$Int64) { 38 }));
                        if ($tmp1151.value) {
                        {
                            panda$core$String** $tmp1153 = ((panda$core$String**) ((char*) $match$568_211147->$data + 16));
                            fullName1152 = *$tmp1153;
                            panda$core$String$Index$nullable $tmp1156 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1152, &$s1155);
                            idx1154 = $tmp1156;
                            memset(&alias1157, 0, sizeof(alias1157));
                            if (((panda$core$Bit) { idx1154.nonnull }).value) {
                            {
                                {
                                    panda$core$String$Index $tmp1159 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1152, ((panda$core$String$Index) idx1154.value));
                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1158, ((panda$core$String$Index$nullable) { $tmp1159, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                    panda$core$String* $tmp1160 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1152, $tmp1158);
                                    alias1157 = $tmp1160;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1157));
                                }
                            }
                            }
                            else {
                            {
                                {
                                    alias1157 = fullName1152;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1157));
                                }
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1128, ((panda$collections$Key*) alias1157), ((panda$core$Object*) fullName1152));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1157));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211147->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1161.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1163 = ((org$pandalanguage$pandac$Position*) ((char*) $match$568_211147->$data + 0));
                            position1162 = *$tmp1163;
                            org$pandalanguage$pandac$ASTNode** $tmp1165 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$568_211147->$data + 16));
                            dc1164 = *$tmp1165;
                            panda$collections$ImmutableArray** $tmp1167 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211147->$data + 24));
                            annotations1166 = *$tmp1167;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1169 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$568_211147->$data + 32));
                            kind1168 = *$tmp1169;
                            panda$core$String** $tmp1171 = ((panda$core$String**) ((char*) $match$568_211147->$data + 40));
                            name1170 = *$tmp1171;
                            panda$collections$ImmutableArray** $tmp1173 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211147->$data + 48));
                            generics1172 = *$tmp1173;
                            panda$collections$ImmutableArray** $tmp1175 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211147->$data + 56));
                            supertypes1174 = *$tmp1175;
                            panda$collections$ImmutableArray** $tmp1177 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211147->$data + 64));
                            members1176 = *$tmp1177;
                            org$pandalanguage$pandac$ClassDecl* $tmp1179 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1128), currentPackage1126, position1162, dc1164, annotations1166, kind1168, name1170, generics1172, supertypes1174, members1176);
                            cl1178 = $tmp1179;
                            if (((panda$core$Bit) { cl1178 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1178, result1124);
                            }
                            }
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1178));
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                        }
                        }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1142));
                }
                goto $l1135;
                $l1136:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$567$171130));
            }
            {
                tmp71180 = ((panda$collections$ListView*) result1124);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1126));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1124));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1128));
                }
                return tmp71180;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

