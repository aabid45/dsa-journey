#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

void LargestElement(int n, int arr[])
{
    int maxindex = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[maxindex])
        {
            maxindex = i;
        }
    }
    cout << arr[maxindex];
}

void countNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n /= 10;
    }
    cout << rev;
}

void printNumber(int n, int sum)
{
    if (n <= 0)
    {
        cout << sum;
        return;
    }
    printNumber(n - 1, sum + n);
}

void reverseArray(int s, int e, int arr[])
{
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

bool isStringPalindrome(int i, int n, string &str)
{
    while (i <= n / 2)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
        i++;
    }
    return true;
}

void selectionSort(int n, int arr[])
{
    for (int i = 0; i <= n - 2; i++)
    {
        int minindex = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }

        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // reverseArray(0, n-1, arr);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }

    // if (isArraySorted(n, arr))
    // {
    //     cout << "Sorted";
    // }
    // else
    //     cout << "Not Sorted";
    // LargestElement(n, arr);
    // countNumber(n);
    // printNumber(n, 0);
    // string str = "madam";
    // int n = str.length();

    // if (isStringPalindrome(0, n, str))
    // {
    //     cout << "Palindrome";
    // }
    // else
    //     cout << "Not Palindrome";

    // int n;
    // cin >> n;

    // int temp = 0;
    // int num1 = 0;
    // int num2 = 1;

    // for(int i = 2; i<=n; i++){
    //     temp = num1+num2;
    //     num1 = num2;
    //     num2 = temp;
    // }
    // cout << temp;

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // selectionSort(n, arr);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }

    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int hash[13] = {0};

    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]]++;
    // }

    // int queries;
    // cin >> queries;

    // while (queries--)
    // {
    //     int number;
    //     cin >> number;
    //     cout << hash[number] << " ";
    // }

    // string str;
    // cin >> str;

    // int n = str.length();

    // int hash[26] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[str[i] - 'a']++;
    // }

    // int queries;
    // cin >> queries;
    // while (queries--)
    // {
    //     char character;
    //     cin >> character;
    //     cout << hash[character - 'a'] << " ";
    // }

    string str;
    cin >> str;

    int n = str.length();

    map<char, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[str[i]]++;
    }

    int queries;
    cin >> queries;
    while (queries--)
    {
        char character;
        cin >> character;
        cout << mpp[character] << " ";
    }

    return 0;
}