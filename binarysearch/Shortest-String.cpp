int solve(string s) {
    int count0=0,count1=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            count0++;
        else
            count1++;
    }
    
    return abs(count1-count0);
   
}