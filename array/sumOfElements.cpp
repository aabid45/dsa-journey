#include <bits/stdc++.h>
using namespace std;

void sumofAllElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "sum of all element in the array is: " << sum;
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
    sumofAllElements(arr, n);
    return 0;
}