#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,x,diff;
        cin>>a>>b>>x;
        diff = b-a;
        cout<<(int)(diff/x)<<endl;
    }
    
}