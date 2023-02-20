// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    map<string, string> name;

    while (x--)
    {
        string a, b;
        cin >> a >> b;
        name[b] = a;
    }
    while (y--)
    {
        string a, b;
        cin >> a >> b;
        string x = b;
        x.pop_back();

        cout << a + " " + b + " "
             << "#" << name[x] << endl;
    }
}