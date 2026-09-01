#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();

    // int hash[26] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[str[i] - 'a']++;
    // }
    map<char, int> mppp;
    for (int i = 0; i < n; i++)
    {
       mppp[str[i]]++;
    }
    

    int queries;
    cin >> queries;
    while (queries--)
    {
        char character;
        cin >> character;
        cout << mppp[character];
    }
    return 0;
}