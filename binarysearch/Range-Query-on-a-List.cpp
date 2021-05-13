class RangeSum {
    public:
    vector<int> nums;
    RangeSum(vector<int>& nums) {
       
        int l=nums.size();
        this->nums.push_back(nums[0]);
        for(int i=1;i<l;i++)
        {
            this->nums.push_back(nums[i]+this->nums[i-1]);
            //    cout<<this->nums[i]<<' ';
        }
}
    
    int total(int i, int j) {
        if(i==0)    return this->nums[j-1];
        return this->nums[j-1]-this->nums[i-1];
    }
};