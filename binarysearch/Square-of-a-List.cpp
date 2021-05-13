vector<int> solve(vector<int>& nums) {
    vector<int> t;
    for(int i=0;i<nums.size();i++)
    {
        t.push_back(nums[i]*nums[i]);
    }
    sort(t.begin(),t.end());
    return t;
}