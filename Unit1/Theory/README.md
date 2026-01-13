## Theory Questions

### Very Short Answer Type Questions

#### 1.WHat is the purpose of the main function?

The main() function is the entry point of every C/C++ program. It's where program execution begins and (typically) ends.

1. Entry Point of Execution

   - Operating system calls main() when program starts
   - First function to execute when program runs
   - Control flows from main() to other functions

2. Program Control Flow

   - Orchestrates the program's logic
   - Calls other functions to perform tasks
   - Determines program execution sequence

3. Return Exit Status

   - Returns integer value to operating system
   - Indicates success or failure of program
   - Convention: 0 = success, non-zero = error

4. Accept Command-Line Arguments

   - Can receive input from command line
   - Processes arguments passed when program runs

### Code Tracing

#### 1.

```cpp
int x = 5;
cout << x++ << " " << ++x;

```

**Output**

```output
5 7
```
