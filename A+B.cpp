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
        int p;
        cin >> p;

        int q = p + p;

        for (int i = 2; i < q; i++)
        {
            if (q % i == 0)
            {
                cout << p << endl;
                break;
            }
        }
    }
}