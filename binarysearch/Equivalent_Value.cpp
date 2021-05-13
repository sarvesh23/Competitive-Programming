bool solve(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    int count=1;
    if(nums.size()==0)
        return false;
    
    for(int i=0;i<=nums.size();i++)
    {
        if(nums[i]==nums[i+1])
        {
            count++;
        }
        else
        {
            if(count==nums[i]&&nums[i]!=0)
            {   
                return true;
            }
            count=1;
        }
    }
    return false;
}