#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //------brute force approach to fine the frequency of an element in the array
    // int count = 0;
    // int targetNumber = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == targetNumber)
    //     {
    //         count++;
    //     }
    // }
    // cout << "Frequency of your asked number is: " << count;

    // hash approach to find the frequency of q numbers
    // int hash[15] = {0};
    // for(int i = 0; i<n; i++) {
    //     hash[arr[i]]++;
    // }

    map<int, int> mppp;
    for (int i = 0; i < n; i++)
    {
        mppp[arr[i]]++;
    }

    int queries;
    cin >> queries;
    while (queries--)
    {
        int number;
        cin >> number;
        cout << mppp[number]<<" ";
    }

    return 0;
}