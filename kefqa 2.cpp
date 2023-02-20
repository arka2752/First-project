// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    int a[len];

    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    int c = 1;
    int temp = 0;
    for (int i = 0; i < len - 1; i++)
    {
        int j = i + 1;
        if (a[i] <= a[j])
        {
            c++;
        }
        else
        {

            if (temp <= c)
            {
                temp = c;
                c = 1;
            }
            else
            {
                temp = c;
            }
        }
    }
    if (temp <= c)
    {
        temp = c;
    }
    cout << temp;
}