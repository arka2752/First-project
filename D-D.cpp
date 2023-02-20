// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tst;
    cin >> tst;
    set<string> b;
    pair<set<string>::iterator, bool> c;
    int e = 0;
    while (tst--)
    {
        string a;
        cin >> a;
        c = b.insert(a);
        if (c.second == 0)
        {
            e++;
            cout << a << e << "\n";
            e = 0;
        }
        else
        {
            cout << "OK\n";
        }
    }
    return 0;
}