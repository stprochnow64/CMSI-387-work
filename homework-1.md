# Homework 1

1. Operating systems and middleware are similar in many ways but there are several key differences between them. Middleware operates application programs and the operating system and is like a layer on top of the operating system. It uses services from the operating system and then provides services to the application programs to support controlled interaction. Operating systems and middleware rely upon different underlying providers of low-level services. An operating system provides the services in its API by making use of the features supported by its hardware while middleware provides the services in its API by making us of the features supported by its underlying operating system.

2. The relationship between threads and processes is as follows. They are both independent sequences of execution, but threads run in a shared memory space (same address) while processes do not. Processes are used for larger tasks and threads are used for smaller ones. Threads can come from multiple sources; they can come from multiple independent processes or from the same process, in which case that process would be a multithreaded process.

3. We have found the capability of an operating system to run multiple threads at the same time and switch threads to maximize efficiency and resource utilization to be the most interesting topic so far. We are looking forward to learning more about it and how to try and implement this capability ourselves in the projects we do in class.

4. a) Thread A takes a total of 1100ms because each disk operation takes 10ms and each computation takes 1ms. 10 + 1 = 11 and 11 * 100 (the amount of times it loops) = 1100ms. Then it takes 1ms to switch to thread B. 1100 + 1 = 1101ms. And then 1 second (1000ms) to run thread B. The total time would be 2101ms.

   b) Thread A's disk operation takes 10ms. 1 of those ms is used to switch from A to B and then the other 9ms are used for running thread B. When A's disk operation is complete it switches back to thread A, which takes 1ms. Then the computation on thread A takes an additional 1ms. This happens 100 times. 10 + 1 + 1 = 12 and 12 * 100 = 1200ms. Once thread A's loop has been completed, there is still some of thread B left to run because 9 * 100 is only 900ms and B takes 1000ms to complete. We must switch back to thread B, taking 1ms, and run thread B for 100ms more. 1200 + 1 + 100 = 1301ms, which would be the total time elapsed for these operations.
   
   c) Option (b) is more efficient in our opinion because it makes use of the time that A is performing its disk operation by switching to thread B and starting to run it. This way, once all of the looping on thread A is done, there is only 100ms left to do for thread B instead of the full 1000ms.

6. The six different orders the threads can be run in are shown in the photos below of the Gantt charts we made. The orders are as follows: (T1 T2 T3), (T1 T3 T2), (T2 T1 T3), (T2 T3 T1), (T3 T1 T2), (T3 T2 T1).

