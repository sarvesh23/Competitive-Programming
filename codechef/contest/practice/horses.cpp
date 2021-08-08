#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr;
        ll a,diff;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        if(arr[0]>arr[1])
        diff = arr[0] - arr[1];
        else
        diff = arr[1]- arr[0];
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    if(diff>arr[i]-arr[j])
                    diff = arr[i]-arr[j];
                }
                else
                {
                    if(diff>arr[j]-arr[i])
                    diff = arr[j]-arr[i];
                }
            }
        }
        cout<<diff<<endl;
    }
    
    

}