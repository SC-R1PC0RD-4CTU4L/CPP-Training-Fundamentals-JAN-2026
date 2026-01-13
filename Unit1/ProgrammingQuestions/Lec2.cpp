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
