#include<bits/stdc++.h>
using namespace std;
void reversearr(int arr[],int st,int en)
{

    if(st<en)
    {
        int t=arr[st];

        arr[st]=arr[en];
        arr[en]=t;
        reversearr(arr,st+1,en-1);
    }
    return ;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

    reversearr(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
