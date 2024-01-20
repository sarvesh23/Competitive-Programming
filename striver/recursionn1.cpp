/*Print N to 1 using Recursion*/
#include<bits/stdc++.h>
using namespace std;
void nto1(int n)
{
    if(n<=0)
        return;
    else
        cout<<n<<endl ;
        nto1(n-1);
}
int main()
{
    int n;
    cin>>n;
    nto1(n);
    return 0;
}
