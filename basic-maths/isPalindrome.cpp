#include<bits/stdc++.h>
using namespace std;

void isPalindrome(int number) {
    int reversenumber = 0;
    int tempnumber = number;// because we are doing operations with the actual number

    while (number>0)
    {
       int lastDigit = number%10;
       number /= 10;
       reversenumber = (reversenumber*10)+lastDigit;
    }

    // cout<<reversenumber;
    // checking if the reverse number is equal to the actual input number
    if(reversenumber == tempnumber) cout << "true";
    else  
      cout<< "false";
    
}

int main() {
    int number;
    cin >> number;

    isPalindrome(number);
    return 0;
}