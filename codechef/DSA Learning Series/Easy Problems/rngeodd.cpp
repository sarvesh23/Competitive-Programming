#include<iostream>
using namespace std;
#define ll  long

int main()
{
    ll l,r,t;
    cin>>l>>r;
    if(l>r)
    {
        t=l;
        l=r;
        r=t;
    }
    if(r-l==1)
    {
        if(l%2==0)
            cout<<r;
        else
            cout<<l;
    }
    else if(r-l==0)
    {
        if(l%2!=0)
            cout<<r;
        
    }
    else
    {
        for(l;l<=r;l++)
        {
            if(l%2!=0)
                cout<<l<<" ";
        }
    }
}