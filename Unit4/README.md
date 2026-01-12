## Unit 4- Recursion

### Very Short Questions

What is recursion?

What is a base case?

What is a recursive case?

What is the call stack?

What happens if a base case is missing?

What is stack overflow?

What is tail recursion?

What is divide and conquer?

What is backtracking?

What is the difference between recursion and iteration?

What is the depth of recursion?

What does a recursive function return?

What is indirect recursion?

What is a recursion tree?

What is the output of a recursive function with no base case?

What is the order of execution in recursion?

What is a terminating condition?

What is overlapping subproblems (conceptual only)?

What is a leaf node in recursion tree?

Why is recursion expensive?

### Short Questions

Explain how recursion works using factorial as an example.

Explain base case and recursive case with examples.

Explain the call stack with a diagram (conceptually).

Compare recursion and iteration.

Explain divide and conquer with an example.

Explain backtracking with an example.

Explain tail recursion.

Explain recursion on arrays.

Explain recursion on strings.

Explain recursion depth and its limitations.

Explain why stack overflow happens.

Explain how recursion terminates.

Explain how to convert recursion into iteration.

Explain mutual recursion.

Explain why recursion is elegant but risky.

### Code Tracing ( Predict The Output)

1.

```cpp
int f(int n) {
    if(n == 0) return 1;
    return n * f(n-1);
}

int main() {
    cout << f(3);
}

```

2.

```cpp
int g(int n) {
    if(n == 0) return 0;
    cout << n;
    return g(n-1);
}

int main() {
    g(3);
}

```

3.

```cpp
int h(int n) {
    if(n == 0) return;
    h(n-1);
    cout << n;
}

int main() {
    h(3);
}
```

4.

```cpp
void print(int n) {
    if(n == 0) return;
    cout << n;
    print(n-1);
    cout << n;
}

int main() {
    print(2);
}

```
### Programming Questions

Write a recursive function to compute factorial.

Write a recursive function to compute sum of first n numbers.

Write a recursive function to compute power a^b.

Write a recursive function to reverse a string.

Write a recursive function to check if a string is a palindrome.

Write a recursive function to print numbers from 1 to n.

Write a recursive function to find maximum in an array.

Write a recursive function to count digits in a number.

Write a recursive function to generate all subsets of {1,2,3}.

Write a recursive function to generate all permutations of "ABC".

### Conceptual Questions

Why must recursion always have a base case?

Why is recursion slower than iteration?

Why is recursion useful for tree-like problems?

Why is tail recursion optimization not guaranteed in C++?

Why does recursion make code cleaner sometimes?
