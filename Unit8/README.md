## Unit 8 - File Handling

### Very Short Questions

What is a file?

What is persistent storage?

What is fstream?

Difference between ifstream and ofstream?

What does ios::in do?

What does ios::out do?

What does ios::app mean?

What is a file pointer?

What is EOF?

What is close() used for?

What is getline()?

What is binary file?

What is text file?

What is seekg()?

What is tellg()?

What is ios::binary?

What happens if file open fails?

What is buffering?

What is file corruption?

What is flush?

### Short Questions

What is a file?

What is persistent storage?

What is fstream?

Difference between ifstream and ofstream?

What does ios::in do?

What does ios::out do?

What does ios::app mean?

What is a file pointer?

What is EOF?

What is close() used for?

What is getline()?

What is binary file?

What is text file?

What is seekg()?

What is tellg()?

What is ios::binary?

What happens if file open fails?

What is buffering?

What is file corruption?

What is flush?

### Code Tracing ( Predict The Output)

1.

```cpp
ifstream f("a.txt");
string s;
f >> s;
cout << s;

```

2.

```cpp
ofstream f("a.txt");
f << "Hello";
f.close();

```

3.

```cpp
ofstream f("a.txt", ios::app);
f << "World";
```

4.

```cpp
ifstream f("a.txt");
while(!f.eof()) {
    string s;
    f >> s;
    cout << s;
}

```


### Programming Questions

Write a program to write numbers to a file.

Write a program to read numbers from a file.

Copy contents of one file to another.

Count lines in a file.

Append data to an existing file.

### Conceptual Questions

Why is EOF unreliable for loop control?

Why must files be closed?

Why use binary mode?

Why is buffering needed?

Why can file operations fail?
