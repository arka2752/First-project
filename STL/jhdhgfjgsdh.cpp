// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    string a;
    cin >> a;
    string b = a;
    int cnt = 0;
    for (int i = 0; i < t - 1; i++)
    {
        cin >> a;
        b = b + a;
        cout << "Bug= " << b << endl;
        string rev;
        for (int i = a.size() - 1; i > 0; i--)
        {
            rev.push_back(a[i]);
        }
        if (rev == b)
        {
            cnt++;
        }
        b = a;
    }
    cout << cnt;
}
