#include <bits/stdc++.h>
using namespace std;
// function to check and iterate
bool chk(int n, char grid[3][100]);
int main()
{
    int t, n, cnt;
    char grid[3][100];
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cnt = n * 2;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> grid[j][k];
                if (j == 1 && grid[j][k] == 'X')
                    cnt--;
            }
        }
        cout << "Case " << i << ": ";
        if (cnt % 2 == 0)
            cout << "Jhinuk" << endl;
        else if (chk(n, grid))
            cout << "Grandma" << endl;
        else
            cout << "Jhinuk" << endl;
    }
    return 0;
}

bool chk(int n, char grid[3][100])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (grid[i][j] == 'O' && grid[i][j + 1] == 'O')
                return 1;
        }
    }
    return 0;
}