int solve(int n) 
{
    for(int i=1;i<n;i++)
    {
        if(i*i>n)
            return i-1;
        else if(i*i==n)
            return i;
    }   
    return 0; 
}