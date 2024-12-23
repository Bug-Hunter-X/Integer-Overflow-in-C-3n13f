# Integer Overflow Bug in C

This repository demonstrates a common integer overflow bug in C and provides a solution to mitigate the risk.

## Bug Description
The `bug.c` file contains a simple C program that demonstrates integer overflow. The program initializes an integer variable `x` to 10 and then assigns a new value to it through a pointer. If the new value exceeds the maximum limit for an integer, an overflow occurs, leading to unexpected results.

## Solution
The `bugSolution.c` file shows a more robust approach that checks for potential overflow before assignment to avoid undefined behavior. This prevents unexpected program crashes or incorrect results due to integer overflow.

## How to Run
1. Compile the code using a C compiler (like GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
2. Run the compiled executables:
   ```bash
   ./bug
   ./bugSolution
   ```