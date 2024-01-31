class Solution {
    public String mergeAlternately(String word1, String word2) {
        String merge="";
        int i=0,j=0,k=0;
        while(i<word1.length() && j<word2.length())
        {
            if(k%2==0)
            {
                merge+=word1.charAt(i);
                i++;
                k++;
            }
            else
            {
                 merge+=word2.charAt(j);
                 j++;
                 k++;
            }
        }
        for(;i<word1.length();i++)
             merge+=word1.charAt(i);
        for(;j<word2.length();j++)
             merge+=word2.charAt(j);
        return merge;
    }
}