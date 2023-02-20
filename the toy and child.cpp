// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> c;
    for (int i = 0; i < a; i++)
    {
        int e;
        cin >> e;
        c.push_back(e);
    }
    int g = 0;
    for (int i = 0; i < b; i++)
    {
        int d, f;
        cin >> d;
        cin >> f;
        if (d < f)
        {
            g = g + c[d];
        }
        else
        {
            g = g + c[f];
        }
    }
    cout << g;
}