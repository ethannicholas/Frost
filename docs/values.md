Values
======

Subclasses of [panda.core.Value] are called "value classes" or "values".

While most objects are passed by reference, values are passed by value. Values do not have a
distinct identity and may not be compared using the `==` or `!==` operator. Values are "plain old
data" objects; they do not have a pointer to their class (in C++ parlance, they have no vtable) nor
any other hidden header fields. Values are stack allocated and are not subject to refcounting.
Value classes may not be subclassed.

Values are essentially equivalent to immutable stack allocated C `struct`s.

Performance Considerations
==========================

Value objects allow for many optimizations; Panda would be unacceptably slow if `Int` were a regular
class instead of a value - even calculating `1 + 1` would multiple heap allocations. Fortunately,
this is not the case, and after optimization math in Panda compiles down to the same basic
arithmetic instructions that it does in languages like C.

However, there are still some pitfalls to be aware of. Casting a value type to an `Object` requires
Panda to convert it to a full-fledged refcounted object with an object header. This "wrapping" is
handled automatically, as is unwrapping if the object is cast back to an object type, but it can
have a significant performance impact.

Casting a value type to a nullable value type (meaning e.g. a cast from `Int64` to `Int64?`) is much
cheaper than converting it all the way to `Object`. The nullable version of a value type is only a
single byte longer than the normal non-nullable version and is still stack allocated.