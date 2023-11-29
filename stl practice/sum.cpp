#include<iostream>
using namespace std;
int count=0;
int sum(int target,int level,int total)
{
    if(target==6 &&  total==0)
    count++;
    if(total==0)
    return 0;  
    else
    {
        return sum()
    }
}
int main()
{
    int arr[]={1,4,5,2};
    int k=0,s=0;
    for(int i=0;i<4;i++)
    {
        s=s+arr[0];
    }
    int val = sum(6,0,s);
    cout<<val;
    return 0;

}