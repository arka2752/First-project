// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

     int tst, a;
     cin >> tst;
     cin >> a;
     int b[100000];
     for (int i = 0; i < tst; i++)
     {
          cin >> b[i];
     }
     sort(b, b + tst);
     int s = 0;
     for (int i = tst - 1; i >= tst - a; i--)
     {
          s += b[i];
     }
     cout << s;
     return 0;
}