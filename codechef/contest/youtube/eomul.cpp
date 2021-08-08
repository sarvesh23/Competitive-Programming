#include<iostream>
using namespace std;
#define ll long
int main()
{
    ll n;
    cin>>n;
    if(n%3!=0)
        cout<<"-1";
    else if(n%3==0 && (n/3)%2==0)
        cout<<"1";
    else
        cout<<"0";
}