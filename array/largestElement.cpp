#include <bits/stdc++.h>
using namespace std;

void largestElement(int arr[], int n)
{
    int maxindex = 0; // maxindex holds the index and arr[maxindex] contain the actual value
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[maxindex])
        {
            maxindex = i;
        }
    }
    cout << "The largest element of array is: " << arr[maxindex];
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
    largestElement(arr, n);

    return 0;
}