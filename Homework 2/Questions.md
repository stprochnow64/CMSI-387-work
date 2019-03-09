**1.**
Reversing the steps could be a bad idea because it can create buggy code. You need to remove the current thread from the runnable threads before unlocking the mutex. For example, if you unlock the mutex before removing the current thread from the runnable threads, it is possible that that thread would be run again before another thread gets to go, which causes malfunctions.


**2.**
By deleting the line *State snapshot = state.get();*, this creates a bug because the audit does not check the current state of ticket buying, thus reflecting an inaccurate number. Say the audit function were run while a person were in the middle of purchasing a ticket, the seats remaining would not accurately reflect the amount of cash on hand, since the transaction has not been completed. Thus, we would get an inaccurate audit because it is reading the amounts in the middle of a transaction.

**6.**
The virtual addresses of the first and last 4-byte words in page 6 are 12289 and 16384. They translate into the physical address of the first and last words in page frame 3. 

**7.**
1024 page-table entries fit within one page-sized portion of the table. These 1024 entries have second level page directories pointing to them and each chunk in that page directory also has 1024 entries. Figure 6.13 shows a page directory with the last entry pointing to a page table. This last entry would contain pages 1047552-1048575 (1024 entries with 1024 pages = 1024x1023 since 0 is used as first page). Since this range of pages is held in that page directory, the page table will contain an entry for each of those 1024 pages. From the page table, the numbers 1047552 and 1047553 are the first 2 pages in the page table range from the last entry in the page directory in the figure. 

**8.**
When beginning on this assignment, created a simple program shown below:

![alt text](https://github.com/stprochnow64/CMSI-387-work/blob/master/Homework%202/Screen%20Shot%202019-03-05%20at%206.48.14%20PM.png)

The first input for VAL_TO_CHANGE was 99,999,999,999,999, which took too long to run entirely. The number was then changed to 999 and the terminal ran the program instantaneously. The first instance of hesitation was shown when the val was 99,999,999. Adding a single other 9 caused the program to take 5 seconds to run. When the number was increased again by a 9 in the ones digit, this warning was generated, and the program seemed to be caught in an infitie loop:

![alt text](https://github.com/stprochnow64/CMSI-387-work/blob/master/Homework%202/Screen%20Shot%202019-03-05%20at%206.51.34%20PM.png)

Since 999,999,999 seems to be the mark where the application still runs, we decided to test 1,000,000,000, which also ran for 5 seconds. As testing for the max value continued, it was found that the program stopped running around 2,100,000,000 loops.

**9.**
While the program is in sleep mode, the following is displayed on the terminal window when *ps* is entered into the command line: 

![alt text](https://github.com/stprochnow64/CMSI-387-work/blob/master/Homework%202/Screen%20Shot%202019-03-04%20at%2010.40.26%20PM.png)

There are 10 processes currently running while the program is sleeping, 8 of which are the c program. 

The family tree looks like

![alt text](https://github.com/stprochnow64/CMSI-387-work/blob/master/Homework%202/Screen%20Shot%202019-03-07%20at%2011.47.31%20AM.png)
