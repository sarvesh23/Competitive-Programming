#include<iostream>

using namespace std;

int main()
{
  
    int t;
    cin>>t;
    for(int i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<(i%t)<<endl;
    
    }
}