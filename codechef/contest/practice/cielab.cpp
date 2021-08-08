#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=a-b;
    if(c%10==9)
    c=c-1;
    else 
    c=c+1;
    cout<<c;
}