#include <bits/stdc++.h>
using namespace std;

void averageofAllElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double average = sum / n;
    cout << "Average of all Elements is: " << average;
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
    averageofAllElements(arr, n);
    return 0;
}