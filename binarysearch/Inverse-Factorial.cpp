int solve(int a) {
    int count = 0,i=1;
    if(a==0||a==1)
        return 1;
    while(a%i==0)
    {
        a=a/i;
        i++;
        count++;
        //cout<<a;
    }
    if(a!=1)
        count = -1;
    return count;
}