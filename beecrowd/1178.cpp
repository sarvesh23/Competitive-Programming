#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double t;
    cin>>t;
    for(int i=0;i<100;i++)
    {
        cout<<std::fixed;
        cout<<std::setprecision(4);
       cout<<"N["<<i<<"] = "<<(t)<<endl;
       t=t/2;

    }
}