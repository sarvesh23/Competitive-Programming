#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int n,f;
    cin>>n>>f;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
        if(t==f)
        {    cout<<"1";
            return 0;
        }   
    }
    cout<<"-1";
}