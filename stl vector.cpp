#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// sorting descending way by user function

// bool sort1(int a, int b)
// {
//     return a > b;
// }
int main()
{
    vector<int> a;
    vector<int>::iterator b;
    int e;
    for (int i = 0; i < 5; i++)
    {
        cin >> e;
        a.push_back(e);
    }

    // printing vector by iteration

    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << "\t";
    }
    cout << endl;

    // sorting in ascending order by sort function

    // sort(a.begin(), a.end());

    // for (b = a.begin(); b != a.end(); b++)
    // {
    //     cout << *b << "\t";
    // }
    // cout << endl;

    // sorting in descending order by sort function

    // sort(a.rbegin(), a.rend());

    // for (b = a.begin(); b != a.end(); b++)
    // {
    //     cout << *b << "\t";
    // }

    // sort(a.begin(), a.end(), sort1);
    // for (b = a.begin(); b != a.end(); b++)
    // {
    //     cout << *b << "\t";
    // }

    sort(a.begin(), a.begin() + 2);

    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << "\t";
    }
    cout << endl;
    sort(a.begin(), a.begin() + 4);

    for (b = a.begin(); b != a.end(); b++)
    {
        cout << *b << "\t";
    }
    a.re
}