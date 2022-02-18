#include<iostream>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x;
    cin>>y;
    while(y<=x)
    {
        cin>>y;
    }
    int count=0;
    while(y>0)
    {
        y=y-x;
        x=x+1;
        count++;
    }

    cout<<count<<endl;
}