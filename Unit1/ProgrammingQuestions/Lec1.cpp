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