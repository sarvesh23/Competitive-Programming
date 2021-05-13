bool solve(vector<int>& nums) 
{   if(nums.size()==1)
        return true;
    if(nums[0]<nums[1])
    {
        for(int i=0;i<nums.size()-1;i++)
        {   
            if(nums[i]==nums[i+1])
                return false;
            if(nums[i]>nums[i+1])
            {   
                return false;
            }
        }
        return true;
    }
    else if(nums[0]>nums[1])
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return false;
            if(nums[i]<nums[i+1])
                return false;
        
        }
        return true;
    }   
    else
        return false;
}