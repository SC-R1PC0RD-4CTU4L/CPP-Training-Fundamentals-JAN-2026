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