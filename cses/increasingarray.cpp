#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
#define l1 long long
int main()
{
    l1 int n;
    cin>>n;
    int mx= 0;
    l1 ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mx= max(x,mx);
        ans+=mx-x;
    }
    cout<<ans;
}