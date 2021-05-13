int solve(int n) {
    bitset<32> t(n);
    int count = 0,max=0;
    for(int i=0;i<31;i++)
    {   
        dicount++;
        if(t[i]!=t[i+1] && t[i]==1)
        {   
            if(count>max)
                max = count;
                count = 0;
        }
        if(t[i]==0)
            count = 0;
    }
    return max;
}