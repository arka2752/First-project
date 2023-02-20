// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Given a number N, print its factorial.Constrains 1<=N<=100. Print answer module M where M=47/M=10^9+7

    int a;
    cin >> a;
    int M = 47;
    long long fact = 1;
    for (int i = 2; i < a; i++)
    {
        fact = (fact * i) % M;
    }
    cout << fact;
}