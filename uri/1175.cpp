#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    for(int i=0;i<20;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int t=19;
    for(int i=0;i<10;i++)
    {
        int n;
        n=arr[i];
        arr[i]=arr[t];
        arr[t]=n;
        t--;
    
    }
    for(int i=0;i<20;i++)
    {
        cout<<"N["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}