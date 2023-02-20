#include <bits/stdc++.h>
using namespace std;
int func(vector<int> b);
int main()
{
    int n;
    cout << "Size : ";
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    func(a);
}
int func(vector<int> b)
{
    for (int j = 0; j < b.size(); j++)
    {
        cout << b[j];
    }
}