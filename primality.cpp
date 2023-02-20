// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int p = 0;

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            p++;
            break;
        }
    }
    if (p == 1)
    {
        cout << "Not Prime";
    }
    else
        cout << "Prime";
}