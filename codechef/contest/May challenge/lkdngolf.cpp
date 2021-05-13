#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,k;
        cin>>n>>x>>k;
        ll rem = (n+1)%k;
        if(x%k==0||x%k==rem)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;    
    }
}