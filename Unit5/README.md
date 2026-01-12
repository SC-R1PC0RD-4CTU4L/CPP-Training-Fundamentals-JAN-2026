## Unit 5- Pointers And Dynamic Memory

### Very Short Questions

What is a pointer?

What is an address?

What does &x mean?

What does \*p mean?

What is a dangling pointer?

What is a memory leak?

What is nullptr?

What is pointer arithmetic?

What is the difference between pointer and reference?

What does new do?

What does delete do?

What is heap memory?

What is stack memory?

What happens if delete is not called?

What is double deletion?

What is int \*p;?

What is int &r = x;?

What is a null pointer?

What is sizeof(int\*)?

What happens when accessing freed memory?

### Short Questions

Explain pointers with a memory diagram.

Explain reference variables.

Differentiate between pointers and references.

Explain pointer arithmetic with an example.

Explain dynamic memory allocation.

Explain heap vs stack memory.

Explain dangling pointers with an example.

Explain memory leaks.

Explain ownership of memory.

Explain why delete[] is needed for arrays.

Explain how dynamic arrays work.

Explain why nullptr is safer than NULL.

Explain segmentation fault.

Explain how to safely use pointers.

Explain why raw pointers are dangerous.

### Code Tracing ( Predict The Output)

1.

```cpp
int x = 10;
int *p = &x;
cout << *p;

```

2.

```cpp
int a = 5;
int *p = &a;
*p = 10;
cout << a;

```

3.

```cpp
int arr[] = {10, 20, 30};
int *p = arr;
cout << *(p + 1);
```

4.

```cpp
int *p = new int(5);
cout << *p;
delete p;
cout << *p;

```

5.

```cpp
int &r = x;
r = 20;
cout << x;
```

### Programming Questions

Write a program to dynamically allocate an integer and store a value.

Write a program to dynamically allocate an array of n integers.

Write a function that swaps two numbers using pointers.

Write a program to demonstrate a memory leak.

Write a program to fix a memory leak.

Write a program that returns a dynamically allocated array.

Write a program to reverse an array using pointers.

Write a function that sets a pointer to nullptr after deleting memory.

Write a program to count elements using pointer traversal.

Write a program to safely free dynamic memory.

### Conceptual Questions

Why is deleting stack memory dangerous?

Why must every new have a corresponding delete?

Why are dangling pointers dangerous?

Why is pointer arithmetic unsafe without bounds checking?

Why are references safer than pointers?
