#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> s;
    map<int, int> t;
    for (int i = 0; i < arr.size(); i++)
    {
        t[arr[i]]++;
    }
    for (auto it : t)
    {
        if (it.second > arr.size() / 3)
        {
            s.push_back(it.first);
        }
    }
    return s;
}