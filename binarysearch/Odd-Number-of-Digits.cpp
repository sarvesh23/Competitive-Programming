int solve(vector<int>& nums) 
{
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        int co=0,t=nums[i];
        while(t!=0)
        {
            t=t/10;
            co++;
        }
    if(co%2!=0)
        count++;
    }    
    return count;
}