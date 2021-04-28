#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long int n ;
    vector<int> arr;
    cin>>n;
    for(long int i=1;i<=n;i++)
    {
        if(n%i==0)
        {   
            arr.push_back(i);
        }
    }
    cout<<arr.size()<<endl;
    for(auto i = arr.begin();i!=arr.end();i++)
        cout<<*i<<" ";
}