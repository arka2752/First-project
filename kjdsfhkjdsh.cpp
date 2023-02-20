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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int cnt = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (ar[i - 1] < ar[i] && ar[i] > ar[i + 1])
            {
                cnt++;
                cout << "YES" << endl;
                cout << (i - 1 + 1) << " " << (i + 1) << " " << (i + 1 + 1) << endl;
                break;
            }
        }
        if (cnt == 0)
        {
            cout << "NO" << endl;
        }
    }
}
