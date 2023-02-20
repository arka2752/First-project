// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> a;
        int s;
        cin >> s;
        string ab;
        cin >> ab;
        int f = 0;

        for (int i = 0; i < s; i++)
        {
            a[ab[i]]++;
        }
        for (auto b : a)
        {

            if (b.second > 1)
            {
                cout << s - b.second << endl;
                f++;
                break;
            }
        }
        if (f == 0)
        {
            cout << -1 << endl;
        }
    }
}