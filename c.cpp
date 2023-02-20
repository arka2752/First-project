// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin >> a;
    while (a--)
    {
        int b, c;
        cin >> b;
        cin >> c;
        int d[c];
        for (int i = 0; i < c; i++)
        {
            cin >> d[i];
        }
        int e = 1;
        for (int i = 0; i < c; i++)
        {
            if (d[i] == d[i + 1])
            {
                e++;
            }
            else
            {
                i++;
            }
        }
        cout << e;
        return 0;
    }
}