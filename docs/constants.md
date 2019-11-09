Constants
=========

A *constant* is a value which cannot change at runtime. Constants are introduced with the syntax:

    constant PI:Real := 3.14159263589

The type declaration is optional. If it is omitted, the type is inferred from the constant's value.
By convention, the names of constants are written entirely in uppercase, using underscores to
separate words. For instance:

    constant DAYS_IN_WEEK := 7

To enforce the "cannot change" rule, all constants must have [immutable](immutability.md) types.
Constants may appear either in class bodies, at the same level as methods and fields, or within
methods. Constants in class bodies are scoped to the class, for instance:

    class Physics {
        constant C := 299792458
        constant H := 6.62606957e-34
    }

    method main() {
        Console.writeLine("The speed of light is \{Physics.C} m/s")
    }

Constants appearing in methods are treated much like local [variables](variables.md), except that
they are read-only and must be immutable. 

Constants in general are similar to [defines](defines.md); the difference is that constants may be
class-scoped and must be immutable, whereas defines may at most be instance scoped and may be either
mutable or immutable.
