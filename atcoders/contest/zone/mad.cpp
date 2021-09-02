#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace  std;
int main()
{
    long long int n;
    long long int pmax=1,smax=1,tmax=1,kmax=1,imax=1;
    cin>>n;
    while(n--)
    {
       long long int p,s,t,k,i;
        cin>>p>>s>>t>>k>>i;
        if(pmax<p)
            pmax=p;
        if(smax<s)
            smax=s;
        if(tmax<t)
            tmax=t;
        if(kmax<k)
            kmax=k;
        if(imax<i)
            imax=i;
    }
    vector<long long int> vec;
    vec.push_back(pmax);
    vec.push_back(smax);
    vec.push_back(tmax);
    vec.push_back(kmax);
    vec.push_back(imax);
    sort(vec.begin(),vec.end());
    cout<<vec[0];
}
