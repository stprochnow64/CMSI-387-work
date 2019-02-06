# Homework 1

1. **What is the difference between an operating system and middleware?**

Operating systems and middleware are similar in many ways but there are several key differences between them. Middleware occupies a position between application programs and the operating system, and is like a layer on top of the operating system. It uses services from the operating system and then provides services to the application programs to support controlled interaction. Operating systems and middleware rely upon different underlying providers of low-level services. An operating system provides the services in its API by making use of the features supported by its hardware while middleware provides the services in its API by making us of the features supported by its underlying operating system.

2. **What is the relationship between threads and processes?**

The relationship between threads and processes is as follows. They are both independent sequences of execution, but threads run in a shared memory space (same address) while processes do not. Processes are used for larger tasks and threads are used for smaller ones. Threads can come from multiple sources; they can come from multiple independent processes or from the same process, in which case that process would be a multithreaded process.

3. **Of all the topics previewed in chapter one of the text book, which one are you most looking forward to learning more about? Why?**

We are most looking forward to learning about security. It is something we have not yet learned in any of our previous classes, but we think it is very important to know about this topic. We are excited to learn about the conflicting objectives of system owners and adversaries. 

4. **Suppose thread A goes through a loop 100 times, each time performing one disk I/O operation, taking 10 milliseconds, and then some computation, taking 1 millisecond. While each 10-millisecond disk operation is in progress, thread A cannot make any use of the processor. Thread B runs for 1 second, purely in the processor, with no I/O. One millisecond of processor time is spent each time the processor switches threads; other than this switching cost, there is no problem with the processor working on thread B during one of thread A's I/O operations.**

*a) Suppose the processor and disk work purely on thread A until its completion, and then the processor switches to thread B and runs all of that thread. What will the total elapsed time be?*

Thread A takes a total of 1100ms because each disk operation takes 10ms and each computation takes 1ms. 10 + 1 = 11 and 11 * 100 (the amount of times it loops) = 1100ms. Then it takes 1ms to switch to thread B. 1100 + 1 = 1101ms. And then 1 second (1000ms) to run thread B. The total time would be 2101ms.

*b) Suppose the processor starts out working on thread A, but every time thread A performs a disk operation, the processor switches to B during the operation and then back to A upon the disk operation's completion. What will the total elapsed time be?*
   
Thread A's disk operation takes 10ms. 1 of those ms is used to switch from A to B and then the other 9ms are used for running thread B. When A's disk operation is complete it switches back to thread A, which takes 1ms. Then the computation on thread A takes an additional 1ms. This happens 100 times. 10 + 1 + 1 = 12 and 12 * 100 = 1200ms. Once thread A's loop has been completed, there is still some of thread B left to run because 9 * 100 is only 900ms and B takes 1000ms to complete. We must switch back to thread B, taking 1ms, and run thread B for 100ms more. 1200 + 1 + 100 = 1301ms, which would be the total time elapsed for these operations.
   
*c) In your opinion, which do you think is more efficient, and why?*

Option (b) is more efficient in our opinion because it makes use of the time that A is performing its disk operation by switching to thread B and starting to run it. This way, once all of the looping on thread A is done, there is only 100ms left to do for thread B instead of the full 1000ms.
   
5. **Find and read the documentation for pthread_cancel(). Then, using your C programming environment, use the information and the model provided in Figure 2.4 on page 26 of the text book to write a program in which the initial (main) thread creates a second thread. The main thread should read input from the keyboard, waiting until the user presses the Enter key. At that point, it should kill off the second thread and print out a message reporting that it has done so. Meanwhile, the second thread should be in an infinite loop, each time around sleeping five seconds and then printing out a message. Try running your program. Can the sleeping thread print its periodic messages while the main thread is waiting for keyboard input? Can the main thread read input, kill the sleeping thread, and print a message while the sleeping thread is in the early part of one of its five-second sleeps?**

6. **Suppose a system has three threads (T1, T2, and T3) that are all available to run at time 0 and need one, two, and three seconds of processing, respectively. Suppose each thread is run to completion before starting another. Draw six different Gantt charts, one for each possible order the threads can be run in. or each chart, compute the turnaround time of each thread; that is, the time elapsed from when it was ready (time 0) until it is complete. Also, compute the average turnaround time for each order. Which order has the shortest average turnaround time? What is the name of the scheduling policy that produces this order?**

The six different orders the threads can be run in are shown in the photos below of the Gantt charts we made. The orders are as follows: (T1 T2 T3), (T1 T3 T2), (T2 T1 T3), (T2 T3 T1), (T3 T1 T2), (T3 T2 T1).

![gantt123](https://user-images.githubusercontent.com/31746937/52171954-eec48400-271a-11e9-8004-d084bf67524d.jpg)

![gantt132](https://user-images.githubusercontent.com/31746937/52171956-13206080-271b-11e9-9257-749e212cb3f1.jpg)

![gantt213](https://user-images.githubusercontent.com/31746937/52171967-2c291180-271b-11e9-8cbe-b874e71abc0f.jpg)

![gantt231](https://user-images.githubusercontent.com/31746937/52171972-45ca5900-271b-11e9-94d0-bfde4e416427.jpg)

![gantt312](https://user-images.githubusercontent.com/31746937/52171978-68f50880-271b-11e9-9683-569d1b948f3d.jpg)

![gantt321](https://user-images.githubusercontent.com/31746937/52171991-99d53d80-271b-11e9-894a-e04aaa3d168f.jpg)

The order with the mininum average turnover time is T1 T2 T3, shown in the first Gantt chart. The scheduling policy that gives us this order is the Shortest Job First scheduling policy. The average turnaround time is minimized when the shortest job is processed first and so on. 

7. **Google the C standard library API and find out how to get information from the command line by using a printf() call to display a prompt, then another call [which you will look up] to get the user input. Write a program in C to prompt the user demographic information including name, age, class year, and any three other data times you wish. Structure the program as a call-and-response program such that each data item is a single question with a single answer. When all data has been obtained, display the data on the console. Each data item must be on a separate line, and it must be appropriately labeled. The output must be done using a single printf() statement.**

   ```c
   #include <string.h>
   #include <stdio.h>

   int main( int argc, char ** argv ) {
     char name[37];
     int age;
     int class_year;
     char major[37];
     char hometown[37];
     char mood[37];

     printf("What is your name? ");
     scanf("%s", name);

     printf("How old are you? ");
     scanf("%d", &age);

     printf("What is your class year? ");
     scanf("%d", &class_year);

     printf("What is your major? ");
     scanf("%s", major);

     printf("Where are you from? ");
     scanf("%s", hometown);

     printf("How are you feeling today? ");
     scanf("%s", mood);

     printf("\nName: %s \nAge: %d \nClass Year: %d \nMajor: %s \nHometown: %s\nMood: %s\n", name, age, class_year, major, hometown, mood);
   }
   ```

