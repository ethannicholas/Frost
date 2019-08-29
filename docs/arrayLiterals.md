Array Literals
==============

An *array literal* is a comma-separated list of expressions enclosed by square brackets, such as:

    [1, 2, 3]

The exact type of an array literal depends upon its context. The literal above, for example, can be
used as all of these types:

    def a1:Array<Int64>     := [1, 2, 3]
    def a2:Array<UInt8?>    := [1, 2, 3]
    def a3:Array<Immutable> := [1, 2, 3]
    def a4:ListView<Object> := [1, 2, 3]

among many other possibilities.
