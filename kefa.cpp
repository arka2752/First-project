// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 || b == 1)
    {
        cout << "Akshat";
    }
    else if (a % 2 != 0 && a == b)
    {
        cout << "Akshat";
    }

    else if (a % 2 == 0 && a == b)
    {
        cout << "Malvika";
    }

    else if (a % 2 == 0 && b % 2 == 0 && ((a > b) || (a < b)))
    {
        cout << "Malvika";
    }

    else if (a % 2 != 0 && b % 2 != 0 && ((a > b) || (a < b)))
    {
        cout << "Akshat";
    }

    else if (a % 2 != 0 && b % 2 == 0 && ((a > b) || (a < b)))
    {
        cout << "Malvika";
    }

    else if (a % 2 == 0 && b % 2 != 0 && ((a > b) || (a < b)))
    {
        cout << "Malvika";
    }
}