// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int target;
    cin >> target;
    int result[2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = arr[0], end = arr[n - 1];
    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == target)
        {
            result[0] = start + 1;
            result[1] = end + 1;
            break;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout << result[0] << " " << result[1];
}