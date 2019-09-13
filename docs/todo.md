Rearchitecture
==============

inlining

Immediate
=========

Detect and error on parameter reassignment
fix command line parsing
permissions
handle duplicate classes, more than one public class per file, classes not being in the correct path
figure out rules for init / cleanup, make sure I'm following them consistently, check any cases I
    can that don't rely on dataflow
var parameters
all tests working (incl. C)
verify build & run from directories containing spaces
enforce class directory and filename rules

Eventually
==========

Dataflow, null safety, function safety
Proper native code headers
Property error reporting
automatically calculate dependency information during build
DWARF info
Move wrappers / structs / casting / etc. out of CG and into Compiler. Create IR.Type. ...Maybe?

Bugs
====

Do we add an owner to String.Index and check against it?
need to handle pre/postconditions inherited from multiple sources (remember that multiple interfaces
    can define the same method with different contracts)
Need to figure out & enforce init and cleanup rules
need to report error on @external init / cleanup
should we be able to create class method and instance method with identical signatures? currently
    works on creation, being reported as ambiguous on call. Need to figure out how to handle this
    and fix it.
need to error on duplicate methods

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
class Array$frost$core$Equatable : Array<Equatable> internally. They have to be part of the
containing class to ensure that we always see them (and thus use the right specialization) and
because they can effectively disable @final optimizations, so we need to know about them to know
the class isn't "really" final. Naturally they only work within 'class', not interface or choice.

They can add interfaces, but of course cannot change the superclass. (Can they add fields?) It is
possible for multiple specializations to combine when the types are compatible
(e.g. specialization<Equatable<T>> and specialization<Formattable>). I think we handle this by
pregenerating each possible combination of specializations (any combination of interfaces, plus zero
or one superclass) and erroring if any of them have conflicts.

Need to use specialization to add Equatable to the container classes when appropriate.