#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll D,d,p,q;
        cin>>D>>d>>p>>q;
        ll qu=(ll)D/d + 1;
        ll sum =  p + qu * (qu+1) / 2 * q;
        cout<<sum<<endl;
    }
}