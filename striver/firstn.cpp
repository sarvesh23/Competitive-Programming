#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{

    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    int s=sum(n);
    cout<<s;
    return 0;
}
