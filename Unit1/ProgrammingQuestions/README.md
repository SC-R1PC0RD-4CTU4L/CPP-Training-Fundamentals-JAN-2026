## Programming Questions

### 1. Write a program to check whether a number is prime.

#### Approach -

- 0 is not a prime number, Neither are negative integers. Hence we return false
- We iterate from 2 to num-1 and if the number is divisible in this interval, it is not a prime number and we return false

```cpp
// Write A Program To Check Whether A Number Is Prime Or Not

#include <iostream>
#include <string>
using namespace std;

bool check_prime(int num)
{

    if (num <= 0)
        return false;

    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
            return false;
    }

    return true;
}
int main()
{

    int num;
    cout << "Enter A Number For Prime Check" << endl;
    cin >> num;
    string result = check_prime(num) ? "Number is Prime" : "Number is not Prime";
    cout << result << endl;
    cout << endl;
    return 0;
}

```

### 2.Write a program to reverse a number.

#### Approach

- We retrieve each digit by modulo operating the number by 10.
- Initialize a variable reverse before entering the loop.
- Multiply reverse with 10 and add the digit.
- Divide the number by 10.

```cpp
// Write A Program To Reverse A Number

#include <iostream>
#include <string>
using namespace std;

int reverse_number(int num)
{

    int copy = abs(num);
    int reverse = 0;

    while (copy != 0)
    {
        int digit = copy % 10;
        reverse = reverse * 10 + digit;
        copy /= 10;
    }

    return num < 0 ? -reverse : reverse;
}

int main()
{

    int num;
    cout << "Enter A Number For Reversing" << endl;
    cin >> num;
    cout << "The Reversed Number Is " << reverse_number(num) << endl;
    cout << endl;
    return 0;
}

```

### 3. Print Fibonacci Series upto n terms

#### Approach

- Handle the edge case of 1 term
- Take three variables a=0,b=1 and c
- Since a and b, the first two items are known, the loop should go till n-2 iterations
- Swap b with a and c with a+b in order.

```cpp
// Write a program to print the Fibonacci sequence up to n terms.

#include <iostream>
#include <string>
using namespace std;

void print_fibonacci_sequence_n_terms(int terms)
{

    if (terms <= 0)
    {

        cout << "Terms Cannot Be Negative Or 0" << endl;
        return;
    }

    if (terms == 1)
    {

        cout << "0" << endl;
        return;
    }

    int a = 0, b = 1, c, copy = 0;

    cout << a << " " << b << " ";

    while (copy != terms - 2)
    {

        c = a + b;
        cout << c << " ";
        a = b;
        b = c;

        copy++;
    }
}

int main()
{

    int terms;
    cout << "Enter Number Of Terms Of The Series To Print" << endl;
    cin >> terms;

    print_fibonacci_sequence_n_terms(terms);

    cout << endl;
    return 0;
}

```

#### 4. Check whether a number is Palindrome Or Not

- Reverse the given number and compare it with the original. If they are same, the number is a palindrome.

```cpp

//  Whether a number is palindrome or not

#include <iostream>
#include <string>
using namespace std;

bool check_palindrome(int num)
{
    int copy = abs(num);

    int reverse = 0;

    while (copy != 0)
    {

        int digit = copy % 10;
        reverse = reverse * 10 + digit;
        copy /= 10;
    }

    return reverse == abs(num);
}
int main()
{

    int num;
    cout << "Enter a number for palindrome check" << endl;
    cin >> num;
    string result = check_palindrome(num) ? "Number Is Palindrome" : "Number Is Not Palindrome";
    cout << result << endl;
    cout << endl;
    return 0;
}
```

#### 5.Write a program to count the number of digits in a number.

```cpp
// Write a program to count the number of digits in a number.

#include <iostream>
#include <string>
using namespace std;

int count_digits(int num)
{
    if (num == 0)
        return 1;
    int count = 0;

    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int main()
{

    int num;
    cout << "Enter The Number" << endl;
    cin >> num;
    cout << "The number of digits in " << num << " is " << count_digits(num) << endl;
    cout << endl;
    return 0;
}

```

#### 6.Write a program to calculate the sum of digits in a number.

```cpp
// Write a program to count the number of digits in a number.

#include <iostream>
#include <string>
using namespace std;

int sum_of_digits(int num)
{
    if (num == 0)
        return 0;
    int sum = 0;

    while (num != 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main()
{

    int num;
    cout << "Enter The Number" << endl;
    cin >> num;
    cout << "The sum of digits in " << num << " is " << sum_of_digits(num) << endl;
    cout << endl;
    return 0;
}

```

