#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll n,t=0;
    cin>>n;
    for(int i=5 ;i<=n;i*=5 )
        t+=n/i;
    cout<<t;
}