#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
bool my(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int a[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> p;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        p.push_back(make_pair(a[i], i));
    }
    sort(p.begin(), p.end(), my);
    for (int i = 0; i < p.size(); i++)
    {
        a[p[i].second] = i;
    }
    for (int i = 0; i < p.size(); i++)
    {
        cout << a[i] << "\t";
    }
}