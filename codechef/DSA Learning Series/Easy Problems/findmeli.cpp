#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long int n,k,a,exist=-1;
    cin>>n>>k;
    while(n--)
    {
        cin>>a;
        if(a==k)
            exist=1;
    }   
    cout<<exist;
}