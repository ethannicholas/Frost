Defines
=======

A *define* is like a [variable](variables.html), but it cannot be reassigned. Defines are introduced
with the syntax:

    def x:Int := 5

Defines may appear in methods, in which case they are essentially fixed-value local variables, or in
classes, in which case they are essentially fixed-value instance fields. Unlike
[constants](constants.html), a define may be of a mutable type: that is, the object stored in a
define is allowed to change, but you may not change the define to point to a different object
altogether. In other words, this is legal:

    def value := ["A", "String", "Array"]
    value.append("Changed!")

because even though the array the define points to is changing, the define itself is not being
redefined. On the other hand, this is not legal:

    var value := ["A", "String", "Array"]
    value := ["Changed!"] -- won't compile!

because it is an illegal attempt to change the value of the define itself.

Idiomatic Panda code tends to use `def` almost everywhere, only occasionally resorting to `var`.