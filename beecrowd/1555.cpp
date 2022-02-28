#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        int r=9*x*x + y*y;
        int b=2*x*x + 25*y*y;
        int c=-100*x+y*y*y;
        if(r>b && r>c)
        {
            cout<<"Rafael ganhou"<<endl;
        }
        else if(b>r && b>c)
        {
            cout<<"Beto ganhou"<<endl;
        }
        else 
        {
            cout<<"Carlos ganhou"<<endl;
        }

    }
    
}