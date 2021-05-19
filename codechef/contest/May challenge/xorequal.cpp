#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
int power(ll x, unsigned int y,int p)
{
     
    // Initialize answer
    ll res = 1;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x)%p;
        // y = y/2
        y = y >> 1;
        x = (x*x) % p; 
    }
    return res;
}
int main()
{
    ll t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    cin>>t;
    while(t--)
    {
        unsigned int n;
        ll x= 2;
        int p = 1000000007 ;
        cin>>n;
        unsigned int result;
        result = power(2,n-1,p);
        cout<<result<<endl;
    }
}