Memory Management
=================

Frost manages memory using automatic reference counting. Each object carries around a count of the
number of references to it, and when that count drops to zero, the object is destroyed. This
reference count tracking is completely automatic, and you will generally not even need to be aware
of it - simply create and use objects as needed, and they will be automatically cleaned up for you
when you are finished with them.

Of course, every memory management strategy has advantages and disadvantages, and automatic
reference counting is no different.

The chief *advantages* of Frost's memory management are:

* **Simple**: In practice Frost memory management feels much like a typical garbage collector; just
  'drop objects on the floor' when you're done with them, and it will handle cleanup for you
  automatically.
* **Timely**: Unlike typical garbage collected languages, Frost cleans up objects the instant the
  last reference is removed. This means that you may rely on `cleanup()` methods being called
  promptly.
* **Predictable**: Typical garbage collectors must stop the execution of a program while they scan
  memory to determine which objects are still in use. This can happen at unpredictable times and
  cause frame drops or sudden latency spikes. Frost's memory management generally results in
  smoother, more predictable performance.

The chief *disadvantages* of Frost's memory management are:

* **Reference cycles**: When object A refers to object B, and object B refers to object A, each of
  them will have a reference count of 1 even when no outside references to them exist. This is a
  "reference cycle", and it means that these objects will remain in memory even when you are
  finished with them. Cycles are easily fixed using [weak references](weakReferences.md), but it
  is something you will need to be aware of.
* **Throughput**: A garbage collector's pauses can be annoying, but garbage collectors do little or
  no work in between these pauses. Reference counting, on the other hand, does a tiny bit of work
  every time a reference is updated. This is a tradeoff which leads to predictable behavior, but
  lower overall performance.
* **Slow destruction of large structures**: Destroying a large data structure consisting of many
  individual objects can take a while as the destruction cascades through the structure. Destroying
  node 1 causes node 2's refcount to drop to zero, so we destroy node 2, which causes node 3's
  refcount to drop to zero, so we destroy node 3...
