#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p[3]; // pairs declaration (pair as array)

    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        p[i] = make_pair(x, y); // taking input
    }
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << " " << p[i].second << endl; // printing 
    }
}