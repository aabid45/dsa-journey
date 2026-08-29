#include <bits/stdc++.h>
using namespace std;

// functional way to find------------sum to n
// int sumOfN(int n)
// {
//     if (n == 1)
//         return 1;
//     return n + sumOfN(n - 1);
// }

// void sumOfN(int i, int sum)
// {
//     if (i < 1)
//     {
//         cout << sum;
//         return;
//     }
//     sumOfN(i - 1, sum + i);
// }
//------------factorial------------------
// int factorial(int n)
// {
//     if (n == 1)
//         return 1;
//     return n * factorial(n - 1);
// }

void factoial(int n, int fact)
{
    if (n == 1)
    {
        cout << fact;
        return;
    }
    factoial(n - 1, fact * n);
}

int main()
{
    int n = 10;
    // cout << sumOfN(n);
    // sumOfN(n, 0);
    // cout << factorial(n);
    factoial(n, 1);

    return 0;
}