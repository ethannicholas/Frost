Fields
======

A *field* is [variable](variables.md), [define](defines.md), or [constant](constants.md) inside of a
[class](classes.md) body.

    class Point {
        var x:Int
        var y:Int
    }

In this example, the class `Point` has two fields, `x` and `y`. Each instance of `Point` has its own
independent copies of these fields. As Frost does not feature global variables, the only class-level
fields (called 'static' fields in many languages) in Frost are `constant`s.

Fields which do not have [default values](defaultValues.md) must be initialized prior to invoking
the superclass [`init` method](initMethods.md).