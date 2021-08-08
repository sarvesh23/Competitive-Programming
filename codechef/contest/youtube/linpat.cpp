#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=10,b=2,j=1;
    for(int i=1;i<=n;i++)
    {   
        if(i%2!=0)
            cout<<a*j<<" ";
        else
        {   cout<<b*j<<" "; 
            j++;
        }
    }
}