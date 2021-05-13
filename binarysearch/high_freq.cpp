int solve(vector<int>& nums) {
    vector<pair<int,int>> vect;
    int len[] = {0,0,0,0,0,0,0,0,0,0,0};
    if(nums.size()==0)
        return 0;
    if(nums.size()==1)
        return 1;
    for(int i=0;i<nums.size();i++)
    {
        ++len[nums[i]];
    } 
    int max = 0;
    for (int i=0; i<=10; i++)
    {
        if(max<len[i])
            max=len[i];  
    }
        return max;
    
}