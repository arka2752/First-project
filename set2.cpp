#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(7);
    a.push_back(9);

    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
    }
}