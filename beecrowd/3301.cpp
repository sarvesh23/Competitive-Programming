#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (b>a && b<c)
    cout<<"zezinho"<<endl;
else if( b<a &&  b>c)
    cout<<"zezinho"<<endl;
else if( c<a &&  c>b)
    cout<<"luisinho"<<endl;
else if (c>a && c<b)
    cout<<"luisinho"<<endl;
else
    cout<<"huguinho"<<endl;
}