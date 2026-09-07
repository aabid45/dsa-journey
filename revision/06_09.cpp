#include <bits/stdc++.h>
using namespace std;

// count digit
// void countDigit(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         count++;
//         n /= 10;
//     }
//     cout << count;
// }

// Reverse number and check if number is palindrome
// void reverseNumber(int n)
// {
//     int rev = 0;
//     int originalNumber = n;
//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         rev = (rev * 10) + lastDigit;
//         n /= 10;
//     }
//     cout << rev;
//     if (originalNumber == rev)
//     {
//         cout << "Palindrome";
//     }
//     else
//     {
//         cout << "Not Palindrome";
//     }
// }

// Armstrong check
// int power(int base, int exp)
// {
//     int res = 1;
//     while (exp--)
//     {
//         res *= base;
//     }
//     return res;
// }

// void isArmstrong(int n)
// {
//     int sum = 0;
//     int originalnumber = n;
//     int count = 0;
//     int temp = n;

//     while (temp > 0)
//     {
//         count++;
//         temp /= 10;
//     }

//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         sum += power(lastDigit, count);
//         n = n / 10;
//     }

//     if (sum == originalnumber)
//     {
//         cout << "Armstrong";
//     }
//     else
//     {
//         cout << "Not Armstrong";
//     }
// }

// print all divisors
// void printAllDivisors(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

// Isprime Check
// bool IsPrime(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// GCD && HCF
// void GcdHcf(int a, int b)
// {
//     // for (int i = min(a, b); i > 0; i++)
//     // {
//     //     if (a % i == 0 && b % i == 0)
//     //         cout << i << " is the gcd";
//     //     break;
//     // }
//     while (a > 0 && b > 0)
//     {
//         if (a > b)
//             a = a % b;
//         else
//             b = b % a;
//     }
//     if (a == 0)
//         cout << b << " is gcd";
//     else
//         cout << a << " is the gcd";
// }
// void printNumber(int i, int n)
// {
//     if (i > n)
//         return;
//     printNumber(i + 1, n);
//     cout << i;
// }
// void fiboncci(int n)
// {
//     // if(n<=1) return n;
//     // return fiboncci(n-2)+fiboncci(n-1);
//     int num1 = 0;
//     int num2 = 1;
//     int curr = 0;

//     for (int i = 2; i <= n; i++)
//     {
//         curr = num1 + num2;
//         num1 = num2;
//         num2 = curr;
//     }
//     cout << curr;
// }
// int factorial(int n, int fact)
// {
//     if (n < 1)
//         return fact;
//     return factorial(n - 1, n * fact);
// }

// void reverseArray(int s, int e, int arr[])
// {
//     if(s>=e) return;
//     swap(arr[s], arr[e]);
//     reverseArray(s+1, e-1, arr);
// }

// void reverseString(int i, int n, string &str)
// {
//     if (i >= n / 2)
//     {
//         cout << str;
//         return;
//     }
//     swap(str[i], str[n - i - 1]);
//     reverseString(i + 1, n, str);
// }

// bool isStringPalindrome(int s, int e, string &str)
// {
//     if (s >= e)
//         return true;
//     if (str[s] != str[e])
//     {
//         return false;
//     }
//     isStringPalindrome(s + 1, e - 1, str);
// }

// bool isPalindrome(int i, int n, string &str)
// {
//     while (i <= n / 2)
//     {
//         if (str[i] != str[n - i - 1])
//         {
//             return false;
//         }
//         i++;
//     }
//     return true;
// }
int main()
{
    // int n;
    // cin >> n;
    // countDigit(n);
    // reverseNumber(n);
    // isArmstrong(n);
    // printAllDivisors(n);
    // if (IsPrime(n))
    //     cout << "Prime";
    // else
    //     cout << "Not Prime";

    // int a, b;
    // cin >> a >> b;
    // GcdHcf(a, b);
    // printNumber(1, n);
    // fiboncci(n);
    // cout << factorial(n, 1);
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
    // string str;
    // cin >> str;
    // size_t n = str.size();
    // reverseString(0, n, str);
    // if (isStringPalindrome(0, n - 1, str))
    //     cout << "String is Palindrome";
    // else
    //     cout << "String is not Palindrome";
    // if (isPalindrome(0, n, str))
    //     cout << "Palindrome";
    // else
    //     cout << "NOT Palindrome";

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // precomputations
    // int hash[12] = {0};
    // map<int, int> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     mpp[arr[i]]++;
    // }

    // string str;
    // cin >> str;
    // int n = str.length();
    // // int hash[26] = {0};
    // map<char, int> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     mpp[str[i]]++;
    // }

    // // fetch
    // int quries;
    // cin >> quries;
    // while (quries--)
    // {
    //     // int n;
    //     // cin >> n;
    //     char c;
    //     cin >> c;
    //     cout << mpp[c];
    // }

    return 0;
}