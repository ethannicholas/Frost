Memory Management
=================

Panda manages memory using automatic reference counting. Each object carries around a count of the
number of references to it, and when that count drops to zero, the object is destroyed. This
reference count tracking is completely automatic, and you will generally not even need to be aware
of it - simply create and use objects as needed, and they will be automatically cleaned up for you
when you are finished with them.

Of course, every memory management strategy has advantages and disadvantages, and automatic
reference counting is no different.

The chief *advantages* of Panda's memory management are:

* **Simple**: In practice Panda memory management feels much like a typical garbage collector; just
  throw objects on the floor when you're done with them, and it will handle cleanup for you
  automatically.
* **Timely**: Unlike typical garbage collected languages, Panda cleans up objects the instant the
  last reference is removed. This means that you may rely on `cleanup()` methods being called
  promptly.
* **Pauseless**: Typical garbage collectors must stop the execution of a program while they scan
  memory to determine which objects are still in use. Even so-called "pauseless" garbage collectors
  still have these pauses, they are just less likely to be noticed.

The chief *disadvantages* of Panda's memory management are:

* **Reference cycles**: When object A refers to object B, and object B refers to object A, each of
  them will have a reference count of 1 even when no outside references to them exist. This is a
  "reference cycle", and it means that these objects will remain in memory even when you are
  finished with them. Cycles are easily fixed using [weak references](weakReferences.md), but it is
  something you will need to be aware of.
* **Throughput**: A garbage collector's pauses can be annoying, but garbage collectors do little or
  no work in between these pauses. Reference counting, on the other hand, does a tiny bit of work
  every time a reference is updated. This is a tradeoff which leads to zero pauses, but slightly
  lower overall performance.
