#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{   vector<int> a;
    for(int i=0;i<3;i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    cout<<a[1];
}