#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{   long long int n,sum=0;
    cin>>n;
    vector<long long int> arr;
    for(long int i=0;i<n;i++)
    {
        long int val;
        cin>>val;
        arr.push_back(val);
        sum=(sum+val+1000000007)%1000000007;
    }
    long int q;
    cin>>q;
    while(q--)
    {   
        long long int rot;
        cin>>rot;
        
        sum=sum * 2%1000000007;
        
        cout<<sum<<endl;
    }
}