Defines
=======

A *define* is like a [variable](variables.html), but it cannot be reassigned. Defines are introduced
with the syntax:

    def x:Int := 12, y:Int := 0

The type declarations may be omitted to infer the type of the define from its assigned value, or the
assignment may be omitted to leave the define unitialized. The type and assignment may not both be
omitted.

Defines may be assigned to exactly once, either as part of their initial declaration or later, but
after this initial assignment they may not be reassigned.

Defines may appear in methods, in which case they are essentially fixed-value local variables, or in
classes, in which case they are essentially fixed-value instance fields. Unlike
[constants](constants.html), a define may be of a mutable type: that is, the object stored in a
define is allowed to change, but you may not change the define to point to a different object
altogether. In other words, this is legal:

    def value := ["A", "String", "Array"]
    value.append("Changed!")

because even though the array the define points to is changing, the define itself is not being
redefined. On the other hand, this is not legal:

    def value := ["A", "String", "Array"]
    value := ["Changed!"] -- won't compile!

because it is an illegal attempt to change the value of the define itself.

Idiomatic Frost code tends to use `def` almost everywhere, only occasionally resorting to `var`.