#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    ll n,f;
    cin>>n;
    cout<<"1 2 3 4 5"<<endl;
    for(ll i=2;i<=n;i++)
    {   if(i%2==0)
        {   f = 10 * i/2;
            for(ll j=0;j<5;j++)
            {
                cout<<f<<" ";
                f--;
            }
        }
        else
        {   f = (10 * i/2) - 4;
            for(ll j=0;j<5;j++)
            {
                cout<<f<<" ";
                f++;
            }
        }
        cout<<endl;
    }
}