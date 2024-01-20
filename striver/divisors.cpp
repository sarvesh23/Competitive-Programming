/*Problem Statement: Given a number, print all the divisors of the number.
 A divisor is a number that gives the remainder as zero when divided.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        if(n%i==0)
            cout<<i<<" ";
    }

        return 0;
}
