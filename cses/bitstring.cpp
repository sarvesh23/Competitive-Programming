#include <iostream>
#include<math.h>
using namespace std;
#define ll long long int
int main()
{
    ll n ,t=1;
    cin>>n;
    for(int i=0;i<n;i++)
        t=2*t%((int)1e9+7);
    cout<<t;
}