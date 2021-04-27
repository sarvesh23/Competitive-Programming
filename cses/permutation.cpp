#include<iostream>
using namespace std;
#define l1 long long 
int main()
{   l1 n,i;
    cin>>n;
    if(n==1)cout<<n;
    else if(n==2||n==3)cout<<"NO SOLUTION";
    else 
    {
        if(n%2==0)
        {
            for(i=2;i<=n;i+=2)cout<<i<<" ";
            for(i=1;i<n;i=i+2)cout<<i<<" ";
        }
        else
        {
            for(i=2;i<=n-1;i+=2)cout<<i<<" ";
            for(i=1;i<n;i=i+2)cout<<i<<" ";
            cout<<n;
        }
    }
}