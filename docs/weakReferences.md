Weak References
===============

A *weak reference* is a reference to an object which does not force it to
[remain in memory](memoryManagement.html). Weak references are created using either the
[`@weak` annotation](annotations.html#weak) or directly using the `panda.core.Weak` class.

To understand why we need weak references in the first place, consider this class:

    class Node {
        def parent:Node?

        def children := Array<Node>()
    }

`Node` contains a normal ("strong") reference to its parent and to an `Array` of its children. The
`Array` will in turn hold strong references to each `Node` inserted into it.

If we create two such `Node` objects in a parent-child relationship:

    def parent := Node()
    def child := Node()
    parent.children.add(child)
    child.parent := parent

We have now created a *reference cycle*. `parent` refers to `child` and `child` refers to `parent`.
Each of them forces the other to remain in memory; even if no other part of the program refers to
either node, all objects involved in the reference cycle will remain in memory.

We can break the reference cycle using a weak reference:

    class Node {
        @weak
        def parent:Node?

        def children := Array<Node>()
    }

The `@weak` annotation on parent turns off reference counting for that particular reference.
Assigning to `parent` will not increase the reference count of the object being pointed to. Our
previous parent-child set of objects no longer remains in memory indefinitely: as soon as the last
strong reference to `parent` goes away, the weak reference from `child` is insufficient to keep it
in memory and `parent` is destroyed. As soon as `parent` is destroyed, the last reference to `child`
is also gone, and `child` will be cleaned up as well.

**Parent-child relationships** are by far the most common kind of reference cycle. Simply tag the
reference from child to parent with the `@weak` annotation to break the cycle.

`panda.core.Weak`
-----------------

In addition to the `@weak` annotation, you may explicitly create `panda.core.Weak` objects. `Weak`
objects hold a reference to an object without affecting its reference count. The `Node` class above
could also have been written:

    class Node {
        def parent := Weak<Node?>(null)

        def children := Array<Node>()
    }

The only difference between this `Node` class and the one above is that you will have to manually
wrap objects in `Weak` references:

    def parent := Node()
    def child := Node()
    parent.children.add(child)
    child.parent := Weak<Node?>(parent)

and extract them using `get()`

    Console.printLine(child.parent.get())

The `@weak` annotation simply instructs Panda to perform these steps automatically; there is no
behavioral difference between using `panda.core.Weak` and `@weak`.

Using a weak reference after it is destroyed
--------------------------------------------

Because weak references do not force objects to remain in memory, this opens up the possibility of
using an object after it is destroyed:

    def w := Weak<String>("Hello" * 3)
    Console.printLine(w.get())

The only reference to the result of calling `"Hello" * 3` is a weak one, which cannot cause it to
remain in memory. The temporary object will be destroyed as soon as the first statement finishes
executing, and is gone by the time we call `w.get()` in the second statement.

This is a [safety violation](safetyViolation.html) . With safety checks enabled, Panda will catch
and report this error. With safety checks disabled, undefined behavior results.

**FIXME:** the safety checks that catch this aren't actually in place yet; it's always undefined
behavior at the moment.