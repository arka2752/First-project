#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    list<int> a;
    list<int>::iterator b;

    a.push_back(5);
    a.push_back(7);
    a.push_back(10);
    a.push_back(15);
    a.push_front(3);
    a.push_front(58);

    a.push_front(52);

    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << "\t";
    }
    cout << "\n";
    int p[4] = {5, 7, 9, 10};
    list<int> c(p, p + 4);
    for (b = c.begin(); b != c.end(); b++)
    {
        cout << *b << "\t";
    }
    b = find(a.begin(), a.end(), 10);
    a.insert(b, 5);
    cout << "\n";

    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << "\t";
    }
    cout << "\n";
}