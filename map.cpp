#include <iostream>
#include <utility>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    pair<string, int> a;
    a.first = "Arka";
    a.second = 95;

    cout << a.first;
    cout << " " << a.second;
    a=make_pair("A",95);
    
    cout << a.first;
    cout << " " << a.second;

}