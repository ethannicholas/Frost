Tuples
======

A *tuple* is an ordered sequence of two or more values, which (unlike in an [Array]) may be of
different types.

    def suffix := ("KB", 1024)

The individual elements in a tuple are extracted using the index operator, just like with arrays:

    Console.writeLine(suffix[0]) -- writes "KB"

If the index is a constant integer (as in `suffix[0]`), the type is determined by the element at
that index: in this case, `suffix[0]` has type `panda.core.String`and `suffix[1]` has type
`panda.core.Int`. 

If the index is not a constant, as in `suffix[i]`, the compile-time type is determined from the
union of all of the tuple's element types. In this case, the most specific type that could represent
both `panda.core.String` and `panda.core.Int` is `panda.core.Immutable`, so `suffix[i]` has
compile-time type `panda.core.Immutable`.

Destructuring
-------------

You may assign into multiple variables simultaneously in order to extract values from a tuple, or
"destructure" it.

    def suffix := ("KB", 1024)
    def (name, value) := suffix
    Console.writeLine(name)  -- writes "KB"
    Console.writeLine(value) -- writes "1024"

The number of assignment targets must equal the number of tuple elements. You may ignore tuple
values you do not care about using an underscore ('_') as the "name" of a value:

    def suffix := ("KB", 1024)
    (_, values[i]) := suffix