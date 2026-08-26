#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    int number;
    cin >> number;

    if (isPrime(number))
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a Prime number";
    }
    return 0;
}