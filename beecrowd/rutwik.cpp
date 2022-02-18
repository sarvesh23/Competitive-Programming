#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int> arr;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int k;
    cin>>k;
    k=k-1;
    int count =0;
    for(int i=k;i<arr.size()-1;i++)
    {
        if(arr[i]<arr[i+1])
        {count++;}
        else{
            break;
        }
    }
    for(int i=k;i>0;i--)
    {
        if(arr[i]<arr[i-1])
        {count++;}
        else{
            break;
        }
    }
    cout<<count;
    return 0;

}