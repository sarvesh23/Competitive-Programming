
#include<iostream>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         ll k;
         cin>>k;
         int d0,d1;
         cin>>d0>>d1;
         int d2 = (d0+d1)%10;
         int d[4];
         d[0] = (d0+d1+d2)%10;
         d[1] = (2*d[0])%10;
         d[2] = (2*d[1])%10;
         d[3] = (2*d[2])%10;
         ll rem1 = (d0+d1+d2)%3,rem2,rem3=0;
         rem2 = (20*(((k-3)/4)%3))%3;
         ll x = (k-3)%4;
         if(x!=0)
         {
            for(int i=0; i<x; ++i)
            rem3+=d[i];
            rem3 = rem3%3;
         }
         else
             rem3 =0;
         if(k==2)
         {
             rem1 = (d0+d1)%3;
             rem2=0;
             rem3=0;
         }
         if((rem1+rem2+rem3)%3==0)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }
}

