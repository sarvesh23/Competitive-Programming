#include<iostream>
using namespace std;

#define ll long long
int main()
{
    ll a,b,t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>a>>b;
        if((a+b)%3==0 && 2*a>=b &&2*b>=a)
        {   
                cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}