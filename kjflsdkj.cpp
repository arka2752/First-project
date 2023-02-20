#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin >> a;
    double fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact = fact * 1LL * i;
    }
    cout << fact;
}