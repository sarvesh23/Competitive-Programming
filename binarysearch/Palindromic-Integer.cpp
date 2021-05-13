bool solve(int num) {
    int t=0,s=num;
    while(s!=0)
    {
        int rem=s%10;
        t=t*10+rem;
        s=s/10;
    }
    
    if(num==t)
        return true;
    else
        return false;

}