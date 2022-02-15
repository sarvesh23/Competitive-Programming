#include<iostream>
using namespace std;

long long int fib(long long int n)
{
     unsigned long long int a0 = 0, a1 = 1, next;
  if (n == 0)
    return a0;
  else if (n == 1)
    return a1;
  else {
    for (int i = 2; i <= n; ++i) {
      next = a0 + a1;
      a0 = a1;
      a1 = next;
    }
    return a1;
  }

}
int main()
{
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int t;
        cin>>t;
        cout<<"Fib("<<t<<") = "<<fib(t)<<endl;
    }
}
