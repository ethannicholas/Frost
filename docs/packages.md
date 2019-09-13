Packages
========

A *package* is a namespace to which [classes](classes.md) may belong. Packages are introduced with
the `package` [keyword](keywords.md) at the beginning of a file:

    package org.frostlang.examples

After a `package` declaration, all classes appearing in the same file are considered to belong to
that package.

    package com.example.program

    @private
    class A { }

    class B { }

This example defines two classes, with fully-qualified names `com.example.program.A` and
`com.example.program.B`. Classes may be referred to by relative names. For instance, from within the
class `com.example.program.A`, the name `B` would be taken to refer to `com.example.program.B`. From
within `com.example.C`, the name `program.A` would be taken to refer to `com.example.program.A`.

Uses
----

Classes can always be referenced by their fully qualified names, such as [frost.core.String].
Because it would be inconvenient to always have to write out the full name of a class, there is a
`uses` declaration which allows you to refer to a class by its simple name:

    uses com.example.foo.Example

    class NewExample : Example {
        ...
    }

After the `uses` declaration, the name `Example` refers to the class `com.example.foo.Example`. All
of Frost's built-in classes, other than those in the `frost.unsafe` package, are "used"
automatically and so are always available by their simple names.
