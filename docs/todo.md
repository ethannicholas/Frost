Rearchitecture
==============

@class binary overloads Int[1 .. 10]
boolean short circuiting
lambdas / inner methods
@weak / Weak
inlining

Immediate
=========

Closures not working with both self and local variable captures at the same time
Proper lambda / inner method errors
Documentation (still need: fix bug with * in operators.md, fix links with parentheses...)
Array literals
fix command line parsing
error handling (at least Maybe / Error / try, can wait on forcing people to check for errors)
permissions
handle duplicate classes, more than one public class per file, classes not being in the correct path
figure out rules for init / cleanup, make sure I'm following them consistently, check any cases I
    can that don't rely on dataflow
var parameters
all tests working (incl. C)
verify build & run from directories containing spaces
postfix '!'
enforce class directory and filename rules

Eventually
==========

Move wrappers / structs / casting / etc. out of CG and into Compiler. Create IR.Type.
Dataflow, null safety, function safety
Proper native code headers
Tuples
Property error reporting
automatically calculate dependency information during build
DWARF info

Bugs
====

need to handle pre/postconditions inherited from multiple sources (remember that multiple interfaces
    can define the same method with different contracts)
change def current := compiler.currentMethod[0] for i in 0 .. current.parameters.get_count() in
    LLVMCodeGenerator to just for i in 0 .. compiler.currentMethod[0].parameters.get_count() and we
    leak memory
Need to figure out & enforce init and cleanup rules
Add tests for things like breaking out of multiple loops w/ memory management
Initializing a @weak <nullable> with null causes a crash (probably fixed?)
Not getting error from using instance field in class constant (probably fixed?)
should we be able to create class method and instance method with identical signatures? currently
    works on creation, being reported as ambiguous on call. Need to figure out how to handle this
    and fix it.
need to error on duplicate methods
I/O with System.Process is being indefinitely buffered somewhere; this means interactive programs
        don't work at all through PandaRun


Specializations
===============

class Array<T> {
    specialization<Equatable<T>> : Equatable<T> {
        @override
        function =(other:T):Bit {
            ...
        }
    }
}

specializations are implemented as subclasses, so we end up with something like
class Array$panda$core$Equatable : Array<Equatable> internally. They have to be part of the
containing class to ensure that we always see them (and thus use the right specialization) and
because they can effectively disable @final optimizations, so we need to know about them to know
the class isn't "really" final. Naturally they only work within 'class', not interface or choice.

They can add interfaces, but of course cannot change the superclass. (Can they add fields?) It is
possible for multiple specializations to combine when the types are compatible
(e.g. specialization<Equatable<T>> and specialization<Formattable>). I think we handle this by
pregenerating each possible combination of specializations (any combination of interfaces, plus zero
or one superclass) and erroring if any of them have conflicts.

Need to use specialization to add Equatable to the container classes when appropriate, also to make
Stack.pop(T) use '=' instead of '==' when available.