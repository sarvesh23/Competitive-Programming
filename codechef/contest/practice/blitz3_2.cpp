#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,sum;
        cin>>n>>a>>b;
        if(n%2==0)
        {
            sum = 2 * (n + 180);
            sum = sum - a - b;
        }
        else
        {
            sum = 2 * (n + 180);
            sum = sum - a - b;
        }
        cout<<sum<<endl;
    }   
}
