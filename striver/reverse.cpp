#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int t=0;
    while(n!=0)
    {
        t=t*10+n%10;
        n/=10;
    }
    cout<<t;
}
