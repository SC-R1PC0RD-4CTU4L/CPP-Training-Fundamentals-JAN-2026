// Write a program to calculate the sum of digits in a number.

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