#include <bits/stdc++.h>
using namespace std;

void printDivisors(int num)
{
    vector<int> ls;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ls.push_back(i);
            if (num / i != i)
            {
                ls.push_back(num / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
        cout << it << " ";
}

int main()
{
    int num;
    cin >> num;
    // for (int i = 2; i <= num / 2; i++)
    // {
    //     if (num % i==0)
    //         cout << " " << i;
    // }
    printDivisors(num);
    return 0;
}