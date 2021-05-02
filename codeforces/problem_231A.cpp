#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int p,i=3,count1=0;
        while(i--)
        {
            cin>>p;
            if(p==1)
                count1++;
        }
        if(count1>=2)
            count++;
    }
    cout<<count;
}