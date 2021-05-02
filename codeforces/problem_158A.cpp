#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    set<int> a;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {   int t;
        cin>>t;
        arr.push_back(t);
        a.insert(t);
    }
    int count = 0;
    if(k<=a.size())
    {   int val = a[k-1];
        for(int i=0;i<n;i++)
        {   if(arr[i]>=val&&arr[i]!=0)
                count++;
        }
    }
    if(k>a.size())
        count = 0;
    cout<<count;
}