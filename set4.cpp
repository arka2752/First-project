#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> a;
    a.insert(5);
    a.insert(7);

    a.insert(2);

    a.insert(15);
    a.insert(8);

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i = a.rbegin(); i != a.rend(); i++)
    {
        cout << *i << " ";
    }
}