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