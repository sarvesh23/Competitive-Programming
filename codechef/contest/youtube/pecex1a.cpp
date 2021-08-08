#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
        vector<int> a;
        for(int i=0;i<5;i++)
        {
            int t;
            cin>>t;
            a.push_back(t);
        }
        sort(a.begin(),a.end());
        cout<<a[2];
    }
}