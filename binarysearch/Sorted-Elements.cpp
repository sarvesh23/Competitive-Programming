int solve(vector<int>& nums) {
    vector<int> t=nums;
    int count=0;
    sort(t.begin(),t.end());
    for(int i =0 ;i<t.size();i++)
    {
        if(t[i]==nums[i])
            count++;
    }
    return count;
}