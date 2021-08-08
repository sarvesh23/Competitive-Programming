#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=10;
    while(n%i!=0)
    {
        i--;
    }
    cout<<i;
}