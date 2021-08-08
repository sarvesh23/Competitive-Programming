#include<iostream>
using namespace std;
#define ll long
int main()
{
    ll n;
    cin>>n;
    ll t=n;
    ll rev=0;
    while(t!=0)
    {
        rev = rev*10 + t%10;
        t=t/10;
    }
    if(rev==n)
        cout<<"YES";
    else
        cout<<"NO";
}