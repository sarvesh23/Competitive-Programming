#include<iostream>
#include<string>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,sa=0,an=0;
        cin>>n>>a>>b;
        while(n--)
        {
            string s;
            cin>>s;
            if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X')
            {
                sa=sa+a;
            }
            else 
            {
                an=an+b;
            }
        }
        if(sa>an)
            cout<<"\nSARTHAK";
        else if(an>sa)
            cout<<"\nANURADHA";
        else 
            cout<<"\nDRAW";
    }
}