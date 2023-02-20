// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int Pow = 0, Ti = 0, Sp = 0, So = 0, Re = 0, Min = 0;
    cout << 6 - t << endl;

    while (t--)
    {
        string b;
        cin >> b;
        if (b == "red")
        {
            Re++;
        }
        else if (b == "purple")
        {
            Pow++;
        }
        else if (b == "green")
        {
            Ti++;
        }
        else if (b == "orange")
        {
            So++;
        }
        else if (b == "blue")
        {
            Sp++;
        }
        else if (b == "yellow")
        {
            Min++;
        }
    }
    if (Pow == 0)
    {
        cout << "Power\n";
    }
    if (Ti == 0)
    {
        cout << "Time\n";
    }
    if (Sp == 0)
    {
        cout << "Space\n";
    }
    if (So == 0)
    {
        cout << "Soul\n";
    }
    if (Re == 0)
    {
        cout << "Reality\n";
    }
    if (Min == 0)
    {
        cout << "Mind\n";
    }
}