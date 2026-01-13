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