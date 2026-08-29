#include <bits/stdc++.h>
using namespace std;

// void printOnetoN(int n)
// {
//     if (n < 1)
//         return;
//     printOnetoN(n - 1);
//     cout << n;
// }
void printNtoOne(int i, int n){
    if(i>n) return;
    printNtoOne(i+1, n);
    cout <<i;
}

int main()
{
    int n = 5;
    // printOnetoN(n);
    printNtoOne(1, n);
    return 0;
}