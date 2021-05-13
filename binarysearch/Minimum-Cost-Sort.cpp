int solve(vector<int>& nums) {
    vector<int> asc=nums,des=nums;
    int diffa=0,diffb=0;
    sort(asc.begin(),asc.end());
    sort(des.begin(),des.end());
    reverse(des.begin(),des.end());

    for(int i=0;i<nums.size();i++)
    {
        if(des[i]>nums[i])
            diffa = diffa + des[i] - nums[i];
        else
            diffa = diffa - des[i] + nums[i];
        if(asc[i]>nums[i])
            diffb = diffb + asc[i] - nums[i];
        else
            diffb = diffb - asc[i] + nums[i];
    }
    if(diffa>diffb)
        return diffb;
    else
        return diffa;
}