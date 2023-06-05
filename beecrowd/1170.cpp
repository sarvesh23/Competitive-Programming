#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a;
        cin>>a;
        int count=0;
        while(a>1)
        {
            count++;
            a=a/2;
        }
        cout<<count<<" dias"<<endl;
    }
    return 0;
}