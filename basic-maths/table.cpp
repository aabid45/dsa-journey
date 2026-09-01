#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        int ans = number * i;
        cout << number << " * " << i <<" = "<< ans << endl;
    }
    return 0;
}