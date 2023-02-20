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
        int n;
        cin >> n;
        int k;
        cin >> k;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int t1 = 1;
        int cn = 0;
        // t1 += (ar[0] - 1);

        // t2 = t1 + 1 + ((ar[0] - 1));
        // cout << t1 << " " << t2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cn = t1;
                cn += (ar[i] - 1);
                t1 = cn;
                cn++;
            }
        }
        cout << cn;
    }
}