#include <bits/stdc++.h>
using namespace std;

// -------------using while loop with two pointer
// void reverseArray(int arr[], int s, int e)
// {
//     while (s < e)
//     {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// }
//---------single pointer
// void reverseArray(int arr[], int i, int n)
// {
//     while (i < n / 2)
//     {
//         swap(arr[i], arr[n - i - 1]);
//         i++;
//     }
// }

//-----two pointer using recursion
// void reverseArray(int arr[], int s, int e)
// {
//     if (s >= e)
//         return;
//     swap(arr[s], arr[e]);
//     reverseArray(arr, s + 1, e - 1);
// }
//------single pointer using recursion
void reverseArray(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(arr, i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // reverseArray(arr, 0, n - 1); // for two ppointer
    reverseArray(arr, 0, n); // for single pointer

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}