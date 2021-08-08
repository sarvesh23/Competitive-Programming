#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
int main()
{
    ll n,sum=0;
    cin>>n;
     for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                sum=sum+i;
            else 
                sum=sum+i+n/i;
        }
    }
    sum = sum-n;
    if(n<=sum)
        cout<<"YES";
    else
        cout<<"NO";
}
