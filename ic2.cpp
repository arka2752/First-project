// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    long long t[n];
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> k;
        int a[n];
        long long sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        cout << "Case " << i << ": ";
        if (k <= n)
            cout << (k - 1) * sum + k * n << endl;
        else
            cout << (k - 1) * sum + n * n << endl;
    }
    return 0;
}