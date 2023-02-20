// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ar;
        cin >> ar;

        int temp1 = 0, temp2 = 0;
        for (int i = 0; i < 3; i++)
        {
            temp1 += ar[i];
        }
        for (int i = 3; i < 6; i++)
        {
            temp2 += ar[i];
        }
        if (temp1 == temp2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}