## Unit 2- Functions, Decomposition & Debugging

### Very Short Questions

What is a function?

What is the difference between a function declaration and definition?

What is a return value?

What is the difference between pass-by-value and pass-by-reference?

What is the call stack?

What is the lifetime of a local variable?

What is the scope of a function parameter?

What is function overloading?

What is a prototype?

What happens if a function does not return a value?

What is a side effect?

What is modular programming?

What is an assertion?

What is tracing?

What is a logical error?

What is a runtime error?

What is debugging?

What does void mean?

What happens when return is executed?

What is a precondition?

### Short Questions

Explain the need for functions in large programs.

Explain how the call stack works using an example.

Differentiate between pass-by-value and pass-by-reference with an example.

Explain the difference between local and global variables.

Explain function overloading with an example.

Explain the role of a function prototype.

Explain how arguments are matched to parameters.

Explain what happens when a function is called.

Explain the lifetime of a variable with respect to stack frames.

Explain how to debug a program logically.

Explain tracing with an example.

Explain assertions and their importance.

Explain preconditions and postconditions.

Explain the difference between void and non-void functions.

Explain why global variables are dangerous.

### Code Tracing ( Predict The Output)

1.

```cpp
int f(int x) {
    x = x + 5;
    return x;
}

int main() {
    int a = 10;
    cout << f(a) << " " << a;
}



```

2.

```cpp
void g(int &x) {
    x = x * 2;
}

int main() {
    int a = 5;
    g(a);
    cout << a;
}

```

3.

```cpp
int h(int x) {
    if(x > 0) return x;
}

int main() {
    cout << h(-5);
}
```

4.

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(add(1,2), 3);
}

```

5.

```cpp
int x = 10;

void foo() {
    int x = 5;
    cout << x;
}

int main() {
    foo();
    cout << x;
}
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

Write a function to check if a number is even.

Write a function to return the maximum of two numbers.

Write a function to swap two numbers (use pass by reference).

Write a function to compute factorial (iterative).

Write a function to check if a number is prime.

Write a function to count digits in a number.

Write a function to compute power a^b.

Write a function to reverse a number.

Write a function to return the sum of digits of a number.

Write a function that returns the nth Fibonacci number (iterative).

### Conceptual Questions

Why is pass-by-reference more efficient sometimes?

Why must every non-void function return a value?

Why is deep nesting bad design?

Why is debugging a thinking skill, not a syntax skill?

Why should functions be small and focused?
