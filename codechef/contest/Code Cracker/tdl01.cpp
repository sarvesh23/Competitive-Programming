#include<iostream>
using namespace std;

int main()
{
    int n,x,sum;
    cin>>n>>x;
    sum=x;
    while(n--)
    {
        int h;
        cin>>h;
        sum+=h;
        
    }
    if(sum<25)
        cout<<"YES";
    else
        cout<<"NO";

}