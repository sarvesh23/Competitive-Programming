#include<iostream>
using namespace std;
#define l1 long long
int main()
{
    l1 sum,n,i,t;
    cin>>n;
    sum = n*(n+1) /2;
    for(i=1;i<n;i++){
        cin>>t;
        sum=sum - t;
    }
    cout<<sum;
}
