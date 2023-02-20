#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    set<int> a;   // declaring set
    a.insert(10); // input some
    a.insert(3);
    a.insert(7);
    a.insert(2);
    set<int>::iterator b; // iterator
    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << endl;
    }
    b = a.find(10);
    cout << *b << endl;
    a.erase(b);
    a.erase(a.find(7));
    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << endl;
    }
    set<string> ew;
    ew.insert("Arka");
    ew.insert("P");
    ew.insert("K");
    pair<set<string>::iterator, bool> f;

    f = ew.insert("L");
    if (f.second == 0)
    {
        cout << "Cant";
    }
    else
    {
        cout << "YES";
    }
}