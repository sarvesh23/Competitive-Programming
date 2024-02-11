class Solution {
    public int finalValueAfterOperations(String[] operations) {
            int c1=0,c2=0;
            for(int i=0;i<operations.length;i++)
            {
                if(operations[i].charAt(1)=='+')
                {
                    c1++;
                }
                if(operations[i].charAt(1)=='-')
                {
                    c2++;
                }
            } 
            return c1-c2;
    }
}