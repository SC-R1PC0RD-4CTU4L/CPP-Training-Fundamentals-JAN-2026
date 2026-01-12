## Unit 9 - Exception Handling

### Very Short Questions

What is an exception?

What is try?

What is catch?

What is throw?

What is stack unwinding?

What is a runtime error?

What is a custom exception?

What is std::exception?

What is rethrowing?

What is noexcept?

### Short Questions

Explain exception handling mechanism.

Explain try-catch block.

Explain stack unwinding.

Explain custom exceptions.

Explain multiple catch blocks.

Explain catch(...).

Explain rethrowing.

Explain exception vs error code.

Explain resource safety.

Explain noexcept.

### Code Tracing ( Predict The Output)

1.

```cpp
try { throw 5; }
catch(int x) { cout << x; }

```

2.

```cpp
try { int x = 5/0; }
catch(...) { cout << "Error"; }

```

3.

```cpp
try {
    throw runtime_error("fail");
}
catch(exception &e) {
    cout << e.what();
}
```


### Programming Questions

Handle division by zero using exceptions.

Create a custom exception class.

Handle file open failure using exceptions.

Demonstrate stack unwinding.

Rethrow an exception.

### Conceptual Questions

Why exceptions are better than error codes?

Why destructors run during exceptions?

Why catch by reference?

Why avoid throwing from destructors?

Why use custom exceptions?
