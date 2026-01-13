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