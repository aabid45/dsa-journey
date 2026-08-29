#include <bits/stdc++.h>
using namespace std;

// void printName(int i, int number)
// {
//     if (i > number)
//         return;
//     cout << "Aabid ";
//     printName(i + 1, number); // we can't do i++ because the postfix operator i++ evaluates to the current value of i before incrementing it.
// }

// void printOnetoN(int i, int num)
// {

//     if (i>num) return;
//     cout<<i;
//     printOnetoN(i+1, num);
// }

void printNtoOne(int i, int num){
  if (num<i) return;
  cout<<num;
  printNtoOne(i, num-1);
}

int main()
{
    int number;
    cin >> number;
    // printName(1, number);
    // printOnetoN(1, number);
    printNtoOne(1, number);
    return 0;
}