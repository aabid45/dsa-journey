// sort in ascending order
// #include <bits/stdc++.h>
// using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i <= n - 2; i++)
//     {
//         int minimum = i;
//         for (int j = i + 1; j <= n; j++)
//         {
//             if (arr[j] < arr[minimum])
//             {
//                 minimum = j;
//                 cout << arr[minimum] << endl;
//             }
//         }
//         int tempp = arr[minimum];
//         arr[minimum] = arr[i];
//         arr[i] = tempp;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     selectionSort(arr, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }

//****** sort in descending order
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int n, int arr[])
{
    for (int i = 0; i <= n - 2; i++)
    {
        int maxindex = i;
        for (int j = i + 1; j <= n-1; j++)
        {
            if (arr[j] > arr[maxindex])
            {
                maxindex = j;
            }
        }
        int temp = arr[maxindex];
        arr[maxindex] = arr[i];
        arr[i] = temp;
    }
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
    selectionSort(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}