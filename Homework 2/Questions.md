**2.**
By deleting the line *State snapshot = state.get();*, this creates a bug because the audit does not check the current state of ticket buying, thus reflecting an inaccurate number. Say the audit function were run while a person were in the middle of purchasing a ticket, the seats remaining would not accurately reflect the amount of cash on hand, since the transaction has not been completed. Thus, we would get an inaccurate audit because it is reading the amounts in the middle of a transaction.

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
