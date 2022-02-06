#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[1000];
    cin>>n;
    int sum=0;
    while(n--)
    {
        int t;
        cin>>t;
        sum=sum+t;
        cout<<sum<<" ";
    }
    cout<<"\n";
}