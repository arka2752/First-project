// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tst;
    cin >> tst;
    cin.ignore();
    map<string, int> p;
    while (tst--)
    {
        string a;

        getline(cin, a);
        p[a]++;
    }
    int c = 0;
    for (auto i : p)
    {
        // cout << i.first << " " << i.second << endl;
        if (i.second == 1)
        {
            c++;
        }
        else
        {
            c += 1;
        }
    }
    cout << c;
    // cout << c - tst;
    return 0;
}