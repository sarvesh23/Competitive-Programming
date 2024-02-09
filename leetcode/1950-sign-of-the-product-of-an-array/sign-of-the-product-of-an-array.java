import java.util.*;
class Solution {
    public int arraySign(int[] nums) {
        long n=0,z=0;
        for(int i=0;i<nums.length;i++)
        {   if(nums[i]<0)
            {
                n++;
            }
            if(nums[i]==0)
                return 0;
        }
        if(n%2==0)
            return 1;
        else
            return -1;
       
    }
}