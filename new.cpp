#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    vector<int> c;
    int d;
    for (int i = 1; i <= a; i++)
    {
        cin >> d;
        c.push_back(d);
    }
    int e = 0;
    for (int i = 1; i <= b; i++)
    {
        int x, y;
        cin >> x;
        cin >> y;
        if (c[x - 1] < c[y - 1])
        {
            e += c[x - 1];
        }
        else
        {
            e += c[y - 1];
        }
    }
    cout << e;
}