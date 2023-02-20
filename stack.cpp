#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> p;
    p.push(5);
    p.push(15);
    p.push(12);
    p.push(10);
    p.push(7);
    cout << p.top() << endl;
    while (!p.empty())
    {
        int a;
        a = p.top();
        cout << a << endl;
        p.pop();
    }
}