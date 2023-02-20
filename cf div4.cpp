// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tst;
    cin >> tst;
    string ab = "codeforces";
    while (tst--)
    {
        char a;
        cin >> a;
        int c = 0;
        for (int i = 0; i < ab.size(); i++)
        {
            if (a == ab[i])
            {
                c++;
            }
                }
        if (c > 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}