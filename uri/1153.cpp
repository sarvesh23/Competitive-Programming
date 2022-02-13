#include<iostream>
using namespace std;
int main()
{
    long int t,n;
    cin>>n;
    t=1;
    while(n!=1)
    {
        t=t*n;
        n--;
    }
    cout<<t<<endl;
}