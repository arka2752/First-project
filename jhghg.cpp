// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin >> x;
    int temp = pow(5, x);

    int z = temp % 10;
    temp = temp / 10;
    int z1 = temp % 10;
    z1 = z1 * 10;
    temp = z + z1;
    cout << temp;
}