#include<iostream>
using namespace std;
#define ll long long
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ll a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<" "<<lcm(a,b);
}
