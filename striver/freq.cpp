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
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}