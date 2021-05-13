bool solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int l = nums.size();
    /*if(nums[l-2]==0 && nums[l-1]==1)
        return true;
    if(nums[l-2]==0 && nums[l-1]==0)
        return false;*/
    if(nums[l-1]>nums[l-2]*2)
        return true;
    else
        return false;
}
