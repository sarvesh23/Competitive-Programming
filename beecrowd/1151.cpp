#include<iostream>
using namespace std;
int main()
{
    long long int a=0,b=1,fact;
    int n;
    cin>>n;

    if(n==1)
    {
        cout<<a<<endl;
    }
    else if(a==2)
    {
        cout<<a<<" "<<b<<endl;

    }
    else
    {
        cout<<a<<" "<<b;
        n=n-2;
        while(n>0)
        {   long long int c;
            c=a+b;
            a=b;
            b=c;
            cout<<" "<<c;
            n--;

        }
        cout<<endl;
    }
    return 0;
}