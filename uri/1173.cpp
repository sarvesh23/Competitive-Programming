#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int t;
    cin>>t;
    v.push_back(t);
    for(int i=1;i<10;i++)
    {
        v.push_back(v[i-1]*2);
    }
    for(int i=0;i<10;i++)
    {
        cout<<"N["<<i<<"] = "<<v[i]<<endl;
    }

}