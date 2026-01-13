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