#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
void power(ll x, ll y)
{
     
    // Initialize answer
    ll res = 1;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = ((res * x)+1000000007)%1000000007;
             
        // y = y/2
        y = y >> 1;
         
        // Change x to x^2
        x = (x * x);
    }
    cout<<(res+1000000007 )%1000000007<<endl;
}
int main()
{
    ll t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n=n-1;
        if(n==1)
            cout<<"1"<<endl;
        else
            power(n,2);
       // cout<<sum<<endl;
    }
}