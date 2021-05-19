#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int power(ll x, unsigned int y)
{
     
    // Initialize answer
    ll res = 1;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
        // y = y/2
        y = y >> 1;
        x = (x*x); 
    }
    return res;
}
int main()
{
    ll t;
    cin>>t;
    unordered_map <int,ll> val;
    unordered_map <int,ll> pow;
    while(t--)
    {   ll k;
        cin>>k;
        ll sum = 0;
        if (val.find(k) == val.end())
        {
        for(ll i=1;i<(2*k+1);i++)
        {   ll f,s ;
            if(pow.find(i) == pow.end())
            {
                f = power(i,2)+ k;
                pow[i] = f-k;
            }
            else
            {
                f = pow[i]+k;
            }
            if(pow.find(i+1) == pow.end())
            {
                s = power(i+1,2) + k;
                pow[i+1] = s-k;
            }
            else
            {
                s = pow[i+1]+k;
            }  
            //cout<<"F "<<f<<" S "<<s<<endl;
            sum = sum + gcd(f,s); 
            val[k] = sum;
        }
        }
        else
        {
            sum = val[k];
        }
        cout<<sum<<endl;
    }
}