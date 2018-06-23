Method References
=================

A *method reference* is a reference to an existing method in an object or class. Method references
are normally used as part of method calls, for instance in:

    Console.printLine("Hello, World!")

`Console.printLine` is a reference to the method `printLine(Object)` in the class
`panda.io.Console`. The parentheses and argument after the reference make this a *call* to
`Console.printLine`, but we can also use the method value directly:

    Int[1 ... 10].apply(Console.printLine)

This prints the numbers `1` through `10` to the console.

Ambiguity
---------

References to overloaded methods are ambiguous, because they could potentially refer to any of the
method's variants. It is still possible to use such an ambiguous method reference, as long as the
type can be inferred from context. For instance, the reference to `Console.printLine` above is
actually ambiguous because it could refer to either [Console.printLine(Object)] or
[Console.printLine()], but only one of those methods makes sense as an argument to `apply`, and so
the compiler is able to resolve the ambiguity.

You may manually resolve ambiguity by casting the reference to the correct type, assigning it to
variable with the correct type, etc.

Instance Method References
--------------------------

Instance methods are a bit special, because an instance method (of course) needs an instance of the
object to operate on, but the instance is not part of the method's explicit parameters. For example,
the function [Int64.max(Int64)] declares a single parameter, but it actually operates on *two*
numbers - `self` and its declared parameter.

To reflect this, we can access an instance method in one of two ways. If we grab the `max` method
from a specific instance of `Int64`, for example `0.max`, this gives us a method with a single
`Int64` parameter. The code:
    
    def max0:(Int)=>(Int) := 0.max
    Console.printLine(max0(5))
    Console.printLine(max0(-5))

uses `max` in this fashion. We can also grab `max` from the `Int64` class, in which case it takes an
extra parameter to provide its `self`:

    def max:(Int, Int)=>(Int) := Int64.max
    Console.printLine(max(0, 5))
    Console.printLine(max(0, -5))
