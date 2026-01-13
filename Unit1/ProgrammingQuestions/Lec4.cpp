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