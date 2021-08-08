#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long int e,k,level=0;
        cin>>e>>k;
        while(e>0)
        {
            level++;
            e=e/k;
        }
        cout<<level<<endl;
    }
    
}