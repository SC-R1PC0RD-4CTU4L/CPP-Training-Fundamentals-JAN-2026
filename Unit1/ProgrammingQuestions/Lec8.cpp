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
