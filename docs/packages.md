Packages
========

A *package* is a namespace to which [classes](classes.html) may belong. Packages are introduced with
the `package` [keyword](keywords.html) at the beginning of a file:

    package org.pandalanguage.examples

After a `package` statement, all classes appearing in the same file are
considered to belong to that package.

    package com.example.program

    @private
    class A { }

    class B { }

This example defines two classes, with fully-qualified names `com.example.program.A` and
`com.example.program.B`. Classes may be referred to by relative names. For instance, from within the
class `com.example.program.A`, the name `B` would be taken to refer to `com.example.program.B`. From
within `com.example.C`, the name `program.A` would be taken to refer to `com.example.program.A`.