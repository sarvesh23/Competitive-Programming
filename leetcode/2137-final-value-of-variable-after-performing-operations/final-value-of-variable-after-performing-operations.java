class Solution {
    public int finalValueAfterOperations(String[] operations) {
            int c1=0,c2=0;
            for(int i=0;i<operations.length;i++)
            {
                if(operations[i].equals("X++") || operations[i].equals("++X"))
                {
                    c1++;
                }
                if(operations[i].equals("X--") || operations[i].equals("--X"))
                {
                    c2++;
                }
            } 
            return c1-c2;
    }
}