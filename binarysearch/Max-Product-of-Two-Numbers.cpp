int solve(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    int len = nums.size();
    int s1 = nums[0],s2=nums[1];
    int l1=nums[len-2],l2=nums[len-1];
    if(l1*l2>s1*s2)
        return l1*l2;
    return s1*s2;
}