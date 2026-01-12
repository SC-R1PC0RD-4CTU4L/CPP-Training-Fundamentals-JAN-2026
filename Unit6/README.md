## Unit 6- Classes And OOP

### Very Short Questions

What is a class?

What is an object?

What is encapsulation?

What is a constructor?

What is a destructor?

What does this pointer point to?

What is public, private, protected?

What is an invariant?

What is inheritance?

What is polymorphism?

What is a virtual function?

What is method overriding?

What is base class?

What is derived class?

What is dynamic binding?

What is abstraction?

What is data hiding?

What is struct vs class?

What happens if a constructor is not defined?

What happens when an object is destroyed?

### Short Questions

Explain class and object with an example.

Explain encapsulation with an example.

Explain constructors and destructors.

Explain access specifiers.

Explain invariants and why they matter.

Explain inheritance with an example.

Explain function overriding.

Explain virtual functions with an example.

Explain dynamic binding.

Explain why multiple inheritance is dangerous.

Explain abstraction with an example.

Explain composition vs inheritance.

Explain this pointer.

Explain base class pointers to derived objects.

Explain object lifetime.

### Code Tracing ( Predict The Output)

1.

```cpp
class A {
public:
    A() { cout << "A"; }
};

int main() {
    A obj;
}

```

2.

```cpp
class A {
public:
    A() { cout << "A"; }
    ~A() { cout << "B"; }
};

int main() {
    A obj;
}

```

3.

```cpp
class Base {
public:
    virtual void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived"; }
};

int main() {
    Base* b = new Derived();
    b->show();
}
```

4.

```cpp
class A {
public:
    A() { cout << "A"; }
};

class B : public A {
public:
    B() { cout << "B"; }
};

int main() {
    B obj;
}

```

5.

```cpp
class A {
public:
    A() { cout << "A"; }
};

int main() {
    A* p = new A();
    delete p;
}
```

### Programming Questions

Create a class Rectangle with area and perimeter methods.

Create a class Student with name and roll number.

Create a class BankAccount with deposit and withdraw.

Implement inheritance with Shape and Circle.

Demonstrate polymorphism with base pointer.

Write a class that enforces an invariant.

Implement constructor and destructor logging.

Write a class with private data and public accessors.

Create a class Fraction with simplified form.

Implement overriding with virtual.

### Conceptual Questions

Why is encapsulation important?

Why should data members be private?

Why are destructors important?

Why is polymorphism powerful?

Why is composition often better than inheritance?
