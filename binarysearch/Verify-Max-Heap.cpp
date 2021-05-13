bool solve(vector<int>& nums) {
    for(int i=0;i<nums.size()/2;i++)
    {   
        if(nums[i]<nums[2*i+1]&&2*i+1<nums.size())
            return false;
        if(nums[i] < nums[2*i + 2]&&2*i+2<nums.size())
            return false;
    }
    return true;
}