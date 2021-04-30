#include<iostream>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,m,k,f;
        cin>>n>>m>>k;
        f=k;
        while(k)
        {
            if(n==1||m==1)
            {
                cout<<"\nYES";
                break;
            }
            else 
            {
                if(n>m)
                {
                    m=m-1;
                    k=k-n;
                }
                else
                {
                    
                }
            }
        }
    }
}