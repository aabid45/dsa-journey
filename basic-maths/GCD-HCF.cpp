#include <bits/stdc++.h>
using namespace std;

void findGCD(int num1, int num2)
{
    for (int i = min(num1, num2); i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << "GCD is: " << i;
            break;
        }
    }
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    findGCD(num1, num2);
    return 0;
}