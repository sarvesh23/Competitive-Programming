int findDuplicate(vector<int> &arr, int n)
{ // Write your code here.
    map<int, int> hashing;
    for (int i = 0; i < n; i++)
        hashing[arr[i]]++;
    int max = INT_MIN;
    for (auto it : hashing)
        if (max < it.second)
            max = it.first;
    return max;
}