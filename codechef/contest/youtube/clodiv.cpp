#include<iostream>
using namespace std;
#define ll long long
int main()
{   
    ll a,b;
    cin>>a>>b;
    while(a%b!=0)
    {
        a--;
    }
    cout<<a;
}