vector<int> solve(int n) {
    vector<int> prime;
    int t=2;
    
    if(n==0)
        return prime;
    n=n-1;
    while(n--)
    {   int flag=0;
        for(int i=2;i<t;i++)
        {
            if(t%i==0)
            {   flag = 1;
                break;
            }
        }
        if(flag==0)
            prime.push_back(t);
        t++;
    }
    return prime;
    
    
}