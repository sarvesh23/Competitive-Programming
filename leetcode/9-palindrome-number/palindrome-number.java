class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        else
        {
            int j=x,rev=0;
            while(j!=0)
            {
                rev=rev*10+j%10;
                j=j/10;
            }
            
            if(rev==x)
            {   
                return true;
            }
            else
                return false;

        }
    }
}