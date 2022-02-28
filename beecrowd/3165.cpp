#include<iostream>
using namespace std;
int isprime(int n)
{
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            return 0;
        }
        i++;
    }
    if(i==n)
    {
        return 1;
    }
    else
    return 0;

}
int main()
{
    int n;
    cin>>n;
    int t1=n,t2=n-2;
    while(t2!=2)
    {
        if(isprime(t1)==1 && isprime(t2)==1)
        {
            cout<<t2<<" "<<t1<<endl;
            return 0;
        }
        t1--;
        t2--;
    }

}