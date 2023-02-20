// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tst;
    cin >> tst;
    map<string, int> p;

    while (tst--)
    {

        string a;
        cin >> a;
        p[a]++;

        if (p[a] == 1)
        {
            cout << "OK\n";
        }
        else
        {
            cout << a << p[a] - 1 << endl;
        }
    }
   
}
