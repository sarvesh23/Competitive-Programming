#include<bits/stdc++.h>
#define ll long long

int main()
{
    ll n,i,x;
    cin>>n;
    set<int> s;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
        
    }
    cout<<s.size();
}