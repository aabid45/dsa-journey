#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp)
{
    int ans = 1;
    while (exp--)
    {
        ans *= base;
    }
    return ans;
}

void isArmstrong(int number)
{
    int temp1 = number;
    int temp2 = number;
    int count = 0;
    int sum = 0;
    while (temp1 > 0)
    {
        count++;
        temp1 /= 10;
    }

    while (temp2 > 0)
    {
        int lastDigit = temp2 % 10;
        // sum += round(pow(lastDigit, count));  //we will have to write round otherwise pow gives us float value and 5*5 will return something lime 24.99999
        sum += power(lastDigit, count);
        temp2 /= 10;
    }
    cout << sum;
    if (sum == number)
        cout << "Armstrong ";
    else
        cout << "Not Armstrong";
}

int main()
{
    int number;
    cin >> number;
    isArmstrong(number);

    return 0;
}