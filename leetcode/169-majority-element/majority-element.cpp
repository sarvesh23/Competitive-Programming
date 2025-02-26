class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count,val=nums[0];
        for(int i=0;i<nums.size();i++)
        {   count=0;
            val=nums[i];
            for(int j=i;j<nums.size();j++)
            {
                if(val==nums[j])
                {
                    count++;
                    
                }
                if(count>nums.size()/2)
                {        return val;
                         break;
                }
            }
        }
        return val;
    }
};