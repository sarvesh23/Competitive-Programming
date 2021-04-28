#include<iostream>
using namespace std;
int stack[100],top=-1;
void push(int t)
{
    top++;
    stack[top]=t; 
}
int main()
{
    int t,r;
    cin>>t;
    while(t--)
    {
        long long num,tmp,sum=0;
        cin>>num;
        tmp=num;
        while(tmp!=0)
        {
            r = tmp%10;
            tmp=tmp/10; 
            sum = sum*10 + r;
        }
        cout<<sum<<"\n";
    }
}