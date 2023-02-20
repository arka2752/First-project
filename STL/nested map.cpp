// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<pair<string, string>, vector<int>> m;
    int n;
    cout << "Enter Students Number = ";
    cin >> n; // Number of students

    while (n--)
    {
        int j = 1;

        string a, b; // a=first name & b=last name
        cout << "Enter First Name of no." << j << " Student = ";
        cin >> a;
        cout << "Enter Last Name of no." << j << " Student = ";
        cin >> b;
        int x;
        cout << "No. subjects = ";
        cin >> x; // for subjects marks
        for (int i = 1; i <= x; i++)
        {
            int y; // individual subjects marks
            cout << "Subject" << i << " = ";
            cin >> y;

            m[{a, b}].push_back(y);
        }
        j++;
    }
    for (auto value : m)
    {
        auto &full_name = value.first;
        auto &list = value.second;
        cout << "Name = " << full_name.first << " " << full_name.second << endl;
        for (auto v : list)
        {
            cout << "Marks = " << v << " " << endl;
        }
    }
    /*
    pair<int, int> p1, p2;
    p1 = {1, 2};
    p2 = {2, 3};
    cout << (p1 > p2);  //comparing
    */
}