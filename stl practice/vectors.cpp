// for loops and while loops
// stl -standard template library
// stacks ,queues ,LL 
// maps , unordered maps
// priority queue 
// pbds 
// sorting
// binary search
// next_permutation

// Question given an array of all 0s size of array will be n then 
// you will get q queries in each query we get 2 number 'L' and 'R' 
// increase all values from index from L to R by 1

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n,0);
    cout<<"Enter Number of queries";
    int q;
    cin>>q;
    while(q--)
    {
       int l,r;
       cin>>l>>r;
       a[l]++;
       if (r+1<n)
       {
           a[r+1]--;
       }
    } 
    //cumulative sum
    for(int i=1;i<n;i++)
    {
        a[i] += a[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}