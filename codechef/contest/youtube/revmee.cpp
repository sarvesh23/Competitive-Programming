#include<iostream>
#include<vector>
using namespace std;
#define ll long

int main()
{
    vector<int> n;
    int l;
    cin>>l;
    for(int i=0;i<l;i++)
    {
        int t;
        cin>>t;
        n.push_back(t);
    }
    l=l-1;
    for(l;l>=0;l--)
    {
        cout<<n[l]<<" ";
    }
}