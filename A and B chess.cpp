

// This is Arka's code....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, a, d;
    cin >> c;
    cin >> a;
    cin >> d;

    int sum = 0;

    int cnt = 0;
    int i = 1;

    while (sum <= d)
    {
        sum = sum + a;
        if (sum % c == 0 && sum <= d)
        {
            cnt++;
        }
        i++;
    }

    cout << cnt;
}
