
vector<int> solve(vector<int>& nums) {
    
   int l = nums.size();
    vector<pair<int, int>> a(l);
    for (int i = 0; i < l; i++) {
        bitset<20> b = nums[i];
        a[i] = make_pair(b.count(), nums[i]);
    }
    sort(a.begin(), a.end());
    vector<int> x(l);
    for (int i = 0; i < l; i++) {
        x[i] = a[i].second;
    }
    return x;
}
