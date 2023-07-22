#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            cout<<a-b<<endl;
        }
        else
        {
            cout<<b-a<<endl;
        }
    }
    return 0;
}