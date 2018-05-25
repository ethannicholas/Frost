This document describes error handling as it will eventually exist, not as it
currently does.

--------------------------------------------------------------------------------

Error Handling
==============

Sometimes a method can't guarantee that it will be successful. The [File.openInputStream()] method,
for example, might fail because the file does not exist, or because of permission problems, or for
any of a number of other reasons.

There are three main ways for a method to communicate failures back to its caller:

1. A nullable result. This is the right choice when there is no need to convey any additional
   information back to the caller beyond "it failed". For instance, when the [Int64.parse()]
   function cannot parse a string, it simply returns `null` to indicate that "this wasn't a valid
   number". There really isn't any need for further information, so the function doesn't bother with
   the [Error] class at all.
2. A [Maybe] result. The `Maybe<X>` type contains either an instance of the type `X`, or an `Error`.
   The caller can inspect this object to retrieve the result or examine the `Error`.
3. The return type `Error?`. When a method does not normally need to return any information, but
   still might fail, `Error?` is the right return type. `File.delete()` is a good example of this
   sort of method. It is a compile-time error for a program to call a method which returns `Error?`
   and not examine the return value.

Because it is common to call many `Error?`-returning methods in sequence (for instance, writing data
to a file will tend to involve many such calls), manually checking the result of each call quickly
becomes tedious. The `try ... fail` syntax exists to help with this:

    try {
        def out := path.openOutputStream()
        out.write("No error handling necessary here!")
    }
    fail(e) {
        Console.printLine("Error writing file: \{e}")
    }

Within a `try` block, if any method call results in an error (either a `Maybe` result which contains
an `Error` or a non-`null` `Error?` return value), the program immediately jumps to the `fail`
block. Since all `Maybe`s within the `try` block are known to have succeeded (otherwise, we would
have jumped to the `fail` block), they are automatically unwrapped. The variable `out` in the above
snippet of code has type `OutputStream`, despite the fact that `path.openOutputStream()` returns
`Maybe<OutputStream>` - placing the call inside of a `try` block handles the error checking and
unwrapping automatically.

Note that Panda's `try` block is very different from `try` blocks in languages such as C++ and Java.
Panda does not feature exception handling and Panda's `try` therefore has nothing to do with
exceptions. Panda `Error`s do not cause the stack to unwind, will not propagate to enclosing
contexts, etc. Panda's `try` block simply forwards any `Errors` happening within it to the `fail`
block.

The `fail` block can be written in three different ways:

  1. `fail(name) { ... }` - the `Error` is stored in the variable `name`. The type of this
     variable is based on the types of `Error`s which may actually occur within the `try` block; for
     instance, if only `IOError` can occur within the `try` block, the error variable will be
     assumed to be of type `IOError` (rather than just `Error`).
  2. `fail(name:Type) { ... }` - as above, but provides a specific type annotation for the `Error`.
  3. `fail { ... }` - omit the error variable altogether. The `fail` code will be run in the event
     of an error, but the `Error` itself will not be available for inspection.

