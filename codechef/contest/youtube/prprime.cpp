#include<iostream>
using namespace std;
#define ll long long
ll isprime(ll n)
{
    if (n <= 1)
    {   
        return 0;
    }
    if (n <= 3)
    {    
        return n;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {   
        return 0;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {    
            return 0;
        }
    }
    return n;
}
int main()
{
    ll n,t=2;
    cin>>n;
    for(ll i=1;i<=n;)
    {   //cout<<"a";
        if(t==isprime(t))
        {    cout<<t<<" ";
             t++;
             i++;
        }
        else    
            t++;
    }
}
