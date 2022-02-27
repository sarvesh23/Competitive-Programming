#include<iostream>
using namespace std;
int main()
{
    int e,f,c;
    cin>>e>>f>>c;
    int t=e+f;
    int sum=0;
    while(t>=c)
    {
        
        sum+=t/c;
        t=t/c + t%c;
        
    }
    cout<<sum<<endl;
}