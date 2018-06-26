Packages
========

A *package* is a namespace to which [classes](classes.html) may belong. Packages are introduced with
the `package` [keyword](keywords.html) at the beginning of a file:

    package org.pandalanguage.examples

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

Classes can always be referenced by their fully qualified names, such as [panda.core.String].
Because it would be inconvient to always have to write out the full name of a class, there is a
`uses` declaration which allows you to refer to a class by its simple name:

    uses com.example.foo.Example

    class NewExample : Example {
        ...
    }

After the `uses` declaration, the name `Example` refers to the class `com.example.foo.Example`. All
of Panda's built in classes, other than those in the `panda.unsafe` package, are "used"
automatically and so are always available by their simple names.
