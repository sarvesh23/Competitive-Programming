#include<iostream>
#include<vector>
using namespace std;

#define ll long long

int main()
{
    vector<ll> arr;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        ll a;
        cin>>a;
        arr.push_back(a);
    }
    ll min=arr[0] , max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min= arr[i];
    }
    cout<<min<<" "<<max;
}