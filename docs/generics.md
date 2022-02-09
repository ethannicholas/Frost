Generic Types
=============

A `generic` class or method is one which has *type parameters*. A type parameter is a variable which
stands for an as-yet-unknown type. For instance, the [Array] class can hold objects of any type. An
`Array<String>` is not the same as an `Array<Int>`, but the `Array` class was written in such a way
that it can be specialized against any type.

Generic Classes
---------------

To declare a generic class, include its type parameters after its name:

    class FancyMap<Key, Value> {
        ...
    }

The `FancyMap` class has two type parameters, `Key` and `Value`. When referring to the `FancyMap`
type, you must specify the arguments to its type parameters, as in
    
    def m := FancyMap<Int, String>()

Within the `FancyMap` class, you may use the types `Key` and `Value`:

    class FancyMap<Key, Value> {
        method values():Array<Value> {
            ...
        }
    }

Since you have not specified any restrictions ("bound") on `Key` or `Value`, they can become any
type: the default bound is `Object?`. To restrict the types that may be used, specify a type bound
as in:

    class FancyMap<Key:Hashable, Value:Object> {
        ...
    }

Now `Key` must be a subclass of `Hashable` (or implement it, if it is an interface), and `Value`
must be an `Object`. Changing `Value`'s type bound from the default `Object?` to `Object` is
equivalent to saying "Value may not be `null`".

These types may be [implicitly cast](implicitCasting.md) to their bounds. You may call any of
`Hashable`'s methods on `Key`, store `Key` into an `Array<Object>`, and so forth.

Generic Methods
---------------

Generic methods are declared in the same way as generic classes: by including the type parameters
after the method name. For instance,

    function process<T>(values:Array<T>)

The `process` method can operate on any kind of `Array`:

    process([1, 2, 3])
    process(["A", "B", "C"])

 Normally, as in the examples above, you do not need to specify the type(s) of a generic method when
 calling it. They will be inferred based on the arguments and/or expected return type of the call.
 But there are sometimes reasons to specify the types. For example, in the call:

    process(["A", "B", "C"])

The type will be inferred as `<String>`, but perhaps you intended for those single-character string
literals to be treated as characters. You can force this interpretation with:

    process<Char8>(["A", "B", "C"])

Self-Referential Bounds
-----------------------

Several classes in the Frost core library, such as [Equatable], refer to themselves in their type
bounds. `Equatable` is declared as:

    interface Equatable<T:Equatable<T>> {
        ...
    }

This may not immediately make sense. In order to declare an `Equatable`, you have to... reference an
`Equatable`?

It's easier than it might seem:

    class Foo : Equatable<Foo> {
        ...
    }

The reason for this apparent strangeness is to ensure that `Equatable` is symmetric. If an equatable
value `foo` can compare itself against another equatable value `bar`, then `bar` can compare itself
against `foo` - most likely because they are both instances of the same class.