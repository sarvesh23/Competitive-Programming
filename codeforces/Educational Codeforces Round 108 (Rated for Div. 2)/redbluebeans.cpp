#include<iostream>
#define ll long long int 
using namespace std;

ll diff(ll a,ll b)
{
    if(a>b) 
        return a-b;
    else
        return b-a;
}
ll max(ll a,ll b)
{
    if(a>b) 
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a<b) 
        return a;
    else
        return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll r,b,d,maxx,minn,rem,div;
        cin>>r>>b>>d;
        maxx = max(r,b);
        minn = min(r,b);
       
        if(d!=0&&maxx-minn>d)
        {        div = maxx/d;
                 rem = maxx%d;
                if(diff(rem,div)<=d)
                    cout<<"\nYES";
                else
                    cout<<"\nNO";
        }
        else
        {
            if(diff(r,b)<=d)
                cout<<"YES";
            else
                cout<<"NO";
        }
    }
}