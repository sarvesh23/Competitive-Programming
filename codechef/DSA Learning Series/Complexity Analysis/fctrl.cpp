#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while (t--)
    {
        long int n,co;
        co=0;
        cin>>n;
        while(n!=0)
        {
            co = co + n/5;
            n=n/5;
        }
       
        cout<<co<<endl;
    }
    
}