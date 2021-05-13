int solve(int n) {
    int sum=0;
    while(n!=0||sum>10)
    {
        sum = sum + n%10;
        n=n/10;
       //cout<<sum<<" ";
        if(n==0&&sum>=10)
        {  // cout<<sum;
            n = sum;
            sum= 0;
            //continue;
            if(sum==n)
                return sum;
        }
        
    }
    return sum;
}