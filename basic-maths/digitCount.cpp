#include <bits/stdc++.h>
using namespace std;

void countDigit(int n)
{

    if (n == 0)
    {
        cout << "count is 1";
        return;
    }
    int count = 0;

    while (n > 0)  // if the number will be like 001 then An integer does not preserve leading zeros and will be stored as n = 1 to handle this scenario we need to take input as string
    {
        count++;
        int lastDigit = n % 10;
        cout << " " << lastDigit;  // will print the number in reverse order
        n = n / 10;
    }
    cout << endl;
    cout << "count is: " << count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    countDigit(n);
    return 0;
}