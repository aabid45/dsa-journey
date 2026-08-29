#include <bits/stdc++.h>
using namespace std;

// functional way to find sum to n
// int sumOfN(int n)
// {
//     if (n == 1)
//         return 1;
//     return n + sumOfN(n - 1);
// }

void sumOfN(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumOfN(i - 1, sum + i);
}

int main()
{
    int n = 10;
    // cout << sumOfN(n);
    sumOfN(n, 0);

    return 0;
}