#### 7. Write a program to find GCD of two numbers

#### Approach

- Modulo the larger number with the smaller number to calculate the remainder.
- Keep swapping the dividend with the divisor and divisor with remainder until divisor is 1 or there is no remainder

```cpp
// Write a program to find GCD of two numbers

#include <iostream>
#include <string>
using namespace std;

int gcd(int small, int large)
{
    if (small == large)
    {

        return small;
    }
    if (small > large)
    {

        int swap = small;
        small = large;
        large = swap;
    }

    int divisor = small;
    int dividend = large;

    while (divisor != 1)
    {

        int rem = dividend % divisor;

        if (rem == 0)
        {

            return divisor;
        }

        dividend = divisor;
        divisor = rem;
    }

    return 1;
}
int main()
{

    int small, large;
    cout << "Enter Smaller Number" << endl;
    cin >> small;
    cout << "Enter Larger Number" << endl;
    cin >> large;

    cout << "The GCD Of " << small << "," << large << " is " << gcd(small, large) << endl;

    cout << endl;
    return 0;
}

```

#### 8. Print All Armstrong Numbers From 1 to 1000

- Run a loop from 1 to 1000 and pass every number to a function which checks if its an Armstrong Number

- To detect an Armstrong Number, we have to check whether the sum of digits raised to the power of the number of digits is equal to the digit itself.

- For example in 153 , 1<sup>3</sup> + 5<sup>3</sup> + 3<sup>3</sup> = 1 +125+27 = 153. Hence 153 is an Armstrong Number

```cpp
// Write a program to display all Armstrong numbers between 1 and 1000.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool check_armstrong_number(int num)
{

    int copy = num;
    int digit_count = 0;

    while (copy != 0)
    {

        int digit = copy % 10;
        copy /= 10;
        digit_count++;
    }

    copy = num;
    long int sum = 0;

    while (copy != 0)
    {

        int digit = copy % 10;
        sum += pow(digit, digit_count);
        copy /= 10;
    }

    return sum == num;
}

void print_armstrong_number(int start, int end)
{

    for (int i = start; i <= end; i++)
    {

        if (check_armstrong_number(i))
            cout << i << " ";
    }
}
int main()
{

    print_armstrong_number(1, 1000);
    cout << endl;
    return 0;
}


```

#### 9. Write a program to find out all the factors

```cpp
#include <iostream>
using namespace std;

void factorise(int num)
{
    cout << "Prime factors: ";

    // Check for factor 2
    while (num % 2 == 0)
    {
        cout << 2 << " ";
        num = num / 2;
    }

    // Check odd factors from 3 onwards
    for (int i = 3; i * i <= num; i += 2)
    {
        while (num % i == 0)
        {
            cout << i << " ";
            num = num / i;
        }
    }

    // If num is still > 1, it's a prime factor
    if (num > 1)
        cout << num;

    cout << endl;
}

int main()
{
    int num;
    cout << "Enter Number For Factorisation: ";
    cin >> num;
    factorise(num);
    return 0;
}
```

#### 10. Calculator In C++

```cpp
// Write a program to simulate a simple calculator using switch.

#include <iostream>
#include <string>
using namespace std;

void calculator()
{
    bool terminate = false;

    while (!terminate)
    {

        float first, second;
        cout << "#########- This is a Calculator Made In C++-#################" << endl;
        cout << "Enter First Number" << endl;
        cin >> first;
        cout << "Enter Second Number" << endl;
        cin >> second;

        cout << "Choose Operation" << endl;
        cout << "+ For Addition" << endl;
        cout << "- For Substraction" << endl;
        cout << "* For Multiplication" << endl;
        cout << "/ For Division" << endl;

        char op;
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "The Result Is " << first + second << endl;
            break;
        case '-':
            cout << "The Result Is " << first - second << endl;
            break;
        case '*':
            cout << "The Result Is " << first * second << endl;
            break;
        case '/':
            cout << "The Result Is " << first / second << endl;
            break;

        default:
            cout << "Invalid Input" << endl;
            return;
        }

        char repeat;
        cout << "Do You Want To Perform Another Operation? " << endl;
        cout << "y - Yes" << endl;
        cout << "n - No" << endl;
        cin >> repeat;

        if (repeat == 'n' || repeat == 'N')
        {
            terminate = true;
        }
    }
}
int main()
{

    calculator();
    cout << endl;
    return 0;
}
```
