#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a[12][12];
    char b;
    int count=0;
    cin>>b;
    float sum=0.0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i>j)
            {
                sum=sum+a[i][j];
                count++;
            }
        }
    }
    if(b=='S')
    {
        cout<<std::fixed;
        cout<<std::setprecision(1);
        cout<<sum<<endl;
    }
    if(b=='M')
    {
        cout<<std::fixed;
        cout<<std::setprecision(1);
        cout<<sum/count<<endl;
    }
    return 0;
}