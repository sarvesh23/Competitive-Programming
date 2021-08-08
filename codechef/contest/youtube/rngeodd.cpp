#include<iostream>
using namespace std;
#define ll long
int main()
{
    ll l,r;
    cin>>l>>r;
    for(ll i=l;i<=r;i++)
    {
        if(i%2!=0)
            cout<<i<<" ";
    }
}