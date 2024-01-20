#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    unordered_map<int, int> map;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
        map[arr[i]]++;
    }
    int high = 0, low = 0;
    for (auto x : map)
    {
        if (high < x.second)
            high = x.second;
        }
    low = high;
    for (auto x : map)
    {

        if (low > x.second)
            low = x.second;
    }
    for (auto x : map)
    {
        if (high == x.second)
        {
            cout << x.first;
            break;
        }
    }

    for (auto x : map)
    {
        if (low == x.second)
        {
            cout << x.first;
            break;
        }
    }
    // cout<<high<<low;
}