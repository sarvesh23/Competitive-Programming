bool solve(int n) 
{
    if(n==0)
        return false;
    else if(n==1)
        return true;
    else 
    {
        while(n%2==0)
    {
        n=n/2;
    }
    if(n==1)
    {
        return true;
    }
    else
        return false;
    }
}