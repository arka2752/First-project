// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin >> a;
    set<int> b;
    pair<set<int>::iterator, bool> c;
    int e = 1;
    while (a--)
    {
        int d;
        cin >> d;
        c = b.insert(d);
        if (c.second == 0)
        {
            e++;
        }
    }
    cout << e;
    return 0;
}