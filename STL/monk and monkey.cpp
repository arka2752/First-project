// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tst;
    cin >> tst;
    while (tst--)
    {
        int bags_num, time_left;
        cin >> bags_num >> time_left;
        long long consumed_candy = 0;

        multiset<long long> bag;
        for (int i = 0; i < bags_num; i++)
        {
            long long indiv_bag;
            cin >> indiv_bag;
            bag.insert(indiv_bag);
        }
        for (int i = 0; i < time_left; i++)
        {
            auto itr = (--bag.end());
            long long indiv_bag = *itr;
            consumed_candy += indiv_bag;
            bag.erase(*itr);
            bag.insert(indiv_bag / 2);
        }
        cout << consumed_candy << endl;
    }
    return 0;
}