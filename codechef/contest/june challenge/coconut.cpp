#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll x,y,xa,ya;
        cin>>x>>y>>xa>>ya;
        ll sum;
        sum = xa/x + ya/y;
        cout<<sum<<endl;
    }
}
