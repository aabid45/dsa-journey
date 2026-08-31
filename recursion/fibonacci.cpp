#include <bits/stdc++.h>
using namespace std;

// ------using recursion
// int nthFibonacci(int n)
// {
//     if (n <= 1)
//         return n;
//     return nthFibonacci(n - 1) + nthFibonacci(n - 2);
// }
// void nthFibonacci(int n) {
//     if(n<= 1) cout <<n;
//     int num2 = 0;  // represents (n-2)
//     int num1 = 1;  // represents (n-1)
//     int current = 0;

//     for (int i = 2; i<=n; i++){
//         current =  num2+num1;
//         num2 = num1;
//         num1 = current;
//     }
//     cout <<current;
// }

void nthFibonacci(int n){
    int num1 = 0;
    int num2 = 1;
    int current = 0;

    for(int i = 2; i<=n; i++){
        current = num1+num2;
        cout <<current<<" ";
        num1 = num2;
        num2 = current;
    }
    

}


int main()
{
    int n;
    cin >> n;
    // cout << nthFibonacci(n);
    nthFibonacci(n);
    return 0;
}