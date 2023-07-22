#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if (a<=3)
        {
            cout<<"BRONZE"<<endl;

        }
        else if(a>3 and a<=6)
        {
            cout<<"SILVER"<<endl;
        }
        else if (a>6)
        {
            cout<<"GOLD"<<endl;
        }
    }
}