#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1]){
            return false;
            break;
        }    
    }
    return true;
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
    if (isArraySorted(n, arr))
        cout << " Sorted";
    else
        cout << "Not Sorted";
    return 0;
}