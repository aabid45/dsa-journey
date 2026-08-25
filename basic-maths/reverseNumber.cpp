#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int number) {
    int reversenumber = 0;
    while (number>0)
    {
        int lastDigit = number%10;
        number /= 10;
        reversenumber = (reversenumber*10)+lastDigit;
    }
    cout<<reversenumber;
    return reversenumber;
    
}

int main() {
    int number;
    cin>>number;
    reverseNumber(number);

    return 0;
}