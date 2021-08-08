#include<iostream>
using namespace std;
#define l long 
int main()
{
    l n;
    cin>>n;
    n=n/10;
    if(n%10==7)
        cout<<"1";
    else
        cout<<"0";
}