int solve(vector<int>& nums) {
    int count=0;
    map<int, int> M; 
    int l =nums.size();
    for (int i = 0; i<l; i++) {
        if (M.find(nums[i]) == M.end()) {
            M[nums[i]] = 1;
        }
        else {
            ++M[nums[i]];
        }
    }
    for (auto& it : M) {
        int n = it.second;
        if(n>1)
            count += (n * n -n)/2;
    }
    return count;
    
}