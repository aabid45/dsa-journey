#include <bits/stdc++.h>
using namespace std;

void smallestElement(int arr[], int n)
{
    int minindex = 0; //minindex holds the index of min element not the actual minelement 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minindex])
        {
            minindex = i;
        }
    }
    cout << "Smallest element of array is: " << arr[minindex];
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
    smallestElement(arr, n);

    return 0;
}