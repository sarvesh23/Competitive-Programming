#include<iostream>
using namespace std;
#define l1 long long int
int main()
{
    l1 n; //declaration
    cin>>n;
    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n = n*3+1;
            
        }
        
    }
    cout<<n;
}