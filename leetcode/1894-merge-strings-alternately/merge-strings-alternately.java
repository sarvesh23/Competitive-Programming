class Solution {
    public String mergeAlternately(String word1, String word2) {
        String merge="";
        int i=0,j=0,l1=word1.length(),l2=word2.length();
        while(i<l1 || j<l2)
        {
            if(i<l1)
            {
                merge+=word1.charAt(i);
                i++;
            }
            if(j<l2)
            {
                 merge+=word2.charAt(j);
                 j++;
                 
            }
        }

        return merge;
    }
}