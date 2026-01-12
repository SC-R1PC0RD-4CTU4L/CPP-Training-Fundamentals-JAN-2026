## Unit 3- Arrays & Strings

### Very Short Questions

What is an array?

What is the index of the first element of an array?

What is array out-of-bounds?

What is the difference between an array and a variable?

What is the size of int arr[5];?

What is a string?

What is the difference between char[] and string?

What is the null character '\0'?

What is ASCII?

What does arr[i] mean internally?

What is traversal?

What is frequency counting?

What is a prefix sum?

What is a substring?

What is the time complexity of traversing an array?

What is the length of "Hello"?

What is s.size()?

What is the output of 'A' + 1?

What is the difference between == and .compare() for strings?

What happens if we write beyond array bounds?

### Short Questions

Explain how arrays are stored in memory.

Explain the difference between static arrays and dynamic arrays (conceptually).

Explain array traversal with an example.

Explain frequency counting using an array.

Explain prefix sum with an example.

Explain the difference between char[] and string.

Explain how strings are terminated in C-style strings.

Explain ASCII and character arithmetic.

Explain input of strings with spaces.

Explain why array indexing starts from 0.

Explain common array errors.

Explain how to reverse an array.

Explain how to check if a string is a palindrome.

Explain substring extraction.

Explain manual parsing of a string.

### Code Tracing ( Predict The Output)

1.

```cpp
int arr[5] = {1,2,3,4,5};
cout << arr[2];
```

2.

```cpp
int arr[] = {1,2,3};
cout << sizeof(arr)/sizeof(arr[0]);


```

3.

```cpp
string s = "ABC";
cout << s[1];
```

4.

```cpp
char c = 'A';
cout << c + 2;

```

5.

```cpp
int arr[3] = {10, 20, 30};
for(int i = 0; i <= 3; i++)
    cout << arr[i];
```

6.

```cpp
int freq[26] = {0};
string s = "aba";
for(char c : s)
    freq[c - 'a']++;
cout << freq[0] << " " << freq[1];
```

### Programming Questions

Read n numbers into an array and print them in reverse.

Find the maximum and minimum in an array.

Count the frequency of each digit in a number.

Check if an array is sorted.

Reverse a string.

Check if a string is a palindrome.

Count vowels in a string.

Find the sum of all elements in an array.

Rotate an array by one position.

Find the second largest element in an array.

### Conceptual Questions

Why is array index out-of-bounds dangerous?

Why do strings in C++ end with '\0'?

Why is prefix sum useful?

Why is character arithmetic possible?

Why does sizeof(arr) not work inside functions?
