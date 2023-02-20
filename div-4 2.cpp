// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tst;
    cin >> tst;
    while (tst--)
    {
        int a;
        cin >> a;
        string b;
        cin >> b;
        int U = 0, R = 0, cnt = 0;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == 'U')
            {
                U++;
                if (U == 1 && R == 1)
                {
                    cnt++;
                }
            }
            else if (b[i] == 'D')
            {
                U--;
                if (U == 1 && R == 1)
                {
                    cnt++;
                }
            }

            else if (b[i] == 'R')
            {
                R++;
                if (U == 1 && R == 1)
                {
                    cnt++;
                }
            }
            else if (b[i] == 'L')
            {
                R--;
                if (U == 1 && R == 1)
                {
                    cnt++;
                }
            }
        }
        if (cnt > 0)
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