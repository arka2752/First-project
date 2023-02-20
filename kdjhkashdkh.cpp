#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> lis, lds;
        for (int i = 0; i < n; i++) {
            auto it = lower_bound(lis.begin(), lis.end(), p[i]);
            if (it == lis.end()) {
                lis.push_back(p[i]);
            } else {
                *it = p[i];
            }

            it = lower_bound(lds.begin(), lds.end(), -p[i]);
            if (it == lds.end()) {
                lds.push_back(-p[i]);
            } else {
                *it = -p[i];
            }
        }

        int ans = max((int)lis.size(), (int)lds.size());
        cout << n - ans << endl;
    }

    return 0;
}
