Current Status
--------------

Frost is mostly feature complete and generally pretty reliable at this point. It is bootstrapped
(meaning the compiler is itself written in Frost) and there are hundreds of test programs, totalling
nearly a hundred thousand lines of actively tested Frost code.

Frost's core APIs are currently quite limited. There is currently no networking, no graphics,
no sound, no time and date API, etc.; these things will come eventually, but creating a language and
comprehensive APIs is an enormous undertaking.

Performance is likely going to average out to "not generally *too* horrible" at the moment. Basic
logic and arithmetic code should generally be around as fast as C, while some things are currently
much slower than they should be. Frost hasn't undergone a lot of performance work yet, and there is
definitely quite a bit of low-hanging fruit from an optimization standpoint. `Array` is a noteworthy
offender: not only are there some frankly embarrassing inefficiencies in how refcounting works
within `Array`, but generic specialization is not in place yet. This means that an array of a value
type, such as `Array<UInt8>`, is currently treated internally exactly the same as `Array<Object>`.
Every byte added to an `Array<UInt8>` therefore has to be converted into a full-blown heap-allocated
object; probably not too big of a deal for a small array, but I definitely wouldn't recommend
reading a multi-megabyte file into memory as an array of bytes. This will of course be fixed
eventually.

Frost's program analysis and error detection is not yet complete. You can currently write programs
which do not obey the rules in certain ways, causing undefined behavior and crashes. Of course, you
can write broken code in something like C++ easily enough, too, so as long as you understand the
rules it's not any worse than programming in most languages. Things to be aware of:

* `init` method rules are not enforced. You can do things like not initialize your fields, call the
  superclass' `init` before initializing the subclass' fields, and call instance methods before
  field initialization is complete.
* Frost's null pointer safety is not in place yet. It is supposed to be a compile-time error to
  possibly dereference a null pointer, but that is not currently the case. Until the compile-time
  detection is in place, runtime checks are present. *Most* invalid usages of null pointers will be
  caught at runtime with a nice error message (often long before an actual crash would have
  occurred), but a field which is declared non-nullable and then not initialized in an init method
  will not be caught and can therefore lead to a crash.
* The rules regarding `function` purity are not enforced yet. `function`s are supposed to be
  side-effect free, but currently there is no meaningful difference between `function` and `method`.
  It's coming.