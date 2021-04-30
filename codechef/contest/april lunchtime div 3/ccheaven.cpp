#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int l,count0=0,count1=0,f=0,div;
        string s;
        cin>>l;
        cin>>s;
        float per;
        for(long int i=1;i<=l;i++)
        {   
            if(s[i-1]=='1')
                count1++;
            if(s[i-1]=='0')
                count0++;
            per = count1 * 100 / i;
            if(per>=50)
            {
                cout<<"YES"<<endl;
                per=10000;
                break;
            }
        }
        if(per>=50&&per!=10000)
            cout<<"YES"<<endl;
        if(per<50&&per!=10000)
            cout<<"NO"<<endl;
        
         
    }
}