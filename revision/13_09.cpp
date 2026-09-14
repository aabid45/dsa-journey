#include <bits/stdc++.h>
using namespace std;

// int factorial(int i, int n)
// {
//     if (n < 1)
//         return i;
//     return factorial(i * n, n - 1);
// }

// void reverseArray(int n, int arr[], int i)
// {
//     if (i >= n / 2)
//         return;
//     swap(arr[i], arr[n - i - 1]);
//     reverseArray(n, arr, i + 1);
// }

bool isStringPalindrome(int n, string &str, int i)
{
    if (i >= n / 2)
        return true;
    if (str[i] != str[n - i - 1])
        return false;
    isStringPalindrome(n, str, i + 1);
}

int main()
{
    // int n = 5;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // reverseArray(n, arr, 0);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     fact *= i;
    // }

    // cout << fact;

    // cout << factorial(1, n);

    string str;
    cin >> str;
    int n = str.size();

    if (isStringPalindrome(n, str, 1))
        cout << "True";
    else
        cout << "False";
    return 0;
}