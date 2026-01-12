## Unit 1- Introduction to Programming with C++

### Very Short Questions

What is the purpose of the main() function?

What is compilation?

What header file is required for cin and cout?

What is the difference between = and ==?

What is the output of cout << 7 / 2;?

What is integer overflow?

What is operator precedence?

What does break do?

What does continue do?

What is a logical error?

What is undefined behavior?

What is the difference between while and do-while?

What is the output of cout << (5 > 3);?

What is short-circuit evaluation?

What is implicit type conversion?

What happens if a variable is used without initialization?

What is the scope of a variable?

What is the default return type of main()?

What is the result of ++x vs x++?

What does switch do?

### Short Questions

Explain the structure of a C++ program with an example.

Explain the steps involved in compiling and running a C++ program.

Differentiate between syntax error, runtime error, and logical error.

Explain integer division and floating-point division.

Explain operator precedence with an example.

Explain how an if-else ladder works.

Explain the working of a for loop.

Explain the working of a while loop.

Explain type casting and give an example.

Explain why division by zero is dangerous.

Explain the difference between break and continue.

Explain boundary conditions with an example.

Explain why input validation is important.

Explain the working of switch with an example.

Explain short-circuit evaluation with && and ||.

### Code Tracing ( Predict The Output)

1.

```cpp
int x = 5;
cout << x++ << " " << ++x;


```

2.

```cpp
int a = 10, b = 3;
cout << a / b * 1.0;

```

3.

```cpp
for(int i = 0; i <= 5; i++)
    cout << i;
cout << i;
```

4.

```cpp
int a = 5;
if(a = 0)
    cout << "Zero";

```

5.

```cpp
while(true)
    cout << "Loop";
```

6.

```cpp
int i = 1;
do {
    cout << i << " ";
    i++;
} while(i < 1);
```

7.

```cpp
int n = 123;
while(n > 0) {
    cout << n % 10;
    n /= 10;
}
```

### Programming Questions

Write a program to check whether a number is prime.

Write a program to reverse a number.

Write a program to print the Fibonacci sequence up to n terms.

Write a program to check whether a number is a palindrome.

Write a program to count the number of digits in a number.

Write a program to find the sum of digits of a number.

Write a program to find the GCD of two numbers.

Write a program to display all Armstrong numbers between 1 and 1000.

Write a program to print all factors of a number.

Write a program to simulate a simple calculator using switch.

### Conceptual Questions

Why is float generally avoided for money calculations?

Why is == more dangerous than = in conditions?

Why is while(true) sometimes used intentionally?

Why should we avoid magic numbers in programs?

Why does 0.1 + 0.2 != 0.3 sometimes?
