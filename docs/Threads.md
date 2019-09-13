Threads
=======

A thread is an independent stream of execution. A complete program may consist of many threads, all
running different code at the same time.

Threads are created by the [Thread.start()] method, passing in the method to run in the background.
The method will run asynchronously in a separate system thread.

Example:

    class ThreadExample {
        @class
        method count() {
            for i in 0 .. 1000 {
                Console.printLine("background: " + i)
            }
        }

        @class
        method doOtherThings() {
            for i in 0 .. 1000 {
                Console.printLine("foreground: " + i)
            }
        }

        @class
        method main() {
            Thread.start(ThreadExample.count)
            -- we have now started counting in the background, but we can keep 
            -- doing things in the foreground
            doOtherThings()
        }
    }

Threads communicate with each other by passing messages using [MessageQueue]s. Normally, threads may
only exchange immutable data. Combined with the fact that there is no global mutable state, this
means that under normal circumstances threads may not see each other's mutable data and therefore
there is no need for mutexes, semaphores, or other synchronization constructs unless the
clearly-marked unsafe APIs have been used.