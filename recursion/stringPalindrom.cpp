#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string &str, int n)
{
    //------ using single pointer
    // if (i >= n / 2)
    //     return true;
    // if (str[i] != str[n - i - 1])
    //     return false;
    // return checkPalindrome(i + 1, str, n);

    //------- using two pointer
    if (i >= n)
        return true;
    if (str[i] != str[n])
        return false;
    return checkPalindrome(i + 1, str, n - 1);
}

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    cout << "size of string is: " << n << endl;
    // if (checkPalindrome(0, str, n)) - for single pointer
    if (checkPalindrome(0, str, n - 1))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}