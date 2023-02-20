// This is Arka's Code.....
#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
#include <list>

#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> a;
    list<int>::iterator b;
    vector<int> c;
    vector<int>::iterator d;
    a.push_back(1);
    a.push_back(10);

    a.push_back(15);

    a.push_back(7);

    a.push_back(16);

    a.push_back(12);

    a.push_front(12);

    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << "\t";
    }
    b = a.begin();
    b++;
    a.insert(b, 9);
    cout << endl;
    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << "\t";
    }

    return 0;
}