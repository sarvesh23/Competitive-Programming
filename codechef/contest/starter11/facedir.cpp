#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int rem = n%4;
        if(rem==0)
        {
            cout<<"North"<<endl;
        }
        else if(rem==1)
        {
            cout<<"East"<<endl;

        }
        else if(rem==2)
        {
            cout<<"South"<<endl;

        }
        else{
            cout<<"West"<<endl;
        }
    }   
}